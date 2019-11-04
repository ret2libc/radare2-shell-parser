#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 92
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
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
  sym_interpreter_command = 32,
  anon_sym_GT = 33,
  anon_sym_1_GT = 34,
  anon_sym_2_GT = 35,
  anon_sym_H_GT = 36,
  anon_sym_GT_GT = 37,
  anon_sym_1_GT_GT = 38,
  anon_sym_2_GT_GT = 39,
  sym_eq_sep_key = 40,
  aux_sym_eq_sep_val_token1 = 41,
  sym__macro_content = 42,
  sym__any_command = 43,
  aux_sym_cmd_identifier_token1 = 44,
  anon_sym_QMARK_PIPE_QMARK = 45,
  anon_sym_PIPE_QMARK = 46,
  sym_number = 47,
  sym__comment = 48,
  anon_sym_LF = 49,
  anon_sym_CR = 50,
  anon_sym_SEMI = 51,
  sym_commands = 52,
  sym__command = 53,
  sym__simple_command = 54,
  sym__tmp_command = 55,
  sym__iter_command = 56,
  sym__pipe_command = 57,
  sym_html_disable_command = 58,
  sym_html_enable_command = 59,
  sym_pipe_command = 60,
  sym_pipe_second_command = 61,
  sym_iter_flags_command = 62,
  sym_iter_dbta_command = 63,
  sym_iter_dbtb_command = 64,
  sym_iter_dbts_command = 65,
  sym_tmp_seek_command = 66,
  sym_tmp_blksz_command = 67,
  sym_tmp_fromto_command = 68,
  sym_tmp_arch_command = 69,
  sym_tmp_bits_command = 70,
  sym_tmp_nthi_command = 71,
  sym_tmp_eval_command = 72,
  sym_tmp_fs_command = 73,
  sym_tmp_reli_command = 74,
  sym_tmp_kuery_command = 75,
  sym_tmp_fd_command = 76,
  sym_tmp_reg_command = 77,
  sym_tmp_file_command = 78,
  sym_tmp_string_command = 79,
  sym_tmp_hex_command = 80,
  sym_pointer_command = 81,
  sym_env_command = 82,
  sym_macro_command = 83,
  sym_system_command = 84,
  sym_interpret_command = 85,
  sym_arged_command = 86,
  sym_repeat_command = 87,
  sym_out_redirect_command = 88,
  sym_err_redirect_command = 89,
  sym_html_redirect_command = 90,
  sym_out_append_redirect_command = 91,
  sym_err_append_redirect_command = 92,
  sym_arg = 93,
  sym_eq_sep_val = 94,
  sym_cmd_identifier = 95,
  sym_arg_identifier = 96,
  aux_sym_commands_repeat1 = 97,
  aux_sym_tmp_eval_command_repeat1 = 98,
  aux_sym_arged_command_repeat1 = 99,
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
  [sym_interpreter_command] = "interpreter_command",
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
  [sym_interpreter_command] = {
    .visible = true,
    .named = true,
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

enum {
  field_command = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command, 0},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(175);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '?') ADVANCE(38);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == '2') ADVANCE(130);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead == '2') ADVANCE(119);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(121);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '?') ADVANCE(170);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(187);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '2') ADVANCE(32);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(97);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '?') ADVANCE(170);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == ')') ADVANCE(90);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(91);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '(') ADVANCE(89);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '?') ADVANCE(170);
      if (lookahead == '\\') SKIP(39)
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(139);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(103);
      END_STATE();
    case 34:
      if (lookahead == '?') ADVANCE(172);
      END_STATE();
    case 35:
      if (lookahead == '?') ADVANCE(173);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == '|') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == 'H') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 's') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(57);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'B') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'k') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'F') ADVANCE(147);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'k') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'x') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(180);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_H_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead == '2') ADVANCE(119);
      if (lookahead == 'H') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 121:
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
          lookahead != '|') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '1') ADVANCE(129);
      if (lookahead == '2') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '/') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(18);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(18);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 0) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == 'H') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '1') ADVANCE(159);
      if (lookahead == '2') ADVANCE(160);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '@') ADVANCE(56);
      if (lookahead == 'H') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(144);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_QMARK_PIPE_QMARK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PIPE_QMARK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == '>') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == '>') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(123);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(112);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(122);
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == '\\') ADVANCE(123);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(111);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(112);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(183);
      if (lookahead == '\r') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead == '\r') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 189:
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
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 140},
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
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 142},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
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
    [sym_interpreter_command] = ACTIONS(1),
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
    [sym_interpreter_command] = ACTIONS(17),
    [aux_sym_cmd_identifier_token1] = ACTIONS(19),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(21),
    [anon_sym_PIPE_QMARK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
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
    [sym_interpreter_command] = ACTIONS(37),
    [aux_sym_cmd_identifier_token1] = ACTIONS(19),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(19),
    [anon_sym_PIPE_QMARK] = ACTIONS(19),
    [sym_number] = ACTIONS(39),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(41),
    [anon_sym_CR] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(41),
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
    [aux_sym_cmd_identifier_token1] = ACTIONS(19),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(21),
    [anon_sym_PIPE_QMARK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
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
    [aux_sym_cmd_identifier_token1] = ACTIONS(19),
    [anon_sym_QMARK_PIPE_QMARK] = ACTIONS(21),
    [anon_sym_PIPE_QMARK] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym__comment] = ACTIONS(3),
  },
  [5] = {
    [sym_arg] = STATE(7),
    [sym_arg_identifier] = STATE(18),
    [aux_sym_arged_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPEH] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT_ATdbt] = ACTIONS(45),
    [anon_sym_AT_ATdbta] = ACTIONS(45),
    [anon_sym_AT_ATdbtb] = ACTIONS(45),
    [anon_sym_AT_ATdbts] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(45),
    [anon_sym_AT_BANG] = ACTIONS(45),
    [anon_sym_AT_LPAREN] = ACTIONS(45),
    [anon_sym_ATa_COLON] = ACTIONS(45),
    [anon_sym_ATb_COLON] = ACTIONS(45),
    [anon_sym_ATB_COLON] = ACTIONS(45),
    [anon_sym_ATe_COLON] = ACTIONS(45),
    [anon_sym_ATF_COLON] = ACTIONS(45),
    [anon_sym_ATi_COLON] = ACTIONS(45),
    [anon_sym_ATk_COLON] = ACTIONS(45),
    [anon_sym_ATo_COLON] = ACTIONS(45),
    [anon_sym_ATr_COLON] = ACTIONS(45),
    [anon_sym_ATf_COLON] = ACTIONS(45),
    [anon_sym_ATs_COLON] = ACTIONS(45),
    [anon_sym_ATx_COLON] = ACTIONS(45),
    [anon_sym_PIPE_DOT] = ACTIONS(45),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_1_GT] = ACTIONS(45),
    [anon_sym_2_GT] = ACTIONS(45),
    [anon_sym_H_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(45),
    [anon_sym_1_GT_GT] = ACTIONS(45),
    [anon_sym_2_GT_GT] = ACTIONS(45),
    [aux_sym_eq_sep_val_token1] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
  },
  [6] = {
    [sym_arg] = STATE(5),
    [sym_arg_identifier] = STATE(18),
    [aux_sym_arged_command_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_PIPEH] = ACTIONS(51),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_AT_ATdbt] = ACTIONS(51),
    [anon_sym_AT_ATdbta] = ACTIONS(51),
    [anon_sym_AT_ATdbtb] = ACTIONS(51),
    [anon_sym_AT_ATdbts] = ACTIONS(51),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_AT_BANG] = ACTIONS(51),
    [anon_sym_AT_LPAREN] = ACTIONS(51),
    [anon_sym_ATa_COLON] = ACTIONS(51),
    [anon_sym_ATb_COLON] = ACTIONS(51),
    [anon_sym_ATB_COLON] = ACTIONS(51),
    [anon_sym_ATe_COLON] = ACTIONS(51),
    [anon_sym_ATF_COLON] = ACTIONS(51),
    [anon_sym_ATi_COLON] = ACTIONS(51),
    [anon_sym_ATk_COLON] = ACTIONS(51),
    [anon_sym_ATo_COLON] = ACTIONS(51),
    [anon_sym_ATr_COLON] = ACTIONS(51),
    [anon_sym_ATf_COLON] = ACTIONS(51),
    [anon_sym_ATs_COLON] = ACTIONS(51),
    [anon_sym_ATx_COLON] = ACTIONS(51),
    [anon_sym_PIPE_DOT] = ACTIONS(51),
    [anon_sym_GT] = ACTIONS(51),
    [anon_sym_1_GT] = ACTIONS(51),
    [anon_sym_2_GT] = ACTIONS(51),
    [anon_sym_H_GT] = ACTIONS(51),
    [anon_sym_GT_GT] = ACTIONS(51),
    [anon_sym_1_GT_GT] = ACTIONS(51),
    [anon_sym_2_GT_GT] = ACTIONS(51),
    [aux_sym_eq_sep_val_token1] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
  },
  [7] = {
    [sym_arg] = STATE(7),
    [sym_arg_identifier] = STATE(18),
    [aux_sym_arged_command_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_PIPEH] = ACTIONS(55),
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
    [anon_sym_PIPE_DOT] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_1_GT] = ACTIONS(55),
    [anon_sym_2_GT] = ACTIONS(55),
    [anon_sym_H_GT] = ACTIONS(55),
    [anon_sym_GT_GT] = ACTIONS(55),
    [anon_sym_1_GT_GT] = ACTIONS(55),
    [anon_sym_2_GT_GT] = ACTIONS(55),
    [aux_sym_eq_sep_val_token1] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
  },
  [8] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_PIPEH] = ACTIONS(62),
    [anon_sym_AT_AT] = ACTIONS(62),
    [anon_sym_AT_ATdbt] = ACTIONS(62),
    [anon_sym_AT_ATdbta] = ACTIONS(62),
    [anon_sym_AT_ATdbtb] = ACTIONS(62),
    [anon_sym_AT_ATdbts] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_AT_BANG] = ACTIONS(62),
    [anon_sym_AT_LPAREN] = ACTIONS(62),
    [anon_sym_ATa_COLON] = ACTIONS(62),
    [anon_sym_ATb_COLON] = ACTIONS(62),
    [anon_sym_ATB_COLON] = ACTIONS(62),
    [anon_sym_ATe_COLON] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_ATF_COLON] = ACTIONS(62),
    [anon_sym_ATi_COLON] = ACTIONS(62),
    [anon_sym_ATk_COLON] = ACTIONS(62),
    [anon_sym_ATo_COLON] = ACTIONS(62),
    [anon_sym_ATr_COLON] = ACTIONS(62),
    [anon_sym_ATf_COLON] = ACTIONS(62),
    [anon_sym_ATs_COLON] = ACTIONS(62),
    [anon_sym_ATx_COLON] = ACTIONS(62),
    [anon_sym_PIPE_DOT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_1_GT] = ACTIONS(62),
    [anon_sym_2_GT] = ACTIONS(62),
    [anon_sym_H_GT] = ACTIONS(62),
    [anon_sym_GT_GT] = ACTIONS(62),
    [anon_sym_1_GT_GT] = ACTIONS(62),
    [anon_sym_2_GT_GT] = ACTIONS(62),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(62),
    [anon_sym_CR] = ACTIONS(62),
    [anon_sym_SEMI] = ACTIONS(62),
  },
  [9] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_PIPEH] = ACTIONS(69),
    [anon_sym_AT_AT] = ACTIONS(69),
    [anon_sym_AT_ATdbt] = ACTIONS(69),
    [anon_sym_AT_ATdbta] = ACTIONS(69),
    [anon_sym_AT_ATdbtb] = ACTIONS(69),
    [anon_sym_AT_ATdbts] = ACTIONS(69),
    [anon_sym_AT] = ACTIONS(69),
    [anon_sym_AT_BANG] = ACTIONS(69),
    [anon_sym_AT_LPAREN] = ACTIONS(69),
    [anon_sym_ATa_COLON] = ACTIONS(69),
    [anon_sym_ATb_COLON] = ACTIONS(69),
    [anon_sym_ATB_COLON] = ACTIONS(69),
    [anon_sym_ATe_COLON] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_ATF_COLON] = ACTIONS(69),
    [anon_sym_ATi_COLON] = ACTIONS(69),
    [anon_sym_ATk_COLON] = ACTIONS(69),
    [anon_sym_ATo_COLON] = ACTIONS(69),
    [anon_sym_ATr_COLON] = ACTIONS(69),
    [anon_sym_ATf_COLON] = ACTIONS(69),
    [anon_sym_ATs_COLON] = ACTIONS(69),
    [anon_sym_ATx_COLON] = ACTIONS(69),
    [anon_sym_PIPE_DOT] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_1_GT] = ACTIONS(69),
    [anon_sym_2_GT] = ACTIONS(69),
    [anon_sym_H_GT] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(69),
    [anon_sym_1_GT_GT] = ACTIONS(69),
    [anon_sym_2_GT_GT] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
  },
  [10] = {
    [sym_pipe_second_command] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_PIPEH] = ACTIONS(75),
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
    [anon_sym_PIPE_DOT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_1_GT] = ACTIONS(75),
    [anon_sym_2_GT] = ACTIONS(75),
    [anon_sym_H_GT] = ACTIONS(75),
    [anon_sym_GT_GT] = ACTIONS(75),
    [anon_sym_1_GT_GT] = ACTIONS(75),
    [anon_sym_2_GT_GT] = ACTIONS(75),
    [sym__any_command] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_CR] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
  },
  [11] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_PIPEH] = ACTIONS(81),
    [anon_sym_AT_AT] = ACTIONS(81),
    [anon_sym_AT_ATdbt] = ACTIONS(81),
    [anon_sym_AT_ATdbta] = ACTIONS(81),
    [anon_sym_AT_ATdbtb] = ACTIONS(81),
    [anon_sym_AT_ATdbts] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(81),
    [anon_sym_AT_BANG] = ACTIONS(81),
    [anon_sym_AT_LPAREN] = ACTIONS(81),
    [anon_sym_ATa_COLON] = ACTIONS(81),
    [anon_sym_ATb_COLON] = ACTIONS(81),
    [anon_sym_ATB_COLON] = ACTIONS(81),
    [anon_sym_ATe_COLON] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_ATF_COLON] = ACTIONS(81),
    [anon_sym_ATi_COLON] = ACTIONS(81),
    [anon_sym_ATk_COLON] = ACTIONS(81),
    [anon_sym_ATo_COLON] = ACTIONS(81),
    [anon_sym_ATr_COLON] = ACTIONS(81),
    [anon_sym_ATf_COLON] = ACTIONS(81),
    [anon_sym_ATs_COLON] = ACTIONS(81),
    [anon_sym_ATx_COLON] = ACTIONS(81),
    [anon_sym_PIPE_DOT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_1_GT] = ACTIONS(81),
    [anon_sym_2_GT] = ACTIONS(81),
    [anon_sym_H_GT] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_1_GT_GT] = ACTIONS(81),
    [anon_sym_2_GT_GT] = ACTIONS(81),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_CR] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_PIPE] = ACTIONS(62),
    [anon_sym_PIPEH] = ACTIONS(62),
    [anon_sym_AT_AT] = ACTIONS(62),
    [anon_sym_AT_ATdbt] = ACTIONS(62),
    [anon_sym_AT_ATdbta] = ACTIONS(62),
    [anon_sym_AT_ATdbtb] = ACTIONS(62),
    [anon_sym_AT_ATdbts] = ACTIONS(62),
    [anon_sym_AT] = ACTIONS(62),
    [anon_sym_AT_BANG] = ACTIONS(62),
    [anon_sym_AT_LPAREN] = ACTIONS(62),
    [anon_sym_ATa_COLON] = ACTIONS(62),
    [anon_sym_ATb_COLON] = ACTIONS(62),
    [anon_sym_ATB_COLON] = ACTIONS(62),
    [anon_sym_ATe_COLON] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_ATF_COLON] = ACTIONS(62),
    [anon_sym_ATi_COLON] = ACTIONS(62),
    [anon_sym_ATk_COLON] = ACTIONS(62),
    [anon_sym_ATo_COLON] = ACTIONS(62),
    [anon_sym_ATr_COLON] = ACTIONS(62),
    [anon_sym_ATf_COLON] = ACTIONS(62),
    [anon_sym_ATs_COLON] = ACTIONS(62),
    [anon_sym_ATx_COLON] = ACTIONS(62),
    [anon_sym_PIPE_DOT] = ACTIONS(62),
    [anon_sym_GT] = ACTIONS(62),
    [anon_sym_1_GT] = ACTIONS(62),
    [anon_sym_2_GT] = ACTIONS(62),
    [anon_sym_H_GT] = ACTIONS(62),
    [anon_sym_GT_GT] = ACTIONS(62),
    [anon_sym_1_GT_GT] = ACTIONS(62),
    [anon_sym_2_GT_GT] = ACTIONS(62),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(62),
    [anon_sym_CR] = ACTIONS(62),
    [anon_sym_SEMI] = ACTIONS(62),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(85),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(85),
    [anon_sym_AT_ATdbtb] = ACTIONS(85),
    [anon_sym_AT_ATdbts] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(85),
    [anon_sym_AT_LPAREN] = ACTIONS(85),
    [anon_sym_ATa_COLON] = ACTIONS(85),
    [anon_sym_ATb_COLON] = ACTIONS(85),
    [anon_sym_ATB_COLON] = ACTIONS(85),
    [anon_sym_ATe_COLON] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_ATF_COLON] = ACTIONS(85),
    [anon_sym_ATi_COLON] = ACTIONS(85),
    [anon_sym_ATk_COLON] = ACTIONS(85),
    [anon_sym_ATo_COLON] = ACTIONS(85),
    [anon_sym_ATr_COLON] = ACTIONS(85),
    [anon_sym_ATf_COLON] = ACTIONS(85),
    [anon_sym_ATs_COLON] = ACTIONS(85),
    [anon_sym_ATx_COLON] = ACTIONS(85),
    [anon_sym_PIPE_DOT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_1_GT] = ACTIONS(85),
    [anon_sym_2_GT] = ACTIONS(85),
    [anon_sym_H_GT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_1_GT_GT] = ACTIONS(85),
    [anon_sym_2_GT_GT] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_CR] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(89),
    [anon_sym_AT_ATdbt] = ACTIONS(89),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(89),
    [anon_sym_AT_BANG] = ACTIONS(89),
    [anon_sym_AT_LPAREN] = ACTIONS(89),
    [anon_sym_ATa_COLON] = ACTIONS(89),
    [anon_sym_ATb_COLON] = ACTIONS(89),
    [anon_sym_ATB_COLON] = ACTIONS(89),
    [anon_sym_ATe_COLON] = ACTIONS(89),
    [anon_sym_ATF_COLON] = ACTIONS(89),
    [anon_sym_ATi_COLON] = ACTIONS(89),
    [anon_sym_ATk_COLON] = ACTIONS(89),
    [anon_sym_ATo_COLON] = ACTIONS(89),
    [anon_sym_ATr_COLON] = ACTIONS(89),
    [anon_sym_ATf_COLON] = ACTIONS(89),
    [anon_sym_ATs_COLON] = ACTIONS(89),
    [anon_sym_ATx_COLON] = ACTIONS(89),
    [anon_sym_PIPE_DOT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_1_GT] = ACTIONS(89),
    [anon_sym_2_GT] = ACTIONS(89),
    [anon_sym_H_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_1_GT_GT] = ACTIONS(89),
    [anon_sym_2_GT_GT] = ACTIONS(89),
    [aux_sym_eq_sep_val_token1] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_CR] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_PIPEH] = ACTIONS(93),
    [anon_sym_AT_AT] = ACTIONS(93),
    [anon_sym_AT_ATdbt] = ACTIONS(93),
    [anon_sym_AT_ATdbta] = ACTIONS(93),
    [anon_sym_AT_ATdbtb] = ACTIONS(93),
    [anon_sym_AT_ATdbts] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym_AT_BANG] = ACTIONS(93),
    [anon_sym_AT_LPAREN] = ACTIONS(93),
    [anon_sym_ATa_COLON] = ACTIONS(93),
    [anon_sym_ATb_COLON] = ACTIONS(93),
    [anon_sym_ATB_COLON] = ACTIONS(93),
    [anon_sym_ATe_COLON] = ACTIONS(93),
    [anon_sym_ATF_COLON] = ACTIONS(93),
    [anon_sym_ATi_COLON] = ACTIONS(93),
    [anon_sym_ATk_COLON] = ACTIONS(93),
    [anon_sym_ATo_COLON] = ACTIONS(93),
    [anon_sym_ATr_COLON] = ACTIONS(93),
    [anon_sym_ATf_COLON] = ACTIONS(93),
    [anon_sym_ATs_COLON] = ACTIONS(93),
    [anon_sym_ATx_COLON] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_PIPE_DOT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_1_GT] = ACTIONS(93),
    [anon_sym_2_GT] = ACTIONS(93),
    [anon_sym_H_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(93),
    [anon_sym_1_GT_GT] = ACTIONS(93),
    [anon_sym_2_GT_GT] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(93),
    [anon_sym_CR] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(99),
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
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_PIPE_DOT] = ACTIONS(99),
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
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_PIPEH] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(105),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(105),
    [anon_sym_AT_ATdbts] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_AT_BANG] = ACTIONS(105),
    [anon_sym_AT_LPAREN] = ACTIONS(105),
    [anon_sym_ATa_COLON] = ACTIONS(105),
    [anon_sym_ATb_COLON] = ACTIONS(105),
    [anon_sym_ATB_COLON] = ACTIONS(105),
    [anon_sym_ATe_COLON] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_ATF_COLON] = ACTIONS(105),
    [anon_sym_ATi_COLON] = ACTIONS(105),
    [anon_sym_ATk_COLON] = ACTIONS(105),
    [anon_sym_ATo_COLON] = ACTIONS(105),
    [anon_sym_ATr_COLON] = ACTIONS(105),
    [anon_sym_ATf_COLON] = ACTIONS(105),
    [anon_sym_ATs_COLON] = ACTIONS(105),
    [anon_sym_ATx_COLON] = ACTIONS(105),
    [anon_sym_PIPE_DOT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_1_GT] = ACTIONS(105),
    [anon_sym_2_GT] = ACTIONS(105),
    [anon_sym_H_GT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_1_GT_GT] = ACTIONS(105),
    [anon_sym_2_GT_GT] = ACTIONS(105),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_CR] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(85),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(85),
    [anon_sym_AT_ATdbtb] = ACTIONS(85),
    [anon_sym_AT_ATdbts] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(85),
    [anon_sym_AT_LPAREN] = ACTIONS(85),
    [anon_sym_ATa_COLON] = ACTIONS(85),
    [anon_sym_ATb_COLON] = ACTIONS(85),
    [anon_sym_ATB_COLON] = ACTIONS(85),
    [anon_sym_ATe_COLON] = ACTIONS(85),
    [anon_sym_ATF_COLON] = ACTIONS(85),
    [anon_sym_ATi_COLON] = ACTIONS(85),
    [anon_sym_ATk_COLON] = ACTIONS(85),
    [anon_sym_ATo_COLON] = ACTIONS(85),
    [anon_sym_ATr_COLON] = ACTIONS(85),
    [anon_sym_ATf_COLON] = ACTIONS(85),
    [anon_sym_ATs_COLON] = ACTIONS(85),
    [anon_sym_ATx_COLON] = ACTIONS(85),
    [anon_sym_PIPE_DOT] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_1_GT] = ACTIONS(85),
    [anon_sym_2_GT] = ACTIONS(85),
    [anon_sym_H_GT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(85),
    [anon_sym_1_GT_GT] = ACTIONS(85),
    [anon_sym_2_GT_GT] = ACTIONS(85),
    [aux_sym_eq_sep_val_token1] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_CR] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PIPEH] = ACTIONS(109),
    [anon_sym_AT_AT] = ACTIONS(109),
    [anon_sym_AT_ATdbt] = ACTIONS(109),
    [anon_sym_AT_ATdbta] = ACTIONS(109),
    [anon_sym_AT_ATdbtb] = ACTIONS(109),
    [anon_sym_AT_ATdbts] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym_AT_BANG] = ACTIONS(109),
    [anon_sym_AT_LPAREN] = ACTIONS(109),
    [anon_sym_ATa_COLON] = ACTIONS(109),
    [anon_sym_ATb_COLON] = ACTIONS(109),
    [anon_sym_ATB_COLON] = ACTIONS(109),
    [anon_sym_ATe_COLON] = ACTIONS(109),
    [anon_sym_ATF_COLON] = ACTIONS(109),
    [anon_sym_ATi_COLON] = ACTIONS(109),
    [anon_sym_ATk_COLON] = ACTIONS(109),
    [anon_sym_ATo_COLON] = ACTIONS(109),
    [anon_sym_ATr_COLON] = ACTIONS(109),
    [anon_sym_ATf_COLON] = ACTIONS(109),
    [anon_sym_ATs_COLON] = ACTIONS(109),
    [anon_sym_ATx_COLON] = ACTIONS(109),
    [anon_sym_PIPE_DOT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_1_GT] = ACTIONS(109),
    [anon_sym_2_GT] = ACTIONS(109),
    [anon_sym_H_GT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_1_GT_GT] = ACTIONS(109),
    [anon_sym_2_GT_GT] = ACTIONS(109),
    [sym_eq_sep_key] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_PIPEH] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(105),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(105),
    [anon_sym_AT_ATdbts] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(105),
    [anon_sym_AT_BANG] = ACTIONS(105),
    [anon_sym_AT_LPAREN] = ACTIONS(105),
    [anon_sym_ATa_COLON] = ACTIONS(105),
    [anon_sym_ATb_COLON] = ACTIONS(105),
    [anon_sym_ATB_COLON] = ACTIONS(105),
    [anon_sym_ATe_COLON] = ACTIONS(105),
    [anon_sym_ATF_COLON] = ACTIONS(105),
    [anon_sym_ATi_COLON] = ACTIONS(105),
    [anon_sym_ATk_COLON] = ACTIONS(105),
    [anon_sym_ATo_COLON] = ACTIONS(105),
    [anon_sym_ATr_COLON] = ACTIONS(105),
    [anon_sym_ATf_COLON] = ACTIONS(105),
    [anon_sym_ATs_COLON] = ACTIONS(105),
    [anon_sym_ATx_COLON] = ACTIONS(105),
    [anon_sym_PIPE_DOT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_1_GT] = ACTIONS(105),
    [anon_sym_2_GT] = ACTIONS(105),
    [anon_sym_H_GT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_1_GT_GT] = ACTIONS(105),
    [anon_sym_2_GT_GT] = ACTIONS(105),
    [aux_sym_eq_sep_val_token1] = ACTIONS(105),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_CR] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPEH] = ACTIONS(115),
    [anon_sym_AT_AT] = ACTIONS(115),
    [anon_sym_AT_ATdbt] = ACTIONS(115),
    [anon_sym_AT_ATdbta] = ACTIONS(115),
    [anon_sym_AT_ATdbtb] = ACTIONS(115),
    [anon_sym_AT_ATdbts] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym_AT_BANG] = ACTIONS(115),
    [anon_sym_AT_LPAREN] = ACTIONS(115),
    [anon_sym_ATa_COLON] = ACTIONS(115),
    [anon_sym_ATb_COLON] = ACTIONS(115),
    [anon_sym_ATB_COLON] = ACTIONS(115),
    [anon_sym_ATe_COLON] = ACTIONS(115),
    [anon_sym_ATF_COLON] = ACTIONS(115),
    [anon_sym_ATi_COLON] = ACTIONS(115),
    [anon_sym_ATk_COLON] = ACTIONS(115),
    [anon_sym_ATo_COLON] = ACTIONS(115),
    [anon_sym_ATr_COLON] = ACTIONS(115),
    [anon_sym_ATf_COLON] = ACTIONS(115),
    [anon_sym_ATs_COLON] = ACTIONS(115),
    [anon_sym_ATx_COLON] = ACTIONS(115),
    [anon_sym_PIPE_DOT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_1_GT] = ACTIONS(115),
    [anon_sym_2_GT] = ACTIONS(115),
    [anon_sym_H_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_1_GT_GT] = ACTIONS(115),
    [anon_sym_2_GT_GT] = ACTIONS(115),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_CR] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPEH] = ACTIONS(119),
    [anon_sym_AT_AT] = ACTIONS(119),
    [anon_sym_AT_ATdbt] = ACTIONS(119),
    [anon_sym_AT_ATdbta] = ACTIONS(119),
    [anon_sym_AT_ATdbtb] = ACTIONS(119),
    [anon_sym_AT_ATdbts] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_AT_BANG] = ACTIONS(119),
    [anon_sym_AT_LPAREN] = ACTIONS(119),
    [anon_sym_ATa_COLON] = ACTIONS(119),
    [anon_sym_ATb_COLON] = ACTIONS(119),
    [anon_sym_ATB_COLON] = ACTIONS(119),
    [anon_sym_ATe_COLON] = ACTIONS(119),
    [anon_sym_ATF_COLON] = ACTIONS(119),
    [anon_sym_ATi_COLON] = ACTIONS(119),
    [anon_sym_ATk_COLON] = ACTIONS(119),
    [anon_sym_ATo_COLON] = ACTIONS(119),
    [anon_sym_ATr_COLON] = ACTIONS(119),
    [anon_sym_ATf_COLON] = ACTIONS(119),
    [anon_sym_ATs_COLON] = ACTIONS(119),
    [anon_sym_ATx_COLON] = ACTIONS(119),
    [anon_sym_PIPE_DOT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_1_GT] = ACTIONS(119),
    [anon_sym_2_GT] = ACTIONS(119),
    [anon_sym_H_GT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_1_GT_GT] = ACTIONS(119),
    [anon_sym_2_GT_GT] = ACTIONS(119),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_CR] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(129),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(131),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_AT_BANG] = ACTIONS(137),
    [anon_sym_AT_LPAREN] = ACTIONS(139),
    [anon_sym_ATa_COLON] = ACTIONS(141),
    [anon_sym_ATb_COLON] = ACTIONS(143),
    [anon_sym_ATB_COLON] = ACTIONS(145),
    [anon_sym_ATe_COLON] = ACTIONS(147),
    [anon_sym_ATF_COLON] = ACTIONS(149),
    [anon_sym_ATi_COLON] = ACTIONS(151),
    [anon_sym_ATk_COLON] = ACTIONS(153),
    [anon_sym_ATo_COLON] = ACTIONS(155),
    [anon_sym_ATr_COLON] = ACTIONS(157),
    [anon_sym_ATf_COLON] = ACTIONS(159),
    [anon_sym_ATs_COLON] = ACTIONS(161),
    [anon_sym_ATx_COLON] = ACTIONS(163),
    [anon_sym_PIPE_DOT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_1_GT] = ACTIONS(167),
    [anon_sym_2_GT] = ACTIONS(169),
    [anon_sym_H_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(173),
    [anon_sym_1_GT_GT] = ACTIONS(173),
    [anon_sym_2_GT_GT] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PIPEH] = ACTIONS(181),
    [anon_sym_AT_AT] = ACTIONS(181),
    [anon_sym_AT_ATdbt] = ACTIONS(181),
    [anon_sym_AT_ATdbta] = ACTIONS(181),
    [anon_sym_AT_ATdbtb] = ACTIONS(181),
    [anon_sym_AT_ATdbts] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(181),
    [anon_sym_AT_BANG] = ACTIONS(181),
    [anon_sym_AT_LPAREN] = ACTIONS(181),
    [anon_sym_ATa_COLON] = ACTIONS(181),
    [anon_sym_ATb_COLON] = ACTIONS(181),
    [anon_sym_ATB_COLON] = ACTIONS(181),
    [anon_sym_ATe_COLON] = ACTIONS(181),
    [anon_sym_ATF_COLON] = ACTIONS(181),
    [anon_sym_ATi_COLON] = ACTIONS(181),
    [anon_sym_ATk_COLON] = ACTIONS(181),
    [anon_sym_ATo_COLON] = ACTIONS(181),
    [anon_sym_ATr_COLON] = ACTIONS(181),
    [anon_sym_ATf_COLON] = ACTIONS(181),
    [anon_sym_ATs_COLON] = ACTIONS(181),
    [anon_sym_ATx_COLON] = ACTIONS(181),
    [anon_sym_PIPE_DOT] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_1_GT] = ACTIONS(181),
    [anon_sym_2_GT] = ACTIONS(181),
    [anon_sym_H_GT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(181),
    [anon_sym_1_GT_GT] = ACTIONS(181),
    [anon_sym_2_GT_GT] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_CR] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_PIPEH] = ACTIONS(185),
    [anon_sym_AT_AT] = ACTIONS(185),
    [anon_sym_AT_ATdbt] = ACTIONS(185),
    [anon_sym_AT_ATdbta] = ACTIONS(185),
    [anon_sym_AT_ATdbtb] = ACTIONS(185),
    [anon_sym_AT_ATdbts] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(185),
    [anon_sym_AT_BANG] = ACTIONS(185),
    [anon_sym_AT_LPAREN] = ACTIONS(185),
    [anon_sym_ATa_COLON] = ACTIONS(185),
    [anon_sym_ATb_COLON] = ACTIONS(185),
    [anon_sym_ATB_COLON] = ACTIONS(185),
    [anon_sym_ATe_COLON] = ACTIONS(185),
    [anon_sym_ATF_COLON] = ACTIONS(185),
    [anon_sym_ATi_COLON] = ACTIONS(185),
    [anon_sym_ATk_COLON] = ACTIONS(185),
    [anon_sym_ATo_COLON] = ACTIONS(185),
    [anon_sym_ATr_COLON] = ACTIONS(185),
    [anon_sym_ATf_COLON] = ACTIONS(185),
    [anon_sym_ATs_COLON] = ACTIONS(185),
    [anon_sym_ATx_COLON] = ACTIONS(185),
    [anon_sym_PIPE_DOT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_1_GT] = ACTIONS(185),
    [anon_sym_2_GT] = ACTIONS(185),
    [anon_sym_H_GT] = ACTIONS(185),
    [anon_sym_GT_GT] = ACTIONS(185),
    [anon_sym_1_GT_GT] = ACTIONS(185),
    [anon_sym_2_GT_GT] = ACTIONS(185),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_CR] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPEH] = ACTIONS(189),
    [anon_sym_AT_AT] = ACTIONS(189),
    [anon_sym_AT_ATdbt] = ACTIONS(189),
    [anon_sym_AT_ATdbta] = ACTIONS(189),
    [anon_sym_AT_ATdbtb] = ACTIONS(189),
    [anon_sym_AT_ATdbts] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(189),
    [anon_sym_AT_BANG] = ACTIONS(189),
    [anon_sym_AT_LPAREN] = ACTIONS(189),
    [anon_sym_ATa_COLON] = ACTIONS(189),
    [anon_sym_ATb_COLON] = ACTIONS(189),
    [anon_sym_ATB_COLON] = ACTIONS(189),
    [anon_sym_ATe_COLON] = ACTIONS(189),
    [anon_sym_ATF_COLON] = ACTIONS(189),
    [anon_sym_ATi_COLON] = ACTIONS(189),
    [anon_sym_ATk_COLON] = ACTIONS(189),
    [anon_sym_ATo_COLON] = ACTIONS(189),
    [anon_sym_ATr_COLON] = ACTIONS(189),
    [anon_sym_ATf_COLON] = ACTIONS(189),
    [anon_sym_ATs_COLON] = ACTIONS(189),
    [anon_sym_ATx_COLON] = ACTIONS(189),
    [anon_sym_PIPE_DOT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_1_GT] = ACTIONS(189),
    [anon_sym_2_GT] = ACTIONS(189),
    [anon_sym_H_GT] = ACTIONS(189),
    [anon_sym_GT_GT] = ACTIONS(189),
    [anon_sym_1_GT_GT] = ACTIONS(189),
    [anon_sym_2_GT_GT] = ACTIONS(189),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_CR] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPEH] = ACTIONS(193),
    [anon_sym_AT_AT] = ACTIONS(193),
    [anon_sym_AT_ATdbt] = ACTIONS(193),
    [anon_sym_AT_ATdbta] = ACTIONS(193),
    [anon_sym_AT_ATdbtb] = ACTIONS(193),
    [anon_sym_AT_ATdbts] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(193),
    [anon_sym_AT_BANG] = ACTIONS(193),
    [anon_sym_AT_LPAREN] = ACTIONS(193),
    [anon_sym_ATa_COLON] = ACTIONS(193),
    [anon_sym_ATb_COLON] = ACTIONS(193),
    [anon_sym_ATB_COLON] = ACTIONS(193),
    [anon_sym_ATe_COLON] = ACTIONS(193),
    [anon_sym_ATF_COLON] = ACTIONS(193),
    [anon_sym_ATi_COLON] = ACTIONS(193),
    [anon_sym_ATk_COLON] = ACTIONS(193),
    [anon_sym_ATo_COLON] = ACTIONS(193),
    [anon_sym_ATr_COLON] = ACTIONS(193),
    [anon_sym_ATf_COLON] = ACTIONS(193),
    [anon_sym_ATs_COLON] = ACTIONS(193),
    [anon_sym_ATx_COLON] = ACTIONS(193),
    [anon_sym_PIPE_DOT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_1_GT] = ACTIONS(193),
    [anon_sym_2_GT] = ACTIONS(193),
    [anon_sym_H_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(193),
    [anon_sym_1_GT_GT] = ACTIONS(193),
    [anon_sym_2_GT_GT] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_CR] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPEH] = ACTIONS(197),
    [anon_sym_AT_AT] = ACTIONS(197),
    [anon_sym_AT_ATdbt] = ACTIONS(197),
    [anon_sym_AT_ATdbta] = ACTIONS(197),
    [anon_sym_AT_ATdbtb] = ACTIONS(197),
    [anon_sym_AT_ATdbts] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_AT_BANG] = ACTIONS(197),
    [anon_sym_AT_LPAREN] = ACTIONS(197),
    [anon_sym_ATa_COLON] = ACTIONS(197),
    [anon_sym_ATb_COLON] = ACTIONS(197),
    [anon_sym_ATB_COLON] = ACTIONS(197),
    [anon_sym_ATe_COLON] = ACTIONS(197),
    [anon_sym_ATF_COLON] = ACTIONS(197),
    [anon_sym_ATi_COLON] = ACTIONS(197),
    [anon_sym_ATk_COLON] = ACTIONS(197),
    [anon_sym_ATo_COLON] = ACTIONS(197),
    [anon_sym_ATr_COLON] = ACTIONS(197),
    [anon_sym_ATf_COLON] = ACTIONS(197),
    [anon_sym_ATs_COLON] = ACTIONS(197),
    [anon_sym_ATx_COLON] = ACTIONS(197),
    [anon_sym_PIPE_DOT] = ACTIONS(197),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_1_GT] = ACTIONS(197),
    [anon_sym_2_GT] = ACTIONS(197),
    [anon_sym_H_GT] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(197),
    [anon_sym_1_GT_GT] = ACTIONS(197),
    [anon_sym_2_GT_GT] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_AT_AT] = ACTIONS(201),
    [anon_sym_AT_ATdbt] = ACTIONS(201),
    [anon_sym_AT_ATdbta] = ACTIONS(201),
    [anon_sym_AT_ATdbtb] = ACTIONS(201),
    [anon_sym_AT_ATdbts] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(201),
    [anon_sym_AT_BANG] = ACTIONS(201),
    [anon_sym_AT_LPAREN] = ACTIONS(201),
    [anon_sym_ATa_COLON] = ACTIONS(201),
    [anon_sym_ATb_COLON] = ACTIONS(201),
    [anon_sym_ATB_COLON] = ACTIONS(201),
    [anon_sym_ATe_COLON] = ACTIONS(201),
    [anon_sym_ATF_COLON] = ACTIONS(201),
    [anon_sym_ATi_COLON] = ACTIONS(201),
    [anon_sym_ATk_COLON] = ACTIONS(201),
    [anon_sym_ATo_COLON] = ACTIONS(201),
    [anon_sym_ATr_COLON] = ACTIONS(201),
    [anon_sym_ATf_COLON] = ACTIONS(201),
    [anon_sym_ATs_COLON] = ACTIONS(201),
    [anon_sym_ATx_COLON] = ACTIONS(201),
    [anon_sym_PIPE_DOT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_1_GT] = ACTIONS(201),
    [anon_sym_2_GT] = ACTIONS(201),
    [anon_sym_H_GT] = ACTIONS(201),
    [anon_sym_GT_GT] = ACTIONS(201),
    [anon_sym_1_GT_GT] = ACTIONS(201),
    [anon_sym_2_GT_GT] = ACTIONS(201),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_CR] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(205),
    [anon_sym_AT_ATdbta] = ACTIONS(205),
    [anon_sym_AT_ATdbtb] = ACTIONS(205),
    [anon_sym_AT_ATdbts] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(205),
    [anon_sym_AT_BANG] = ACTIONS(205),
    [anon_sym_AT_LPAREN] = ACTIONS(205),
    [anon_sym_ATa_COLON] = ACTIONS(205),
    [anon_sym_ATb_COLON] = ACTIONS(205),
    [anon_sym_ATB_COLON] = ACTIONS(205),
    [anon_sym_ATe_COLON] = ACTIONS(205),
    [anon_sym_ATF_COLON] = ACTIONS(205),
    [anon_sym_ATi_COLON] = ACTIONS(205),
    [anon_sym_ATk_COLON] = ACTIONS(205),
    [anon_sym_ATo_COLON] = ACTIONS(205),
    [anon_sym_ATr_COLON] = ACTIONS(205),
    [anon_sym_ATf_COLON] = ACTIONS(205),
    [anon_sym_ATs_COLON] = ACTIONS(205),
    [anon_sym_ATx_COLON] = ACTIONS(205),
    [anon_sym_PIPE_DOT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_1_GT] = ACTIONS(205),
    [anon_sym_2_GT] = ACTIONS(205),
    [anon_sym_H_GT] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(205),
    [anon_sym_1_GT_GT] = ACTIONS(205),
    [anon_sym_2_GT_GT] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_CR] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(209),
    [anon_sym_AT_ATdbts] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_AT_BANG] = ACTIONS(209),
    [anon_sym_AT_LPAREN] = ACTIONS(209),
    [anon_sym_ATa_COLON] = ACTIONS(209),
    [anon_sym_ATb_COLON] = ACTIONS(209),
    [anon_sym_ATB_COLON] = ACTIONS(209),
    [anon_sym_ATe_COLON] = ACTIONS(209),
    [anon_sym_ATF_COLON] = ACTIONS(209),
    [anon_sym_ATi_COLON] = ACTIONS(209),
    [anon_sym_ATk_COLON] = ACTIONS(209),
    [anon_sym_ATo_COLON] = ACTIONS(209),
    [anon_sym_ATr_COLON] = ACTIONS(209),
    [anon_sym_ATf_COLON] = ACTIONS(209),
    [anon_sym_ATs_COLON] = ACTIONS(209),
    [anon_sym_ATx_COLON] = ACTIONS(209),
    [anon_sym_PIPE_DOT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_1_GT] = ACTIONS(209),
    [anon_sym_2_GT] = ACTIONS(209),
    [anon_sym_H_GT] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_1_GT_GT] = ACTIONS(209),
    [anon_sym_2_GT_GT] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_CR] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_PIPEH] = ACTIONS(213),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(213),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(213),
    [anon_sym_AT_BANG] = ACTIONS(213),
    [anon_sym_AT_LPAREN] = ACTIONS(213),
    [anon_sym_ATa_COLON] = ACTIONS(213),
    [anon_sym_ATb_COLON] = ACTIONS(213),
    [anon_sym_ATB_COLON] = ACTIONS(213),
    [anon_sym_ATe_COLON] = ACTIONS(213),
    [anon_sym_ATF_COLON] = ACTIONS(213),
    [anon_sym_ATi_COLON] = ACTIONS(213),
    [anon_sym_ATk_COLON] = ACTIONS(213),
    [anon_sym_ATo_COLON] = ACTIONS(213),
    [anon_sym_ATr_COLON] = ACTIONS(213),
    [anon_sym_ATf_COLON] = ACTIONS(213),
    [anon_sym_ATs_COLON] = ACTIONS(213),
    [anon_sym_ATx_COLON] = ACTIONS(213),
    [anon_sym_PIPE_DOT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(213),
    [anon_sym_1_GT] = ACTIONS(213),
    [anon_sym_2_GT] = ACTIONS(213),
    [anon_sym_H_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_1_GT_GT] = ACTIONS(213),
    [anon_sym_2_GT_GT] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_CR] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_PIPE] = ACTIONS(217),
    [anon_sym_PIPEH] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(217),
    [anon_sym_AT_ATdbt] = ACTIONS(217),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(217),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(217),
    [anon_sym_AT_BANG] = ACTIONS(217),
    [anon_sym_AT_LPAREN] = ACTIONS(217),
    [anon_sym_ATa_COLON] = ACTIONS(217),
    [anon_sym_ATb_COLON] = ACTIONS(217),
    [anon_sym_ATB_COLON] = ACTIONS(217),
    [anon_sym_ATe_COLON] = ACTIONS(217),
    [anon_sym_ATF_COLON] = ACTIONS(217),
    [anon_sym_ATi_COLON] = ACTIONS(217),
    [anon_sym_ATk_COLON] = ACTIONS(217),
    [anon_sym_ATo_COLON] = ACTIONS(217),
    [anon_sym_ATr_COLON] = ACTIONS(217),
    [anon_sym_ATf_COLON] = ACTIONS(217),
    [anon_sym_ATs_COLON] = ACTIONS(217),
    [anon_sym_ATx_COLON] = ACTIONS(217),
    [anon_sym_PIPE_DOT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_1_GT] = ACTIONS(217),
    [anon_sym_2_GT] = ACTIONS(217),
    [anon_sym_H_GT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_1_GT_GT] = ACTIONS(217),
    [anon_sym_2_GT_GT] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_CR] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPEH] = ACTIONS(221),
    [anon_sym_AT_AT] = ACTIONS(221),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(221),
    [anon_sym_AT_ATdbtb] = ACTIONS(221),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_AT_BANG] = ACTIONS(221),
    [anon_sym_AT_LPAREN] = ACTIONS(221),
    [anon_sym_ATa_COLON] = ACTIONS(221),
    [anon_sym_ATb_COLON] = ACTIONS(221),
    [anon_sym_ATB_COLON] = ACTIONS(221),
    [anon_sym_ATe_COLON] = ACTIONS(221),
    [anon_sym_ATF_COLON] = ACTIONS(221),
    [anon_sym_ATi_COLON] = ACTIONS(221),
    [anon_sym_ATk_COLON] = ACTIONS(221),
    [anon_sym_ATo_COLON] = ACTIONS(221),
    [anon_sym_ATr_COLON] = ACTIONS(221),
    [anon_sym_ATf_COLON] = ACTIONS(221),
    [anon_sym_ATs_COLON] = ACTIONS(221),
    [anon_sym_ATx_COLON] = ACTIONS(221),
    [anon_sym_PIPE_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_1_GT] = ACTIONS(221),
    [anon_sym_2_GT] = ACTIONS(221),
    [anon_sym_H_GT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_1_GT_GT] = ACTIONS(221),
    [anon_sym_2_GT_GT] = ACTIONS(221),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_CR] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_PIPEH] = ACTIONS(225),
    [anon_sym_AT_AT] = ACTIONS(225),
    [anon_sym_AT_ATdbt] = ACTIONS(225),
    [anon_sym_AT_ATdbta] = ACTIONS(225),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_AT_BANG] = ACTIONS(225),
    [anon_sym_AT_LPAREN] = ACTIONS(225),
    [anon_sym_ATa_COLON] = ACTIONS(225),
    [anon_sym_ATb_COLON] = ACTIONS(225),
    [anon_sym_ATB_COLON] = ACTIONS(225),
    [anon_sym_ATe_COLON] = ACTIONS(225),
    [anon_sym_ATF_COLON] = ACTIONS(225),
    [anon_sym_ATi_COLON] = ACTIONS(225),
    [anon_sym_ATk_COLON] = ACTIONS(225),
    [anon_sym_ATo_COLON] = ACTIONS(225),
    [anon_sym_ATr_COLON] = ACTIONS(225),
    [anon_sym_ATf_COLON] = ACTIONS(225),
    [anon_sym_ATs_COLON] = ACTIONS(225),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_PIPE_DOT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_1_GT] = ACTIONS(225),
    [anon_sym_2_GT] = ACTIONS(225),
    [anon_sym_H_GT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_1_GT_GT] = ACTIONS(225),
    [anon_sym_2_GT_GT] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_CR] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_PIPE] = ACTIONS(229),
    [anon_sym_PIPEH] = ACTIONS(229),
    [anon_sym_AT_AT] = ACTIONS(229),
    [anon_sym_AT_ATdbt] = ACTIONS(229),
    [anon_sym_AT_ATdbta] = ACTIONS(229),
    [anon_sym_AT_ATdbtb] = ACTIONS(229),
    [anon_sym_AT_ATdbts] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(229),
    [anon_sym_AT_BANG] = ACTIONS(229),
    [anon_sym_AT_LPAREN] = ACTIONS(229),
    [anon_sym_ATa_COLON] = ACTIONS(229),
    [anon_sym_ATb_COLON] = ACTIONS(229),
    [anon_sym_ATB_COLON] = ACTIONS(229),
    [anon_sym_ATe_COLON] = ACTIONS(229),
    [anon_sym_ATF_COLON] = ACTIONS(229),
    [anon_sym_ATi_COLON] = ACTIONS(229),
    [anon_sym_ATk_COLON] = ACTIONS(229),
    [anon_sym_ATo_COLON] = ACTIONS(229),
    [anon_sym_ATr_COLON] = ACTIONS(229),
    [anon_sym_ATf_COLON] = ACTIONS(229),
    [anon_sym_ATs_COLON] = ACTIONS(229),
    [anon_sym_ATx_COLON] = ACTIONS(229),
    [anon_sym_PIPE_DOT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_1_GT] = ACTIONS(229),
    [anon_sym_2_GT] = ACTIONS(229),
    [anon_sym_H_GT] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_1_GT_GT] = ACTIONS(229),
    [anon_sym_2_GT_GT] = ACTIONS(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_CR] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_PIPEH] = ACTIONS(233),
    [anon_sym_AT_AT] = ACTIONS(233),
    [anon_sym_AT_ATdbt] = ACTIONS(233),
    [anon_sym_AT_ATdbta] = ACTIONS(233),
    [anon_sym_AT_ATdbtb] = ACTIONS(233),
    [anon_sym_AT_ATdbts] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_AT_BANG] = ACTIONS(233),
    [anon_sym_AT_LPAREN] = ACTIONS(233),
    [anon_sym_ATa_COLON] = ACTIONS(233),
    [anon_sym_ATb_COLON] = ACTIONS(233),
    [anon_sym_ATB_COLON] = ACTIONS(233),
    [anon_sym_ATe_COLON] = ACTIONS(233),
    [anon_sym_ATF_COLON] = ACTIONS(233),
    [anon_sym_ATi_COLON] = ACTIONS(233),
    [anon_sym_ATk_COLON] = ACTIONS(233),
    [anon_sym_ATo_COLON] = ACTIONS(233),
    [anon_sym_ATr_COLON] = ACTIONS(233),
    [anon_sym_ATf_COLON] = ACTIONS(233),
    [anon_sym_ATs_COLON] = ACTIONS(233),
    [anon_sym_ATx_COLON] = ACTIONS(233),
    [anon_sym_PIPE_DOT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_1_GT] = ACTIONS(233),
    [anon_sym_2_GT] = ACTIONS(233),
    [anon_sym_H_GT] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_1_GT_GT] = ACTIONS(233),
    [anon_sym_2_GT_GT] = ACTIONS(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_CR] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PIPEH] = ACTIONS(237),
    [anon_sym_AT_AT] = ACTIONS(237),
    [anon_sym_AT_ATdbt] = ACTIONS(237),
    [anon_sym_AT_ATdbta] = ACTIONS(237),
    [anon_sym_AT_ATdbtb] = ACTIONS(237),
    [anon_sym_AT_ATdbts] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(237),
    [anon_sym_ATa_COLON] = ACTIONS(237),
    [anon_sym_ATb_COLON] = ACTIONS(237),
    [anon_sym_ATB_COLON] = ACTIONS(237),
    [anon_sym_ATe_COLON] = ACTIONS(237),
    [anon_sym_ATF_COLON] = ACTIONS(237),
    [anon_sym_ATi_COLON] = ACTIONS(237),
    [anon_sym_ATk_COLON] = ACTIONS(237),
    [anon_sym_ATo_COLON] = ACTIONS(237),
    [anon_sym_ATr_COLON] = ACTIONS(237),
    [anon_sym_ATf_COLON] = ACTIONS(237),
    [anon_sym_ATs_COLON] = ACTIONS(237),
    [anon_sym_ATx_COLON] = ACTIONS(237),
    [anon_sym_PIPE_DOT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_1_GT] = ACTIONS(237),
    [anon_sym_2_GT] = ACTIONS(237),
    [anon_sym_H_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_1_GT_GT] = ACTIONS(237),
    [anon_sym_2_GT_GT] = ACTIONS(237),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(129),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(131),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_AT_BANG] = ACTIONS(137),
    [anon_sym_AT_LPAREN] = ACTIONS(139),
    [anon_sym_ATa_COLON] = ACTIONS(141),
    [anon_sym_ATb_COLON] = ACTIONS(143),
    [anon_sym_ATB_COLON] = ACTIONS(145),
    [anon_sym_ATe_COLON] = ACTIONS(147),
    [anon_sym_ATF_COLON] = ACTIONS(149),
    [anon_sym_ATi_COLON] = ACTIONS(151),
    [anon_sym_ATk_COLON] = ACTIONS(153),
    [anon_sym_ATo_COLON] = ACTIONS(155),
    [anon_sym_ATr_COLON] = ACTIONS(157),
    [anon_sym_ATf_COLON] = ACTIONS(159),
    [anon_sym_ATs_COLON] = ACTIONS(161),
    [anon_sym_ATx_COLON] = ACTIONS(163),
    [anon_sym_PIPE_DOT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_1_GT] = ACTIONS(241),
    [anon_sym_2_GT] = ACTIONS(241),
    [anon_sym_H_GT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_1_GT_GT] = ACTIONS(241),
    [anon_sym_2_GT_GT] = ACTIONS(241),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_CR] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_PIPE] = ACTIONS(245),
    [anon_sym_PIPEH] = ACTIONS(245),
    [anon_sym_AT_AT] = ACTIONS(245),
    [anon_sym_AT_ATdbt] = ACTIONS(245),
    [anon_sym_AT_ATdbta] = ACTIONS(245),
    [anon_sym_AT_ATdbtb] = ACTIONS(245),
    [anon_sym_AT_ATdbts] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(245),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(245),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(245),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(245),
    [anon_sym_ATF_COLON] = ACTIONS(245),
    [anon_sym_ATi_COLON] = ACTIONS(245),
    [anon_sym_ATk_COLON] = ACTIONS(245),
    [anon_sym_ATo_COLON] = ACTIONS(245),
    [anon_sym_ATr_COLON] = ACTIONS(245),
    [anon_sym_ATf_COLON] = ACTIONS(245),
    [anon_sym_ATs_COLON] = ACTIONS(245),
    [anon_sym_ATx_COLON] = ACTIONS(245),
    [anon_sym_PIPE_DOT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(245),
    [anon_sym_1_GT] = ACTIONS(245),
    [anon_sym_2_GT] = ACTIONS(245),
    [anon_sym_H_GT] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_1_GT_GT] = ACTIONS(245),
    [anon_sym_2_GT_GT] = ACTIONS(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_CR] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPEH] = ACTIONS(249),
    [anon_sym_AT_AT] = ACTIONS(249),
    [anon_sym_AT_ATdbt] = ACTIONS(249),
    [anon_sym_AT_ATdbta] = ACTIONS(249),
    [anon_sym_AT_ATdbtb] = ACTIONS(249),
    [anon_sym_AT_ATdbts] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(249),
    [anon_sym_AT_LPAREN] = ACTIONS(249),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(249),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(249),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(249),
    [anon_sym_ATk_COLON] = ACTIONS(249),
    [anon_sym_ATo_COLON] = ACTIONS(249),
    [anon_sym_ATr_COLON] = ACTIONS(249),
    [anon_sym_ATf_COLON] = ACTIONS(249),
    [anon_sym_ATs_COLON] = ACTIONS(249),
    [anon_sym_ATx_COLON] = ACTIONS(249),
    [anon_sym_PIPE_DOT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_1_GT] = ACTIONS(249),
    [anon_sym_2_GT] = ACTIONS(249),
    [anon_sym_H_GT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_1_GT_GT] = ACTIONS(249),
    [anon_sym_2_GT_GT] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_CR] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_PIPEH] = ACTIONS(241),
    [anon_sym_AT_AT] = ACTIONS(241),
    [anon_sym_AT_ATdbt] = ACTIONS(241),
    [anon_sym_AT_ATdbta] = ACTIONS(241),
    [anon_sym_AT_ATdbtb] = ACTIONS(241),
    [anon_sym_AT_ATdbts] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(241),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(241),
    [anon_sym_ATB_COLON] = ACTIONS(241),
    [anon_sym_ATe_COLON] = ACTIONS(241),
    [anon_sym_ATF_COLON] = ACTIONS(241),
    [anon_sym_ATi_COLON] = ACTIONS(241),
    [anon_sym_ATk_COLON] = ACTIONS(241),
    [anon_sym_ATo_COLON] = ACTIONS(241),
    [anon_sym_ATr_COLON] = ACTIONS(241),
    [anon_sym_ATf_COLON] = ACTIONS(241),
    [anon_sym_ATs_COLON] = ACTIONS(241),
    [anon_sym_ATx_COLON] = ACTIONS(241),
    [anon_sym_PIPE_DOT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_1_GT] = ACTIONS(241),
    [anon_sym_2_GT] = ACTIONS(241),
    [anon_sym_H_GT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_1_GT_GT] = ACTIONS(241),
    [anon_sym_2_GT_GT] = ACTIONS(241),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_CR] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPEH] = ACTIONS(253),
    [anon_sym_AT_AT] = ACTIONS(253),
    [anon_sym_AT_ATdbt] = ACTIONS(253),
    [anon_sym_AT_ATdbta] = ACTIONS(253),
    [anon_sym_AT_ATdbtb] = ACTIONS(253),
    [anon_sym_AT_ATdbts] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(253),
    [anon_sym_AT_BANG] = ACTIONS(253),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(253),
    [anon_sym_ATb_COLON] = ACTIONS(253),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(253),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(253),
    [anon_sym_ATr_COLON] = ACTIONS(253),
    [anon_sym_ATf_COLON] = ACTIONS(253),
    [anon_sym_ATs_COLON] = ACTIONS(253),
    [anon_sym_ATx_COLON] = ACTIONS(253),
    [anon_sym_PIPE_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_1_GT] = ACTIONS(253),
    [anon_sym_2_GT] = ACTIONS(253),
    [anon_sym_H_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_1_GT_GT] = ACTIONS(253),
    [anon_sym_2_GT_GT] = ACTIONS(253),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_CR] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_PIPEH] = ACTIONS(257),
    [anon_sym_AT_AT] = ACTIONS(257),
    [anon_sym_AT_ATdbt] = ACTIONS(257),
    [anon_sym_AT_ATdbta] = ACTIONS(257),
    [anon_sym_AT_ATdbtb] = ACTIONS(257),
    [anon_sym_AT_ATdbts] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_AT_BANG] = ACTIONS(257),
    [anon_sym_AT_LPAREN] = ACTIONS(257),
    [anon_sym_ATa_COLON] = ACTIONS(257),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(257),
    [anon_sym_ATe_COLON] = ACTIONS(257),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(257),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(257),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(257),
    [anon_sym_ATs_COLON] = ACTIONS(257),
    [anon_sym_ATx_COLON] = ACTIONS(257),
    [anon_sym_PIPE_DOT] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_1_GT] = ACTIONS(257),
    [anon_sym_2_GT] = ACTIONS(257),
    [anon_sym_H_GT] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_1_GT_GT] = ACTIONS(257),
    [anon_sym_2_GT_GT] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_CR] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_PIPEH] = ACTIONS(261),
    [anon_sym_AT_AT] = ACTIONS(261),
    [anon_sym_AT_ATdbt] = ACTIONS(261),
    [anon_sym_AT_ATdbta] = ACTIONS(261),
    [anon_sym_AT_ATdbtb] = ACTIONS(261),
    [anon_sym_AT_ATdbts] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym_AT_BANG] = ACTIONS(261),
    [anon_sym_AT_LPAREN] = ACTIONS(261),
    [anon_sym_ATa_COLON] = ACTIONS(261),
    [anon_sym_ATb_COLON] = ACTIONS(261),
    [anon_sym_ATB_COLON] = ACTIONS(261),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(261),
    [anon_sym_ATi_COLON] = ACTIONS(261),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(261),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(261),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(261),
    [anon_sym_PIPE_DOT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(261),
    [anon_sym_1_GT] = ACTIONS(261),
    [anon_sym_2_GT] = ACTIONS(261),
    [anon_sym_H_GT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_1_GT_GT] = ACTIONS(261),
    [anon_sym_2_GT_GT] = ACTIONS(261),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_CR] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [anon_sym_PIPE] = ACTIONS(265),
    [anon_sym_PIPEH] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(265),
    [anon_sym_AT_ATdbt] = ACTIONS(265),
    [anon_sym_AT_ATdbta] = ACTIONS(265),
    [anon_sym_AT_ATdbtb] = ACTIONS(265),
    [anon_sym_AT_ATdbts] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(265),
    [anon_sym_AT_BANG] = ACTIONS(265),
    [anon_sym_AT_LPAREN] = ACTIONS(265),
    [anon_sym_ATa_COLON] = ACTIONS(265),
    [anon_sym_ATb_COLON] = ACTIONS(265),
    [anon_sym_ATB_COLON] = ACTIONS(265),
    [anon_sym_ATe_COLON] = ACTIONS(265),
    [anon_sym_ATF_COLON] = ACTIONS(265),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(265),
    [anon_sym_ATo_COLON] = ACTIONS(265),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(265),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(265),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(265),
    [anon_sym_1_GT] = ACTIONS(265),
    [anon_sym_2_GT] = ACTIONS(265),
    [anon_sym_H_GT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_1_GT_GT] = ACTIONS(265),
    [anon_sym_2_GT_GT] = ACTIONS(265),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_CR] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [anon_sym_PIPE] = ACTIONS(269),
    [anon_sym_PIPEH] = ACTIONS(269),
    [anon_sym_AT_AT] = ACTIONS(269),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(269),
    [anon_sym_AT_ATdbtb] = ACTIONS(269),
    [anon_sym_AT_ATdbts] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(269),
    [anon_sym_AT_BANG] = ACTIONS(269),
    [anon_sym_AT_LPAREN] = ACTIONS(269),
    [anon_sym_ATa_COLON] = ACTIONS(269),
    [anon_sym_ATb_COLON] = ACTIONS(269),
    [anon_sym_ATB_COLON] = ACTIONS(269),
    [anon_sym_ATe_COLON] = ACTIONS(269),
    [anon_sym_ATF_COLON] = ACTIONS(269),
    [anon_sym_ATi_COLON] = ACTIONS(269),
    [anon_sym_ATk_COLON] = ACTIONS(269),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(269),
    [anon_sym_ATf_COLON] = ACTIONS(269),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(269),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_1_GT] = ACTIONS(269),
    [anon_sym_2_GT] = ACTIONS(269),
    [anon_sym_H_GT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(269),
    [anon_sym_1_GT_GT] = ACTIONS(269),
    [anon_sym_2_GT_GT] = ACTIONS(269),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_CR] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_PIPEH] = ACTIONS(273),
    [anon_sym_AT_AT] = ACTIONS(273),
    [anon_sym_AT_ATdbt] = ACTIONS(273),
    [anon_sym_AT_ATdbta] = ACTIONS(273),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(273),
    [anon_sym_AT_BANG] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(273),
    [anon_sym_ATa_COLON] = ACTIONS(273),
    [anon_sym_ATb_COLON] = ACTIONS(273),
    [anon_sym_ATB_COLON] = ACTIONS(273),
    [anon_sym_ATe_COLON] = ACTIONS(273),
    [anon_sym_ATF_COLON] = ACTIONS(273),
    [anon_sym_ATi_COLON] = ACTIONS(273),
    [anon_sym_ATk_COLON] = ACTIONS(273),
    [anon_sym_ATo_COLON] = ACTIONS(273),
    [anon_sym_ATr_COLON] = ACTIONS(273),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(273),
    [anon_sym_ATx_COLON] = ACTIONS(273),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_1_GT] = ACTIONS(273),
    [anon_sym_2_GT] = ACTIONS(273),
    [anon_sym_H_GT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_1_GT_GT] = ACTIONS(273),
    [anon_sym_2_GT_GT] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(273),
    [anon_sym_CR] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPEH] = ACTIONS(277),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_AT_ATdbt] = ACTIONS(277),
    [anon_sym_AT_ATdbta] = ACTIONS(277),
    [anon_sym_AT_ATdbtb] = ACTIONS(277),
    [anon_sym_AT_ATdbts] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(277),
    [anon_sym_AT_BANG] = ACTIONS(277),
    [anon_sym_AT_LPAREN] = ACTIONS(277),
    [anon_sym_ATa_COLON] = ACTIONS(277),
    [anon_sym_ATb_COLON] = ACTIONS(277),
    [anon_sym_ATB_COLON] = ACTIONS(277),
    [anon_sym_ATe_COLON] = ACTIONS(277),
    [anon_sym_ATF_COLON] = ACTIONS(277),
    [anon_sym_ATi_COLON] = ACTIONS(277),
    [anon_sym_ATk_COLON] = ACTIONS(277),
    [anon_sym_ATo_COLON] = ACTIONS(277),
    [anon_sym_ATr_COLON] = ACTIONS(277),
    [anon_sym_ATf_COLON] = ACTIONS(277),
    [anon_sym_ATs_COLON] = ACTIONS(277),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_1_GT] = ACTIONS(277),
    [anon_sym_2_GT] = ACTIONS(277),
    [anon_sym_H_GT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_1_GT_GT] = ACTIONS(277),
    [anon_sym_2_GT_GT] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_CR] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(129),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(131),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(135),
    [anon_sym_AT_BANG] = ACTIONS(137),
    [anon_sym_AT_LPAREN] = ACTIONS(139),
    [anon_sym_ATa_COLON] = ACTIONS(141),
    [anon_sym_ATb_COLON] = ACTIONS(143),
    [anon_sym_ATB_COLON] = ACTIONS(145),
    [anon_sym_ATe_COLON] = ACTIONS(147),
    [anon_sym_ATF_COLON] = ACTIONS(149),
    [anon_sym_ATi_COLON] = ACTIONS(151),
    [anon_sym_ATk_COLON] = ACTIONS(153),
    [anon_sym_ATo_COLON] = ACTIONS(155),
    [anon_sym_ATr_COLON] = ACTIONS(157),
    [anon_sym_ATf_COLON] = ACTIONS(159),
    [anon_sym_ATs_COLON] = ACTIONS(161),
    [anon_sym_ATx_COLON] = ACTIONS(163),
    [anon_sym_PIPE_DOT] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_1_GT] = ACTIONS(281),
    [anon_sym_2_GT] = ACTIONS(281),
    [anon_sym_H_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(281),
    [anon_sym_1_GT_GT] = ACTIONS(281),
    [anon_sym_2_GT_GT] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_CR] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
  },
  [51] = {
    [aux_sym_commands_repeat1] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_CR] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
  },
  [52] = {
    [aux_sym_commands_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_CR] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
  },
  [53] = {
    [aux_sym_commands_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(294),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(296),
    [anon_sym_CR] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_CR] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(302),
    [anon_sym_CR] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(302),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(306),
    [anon_sym_CR] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(310),
    [anon_sym_CR] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(314),
    [anon_sym_CR] = ACTIONS(314),
    [anon_sym_SEMI] = ACTIONS(314),
  },
  [60] = {
    [sym_arg] = STATE(11),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [61] = {
    [sym_arg] = STATE(59),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [62] = {
    [sym_arg] = STATE(54),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [63] = {
    [sym_arg] = STATE(22),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [64] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [65] = {
    [sym_arg] = STATE(33),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [66] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [67] = {
    [sym_arg] = STATE(21),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [68] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [69] = {
    [sym_arg] = STATE(37),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [70] = {
    [sym_arg] = STATE(38),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [71] = {
    [sym_arg] = STATE(46),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [72] = {
    [sym_arg] = STATE(40),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [73] = {
    [sym_arg] = STATE(41),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [74] = {
    [sym_arg] = STATE(12),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [75] = {
    [sym_arg] = STATE(27),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [76] = {
    [sym_arg] = STATE(58),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [77] = {
    [sym_arg] = STATE(57),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [sym_arg] = STATE(56),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [sym_arg] = STATE(45),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [80] = {
    [sym_arg] = STATE(43),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [sym_arg] = STATE(75),
    [sym_arg_identifier] = STATE(91),
    [aux_sym_eq_sep_val_token1] = ACTIONS(318),
    [sym__comment] = ACTIONS(3),
  },
  [82] = {
    [sym_arg] = STATE(44),
    [sym_arg_identifier] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(316),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [sym_eq_sep_val] = STATE(28),
    [aux_sym_eq_sep_val_token1] = ACTIONS(320),
    [sym__comment] = ACTIONS(3),
  },
  [84] = {
    [sym_eq_sep_val] = STATE(29),
    [aux_sym_eq_sep_val_token1] = ACTIONS(320),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [anon_sym_RPAREN] = ACTIONS(322),
    [sym__comment] = ACTIONS(324),
  },
  [86] = {
    [sym_eq_sep_key] = ACTIONS(326),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [sym__comment] = ACTIONS(324),
  },
  [88] = {
    [sym__any_command] = ACTIONS(330),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [sym__macro_content] = ACTIONS(332),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(105),
    [sym__comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(86),
  [9] = {.count = 1, .reusable = true}, SHIFT(19),
  [11] = {.count = 1, .reusable = true}, SHIFT(89),
  [13] = {.count = 1, .reusable = true}, SHIFT(88),
  [15] = {.count = 1, .reusable = true}, SHIFT(4),
  [17] = {.count = 1, .reusable = false}, SHIFT(51),
  [19] = {.count = 1, .reusable = false}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, SHIFT(3),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(86),
  [29] = {.count = 1, .reusable = false}, SHIFT(19),
  [31] = {.count = 1, .reusable = false}, SHIFT(89),
  [33] = {.count = 1, .reusable = false}, SHIFT(88),
  [35] = {.count = 1, .reusable = false}, SHIFT(4),
  [37] = {.count = 1, .reusable = false}, SHIFT(55),
  [39] = {.count = 1, .reusable = false}, SHIFT(3),
  [41] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 2, .production_id = 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 2, .production_id = 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 1),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arged_command_repeat1, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arged_command_repeat1, 2),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arged_command_repeat1, 2), SHIFT_REPEAT(20),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [62] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(74),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [71] = {.count = 1, .reusable = false}, SHIFT(74),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [77] = {.count = 1, .reusable = false}, SHIFT(48),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_identifier, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_identifier, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_command, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_command, 2),
  [95] = {.count = 1, .reusable = false}, SHIFT(84),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 2),
  [101] = {.count = 1, .reusable = false}, SHIFT(83),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(16),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [123] = {.count = 1, .reusable = false}, SHIFT(10),
  [125] = {.count = 1, .reusable = false}, SHIFT(31),
  [127] = {.count = 1, .reusable = false}, SHIFT(71),
  [129] = {.count = 1, .reusable = false}, SHIFT(24),
  [131] = {.count = 1, .reusable = false}, SHIFT(25),
  [133] = {.count = 1, .reusable = false}, SHIFT(26),
  [135] = {.count = 1, .reusable = false}, SHIFT(79),
  [137] = {.count = 1, .reusable = false}, SHIFT(82),
  [139] = {.count = 1, .reusable = false}, SHIFT(81),
  [141] = {.count = 1, .reusable = false}, SHIFT(80),
  [143] = {.count = 1, .reusable = false}, SHIFT(73),
  [145] = {.count = 1, .reusable = false}, SHIFT(72),
  [147] = {.count = 1, .reusable = false}, SHIFT(60),
  [149] = {.count = 1, .reusable = false}, SHIFT(70),
  [151] = {.count = 1, .reusable = false}, SHIFT(69),
  [153] = {.count = 1, .reusable = false}, SHIFT(68),
  [155] = {.count = 1, .reusable = false}, SHIFT(67),
  [157] = {.count = 1, .reusable = false}, SHIFT(66),
  [159] = {.count = 1, .reusable = false}, SHIFT(65),
  [161] = {.count = 1, .reusable = false}, SHIFT(64),
  [163] = {.count = 1, .reusable = false}, SHIFT(63),
  [165] = {.count = 1, .reusable = false}, SHIFT(42),
  [167] = {.count = 1, .reusable = false}, SHIFT(62),
  [169] = {.count = 1, .reusable = false}, SHIFT(61),
  [171] = {.count = 1, .reusable = false}, SHIFT(76),
  [173] = {.count = 1, .reusable = false}, SHIFT(77),
  [175] = {.count = 1, .reusable = false}, SHIFT(78),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym__command, 1),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 4),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_command, 4),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_command, 4),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_system_command, 2),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_system_command, 2),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_command, 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_command, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [245] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [263] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_macro_command, 3),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_macro_command, 3),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [285] = {.count = 1, .reusable = false}, SHIFT(2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_out_redirect_command, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_err_append_redirect_command, 3),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_out_append_redirect_command, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_html_redirect_command, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_err_redirect_command, 3),
  [316] = {.count = 1, .reusable = false}, SHIFT(17),
  [318] = {.count = 1, .reusable = false}, SHIFT(90),
  [320] = {.count = 1, .reusable = false}, SHIFT(30),
  [322] = {.count = 1, .reusable = true}, SHIFT(49),
  [324] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [326] = {.count = 1, .reusable = false}, SHIFT(15),
  [328] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [330] = {.count = 1, .reusable = false}, SHIFT(35),
  [332] = {.count = 1, .reusable = false}, SHIFT(85),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
