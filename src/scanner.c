#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
	EOF,
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

bool tree_sitter_r2cmd_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
	if (valid_symbols[EOF] && lexer->lookahead == '\0') {
		lexer->result_symbol = EOF;
		return true;
	}

	return false;
}
