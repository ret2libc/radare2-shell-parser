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
};

void *tree_sitter_r2cmd_external_scanner_create() {
	return NULL;
}

void tree_sitter_r2cmd_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_r2cmd_external_scanner_serialize(void *payload, char *buffer) {
	return 0;
}

void tree_sitter_r2cmd_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
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
	// FIXME: /* in the shell should become a multiline comment
	/* printf("lookahead (%d) = '%c'\n", lexer->get_column (lexer), lexer->lookahead); */
	/* printf("EQ_SEP_CONCAT = %d, CMD_IDENTIFIER = %d, REPEAT = %d, FILE_DESC = %d\n", */
	/*        valid_symbols[EQ_SEP_CONCAT], */
	/*        valid_symbols[CMD_IDENTIFIER], */
	/*        valid_symbols[REPEAT_NUMBER], */
	/* 	valid_symbols[FILE_DESCRIPTOR]); */
	if (valid_symbols[EQ_SEP_CONCAT] && !isspace(lexer->lookahead) && lexer->lookahead != '=' && lexer->lookahead != '\0') {
		lexer->result_symbol = EQ_SEP_CONCAT;
		return true;
	}
	if (valid_symbols[CONCAT] &&
		lexer->lookahead != '\0' &&
		!isspace(lexer->lookahead) &&
		lexer->lookahead != '#' &&
		lexer->lookahead != '@' &&
		lexer->lookahead != '|' &&
		lexer->lookahead != '>' &&
		lexer->lookahead != ';' &&
		lexer->lookahead != '(' &&
		lexer->lookahead != ')' &&
		lexer->lookahead != '`' &&
		lexer->lookahead != '~' &&
		lexer->lookahead != ',' &&
		lexer->lookahead != '\\') {
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
