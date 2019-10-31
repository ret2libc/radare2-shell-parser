#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 92
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_PIPE = 1,
  anon_sym_PIPEH = 2,
  anon_sym_AT_AT = 3,
  anon_sym_AT_ATdbt = 4,
  anon_sym_AT_ATdbta = 5,
  anon_sym_AT_ATdbtb = 6,
  anon_sym_AT_ATdbts = 7,
  anon_sym_AT = 8,
  anon_sym_AT_BANG = 9,
  anon_sym_AT_LPAREN = 10,
  anon_sym_ATa_COLON = 11,
  anon_sym_ATb_COLON = 12,
  anon_sym_ATB_COLON = 13,
  anon_sym_ATe_COLON = 14,
  anon_sym_COMMA = 15,
  anon_sym_ATF_COLON = 16,
  anon_sym_ATi_COLON = 17,
  anon_sym_ATk_COLON = 18,
  anon_sym_ATo_COLON = 19,
  anon_sym_ATr_COLON = 20,
  anon_sym_ATf_COLON = 21,
  anon_sym_ATs_COLON = 22,
  anon_sym_ATx_COLON = 23,
  anon_sym_STAR = 24,
  anon_sym_EQ = 25,
  anon_sym_PERCENT = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_BANG = 29,
  anon_sym_DOT = 30,
  anon_sym_PIPE_DOT = 31,
  anon_sym_GT = 32,
  anon_sym_1_GT = 33,
  anon_sym_2_GT = 34,
  anon_sym_H_GT = 35,
  anon_sym_GT_GT = 36,
  anon_sym_1_GT_GT = 37,
  anon_sym_2_GT_GT = 38,
  sym_eq_sep_key = 39,
  aux_sym_eq_sep_val_token1 = 40,
  sym__macro_content = 41,
  sym__any_command = 42,
  aux_sym_cmd_identifier_token1 = 43,
  anon_sym_QMARK_PIPE_QMARK = 44,
  anon_sym_PIPE_QMARK = 45,
  sym_number = 46,
  sym__comment = 47,
  anon_sym_LF = 48,
  anon_sym_CR = 49,
  anon_sym_SEMI = 50,
  sym_commands = 51,
  sym__command = 52,
  sym__simple_command = 53,
  sym__tmp_command = 54,
  sym__iter_command = 55,
  sym__pipe_command = 56,
  sym_html_disable_command = 57,
  sym_html_enable_command = 58,
  sym_pipe_command = 59,
  sym_pipe_second_command = 60,
  sym_iter_flags_command = 61,
  sym_iter_dbta_command = 62,
  sym_iter_dbtb_command = 63,
  sym_iter_dbts_command = 64,
  sym_tmp_seek_command = 65,
  sym_tmp_blksz_command = 66,
  sym_tmp_fromto_command = 67,
  sym_tmp_arch_command = 68,
  sym_tmp_bits_command = 69,
  sym_tmp_nthi_command = 70,
  sym_tmp_eval_command = 71,
  sym_tmp_fs_command = 72,
  sym_tmp_reli_command = 73,
  sym_tmp_kuery_command = 74,
  sym_tmp_fd_command = 75,
  sym_tmp_reg_command = 76,
  sym_tmp_file_command = 77,
  sym_tmp_string_command = 78,
  sym_tmp_hex_command = 79,
  sym_pointer_command = 80,
  sym_env_command = 81,
  sym_macro_command = 82,
  sym_system_command = 83,
  sym_interpret_command = 84,
  sym_arged_command = 85,
  sym_repeat_command = 86,
  sym_out_redirect_command = 87,
  sym_err_redirect_command = 88,
  sym_html_redirect_command = 89,
  sym_out_append_redirect_command = 90,
  sym_err_append_redirect_command = 91,
  sym_arg = 92,
  sym_eq_sep_val = 93,
  sym_cmd_identifier = 94,
  sym_arg_identifier = 95,
  aux_sym_commands_repeat1 = 96,
  aux_sym_tmp_eval_command_repeat1 = 97,
  aux_sym_arged_command_repeat1 = 98,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPEH] = "|H",
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
  [anon_sym_STAR] = "*",
  [anon_sym_EQ] = "=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_PIPE_DOT] = "|.",
  [anon_sym_GT] = ">",
  [anon_sym_1_GT] = "1>",
  [anon_sym_2_GT] = "2>",
  [anon_sym_H_GT] = "H>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_1_GT_GT] = "1>>",
  [anon_sym_2_GT_GT] = "2>>",
  [sym_eq_sep_key] = "eq_sep_key",
  [aux_sym_eq_sep_val_token1] = "eq_sep_val_token1",
  [sym__macro_content] = "_macro_content",
  [sym__any_command] = "_any_command",
  [aux_sym_cmd_identifier_token1] = "cmd_identifier_token1",
  [anon_sym_QMARK_PIPE_QMARK] = "?|?",
  [anon_sym_PIPE_QMARK] = "|?",
  [sym_number] = "number",
  [sym__comment] = "_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_SEMI] = ";",
  [sym_commands] = "commands",
  [sym__command] = "_command",
  [sym__simple_command] = "_simple_command",
  [sym__tmp_command] = "_tmp_command",
  [sym__iter_command] = "_iter_command",
  [sym__pipe_command] = "_pipe_command",
  [sym_html_disable_command] = "html_disable_command",
  [sym_html_enable_command] = "html_enable_command",
  [sym_pipe_command] = "pipe_command",
  [sym_pipe_second_command] = "pipe_second_command",
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
  [sym_pointer_command] = "pointer_command",
  [sym_env_command] = "env_command",
  [sym_macro_command] = "macro_command",
  [sym_system_command] = "system_command",
  [sym_interpret_command] = "interpret_command",
  [sym_arged_command] = "arged_command",
  [sym_repeat_command] = "repeat_command",
  [sym_out_redirect_command] = "out_redirect_command",
  [sym_err_redirect_command] = "err_redirect_command",
  [sym_html_redirect_command] = "html_redirect_command",
  [sym_out_append_redirect_command] = "out_append_redirect_command",
  [sym_err_append_redirect_command] = "err_append_redirect_command",
  [sym_arg] = "arg",
  [sym_eq_sep_val] = "eq_sep_val",
  [sym_cmd_identifier] = "cmd_identifier",
  [sym_arg_identifier] = "arg_identifier",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym_arged_command_repeat1] = "arged_command_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPEH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_DOT] = {
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
  [sym_eq_sep_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_eq_sep_val_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__macro_content] = {
    .visible = false,
    .named = true,
  },
  [sym__any_command] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_cmd_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK_PIPE_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_QMARK] = {
    .visible = true,
    .named = false,
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
  [sym__pipe_command] = {
    .visible = false,
    .named = true,
  },
  [sym_html_disable_command] = {
    .visible = true,
    .named = true,
  },
  [sym_html_enable_command] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_command] = {
    .visible = true,
    .named = true,
  },
  [sym_pipe_second_command] = {
    .visible = true,
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
  [sym_pointer_command] = {
    .visible = true,
    .named = true,
  },
  [sym_env_command] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_command] = {
    .visible = true,
    .named = true,
  },
  [sym_system_command] = {
    .visible = true,
    .named = true,
  },
  [sym_interpret_command] = {
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
  [sym_eq_sep_val] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_identifier] = {
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
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '1') ADVANCE(168);
      if (lookahead == '2') ADVANCE(169);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(35);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(180);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(180);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == ',') ADVANCE(65);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '2') ADVANCE(29);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '!') ADVANCE(87);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead == '?') ADVANCE(164);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(133);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == '?') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == '?') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == '|') ADVANCE(31);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 's') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'B') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'B') ADVANCE(140);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 'x') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_H_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(15);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(15);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == '2') ADVANCE(124);
      if (lookahead == 'H') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(15);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(121);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(15);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == ')') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(130);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 0) ADVANCE(36);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == '2') ADVANCE(154);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(138);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(15);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_QMARK_PIPE_QMARK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE_QMARK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == '>') ADVANCE(93);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == '>') ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(171);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(106);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(116);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(117);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(105);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(106);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '\r') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 134},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 136},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 10},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPEH] = ACTIONS(1),
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_1_GT] = ACTIONS(1),
    [anon_sym_2_GT] = ACTIONS(1),
    [anon_sym_H_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_1_GT_GT] = ACTIONS(1),
    [anon_sym_2_GT_GT] = ACTIONS(1),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(87),
    [sym__command] = STATE(51),
    [sym__simple_command] = STATE(23),
    [sym__tmp_command] = STATE(23),
    [sym__iter_command] = STATE(23),
    [sym__pipe_command] = STATE(23),
    [sym_html_disable_command] = STATE(23),
    [sym_html_enable_command] = STATE(23),
    [sym_pipe_command] = STATE(23),
    [sym_iter_flags_command] = STATE(23),
    [sym_iter_dbta_command] = STATE(23),
    [sym_iter_dbtb_command] = STATE(23),
    [sym_iter_dbts_command] = STATE(23),
    [sym_tmp_seek_command] = STATE(23),
    [sym_tmp_blksz_command] = STATE(23),
    [sym_tmp_fromto_command] = STATE(23),
    [sym_tmp_arch_command] = STATE(23),
    [sym_tmp_bits_command] = STATE(23),
    [sym_tmp_nthi_command] = STATE(23),
    [sym_tmp_eval_command] = STATE(23),
    [sym_tmp_fs_command] = STATE(23),
    [sym_tmp_reli_command] = STATE(23),
    [sym_tmp_kuery_command] = STATE(23),
    [sym_tmp_fd_command] = STATE(23),
    [sym_tmp_reg_command] = STATE(23),
    [sym_tmp_file_command] = STATE(23),
    [sym_tmp_string_command] = STATE(23),
    [sym_tmp_hex_command] = STATE(23),
    [sym_pointer_command] = STATE(23),
    [sym_env_command] = STATE(23),
    [sym_macro_command] = STATE(23),
    [sym_system_command] = STATE(23),
    [sym_interpret_command] = STATE(23),
    [sym_arged_command] = STATE(23),
    [sym_repeat_command] = STATE(23),
    [sym_out_redirect_command] = STATE(51),
    [sym_err_redirect_command] = STATE(51),
    [sym_html_redirect_command] = STATE(51),
    [sym_out_append_redirect_command] = STATE(51),
    [sym_err_append_redirect_command] = STATE(51),
    [sym_cmd_identifier] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [aux_sym_cmd_identifier_token1] = ACTIONS(17),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(19),
    [anon_sym_PIPE_QMARK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym__comment] = ACTIONS(23),
  },
  [2] = {
    [sym__command] = STATE(55),
    [sym__simple_command] = STATE(23),
    [sym__tmp_command] = STATE(23),
    [sym__iter_command] = STATE(23),
    [sym__pipe_command] = STATE(23),
    [sym_html_disable_command] = STATE(23),
    [sym_html_enable_command] = STATE(23),
    [sym_pipe_command] = STATE(23),
    [sym_iter_flags_command] = STATE(23),
    [sym_iter_dbta_command] = STATE(23),
    [sym_iter_dbtb_command] = STATE(23),
    [sym_iter_dbts_command] = STATE(23),
    [sym_tmp_seek_command] = STATE(23),
    [sym_tmp_blksz_command] = STATE(23),
    [sym_tmp_fromto_command] = STATE(23),
    [sym_tmp_arch_command] = STATE(23),
    [sym_tmp_bits_command] = STATE(23),
    [sym_tmp_nthi_command] = STATE(23),
    [sym_tmp_eval_command] = STATE(23),
    [sym_tmp_fs_command] = STATE(23),
    [sym_tmp_reli_command] = STATE(23),
    [sym_tmp_kuery_command] = STATE(23),
    [sym_tmp_fd_command] = STATE(23),
    [sym_tmp_reg_command] = STATE(23),
    [sym_tmp_file_command] = STATE(23),
    [sym_tmp_string_command] = STATE(23),
    [sym_tmp_hex_command] = STATE(23),
    [sym_pointer_command] = STATE(23),
    [sym_env_command] = STATE(23),
    [sym_macro_command] = STATE(23),
    [sym_system_command] = STATE(23),
    [sym_interpret_command] = STATE(23),
    [sym_arged_command] = STATE(23),
    [sym_repeat_command] = STATE(23),
    [sym_out_redirect_command] = STATE(55),
    [sym_err_redirect_command] = STATE(55),
    [sym_html_redirect_command] = STATE(55),
    [sym_out_append_redirect_command] = STATE(55),
    [sym_err_append_redirect_command] = STATE(55),
    [sym_cmd_identifier] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_BANG] = ACTIONS(33),
    [anon_sym_DOT] = ACTIONS(35),
    [aux_sym_cmd_identifier_token1] = ACTIONS(17),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(17),
    [anon_sym_PIPE_QMARK] = ACTIONS(17),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
  },
  [3] = {
    [sym__simple_command] = STATE(50),
    [sym__tmp_command] = STATE(50),
    [sym__iter_command] = STATE(50),
    [sym__pipe_command] = STATE(50),
    [sym_html_disable_command] = STATE(50),
    [sym_html_enable_command] = STATE(50),
    [sym_pipe_command] = STATE(50),
    [sym_iter_flags_command] = STATE(50),
    [sym_iter_dbta_command] = STATE(50),
    [sym_iter_dbtb_command] = STATE(50),
    [sym_iter_dbts_command] = STATE(50),
    [sym_tmp_seek_command] = STATE(50),
    [sym_tmp_blksz_command] = STATE(50),
    [sym_tmp_fromto_command] = STATE(50),
    [sym_tmp_arch_command] = STATE(50),
    [sym_tmp_bits_command] = STATE(50),
    [sym_tmp_nthi_command] = STATE(50),
    [sym_tmp_eval_command] = STATE(50),
    [sym_tmp_fs_command] = STATE(50),
    [sym_tmp_reli_command] = STATE(50),
    [sym_tmp_kuery_command] = STATE(50),
    [sym_tmp_fd_command] = STATE(50),
    [sym_tmp_reg_command] = STATE(50),
    [sym_tmp_file_command] = STATE(50),
    [sym_tmp_string_command] = STATE(50),
    [sym_tmp_hex_command] = STATE(50),
    [sym_pointer_command] = STATE(50),
    [sym_env_command] = STATE(50),
    [sym_macro_command] = STATE(50),
    [sym_system_command] = STATE(50),
    [sym_interpret_command] = STATE(50),
    [sym_arged_command] = STATE(50),
    [sym_repeat_command] = STATE(50),
    [sym_cmd_identifier] = STATE(6),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [aux_sym_cmd_identifier_token1] = ACTIONS(17),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(19),
    [anon_sym_PIPE_QMARK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym__comment] = ACTIONS(23),
  },
  [4] = {
    [sym__simple_command] = STATE(39),
    [sym__tmp_command] = STATE(39),
    [sym__iter_command] = STATE(39),
    [sym__pipe_command] = STATE(39),
    [sym_html_disable_command] = STATE(39),
    [sym_html_enable_command] = STATE(39),
    [sym_pipe_command] = STATE(39),
    [sym_iter_flags_command] = STATE(39),
    [sym_iter_dbta_command] = STATE(39),
    [sym_iter_dbtb_command] = STATE(39),
    [sym_iter_dbts_command] = STATE(39),
    [sym_tmp_seek_command] = STATE(39),
    [sym_tmp_blksz_command] = STATE(39),
    [sym_tmp_fromto_command] = STATE(39),
    [sym_tmp_arch_command] = STATE(39),
    [sym_tmp_bits_command] = STATE(39),
    [sym_tmp_nthi_command] = STATE(39),
    [sym_tmp_eval_command] = STATE(39),
    [sym_tmp_fs_command] = STATE(39),
    [sym_tmp_reli_command] = STATE(39),
    [sym_tmp_kuery_command] = STATE(39),
    [sym_tmp_fd_command] = STATE(39),
    [sym_tmp_reg_command] = STATE(39),
    [sym_tmp_file_command] = STATE(39),
    [sym_tmp_string_command] = STATE(39),
    [sym_tmp_hex_command] = STATE(39),
    [sym_pointer_command] = STATE(39),
    [sym_env_command] = STATE(39),
    [sym_macro_command] = STATE(39),
    [sym_system_command] = STATE(39),
    [sym_interpret_command] = STATE(39),
    [sym_arged_command] = STATE(39),
    [sym_repeat_command] = STATE(39),
    [sym_cmd_identifier] = STATE(6),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [aux_sym_cmd_identifier_token1] = ACTIONS(17),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(19),
    [anon_sym_PIPE_QMARK] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym__comment] = ACTIONS(23),
  },
  [5] = {
    [sym_arg] = STATE(7),
    [sym_arg_identifier] = STATE(18),
    [aux_sym_arged_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(43),
    [anon_sym_PIPEH] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(43),
    [anon_sym_AT_ATdbt] = ACTIONS(43),
    [anon_sym_AT_ATdbta] = ACTIONS(43),
    [anon_sym_AT_ATdbtb] = ACTIONS(43),
    [anon_sym_AT_ATdbts] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(43),
    [anon_sym_AT_BANG] = ACTIONS(43),
    [anon_sym_AT_LPAREN] = ACTIONS(43),
    [anon_sym_ATa_COLON] = ACTIONS(43),
    [anon_sym_ATb_COLON] = ACTIONS(43),
    [anon_sym_ATB_COLON] = ACTIONS(43),
    [anon_sym_ATe_COLON] = ACTIONS(43),
    [anon_sym_ATF_COLON] = ACTIONS(43),
    [anon_sym_ATi_COLON] = ACTIONS(43),
    [anon_sym_ATk_COLON] = ACTIONS(43),
    [anon_sym_ATo_COLON] = ACTIONS(43),
    [anon_sym_ATr_COLON] = ACTIONS(43),
    [anon_sym_ATf_COLON] = ACTIONS(43),
    [anon_sym_ATs_COLON] = ACTIONS(43),
    [anon_sym_ATx_COLON] = ACTIONS(43),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(43),
    [anon_sym_1_GT] = ACTIONS(43),
    [anon_sym_2_GT] = ACTIONS(43),
    [anon_sym_H_GT] = ACTIONS(43),
    [anon_sym_GT_GT] = ACTIONS(43),
    [anon_sym_1_GT_GT] = ACTIONS(43),
    [anon_sym_2_GT_GT] = ACTIONS(43),
    [aux_sym_eq_sep_val_token1] = ACTIONS(45),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_CR] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
  },
  [6] = {
    [sym_arg] = STATE(5),
    [sym_arg_identifier] = STATE(18),
    [aux_sym_arged_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_PIPEH] = ACTIONS(49),
    [anon_sym_AT_AT] = ACTIONS(49),
    [anon_sym_AT_ATdbt] = ACTIONS(49),
    [anon_sym_AT_ATdbta] = ACTIONS(49),
    [anon_sym_AT_ATdbtb] = ACTIONS(49),
    [anon_sym_AT_ATdbts] = ACTIONS(49),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_AT_BANG] = ACTIONS(49),
    [anon_sym_AT_LPAREN] = ACTIONS(49),
    [anon_sym_ATa_COLON] = ACTIONS(49),
    [anon_sym_ATb_COLON] = ACTIONS(49),
    [anon_sym_ATB_COLON] = ACTIONS(49),
    [anon_sym_ATe_COLON] = ACTIONS(49),
    [anon_sym_ATF_COLON] = ACTIONS(49),
    [anon_sym_ATi_COLON] = ACTIONS(49),
    [anon_sym_ATk_COLON] = ACTIONS(49),
    [anon_sym_ATo_COLON] = ACTIONS(49),
    [anon_sym_ATr_COLON] = ACTIONS(49),
    [anon_sym_ATf_COLON] = ACTIONS(49),
    [anon_sym_ATs_COLON] = ACTIONS(49),
    [anon_sym_ATx_COLON] = ACTIONS(49),
    [anon_sym_PIPE_DOT] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_1_GT] = ACTIONS(49),
    [anon_sym_2_GT] = ACTIONS(49),
    [anon_sym_H_GT] = ACTIONS(49),
    [anon_sym_GT_GT] = ACTIONS(49),
    [anon_sym_1_GT_GT] = ACTIONS(49),
    [anon_sym_2_GT_GT] = ACTIONS(49),
    [aux_sym_eq_sep_val_token1] = ACTIONS(45),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
  },
  [7] = {
    [sym_arg] = STATE(7),
    [sym_arg_identifier] = STATE(18),
    [aux_sym_arged_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_PIPEH] = ACTIONS(53),
    [anon_sym_AT_AT] = ACTIONS(53),
    [anon_sym_AT_ATdbt] = ACTIONS(53),
    [anon_sym_AT_ATdbta] = ACTIONS(53),
    [anon_sym_AT_ATdbtb] = ACTIONS(53),
    [anon_sym_AT_ATdbts] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(53),
    [anon_sym_AT_BANG] = ACTIONS(53),
    [anon_sym_AT_LPAREN] = ACTIONS(53),
    [anon_sym_ATa_COLON] = ACTIONS(53),
    [anon_sym_ATb_COLON] = ACTIONS(53),
    [anon_sym_ATB_COLON] = ACTIONS(53),
    [anon_sym_ATe_COLON] = ACTIONS(53),
    [anon_sym_ATF_COLON] = ACTIONS(53),
    [anon_sym_ATi_COLON] = ACTIONS(53),
    [anon_sym_ATk_COLON] = ACTIONS(53),
    [anon_sym_ATo_COLON] = ACTIONS(53),
    [anon_sym_ATr_COLON] = ACTIONS(53),
    [anon_sym_ATf_COLON] = ACTIONS(53),
    [anon_sym_ATs_COLON] = ACTIONS(53),
    [anon_sym_ATx_COLON] = ACTIONS(53),
    [anon_sym_PIPE_DOT] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(53),
    [anon_sym_1_GT] = ACTIONS(53),
    [anon_sym_2_GT] = ACTIONS(53),
    [anon_sym_H_GT] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_1_GT_GT] = ACTIONS(53),
    [anon_sym_2_GT_GT] = ACTIONS(53),
    [aux_sym_eq_sep_val_token1] = ACTIONS(55),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
  },
  [8] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_PIPEH] = ACTIONS(60),
    [anon_sym_AT_AT] = ACTIONS(60),
    [anon_sym_AT_ATdbt] = ACTIONS(60),
    [anon_sym_AT_ATdbta] = ACTIONS(60),
    [anon_sym_AT_ATdbtb] = ACTIONS(60),
    [anon_sym_AT_ATdbts] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_AT_BANG] = ACTIONS(60),
    [anon_sym_AT_LPAREN] = ACTIONS(60),
    [anon_sym_ATa_COLON] = ACTIONS(60),
    [anon_sym_ATb_COLON] = ACTIONS(60),
    [anon_sym_ATB_COLON] = ACTIONS(60),
    [anon_sym_ATe_COLON] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_ATF_COLON] = ACTIONS(60),
    [anon_sym_ATi_COLON] = ACTIONS(60),
    [anon_sym_ATk_COLON] = ACTIONS(60),
    [anon_sym_ATo_COLON] = ACTIONS(60),
    [anon_sym_ATr_COLON] = ACTIONS(60),
    [anon_sym_ATf_COLON] = ACTIONS(60),
    [anon_sym_ATs_COLON] = ACTIONS(60),
    [anon_sym_ATx_COLON] = ACTIONS(60),
    [anon_sym_PIPE_DOT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_1_GT] = ACTIONS(60),
    [anon_sym_2_GT] = ACTIONS(60),
    [anon_sym_H_GT] = ACTIONS(60),
    [anon_sym_GT_GT] = ACTIONS(60),
    [anon_sym_1_GT_GT] = ACTIONS(60),
    [anon_sym_2_GT_GT] = ACTIONS(60),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(60),
    [anon_sym_CR] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(60),
  },
  [9] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(67),
    [anon_sym_PIPEH] = ACTIONS(67),
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
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_ATF_COLON] = ACTIONS(67),
    [anon_sym_ATi_COLON] = ACTIONS(67),
    [anon_sym_ATk_COLON] = ACTIONS(67),
    [anon_sym_ATo_COLON] = ACTIONS(67),
    [anon_sym_ATr_COLON] = ACTIONS(67),
    [anon_sym_ATf_COLON] = ACTIONS(67),
    [anon_sym_ATs_COLON] = ACTIONS(67),
    [anon_sym_ATx_COLON] = ACTIONS(67),
    [anon_sym_PIPE_DOT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_1_GT] = ACTIONS(67),
    [anon_sym_2_GT] = ACTIONS(67),
    [anon_sym_H_GT] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_1_GT_GT] = ACTIONS(67),
    [anon_sym_2_GT_GT] = ACTIONS(67),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(67),
    [anon_sym_CR] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
  },
  [10] = {
    [sym_pipe_second_command] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_PIPEH] = ACTIONS(73),
    [anon_sym_AT_AT] = ACTIONS(73),
    [anon_sym_AT_ATdbt] = ACTIONS(73),
    [anon_sym_AT_ATdbta] = ACTIONS(73),
    [anon_sym_AT_ATdbtb] = ACTIONS(73),
    [anon_sym_AT_ATdbts] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_AT_BANG] = ACTIONS(73),
    [anon_sym_AT_LPAREN] = ACTIONS(73),
    [anon_sym_ATa_COLON] = ACTIONS(73),
    [anon_sym_ATb_COLON] = ACTIONS(73),
    [anon_sym_ATB_COLON] = ACTIONS(73),
    [anon_sym_ATe_COLON] = ACTIONS(73),
    [anon_sym_ATF_COLON] = ACTIONS(73),
    [anon_sym_ATi_COLON] = ACTIONS(73),
    [anon_sym_ATk_COLON] = ACTIONS(73),
    [anon_sym_ATo_COLON] = ACTIONS(73),
    [anon_sym_ATr_COLON] = ACTIONS(73),
    [anon_sym_ATf_COLON] = ACTIONS(73),
    [anon_sym_ATs_COLON] = ACTIONS(73),
    [anon_sym_ATx_COLON] = ACTIONS(73),
    [anon_sym_PIPE_DOT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_1_GT] = ACTIONS(73),
    [anon_sym_2_GT] = ACTIONS(73),
    [anon_sym_H_GT] = ACTIONS(73),
    [anon_sym_GT_GT] = ACTIONS(73),
    [anon_sym_1_GT_GT] = ACTIONS(73),
    [anon_sym_2_GT_GT] = ACTIONS(73),
    [sym__any_command] = ACTIONS(75),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_CR] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
  },
  [11] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PIPEH] = ACTIONS(79),
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
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_ATF_COLON] = ACTIONS(79),
    [anon_sym_ATi_COLON] = ACTIONS(79),
    [anon_sym_ATk_COLON] = ACTIONS(79),
    [anon_sym_ATo_COLON] = ACTIONS(79),
    [anon_sym_ATr_COLON] = ACTIONS(79),
    [anon_sym_ATf_COLON] = ACTIONS(79),
    [anon_sym_ATs_COLON] = ACTIONS(79),
    [anon_sym_ATx_COLON] = ACTIONS(79),
    [anon_sym_PIPE_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_1_GT] = ACTIONS(79),
    [anon_sym_2_GT] = ACTIONS(79),
    [anon_sym_H_GT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_1_GT_GT] = ACTIONS(79),
    [anon_sym_2_GT_GT] = ACTIONS(79),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(60),
    [anon_sym_PIPEH] = ACTIONS(60),
    [anon_sym_AT_AT] = ACTIONS(60),
    [anon_sym_AT_ATdbt] = ACTIONS(60),
    [anon_sym_AT_ATdbta] = ACTIONS(60),
    [anon_sym_AT_ATdbtb] = ACTIONS(60),
    [anon_sym_AT_ATdbts] = ACTIONS(60),
    [anon_sym_AT] = ACTIONS(60),
    [anon_sym_AT_BANG] = ACTIONS(60),
    [anon_sym_AT_LPAREN] = ACTIONS(60),
    [anon_sym_ATa_COLON] = ACTIONS(60),
    [anon_sym_ATb_COLON] = ACTIONS(60),
    [anon_sym_ATB_COLON] = ACTIONS(60),
    [anon_sym_ATe_COLON] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_ATF_COLON] = ACTIONS(60),
    [anon_sym_ATi_COLON] = ACTIONS(60),
    [anon_sym_ATk_COLON] = ACTIONS(60),
    [anon_sym_ATo_COLON] = ACTIONS(60),
    [anon_sym_ATr_COLON] = ACTIONS(60),
    [anon_sym_ATf_COLON] = ACTIONS(60),
    [anon_sym_ATs_COLON] = ACTIONS(60),
    [anon_sym_ATx_COLON] = ACTIONS(60),
    [anon_sym_PIPE_DOT] = ACTIONS(60),
    [anon_sym_GT] = ACTIONS(60),
    [anon_sym_1_GT] = ACTIONS(60),
    [anon_sym_2_GT] = ACTIONS(60),
    [anon_sym_H_GT] = ACTIONS(60),
    [anon_sym_GT_GT] = ACTIONS(60),
    [anon_sym_1_GT_GT] = ACTIONS(60),
    [anon_sym_2_GT_GT] = ACTIONS(60),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(60),
    [anon_sym_CR] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(60),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_PIPEH] = ACTIONS(83),
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
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_ATF_COLON] = ACTIONS(83),
    [anon_sym_ATi_COLON] = ACTIONS(83),
    [anon_sym_ATk_COLON] = ACTIONS(83),
    [anon_sym_ATo_COLON] = ACTIONS(83),
    [anon_sym_ATr_COLON] = ACTIONS(83),
    [anon_sym_ATf_COLON] = ACTIONS(83),
    [anon_sym_ATs_COLON] = ACTIONS(83),
    [anon_sym_ATx_COLON] = ACTIONS(83),
    [anon_sym_PIPE_DOT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_1_GT] = ACTIONS(83),
    [anon_sym_2_GT] = ACTIONS(83),
    [anon_sym_H_GT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_1_GT_GT] = ACTIONS(83),
    [anon_sym_2_GT_GT] = ACTIONS(83),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_CR] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PIPEH] = ACTIONS(87),
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
    [anon_sym_PIPE_DOT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_1_GT] = ACTIONS(87),
    [anon_sym_2_GT] = ACTIONS(87),
    [anon_sym_H_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_1_GT_GT] = ACTIONS(87),
    [anon_sym_2_GT_GT] = ACTIONS(87),
    [aux_sym_eq_sep_val_token1] = ACTIONS(87),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_CR] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPEH] = ACTIONS(91),
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
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_PIPE_DOT] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_1_GT] = ACTIONS(91),
    [anon_sym_2_GT] = ACTIONS(91),
    [anon_sym_H_GT] = ACTIONS(91),
    [anon_sym_GT_GT] = ACTIONS(91),
    [anon_sym_1_GT_GT] = ACTIONS(91),
    [anon_sym_2_GT_GT] = ACTIONS(91),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(91),
    [anon_sym_CR] = ACTIONS(91),
    [anon_sym_SEMI] = ACTIONS(91),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_PIPEH] = ACTIONS(97),
    [anon_sym_AT_AT] = ACTIONS(97),
    [anon_sym_AT_ATdbt] = ACTIONS(97),
    [anon_sym_AT_ATdbta] = ACTIONS(97),
    [anon_sym_AT_ATdbtb] = ACTIONS(97),
    [anon_sym_AT_ATdbts] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym_AT_BANG] = ACTIONS(97),
    [anon_sym_AT_LPAREN] = ACTIONS(97),
    [anon_sym_ATa_COLON] = ACTIONS(97),
    [anon_sym_ATb_COLON] = ACTIONS(97),
    [anon_sym_ATB_COLON] = ACTIONS(97),
    [anon_sym_ATe_COLON] = ACTIONS(97),
    [anon_sym_ATF_COLON] = ACTIONS(97),
    [anon_sym_ATi_COLON] = ACTIONS(97),
    [anon_sym_ATk_COLON] = ACTIONS(97),
    [anon_sym_ATo_COLON] = ACTIONS(97),
    [anon_sym_ATr_COLON] = ACTIONS(97),
    [anon_sym_ATf_COLON] = ACTIONS(97),
    [anon_sym_ATs_COLON] = ACTIONS(97),
    [anon_sym_ATx_COLON] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_1_GT] = ACTIONS(97),
    [anon_sym_2_GT] = ACTIONS(97),
    [anon_sym_H_GT] = ACTIONS(97),
    [anon_sym_GT_GT] = ACTIONS(97),
    [anon_sym_1_GT_GT] = ACTIONS(97),
    [anon_sym_2_GT_GT] = ACTIONS(97),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPEH] = ACTIONS(103),
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(103),
    [anon_sym_AT_ATdbta] = ACTIONS(103),
    [anon_sym_AT_ATdbtb] = ACTIONS(103),
    [anon_sym_AT_ATdbts] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_AT_BANG] = ACTIONS(103),
    [anon_sym_AT_LPAREN] = ACTIONS(103),
    [anon_sym_ATa_COLON] = ACTIONS(103),
    [anon_sym_ATb_COLON] = ACTIONS(103),
    [anon_sym_ATB_COLON] = ACTIONS(103),
    [anon_sym_ATe_COLON] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_ATF_COLON] = ACTIONS(103),
    [anon_sym_ATi_COLON] = ACTIONS(103),
    [anon_sym_ATk_COLON] = ACTIONS(103),
    [anon_sym_ATo_COLON] = ACTIONS(103),
    [anon_sym_ATr_COLON] = ACTIONS(103),
    [anon_sym_ATf_COLON] = ACTIONS(103),
    [anon_sym_ATs_COLON] = ACTIONS(103),
    [anon_sym_ATx_COLON] = ACTIONS(103),
    [anon_sym_PIPE_DOT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_1_GT] = ACTIONS(103),
    [anon_sym_2_GT] = ACTIONS(103),
    [anon_sym_H_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_1_GT_GT] = ACTIONS(103),
    [anon_sym_2_GT_GT] = ACTIONS(103),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_CR] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_PIPEH] = ACTIONS(83),
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
    [anon_sym_PIPE_DOT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(83),
    [anon_sym_1_GT] = ACTIONS(83),
    [anon_sym_2_GT] = ACTIONS(83),
    [anon_sym_H_GT] = ACTIONS(83),
    [anon_sym_GT_GT] = ACTIONS(83),
    [anon_sym_1_GT_GT] = ACTIONS(83),
    [anon_sym_2_GT_GT] = ACTIONS(83),
    [aux_sym_eq_sep_val_token1] = ACTIONS(83),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_CR] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PIPEH] = ACTIONS(107),
    [anon_sym_AT_AT] = ACTIONS(107),
    [anon_sym_AT_ATdbt] = ACTIONS(107),
    [anon_sym_AT_ATdbta] = ACTIONS(107),
    [anon_sym_AT_ATdbtb] = ACTIONS(107),
    [anon_sym_AT_ATdbts] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym_AT_BANG] = ACTIONS(107),
    [anon_sym_AT_LPAREN] = ACTIONS(107),
    [anon_sym_ATa_COLON] = ACTIONS(107),
    [anon_sym_ATb_COLON] = ACTIONS(107),
    [anon_sym_ATB_COLON] = ACTIONS(107),
    [anon_sym_ATe_COLON] = ACTIONS(107),
    [anon_sym_ATF_COLON] = ACTIONS(107),
    [anon_sym_ATi_COLON] = ACTIONS(107),
    [anon_sym_ATk_COLON] = ACTIONS(107),
    [anon_sym_ATo_COLON] = ACTIONS(107),
    [anon_sym_ATr_COLON] = ACTIONS(107),
    [anon_sym_ATf_COLON] = ACTIONS(107),
    [anon_sym_ATs_COLON] = ACTIONS(107),
    [anon_sym_ATx_COLON] = ACTIONS(107),
    [anon_sym_PIPE_DOT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_1_GT] = ACTIONS(107),
    [anon_sym_2_GT] = ACTIONS(107),
    [anon_sym_H_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(107),
    [anon_sym_1_GT_GT] = ACTIONS(107),
    [anon_sym_2_GT_GT] = ACTIONS(107),
    [sym_eq_sep_key] = ACTIONS(109),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_CR] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPEH] = ACTIONS(103),
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(103),
    [anon_sym_AT_ATdbta] = ACTIONS(103),
    [anon_sym_AT_ATdbtb] = ACTIONS(103),
    [anon_sym_AT_ATdbts] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_AT_BANG] = ACTIONS(103),
    [anon_sym_AT_LPAREN] = ACTIONS(103),
    [anon_sym_ATa_COLON] = ACTIONS(103),
    [anon_sym_ATb_COLON] = ACTIONS(103),
    [anon_sym_ATB_COLON] = ACTIONS(103),
    [anon_sym_ATe_COLON] = ACTIONS(103),
    [anon_sym_ATF_COLON] = ACTIONS(103),
    [anon_sym_ATi_COLON] = ACTIONS(103),
    [anon_sym_ATk_COLON] = ACTIONS(103),
    [anon_sym_ATo_COLON] = ACTIONS(103),
    [anon_sym_ATr_COLON] = ACTIONS(103),
    [anon_sym_ATf_COLON] = ACTIONS(103),
    [anon_sym_ATs_COLON] = ACTIONS(103),
    [anon_sym_ATx_COLON] = ACTIONS(103),
    [anon_sym_PIPE_DOT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_1_GT] = ACTIONS(103),
    [anon_sym_2_GT] = ACTIONS(103),
    [anon_sym_H_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(103),
    [anon_sym_1_GT_GT] = ACTIONS(103),
    [anon_sym_2_GT_GT] = ACTIONS(103),
    [aux_sym_eq_sep_val_token1] = ACTIONS(103),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_CR] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPEH] = ACTIONS(113),
    [anon_sym_AT_AT] = ACTIONS(113),
    [anon_sym_AT_ATdbt] = ACTIONS(113),
    [anon_sym_AT_ATdbta] = ACTIONS(113),
    [anon_sym_AT_ATdbtb] = ACTIONS(113),
    [anon_sym_AT_ATdbts] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym_AT_BANG] = ACTIONS(113),
    [anon_sym_AT_LPAREN] = ACTIONS(113),
    [anon_sym_ATa_COLON] = ACTIONS(113),
    [anon_sym_ATb_COLON] = ACTIONS(113),
    [anon_sym_ATB_COLON] = ACTIONS(113),
    [anon_sym_ATe_COLON] = ACTIONS(113),
    [anon_sym_ATF_COLON] = ACTIONS(113),
    [anon_sym_ATi_COLON] = ACTIONS(113),
    [anon_sym_ATk_COLON] = ACTIONS(113),
    [anon_sym_ATo_COLON] = ACTIONS(113),
    [anon_sym_ATr_COLON] = ACTIONS(113),
    [anon_sym_ATf_COLON] = ACTIONS(113),
    [anon_sym_ATs_COLON] = ACTIONS(113),
    [anon_sym_ATx_COLON] = ACTIONS(113),
    [anon_sym_PIPE_DOT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_1_GT] = ACTIONS(113),
    [anon_sym_2_GT] = ACTIONS(113),
    [anon_sym_H_GT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_1_GT_GT] = ACTIONS(113),
    [anon_sym_2_GT_GT] = ACTIONS(113),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_CR] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_PIPEH] = ACTIONS(117),
    [anon_sym_AT_AT] = ACTIONS(117),
    [anon_sym_AT_ATdbt] = ACTIONS(117),
    [anon_sym_AT_ATdbta] = ACTIONS(117),
    [anon_sym_AT_ATdbtb] = ACTIONS(117),
    [anon_sym_AT_ATdbts] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(117),
    [anon_sym_AT_BANG] = ACTIONS(117),
    [anon_sym_AT_LPAREN] = ACTIONS(117),
    [anon_sym_ATa_COLON] = ACTIONS(117),
    [anon_sym_ATb_COLON] = ACTIONS(117),
    [anon_sym_ATB_COLON] = ACTIONS(117),
    [anon_sym_ATe_COLON] = ACTIONS(117),
    [anon_sym_ATF_COLON] = ACTIONS(117),
    [anon_sym_ATi_COLON] = ACTIONS(117),
    [anon_sym_ATk_COLON] = ACTIONS(117),
    [anon_sym_ATo_COLON] = ACTIONS(117),
    [anon_sym_ATr_COLON] = ACTIONS(117),
    [anon_sym_ATf_COLON] = ACTIONS(117),
    [anon_sym_ATs_COLON] = ACTIONS(117),
    [anon_sym_ATx_COLON] = ACTIONS(117),
    [anon_sym_PIPE_DOT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_1_GT] = ACTIONS(117),
    [anon_sym_2_GT] = ACTIONS(117),
    [anon_sym_H_GT] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_1_GT_GT] = ACTIONS(117),
    [anon_sym_2_GT_GT] = ACTIONS(117),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_CR] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPEH] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(125),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(127),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_AT_BANG] = ACTIONS(135),
    [anon_sym_AT_LPAREN] = ACTIONS(137),
    [anon_sym_ATa_COLON] = ACTIONS(139),
    [anon_sym_ATb_COLON] = ACTIONS(141),
    [anon_sym_ATB_COLON] = ACTIONS(143),
    [anon_sym_ATe_COLON] = ACTIONS(145),
    [anon_sym_ATF_COLON] = ACTIONS(147),
    [anon_sym_ATi_COLON] = ACTIONS(149),
    [anon_sym_ATk_COLON] = ACTIONS(151),
    [anon_sym_ATo_COLON] = ACTIONS(153),
    [anon_sym_ATr_COLON] = ACTIONS(155),
    [anon_sym_ATf_COLON] = ACTIONS(157),
    [anon_sym_ATs_COLON] = ACTIONS(159),
    [anon_sym_ATx_COLON] = ACTIONS(161),
    [anon_sym_PIPE_DOT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_1_GT] = ACTIONS(165),
    [anon_sym_2_GT] = ACTIONS(167),
    [anon_sym_H_GT] = ACTIONS(169),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_1_GT_GT] = ACTIONS(171),
    [anon_sym_2_GT_GT] = ACTIONS(173),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(179),
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
    [anon_sym_PIPE_DOT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_1_GT] = ACTIONS(179),
    [anon_sym_2_GT] = ACTIONS(179),
    [anon_sym_H_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_1_GT_GT] = ACTIONS(179),
    [anon_sym_2_GT_GT] = ACTIONS(179),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_PIPEH] = ACTIONS(183),
    [anon_sym_AT_AT] = ACTIONS(183),
    [anon_sym_AT_ATdbt] = ACTIONS(183),
    [anon_sym_AT_ATdbta] = ACTIONS(183),
    [anon_sym_AT_ATdbtb] = ACTIONS(183),
    [anon_sym_AT_ATdbts] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_AT_BANG] = ACTIONS(183),
    [anon_sym_AT_LPAREN] = ACTIONS(183),
    [anon_sym_ATa_COLON] = ACTIONS(183),
    [anon_sym_ATb_COLON] = ACTIONS(183),
    [anon_sym_ATB_COLON] = ACTIONS(183),
    [anon_sym_ATe_COLON] = ACTIONS(183),
    [anon_sym_ATF_COLON] = ACTIONS(183),
    [anon_sym_ATi_COLON] = ACTIONS(183),
    [anon_sym_ATk_COLON] = ACTIONS(183),
    [anon_sym_ATo_COLON] = ACTIONS(183),
    [anon_sym_ATr_COLON] = ACTIONS(183),
    [anon_sym_ATf_COLON] = ACTIONS(183),
    [anon_sym_ATs_COLON] = ACTIONS(183),
    [anon_sym_ATx_COLON] = ACTIONS(183),
    [anon_sym_PIPE_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_1_GT] = ACTIONS(183),
    [anon_sym_2_GT] = ACTIONS(183),
    [anon_sym_H_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_1_GT_GT] = ACTIONS(183),
    [anon_sym_2_GT_GT] = ACTIONS(183),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPEH] = ACTIONS(187),
    [anon_sym_AT_AT] = ACTIONS(187),
    [anon_sym_AT_ATdbt] = ACTIONS(187),
    [anon_sym_AT_ATdbta] = ACTIONS(187),
    [anon_sym_AT_ATdbtb] = ACTIONS(187),
    [anon_sym_AT_ATdbts] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(187),
    [anon_sym_AT_BANG] = ACTIONS(187),
    [anon_sym_AT_LPAREN] = ACTIONS(187),
    [anon_sym_ATa_COLON] = ACTIONS(187),
    [anon_sym_ATb_COLON] = ACTIONS(187),
    [anon_sym_ATB_COLON] = ACTIONS(187),
    [anon_sym_ATe_COLON] = ACTIONS(187),
    [anon_sym_ATF_COLON] = ACTIONS(187),
    [anon_sym_ATi_COLON] = ACTIONS(187),
    [anon_sym_ATk_COLON] = ACTIONS(187),
    [anon_sym_ATo_COLON] = ACTIONS(187),
    [anon_sym_ATr_COLON] = ACTIONS(187),
    [anon_sym_ATf_COLON] = ACTIONS(187),
    [anon_sym_ATs_COLON] = ACTIONS(187),
    [anon_sym_ATx_COLON] = ACTIONS(187),
    [anon_sym_PIPE_DOT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_1_GT] = ACTIONS(187),
    [anon_sym_2_GT] = ACTIONS(187),
    [anon_sym_H_GT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_1_GT_GT] = ACTIONS(187),
    [anon_sym_2_GT_GT] = ACTIONS(187),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPEH] = ACTIONS(191),
    [anon_sym_AT_AT] = ACTIONS(191),
    [anon_sym_AT_ATdbt] = ACTIONS(191),
    [anon_sym_AT_ATdbta] = ACTIONS(191),
    [anon_sym_AT_ATdbtb] = ACTIONS(191),
    [anon_sym_AT_ATdbts] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(191),
    [anon_sym_AT_BANG] = ACTIONS(191),
    [anon_sym_AT_LPAREN] = ACTIONS(191),
    [anon_sym_ATa_COLON] = ACTIONS(191),
    [anon_sym_ATb_COLON] = ACTIONS(191),
    [anon_sym_ATB_COLON] = ACTIONS(191),
    [anon_sym_ATe_COLON] = ACTIONS(191),
    [anon_sym_ATF_COLON] = ACTIONS(191),
    [anon_sym_ATi_COLON] = ACTIONS(191),
    [anon_sym_ATk_COLON] = ACTIONS(191),
    [anon_sym_ATo_COLON] = ACTIONS(191),
    [anon_sym_ATr_COLON] = ACTIONS(191),
    [anon_sym_ATf_COLON] = ACTIONS(191),
    [anon_sym_ATs_COLON] = ACTIONS(191),
    [anon_sym_ATx_COLON] = ACTIONS(191),
    [anon_sym_PIPE_DOT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_1_GT] = ACTIONS(191),
    [anon_sym_2_GT] = ACTIONS(191),
    [anon_sym_H_GT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_1_GT_GT] = ACTIONS(191),
    [anon_sym_2_GT_GT] = ACTIONS(191),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_PIPEH] = ACTIONS(195),
    [anon_sym_AT_AT] = ACTIONS(195),
    [anon_sym_AT_ATdbt] = ACTIONS(195),
    [anon_sym_AT_ATdbta] = ACTIONS(195),
    [anon_sym_AT_ATdbtb] = ACTIONS(195),
    [anon_sym_AT_ATdbts] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(195),
    [anon_sym_AT_BANG] = ACTIONS(195),
    [anon_sym_AT_LPAREN] = ACTIONS(195),
    [anon_sym_ATa_COLON] = ACTIONS(195),
    [anon_sym_ATb_COLON] = ACTIONS(195),
    [anon_sym_ATB_COLON] = ACTIONS(195),
    [anon_sym_ATe_COLON] = ACTIONS(195),
    [anon_sym_ATF_COLON] = ACTIONS(195),
    [anon_sym_ATi_COLON] = ACTIONS(195),
    [anon_sym_ATk_COLON] = ACTIONS(195),
    [anon_sym_ATo_COLON] = ACTIONS(195),
    [anon_sym_ATr_COLON] = ACTIONS(195),
    [anon_sym_ATf_COLON] = ACTIONS(195),
    [anon_sym_ATs_COLON] = ACTIONS(195),
    [anon_sym_ATx_COLON] = ACTIONS(195),
    [anon_sym_PIPE_DOT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_1_GT] = ACTIONS(195),
    [anon_sym_2_GT] = ACTIONS(195),
    [anon_sym_H_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_1_GT_GT] = ACTIONS(195),
    [anon_sym_2_GT_GT] = ACTIONS(195),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPEH] = ACTIONS(199),
    [anon_sym_AT_AT] = ACTIONS(199),
    [anon_sym_AT_ATdbt] = ACTIONS(199),
    [anon_sym_AT_ATdbta] = ACTIONS(199),
    [anon_sym_AT_ATdbtb] = ACTIONS(199),
    [anon_sym_AT_ATdbts] = ACTIONS(199),
    [anon_sym_AT] = ACTIONS(199),
    [anon_sym_AT_BANG] = ACTIONS(199),
    [anon_sym_AT_LPAREN] = ACTIONS(199),
    [anon_sym_ATa_COLON] = ACTIONS(199),
    [anon_sym_ATb_COLON] = ACTIONS(199),
    [anon_sym_ATB_COLON] = ACTIONS(199),
    [anon_sym_ATe_COLON] = ACTIONS(199),
    [anon_sym_ATF_COLON] = ACTIONS(199),
    [anon_sym_ATi_COLON] = ACTIONS(199),
    [anon_sym_ATk_COLON] = ACTIONS(199),
    [anon_sym_ATo_COLON] = ACTIONS(199),
    [anon_sym_ATr_COLON] = ACTIONS(199),
    [anon_sym_ATf_COLON] = ACTIONS(199),
    [anon_sym_ATs_COLON] = ACTIONS(199),
    [anon_sym_ATx_COLON] = ACTIONS(199),
    [anon_sym_PIPE_DOT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_1_GT] = ACTIONS(199),
    [anon_sym_2_GT] = ACTIONS(199),
    [anon_sym_H_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(199),
    [anon_sym_1_GT_GT] = ACTIONS(199),
    [anon_sym_2_GT_GT] = ACTIONS(199),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_CR] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(203),
    [anon_sym_AT_ATdbt] = ACTIONS(203),
    [anon_sym_AT_ATdbta] = ACTIONS(203),
    [anon_sym_AT_ATdbtb] = ACTIONS(203),
    [anon_sym_AT_ATdbts] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(203),
    [anon_sym_AT_BANG] = ACTIONS(203),
    [anon_sym_AT_LPAREN] = ACTIONS(203),
    [anon_sym_ATa_COLON] = ACTIONS(203),
    [anon_sym_ATb_COLON] = ACTIONS(203),
    [anon_sym_ATB_COLON] = ACTIONS(203),
    [anon_sym_ATe_COLON] = ACTIONS(203),
    [anon_sym_ATF_COLON] = ACTIONS(203),
    [anon_sym_ATi_COLON] = ACTIONS(203),
    [anon_sym_ATk_COLON] = ACTIONS(203),
    [anon_sym_ATo_COLON] = ACTIONS(203),
    [anon_sym_ATr_COLON] = ACTIONS(203),
    [anon_sym_ATf_COLON] = ACTIONS(203),
    [anon_sym_ATs_COLON] = ACTIONS(203),
    [anon_sym_ATx_COLON] = ACTIONS(203),
    [anon_sym_PIPE_DOT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_1_GT] = ACTIONS(203),
    [anon_sym_2_GT] = ACTIONS(203),
    [anon_sym_H_GT] = ACTIONS(203),
    [anon_sym_GT_GT] = ACTIONS(203),
    [anon_sym_1_GT_GT] = ACTIONS(203),
    [anon_sym_2_GT_GT] = ACTIONS(203),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_CR] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPEH] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(207),
    [anon_sym_AT_ATdbtb] = ACTIONS(207),
    [anon_sym_AT_ATdbts] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_AT_BANG] = ACTIONS(207),
    [anon_sym_AT_LPAREN] = ACTIONS(207),
    [anon_sym_ATa_COLON] = ACTIONS(207),
    [anon_sym_ATb_COLON] = ACTIONS(207),
    [anon_sym_ATB_COLON] = ACTIONS(207),
    [anon_sym_ATe_COLON] = ACTIONS(207),
    [anon_sym_ATF_COLON] = ACTIONS(207),
    [anon_sym_ATi_COLON] = ACTIONS(207),
    [anon_sym_ATk_COLON] = ACTIONS(207),
    [anon_sym_ATo_COLON] = ACTIONS(207),
    [anon_sym_ATr_COLON] = ACTIONS(207),
    [anon_sym_ATf_COLON] = ACTIONS(207),
    [anon_sym_ATs_COLON] = ACTIONS(207),
    [anon_sym_ATx_COLON] = ACTIONS(207),
    [anon_sym_PIPE_DOT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_1_GT] = ACTIONS(207),
    [anon_sym_2_GT] = ACTIONS(207),
    [anon_sym_H_GT] = ACTIONS(207),
    [anon_sym_GT_GT] = ACTIONS(207),
    [anon_sym_1_GT_GT] = ACTIONS(207),
    [anon_sym_2_GT_GT] = ACTIONS(207),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_CR] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPEH] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(211),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(211),
    [anon_sym_AT] = ACTIONS(211),
    [anon_sym_AT_BANG] = ACTIONS(211),
    [anon_sym_AT_LPAREN] = ACTIONS(211),
    [anon_sym_ATa_COLON] = ACTIONS(211),
    [anon_sym_ATb_COLON] = ACTIONS(211),
    [anon_sym_ATB_COLON] = ACTIONS(211),
    [anon_sym_ATe_COLON] = ACTIONS(211),
    [anon_sym_ATF_COLON] = ACTIONS(211),
    [anon_sym_ATi_COLON] = ACTIONS(211),
    [anon_sym_ATk_COLON] = ACTIONS(211),
    [anon_sym_ATo_COLON] = ACTIONS(211),
    [anon_sym_ATr_COLON] = ACTIONS(211),
    [anon_sym_ATf_COLON] = ACTIONS(211),
    [anon_sym_ATs_COLON] = ACTIONS(211),
    [anon_sym_ATx_COLON] = ACTIONS(211),
    [anon_sym_PIPE_DOT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_1_GT] = ACTIONS(211),
    [anon_sym_2_GT] = ACTIONS(211),
    [anon_sym_H_GT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(211),
    [anon_sym_1_GT_GT] = ACTIONS(211),
    [anon_sym_2_GT_GT] = ACTIONS(211),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(211),
    [anon_sym_CR] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(211),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_AT_AT] = ACTIONS(215),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(215),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT] = ACTIONS(215),
    [anon_sym_AT_BANG] = ACTIONS(215),
    [anon_sym_AT_LPAREN] = ACTIONS(215),
    [anon_sym_ATa_COLON] = ACTIONS(215),
    [anon_sym_ATb_COLON] = ACTIONS(215),
    [anon_sym_ATB_COLON] = ACTIONS(215),
    [anon_sym_ATe_COLON] = ACTIONS(215),
    [anon_sym_ATF_COLON] = ACTIONS(215),
    [anon_sym_ATi_COLON] = ACTIONS(215),
    [anon_sym_ATk_COLON] = ACTIONS(215),
    [anon_sym_ATo_COLON] = ACTIONS(215),
    [anon_sym_ATr_COLON] = ACTIONS(215),
    [anon_sym_ATf_COLON] = ACTIONS(215),
    [anon_sym_ATs_COLON] = ACTIONS(215),
    [anon_sym_ATx_COLON] = ACTIONS(215),
    [anon_sym_PIPE_DOT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_1_GT] = ACTIONS(215),
    [anon_sym_2_GT] = ACTIONS(215),
    [anon_sym_H_GT] = ACTIONS(215),
    [anon_sym_GT_GT] = ACTIONS(215),
    [anon_sym_1_GT_GT] = ACTIONS(215),
    [anon_sym_2_GT_GT] = ACTIONS(215),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(215),
    [anon_sym_CR] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(215),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_PIPEH] = ACTIONS(219),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(219),
    [anon_sym_AT_ATdbta] = ACTIONS(219),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(219),
    [anon_sym_AT] = ACTIONS(219),
    [anon_sym_AT_BANG] = ACTIONS(219),
    [anon_sym_AT_LPAREN] = ACTIONS(219),
    [anon_sym_ATa_COLON] = ACTIONS(219),
    [anon_sym_ATb_COLON] = ACTIONS(219),
    [anon_sym_ATB_COLON] = ACTIONS(219),
    [anon_sym_ATe_COLON] = ACTIONS(219),
    [anon_sym_ATF_COLON] = ACTIONS(219),
    [anon_sym_ATi_COLON] = ACTIONS(219),
    [anon_sym_ATk_COLON] = ACTIONS(219),
    [anon_sym_ATo_COLON] = ACTIONS(219),
    [anon_sym_ATr_COLON] = ACTIONS(219),
    [anon_sym_ATf_COLON] = ACTIONS(219),
    [anon_sym_ATs_COLON] = ACTIONS(219),
    [anon_sym_ATx_COLON] = ACTIONS(219),
    [anon_sym_PIPE_DOT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_1_GT] = ACTIONS(219),
    [anon_sym_2_GT] = ACTIONS(219),
    [anon_sym_H_GT] = ACTIONS(219),
    [anon_sym_GT_GT] = ACTIONS(219),
    [anon_sym_1_GT_GT] = ACTIONS(219),
    [anon_sym_2_GT_GT] = ACTIONS(219),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_CR] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_PIPEH] = ACTIONS(223),
    [anon_sym_AT_AT] = ACTIONS(223),
    [anon_sym_AT_ATdbt] = ACTIONS(223),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(223),
    [anon_sym_AT_ATdbts] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(223),
    [anon_sym_AT_BANG] = ACTIONS(223),
    [anon_sym_AT_LPAREN] = ACTIONS(223),
    [anon_sym_ATa_COLON] = ACTIONS(223),
    [anon_sym_ATb_COLON] = ACTIONS(223),
    [anon_sym_ATB_COLON] = ACTIONS(223),
    [anon_sym_ATe_COLON] = ACTIONS(223),
    [anon_sym_ATF_COLON] = ACTIONS(223),
    [anon_sym_ATi_COLON] = ACTIONS(223),
    [anon_sym_ATk_COLON] = ACTIONS(223),
    [anon_sym_ATo_COLON] = ACTIONS(223),
    [anon_sym_ATr_COLON] = ACTIONS(223),
    [anon_sym_ATf_COLON] = ACTIONS(223),
    [anon_sym_ATs_COLON] = ACTIONS(223),
    [anon_sym_ATx_COLON] = ACTIONS(223),
    [anon_sym_PIPE_DOT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_1_GT] = ACTIONS(223),
    [anon_sym_2_GT] = ACTIONS(223),
    [anon_sym_H_GT] = ACTIONS(223),
    [anon_sym_GT_GT] = ACTIONS(223),
    [anon_sym_1_GT_GT] = ACTIONS(223),
    [anon_sym_2_GT_GT] = ACTIONS(223),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(223),
    [anon_sym_CR] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPEH] = ACTIONS(227),
    [anon_sym_AT_AT] = ACTIONS(227),
    [anon_sym_AT_ATdbt] = ACTIONS(227),
    [anon_sym_AT_ATdbta] = ACTIONS(227),
    [anon_sym_AT_ATdbtb] = ACTIONS(227),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT] = ACTIONS(227),
    [anon_sym_AT_BANG] = ACTIONS(227),
    [anon_sym_AT_LPAREN] = ACTIONS(227),
    [anon_sym_ATa_COLON] = ACTIONS(227),
    [anon_sym_ATb_COLON] = ACTIONS(227),
    [anon_sym_ATB_COLON] = ACTIONS(227),
    [anon_sym_ATe_COLON] = ACTIONS(227),
    [anon_sym_ATF_COLON] = ACTIONS(227),
    [anon_sym_ATi_COLON] = ACTIONS(227),
    [anon_sym_ATk_COLON] = ACTIONS(227),
    [anon_sym_ATo_COLON] = ACTIONS(227),
    [anon_sym_ATr_COLON] = ACTIONS(227),
    [anon_sym_ATf_COLON] = ACTIONS(227),
    [anon_sym_ATs_COLON] = ACTIONS(227),
    [anon_sym_ATx_COLON] = ACTIONS(227),
    [anon_sym_PIPE_DOT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_1_GT] = ACTIONS(227),
    [anon_sym_2_GT] = ACTIONS(227),
    [anon_sym_H_GT] = ACTIONS(227),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_1_GT_GT] = ACTIONS(227),
    [anon_sym_2_GT_GT] = ACTIONS(227),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(227),
    [anon_sym_CR] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(227),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPEH] = ACTIONS(231),
    [anon_sym_AT_AT] = ACTIONS(231),
    [anon_sym_AT_ATdbt] = ACTIONS(231),
    [anon_sym_AT_ATdbta] = ACTIONS(231),
    [anon_sym_AT_ATdbtb] = ACTIONS(231),
    [anon_sym_AT_ATdbts] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(231),
    [anon_sym_AT_BANG] = ACTIONS(231),
    [anon_sym_AT_LPAREN] = ACTIONS(231),
    [anon_sym_ATa_COLON] = ACTIONS(231),
    [anon_sym_ATb_COLON] = ACTIONS(231),
    [anon_sym_ATB_COLON] = ACTIONS(231),
    [anon_sym_ATe_COLON] = ACTIONS(231),
    [anon_sym_ATF_COLON] = ACTIONS(231),
    [anon_sym_ATi_COLON] = ACTIONS(231),
    [anon_sym_ATk_COLON] = ACTIONS(231),
    [anon_sym_ATo_COLON] = ACTIONS(231),
    [anon_sym_ATr_COLON] = ACTIONS(231),
    [anon_sym_ATf_COLON] = ACTIONS(231),
    [anon_sym_ATs_COLON] = ACTIONS(231),
    [anon_sym_ATx_COLON] = ACTIONS(231),
    [anon_sym_PIPE_DOT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_1_GT] = ACTIONS(231),
    [anon_sym_2_GT] = ACTIONS(231),
    [anon_sym_H_GT] = ACTIONS(231),
    [anon_sym_GT_GT] = ACTIONS(231),
    [anon_sym_1_GT_GT] = ACTIONS(231),
    [anon_sym_2_GT_GT] = ACTIONS(231),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_CR] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPEH] = ACTIONS(235),
    [anon_sym_AT_AT] = ACTIONS(235),
    [anon_sym_AT_ATdbt] = ACTIONS(235),
    [anon_sym_AT_ATdbta] = ACTIONS(235),
    [anon_sym_AT_ATdbtb] = ACTIONS(235),
    [anon_sym_AT_ATdbts] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(235),
    [anon_sym_AT_LPAREN] = ACTIONS(235),
    [anon_sym_ATa_COLON] = ACTIONS(235),
    [anon_sym_ATb_COLON] = ACTIONS(235),
    [anon_sym_ATB_COLON] = ACTIONS(235),
    [anon_sym_ATe_COLON] = ACTIONS(235),
    [anon_sym_ATF_COLON] = ACTIONS(235),
    [anon_sym_ATi_COLON] = ACTIONS(235),
    [anon_sym_ATk_COLON] = ACTIONS(235),
    [anon_sym_ATo_COLON] = ACTIONS(235),
    [anon_sym_ATr_COLON] = ACTIONS(235),
    [anon_sym_ATf_COLON] = ACTIONS(235),
    [anon_sym_ATs_COLON] = ACTIONS(235),
    [anon_sym_ATx_COLON] = ACTIONS(235),
    [anon_sym_PIPE_DOT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_1_GT] = ACTIONS(235),
    [anon_sym_2_GT] = ACTIONS(235),
    [anon_sym_H_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(235),
    [anon_sym_1_GT_GT] = ACTIONS(235),
    [anon_sym_2_GT_GT] = ACTIONS(235),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_CR] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPEH] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(125),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(127),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_AT_BANG] = ACTIONS(135),
    [anon_sym_AT_LPAREN] = ACTIONS(137),
    [anon_sym_ATa_COLON] = ACTIONS(139),
    [anon_sym_ATb_COLON] = ACTIONS(141),
    [anon_sym_ATB_COLON] = ACTIONS(143),
    [anon_sym_ATe_COLON] = ACTIONS(145),
    [anon_sym_ATF_COLON] = ACTIONS(147),
    [anon_sym_ATi_COLON] = ACTIONS(149),
    [anon_sym_ATk_COLON] = ACTIONS(151),
    [anon_sym_ATo_COLON] = ACTIONS(153),
    [anon_sym_ATr_COLON] = ACTIONS(155),
    [anon_sym_ATf_COLON] = ACTIONS(157),
    [anon_sym_ATs_COLON] = ACTIONS(159),
    [anon_sym_ATx_COLON] = ACTIONS(161),
    [anon_sym_PIPE_DOT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_1_GT] = ACTIONS(239),
    [anon_sym_2_GT] = ACTIONS(239),
    [anon_sym_H_GT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_1_GT_GT] = ACTIONS(239),
    [anon_sym_2_GT_GT] = ACTIONS(239),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_CR] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PIPEH] = ACTIONS(243),
    [anon_sym_AT_AT] = ACTIONS(243),
    [anon_sym_AT_ATdbt] = ACTIONS(243),
    [anon_sym_AT_ATdbta] = ACTIONS(243),
    [anon_sym_AT_ATdbtb] = ACTIONS(243),
    [anon_sym_AT_ATdbts] = ACTIONS(243),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(243),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(243),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(243),
    [anon_sym_ATe_COLON] = ACTIONS(243),
    [anon_sym_ATF_COLON] = ACTIONS(243),
    [anon_sym_ATi_COLON] = ACTIONS(243),
    [anon_sym_ATk_COLON] = ACTIONS(243),
    [anon_sym_ATo_COLON] = ACTIONS(243),
    [anon_sym_ATr_COLON] = ACTIONS(243),
    [anon_sym_ATf_COLON] = ACTIONS(243),
    [anon_sym_ATs_COLON] = ACTIONS(243),
    [anon_sym_ATx_COLON] = ACTIONS(243),
    [anon_sym_PIPE_DOT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_1_GT] = ACTIONS(243),
    [anon_sym_2_GT] = ACTIONS(243),
    [anon_sym_H_GT] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(243),
    [anon_sym_1_GT_GT] = ACTIONS(243),
    [anon_sym_2_GT_GT] = ACTIONS(243),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_CR] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPEH] = ACTIONS(247),
    [anon_sym_AT_AT] = ACTIONS(247),
    [anon_sym_AT_ATdbt] = ACTIONS(247),
    [anon_sym_AT_ATdbta] = ACTIONS(247),
    [anon_sym_AT_ATdbtb] = ACTIONS(247),
    [anon_sym_AT_ATdbts] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(247),
    [anon_sym_AT_BANG] = ACTIONS(247),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(247),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(247),
    [anon_sym_ATi_COLON] = ACTIONS(247),
    [anon_sym_ATk_COLON] = ACTIONS(247),
    [anon_sym_ATo_COLON] = ACTIONS(247),
    [anon_sym_ATr_COLON] = ACTIONS(247),
    [anon_sym_ATf_COLON] = ACTIONS(247),
    [anon_sym_ATs_COLON] = ACTIONS(247),
    [anon_sym_ATx_COLON] = ACTIONS(247),
    [anon_sym_PIPE_DOT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_1_GT] = ACTIONS(247),
    [anon_sym_2_GT] = ACTIONS(247),
    [anon_sym_H_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(247),
    [anon_sym_1_GT_GT] = ACTIONS(247),
    [anon_sym_2_GT_GT] = ACTIONS(247),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_CR] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PIPEH] = ACTIONS(239),
    [anon_sym_AT_AT] = ACTIONS(239),
    [anon_sym_AT_ATdbt] = ACTIONS(239),
    [anon_sym_AT_ATdbta] = ACTIONS(239),
    [anon_sym_AT_ATdbtb] = ACTIONS(239),
    [anon_sym_AT_ATdbts] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(239),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(239),
    [anon_sym_ATb_COLON] = ACTIONS(239),
    [anon_sym_ATB_COLON] = ACTIONS(239),
    [anon_sym_ATe_COLON] = ACTIONS(239),
    [anon_sym_ATF_COLON] = ACTIONS(239),
    [anon_sym_ATi_COLON] = ACTIONS(239),
    [anon_sym_ATk_COLON] = ACTIONS(239),
    [anon_sym_ATo_COLON] = ACTIONS(239),
    [anon_sym_ATr_COLON] = ACTIONS(239),
    [anon_sym_ATf_COLON] = ACTIONS(239),
    [anon_sym_ATs_COLON] = ACTIONS(239),
    [anon_sym_ATx_COLON] = ACTIONS(239),
    [anon_sym_PIPE_DOT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_1_GT] = ACTIONS(239),
    [anon_sym_2_GT] = ACTIONS(239),
    [anon_sym_H_GT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(239),
    [anon_sym_1_GT_GT] = ACTIONS(239),
    [anon_sym_2_GT_GT] = ACTIONS(239),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_CR] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPEH] = ACTIONS(251),
    [anon_sym_AT_AT] = ACTIONS(251),
    [anon_sym_AT_ATdbt] = ACTIONS(251),
    [anon_sym_AT_ATdbta] = ACTIONS(251),
    [anon_sym_AT_ATdbtb] = ACTIONS(251),
    [anon_sym_AT_ATdbts] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(251),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(251),
    [anon_sym_ATa_COLON] = ACTIONS(251),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(251),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(251),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(251),
    [anon_sym_ATo_COLON] = ACTIONS(251),
    [anon_sym_ATr_COLON] = ACTIONS(251),
    [anon_sym_ATf_COLON] = ACTIONS(251),
    [anon_sym_ATs_COLON] = ACTIONS(251),
    [anon_sym_ATx_COLON] = ACTIONS(251),
    [anon_sym_PIPE_DOT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_1_GT] = ACTIONS(251),
    [anon_sym_2_GT] = ACTIONS(251),
    [anon_sym_H_GT] = ACTIONS(251),
    [anon_sym_GT_GT] = ACTIONS(251),
    [anon_sym_1_GT_GT] = ACTIONS(251),
    [anon_sym_2_GT_GT] = ACTIONS(251),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_CR] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PIPEH] = ACTIONS(255),
    [anon_sym_AT_AT] = ACTIONS(255),
    [anon_sym_AT_ATdbt] = ACTIONS(255),
    [anon_sym_AT_ATdbta] = ACTIONS(255),
    [anon_sym_AT_ATdbtb] = ACTIONS(255),
    [anon_sym_AT_ATdbts] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(255),
    [anon_sym_AT_BANG] = ACTIONS(255),
    [anon_sym_AT_LPAREN] = ACTIONS(255),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(255),
    [anon_sym_ATB_COLON] = ACTIONS(255),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(255),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(255),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(255),
    [anon_sym_ATf_COLON] = ACTIONS(255),
    [anon_sym_ATs_COLON] = ACTIONS(255),
    [anon_sym_ATx_COLON] = ACTIONS(255),
    [anon_sym_PIPE_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_1_GT] = ACTIONS(255),
    [anon_sym_2_GT] = ACTIONS(255),
    [anon_sym_H_GT] = ACTIONS(255),
    [anon_sym_GT_GT] = ACTIONS(255),
    [anon_sym_1_GT_GT] = ACTIONS(255),
    [anon_sym_2_GT_GT] = ACTIONS(255),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_CR] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPEH] = ACTIONS(259),
    [anon_sym_AT_AT] = ACTIONS(259),
    [anon_sym_AT_ATdbt] = ACTIONS(259),
    [anon_sym_AT_ATdbta] = ACTIONS(259),
    [anon_sym_AT_ATdbtb] = ACTIONS(259),
    [anon_sym_AT_ATdbts] = ACTIONS(259),
    [anon_sym_AT] = ACTIONS(259),
    [anon_sym_AT_BANG] = ACTIONS(259),
    [anon_sym_AT_LPAREN] = ACTIONS(259),
    [anon_sym_ATa_COLON] = ACTIONS(259),
    [anon_sym_ATb_COLON] = ACTIONS(259),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(259),
    [anon_sym_ATF_COLON] = ACTIONS(259),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(259),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(259),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(259),
    [anon_sym_ATx_COLON] = ACTIONS(259),
    [anon_sym_PIPE_DOT] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_1_GT] = ACTIONS(259),
    [anon_sym_2_GT] = ACTIONS(259),
    [anon_sym_H_GT] = ACTIONS(259),
    [anon_sym_GT_GT] = ACTIONS(259),
    [anon_sym_1_GT_GT] = ACTIONS(259),
    [anon_sym_2_GT_GT] = ACTIONS(259),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_CR] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_AT_AT] = ACTIONS(263),
    [anon_sym_AT_ATdbt] = ACTIONS(263),
    [anon_sym_AT_ATdbta] = ACTIONS(263),
    [anon_sym_AT_ATdbtb] = ACTIONS(263),
    [anon_sym_AT_ATdbts] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym_AT_BANG] = ACTIONS(263),
    [anon_sym_AT_LPAREN] = ACTIONS(263),
    [anon_sym_ATa_COLON] = ACTIONS(263),
    [anon_sym_ATb_COLON] = ACTIONS(263),
    [anon_sym_ATB_COLON] = ACTIONS(263),
    [anon_sym_ATe_COLON] = ACTIONS(263),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(263),
    [anon_sym_ATk_COLON] = ACTIONS(263),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(263),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(263),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(263),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_1_GT] = ACTIONS(263),
    [anon_sym_2_GT] = ACTIONS(263),
    [anon_sym_H_GT] = ACTIONS(263),
    [anon_sym_GT_GT] = ACTIONS(263),
    [anon_sym_1_GT_GT] = ACTIONS(263),
    [anon_sym_2_GT_GT] = ACTIONS(263),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_CR] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_PIPEH] = ACTIONS(267),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(267),
    [anon_sym_AT_ATdbta] = ACTIONS(267),
    [anon_sym_AT_ATdbtb] = ACTIONS(267),
    [anon_sym_AT_ATdbts] = ACTIONS(267),
    [anon_sym_AT] = ACTIONS(267),
    [anon_sym_AT_BANG] = ACTIONS(267),
    [anon_sym_AT_LPAREN] = ACTIONS(267),
    [anon_sym_ATa_COLON] = ACTIONS(267),
    [anon_sym_ATb_COLON] = ACTIONS(267),
    [anon_sym_ATB_COLON] = ACTIONS(267),
    [anon_sym_ATe_COLON] = ACTIONS(267),
    [anon_sym_ATF_COLON] = ACTIONS(267),
    [anon_sym_ATi_COLON] = ACTIONS(267),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(267),
    [anon_sym_ATr_COLON] = ACTIONS(267),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(267),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_1_GT] = ACTIONS(267),
    [anon_sym_2_GT] = ACTIONS(267),
    [anon_sym_H_GT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(267),
    [anon_sym_1_GT_GT] = ACTIONS(267),
    [anon_sym_2_GT_GT] = ACTIONS(267),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_CR] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPEH] = ACTIONS(271),
    [anon_sym_AT_AT] = ACTIONS(271),
    [anon_sym_AT_ATdbt] = ACTIONS(271),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(271),
    [anon_sym_AT_ATdbts] = ACTIONS(271),
    [anon_sym_AT] = ACTIONS(271),
    [anon_sym_AT_BANG] = ACTIONS(271),
    [anon_sym_AT_LPAREN] = ACTIONS(271),
    [anon_sym_ATa_COLON] = ACTIONS(271),
    [anon_sym_ATb_COLON] = ACTIONS(271),
    [anon_sym_ATB_COLON] = ACTIONS(271),
    [anon_sym_ATe_COLON] = ACTIONS(271),
    [anon_sym_ATF_COLON] = ACTIONS(271),
    [anon_sym_ATi_COLON] = ACTIONS(271),
    [anon_sym_ATk_COLON] = ACTIONS(271),
    [anon_sym_ATo_COLON] = ACTIONS(271),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(271),
    [anon_sym_ATs_COLON] = ACTIONS(271),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(271),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_1_GT] = ACTIONS(271),
    [anon_sym_2_GT] = ACTIONS(271),
    [anon_sym_H_GT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(271),
    [anon_sym_1_GT_GT] = ACTIONS(271),
    [anon_sym_2_GT_GT] = ACTIONS(271),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(271),
    [anon_sym_CR] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPEH] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(275),
    [anon_sym_AT_ATdbt] = ACTIONS(275),
    [anon_sym_AT_ATdbta] = ACTIONS(275),
    [anon_sym_AT_ATdbtb] = ACTIONS(275),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_AT_BANG] = ACTIONS(275),
    [anon_sym_AT_LPAREN] = ACTIONS(275),
    [anon_sym_ATa_COLON] = ACTIONS(275),
    [anon_sym_ATb_COLON] = ACTIONS(275),
    [anon_sym_ATB_COLON] = ACTIONS(275),
    [anon_sym_ATe_COLON] = ACTIONS(275),
    [anon_sym_ATF_COLON] = ACTIONS(275),
    [anon_sym_ATi_COLON] = ACTIONS(275),
    [anon_sym_ATk_COLON] = ACTIONS(275),
    [anon_sym_ATo_COLON] = ACTIONS(275),
    [anon_sym_ATr_COLON] = ACTIONS(275),
    [anon_sym_ATf_COLON] = ACTIONS(275),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(275),
    [anon_sym_PIPE_DOT] = ACTIONS(275),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_1_GT] = ACTIONS(275),
    [anon_sym_2_GT] = ACTIONS(275),
    [anon_sym_H_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_1_GT_GT] = ACTIONS(275),
    [anon_sym_2_GT_GT] = ACTIONS(275),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_CR] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPEH] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(125),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(127),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_AT_BANG] = ACTIONS(135),
    [anon_sym_AT_LPAREN] = ACTIONS(137),
    [anon_sym_ATa_COLON] = ACTIONS(139),
    [anon_sym_ATb_COLON] = ACTIONS(141),
    [anon_sym_ATB_COLON] = ACTIONS(143),
    [anon_sym_ATe_COLON] = ACTIONS(145),
    [anon_sym_ATF_COLON] = ACTIONS(147),
    [anon_sym_ATi_COLON] = ACTIONS(149),
    [anon_sym_ATk_COLON] = ACTIONS(151),
    [anon_sym_ATo_COLON] = ACTIONS(153),
    [anon_sym_ATr_COLON] = ACTIONS(155),
    [anon_sym_ATf_COLON] = ACTIONS(157),
    [anon_sym_ATs_COLON] = ACTIONS(159),
    [anon_sym_ATx_COLON] = ACTIONS(161),
    [anon_sym_PIPE_DOT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_1_GT] = ACTIONS(279),
    [anon_sym_2_GT] = ACTIONS(279),
    [anon_sym_H_GT] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_1_GT_GT] = ACTIONS(279),
    [anon_sym_2_GT_GT] = ACTIONS(279),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(279),
    [anon_sym_CR] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
  },
  [51] = {
    [aux_sym_commands_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
  },
  [52] = {
    [aux_sym_commands_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(285),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
  },
  [53] = {
    [aux_sym_commands_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_CR] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(294),
    [anon_sym_CR] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(296),
    [anon_sym_CR] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(300),
    [anon_sym_CR] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(304),
    [anon_sym_CR] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(304),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(306),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(308),
    [anon_sym_CR] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym__comment] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(312),
    [anon_sym_CR] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(312),
  },
  [60] = {
    [sym_arg] = STATE(11),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [61] = {
    [sym_arg] = STATE(59),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [62] = {
    [sym_arg] = STATE(54),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [63] = {
    [sym_arg] = STATE(22),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [64] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [65] = {
    [sym_arg] = STATE(33),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [66] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [67] = {
    [sym_arg] = STATE(21),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [68] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [69] = {
    [sym_arg] = STATE(37),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [70] = {
    [sym_arg] = STATE(38),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [71] = {
    [sym_arg] = STATE(46),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [72] = {
    [sym_arg] = STATE(40),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [73] = {
    [sym_arg] = STATE(41),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [74] = {
    [sym_arg] = STATE(12),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [75] = {
    [sym_arg] = STATE(27),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [76] = {
    [sym_arg] = STATE(58),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [77] = {
    [sym_arg] = STATE(57),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [78] = {
    [sym_arg] = STATE(56),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [79] = {
    [sym_arg] = STATE(45),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [80] = {
    [sym_arg] = STATE(43),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [81] = {
    [sym_arg] = STATE(75),
    [sym_arg_identifier] = STATE(91),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(23),
  },
  [82] = {
    [sym_arg] = STATE(44),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(314),
    [sym__comment] = ACTIONS(23),
  },
  [83] = {
    [sym_eq_sep_val] = STATE(28),
    [aux_sym_eq_sep_val_token1] = ACTIONS(318),
    [sym__comment] = ACTIONS(23),
  },
  [84] = {
    [sym_eq_sep_val] = STATE(29),
    [aux_sym_eq_sep_val_token1] = ACTIONS(318),
    [sym__comment] = ACTIONS(23),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(320),
    [sym__comment] = ACTIONS(3),
  },
  [86] = {
    [sym_eq_sep_key] = ACTIONS(322),
    [sym__comment] = ACTIONS(23),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [sym__comment] = ACTIONS(3),
  },
  [88] = {
    [sym__any_command] = ACTIONS(326),
    [sym__comment] = ACTIONS(23),
  },
  [89] = {
    [sym__macro_content] = ACTIONS(328),
    [sym__comment] = ACTIONS(23),
  },
  [90] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(103),
    [sym__comment] = ACTIONS(23),
  },
  [91] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(83),
    [sym__comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(86),
  [9] = {.count = 1, .reusable = true}, SHIFT(19),
  [11] = {.count = 1, .reusable = true}, SHIFT(89),
  [13] = {.count = 1, .reusable = true}, SHIFT(88),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(14),
  [19] = {.count = 1, .reusable = true}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(3),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(86),
  [29] = {.count = 1, .reusable = false}, SHIFT(19),
  [31] = {.count = 1, .reusable = false}, SHIFT(89),
  [33] = {.count = 1, .reusable = false}, SHIFT(88),
  [35] = {.count = 1, .reusable = false}, SHIFT(4),
  [37] = {.count = 1, .reusable = false}, SHIFT(3),
  [39] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 2),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 2),
  [45] = {.count = 1, .reusable = false}, SHIFT(20),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym__simple_command, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym__simple_command, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arged_command_repeat1, 2),
  [53] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arged_command_repeat1, 2),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arged_command_repeat1, 2), SHIFT_REPEAT(20),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [60] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(74),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [69] = {.count = 1, .reusable = false}, SHIFT(74),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [75] = {.count = 1, .reusable = false}, SHIFT(48),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_identifier, 1),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_identifier, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_command, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_command, 2),
  [93] = {.count = 1, .reusable = false}, SHIFT(84),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 2),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 2),
  [99] = {.count = 1, .reusable = false}, SHIFT(83),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 1),
  [109] = {.count = 1, .reusable = false}, SHIFT(16),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(10),
  [123] = {.count = 1, .reusable = false}, SHIFT(31),
  [125] = {.count = 1, .reusable = false}, SHIFT(71),
  [127] = {.count = 1, .reusable = false}, SHIFT(24),
  [129] = {.count = 1, .reusable = false}, SHIFT(25),
  [131] = {.count = 1, .reusable = false}, SHIFT(26),
  [133] = {.count = 1, .reusable = false}, SHIFT(79),
  [135] = {.count = 1, .reusable = false}, SHIFT(82),
  [137] = {.count = 1, .reusable = false}, SHIFT(81),
  [139] = {.count = 1, .reusable = false}, SHIFT(80),
  [141] = {.count = 1, .reusable = false}, SHIFT(73),
  [143] = {.count = 1, .reusable = false}, SHIFT(72),
  [145] = {.count = 1, .reusable = false}, SHIFT(60),
  [147] = {.count = 1, .reusable = false}, SHIFT(70),
  [149] = {.count = 1, .reusable = false}, SHIFT(69),
  [151] = {.count = 1, .reusable = false}, SHIFT(68),
  [153] = {.count = 1, .reusable = false}, SHIFT(67),
  [155] = {.count = 1, .reusable = false}, SHIFT(66),
  [157] = {.count = 1, .reusable = false}, SHIFT(65),
  [159] = {.count = 1, .reusable = false}, SHIFT(64),
  [161] = {.count = 1, .reusable = false}, SHIFT(63),
  [163] = {.count = 1, .reusable = false}, SHIFT(42),
  [165] = {.count = 1, .reusable = false}, SHIFT(62),
  [167] = {.count = 1, .reusable = false}, SHIFT(61),
  [169] = {.count = 1, .reusable = false}, SHIFT(76),
  [171] = {.count = 1, .reusable = false}, SHIFT(77),
  [173] = {.count = 1, .reusable = false}, SHIFT(78),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__command, 1),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 4),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_command, 4),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_command, 4),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_system_command, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_system_command, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_command, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_command, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_macro_command, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_macro_command, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [283] = {.count = 1, .reusable = false}, SHIFT(2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [289] = {.count = 2, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_out_redirect_command, 3),
  [296] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_err_append_redirect_command, 3),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_out_append_redirect_command, 3),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_html_redirect_command, 3),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_err_redirect_command, 3),
  [314] = {.count = 1, .reusable = false}, SHIFT(17),
  [316] = {.count = 1, .reusable = false}, SHIFT(90),
  [318] = {.count = 1, .reusable = false}, SHIFT(30),
  [320] = {.count = 1, .reusable = true}, SHIFT(49),
  [322] = {.count = 1, .reusable = false}, SHIFT(15),
  [324] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [326] = {.count = 1, .reusable = false}, SHIFT(35),
  [328] = {.count = 1, .reusable = false}, SHIFT(85),
};

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
  };
  return &language;
}
