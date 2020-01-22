#include <tree_sitter/parser.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum TokenType {
	CMD_IDENTIFIER,
	HELP_COMMAND,
	FILE_DESCRIPTOR,
	REPEAT_NUMBER,
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
	return ch == '*' || ch == '(' || ch == '*' || ch == '@' || ch == '|' || ch == '.';
}

static bool is_start_of_command(const int32_t ch) {
	return isalpha (ch) || ch == '$' || ch == '?' || ch == ':' || ch == '+' ||
		ch == '=' || ch == '/' || is_special_start (ch);
}

static bool is_mid_command(const int32_t ch) {
	return isalnum(ch) ||  ch == '$' || ch == '?' || ch == '.' || ch == '!' ||
		ch == ':' || ch == '+' || ch == '=' || ch == '/' || ch == '*' ||
		ch == '-' || ch == ',' || ch == '@';
}

static bool scan_number(TSLexer *lexer, const bool *valid_symbols) {
	if (!valid_symbols[FILE_DESCRIPTOR] && !valid_symbols[REPEAT_NUMBER]) {
		return false;
	}

	if (!isdigit (lexer->lookahead)) {
		return false;
	}
	lexer->advance (lexer, false);
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
	if (valid_symbols[CMD_IDENTIFIER] || valid_symbols[HELP_COMMAND] || valid_symbols[REPEAT_NUMBER]) {
		bool one_char_cmd = true;
		bool is_env_identifier = true;
		bool contains_at = false;
		char last_char, first_char;
		const char *env_identifier = "env";
		int i_env = 0;

		if (!is_start_of_command (lexer->lookahead)) {
			return scan_number (lexer, valid_symbols);
		}
		if (!valid_symbols[CMD_IDENTIFIER] && !valid_symbols[HELP_COMMAND]) {
			return false;
		}
		is_env_identifier &= lexer->lookahead == env_identifier[i_env++];
		first_char = last_char = lexer->lookahead;
		contains_at |= first_char == '@';
		lexer->advance (lexer, false);
		while (is_mid_command (lexer->lookahead)) {
			last_char = lexer->lookahead;
			contains_at |= last_char == '@';
			is_env_identifier &= i_env < strlen (env_identifier) && lexer->lookahead == env_identifier[i_env++];
			lexer->advance (lexer, false);
			one_char_cmd = false;
		}
		is_env_identifier &= i_env == strlen (env_identifier);
		if (last_char == '?') {
			if (one_char_cmd) {
				return false;
			}
			lexer->result_symbol = HELP_COMMAND;
		} else {
			if (is_special_start (first_char) || is_env_identifier || contains_at) {
				return false;
			}
			lexer->result_symbol = CMD_IDENTIFIER;
		}
		return true;
	} else if (valid_symbols[FILE_DESCRIPTOR]) {
		return scan_number (lexer, valid_symbols);
	}
	return false;
}
