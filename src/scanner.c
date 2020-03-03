#include <tree_sitter/parser.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
	CMD_IDENTIFIER,
	HELP_COMMAND,
	FILE_DESCRIPTOR,
	INTERPRETER_IDENTIFIER,
	EQ_SEP_CONCAT,
	CONCAT,
	MACRO_BEGIN,
	MACRO_END,
};

struct r2_scanner {
	int macro_depth;
};

void *tree_sitter_r2cmd_external_scanner_create() {
	struct r2_scanner *scan = malloc (sizeof (struct r2_scanner));
	scan->macro_depth = 0;
	return scan;
}

void tree_sitter_r2cmd_external_scanner_destroy(void *payload) {
	free (payload);
}

unsigned tree_sitter_r2cmd_external_scanner_serialize(void *payload, char *buffer) {
	struct r2_scanner *scan = (struct r2_scanner *)payload;
	*(int *)buffer = scan->macro_depth;
	return sizeof (struct r2_scanner);
}

void tree_sitter_r2cmd_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
	if (length != sizeof (struct r2_scanner)) {
		return;
	}
	struct r2_scanner *scan = (struct r2_scanner *)payload;
	scan->macro_depth = *(int *)buffer;
}

static bool is_special_start(const int32_t ch) {
	return ch == '*' || ch == '(' || ch == '*' || ch == '@' || ch == '|' ||
		ch == '.' || ch == '|' || ch == '%' || ch == '~';
}

static bool is_start_of_command(const int32_t ch) {
	return isalpha (ch) || ch == '$' || ch == '?' || ch == ':' || ch == '+' ||
		ch == '=' || ch == '/' || ch == '_' || ch == '#' || is_special_start (ch);
}

static bool is_mid_command(const int32_t ch, bool is_at_command) {
	return isalnum(ch) ||  ch == '$' || ch == '?' || ch == '.' || ch == '!' ||
		ch == ':' || ch == '+' || ch == '=' || ch == '/' || ch == '*' ||
		ch == '-' || ch == ',' || (is_at_command && ch == '@');
}

static bool is_macro_begin(const int32_t ch) {
	return ch != '\0' && ch != '#' && ch != '|' && ch != '>' &&
		ch != ';' && ch != '(' && ch != ')' && ch != '`' &&
		ch != '~' && ch != '@' && ch != '\\' && !isspace(ch);
}

static bool is_concat(const int32_t ch, struct r2_scanner *scan) {
	return ch != '\0' && !isspace(ch) && ch != '#' && ch != '@' &&
		ch != '|' && ch != '>' && ch != ';' && ch != '(' &&
		ch != ')' && ch != '`' && ch != '~' &&
		(scan->macro_depth <= 0 || ch != ',') &&
		ch != '\\';
}

static bool scan_number(TSLexer *lexer, const bool *valid_symbols) {
	if (!valid_symbols[FILE_DESCRIPTOR]) {
		return false;
	}

	// skip spaces at the beginning
	while (isspace (lexer->lookahead)) {
		lexer->advance (lexer, true);
	}

	if (!isdigit (lexer->lookahead)) {
		return false;
	}
	lexer->advance (lexer, false);
	for (;;) {
		if (isdigit (lexer->lookahead)) {
			lexer->advance (lexer, false);
		} else if (lexer->lookahead != '>') {
			return false;
		} else {
			break;
		}
	}
	if (lexer->lookahead == '>') {
		lexer->result_symbol = FILE_DESCRIPTOR;
		return true;
	}
	return false;
}

bool tree_sitter_r2cmd_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
	struct r2_scanner *scan = (struct r2_scanner *)payload;
	// FIXME: /* in the shell should become a multiline comment
	if (valid_symbols[MACRO_BEGIN] && is_macro_begin (lexer->lookahead)) {
		lexer->result_symbol = MACRO_BEGIN;
		scan->macro_depth++;
		return true;
	}
	if (valid_symbols[MACRO_END] && lexer->lookahead == ')' && scan->macro_depth > 0) {
		lexer->advance (lexer, false);
		lexer->result_symbol = MACRO_END;
                scan->macro_depth--;
                return true;
	}
	if (valid_symbols[EQ_SEP_CONCAT] && !isspace(lexer->lookahead) && lexer->lookahead != '=' && lexer->lookahead != '\0') {
		lexer->result_symbol = EQ_SEP_CONCAT;
		return true;
	}
	if (valid_symbols[CONCAT] && is_concat (lexer->lookahead, scan)) {
		lexer->result_symbol = CONCAT;
		return true;
	}
        if (valid_symbols[CMD_IDENTIFIER] || valid_symbols[HELP_COMMAND] ||
	    valid_symbols[INTERPRETER_IDENTIFIER]) {
		int id_len = 0;
		bool is_env_identifier = true;
		bool is_comment = false;
		bool is_at_command = false;
		bool is_int_identifier = valid_symbols[INTERPRETER_IDENTIFIER];
		char last_char, first_char, before_last_char;
		const char *env_identifier = "env";
		const char *comm_identifier = "/*";
		int i_env = 0, i_comm = 0;

		while (isspace (lexer->lookahead)) {
			lexer->advance (lexer, true);
		}

		if (!is_start_of_command (lexer->lookahead)) {
			return false;
		}
		first_char = last_char = before_last_char = lexer->lookahead;
                is_env_identifier &= first_char == env_identifier[i_env++];
                is_int_identifier &= first_char == '#';
                is_comment = first_char == comm_identifier[i_comm++];
		is_at_command = first_char == '@';
		id_len++;
		lexer->advance (lexer, false);
		while (is_mid_command (lexer->lookahead, is_at_command)) {
			before_last_char = last_char;
			last_char = lexer->lookahead;
			lexer->advance (lexer, false);
			id_len++;
			is_env_identifier &= i_env < strlen (env_identifier) && last_char == env_identifier[i_env++];
                        is_comment &= i_comm < strlen(comm_identifier) && last_char == comm_identifier[i_comm++];
                }
		is_env_identifier &= i_env == strlen (env_identifier);
		is_comment &= i_comm == strlen (comm_identifier);
		is_int_identifier &= id_len > 1;
		if (is_comment) {
			return false;
		}
		if (last_char == '?' || (id_len >= 2 && before_last_char == '?' && last_char == '*')) {
			if (id_len == 1) {
				return false;
			}
			lexer->result_symbol = HELP_COMMAND;
		} else {
			if (is_special_start (first_char) || is_env_identifier || is_at_command) {
				return false;
			}
			if (is_int_identifier && valid_symbols[INTERPRETER_IDENTIFIER]) {
				lexer->result_symbol = INTERPRETER_IDENTIFIER;
			} else if (first_char != '#' && valid_symbols[CMD_IDENTIFIER]) {
				lexer->result_symbol = CMD_IDENTIFIER;
			} else {
				return false;
			}
		}
		return true;
	}
	if (valid_symbols[FILE_DESCRIPTOR]) {
		return scan_number (lexer, valid_symbols);
	}
	return false;
}
