#include <tree_sitter/parser.h>
#include <ctype.h>
#include <stdio.h>

enum TokenType {
	CMD_IDENTIFIER,
	HELP_COMMAND,
	QUESTION_MARK_IDENTIFIER,
	ENV_IDENTIFIER,
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
	return ch == '*' || ch == '(' || ch == '*' || ch == '@' || ch == '|';
}

static bool is_start_of_command(const int32_t ch) {
	return isalpha (ch) || ch == '$' || ch == '?' || ch == ':' || ch == '+' ||
		ch == '=' || ch == '/' || is_special_start (ch);
}

static bool is_mid_command(const int32_t ch) {
	return isalnum(ch) ||  ch == '$' || ch == '?' || ch == '.' || ch == '!' ||
		ch == ':' || ch == '+' || ch == '=' || ch == '/' || ch == '*' ||
		ch == '-' || ch == ',';
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
		char last_char, first_char;
		if (!is_start_of_command (lexer->lookahead)) {
			return scan_number (lexer, valid_symbols);
		}
		first_char = last_char = lexer->lookahead;
		lexer->advance (lexer, false);
		while (is_mid_command (lexer->lookahead)) {
			last_char = lexer->lookahead;
			lexer->advance (lexer, false);
			one_char_cmd = false;
		}
		if (last_char == '?') {
			lexer->result_symbol = one_char_cmd? QUESTION_MARK_IDENTIFIER: HELP_COMMAND;
		} else {
			if (is_special_start (first_char)) {
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
