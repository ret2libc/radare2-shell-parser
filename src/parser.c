#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 66
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_AT_AT = 1,
  anon_sym_AT_ATdbt = 2,
  anon_sym_AT_ATdbta = 3,
  anon_sym_AT_ATdbtb = 4,
  anon_sym_AT_ATdbts = 5,
  anon_sym_AT = 6,
  anon_sym_AT_BANG = 7,
  anon_sym_AT_LPAREN = 8,
  anon_sym_ATa_COLON = 9,
  anon_sym_ATb_COLON = 10,
  anon_sym_ATB_COLON = 11,
  anon_sym_ATe_COLON = 12,
  anon_sym_COMMA = 13,
  anon_sym_ATF_COLON = 14,
  anon_sym_ATi_COLON = 15,
  anon_sym_ATk_COLON = 16,
  anon_sym_ATo_COLON = 17,
  anon_sym_ATr_COLON = 18,
  anon_sym_ATf_COLON = 19,
  anon_sym_ATs_COLON = 20,
  anon_sym_ATx_COLON = 21,
  anon_sym_GT = 22,
  anon_sym_1_GT = 23,
  anon_sym_2_GT = 24,
  anon_sym_H_GT = 25,
  anon_sym_GT_GT = 26,
  anon_sym_1_GT_GT = 27,
  anon_sym_2_GT_GT = 28,
  sym_cmd_identifier = 29,
  sym_arg_identifier = 30,
  sym_number = 31,
  sym__comment = 32,
  anon_sym_LF = 33,
  anon_sym_CR = 34,
  anon_sym_SEMI = 35,
  sym_eof = 36,
  sym_commands = 37,
  sym__command = 38,
  sym__simple_command = 39,
  sym__tmp_command = 40,
  sym__iter_command = 41,
  sym_iter_flags_command = 42,
  sym_iter_dbta_command = 43,
  sym_iter_dbtb_command = 44,
  sym_iter_dbts_command = 45,
  sym_tmp_seek_command = 46,
  sym_tmp_blksz_command = 47,
  sym_tmp_fromto_command = 48,
  sym_tmp_arch_command = 49,
  sym_tmp_bits_command = 50,
  sym_tmp_nthi_command = 51,
  sym_tmp_eval_command = 52,
  sym_tmp_fs_command = 53,
  sym_tmp_reli_command = 54,
  sym_tmp_kuery_command = 55,
  sym_tmp_fd_command = 56,
  sym_tmp_reg_command = 57,
  sym_tmp_file_command = 58,
  sym_tmp_string_command = 59,
  sym_tmp_hex_command = 60,
  sym_arged_command = 61,
  sym_repeat_command = 62,
  sym_out_redirect_command = 63,
  sym_err_redirect_command = 64,
  sym_html_redirect_command = 65,
  sym_out_append_redirect_command = 66,
  sym_err_append_redirect_command = 67,
  sym_arg = 68,
  aux_sym_commands_repeat1 = 69,
  aux_sym_tmp_eval_command_repeat1 = 70,
  aux_sym_arged_command_repeat1 = 71,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_ATdbt] = "@@dbt",
  [anon_sym_AT_ATdbta] = "@@dbta",
  [anon_sym_AT_ATdbtb] = "@@dbtb",
  [anon_sym_AT_ATdbts] = "@@dbts",
  [anon_sym_AT] = "@",
  [anon_sym_AT_BANG] = "@!",
  [anon_sym_AT_LPAREN] = "@(",
  [anon_sym_ATa_COLON] = "@a:",
  [anon_sym_ATb_COLON] = "@b:",
  [anon_sym_ATB_COLON] = "@B:",
  [anon_sym_ATe_COLON] = "@e:",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATF_COLON] = "@F:",
  [anon_sym_ATi_COLON] = "@i:",
  [anon_sym_ATk_COLON] = "@k:",
  [anon_sym_ATo_COLON] = "@o:",
  [anon_sym_ATr_COLON] = "@r:",
  [anon_sym_ATf_COLON] = "@f:",
  [anon_sym_ATs_COLON] = "@s:",
  [anon_sym_ATx_COLON] = "@x:",
  [anon_sym_GT] = ">",
  [anon_sym_1_GT] = "1>",
  [anon_sym_2_GT] = "2>",
  [anon_sym_H_GT] = "H>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_1_GT_GT] = "1>>",
  [anon_sym_2_GT_GT] = "2>>",
  [sym_cmd_identifier] = "cmd_identifier",
  [sym_arg_identifier] = "arg_identifier",
  [sym_number] = "number",
  [sym__comment] = "_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_SEMI] = ";",
  [sym_eof] = "eof",
  [sym_commands] = "commands",
  [sym__command] = "_command",
  [sym__simple_command] = "_simple_command",
  [sym__tmp_command] = "_tmp_command",
  [sym__iter_command] = "_iter_command",
  [sym_iter_flags_command] = "iter_flags_command",
  [sym_iter_dbta_command] = "iter_dbta_command",
  [sym_iter_dbtb_command] = "iter_dbtb_command",
  [sym_iter_dbts_command] = "iter_dbts_command",
  [sym_tmp_seek_command] = "tmp_seek_command",
  [sym_tmp_blksz_command] = "tmp_blksz_command",
  [sym_tmp_fromto_command] = "tmp_fromto_command",
  [sym_tmp_arch_command] = "tmp_arch_command",
  [sym_tmp_bits_command] = "tmp_bits_command",
  [sym_tmp_nthi_command] = "tmp_nthi_command",
  [sym_tmp_eval_command] = "tmp_eval_command",
  [sym_tmp_fs_command] = "tmp_fs_command",
  [sym_tmp_reli_command] = "tmp_reli_command",
  [sym_tmp_kuery_command] = "tmp_kuery_command",
  [sym_tmp_fd_command] = "tmp_fd_command",
  [sym_tmp_reg_command] = "tmp_reg_command",
  [sym_tmp_file_command] = "tmp_file_command",
  [sym_tmp_string_command] = "tmp_string_command",
  [sym_tmp_hex_command] = "tmp_hex_command",
  [sym_arged_command] = "arged_command",
  [sym_repeat_command] = "repeat_command",
  [sym_out_redirect_command] = "out_redirect_command",
  [sym_err_redirect_command] = "err_redirect_command",
  [sym_html_redirect_command] = "html_redirect_command",
  [sym_out_append_redirect_command] = "out_append_redirect_command",
  [sym_err_append_redirect_command] = "err_append_redirect_command",
  [sym_arg] = "arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym_arged_command_repeat1] = "arged_command_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbtb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATdbts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATa_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATb_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATB_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATe_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATF_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATi_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATk_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATo_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATr_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATf_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATx_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_cmd_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_eof] = {
    .visible = true,
    .named = true,
  },
  [sym_commands] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_command] = {
    .visible = false,
    .named = true,
  },
  [sym__tmp_command] = {
    .visible = false,
    .named = true,
  },
  [sym__iter_command] = {
    .visible = false,
    .named = true,
  },
  [sym_iter_flags_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_dbta_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_dbtb_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_dbts_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_seek_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_blksz_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_fromto_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_arch_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_bits_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_nthi_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_eval_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_fs_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_reli_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_kuery_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_fd_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_reg_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_file_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_string_command] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_hex_command] = {
    .visible = true,
    .named = true,
  },
  [sym_arged_command] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_command] = {
    .visible = true,
    .named = true,
  },
  [sym_out_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_err_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_html_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_out_append_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_err_append_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_commands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tmp_eval_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arged_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(30);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead == '2') ADVANCE(75);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          ('=' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(30);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(30);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(83);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(25);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == '\\') SKIP(29)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(78);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == '@') ADVANCE(31);
      if (lookahead == 'B') ADVANCE(12);
      if (lookahead == 'F') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'k') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_cmd_identifier);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_cmd_identifier);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_cmd_identifier);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_cmd_identifier);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '2') ADVANCE(71);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '\t') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(11);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(11);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '>') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '>') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '>') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(77);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(63);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(64);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 6, .external_lex_state = 1},
  [3] = {.lex_state = 6, .external_lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 6, .external_lex_state = 1},
  [7] = {.lex_state = 8, .external_lex_state = 1},
  [8] = {.lex_state = 8, .external_lex_state = 1},
  [9] = {.lex_state = 8, .external_lex_state = 1},
  [10] = {.lex_state = 8, .external_lex_state = 1},
  [11] = {.lex_state = 6, .external_lex_state = 1},
  [12] = {.lex_state = 8, .external_lex_state = 1},
  [13] = {.lex_state = 8, .external_lex_state = 1},
  [14] = {.lex_state = 8, .external_lex_state = 1},
  [15] = {.lex_state = 8, .external_lex_state = 1},
  [16] = {.lex_state = 8, .external_lex_state = 1},
  [17] = {.lex_state = 8, .external_lex_state = 1},
  [18] = {.lex_state = 8, .external_lex_state = 1},
  [19] = {.lex_state = 8, .external_lex_state = 1},
  [20] = {.lex_state = 8, .external_lex_state = 1},
  [21] = {.lex_state = 8, .external_lex_state = 1},
  [22] = {.lex_state = 8, .external_lex_state = 1},
  [23] = {.lex_state = 8, .external_lex_state = 1},
  [24] = {.lex_state = 8, .external_lex_state = 1},
  [25] = {.lex_state = 8, .external_lex_state = 1},
  [26] = {.lex_state = 8, .external_lex_state = 1},
  [27] = {.lex_state = 8, .external_lex_state = 1},
  [28] = {.lex_state = 8, .external_lex_state = 1},
  [29] = {.lex_state = 8, .external_lex_state = 1},
  [30] = {.lex_state = 8, .external_lex_state = 1},
  [31] = {.lex_state = 8, .external_lex_state = 1},
  [32] = {.lex_state = 8, .external_lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 8, .external_lex_state = 1},
  [35] = {.lex_state = 8, .external_lex_state = 1},
  [36] = {.lex_state = 8, .external_lex_state = 1},
  [37] = {.lex_state = 8, .external_lex_state = 1},
  [38] = {.lex_state = 8, .external_lex_state = 1},
  [39] = {.lex_state = 8, .external_lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 7},
};

enum {
  ts_external_token_eof = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_eof] = sym_eof,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_eof] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_ATdbt] = ACTIONS(1),
    [anon_sym_AT_ATdbta] = ACTIONS(1),
    [anon_sym_AT_ATdbtb] = ACTIONS(1),
    [anon_sym_AT_ATdbts] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_BANG] = ACTIONS(1),
    [anon_sym_AT_LPAREN] = ACTIONS(1),
    [anon_sym_ATa_COLON] = ACTIONS(1),
    [anon_sym_ATb_COLON] = ACTIONS(1),
    [anon_sym_ATB_COLON] = ACTIONS(1),
    [anon_sym_ATe_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATF_COLON] = ACTIONS(1),
    [anon_sym_ATi_COLON] = ACTIONS(1),
    [anon_sym_ATk_COLON] = ACTIONS(1),
    [anon_sym_ATo_COLON] = ACTIONS(1),
    [anon_sym_ATr_COLON] = ACTIONS(1),
    [anon_sym_ATf_COLON] = ACTIONS(1),
    [anon_sym_ATs_COLON] = ACTIONS(1),
    [anon_sym_ATx_COLON] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_1_GT] = ACTIONS(1),
    [anon_sym_2_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_1_GT_GT] = ACTIONS(1),
    [anon_sym_2_GT_GT] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_eof] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(64),
    [sym__command] = STATE(35),
    [sym__simple_command] = STATE(24),
    [sym__tmp_command] = STATE(24),
    [sym__iter_command] = STATE(24),
    [sym_iter_flags_command] = STATE(24),
    [sym_iter_dbta_command] = STATE(24),
    [sym_iter_dbtb_command] = STATE(24),
    [sym_iter_dbts_command] = STATE(24),
    [sym_tmp_seek_command] = STATE(24),
    [sym_tmp_blksz_command] = STATE(24),
    [sym_tmp_fromto_command] = STATE(24),
    [sym_tmp_arch_command] = STATE(24),
    [sym_tmp_bits_command] = STATE(24),
    [sym_tmp_nthi_command] = STATE(24),
    [sym_tmp_eval_command] = STATE(24),
    [sym_tmp_fs_command] = STATE(24),
    [sym_tmp_reli_command] = STATE(24),
    [sym_tmp_kuery_command] = STATE(24),
    [sym_tmp_fd_command] = STATE(24),
    [sym_tmp_reg_command] = STATE(24),
    [sym_tmp_file_command] = STATE(24),
    [sym_tmp_string_command] = STATE(24),
    [sym_tmp_hex_command] = STATE(24),
    [sym_arged_command] = STATE(24),
    [sym_repeat_command] = STATE(24),
    [sym_out_redirect_command] = STATE(35),
    [sym_err_redirect_command] = STATE(35),
    [sym_html_redirect_command] = STATE(35),
    [sym_out_append_redirect_command] = STATE(35),
    [sym_err_append_redirect_command] = STATE(35),
    [aux_sym_commands_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_cmd_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [2] = {
    [sym_arg] = STATE(6),
    [aux_sym_arged_command_repeat1] = STATE(6),
    [anon_sym_AT_AT] = ACTIONS(11),
    [anon_sym_AT_ATdbt] = ACTIONS(11),
    [anon_sym_AT_ATdbta] = ACTIONS(11),
    [anon_sym_AT_ATdbtb] = ACTIONS(11),
    [anon_sym_AT_ATdbts] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(11),
    [anon_sym_AT_BANG] = ACTIONS(11),
    [anon_sym_AT_LPAREN] = ACTIONS(11),
    [anon_sym_ATa_COLON] = ACTIONS(11),
    [anon_sym_ATb_COLON] = ACTIONS(11),
    [anon_sym_ATB_COLON] = ACTIONS(11),
    [anon_sym_ATe_COLON] = ACTIONS(11),
    [anon_sym_ATF_COLON] = ACTIONS(11),
    [anon_sym_ATi_COLON] = ACTIONS(11),
    [anon_sym_ATk_COLON] = ACTIONS(11),
    [anon_sym_ATo_COLON] = ACTIONS(11),
    [anon_sym_ATr_COLON] = ACTIONS(11),
    [anon_sym_ATf_COLON] = ACTIONS(11),
    [anon_sym_ATs_COLON] = ACTIONS(11),
    [anon_sym_ATx_COLON] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_1_GT] = ACTIONS(11),
    [anon_sym_2_GT] = ACTIONS(11),
    [anon_sym_H_GT] = ACTIONS(11),
    [anon_sym_GT_GT] = ACTIONS(11),
    [anon_sym_1_GT_GT] = ACTIONS(11),
    [anon_sym_2_GT_GT] = ACTIONS(11),
    [sym_arg_identifier] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_CR] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [sym_eof] = ACTIONS(15),
  },
  [3] = {
    [sym_arg] = STATE(3),
    [aux_sym_arged_command_repeat1] = STATE(3),
    [anon_sym_AT_AT] = ACTIONS(17),
    [anon_sym_AT_ATdbt] = ACTIONS(17),
    [anon_sym_AT_ATdbta] = ACTIONS(17),
    [anon_sym_AT_ATdbtb] = ACTIONS(17),
    [anon_sym_AT_ATdbts] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_AT_BANG] = ACTIONS(17),
    [anon_sym_AT_LPAREN] = ACTIONS(17),
    [anon_sym_ATa_COLON] = ACTIONS(17),
    [anon_sym_ATb_COLON] = ACTIONS(17),
    [anon_sym_ATB_COLON] = ACTIONS(17),
    [anon_sym_ATe_COLON] = ACTIONS(17),
    [anon_sym_ATF_COLON] = ACTIONS(17),
    [anon_sym_ATi_COLON] = ACTIONS(17),
    [anon_sym_ATk_COLON] = ACTIONS(17),
    [anon_sym_ATo_COLON] = ACTIONS(17),
    [anon_sym_ATr_COLON] = ACTIONS(17),
    [anon_sym_ATf_COLON] = ACTIONS(17),
    [anon_sym_ATs_COLON] = ACTIONS(17),
    [anon_sym_ATx_COLON] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_1_GT] = ACTIONS(17),
    [anon_sym_2_GT] = ACTIONS(17),
    [anon_sym_H_GT] = ACTIONS(17),
    [anon_sym_GT_GT] = ACTIONS(17),
    [anon_sym_1_GT_GT] = ACTIONS(17),
    [anon_sym_2_GT_GT] = ACTIONS(17),
    [sym_arg_identifier] = ACTIONS(19),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_eof] = ACTIONS(22),
  },
  [4] = {
    [sym__command] = STATE(35),
    [sym__simple_command] = STATE(24),
    [sym__tmp_command] = STATE(24),
    [sym__iter_command] = STATE(24),
    [sym_iter_flags_command] = STATE(24),
    [sym_iter_dbta_command] = STATE(24),
    [sym_iter_dbtb_command] = STATE(24),
    [sym_iter_dbts_command] = STATE(24),
    [sym_tmp_seek_command] = STATE(24),
    [sym_tmp_blksz_command] = STATE(24),
    [sym_tmp_fromto_command] = STATE(24),
    [sym_tmp_arch_command] = STATE(24),
    [sym_tmp_bits_command] = STATE(24),
    [sym_tmp_nthi_command] = STATE(24),
    [sym_tmp_eval_command] = STATE(24),
    [sym_tmp_fs_command] = STATE(24),
    [sym_tmp_reli_command] = STATE(24),
    [sym_tmp_kuery_command] = STATE(24),
    [sym_tmp_fd_command] = STATE(24),
    [sym_tmp_reg_command] = STATE(24),
    [sym_tmp_file_command] = STATE(24),
    [sym_tmp_string_command] = STATE(24),
    [sym_tmp_hex_command] = STATE(24),
    [sym_arged_command] = STATE(24),
    [sym_repeat_command] = STATE(24),
    [sym_out_redirect_command] = STATE(35),
    [sym_err_redirect_command] = STATE(35),
    [sym_html_redirect_command] = STATE(35),
    [sym_out_append_redirect_command] = STATE(35),
    [sym_err_append_redirect_command] = STATE(35),
    [aux_sym_commands_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_cmd_identifier] = ACTIONS(26),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym__command] = STATE(35),
    [sym__simple_command] = STATE(24),
    [sym__tmp_command] = STATE(24),
    [sym__iter_command] = STATE(24),
    [sym_iter_flags_command] = STATE(24),
    [sym_iter_dbta_command] = STATE(24),
    [sym_iter_dbtb_command] = STATE(24),
    [sym_iter_dbts_command] = STATE(24),
    [sym_tmp_seek_command] = STATE(24),
    [sym_tmp_blksz_command] = STATE(24),
    [sym_tmp_fromto_command] = STATE(24),
    [sym_tmp_arch_command] = STATE(24),
    [sym_tmp_bits_command] = STATE(24),
    [sym_tmp_nthi_command] = STATE(24),
    [sym_tmp_eval_command] = STATE(24),
    [sym_tmp_fs_command] = STATE(24),
    [sym_tmp_reli_command] = STATE(24),
    [sym_tmp_kuery_command] = STATE(24),
    [sym_tmp_fd_command] = STATE(24),
    [sym_tmp_reg_command] = STATE(24),
    [sym_tmp_file_command] = STATE(24),
    [sym_tmp_string_command] = STATE(24),
    [sym_tmp_hex_command] = STATE(24),
    [sym_arged_command] = STATE(24),
    [sym_repeat_command] = STATE(24),
    [sym_out_redirect_command] = STATE(35),
    [sym_err_redirect_command] = STATE(35),
    [sym_html_redirect_command] = STATE(35),
    [sym_out_append_redirect_command] = STATE(35),
    [sym_err_append_redirect_command] = STATE(35),
    [aux_sym_commands_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_cmd_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [6] = {
    [sym_arg] = STATE(3),
    [aux_sym_arged_command_repeat1] = STATE(3),
    [anon_sym_AT_AT] = ACTIONS(34),
    [anon_sym_AT_ATdbt] = ACTIONS(34),
    [anon_sym_AT_ATdbta] = ACTIONS(34),
    [anon_sym_AT_ATdbtb] = ACTIONS(34),
    [anon_sym_AT_ATdbts] = ACTIONS(34),
    [anon_sym_AT] = ACTIONS(34),
    [anon_sym_AT_BANG] = ACTIONS(34),
    [anon_sym_AT_LPAREN] = ACTIONS(34),
    [anon_sym_ATa_COLON] = ACTIONS(34),
    [anon_sym_ATb_COLON] = ACTIONS(34),
    [anon_sym_ATB_COLON] = ACTIONS(34),
    [anon_sym_ATe_COLON] = ACTIONS(34),
    [anon_sym_ATF_COLON] = ACTIONS(34),
    [anon_sym_ATi_COLON] = ACTIONS(34),
    [anon_sym_ATk_COLON] = ACTIONS(34),
    [anon_sym_ATo_COLON] = ACTIONS(34),
    [anon_sym_ATr_COLON] = ACTIONS(34),
    [anon_sym_ATf_COLON] = ACTIONS(34),
    [anon_sym_ATs_COLON] = ACTIONS(34),
    [anon_sym_ATx_COLON] = ACTIONS(34),
    [anon_sym_GT] = ACTIONS(34),
    [anon_sym_1_GT] = ACTIONS(34),
    [anon_sym_2_GT] = ACTIONS(34),
    [anon_sym_H_GT] = ACTIONS(34),
    [anon_sym_GT_GT] = ACTIONS(34),
    [anon_sym_1_GT_GT] = ACTIONS(34),
    [anon_sym_2_GT_GT] = ACTIONS(34),
    [sym_arg_identifier] = ACTIONS(13),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(34),
    [anon_sym_CR] = ACTIONS(34),
    [anon_sym_SEMI] = ACTIONS(34),
    [sym_eof] = ACTIONS(36),
  },
  [7] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(8),
    [anon_sym_AT_AT] = ACTIONS(38),
    [anon_sym_AT_ATdbt] = ACTIONS(38),
    [anon_sym_AT_ATdbta] = ACTIONS(38),
    [anon_sym_AT_ATdbtb] = ACTIONS(38),
    [anon_sym_AT_ATdbts] = ACTIONS(38),
    [anon_sym_AT] = ACTIONS(38),
    [anon_sym_AT_BANG] = ACTIONS(38),
    [anon_sym_AT_LPAREN] = ACTIONS(38),
    [anon_sym_ATa_COLON] = ACTIONS(38),
    [anon_sym_ATb_COLON] = ACTIONS(38),
    [anon_sym_ATB_COLON] = ACTIONS(38),
    [anon_sym_ATe_COLON] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_ATF_COLON] = ACTIONS(38),
    [anon_sym_ATi_COLON] = ACTIONS(38),
    [anon_sym_ATk_COLON] = ACTIONS(38),
    [anon_sym_ATo_COLON] = ACTIONS(38),
    [anon_sym_ATr_COLON] = ACTIONS(38),
    [anon_sym_ATf_COLON] = ACTIONS(38),
    [anon_sym_ATs_COLON] = ACTIONS(38),
    [anon_sym_ATx_COLON] = ACTIONS(38),
    [anon_sym_GT] = ACTIONS(38),
    [anon_sym_1_GT] = ACTIONS(38),
    [anon_sym_2_GT] = ACTIONS(38),
    [anon_sym_H_GT] = ACTIONS(38),
    [anon_sym_GT_GT] = ACTIONS(38),
    [anon_sym_1_GT_GT] = ACTIONS(38),
    [anon_sym_2_GT_GT] = ACTIONS(38),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(38),
    [anon_sym_CR] = ACTIONS(38),
    [anon_sym_SEMI] = ACTIONS(38),
    [sym_eof] = ACTIONS(42),
  },
  [8] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(9),
    [anon_sym_AT_AT] = ACTIONS(44),
    [anon_sym_AT_ATdbt] = ACTIONS(44),
    [anon_sym_AT_ATdbta] = ACTIONS(44),
    [anon_sym_AT_ATdbtb] = ACTIONS(44),
    [anon_sym_AT_ATdbts] = ACTIONS(44),
    [anon_sym_AT] = ACTIONS(44),
    [anon_sym_AT_BANG] = ACTIONS(44),
    [anon_sym_AT_LPAREN] = ACTIONS(44),
    [anon_sym_ATa_COLON] = ACTIONS(44),
    [anon_sym_ATb_COLON] = ACTIONS(44),
    [anon_sym_ATB_COLON] = ACTIONS(44),
    [anon_sym_ATe_COLON] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_ATF_COLON] = ACTIONS(44),
    [anon_sym_ATi_COLON] = ACTIONS(44),
    [anon_sym_ATk_COLON] = ACTIONS(44),
    [anon_sym_ATo_COLON] = ACTIONS(44),
    [anon_sym_ATr_COLON] = ACTIONS(44),
    [anon_sym_ATf_COLON] = ACTIONS(44),
    [anon_sym_ATs_COLON] = ACTIONS(44),
    [anon_sym_ATx_COLON] = ACTIONS(44),
    [anon_sym_GT] = ACTIONS(44),
    [anon_sym_1_GT] = ACTIONS(44),
    [anon_sym_2_GT] = ACTIONS(44),
    [anon_sym_H_GT] = ACTIONS(44),
    [anon_sym_GT_GT] = ACTIONS(44),
    [anon_sym_1_GT_GT] = ACTIONS(44),
    [anon_sym_2_GT_GT] = ACTIONS(44),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(44),
    [anon_sym_CR] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(44),
    [sym_eof] = ACTIONS(46),
  },
  [9] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(9),
    [anon_sym_AT_AT] = ACTIONS(48),
    [anon_sym_AT_ATdbt] = ACTIONS(48),
    [anon_sym_AT_ATdbta] = ACTIONS(48),
    [anon_sym_AT_ATdbtb] = ACTIONS(48),
    [anon_sym_AT_ATdbts] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(48),
    [anon_sym_AT_BANG] = ACTIONS(48),
    [anon_sym_AT_LPAREN] = ACTIONS(48),
    [anon_sym_ATa_COLON] = ACTIONS(48),
    [anon_sym_ATb_COLON] = ACTIONS(48),
    [anon_sym_ATB_COLON] = ACTIONS(48),
    [anon_sym_ATe_COLON] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(50),
    [anon_sym_ATF_COLON] = ACTIONS(48),
    [anon_sym_ATi_COLON] = ACTIONS(48),
    [anon_sym_ATk_COLON] = ACTIONS(48),
    [anon_sym_ATo_COLON] = ACTIONS(48),
    [anon_sym_ATr_COLON] = ACTIONS(48),
    [anon_sym_ATf_COLON] = ACTIONS(48),
    [anon_sym_ATs_COLON] = ACTIONS(48),
    [anon_sym_ATx_COLON] = ACTIONS(48),
    [anon_sym_GT] = ACTIONS(48),
    [anon_sym_1_GT] = ACTIONS(48),
    [anon_sym_2_GT] = ACTIONS(48),
    [anon_sym_H_GT] = ACTIONS(48),
    [anon_sym_GT_GT] = ACTIONS(48),
    [anon_sym_1_GT_GT] = ACTIONS(48),
    [anon_sym_2_GT_GT] = ACTIONS(48),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(48),
    [anon_sym_CR] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(48),
    [sym_eof] = ACTIONS(53),
  },
  [10] = {
    [anon_sym_AT_AT] = ACTIONS(55),
    [anon_sym_AT_ATdbt] = ACTIONS(55),
    [anon_sym_AT_ATdbta] = ACTIONS(55),
    [anon_sym_AT_ATdbtb] = ACTIONS(55),
    [anon_sym_AT_ATdbts] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(55),
    [anon_sym_AT_BANG] = ACTIONS(55),
    [anon_sym_AT_LPAREN] = ACTIONS(55),
    [anon_sym_ATa_COLON] = ACTIONS(55),
    [anon_sym_ATb_COLON] = ACTIONS(55),
    [anon_sym_ATB_COLON] = ACTIONS(55),
    [anon_sym_ATe_COLON] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_ATF_COLON] = ACTIONS(55),
    [anon_sym_ATi_COLON] = ACTIONS(55),
    [anon_sym_ATk_COLON] = ACTIONS(55),
    [anon_sym_ATo_COLON] = ACTIONS(55),
    [anon_sym_ATr_COLON] = ACTIONS(55),
    [anon_sym_ATf_COLON] = ACTIONS(55),
    [anon_sym_ATs_COLON] = ACTIONS(55),
    [anon_sym_ATx_COLON] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_1_GT] = ACTIONS(55),
    [anon_sym_2_GT] = ACTIONS(55),
    [anon_sym_H_GT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_1_GT_GT] = ACTIONS(55),
    [anon_sym_2_GT_GT] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_eof] = ACTIONS(57),
  },
  [11] = {
    [anon_sym_AT_AT] = ACTIONS(55),
    [anon_sym_AT_ATdbt] = ACTIONS(55),
    [anon_sym_AT_ATdbta] = ACTIONS(55),
    [anon_sym_AT_ATdbtb] = ACTIONS(55),
    [anon_sym_AT_ATdbts] = ACTIONS(55),
    [anon_sym_AT] = ACTIONS(55),
    [anon_sym_AT_BANG] = ACTIONS(55),
    [anon_sym_AT_LPAREN] = ACTIONS(55),
    [anon_sym_ATa_COLON] = ACTIONS(55),
    [anon_sym_ATb_COLON] = ACTIONS(55),
    [anon_sym_ATB_COLON] = ACTIONS(55),
    [anon_sym_ATe_COLON] = ACTIONS(55),
    [anon_sym_ATF_COLON] = ACTIONS(55),
    [anon_sym_ATi_COLON] = ACTIONS(55),
    [anon_sym_ATk_COLON] = ACTIONS(55),
    [anon_sym_ATo_COLON] = ACTIONS(55),
    [anon_sym_ATr_COLON] = ACTIONS(55),
    [anon_sym_ATf_COLON] = ACTIONS(55),
    [anon_sym_ATs_COLON] = ACTIONS(55),
    [anon_sym_ATx_COLON] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_1_GT] = ACTIONS(55),
    [anon_sym_2_GT] = ACTIONS(55),
    [anon_sym_H_GT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_1_GT_GT] = ACTIONS(55),
    [anon_sym_2_GT_GT] = ACTIONS(55),
    [sym_arg_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_eof] = ACTIONS(57),
  },
  [12] = {
    [anon_sym_AT_AT] = ACTIONS(48),
    [anon_sym_AT_ATdbt] = ACTIONS(48),
    [anon_sym_AT_ATdbta] = ACTIONS(48),
    [anon_sym_AT_ATdbtb] = ACTIONS(48),
    [anon_sym_AT_ATdbts] = ACTIONS(48),
    [anon_sym_AT] = ACTIONS(48),
    [anon_sym_AT_BANG] = ACTIONS(48),
    [anon_sym_AT_LPAREN] = ACTIONS(48),
    [anon_sym_ATa_COLON] = ACTIONS(48),
    [anon_sym_ATb_COLON] = ACTIONS(48),
    [anon_sym_ATB_COLON] = ACTIONS(48),
    [anon_sym_ATe_COLON] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_ATF_COLON] = ACTIONS(48),
    [anon_sym_ATi_COLON] = ACTIONS(48),
    [anon_sym_ATk_COLON] = ACTIONS(48),
    [anon_sym_ATo_COLON] = ACTIONS(48),
    [anon_sym_ATr_COLON] = ACTIONS(48),
    [anon_sym_ATf_COLON] = ACTIONS(48),
    [anon_sym_ATs_COLON] = ACTIONS(48),
    [anon_sym_ATx_COLON] = ACTIONS(48),
    [anon_sym_GT] = ACTIONS(48),
    [anon_sym_1_GT] = ACTIONS(48),
    [anon_sym_2_GT] = ACTIONS(48),
    [anon_sym_H_GT] = ACTIONS(48),
    [anon_sym_GT_GT] = ACTIONS(48),
    [anon_sym_1_GT_GT] = ACTIONS(48),
    [anon_sym_2_GT_GT] = ACTIONS(48),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(48),
    [anon_sym_CR] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(48),
    [sym_eof] = ACTIONS(53),
  },
  [13] = {
    [anon_sym_AT_AT] = ACTIONS(59),
    [anon_sym_AT_ATdbt] = ACTIONS(59),
    [anon_sym_AT_ATdbta] = ACTIONS(59),
    [anon_sym_AT_ATdbtb] = ACTIONS(59),
    [anon_sym_AT_ATdbts] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_AT_BANG] = ACTIONS(59),
    [anon_sym_AT_LPAREN] = ACTIONS(59),
    [anon_sym_ATa_COLON] = ACTIONS(59),
    [anon_sym_ATb_COLON] = ACTIONS(59),
    [anon_sym_ATB_COLON] = ACTIONS(59),
    [anon_sym_ATe_COLON] = ACTIONS(59),
    [anon_sym_ATF_COLON] = ACTIONS(59),
    [anon_sym_ATi_COLON] = ACTIONS(59),
    [anon_sym_ATk_COLON] = ACTIONS(59),
    [anon_sym_ATo_COLON] = ACTIONS(59),
    [anon_sym_ATr_COLON] = ACTIONS(59),
    [anon_sym_ATf_COLON] = ACTIONS(59),
    [anon_sym_ATs_COLON] = ACTIONS(59),
    [anon_sym_ATx_COLON] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_1_GT] = ACTIONS(59),
    [anon_sym_2_GT] = ACTIONS(59),
    [anon_sym_H_GT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(59),
    [anon_sym_1_GT_GT] = ACTIONS(59),
    [anon_sym_2_GT_GT] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_eof] = ACTIONS(61),
  },
  [14] = {
    [anon_sym_AT_AT] = ACTIONS(63),
    [anon_sym_AT_ATdbt] = ACTIONS(63),
    [anon_sym_AT_ATdbta] = ACTIONS(63),
    [anon_sym_AT_ATdbtb] = ACTIONS(63),
    [anon_sym_AT_ATdbts] = ACTIONS(63),
    [anon_sym_AT] = ACTIONS(63),
    [anon_sym_AT_BANG] = ACTIONS(63),
    [anon_sym_AT_LPAREN] = ACTIONS(63),
    [anon_sym_ATa_COLON] = ACTIONS(63),
    [anon_sym_ATb_COLON] = ACTIONS(63),
    [anon_sym_ATB_COLON] = ACTIONS(63),
    [anon_sym_ATe_COLON] = ACTIONS(63),
    [anon_sym_ATF_COLON] = ACTIONS(63),
    [anon_sym_ATi_COLON] = ACTIONS(63),
    [anon_sym_ATk_COLON] = ACTIONS(63),
    [anon_sym_ATo_COLON] = ACTIONS(63),
    [anon_sym_ATr_COLON] = ACTIONS(63),
    [anon_sym_ATf_COLON] = ACTIONS(63),
    [anon_sym_ATs_COLON] = ACTIONS(63),
    [anon_sym_ATx_COLON] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_1_GT] = ACTIONS(63),
    [anon_sym_2_GT] = ACTIONS(63),
    [anon_sym_H_GT] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_1_GT_GT] = ACTIONS(63),
    [anon_sym_2_GT_GT] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_CR] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_eof] = ACTIONS(65),
  },
  [15] = {
    [anon_sym_AT_AT] = ACTIONS(67),
    [anon_sym_AT_ATdbt] = ACTIONS(67),
    [anon_sym_AT_ATdbta] = ACTIONS(67),
    [anon_sym_AT_ATdbtb] = ACTIONS(67),
    [anon_sym_AT_ATdbts] = ACTIONS(67),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_AT_BANG] = ACTIONS(67),
    [anon_sym_AT_LPAREN] = ACTIONS(67),
    [anon_sym_ATa_COLON] = ACTIONS(67),
    [anon_sym_ATb_COLON] = ACTIONS(67),
    [anon_sym_ATB_COLON] = ACTIONS(67),
    [anon_sym_ATe_COLON] = ACTIONS(67),
    [anon_sym_ATF_COLON] = ACTIONS(67),
    [anon_sym_ATi_COLON] = ACTIONS(67),
    [anon_sym_ATk_COLON] = ACTIONS(67),
    [anon_sym_ATo_COLON] = ACTIONS(67),
    [anon_sym_ATr_COLON] = ACTIONS(67),
    [anon_sym_ATf_COLON] = ACTIONS(67),
    [anon_sym_ATs_COLON] = ACTIONS(67),
    [anon_sym_ATx_COLON] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_1_GT] = ACTIONS(67),
    [anon_sym_2_GT] = ACTIONS(67),
    [anon_sym_H_GT] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_1_GT_GT] = ACTIONS(67),
    [anon_sym_2_GT_GT] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_CR] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [sym_eof] = ACTIONS(69),
  },
  [16] = {
    [anon_sym_AT_AT] = ACTIONS(71),
    [anon_sym_AT_ATdbt] = ACTIONS(71),
    [anon_sym_AT_ATdbta] = ACTIONS(71),
    [anon_sym_AT_ATdbtb] = ACTIONS(71),
    [anon_sym_AT_ATdbts] = ACTIONS(71),
    [anon_sym_AT] = ACTIONS(71),
    [anon_sym_AT_BANG] = ACTIONS(71),
    [anon_sym_AT_LPAREN] = ACTIONS(71),
    [anon_sym_ATa_COLON] = ACTIONS(71),
    [anon_sym_ATb_COLON] = ACTIONS(71),
    [anon_sym_ATB_COLON] = ACTIONS(71),
    [anon_sym_ATe_COLON] = ACTIONS(71),
    [anon_sym_ATF_COLON] = ACTIONS(71),
    [anon_sym_ATi_COLON] = ACTIONS(71),
    [anon_sym_ATk_COLON] = ACTIONS(71),
    [anon_sym_ATo_COLON] = ACTIONS(71),
    [anon_sym_ATr_COLON] = ACTIONS(71),
    [anon_sym_ATf_COLON] = ACTIONS(71),
    [anon_sym_ATs_COLON] = ACTIONS(71),
    [anon_sym_ATx_COLON] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_1_GT] = ACTIONS(71),
    [anon_sym_2_GT] = ACTIONS(71),
    [anon_sym_H_GT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_1_GT_GT] = ACTIONS(71),
    [anon_sym_2_GT_GT] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_CR] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [sym_eof] = ACTIONS(73),
  },
  [17] = {
    [anon_sym_AT_AT] = ACTIONS(75),
    [anon_sym_AT_ATdbt] = ACTIONS(75),
    [anon_sym_AT_ATdbta] = ACTIONS(75),
    [anon_sym_AT_ATdbtb] = ACTIONS(75),
    [anon_sym_AT_ATdbts] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym_AT_BANG] = ACTIONS(75),
    [anon_sym_AT_LPAREN] = ACTIONS(75),
    [anon_sym_ATa_COLON] = ACTIONS(75),
    [anon_sym_ATb_COLON] = ACTIONS(75),
    [anon_sym_ATB_COLON] = ACTIONS(75),
    [anon_sym_ATe_COLON] = ACTIONS(75),
    [anon_sym_ATF_COLON] = ACTIONS(75),
    [anon_sym_ATi_COLON] = ACTIONS(75),
    [anon_sym_ATk_COLON] = ACTIONS(75),
    [anon_sym_ATo_COLON] = ACTIONS(75),
    [anon_sym_ATr_COLON] = ACTIONS(75),
    [anon_sym_ATf_COLON] = ACTIONS(75),
    [anon_sym_ATs_COLON] = ACTIONS(75),
    [anon_sym_ATx_COLON] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_1_GT] = ACTIONS(75),
    [anon_sym_2_GT] = ACTIONS(75),
    [anon_sym_H_GT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(75),
    [anon_sym_1_GT_GT] = ACTIONS(75),
    [anon_sym_2_GT_GT] = ACTIONS(75),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_CR] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_eof] = ACTIONS(77),
  },
  [18] = {
    [anon_sym_AT_AT] = ACTIONS(79),
    [anon_sym_AT_ATdbt] = ACTIONS(79),
    [anon_sym_AT_ATdbta] = ACTIONS(79),
    [anon_sym_AT_ATdbtb] = ACTIONS(79),
    [anon_sym_AT_ATdbts] = ACTIONS(79),
    [anon_sym_AT] = ACTIONS(79),
    [anon_sym_AT_BANG] = ACTIONS(79),
    [anon_sym_AT_LPAREN] = ACTIONS(79),
    [anon_sym_ATa_COLON] = ACTIONS(79),
    [anon_sym_ATb_COLON] = ACTIONS(79),
    [anon_sym_ATB_COLON] = ACTIONS(79),
    [anon_sym_ATe_COLON] = ACTIONS(79),
    [anon_sym_ATF_COLON] = ACTIONS(79),
    [anon_sym_ATi_COLON] = ACTIONS(79),
    [anon_sym_ATk_COLON] = ACTIONS(79),
    [anon_sym_ATo_COLON] = ACTIONS(79),
    [anon_sym_ATr_COLON] = ACTIONS(79),
    [anon_sym_ATf_COLON] = ACTIONS(79),
    [anon_sym_ATs_COLON] = ACTIONS(79),
    [anon_sym_ATx_COLON] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_1_GT] = ACTIONS(79),
    [anon_sym_2_GT] = ACTIONS(79),
    [anon_sym_H_GT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_1_GT_GT] = ACTIONS(79),
    [anon_sym_2_GT_GT] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_eof] = ACTIONS(81),
  },
  [19] = {
    [anon_sym_AT_AT] = ACTIONS(83),
    [anon_sym_AT_ATdbt] = ACTIONS(83),
    [anon_sym_AT_ATdbta] = ACTIONS(83),
    [anon_sym_AT_ATdbtb] = ACTIONS(83),
    [anon_sym_AT_ATdbts] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(83),
    [anon_sym_AT_BANG] = ACTIONS(83),
    [anon_sym_AT_LPAREN] = ACTIONS(83),
    [anon_sym_ATa_COLON] = ACTIONS(83),
    [anon_sym_ATb_COLON] = ACTIONS(83),
    [anon_sym_ATB_COLON] = ACTIONS(83),
    [anon_sym_ATe_COLON] = ACTIONS(83),
    [anon_sym_ATF_COLON] = ACTIONS(83),
    [anon_sym_ATi_COLON] = ACTIONS(83),
    [anon_sym_ATk_COLON] = ACTIONS(83),
    [anon_sym_ATo_COLON] = ACTIONS(83),
    [anon_sym_ATr_COLON] = ACTIONS(83),
    [anon_sym_ATf_COLON] = ACTIONS(83),
    [anon_sym_ATs_COLON] = ACTIONS(83),
    [anon_sym_ATx_COLON] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_1_GT] = ACTIONS(83),
    [anon_sym_2_GT] = ACTIONS(83),
    [anon_sym_H_GT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_1_GT_GT] = ACTIONS(83),
    [anon_sym_2_GT_GT] = ACTIONS(83),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_CR] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_eof] = ACTIONS(85),
  },
  [20] = {
    [anon_sym_AT_AT] = ACTIONS(87),
    [anon_sym_AT_ATdbt] = ACTIONS(87),
    [anon_sym_AT_ATdbta] = ACTIONS(87),
    [anon_sym_AT_ATdbtb] = ACTIONS(87),
    [anon_sym_AT_ATdbts] = ACTIONS(87),
    [anon_sym_AT] = ACTIONS(87),
    [anon_sym_AT_BANG] = ACTIONS(87),
    [anon_sym_AT_LPAREN] = ACTIONS(87),
    [anon_sym_ATa_COLON] = ACTIONS(87),
    [anon_sym_ATb_COLON] = ACTIONS(87),
    [anon_sym_ATB_COLON] = ACTIONS(87),
    [anon_sym_ATe_COLON] = ACTIONS(87),
    [anon_sym_ATF_COLON] = ACTIONS(87),
    [anon_sym_ATi_COLON] = ACTIONS(87),
    [anon_sym_ATk_COLON] = ACTIONS(87),
    [anon_sym_ATo_COLON] = ACTIONS(87),
    [anon_sym_ATr_COLON] = ACTIONS(87),
    [anon_sym_ATf_COLON] = ACTIONS(87),
    [anon_sym_ATs_COLON] = ACTIONS(87),
    [anon_sym_ATx_COLON] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_1_GT] = ACTIONS(87),
    [anon_sym_2_GT] = ACTIONS(87),
    [anon_sym_H_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_1_GT_GT] = ACTIONS(87),
    [anon_sym_2_GT_GT] = ACTIONS(87),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_CR] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_eof] = ACTIONS(89),
  },
  [21] = {
    [anon_sym_AT_AT] = ACTIONS(91),
    [anon_sym_AT_ATdbt] = ACTIONS(91),
    [anon_sym_AT_ATdbta] = ACTIONS(91),
    [anon_sym_AT_ATdbtb] = ACTIONS(91),
    [anon_sym_AT_ATdbts] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym_AT_BANG] = ACTIONS(91),
    [anon_sym_AT_LPAREN] = ACTIONS(91),
    [anon_sym_ATa_COLON] = ACTIONS(91),
    [anon_sym_ATb_COLON] = ACTIONS(91),
    [anon_sym_ATB_COLON] = ACTIONS(91),
    [anon_sym_ATe_COLON] = ACTIONS(91),
    [anon_sym_ATF_COLON] = ACTIONS(91),
    [anon_sym_ATi_COLON] = ACTIONS(91),
    [anon_sym_ATk_COLON] = ACTIONS(91),
    [anon_sym_ATo_COLON] = ACTIONS(91),
    [anon_sym_ATr_COLON] = ACTIONS(91),
    [anon_sym_ATf_COLON] = ACTIONS(91),
    [anon_sym_ATs_COLON] = ACTIONS(91),
    [anon_sym_ATx_COLON] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_1_GT] = ACTIONS(91),
    [anon_sym_2_GT] = ACTIONS(91),
    [anon_sym_H_GT] = ACTIONS(91),
    [anon_sym_GT_GT] = ACTIONS(91),
    [anon_sym_1_GT_GT] = ACTIONS(91),
    [anon_sym_2_GT_GT] = ACTIONS(91),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_CR] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
    [sym_eof] = ACTIONS(93),
  },
  [22] = {
    [anon_sym_AT_AT] = ACTIONS(95),
    [anon_sym_AT_ATdbt] = ACTIONS(95),
    [anon_sym_AT_ATdbta] = ACTIONS(95),
    [anon_sym_AT_ATdbtb] = ACTIONS(95),
    [anon_sym_AT_ATdbts] = ACTIONS(95),
    [anon_sym_AT] = ACTIONS(95),
    [anon_sym_AT_BANG] = ACTIONS(95),
    [anon_sym_AT_LPAREN] = ACTIONS(95),
    [anon_sym_ATa_COLON] = ACTIONS(95),
    [anon_sym_ATb_COLON] = ACTIONS(95),
    [anon_sym_ATB_COLON] = ACTIONS(95),
    [anon_sym_ATe_COLON] = ACTIONS(95),
    [anon_sym_ATF_COLON] = ACTIONS(95),
    [anon_sym_ATi_COLON] = ACTIONS(95),
    [anon_sym_ATk_COLON] = ACTIONS(95),
    [anon_sym_ATo_COLON] = ACTIONS(95),
    [anon_sym_ATr_COLON] = ACTIONS(95),
    [anon_sym_ATf_COLON] = ACTIONS(95),
    [anon_sym_ATs_COLON] = ACTIONS(95),
    [anon_sym_ATx_COLON] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(95),
    [anon_sym_1_GT] = ACTIONS(95),
    [anon_sym_2_GT] = ACTIONS(95),
    [anon_sym_H_GT] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_1_GT_GT] = ACTIONS(95),
    [anon_sym_2_GT_GT] = ACTIONS(95),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(95),
    [anon_sym_CR] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_eof] = ACTIONS(97),
  },
  [23] = {
    [anon_sym_AT_AT] = ACTIONS(99),
    [anon_sym_AT_ATdbt] = ACTIONS(99),
    [anon_sym_AT_ATdbta] = ACTIONS(99),
    [anon_sym_AT_ATdbtb] = ACTIONS(99),
    [anon_sym_AT_ATdbts] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_AT_BANG] = ACTIONS(99),
    [anon_sym_AT_LPAREN] = ACTIONS(99),
    [anon_sym_ATa_COLON] = ACTIONS(99),
    [anon_sym_ATb_COLON] = ACTIONS(99),
    [anon_sym_ATB_COLON] = ACTIONS(99),
    [anon_sym_ATe_COLON] = ACTIONS(99),
    [anon_sym_ATF_COLON] = ACTIONS(99),
    [anon_sym_ATi_COLON] = ACTIONS(99),
    [anon_sym_ATk_COLON] = ACTIONS(99),
    [anon_sym_ATo_COLON] = ACTIONS(99),
    [anon_sym_ATr_COLON] = ACTIONS(99),
    [anon_sym_ATf_COLON] = ACTIONS(99),
    [anon_sym_ATs_COLON] = ACTIONS(99),
    [anon_sym_ATx_COLON] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_1_GT] = ACTIONS(99),
    [anon_sym_2_GT] = ACTIONS(99),
    [anon_sym_H_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_1_GT_GT] = ACTIONS(99),
    [anon_sym_2_GT_GT] = ACTIONS(99),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_CR] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_eof] = ACTIONS(101),
  },
  [24] = {
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(107),
    [anon_sym_AT_ATdbts] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_AT_BANG] = ACTIONS(113),
    [anon_sym_AT_LPAREN] = ACTIONS(115),
    [anon_sym_ATa_COLON] = ACTIONS(117),
    [anon_sym_ATb_COLON] = ACTIONS(119),
    [anon_sym_ATB_COLON] = ACTIONS(121),
    [anon_sym_ATe_COLON] = ACTIONS(123),
    [anon_sym_ATF_COLON] = ACTIONS(125),
    [anon_sym_ATi_COLON] = ACTIONS(127),
    [anon_sym_ATk_COLON] = ACTIONS(129),
    [anon_sym_ATo_COLON] = ACTIONS(131),
    [anon_sym_ATr_COLON] = ACTIONS(133),
    [anon_sym_ATf_COLON] = ACTIONS(135),
    [anon_sym_ATs_COLON] = ACTIONS(137),
    [anon_sym_ATx_COLON] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_1_GT] = ACTIONS(141),
    [anon_sym_2_GT] = ACTIONS(143),
    [anon_sym_H_GT] = ACTIONS(145),
    [anon_sym_GT_GT] = ACTIONS(147),
    [anon_sym_1_GT_GT] = ACTIONS(147),
    [anon_sym_2_GT_GT] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_CR] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [sym_eof] = ACTIONS(153),
  },
  [25] = {
    [anon_sym_AT_AT] = ACTIONS(155),
    [anon_sym_AT_ATdbt] = ACTIONS(155),
    [anon_sym_AT_ATdbta] = ACTIONS(155),
    [anon_sym_AT_ATdbtb] = ACTIONS(155),
    [anon_sym_AT_ATdbts] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(155),
    [anon_sym_AT_BANG] = ACTIONS(155),
    [anon_sym_AT_LPAREN] = ACTIONS(155),
    [anon_sym_ATa_COLON] = ACTIONS(155),
    [anon_sym_ATb_COLON] = ACTIONS(155),
    [anon_sym_ATB_COLON] = ACTIONS(155),
    [anon_sym_ATe_COLON] = ACTIONS(155),
    [anon_sym_ATF_COLON] = ACTIONS(155),
    [anon_sym_ATi_COLON] = ACTIONS(155),
    [anon_sym_ATk_COLON] = ACTIONS(155),
    [anon_sym_ATo_COLON] = ACTIONS(155),
    [anon_sym_ATr_COLON] = ACTIONS(155),
    [anon_sym_ATf_COLON] = ACTIONS(155),
    [anon_sym_ATs_COLON] = ACTIONS(155),
    [anon_sym_ATx_COLON] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(155),
    [anon_sym_1_GT] = ACTIONS(155),
    [anon_sym_2_GT] = ACTIONS(155),
    [anon_sym_H_GT] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_1_GT_GT] = ACTIONS(155),
    [anon_sym_2_GT_GT] = ACTIONS(155),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_CR] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [sym_eof] = ACTIONS(157),
  },
  [26] = {
    [anon_sym_AT_AT] = ACTIONS(159),
    [anon_sym_AT_ATdbt] = ACTIONS(159),
    [anon_sym_AT_ATdbta] = ACTIONS(159),
    [anon_sym_AT_ATdbtb] = ACTIONS(159),
    [anon_sym_AT_ATdbts] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(159),
    [anon_sym_AT_BANG] = ACTIONS(159),
    [anon_sym_AT_LPAREN] = ACTIONS(159),
    [anon_sym_ATa_COLON] = ACTIONS(159),
    [anon_sym_ATb_COLON] = ACTIONS(159),
    [anon_sym_ATB_COLON] = ACTIONS(159),
    [anon_sym_ATe_COLON] = ACTIONS(159),
    [anon_sym_ATF_COLON] = ACTIONS(159),
    [anon_sym_ATi_COLON] = ACTIONS(159),
    [anon_sym_ATk_COLON] = ACTIONS(159),
    [anon_sym_ATo_COLON] = ACTIONS(159),
    [anon_sym_ATr_COLON] = ACTIONS(159),
    [anon_sym_ATf_COLON] = ACTIONS(159),
    [anon_sym_ATs_COLON] = ACTIONS(159),
    [anon_sym_ATx_COLON] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(159),
    [anon_sym_1_GT] = ACTIONS(159),
    [anon_sym_2_GT] = ACTIONS(159),
    [anon_sym_H_GT] = ACTIONS(159),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_1_GT_GT] = ACTIONS(159),
    [anon_sym_2_GT_GT] = ACTIONS(159),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_CR] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [sym_eof] = ACTIONS(161),
  },
  [27] = {
    [anon_sym_AT_AT] = ACTIONS(163),
    [anon_sym_AT_ATdbt] = ACTIONS(163),
    [anon_sym_AT_ATdbta] = ACTIONS(163),
    [anon_sym_AT_ATdbtb] = ACTIONS(163),
    [anon_sym_AT_ATdbts] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym_AT_BANG] = ACTIONS(163),
    [anon_sym_AT_LPAREN] = ACTIONS(163),
    [anon_sym_ATa_COLON] = ACTIONS(163),
    [anon_sym_ATb_COLON] = ACTIONS(163),
    [anon_sym_ATB_COLON] = ACTIONS(163),
    [anon_sym_ATe_COLON] = ACTIONS(163),
    [anon_sym_ATF_COLON] = ACTIONS(163),
    [anon_sym_ATi_COLON] = ACTIONS(163),
    [anon_sym_ATk_COLON] = ACTIONS(163),
    [anon_sym_ATo_COLON] = ACTIONS(163),
    [anon_sym_ATr_COLON] = ACTIONS(163),
    [anon_sym_ATf_COLON] = ACTIONS(163),
    [anon_sym_ATs_COLON] = ACTIONS(163),
    [anon_sym_ATx_COLON] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(163),
    [anon_sym_1_GT] = ACTIONS(163),
    [anon_sym_2_GT] = ACTIONS(163),
    [anon_sym_H_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_1_GT_GT] = ACTIONS(163),
    [anon_sym_2_GT_GT] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_CR] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [sym_eof] = ACTIONS(165),
  },
  [28] = {
    [anon_sym_AT_AT] = ACTIONS(167),
    [anon_sym_AT_ATdbt] = ACTIONS(167),
    [anon_sym_AT_ATdbta] = ACTIONS(167),
    [anon_sym_AT_ATdbtb] = ACTIONS(167),
    [anon_sym_AT_ATdbts] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(167),
    [anon_sym_AT_BANG] = ACTIONS(167),
    [anon_sym_AT_LPAREN] = ACTIONS(167),
    [anon_sym_ATa_COLON] = ACTIONS(167),
    [anon_sym_ATb_COLON] = ACTIONS(167),
    [anon_sym_ATB_COLON] = ACTIONS(167),
    [anon_sym_ATe_COLON] = ACTIONS(167),
    [anon_sym_ATF_COLON] = ACTIONS(167),
    [anon_sym_ATi_COLON] = ACTIONS(167),
    [anon_sym_ATk_COLON] = ACTIONS(167),
    [anon_sym_ATo_COLON] = ACTIONS(167),
    [anon_sym_ATr_COLON] = ACTIONS(167),
    [anon_sym_ATf_COLON] = ACTIONS(167),
    [anon_sym_ATs_COLON] = ACTIONS(167),
    [anon_sym_ATx_COLON] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_1_GT] = ACTIONS(167),
    [anon_sym_2_GT] = ACTIONS(167),
    [anon_sym_H_GT] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(167),
    [anon_sym_1_GT_GT] = ACTIONS(167),
    [anon_sym_2_GT_GT] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_eof] = ACTIONS(169),
  },
  [29] = {
    [anon_sym_AT_AT] = ACTIONS(171),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(171),
    [anon_sym_AT_ATdbtb] = ACTIONS(171),
    [anon_sym_AT_ATdbts] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_AT_BANG] = ACTIONS(171),
    [anon_sym_AT_LPAREN] = ACTIONS(171),
    [anon_sym_ATa_COLON] = ACTIONS(171),
    [anon_sym_ATb_COLON] = ACTIONS(171),
    [anon_sym_ATB_COLON] = ACTIONS(171),
    [anon_sym_ATe_COLON] = ACTIONS(171),
    [anon_sym_ATF_COLON] = ACTIONS(171),
    [anon_sym_ATi_COLON] = ACTIONS(171),
    [anon_sym_ATk_COLON] = ACTIONS(171),
    [anon_sym_ATo_COLON] = ACTIONS(171),
    [anon_sym_ATr_COLON] = ACTIONS(171),
    [anon_sym_ATf_COLON] = ACTIONS(171),
    [anon_sym_ATs_COLON] = ACTIONS(171),
    [anon_sym_ATx_COLON] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_1_GT] = ACTIONS(171),
    [anon_sym_2_GT] = ACTIONS(171),
    [anon_sym_H_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_1_GT_GT] = ACTIONS(171),
    [anon_sym_2_GT_GT] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_eof] = ACTIONS(173),
  },
  [30] = {
    [anon_sym_AT_AT] = ACTIONS(175),
    [anon_sym_AT_ATdbt] = ACTIONS(175),
    [anon_sym_AT_ATdbta] = ACTIONS(175),
    [anon_sym_AT_ATdbtb] = ACTIONS(175),
    [anon_sym_AT_ATdbts] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_AT_BANG] = ACTIONS(175),
    [anon_sym_AT_LPAREN] = ACTIONS(175),
    [anon_sym_ATa_COLON] = ACTIONS(175),
    [anon_sym_ATb_COLON] = ACTIONS(175),
    [anon_sym_ATB_COLON] = ACTIONS(175),
    [anon_sym_ATe_COLON] = ACTIONS(175),
    [anon_sym_ATF_COLON] = ACTIONS(175),
    [anon_sym_ATi_COLON] = ACTIONS(175),
    [anon_sym_ATk_COLON] = ACTIONS(175),
    [anon_sym_ATo_COLON] = ACTIONS(175),
    [anon_sym_ATr_COLON] = ACTIONS(175),
    [anon_sym_ATf_COLON] = ACTIONS(175),
    [anon_sym_ATs_COLON] = ACTIONS(175),
    [anon_sym_ATx_COLON] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_1_GT] = ACTIONS(175),
    [anon_sym_2_GT] = ACTIONS(175),
    [anon_sym_H_GT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(175),
    [anon_sym_1_GT_GT] = ACTIONS(175),
    [anon_sym_2_GT_GT] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_eof] = ACTIONS(177),
  },
  [31] = {
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(179),
    [anon_sym_AT_ATdbtb] = ACTIONS(179),
    [anon_sym_AT_ATdbts] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(179),
    [anon_sym_AT_LPAREN] = ACTIONS(179),
    [anon_sym_ATa_COLON] = ACTIONS(179),
    [anon_sym_ATb_COLON] = ACTIONS(179),
    [anon_sym_ATB_COLON] = ACTIONS(179),
    [anon_sym_ATe_COLON] = ACTIONS(179),
    [anon_sym_ATF_COLON] = ACTIONS(179),
    [anon_sym_ATi_COLON] = ACTIONS(179),
    [anon_sym_ATk_COLON] = ACTIONS(179),
    [anon_sym_ATo_COLON] = ACTIONS(179),
    [anon_sym_ATr_COLON] = ACTIONS(179),
    [anon_sym_ATf_COLON] = ACTIONS(179),
    [anon_sym_ATs_COLON] = ACTIONS(179),
    [anon_sym_ATx_COLON] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_1_GT] = ACTIONS(179),
    [anon_sym_2_GT] = ACTIONS(179),
    [anon_sym_H_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_1_GT_GT] = ACTIONS(179),
    [anon_sym_2_GT_GT] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_eof] = ACTIONS(181),
  },
  [32] = {
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(107),
    [anon_sym_AT_ATdbts] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_AT_BANG] = ACTIONS(113),
    [anon_sym_AT_LPAREN] = ACTIONS(115),
    [anon_sym_ATa_COLON] = ACTIONS(117),
    [anon_sym_ATb_COLON] = ACTIONS(119),
    [anon_sym_ATB_COLON] = ACTIONS(121),
    [anon_sym_ATe_COLON] = ACTIONS(123),
    [anon_sym_ATF_COLON] = ACTIONS(125),
    [anon_sym_ATi_COLON] = ACTIONS(127),
    [anon_sym_ATk_COLON] = ACTIONS(129),
    [anon_sym_ATo_COLON] = ACTIONS(131),
    [anon_sym_ATr_COLON] = ACTIONS(133),
    [anon_sym_ATf_COLON] = ACTIONS(135),
    [anon_sym_ATs_COLON] = ACTIONS(137),
    [anon_sym_ATx_COLON] = ACTIONS(139),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_1_GT] = ACTIONS(183),
    [anon_sym_2_GT] = ACTIONS(183),
    [anon_sym_H_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_1_GT_GT] = ACTIONS(183),
    [anon_sym_2_GT_GT] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_eof] = ACTIONS(185),
  },
  [33] = {
    [sym__simple_command] = STATE(32),
    [sym__tmp_command] = STATE(32),
    [sym__iter_command] = STATE(32),
    [sym_iter_flags_command] = STATE(32),
    [sym_iter_dbta_command] = STATE(32),
    [sym_iter_dbtb_command] = STATE(32),
    [sym_iter_dbts_command] = STATE(32),
    [sym_tmp_seek_command] = STATE(32),
    [sym_tmp_blksz_command] = STATE(32),
    [sym_tmp_fromto_command] = STATE(32),
    [sym_tmp_arch_command] = STATE(32),
    [sym_tmp_bits_command] = STATE(32),
    [sym_tmp_nthi_command] = STATE(32),
    [sym_tmp_eval_command] = STATE(32),
    [sym_tmp_fs_command] = STATE(32),
    [sym_tmp_reli_command] = STATE(32),
    [sym_tmp_kuery_command] = STATE(32),
    [sym_tmp_fd_command] = STATE(32),
    [sym_tmp_reg_command] = STATE(32),
    [sym_tmp_file_command] = STATE(32),
    [sym_tmp_string_command] = STATE(32),
    [sym_tmp_hex_command] = STATE(32),
    [sym_arged_command] = STATE(32),
    [sym_repeat_command] = STATE(32),
    [sym_cmd_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
  [34] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_eof] = ACTIONS(189),
  },
  [35] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [sym_eof] = ACTIONS(193),
  },
  [36] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_eof] = ACTIONS(197),
  },
  [37] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_CR] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [sym_eof] = ACTIONS(201),
  },
  [38] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_CR] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_eof] = ACTIONS(205),
  },
  [39] = {
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_CR] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [sym_eof] = ACTIONS(209),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(24),
    [sym_cmd_identifier] = ACTIONS(211),
    [sym_number] = ACTIONS(24),
    [sym__comment] = ACTIONS(3),
  },
  [41] = {
    [sym_arg] = STATE(22),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [42] = {
    [sym_arg] = STATE(13),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [43] = {
    [sym_arg] = STATE(38),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [44] = {
    [sym_arg] = STATE(19),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [45] = {
    [sym_arg] = STATE(23),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [46] = {
    [sym_arg] = STATE(37),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [47] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [48] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [49] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [50] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [51] = {
    [sym_arg] = STATE(27),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [52] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [53] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [54] = {
    [sym_arg] = STATE(39),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [55] = {
    [sym_arg] = STATE(31),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [56] = {
    [sym_arg] = STATE(14),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [57] = {
    [sym_arg] = STATE(7),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [58] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [59] = {
    [sym_arg] = STATE(15),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [60] = {
    [sym_arg] = STATE(12),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [61] = {
    [sym_arg] = STATE(20),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [62] = {
    [sym_arg] = STATE(44),
    [sym_arg_identifier] = ACTIONS(215),
    [sym__comment] = ACTIONS(3),
  },
  [63] = {
    [sym_arg] = STATE(21),
    [sym_arg_identifier] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym__comment] = ACTIONS(219),
  },
  [65] = {
    [sym_arg_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(33),
  [11] = {.count = 1, .reusable = false}, REDUCE(sym__simple_command, 1),
  [13] = {.count = 1, .reusable = false}, SHIFT(11),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym__simple_command, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arged_command_repeat1, 2),
  [19] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arged_command_repeat1, 2), SHIFT_REPEAT(11),
  [22] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arged_command_repeat1, 2),
  [24] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [26] = {.count = 2, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(33),
  [32] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [34] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 2),
  [36] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 2),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [40] = {.count = 1, .reusable = false}, SHIFT(60),
  [42] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [44] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [48] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(60),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [103] = {.count = 1, .reusable = false}, SHIFT(45),
  [105] = {.count = 1, .reusable = false}, SHIFT(16),
  [107] = {.count = 1, .reusable = false}, SHIFT(17),
  [109] = {.count = 1, .reusable = false}, SHIFT(18),
  [111] = {.count = 1, .reusable = false}, SHIFT(41),
  [113] = {.count = 1, .reusable = false}, SHIFT(63),
  [115] = {.count = 1, .reusable = false}, SHIFT(62),
  [117] = {.count = 1, .reusable = false}, SHIFT(61),
  [119] = {.count = 1, .reusable = false}, SHIFT(59),
  [121] = {.count = 1, .reusable = false}, SHIFT(58),
  [123] = {.count = 1, .reusable = false}, SHIFT(57),
  [125] = {.count = 1, .reusable = false}, SHIFT(56),
  [127] = {.count = 1, .reusable = false}, SHIFT(55),
  [129] = {.count = 1, .reusable = false}, SHIFT(42),
  [131] = {.count = 1, .reusable = false}, SHIFT(53),
  [133] = {.count = 1, .reusable = false}, SHIFT(52),
  [135] = {.count = 1, .reusable = false}, SHIFT(51),
  [137] = {.count = 1, .reusable = false}, SHIFT(50),
  [139] = {.count = 1, .reusable = false}, SHIFT(49),
  [141] = {.count = 1, .reusable = false}, SHIFT(48),
  [143] = {.count = 1, .reusable = false}, SHIFT(47),
  [145] = {.count = 1, .reusable = false}, SHIFT(46),
  [147] = {.count = 1, .reusable = false}, SHIFT(43),
  [149] = {.count = 1, .reusable = false}, SHIFT(54),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym__command, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_out_redirect_command, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [191] = {.count = 1, .reusable = false}, SHIFT(40),
  [193] = {.count = 1, .reusable = true}, SHIFT(40),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_err_redirect_command, 3),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_html_redirect_command, 3),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_out_append_redirect_command, 3),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_err_append_redirect_command, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [213] = {.count = 1, .reusable = false}, SHIFT(10),
  [215] = {.count = 1, .reusable = false}, SHIFT(65),
  [217] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [219] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
};

void *tree_sitter_r2cmd_external_scanner_create(void);
void tree_sitter_r2cmd_external_scanner_destroy(void *);
bool tree_sitter_r2cmd_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_r2cmd_external_scanner_serialize(void *, char *);
void tree_sitter_r2cmd_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_r2cmd(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_r2cmd_external_scanner_create,
      tree_sitter_r2cmd_external_scanner_destroy,
      tree_sitter_r2cmd_external_scanner_scan,
      tree_sitter_r2cmd_external_scanner_serialize,
      tree_sitter_r2cmd_external_scanner_deserialize,
    },
  };
  return &language;
}
