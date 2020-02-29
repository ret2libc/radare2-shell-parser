#include <tree_sitter/parser.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
	CMD_IDENTIFIER,
	HELP_COMMAND,
	FILE_DESCRIPTOR,
	REPEAT_NUMBER,
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
	if (!valid_symbols[FILE_DESCRIPTOR] && !valid_symbols[REPEAT_NUMBER]) {
		return false;
	}

	// skip spaces at the beginning
	while (isspace (lexer->lookahead)) {
		lexer->advance (lexer, true);
	}

	if (!isdigit (lexer->lookahead)) {
		return false;
	}
	bool first_zero = lexer->lookahead == '0';
	lexer->advance (lexer, false);
	if (first_zero && valid_symbols[REPEAT_NUMBER] && (lexer->lookahead == 'x' || lexer->lookahead == 'b')) {
		return false;
	}
	for (;;) {
		if (isdigit (lexer->lookahead)) {
			lexer->advance (lexer, false);
		} else if (valid_symbols[FILE_DESCRIPTOR] && lexer->lookahead != '>') {
			return false;
		} else {
			break;
		}
	}
	if (valid_symbols[FILE_DESCRIPTOR] && lexer->lookahead == '>') {
		lexer->result_symbol = FILE_DESCRIPTOR;
		return true;
	} else if (valid_symbols[REPEAT_NUMBER]) {
		lexer->result_symbol = REPEAT_NUMBER;
		return true;
	}
	return false;
}

bool tree_sitter_r2cmd_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
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
		lexer->lookahead != '\\') {
		lexer->result_symbol = CONCAT;
		return true;
	}
        if (valid_symbols[CMD_IDENTIFIER] || valid_symbols[HELP_COMMAND] ||
	    valid_symbols[REPEAT_NUMBER] || valid_symbols[INTERPRETER_IDENTIFIER]) {
		bool one_char_cmd = true;
		bool is_env_identifier = true;
		bool is_at_command = false;
		bool is_int_identifier = valid_symbols[INTERPRETER_IDENTIFIER];
		char last_char, first_char;
		const char *env_identifier = "env";
		const char *int_identifier = "#!";
		int i_env = 0, i_int = 0;

		while (isspace (lexer->lookahead)) {
			lexer->advance (lexer, true);
		}

		if (!is_start_of_command (lexer->lookahead)) {
			return scan_number (lexer, valid_symbols);
		}
		if (!valid_symbols[CMD_IDENTIFIER] && !valid_symbols[HELP_COMMAND] &&
		    !valid_symbols[INTERPRETER_IDENTIFIER]) {
			return false;
		}
		is_env_identifier &= lexer->lookahead == env_identifier[i_env++];
		is_int_identifier &= lexer->lookahead == int_identifier[i_int++];
		first_char = last_char = lexer->lookahead;
		is_at_command = first_char == '@';
		lexer->advance (lexer, false);
		while (is_mid_command (lexer->lookahead, is_at_command)) {
			last_char = lexer->lookahead;
			lexer->advance (lexer, false);
			one_char_cmd = false;
			is_env_identifier &= i_env < strlen (env_identifier) && last_char == env_identifier[i_env++];
			is_int_identifier &= i_int >= strlen (int_identifier) || last_char == int_identifier[i_int++];
		}
		is_env_identifier &= i_env == strlen (env_identifier);
		is_int_identifier &= i_int >= strlen (int_identifier);
		if (last_char == '?') {
			if (one_char_cmd) {
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
