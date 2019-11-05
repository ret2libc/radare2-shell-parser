#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 111
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_PIPE = 1,
  anon_sym_PIPEH = 2,
  anon_sym_AT_AT = 3,
  anon_sym_AT_ATdbt = 4,
  anon_sym_AT_ATdbta = 5,
  anon_sym_AT_ATdbtb = 6,
  anon_sym_AT_ATdbts = 7,
  anon_sym_AT_AT_DOT = 8,
  anon_sym_AT_AT_EQ = 9,
  anon_sym_AT_ATk = 10,
  anon_sym_AT_ATt = 11,
  anon_sym_AT_ATb = 12,
  anon_sym_AT_ATi = 13,
  anon_sym_AT_ATiS = 14,
  anon_sym_AT_ATf = 15,
  anon_sym_COLON = 16,
  anon_sym_AT_ATs_COLON = 17,
  anon_sym_AT_ATc_COLON = 18,
  anon_sym_AT = 19,
  anon_sym_AT_BANG = 20,
  anon_sym_AT_LPAREN = 21,
  anon_sym_ATa_COLON = 22,
  anon_sym_ATb_COLON = 23,
  anon_sym_ATB_COLON = 24,
  anon_sym_ATe_COLON = 25,
  anon_sym_COMMA = 26,
  anon_sym_ATF_COLON = 27,
  anon_sym_ATi_COLON = 28,
  anon_sym_ATk_COLON = 29,
  anon_sym_ATo_COLON = 30,
  anon_sym_ATr_COLON = 31,
  anon_sym_ATf_COLON = 32,
  anon_sym_ATs_COLON = 33,
  anon_sym_ATx_COLON = 34,
  anon_sym_STAR = 35,
  anon_sym_EQ = 36,
  anon_sym_PERCENT = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  anon_sym_BANG = 40,
  anon_sym_DOT = 41,
  anon_sym_PIPE_DOT = 42,
  sym_interpreter_command = 43,
  anon_sym_GT = 44,
  anon_sym_1_GT = 45,
  anon_sym_2_GT = 46,
  anon_sym_H_GT = 47,
  anon_sym_GT_GT = 48,
  anon_sym_1_GT_GT = 49,
  anon_sym_2_GT_GT = 50,
  sym_eq_sep_key = 51,
  aux_sym_eq_sep_val_token1 = 52,
  sym__macro_content = 53,
  sym__any_command = 54,
  aux_sym_cmd_identifier_token1 = 55,
  anon_sym_QMARK_PIPE_QMARK = 56,
  anon_sym_PIPE_QMARK = 57,
  sym_number = 58,
  sym__comment = 59,
  anon_sym_LF = 60,
  anon_sym_CR = 61,
  anon_sym_SEMI = 62,
  sym_commands = 63,
  sym__command = 64,
  sym__simple_command = 65,
  sym__tmp_command = 66,
  sym__iter_command = 67,
  sym__pipe_command = 68,
  sym_html_disable_command = 69,
  sym_html_enable_command = 70,
  sym_pipe_command = 71,
  sym_pipe_second_command = 72,
  sym_iter_flags_command = 73,
  sym_iter_dbta_command = 74,
  sym_iter_dbtb_command = 75,
  sym_iter_dbts_command = 76,
  sym_iter_file_lines_command = 77,
  sym_iter_offsets_command = 78,
  sym_iter_sdbquery_command = 79,
  sym_iter_threads_command = 80,
  sym_iter_bbs_command = 81,
  sym_iter_instrs_command = 82,
  sym_iter_sections_command = 83,
  sym_iter_functions_command = 84,
  sym_iter_step_command = 85,
  sym_iter_interpret_command = 86,
  sym_tmp_seek_command = 87,
  sym_tmp_blksz_command = 88,
  sym_tmp_fromto_command = 89,
  sym_tmp_arch_command = 90,
  sym_tmp_bits_command = 91,
  sym_tmp_nthi_command = 92,
  sym_tmp_eval_command = 93,
  sym_tmp_fs_command = 94,
  sym_tmp_reli_command = 95,
  sym_tmp_kuery_command = 96,
  sym_tmp_fd_command = 97,
  sym_tmp_reg_command = 98,
  sym_tmp_file_command = 99,
  sym_tmp_string_command = 100,
  sym_tmp_hex_command = 101,
  sym_pointer_command = 102,
  sym_env_command = 103,
  sym_macro_command = 104,
  sym_system_command = 105,
  sym_interpret_command = 106,
  sym_arged_command = 107,
  sym_repeat_command = 108,
  sym_out_redirect_command = 109,
  sym_err_redirect_command = 110,
  sym_html_redirect_command = 111,
  sym_out_append_redirect_command = 112,
  sym_err_append_redirect_command = 113,
  sym_arg = 114,
  sym_eq_sep_val = 115,
  sym_cmd_identifier = 116,
  sym_arg_identifier = 117,
  aux_sym_commands_repeat1 = 118,
  aux_sym_iter_offsets_command_repeat1 = 119,
  aux_sym_tmp_eval_command_repeat1 = 120,
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
  [anon_sym_AT_AT_DOT] = "@@.",
  [anon_sym_AT_AT_EQ] = "@@=",
  [anon_sym_AT_ATk] = "@@k",
  [anon_sym_AT_ATt] = "@@t",
  [anon_sym_AT_ATb] = "@@b",
  [anon_sym_AT_ATi] = "@@i",
  [anon_sym_AT_ATiS] = "@@iS",
  [anon_sym_AT_ATf] = "@@f",
  [anon_sym_COLON] = ":",
  [anon_sym_AT_ATs_COLON] = "@@s:",
  [anon_sym_AT_ATc_COLON] = "@@c:",
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
  [sym_iter_file_lines_command] = "iter_file_lines_command",
  [sym_iter_offsets_command] = "iter_offsets_command",
  [sym_iter_sdbquery_command] = "iter_sdbquery_command",
  [sym_iter_threads_command] = "iter_threads_command",
  [sym_iter_bbs_command] = "iter_bbs_command",
  [sym_iter_instrs_command] = "iter_instrs_command",
  [sym_iter_sections_command] = "iter_sections_command",
  [sym_iter_functions_command] = "iter_functions_command",
  [sym_iter_step_command] = "iter_step_command",
  [sym_iter_interpret_command] = "iter_interpret_command",
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
  [aux_sym_iter_offsets_command_repeat1] = "iter_offsets_command_repeat1",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
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
  [anon_sym_AT_AT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATk] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATiS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATs_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_ATc_COLON] = {
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
  [sym_iter_file_lines_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_offsets_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_sdbquery_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_threads_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_bbs_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_instrs_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_sections_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_functions_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_step_command] = {
    .visible = true,
    .named = true,
  },
  [sym_iter_interpret_command] = {
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
  [aux_sym_iter_offsets_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tmp_eval_command_repeat1] = {
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
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '1') ADVANCE(199);
      if (lookahead == '2') ADVANCE(200);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead == '2') ADVANCE(153);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == '|') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(144);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(212);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(212);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '2') ADVANCE(34);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == ';') ADVANCE(214);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '@') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '|') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 9:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 10:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 11:
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(147);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(136);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(114);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == '?') ADVANCE(195);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(162);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(105);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(124);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(126);
      END_STATE();
    case 36:
      if (lookahead == '?') ADVANCE(197);
      END_STATE();
    case 37:
      if (lookahead == '?') ADVANCE(198);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == 'H') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'k') ADVANCE(61);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'k') ADVANCE(62);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 's') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '@') ADVANCE(47);
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
    case 79:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'B') ADVANCE(169);
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'k') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(205);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_H_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(136);
      if (lookahead == '/') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(139);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 144:
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
          lookahead != '|') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead == '2') ADVANCE(153);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(147);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(150);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(18);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == ')') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(18);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(18);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 0) ADVANCE(42);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == 'H') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == '>') ADVANCE(121);
      if (lookahead == '@') ADVANCE(79);
      if (lookahead == 'H') ADVANCE(186);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(18);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '!' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_cmd_identifier_token1);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_QMARK_PIPE_QMARK);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PIPE_QMARK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '>') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '>') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(202);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(146);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(146);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t') ADVANCE(134);
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == '\\') ADVANCE(135);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 214:
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
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 163},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 2},
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
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
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
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 13},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 165},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
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
    [anon_sym_AT_AT_DOT] = ACTIONS(1),
    [anon_sym_AT_AT_EQ] = ACTIONS(1),
    [anon_sym_AT_ATk] = ACTIONS(1),
    [anon_sym_AT_ATt] = ACTIONS(1),
    [anon_sym_AT_ATb] = ACTIONS(1),
    [anon_sym_AT_ATi] = ACTIONS(1),
    [anon_sym_AT_ATiS] = ACTIONS(1),
    [anon_sym_AT_ATf] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT_ATs_COLON] = ACTIONS(1),
    [anon_sym_AT_ATc_COLON] = ACTIONS(1),
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
    [sym_commands] = STATE(106),
    [sym__command] = STATE(65),
    [sym__simple_command] = STATE(45),
    [sym__tmp_command] = STATE(45),
    [sym__iter_command] = STATE(45),
    [sym__pipe_command] = STATE(45),
    [sym_html_disable_command] = STATE(45),
    [sym_html_enable_command] = STATE(45),
    [sym_pipe_command] = STATE(45),
    [sym_iter_flags_command] = STATE(45),
    [sym_iter_dbta_command] = STATE(45),
    [sym_iter_dbtb_command] = STATE(45),
    [sym_iter_dbts_command] = STATE(45),
    [sym_iter_file_lines_command] = STATE(45),
    [sym_iter_offsets_command] = STATE(45),
    [sym_iter_sdbquery_command] = STATE(45),
    [sym_iter_threads_command] = STATE(45),
    [sym_iter_bbs_command] = STATE(45),
    [sym_iter_instrs_command] = STATE(45),
    [sym_iter_sections_command] = STATE(45),
    [sym_iter_functions_command] = STATE(45),
    [sym_iter_step_command] = STATE(45),
    [sym_iter_interpret_command] = STATE(45),
    [sym_tmp_seek_command] = STATE(45),
    [sym_tmp_blksz_command] = STATE(45),
    [sym_tmp_fromto_command] = STATE(45),
    [sym_tmp_arch_command] = STATE(45),
    [sym_tmp_bits_command] = STATE(45),
    [sym_tmp_nthi_command] = STATE(45),
    [sym_tmp_eval_command] = STATE(45),
    [sym_tmp_fs_command] = STATE(45),
    [sym_tmp_reli_command] = STATE(45),
    [sym_tmp_kuery_command] = STATE(45),
    [sym_tmp_fd_command] = STATE(45),
    [sym_tmp_reg_command] = STATE(45),
    [sym_tmp_file_command] = STATE(45),
    [sym_tmp_string_command] = STATE(45),
    [sym_tmp_hex_command] = STATE(45),
    [sym_pointer_command] = STATE(45),
    [sym_env_command] = STATE(45),
    [sym_macro_command] = STATE(45),
    [sym_system_command] = STATE(45),
    [sym_interpret_command] = STATE(45),
    [sym_arged_command] = STATE(45),
    [sym_repeat_command] = STATE(45),
    [sym_out_redirect_command] = STATE(65),
    [sym_err_redirect_command] = STATE(65),
    [sym_html_redirect_command] = STATE(65),
    [sym_out_append_redirect_command] = STATE(65),
    [sym_err_append_redirect_command] = STATE(65),
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
    [sym__command] = STATE(70),
    [sym__simple_command] = STATE(45),
    [sym__tmp_command] = STATE(45),
    [sym__iter_command] = STATE(45),
    [sym__pipe_command] = STATE(45),
    [sym_html_disable_command] = STATE(45),
    [sym_html_enable_command] = STATE(45),
    [sym_pipe_command] = STATE(45),
    [sym_iter_flags_command] = STATE(45),
    [sym_iter_dbta_command] = STATE(45),
    [sym_iter_dbtb_command] = STATE(45),
    [sym_iter_dbts_command] = STATE(45),
    [sym_iter_file_lines_command] = STATE(45),
    [sym_iter_offsets_command] = STATE(45),
    [sym_iter_sdbquery_command] = STATE(45),
    [sym_iter_threads_command] = STATE(45),
    [sym_iter_bbs_command] = STATE(45),
    [sym_iter_instrs_command] = STATE(45),
    [sym_iter_sections_command] = STATE(45),
    [sym_iter_functions_command] = STATE(45),
    [sym_iter_step_command] = STATE(45),
    [sym_iter_interpret_command] = STATE(45),
    [sym_tmp_seek_command] = STATE(45),
    [sym_tmp_blksz_command] = STATE(45),
    [sym_tmp_fromto_command] = STATE(45),
    [sym_tmp_arch_command] = STATE(45),
    [sym_tmp_bits_command] = STATE(45),
    [sym_tmp_nthi_command] = STATE(45),
    [sym_tmp_eval_command] = STATE(45),
    [sym_tmp_fs_command] = STATE(45),
    [sym_tmp_reli_command] = STATE(45),
    [sym_tmp_kuery_command] = STATE(45),
    [sym_tmp_fd_command] = STATE(45),
    [sym_tmp_reg_command] = STATE(45),
    [sym_tmp_file_command] = STATE(45),
    [sym_tmp_string_command] = STATE(45),
    [sym_tmp_hex_command] = STATE(45),
    [sym_pointer_command] = STATE(45),
    [sym_env_command] = STATE(45),
    [sym_macro_command] = STATE(45),
    [sym_system_command] = STATE(45),
    [sym_interpret_command] = STATE(45),
    [sym_arged_command] = STATE(45),
    [sym_repeat_command] = STATE(45),
    [sym_out_redirect_command] = STATE(70),
    [sym_err_redirect_command] = STATE(70),
    [sym_html_redirect_command] = STATE(70),
    [sym_out_append_redirect_command] = STATE(70),
    [sym_err_append_redirect_command] = STATE(70),
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
    [sym__simple_command] = STATE(55),
    [sym__tmp_command] = STATE(55),
    [sym__iter_command] = STATE(55),
    [sym__pipe_command] = STATE(55),
    [sym_html_disable_command] = STATE(55),
    [sym_html_enable_command] = STATE(55),
    [sym_pipe_command] = STATE(55),
    [sym_iter_flags_command] = STATE(55),
    [sym_iter_dbta_command] = STATE(55),
    [sym_iter_dbtb_command] = STATE(55),
    [sym_iter_dbts_command] = STATE(55),
    [sym_iter_file_lines_command] = STATE(55),
    [sym_iter_offsets_command] = STATE(55),
    [sym_iter_sdbquery_command] = STATE(55),
    [sym_iter_threads_command] = STATE(55),
    [sym_iter_bbs_command] = STATE(55),
    [sym_iter_instrs_command] = STATE(55),
    [sym_iter_sections_command] = STATE(55),
    [sym_iter_functions_command] = STATE(55),
    [sym_iter_step_command] = STATE(55),
    [sym_iter_interpret_command] = STATE(55),
    [sym_tmp_seek_command] = STATE(55),
    [sym_tmp_blksz_command] = STATE(55),
    [sym_tmp_fromto_command] = STATE(55),
    [sym_tmp_arch_command] = STATE(55),
    [sym_tmp_bits_command] = STATE(55),
    [sym_tmp_nthi_command] = STATE(55),
    [sym_tmp_eval_command] = STATE(55),
    [sym_tmp_fs_command] = STATE(55),
    [sym_tmp_reli_command] = STATE(55),
    [sym_tmp_kuery_command] = STATE(55),
    [sym_tmp_fd_command] = STATE(55),
    [sym_tmp_reg_command] = STATE(55),
    [sym_tmp_file_command] = STATE(55),
    [sym_tmp_string_command] = STATE(55),
    [sym_tmp_hex_command] = STATE(55),
    [sym_pointer_command] = STATE(55),
    [sym_env_command] = STATE(55),
    [sym_macro_command] = STATE(55),
    [sym_system_command] = STATE(55),
    [sym_interpret_command] = STATE(55),
    [sym_arged_command] = STATE(55),
    [sym_repeat_command] = STATE(55),
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
    [sym__simple_command] = STATE(34),
    [sym__tmp_command] = STATE(34),
    [sym__iter_command] = STATE(34),
    [sym__pipe_command] = STATE(34),
    [sym_html_disable_command] = STATE(34),
    [sym_html_enable_command] = STATE(34),
    [sym_pipe_command] = STATE(34),
    [sym_iter_flags_command] = STATE(34),
    [sym_iter_dbta_command] = STATE(34),
    [sym_iter_dbtb_command] = STATE(34),
    [sym_iter_dbts_command] = STATE(34),
    [sym_iter_file_lines_command] = STATE(34),
    [sym_iter_offsets_command] = STATE(34),
    [sym_iter_sdbquery_command] = STATE(34),
    [sym_iter_threads_command] = STATE(34),
    [sym_iter_bbs_command] = STATE(34),
    [sym_iter_instrs_command] = STATE(34),
    [sym_iter_sections_command] = STATE(34),
    [sym_iter_functions_command] = STATE(34),
    [sym_iter_step_command] = STATE(34),
    [sym_iter_interpret_command] = STATE(34),
    [sym_tmp_seek_command] = STATE(34),
    [sym_tmp_blksz_command] = STATE(34),
    [sym_tmp_fromto_command] = STATE(34),
    [sym_tmp_arch_command] = STATE(34),
    [sym_tmp_bits_command] = STATE(34),
    [sym_tmp_nthi_command] = STATE(34),
    [sym_tmp_eval_command] = STATE(34),
    [sym_tmp_fs_command] = STATE(34),
    [sym_tmp_reli_command] = STATE(34),
    [sym_tmp_kuery_command] = STATE(34),
    [sym_tmp_fd_command] = STATE(34),
    [sym_tmp_reg_command] = STATE(34),
    [sym_tmp_file_command] = STATE(34),
    [sym_tmp_string_command] = STATE(34),
    [sym_tmp_hex_command] = STATE(34),
    [sym_pointer_command] = STATE(34),
    [sym_env_command] = STATE(34),
    [sym_macro_command] = STATE(34),
    [sym_system_command] = STATE(34),
    [sym_interpret_command] = STATE(34),
    [sym_arged_command] = STATE(34),
    [sym_repeat_command] = STATE(34),
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
    [sym__simple_command] = STATE(48),
    [sym__tmp_command] = STATE(48),
    [sym__iter_command] = STATE(48),
    [sym__pipe_command] = STATE(48),
    [sym_html_disable_command] = STATE(48),
    [sym_html_enable_command] = STATE(48),
    [sym_pipe_command] = STATE(48),
    [sym_iter_flags_command] = STATE(48),
    [sym_iter_dbta_command] = STATE(48),
    [sym_iter_dbtb_command] = STATE(48),
    [sym_iter_dbts_command] = STATE(48),
    [sym_iter_file_lines_command] = STATE(48),
    [sym_iter_offsets_command] = STATE(48),
    [sym_iter_sdbquery_command] = STATE(48),
    [sym_iter_threads_command] = STATE(48),
    [sym_iter_bbs_command] = STATE(48),
    [sym_iter_instrs_command] = STATE(48),
    [sym_iter_sections_command] = STATE(48),
    [sym_iter_functions_command] = STATE(48),
    [sym_iter_step_command] = STATE(48),
    [sym_iter_interpret_command] = STATE(48),
    [sym_tmp_seek_command] = STATE(48),
    [sym_tmp_blksz_command] = STATE(48),
    [sym_tmp_fromto_command] = STATE(48),
    [sym_tmp_arch_command] = STATE(48),
    [sym_tmp_bits_command] = STATE(48),
    [sym_tmp_nthi_command] = STATE(48),
    [sym_tmp_eval_command] = STATE(48),
    [sym_tmp_fs_command] = STATE(48),
    [sym_tmp_reli_command] = STATE(48),
    [sym_tmp_kuery_command] = STATE(48),
    [sym_tmp_fd_command] = STATE(48),
    [sym_tmp_reg_command] = STATE(48),
    [sym_tmp_file_command] = STATE(48),
    [sym_tmp_string_command] = STATE(48),
    [sym_tmp_hex_command] = STATE(48),
    [sym_pointer_command] = STATE(48),
    [sym_env_command] = STATE(48),
    [sym_macro_command] = STATE(48),
    [sym_system_command] = STATE(48),
    [sym_interpret_command] = STATE(48),
    [sym_arged_command] = STATE(48),
    [sym_repeat_command] = STATE(48),
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
  [6] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(19),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPEH] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT_ATdbt] = ACTIONS(45),
    [anon_sym_AT_ATdbta] = ACTIONS(45),
    [anon_sym_AT_ATdbtb] = ACTIONS(45),
    [anon_sym_AT_ATdbts] = ACTIONS(45),
    [anon_sym_AT_AT_DOT] = ACTIONS(45),
    [anon_sym_AT_AT_EQ] = ACTIONS(45),
    [anon_sym_AT_ATk] = ACTIONS(45),
    [anon_sym_AT_ATt] = ACTIONS(45),
    [anon_sym_AT_ATb] = ACTIONS(45),
    [anon_sym_AT_ATi] = ACTIONS(45),
    [anon_sym_AT_ATiS] = ACTIONS(45),
    [anon_sym_AT_ATf] = ACTIONS(45),
    [anon_sym_AT_ATs_COLON] = ACTIONS(45),
    [anon_sym_AT_ATc_COLON] = ACTIONS(45),
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
  [7] = {
    [sym_arg] = STATE(9),
    [sym_arg_identifier] = STATE(19),
    [aux_sym_iter_offsets_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(51),
    [anon_sym_PIPEH] = ACTIONS(51),
    [anon_sym_AT_AT] = ACTIONS(51),
    [anon_sym_AT_ATdbt] = ACTIONS(51),
    [anon_sym_AT_ATdbta] = ACTIONS(51),
    [anon_sym_AT_ATdbtb] = ACTIONS(51),
    [anon_sym_AT_ATdbts] = ACTIONS(51),
    [anon_sym_AT_AT_DOT] = ACTIONS(51),
    [anon_sym_AT_AT_EQ] = ACTIONS(51),
    [anon_sym_AT_ATk] = ACTIONS(51),
    [anon_sym_AT_ATt] = ACTIONS(51),
    [anon_sym_AT_ATb] = ACTIONS(51),
    [anon_sym_AT_ATi] = ACTIONS(51),
    [anon_sym_AT_ATiS] = ACTIONS(51),
    [anon_sym_AT_ATf] = ACTIONS(51),
    [anon_sym_AT_ATs_COLON] = ACTIONS(51),
    [anon_sym_AT_ATc_COLON] = ACTIONS(51),
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
  [8] = {
    [sym_arg] = STATE(9),
    [sym_arg_identifier] = STATE(19),
    [aux_sym_iter_offsets_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_PIPEH] = ACTIONS(55),
    [anon_sym_AT_AT] = ACTIONS(55),
    [anon_sym_AT_ATdbt] = ACTIONS(55),
    [anon_sym_AT_ATdbta] = ACTIONS(55),
    [anon_sym_AT_ATdbtb] = ACTIONS(55),
    [anon_sym_AT_ATdbts] = ACTIONS(55),
    [anon_sym_AT_AT_DOT] = ACTIONS(55),
    [anon_sym_AT_AT_EQ] = ACTIONS(55),
    [anon_sym_AT_ATk] = ACTIONS(55),
    [anon_sym_AT_ATt] = ACTIONS(55),
    [anon_sym_AT_ATb] = ACTIONS(55),
    [anon_sym_AT_ATi] = ACTIONS(55),
    [anon_sym_AT_ATiS] = ACTIONS(55),
    [anon_sym_AT_ATf] = ACTIONS(55),
    [anon_sym_AT_ATs_COLON] = ACTIONS(55),
    [anon_sym_AT_ATc_COLON] = ACTIONS(55),
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
    [aux_sym_eq_sep_val_token1] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(55),
    [anon_sym_CR] = ACTIONS(55),
    [anon_sym_SEMI] = ACTIONS(55),
  },
  [9] = {
    [sym_arg] = STATE(9),
    [sym_arg_identifier] = STATE(19),
    [aux_sym_iter_offsets_command_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(59),
    [anon_sym_PIPEH] = ACTIONS(59),
    [anon_sym_AT_AT] = ACTIONS(59),
    [anon_sym_AT_ATdbt] = ACTIONS(59),
    [anon_sym_AT_ATdbta] = ACTIONS(59),
    [anon_sym_AT_ATdbtb] = ACTIONS(59),
    [anon_sym_AT_ATdbts] = ACTIONS(59),
    [anon_sym_AT_AT_DOT] = ACTIONS(59),
    [anon_sym_AT_AT_EQ] = ACTIONS(59),
    [anon_sym_AT_ATk] = ACTIONS(59),
    [anon_sym_AT_ATt] = ACTIONS(59),
    [anon_sym_AT_ATb] = ACTIONS(59),
    [anon_sym_AT_ATi] = ACTIONS(59),
    [anon_sym_AT_ATiS] = ACTIONS(59),
    [anon_sym_AT_ATf] = ACTIONS(59),
    [anon_sym_AT_ATs_COLON] = ACTIONS(59),
    [anon_sym_AT_ATc_COLON] = ACTIONS(59),
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
    [anon_sym_PIPE_DOT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_1_GT] = ACTIONS(59),
    [anon_sym_2_GT] = ACTIONS(59),
    [anon_sym_H_GT] = ACTIONS(59),
    [anon_sym_GT_GT] = ACTIONS(59),
    [anon_sym_1_GT_GT] = ACTIONS(59),
    [anon_sym_2_GT_GT] = ACTIONS(59),
    [aux_sym_eq_sep_val_token1] = ACTIONS(61),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(59),
    [anon_sym_CR] = ACTIONS(59),
    [anon_sym_SEMI] = ACTIONS(59),
  },
  [10] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_PIPEH] = ACTIONS(66),
    [anon_sym_AT_AT] = ACTIONS(66),
    [anon_sym_AT_ATdbt] = ACTIONS(66),
    [anon_sym_AT_ATdbta] = ACTIONS(66),
    [anon_sym_AT_ATdbtb] = ACTIONS(66),
    [anon_sym_AT_ATdbts] = ACTIONS(66),
    [anon_sym_AT_AT_DOT] = ACTIONS(66),
    [anon_sym_AT_AT_EQ] = ACTIONS(66),
    [anon_sym_AT_ATk] = ACTIONS(66),
    [anon_sym_AT_ATt] = ACTIONS(66),
    [anon_sym_AT_ATb] = ACTIONS(66),
    [anon_sym_AT_ATi] = ACTIONS(66),
    [anon_sym_AT_ATiS] = ACTIONS(66),
    [anon_sym_AT_ATf] = ACTIONS(66),
    [anon_sym_AT_ATs_COLON] = ACTIONS(66),
    [anon_sym_AT_ATc_COLON] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_AT_BANG] = ACTIONS(66),
    [anon_sym_AT_LPAREN] = ACTIONS(66),
    [anon_sym_ATa_COLON] = ACTIONS(66),
    [anon_sym_ATb_COLON] = ACTIONS(66),
    [anon_sym_ATB_COLON] = ACTIONS(66),
    [anon_sym_ATe_COLON] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_ATF_COLON] = ACTIONS(66),
    [anon_sym_ATi_COLON] = ACTIONS(66),
    [anon_sym_ATk_COLON] = ACTIONS(66),
    [anon_sym_ATo_COLON] = ACTIONS(66),
    [anon_sym_ATr_COLON] = ACTIONS(66),
    [anon_sym_ATf_COLON] = ACTIONS(66),
    [anon_sym_ATs_COLON] = ACTIONS(66),
    [anon_sym_ATx_COLON] = ACTIONS(66),
    [anon_sym_PIPE_DOT] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_1_GT] = ACTIONS(66),
    [anon_sym_2_GT] = ACTIONS(66),
    [anon_sym_H_GT] = ACTIONS(66),
    [anon_sym_GT_GT] = ACTIONS(66),
    [anon_sym_1_GT_GT] = ACTIONS(66),
    [anon_sym_2_GT_GT] = ACTIONS(66),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(66),
    [anon_sym_CR] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(66),
  },
  [11] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_PIPEH] = ACTIONS(73),
    [anon_sym_AT_AT] = ACTIONS(73),
    [anon_sym_AT_ATdbt] = ACTIONS(73),
    [anon_sym_AT_ATdbta] = ACTIONS(73),
    [anon_sym_AT_ATdbtb] = ACTIONS(73),
    [anon_sym_AT_ATdbts] = ACTIONS(73),
    [anon_sym_AT_AT_DOT] = ACTIONS(73),
    [anon_sym_AT_AT_EQ] = ACTIONS(73),
    [anon_sym_AT_ATk] = ACTIONS(73),
    [anon_sym_AT_ATt] = ACTIONS(73),
    [anon_sym_AT_ATb] = ACTIONS(73),
    [anon_sym_AT_ATi] = ACTIONS(73),
    [anon_sym_AT_ATiS] = ACTIONS(73),
    [anon_sym_AT_ATf] = ACTIONS(73),
    [anon_sym_AT_ATs_COLON] = ACTIONS(73),
    [anon_sym_AT_ATc_COLON] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym_AT_BANG] = ACTIONS(73),
    [anon_sym_AT_LPAREN] = ACTIONS(73),
    [anon_sym_ATa_COLON] = ACTIONS(73),
    [anon_sym_ATb_COLON] = ACTIONS(73),
    [anon_sym_ATB_COLON] = ACTIONS(73),
    [anon_sym_ATe_COLON] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(75),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_CR] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
  },
  [12] = {
    [sym_pipe_second_command] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_PIPEH] = ACTIONS(79),
    [anon_sym_AT_AT] = ACTIONS(79),
    [anon_sym_AT_ATdbt] = ACTIONS(79),
    [anon_sym_AT_ATdbta] = ACTIONS(79),
    [anon_sym_AT_ATdbtb] = ACTIONS(79),
    [anon_sym_AT_ATdbts] = ACTIONS(79),
    [anon_sym_AT_AT_DOT] = ACTIONS(79),
    [anon_sym_AT_AT_EQ] = ACTIONS(79),
    [anon_sym_AT_ATk] = ACTIONS(79),
    [anon_sym_AT_ATt] = ACTIONS(79),
    [anon_sym_AT_ATb] = ACTIONS(79),
    [anon_sym_AT_ATi] = ACTIONS(79),
    [anon_sym_AT_ATiS] = ACTIONS(79),
    [anon_sym_AT_ATf] = ACTIONS(79),
    [anon_sym_AT_ATs_COLON] = ACTIONS(79),
    [anon_sym_AT_ATc_COLON] = ACTIONS(79),
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
    [anon_sym_PIPE_DOT] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_1_GT] = ACTIONS(79),
    [anon_sym_2_GT] = ACTIONS(79),
    [anon_sym_H_GT] = ACTIONS(79),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_1_GT_GT] = ACTIONS(79),
    [anon_sym_2_GT_GT] = ACTIONS(79),
    [sym__any_command] = ACTIONS(81),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
  },
  [13] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(85),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(85),
    [anon_sym_AT_ATdbtb] = ACTIONS(85),
    [anon_sym_AT_ATdbts] = ACTIONS(85),
    [anon_sym_AT_AT_DOT] = ACTIONS(85),
    [anon_sym_AT_AT_EQ] = ACTIONS(85),
    [anon_sym_AT_ATk] = ACTIONS(85),
    [anon_sym_AT_ATt] = ACTIONS(85),
    [anon_sym_AT_ATb] = ACTIONS(85),
    [anon_sym_AT_ATi] = ACTIONS(85),
    [anon_sym_AT_ATiS] = ACTIONS(85),
    [anon_sym_AT_ATf] = ACTIONS(85),
    [anon_sym_AT_ATs_COLON] = ACTIONS(85),
    [anon_sym_AT_ATc_COLON] = ACTIONS(85),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(85),
    [anon_sym_AT_LPAREN] = ACTIONS(85),
    [anon_sym_ATa_COLON] = ACTIONS(85),
    [anon_sym_ATb_COLON] = ACTIONS(85),
    [anon_sym_ATB_COLON] = ACTIONS(85),
    [anon_sym_ATe_COLON] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(75),
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
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(89),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
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
    [ts_builtin_sym_end] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_PIPEH] = ACTIONS(66),
    [anon_sym_AT_AT] = ACTIONS(66),
    [anon_sym_AT_ATdbt] = ACTIONS(66),
    [anon_sym_AT_ATdbta] = ACTIONS(66),
    [anon_sym_AT_ATdbtb] = ACTIONS(66),
    [anon_sym_AT_ATdbts] = ACTIONS(66),
    [anon_sym_AT_AT_DOT] = ACTIONS(66),
    [anon_sym_AT_AT_EQ] = ACTIONS(66),
    [anon_sym_AT_ATk] = ACTIONS(66),
    [anon_sym_AT_ATt] = ACTIONS(66),
    [anon_sym_AT_ATb] = ACTIONS(66),
    [anon_sym_AT_ATi] = ACTIONS(66),
    [anon_sym_AT_ATiS] = ACTIONS(66),
    [anon_sym_AT_ATf] = ACTIONS(66),
    [anon_sym_AT_ATs_COLON] = ACTIONS(66),
    [anon_sym_AT_ATc_COLON] = ACTIONS(66),
    [anon_sym_AT] = ACTIONS(66),
    [anon_sym_AT_BANG] = ACTIONS(66),
    [anon_sym_AT_LPAREN] = ACTIONS(66),
    [anon_sym_ATa_COLON] = ACTIONS(66),
    [anon_sym_ATb_COLON] = ACTIONS(66),
    [anon_sym_ATB_COLON] = ACTIONS(66),
    [anon_sym_ATe_COLON] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_ATF_COLON] = ACTIONS(66),
    [anon_sym_ATi_COLON] = ACTIONS(66),
    [anon_sym_ATk_COLON] = ACTIONS(66),
    [anon_sym_ATo_COLON] = ACTIONS(66),
    [anon_sym_ATr_COLON] = ACTIONS(66),
    [anon_sym_ATf_COLON] = ACTIONS(66),
    [anon_sym_ATs_COLON] = ACTIONS(66),
    [anon_sym_ATx_COLON] = ACTIONS(66),
    [anon_sym_PIPE_DOT] = ACTIONS(66),
    [anon_sym_GT] = ACTIONS(66),
    [anon_sym_1_GT] = ACTIONS(66),
    [anon_sym_2_GT] = ACTIONS(66),
    [anon_sym_H_GT] = ACTIONS(66),
    [anon_sym_GT_GT] = ACTIONS(66),
    [anon_sym_1_GT_GT] = ACTIONS(66),
    [anon_sym_2_GT_GT] = ACTIONS(66),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(66),
    [anon_sym_CR] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(66),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_PIPEH] = ACTIONS(93),
    [anon_sym_AT_AT] = ACTIONS(93),
    [anon_sym_AT_ATdbt] = ACTIONS(93),
    [anon_sym_AT_ATdbta] = ACTIONS(93),
    [anon_sym_AT_ATdbtb] = ACTIONS(93),
    [anon_sym_AT_ATdbts] = ACTIONS(93),
    [anon_sym_AT_AT_DOT] = ACTIONS(93),
    [anon_sym_AT_AT_EQ] = ACTIONS(93),
    [anon_sym_AT_ATk] = ACTIONS(93),
    [anon_sym_AT_ATt] = ACTIONS(93),
    [anon_sym_AT_ATb] = ACTIONS(93),
    [anon_sym_AT_ATi] = ACTIONS(93),
    [anon_sym_AT_ATiS] = ACTIONS(93),
    [anon_sym_AT_ATf] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_AT_ATs_COLON] = ACTIONS(93),
    [anon_sym_AT_ATc_COLON] = ACTIONS(93),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_AT_AT] = ACTIONS(99),
    [anon_sym_AT_ATdbt] = ACTIONS(99),
    [anon_sym_AT_ATdbta] = ACTIONS(99),
    [anon_sym_AT_ATdbtb] = ACTIONS(99),
    [anon_sym_AT_ATdbts] = ACTIONS(99),
    [anon_sym_AT_AT_DOT] = ACTIONS(99),
    [anon_sym_AT_AT_EQ] = ACTIONS(99),
    [anon_sym_AT_ATk] = ACTIONS(99),
    [anon_sym_AT_ATt] = ACTIONS(99),
    [anon_sym_AT_ATb] = ACTIONS(99),
    [anon_sym_AT_ATi] = ACTIONS(99),
    [anon_sym_AT_ATiS] = ACTIONS(99),
    [anon_sym_AT_ATf] = ACTIONS(99),
    [anon_sym_AT_ATs_COLON] = ACTIONS(99),
    [anon_sym_AT_ATc_COLON] = ACTIONS(99),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_PIPEH] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(105),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(105),
    [anon_sym_AT_ATdbts] = ACTIONS(105),
    [anon_sym_AT_AT_DOT] = ACTIONS(105),
    [anon_sym_AT_AT_EQ] = ACTIONS(105),
    [anon_sym_AT_ATk] = ACTIONS(105),
    [anon_sym_AT_ATt] = ACTIONS(105),
    [anon_sym_AT_ATb] = ACTIONS(105),
    [anon_sym_AT_ATi] = ACTIONS(105),
    [anon_sym_AT_ATiS] = ACTIONS(105),
    [anon_sym_AT_ATf] = ACTIONS(105),
    [anon_sym_AT_ATs_COLON] = ACTIONS(105),
    [anon_sym_AT_ATc_COLON] = ACTIONS(105),
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
    [anon_sym_EQ] = ACTIONS(107),
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
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPEH] = ACTIONS(111),
    [anon_sym_AT_AT] = ACTIONS(111),
    [anon_sym_AT_ATdbt] = ACTIONS(111),
    [anon_sym_AT_ATdbta] = ACTIONS(111),
    [anon_sym_AT_ATdbtb] = ACTIONS(111),
    [anon_sym_AT_ATdbts] = ACTIONS(111),
    [anon_sym_AT_AT_DOT] = ACTIONS(111),
    [anon_sym_AT_AT_EQ] = ACTIONS(111),
    [anon_sym_AT_ATk] = ACTIONS(111),
    [anon_sym_AT_ATt] = ACTIONS(111),
    [anon_sym_AT_ATb] = ACTIONS(111),
    [anon_sym_AT_ATi] = ACTIONS(111),
    [anon_sym_AT_ATiS] = ACTIONS(111),
    [anon_sym_AT_ATf] = ACTIONS(111),
    [anon_sym_AT_ATs_COLON] = ACTIONS(111),
    [anon_sym_AT_ATc_COLON] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_AT_BANG] = ACTIONS(111),
    [anon_sym_AT_LPAREN] = ACTIONS(111),
    [anon_sym_ATa_COLON] = ACTIONS(111),
    [anon_sym_ATb_COLON] = ACTIONS(111),
    [anon_sym_ATB_COLON] = ACTIONS(111),
    [anon_sym_ATe_COLON] = ACTIONS(111),
    [anon_sym_ATF_COLON] = ACTIONS(111),
    [anon_sym_ATi_COLON] = ACTIONS(111),
    [anon_sym_ATk_COLON] = ACTIONS(111),
    [anon_sym_ATo_COLON] = ACTIONS(111),
    [anon_sym_ATr_COLON] = ACTIONS(111),
    [anon_sym_ATf_COLON] = ACTIONS(111),
    [anon_sym_ATs_COLON] = ACTIONS(111),
    [anon_sym_ATx_COLON] = ACTIONS(111),
    [anon_sym_PIPE_DOT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_1_GT] = ACTIONS(111),
    [anon_sym_2_GT] = ACTIONS(111),
    [anon_sym_H_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_1_GT_GT] = ACTIONS(111),
    [anon_sym_2_GT_GT] = ACTIONS(111),
    [aux_sym_eq_sep_val_token1] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_CR] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPEH] = ACTIONS(115),
    [anon_sym_AT_AT] = ACTIONS(115),
    [anon_sym_AT_ATdbt] = ACTIONS(115),
    [anon_sym_AT_ATdbta] = ACTIONS(115),
    [anon_sym_AT_ATdbtb] = ACTIONS(115),
    [anon_sym_AT_ATdbts] = ACTIONS(115),
    [anon_sym_AT_AT_DOT] = ACTIONS(115),
    [anon_sym_AT_AT_EQ] = ACTIONS(115),
    [anon_sym_AT_ATk] = ACTIONS(115),
    [anon_sym_AT_ATt] = ACTIONS(115),
    [anon_sym_AT_ATb] = ACTIONS(115),
    [anon_sym_AT_ATi] = ACTIONS(115),
    [anon_sym_AT_ATiS] = ACTIONS(115),
    [anon_sym_AT_ATf] = ACTIONS(115),
    [anon_sym_AT_ATs_COLON] = ACTIONS(115),
    [anon_sym_AT_ATc_COLON] = ACTIONS(115),
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
    [aux_sym_eq_sep_val_token1] = ACTIONS(115),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_CR] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPEH] = ACTIONS(111),
    [anon_sym_AT_AT] = ACTIONS(111),
    [anon_sym_AT_ATdbt] = ACTIONS(111),
    [anon_sym_AT_ATdbta] = ACTIONS(111),
    [anon_sym_AT_ATdbtb] = ACTIONS(111),
    [anon_sym_AT_ATdbts] = ACTIONS(111),
    [anon_sym_AT_AT_DOT] = ACTIONS(111),
    [anon_sym_AT_AT_EQ] = ACTIONS(111),
    [anon_sym_AT_ATk] = ACTIONS(111),
    [anon_sym_AT_ATt] = ACTIONS(111),
    [anon_sym_AT_ATb] = ACTIONS(111),
    [anon_sym_AT_ATi] = ACTIONS(111),
    [anon_sym_AT_ATiS] = ACTIONS(111),
    [anon_sym_AT_ATf] = ACTIONS(111),
    [anon_sym_AT_ATs_COLON] = ACTIONS(111),
    [anon_sym_AT_ATc_COLON] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(111),
    [anon_sym_AT_BANG] = ACTIONS(111),
    [anon_sym_AT_LPAREN] = ACTIONS(111),
    [anon_sym_ATa_COLON] = ACTIONS(111),
    [anon_sym_ATb_COLON] = ACTIONS(111),
    [anon_sym_ATB_COLON] = ACTIONS(111),
    [anon_sym_ATe_COLON] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_ATF_COLON] = ACTIONS(111),
    [anon_sym_ATi_COLON] = ACTIONS(111),
    [anon_sym_ATk_COLON] = ACTIONS(111),
    [anon_sym_ATo_COLON] = ACTIONS(111),
    [anon_sym_ATr_COLON] = ACTIONS(111),
    [anon_sym_ATf_COLON] = ACTIONS(111),
    [anon_sym_ATs_COLON] = ACTIONS(111),
    [anon_sym_ATx_COLON] = ACTIONS(111),
    [anon_sym_PIPE_DOT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_1_GT] = ACTIONS(111),
    [anon_sym_2_GT] = ACTIONS(111),
    [anon_sym_H_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [anon_sym_1_GT_GT] = ACTIONS(111),
    [anon_sym_2_GT_GT] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_CR] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPEH] = ACTIONS(115),
    [anon_sym_AT_AT] = ACTIONS(115),
    [anon_sym_AT_ATdbt] = ACTIONS(115),
    [anon_sym_AT_ATdbta] = ACTIONS(115),
    [anon_sym_AT_ATdbtb] = ACTIONS(115),
    [anon_sym_AT_ATdbts] = ACTIONS(115),
    [anon_sym_AT_AT_DOT] = ACTIONS(115),
    [anon_sym_AT_AT_EQ] = ACTIONS(115),
    [anon_sym_AT_ATk] = ACTIONS(115),
    [anon_sym_AT_ATt] = ACTIONS(115),
    [anon_sym_AT_ATb] = ACTIONS(115),
    [anon_sym_AT_ATi] = ACTIONS(115),
    [anon_sym_AT_ATiS] = ACTIONS(115),
    [anon_sym_AT_ATf] = ACTIONS(115),
    [anon_sym_AT_ATs_COLON] = ACTIONS(115),
    [anon_sym_AT_ATc_COLON] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(115),
    [anon_sym_AT_BANG] = ACTIONS(115),
    [anon_sym_AT_LPAREN] = ACTIONS(115),
    [anon_sym_ATa_COLON] = ACTIONS(115),
    [anon_sym_ATb_COLON] = ACTIONS(115),
    [anon_sym_ATB_COLON] = ACTIONS(115),
    [anon_sym_ATe_COLON] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPEH] = ACTIONS(119),
    [anon_sym_AT_AT] = ACTIONS(119),
    [anon_sym_AT_ATdbt] = ACTIONS(119),
    [anon_sym_AT_ATdbta] = ACTIONS(119),
    [anon_sym_AT_ATdbtb] = ACTIONS(119),
    [anon_sym_AT_ATdbts] = ACTIONS(119),
    [anon_sym_AT_AT_DOT] = ACTIONS(119),
    [anon_sym_AT_AT_EQ] = ACTIONS(119),
    [anon_sym_AT_ATk] = ACTIONS(119),
    [anon_sym_AT_ATt] = ACTIONS(119),
    [anon_sym_AT_ATb] = ACTIONS(119),
    [anon_sym_AT_ATi] = ACTIONS(119),
    [anon_sym_AT_ATiS] = ACTIONS(119),
    [anon_sym_AT_ATf] = ACTIONS(119),
    [anon_sym_AT_ATs_COLON] = ACTIONS(119),
    [anon_sym_AT_ATc_COLON] = ACTIONS(119),
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
    [sym_eq_sep_key] = ACTIONS(121),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_CR] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_AT_AT] = ACTIONS(125),
    [anon_sym_AT_ATdbt] = ACTIONS(125),
    [anon_sym_AT_ATdbta] = ACTIONS(125),
    [anon_sym_AT_ATdbtb] = ACTIONS(125),
    [anon_sym_AT_ATdbts] = ACTIONS(125),
    [anon_sym_AT_AT_DOT] = ACTIONS(125),
    [anon_sym_AT_AT_EQ] = ACTIONS(125),
    [anon_sym_AT_ATk] = ACTIONS(125),
    [anon_sym_AT_ATt] = ACTIONS(125),
    [anon_sym_AT_ATb] = ACTIONS(125),
    [anon_sym_AT_ATi] = ACTIONS(125),
    [anon_sym_AT_ATiS] = ACTIONS(125),
    [anon_sym_AT_ATf] = ACTIONS(125),
    [anon_sym_AT_ATs_COLON] = ACTIONS(125),
    [anon_sym_AT_ATc_COLON] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_AT_BANG] = ACTIONS(125),
    [anon_sym_AT_LPAREN] = ACTIONS(125),
    [anon_sym_ATa_COLON] = ACTIONS(125),
    [anon_sym_ATb_COLON] = ACTIONS(125),
    [anon_sym_ATB_COLON] = ACTIONS(125),
    [anon_sym_ATe_COLON] = ACTIONS(125),
    [anon_sym_ATF_COLON] = ACTIONS(125),
    [anon_sym_ATi_COLON] = ACTIONS(125),
    [anon_sym_ATk_COLON] = ACTIONS(125),
    [anon_sym_ATo_COLON] = ACTIONS(125),
    [anon_sym_ATr_COLON] = ACTIONS(125),
    [anon_sym_ATf_COLON] = ACTIONS(125),
    [anon_sym_ATs_COLON] = ACTIONS(125),
    [anon_sym_ATx_COLON] = ACTIONS(125),
    [anon_sym_PIPE_DOT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_1_GT] = ACTIONS(125),
    [anon_sym_2_GT] = ACTIONS(125),
    [anon_sym_H_GT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(125),
    [anon_sym_1_GT_GT] = ACTIONS(125),
    [anon_sym_2_GT_GT] = ACTIONS(125),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_PIPEH] = ACTIONS(129),
    [anon_sym_AT_AT] = ACTIONS(129),
    [anon_sym_AT_ATdbt] = ACTIONS(129),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(129),
    [anon_sym_AT_AT_DOT] = ACTIONS(129),
    [anon_sym_AT_AT_EQ] = ACTIONS(129),
    [anon_sym_AT_ATk] = ACTIONS(129),
    [anon_sym_AT_ATt] = ACTIONS(129),
    [anon_sym_AT_ATb] = ACTIONS(129),
    [anon_sym_AT_ATi] = ACTIONS(129),
    [anon_sym_AT_ATiS] = ACTIONS(129),
    [anon_sym_AT_ATf] = ACTIONS(129),
    [anon_sym_AT_ATs_COLON] = ACTIONS(129),
    [anon_sym_AT_ATc_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
    [anon_sym_AT_BANG] = ACTIONS(129),
    [anon_sym_AT_LPAREN] = ACTIONS(129),
    [anon_sym_ATa_COLON] = ACTIONS(129),
    [anon_sym_ATb_COLON] = ACTIONS(129),
    [anon_sym_ATB_COLON] = ACTIONS(129),
    [anon_sym_ATe_COLON] = ACTIONS(129),
    [anon_sym_ATF_COLON] = ACTIONS(129),
    [anon_sym_ATi_COLON] = ACTIONS(129),
    [anon_sym_ATk_COLON] = ACTIONS(129),
    [anon_sym_ATo_COLON] = ACTIONS(129),
    [anon_sym_ATr_COLON] = ACTIONS(129),
    [anon_sym_ATf_COLON] = ACTIONS(129),
    [anon_sym_ATs_COLON] = ACTIONS(129),
    [anon_sym_ATx_COLON] = ACTIONS(129),
    [anon_sym_PIPE_DOT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_1_GT] = ACTIONS(129),
    [anon_sym_2_GT] = ACTIONS(129),
    [anon_sym_H_GT] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_1_GT_GT] = ACTIONS(129),
    [anon_sym_2_GT_GT] = ACTIONS(129),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_CR] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_PIPEH] = ACTIONS(133),
    [anon_sym_AT_AT] = ACTIONS(133),
    [anon_sym_AT_ATdbt] = ACTIONS(133),
    [anon_sym_AT_ATdbta] = ACTIONS(133),
    [anon_sym_AT_ATdbtb] = ACTIONS(133),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT_AT_DOT] = ACTIONS(133),
    [anon_sym_AT_AT_EQ] = ACTIONS(133),
    [anon_sym_AT_ATk] = ACTIONS(133),
    [anon_sym_AT_ATt] = ACTIONS(133),
    [anon_sym_AT_ATb] = ACTIONS(133),
    [anon_sym_AT_ATi] = ACTIONS(133),
    [anon_sym_AT_ATiS] = ACTIONS(133),
    [anon_sym_AT_ATf] = ACTIONS(133),
    [anon_sym_AT_ATs_COLON] = ACTIONS(133),
    [anon_sym_AT_ATc_COLON] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
    [anon_sym_AT_BANG] = ACTIONS(133),
    [anon_sym_AT_LPAREN] = ACTIONS(133),
    [anon_sym_ATa_COLON] = ACTIONS(133),
    [anon_sym_ATb_COLON] = ACTIONS(133),
    [anon_sym_ATB_COLON] = ACTIONS(133),
    [anon_sym_ATe_COLON] = ACTIONS(133),
    [anon_sym_ATF_COLON] = ACTIONS(133),
    [anon_sym_ATi_COLON] = ACTIONS(133),
    [anon_sym_ATk_COLON] = ACTIONS(133),
    [anon_sym_ATo_COLON] = ACTIONS(133),
    [anon_sym_ATr_COLON] = ACTIONS(133),
    [anon_sym_ATf_COLON] = ACTIONS(133),
    [anon_sym_ATs_COLON] = ACTIONS(133),
    [anon_sym_ATx_COLON] = ACTIONS(133),
    [anon_sym_PIPE_DOT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_1_GT] = ACTIONS(133),
    [anon_sym_2_GT] = ACTIONS(133),
    [anon_sym_H_GT] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(133),
    [anon_sym_1_GT_GT] = ACTIONS(133),
    [anon_sym_2_GT_GT] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_CR] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPEH] = ACTIONS(137),
    [anon_sym_AT_AT] = ACTIONS(137),
    [anon_sym_AT_ATdbt] = ACTIONS(137),
    [anon_sym_AT_ATdbta] = ACTIONS(137),
    [anon_sym_AT_ATdbtb] = ACTIONS(137),
    [anon_sym_AT_ATdbts] = ACTIONS(137),
    [anon_sym_AT_AT_DOT] = ACTIONS(137),
    [anon_sym_AT_AT_EQ] = ACTIONS(137),
    [anon_sym_AT_ATk] = ACTIONS(137),
    [anon_sym_AT_ATt] = ACTIONS(137),
    [anon_sym_AT_ATb] = ACTIONS(137),
    [anon_sym_AT_ATi] = ACTIONS(137),
    [anon_sym_AT_ATiS] = ACTIONS(137),
    [anon_sym_AT_ATf] = ACTIONS(137),
    [anon_sym_AT_ATs_COLON] = ACTIONS(137),
    [anon_sym_AT_ATc_COLON] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_AT_BANG] = ACTIONS(137),
    [anon_sym_AT_LPAREN] = ACTIONS(137),
    [anon_sym_ATa_COLON] = ACTIONS(137),
    [anon_sym_ATb_COLON] = ACTIONS(137),
    [anon_sym_ATB_COLON] = ACTIONS(137),
    [anon_sym_ATe_COLON] = ACTIONS(137),
    [anon_sym_ATF_COLON] = ACTIONS(137),
    [anon_sym_ATi_COLON] = ACTIONS(137),
    [anon_sym_ATk_COLON] = ACTIONS(137),
    [anon_sym_ATo_COLON] = ACTIONS(137),
    [anon_sym_ATr_COLON] = ACTIONS(137),
    [anon_sym_ATf_COLON] = ACTIONS(137),
    [anon_sym_ATs_COLON] = ACTIONS(137),
    [anon_sym_ATx_COLON] = ACTIONS(137),
    [anon_sym_PIPE_DOT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_1_GT] = ACTIONS(137),
    [anon_sym_2_GT] = ACTIONS(137),
    [anon_sym_H_GT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(137),
    [anon_sym_1_GT_GT] = ACTIONS(137),
    [anon_sym_2_GT_GT] = ACTIONS(137),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_PIPE] = ACTIONS(141),
    [anon_sym_PIPEH] = ACTIONS(141),
    [anon_sym_AT_AT] = ACTIONS(141),
    [anon_sym_AT_ATdbt] = ACTIONS(141),
    [anon_sym_AT_ATdbta] = ACTIONS(141),
    [anon_sym_AT_ATdbtb] = ACTIONS(141),
    [anon_sym_AT_ATdbts] = ACTIONS(141),
    [anon_sym_AT_AT_DOT] = ACTIONS(141),
    [anon_sym_AT_AT_EQ] = ACTIONS(141),
    [anon_sym_AT_ATk] = ACTIONS(141),
    [anon_sym_AT_ATt] = ACTIONS(141),
    [anon_sym_AT_ATb] = ACTIONS(141),
    [anon_sym_AT_ATi] = ACTIONS(141),
    [anon_sym_AT_ATiS] = ACTIONS(141),
    [anon_sym_AT_ATf] = ACTIONS(141),
    [anon_sym_AT_ATs_COLON] = ACTIONS(141),
    [anon_sym_AT_ATc_COLON] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_AT_BANG] = ACTIONS(141),
    [anon_sym_AT_LPAREN] = ACTIONS(141),
    [anon_sym_ATa_COLON] = ACTIONS(141),
    [anon_sym_ATb_COLON] = ACTIONS(141),
    [anon_sym_ATB_COLON] = ACTIONS(141),
    [anon_sym_ATe_COLON] = ACTIONS(141),
    [anon_sym_ATF_COLON] = ACTIONS(141),
    [anon_sym_ATi_COLON] = ACTIONS(141),
    [anon_sym_ATk_COLON] = ACTIONS(141),
    [anon_sym_ATo_COLON] = ACTIONS(141),
    [anon_sym_ATr_COLON] = ACTIONS(141),
    [anon_sym_ATf_COLON] = ACTIONS(141),
    [anon_sym_ATs_COLON] = ACTIONS(141),
    [anon_sym_ATx_COLON] = ACTIONS(141),
    [anon_sym_PIPE_DOT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_1_GT] = ACTIONS(141),
    [anon_sym_2_GT] = ACTIONS(141),
    [anon_sym_H_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_1_GT_GT] = ACTIONS(141),
    [anon_sym_2_GT_GT] = ACTIONS(141),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_CR] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_PIPE] = ACTIONS(145),
    [anon_sym_PIPEH] = ACTIONS(145),
    [anon_sym_AT_AT] = ACTIONS(145),
    [anon_sym_AT_ATdbt] = ACTIONS(145),
    [anon_sym_AT_ATdbta] = ACTIONS(145),
    [anon_sym_AT_ATdbtb] = ACTIONS(145),
    [anon_sym_AT_ATdbts] = ACTIONS(145),
    [anon_sym_AT_AT_DOT] = ACTIONS(145),
    [anon_sym_AT_AT_EQ] = ACTIONS(145),
    [anon_sym_AT_ATk] = ACTIONS(145),
    [anon_sym_AT_ATt] = ACTIONS(145),
    [anon_sym_AT_ATb] = ACTIONS(145),
    [anon_sym_AT_ATi] = ACTIONS(145),
    [anon_sym_AT_ATiS] = ACTIONS(145),
    [anon_sym_AT_ATf] = ACTIONS(145),
    [anon_sym_AT_ATs_COLON] = ACTIONS(145),
    [anon_sym_AT_ATc_COLON] = ACTIONS(145),
    [anon_sym_AT] = ACTIONS(145),
    [anon_sym_AT_BANG] = ACTIONS(145),
    [anon_sym_AT_LPAREN] = ACTIONS(145),
    [anon_sym_ATa_COLON] = ACTIONS(145),
    [anon_sym_ATb_COLON] = ACTIONS(145),
    [anon_sym_ATB_COLON] = ACTIONS(145),
    [anon_sym_ATe_COLON] = ACTIONS(145),
    [anon_sym_ATF_COLON] = ACTIONS(145),
    [anon_sym_ATi_COLON] = ACTIONS(145),
    [anon_sym_ATk_COLON] = ACTIONS(145),
    [anon_sym_ATo_COLON] = ACTIONS(145),
    [anon_sym_ATr_COLON] = ACTIONS(145),
    [anon_sym_ATf_COLON] = ACTIONS(145),
    [anon_sym_ATs_COLON] = ACTIONS(145),
    [anon_sym_ATx_COLON] = ACTIONS(145),
    [anon_sym_PIPE_DOT] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_1_GT] = ACTIONS(145),
    [anon_sym_2_GT] = ACTIONS(145),
    [anon_sym_H_GT] = ACTIONS(145),
    [anon_sym_GT_GT] = ACTIONS(145),
    [anon_sym_1_GT_GT] = ACTIONS(145),
    [anon_sym_2_GT_GT] = ACTIONS(145),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(145),
    [anon_sym_CR] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPEH] = ACTIONS(149),
    [anon_sym_AT_AT] = ACTIONS(149),
    [anon_sym_AT_ATdbt] = ACTIONS(149),
    [anon_sym_AT_ATdbta] = ACTIONS(149),
    [anon_sym_AT_ATdbtb] = ACTIONS(149),
    [anon_sym_AT_ATdbts] = ACTIONS(149),
    [anon_sym_AT_AT_DOT] = ACTIONS(149),
    [anon_sym_AT_AT_EQ] = ACTIONS(149),
    [anon_sym_AT_ATk] = ACTIONS(149),
    [anon_sym_AT_ATt] = ACTIONS(149),
    [anon_sym_AT_ATb] = ACTIONS(149),
    [anon_sym_AT_ATi] = ACTIONS(149),
    [anon_sym_AT_ATiS] = ACTIONS(149),
    [anon_sym_AT_ATf] = ACTIONS(149),
    [anon_sym_AT_ATs_COLON] = ACTIONS(149),
    [anon_sym_AT_ATc_COLON] = ACTIONS(149),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_AT_BANG] = ACTIONS(149),
    [anon_sym_AT_LPAREN] = ACTIONS(149),
    [anon_sym_ATa_COLON] = ACTIONS(149),
    [anon_sym_ATb_COLON] = ACTIONS(149),
    [anon_sym_ATB_COLON] = ACTIONS(149),
    [anon_sym_ATe_COLON] = ACTIONS(149),
    [anon_sym_ATF_COLON] = ACTIONS(149),
    [anon_sym_ATi_COLON] = ACTIONS(149),
    [anon_sym_ATk_COLON] = ACTIONS(149),
    [anon_sym_ATo_COLON] = ACTIONS(149),
    [anon_sym_ATr_COLON] = ACTIONS(149),
    [anon_sym_ATf_COLON] = ACTIONS(149),
    [anon_sym_ATs_COLON] = ACTIONS(149),
    [anon_sym_ATx_COLON] = ACTIONS(149),
    [anon_sym_PIPE_DOT] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_1_GT] = ACTIONS(149),
    [anon_sym_2_GT] = ACTIONS(149),
    [anon_sym_H_GT] = ACTIONS(149),
    [anon_sym_GT_GT] = ACTIONS(149),
    [anon_sym_1_GT_GT] = ACTIONS(149),
    [anon_sym_2_GT_GT] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(149),
    [anon_sym_CR] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPEH] = ACTIONS(153),
    [anon_sym_AT_AT] = ACTIONS(153),
    [anon_sym_AT_ATdbt] = ACTIONS(153),
    [anon_sym_AT_ATdbta] = ACTIONS(153),
    [anon_sym_AT_ATdbtb] = ACTIONS(153),
    [anon_sym_AT_ATdbts] = ACTIONS(153),
    [anon_sym_AT_AT_DOT] = ACTIONS(153),
    [anon_sym_AT_AT_EQ] = ACTIONS(153),
    [anon_sym_AT_ATk] = ACTIONS(153),
    [anon_sym_AT_ATt] = ACTIONS(153),
    [anon_sym_AT_ATb] = ACTIONS(153),
    [anon_sym_AT_ATi] = ACTIONS(153),
    [anon_sym_AT_ATiS] = ACTIONS(153),
    [anon_sym_AT_ATf] = ACTIONS(153),
    [anon_sym_AT_ATs_COLON] = ACTIONS(153),
    [anon_sym_AT_ATc_COLON] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_AT_BANG] = ACTIONS(153),
    [anon_sym_AT_LPAREN] = ACTIONS(153),
    [anon_sym_ATa_COLON] = ACTIONS(153),
    [anon_sym_ATb_COLON] = ACTIONS(153),
    [anon_sym_ATB_COLON] = ACTIONS(153),
    [anon_sym_ATe_COLON] = ACTIONS(153),
    [anon_sym_ATF_COLON] = ACTIONS(153),
    [anon_sym_ATi_COLON] = ACTIONS(153),
    [anon_sym_ATk_COLON] = ACTIONS(153),
    [anon_sym_ATo_COLON] = ACTIONS(153),
    [anon_sym_ATr_COLON] = ACTIONS(153),
    [anon_sym_ATf_COLON] = ACTIONS(153),
    [anon_sym_ATs_COLON] = ACTIONS(153),
    [anon_sym_ATx_COLON] = ACTIONS(153),
    [anon_sym_PIPE_DOT] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_1_GT] = ACTIONS(153),
    [anon_sym_2_GT] = ACTIONS(153),
    [anon_sym_H_GT] = ACTIONS(153),
    [anon_sym_GT_GT] = ACTIONS(153),
    [anon_sym_1_GT_GT] = ACTIONS(153),
    [anon_sym_2_GT_GT] = ACTIONS(153),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_CR] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPEH] = ACTIONS(157),
    [anon_sym_AT_AT] = ACTIONS(157),
    [anon_sym_AT_ATdbt] = ACTIONS(157),
    [anon_sym_AT_ATdbta] = ACTIONS(157),
    [anon_sym_AT_ATdbtb] = ACTIONS(157),
    [anon_sym_AT_ATdbts] = ACTIONS(157),
    [anon_sym_AT_AT_DOT] = ACTIONS(157),
    [anon_sym_AT_AT_EQ] = ACTIONS(157),
    [anon_sym_AT_ATk] = ACTIONS(157),
    [anon_sym_AT_ATt] = ACTIONS(157),
    [anon_sym_AT_ATb] = ACTIONS(157),
    [anon_sym_AT_ATi] = ACTIONS(157),
    [anon_sym_AT_ATiS] = ACTIONS(157),
    [anon_sym_AT_ATf] = ACTIONS(157),
    [anon_sym_AT_ATs_COLON] = ACTIONS(157),
    [anon_sym_AT_ATc_COLON] = ACTIONS(157),
    [anon_sym_AT] = ACTIONS(157),
    [anon_sym_AT_BANG] = ACTIONS(157),
    [anon_sym_AT_LPAREN] = ACTIONS(157),
    [anon_sym_ATa_COLON] = ACTIONS(157),
    [anon_sym_ATb_COLON] = ACTIONS(157),
    [anon_sym_ATB_COLON] = ACTIONS(157),
    [anon_sym_ATe_COLON] = ACTIONS(157),
    [anon_sym_ATF_COLON] = ACTIONS(157),
    [anon_sym_ATi_COLON] = ACTIONS(157),
    [anon_sym_ATk_COLON] = ACTIONS(157),
    [anon_sym_ATo_COLON] = ACTIONS(157),
    [anon_sym_ATr_COLON] = ACTIONS(157),
    [anon_sym_ATf_COLON] = ACTIONS(157),
    [anon_sym_ATs_COLON] = ACTIONS(157),
    [anon_sym_ATx_COLON] = ACTIONS(157),
    [anon_sym_PIPE_DOT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_1_GT] = ACTIONS(157),
    [anon_sym_2_GT] = ACTIONS(157),
    [anon_sym_H_GT] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(157),
    [anon_sym_1_GT_GT] = ACTIONS(157),
    [anon_sym_2_GT_GT] = ACTIONS(157),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(157),
    [anon_sym_CR] = ACTIONS(157),
    [anon_sym_SEMI] = ACTIONS(157),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPEH] = ACTIONS(161),
    [anon_sym_AT_AT] = ACTIONS(161),
    [anon_sym_AT_ATdbt] = ACTIONS(161),
    [anon_sym_AT_ATdbta] = ACTIONS(161),
    [anon_sym_AT_ATdbtb] = ACTIONS(161),
    [anon_sym_AT_ATdbts] = ACTIONS(161),
    [anon_sym_AT_AT_DOT] = ACTIONS(161),
    [anon_sym_AT_AT_EQ] = ACTIONS(161),
    [anon_sym_AT_ATk] = ACTIONS(161),
    [anon_sym_AT_ATt] = ACTIONS(161),
    [anon_sym_AT_ATb] = ACTIONS(161),
    [anon_sym_AT_ATi] = ACTIONS(161),
    [anon_sym_AT_ATiS] = ACTIONS(161),
    [anon_sym_AT_ATf] = ACTIONS(161),
    [anon_sym_AT_ATs_COLON] = ACTIONS(161),
    [anon_sym_AT_ATc_COLON] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym_AT_BANG] = ACTIONS(161),
    [anon_sym_AT_LPAREN] = ACTIONS(161),
    [anon_sym_ATa_COLON] = ACTIONS(161),
    [anon_sym_ATb_COLON] = ACTIONS(161),
    [anon_sym_ATB_COLON] = ACTIONS(161),
    [anon_sym_ATe_COLON] = ACTIONS(161),
    [anon_sym_ATF_COLON] = ACTIONS(161),
    [anon_sym_ATi_COLON] = ACTIONS(161),
    [anon_sym_ATk_COLON] = ACTIONS(161),
    [anon_sym_ATo_COLON] = ACTIONS(161),
    [anon_sym_ATr_COLON] = ACTIONS(161),
    [anon_sym_ATf_COLON] = ACTIONS(161),
    [anon_sym_ATs_COLON] = ACTIONS(161),
    [anon_sym_ATx_COLON] = ACTIONS(161),
    [anon_sym_PIPE_DOT] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_1_GT] = ACTIONS(161),
    [anon_sym_2_GT] = ACTIONS(161),
    [anon_sym_H_GT] = ACTIONS(161),
    [anon_sym_GT_GT] = ACTIONS(161),
    [anon_sym_1_GT_GT] = ACTIONS(161),
    [anon_sym_2_GT_GT] = ACTIONS(161),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(161),
    [anon_sym_CR] = ACTIONS(161),
    [anon_sym_SEMI] = ACTIONS(161),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_PIPEH] = ACTIONS(167),
    [anon_sym_AT_AT] = ACTIONS(169),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(171),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(175),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(179),
    [anon_sym_AT_ATk] = ACTIONS(181),
    [anon_sym_AT_ATt] = ACTIONS(183),
    [anon_sym_AT_ATb] = ACTIONS(185),
    [anon_sym_AT_ATi] = ACTIONS(187),
    [anon_sym_AT_ATiS] = ACTIONS(189),
    [anon_sym_AT_ATf] = ACTIONS(191),
    [anon_sym_AT_ATs_COLON] = ACTIONS(193),
    [anon_sym_AT_ATc_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_AT_BANG] = ACTIONS(199),
    [anon_sym_AT_LPAREN] = ACTIONS(201),
    [anon_sym_ATa_COLON] = ACTIONS(203),
    [anon_sym_ATb_COLON] = ACTIONS(205),
    [anon_sym_ATB_COLON] = ACTIONS(207),
    [anon_sym_ATe_COLON] = ACTIONS(209),
    [anon_sym_ATF_COLON] = ACTIONS(211),
    [anon_sym_ATi_COLON] = ACTIONS(213),
    [anon_sym_ATk_COLON] = ACTIONS(215),
    [anon_sym_ATo_COLON] = ACTIONS(217),
    [anon_sym_ATr_COLON] = ACTIONS(219),
    [anon_sym_ATf_COLON] = ACTIONS(221),
    [anon_sym_ATs_COLON] = ACTIONS(223),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_PIPE_DOT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_1_GT] = ACTIONS(165),
    [anon_sym_2_GT] = ACTIONS(165),
    [anon_sym_H_GT] = ACTIONS(165),
    [anon_sym_GT_GT] = ACTIONS(165),
    [anon_sym_1_GT_GT] = ACTIONS(165),
    [anon_sym_2_GT_GT] = ACTIONS(165),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(165),
    [anon_sym_CR] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPEH] = ACTIONS(231),
    [anon_sym_AT_AT] = ACTIONS(231),
    [anon_sym_AT_ATdbt] = ACTIONS(231),
    [anon_sym_AT_ATdbta] = ACTIONS(231),
    [anon_sym_AT_ATdbtb] = ACTIONS(231),
    [anon_sym_AT_ATdbts] = ACTIONS(231),
    [anon_sym_AT_AT_DOT] = ACTIONS(231),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(231),
    [anon_sym_AT_ATt] = ACTIONS(231),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(231),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(231),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_CR] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPEH] = ACTIONS(235),
    [anon_sym_AT_AT] = ACTIONS(235),
    [anon_sym_AT_ATdbt] = ACTIONS(235),
    [anon_sym_AT_ATdbta] = ACTIONS(235),
    [anon_sym_AT_ATdbtb] = ACTIONS(235),
    [anon_sym_AT_ATdbts] = ACTIONS(235),
    [anon_sym_AT_AT_DOT] = ACTIONS(235),
    [anon_sym_AT_AT_EQ] = ACTIONS(235),
    [anon_sym_AT_ATk] = ACTIONS(235),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(235),
    [anon_sym_AT_ATi] = ACTIONS(235),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(235),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_CR] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PIPEH] = ACTIONS(239),
    [anon_sym_AT_AT] = ACTIONS(239),
    [anon_sym_AT_ATdbt] = ACTIONS(239),
    [anon_sym_AT_ATdbta] = ACTIONS(239),
    [anon_sym_AT_ATdbtb] = ACTIONS(239),
    [anon_sym_AT_ATdbts] = ACTIONS(239),
    [anon_sym_AT_AT_DOT] = ACTIONS(239),
    [anon_sym_AT_AT_EQ] = ACTIONS(239),
    [anon_sym_AT_ATk] = ACTIONS(239),
    [anon_sym_AT_ATt] = ACTIONS(239),
    [anon_sym_AT_ATb] = ACTIONS(239),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(239),
    [anon_sym_AT_ATf] = ACTIONS(239),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(239),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_CR] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PIPEH] = ACTIONS(243),
    [anon_sym_AT_AT] = ACTIONS(243),
    [anon_sym_AT_ATdbt] = ACTIONS(243),
    [anon_sym_AT_ATdbta] = ACTIONS(243),
    [anon_sym_AT_ATdbtb] = ACTIONS(243),
    [anon_sym_AT_ATdbts] = ACTIONS(243),
    [anon_sym_AT_AT_DOT] = ACTIONS(243),
    [anon_sym_AT_AT_EQ] = ACTIONS(243),
    [anon_sym_AT_ATk] = ACTIONS(243),
    [anon_sym_AT_ATt] = ACTIONS(243),
    [anon_sym_AT_ATb] = ACTIONS(243),
    [anon_sym_AT_ATi] = ACTIONS(243),
    [anon_sym_AT_ATiS] = ACTIONS(243),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(243),
    [anon_sym_AT_ATc_COLON] = ACTIONS(243),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(243),
    [anon_sym_CR] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(243),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPEH] = ACTIONS(247),
    [anon_sym_AT_AT] = ACTIONS(247),
    [anon_sym_AT_ATdbt] = ACTIONS(247),
    [anon_sym_AT_ATdbta] = ACTIONS(247),
    [anon_sym_AT_ATdbtb] = ACTIONS(247),
    [anon_sym_AT_ATdbts] = ACTIONS(247),
    [anon_sym_AT_AT_DOT] = ACTIONS(247),
    [anon_sym_AT_AT_EQ] = ACTIONS(247),
    [anon_sym_AT_ATk] = ACTIONS(247),
    [anon_sym_AT_ATt] = ACTIONS(247),
    [anon_sym_AT_ATb] = ACTIONS(247),
    [anon_sym_AT_ATi] = ACTIONS(247),
    [anon_sym_AT_ATiS] = ACTIONS(247),
    [anon_sym_AT_ATf] = ACTIONS(247),
    [anon_sym_AT_ATs_COLON] = ACTIONS(247),
    [anon_sym_AT_ATc_COLON] = ACTIONS(247),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_CR] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPEH] = ACTIONS(251),
    [anon_sym_AT_AT] = ACTIONS(251),
    [anon_sym_AT_ATdbt] = ACTIONS(251),
    [anon_sym_AT_ATdbta] = ACTIONS(251),
    [anon_sym_AT_ATdbtb] = ACTIONS(251),
    [anon_sym_AT_ATdbts] = ACTIONS(251),
    [anon_sym_AT_AT_DOT] = ACTIONS(251),
    [anon_sym_AT_AT_EQ] = ACTIONS(251),
    [anon_sym_AT_ATk] = ACTIONS(251),
    [anon_sym_AT_ATt] = ACTIONS(251),
    [anon_sym_AT_ATb] = ACTIONS(251),
    [anon_sym_AT_ATi] = ACTIONS(251),
    [anon_sym_AT_ATiS] = ACTIONS(251),
    [anon_sym_AT_ATf] = ACTIONS(251),
    [anon_sym_AT_ATs_COLON] = ACTIONS(251),
    [anon_sym_AT_ATc_COLON] = ACTIONS(251),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_CR] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PIPEH] = ACTIONS(255),
    [anon_sym_AT_AT] = ACTIONS(255),
    [anon_sym_AT_ATdbt] = ACTIONS(255),
    [anon_sym_AT_ATdbta] = ACTIONS(255),
    [anon_sym_AT_ATdbtb] = ACTIONS(255),
    [anon_sym_AT_ATdbts] = ACTIONS(255),
    [anon_sym_AT_AT_DOT] = ACTIONS(255),
    [anon_sym_AT_AT_EQ] = ACTIONS(255),
    [anon_sym_AT_ATk] = ACTIONS(255),
    [anon_sym_AT_ATt] = ACTIONS(255),
    [anon_sym_AT_ATb] = ACTIONS(255),
    [anon_sym_AT_ATi] = ACTIONS(255),
    [anon_sym_AT_ATiS] = ACTIONS(255),
    [anon_sym_AT_ATf] = ACTIONS(255),
    [anon_sym_AT_ATs_COLON] = ACTIONS(255),
    [anon_sym_AT_ATc_COLON] = ACTIONS(255),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_CR] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPEH] = ACTIONS(259),
    [anon_sym_AT_AT] = ACTIONS(259),
    [anon_sym_AT_ATdbt] = ACTIONS(259),
    [anon_sym_AT_ATdbta] = ACTIONS(259),
    [anon_sym_AT_ATdbtb] = ACTIONS(259),
    [anon_sym_AT_ATdbts] = ACTIONS(259),
    [anon_sym_AT_AT_DOT] = ACTIONS(259),
    [anon_sym_AT_AT_EQ] = ACTIONS(259),
    [anon_sym_AT_ATk] = ACTIONS(259),
    [anon_sym_AT_ATt] = ACTIONS(259),
    [anon_sym_AT_ATb] = ACTIONS(259),
    [anon_sym_AT_ATi] = ACTIONS(259),
    [anon_sym_AT_ATiS] = ACTIONS(259),
    [anon_sym_AT_ATf] = ACTIONS(259),
    [anon_sym_AT_ATs_COLON] = ACTIONS(259),
    [anon_sym_AT_ATc_COLON] = ACTIONS(259),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(259),
    [anon_sym_CR] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(259),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_AT_AT] = ACTIONS(263),
    [anon_sym_AT_ATdbt] = ACTIONS(263),
    [anon_sym_AT_ATdbta] = ACTIONS(263),
    [anon_sym_AT_ATdbtb] = ACTIONS(263),
    [anon_sym_AT_ATdbts] = ACTIONS(263),
    [anon_sym_AT_AT_DOT] = ACTIONS(263),
    [anon_sym_AT_AT_EQ] = ACTIONS(263),
    [anon_sym_AT_ATk] = ACTIONS(263),
    [anon_sym_AT_ATt] = ACTIONS(263),
    [anon_sym_AT_ATb] = ACTIONS(263),
    [anon_sym_AT_ATi] = ACTIONS(263),
    [anon_sym_AT_ATiS] = ACTIONS(263),
    [anon_sym_AT_ATf] = ACTIONS(263),
    [anon_sym_AT_ATs_COLON] = ACTIONS(263),
    [anon_sym_AT_ATc_COLON] = ACTIONS(263),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(263),
    [anon_sym_CR] = ACTIONS(263),
    [anon_sym_SEMI] = ACTIONS(263),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_PIPEH] = ACTIONS(267),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(267),
    [anon_sym_AT_ATdbta] = ACTIONS(267),
    [anon_sym_AT_ATdbtb] = ACTIONS(267),
    [anon_sym_AT_ATdbts] = ACTIONS(267),
    [anon_sym_AT_AT_DOT] = ACTIONS(267),
    [anon_sym_AT_AT_EQ] = ACTIONS(267),
    [anon_sym_AT_ATk] = ACTIONS(267),
    [anon_sym_AT_ATt] = ACTIONS(267),
    [anon_sym_AT_ATb] = ACTIONS(267),
    [anon_sym_AT_ATi] = ACTIONS(267),
    [anon_sym_AT_ATiS] = ACTIONS(267),
    [anon_sym_AT_ATf] = ACTIONS(267),
    [anon_sym_AT_ATs_COLON] = ACTIONS(267),
    [anon_sym_AT_ATc_COLON] = ACTIONS(267),
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(267),
    [anon_sym_CR] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(267),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPEH] = ACTIONS(167),
    [anon_sym_AT_AT] = ACTIONS(169),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(171),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(175),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(179),
    [anon_sym_AT_ATk] = ACTIONS(181),
    [anon_sym_AT_ATt] = ACTIONS(183),
    [anon_sym_AT_ATb] = ACTIONS(185),
    [anon_sym_AT_ATi] = ACTIONS(187),
    [anon_sym_AT_ATiS] = ACTIONS(189),
    [anon_sym_AT_ATf] = ACTIONS(191),
    [anon_sym_AT_ATs_COLON] = ACTIONS(193),
    [anon_sym_AT_ATc_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_AT_BANG] = ACTIONS(199),
    [anon_sym_AT_LPAREN] = ACTIONS(201),
    [anon_sym_ATa_COLON] = ACTIONS(203),
    [anon_sym_ATb_COLON] = ACTIONS(205),
    [anon_sym_ATB_COLON] = ACTIONS(207),
    [anon_sym_ATe_COLON] = ACTIONS(209),
    [anon_sym_ATF_COLON] = ACTIONS(211),
    [anon_sym_ATi_COLON] = ACTIONS(213),
    [anon_sym_ATk_COLON] = ACTIONS(215),
    [anon_sym_ATo_COLON] = ACTIONS(217),
    [anon_sym_ATr_COLON] = ACTIONS(219),
    [anon_sym_ATf_COLON] = ACTIONS(221),
    [anon_sym_ATs_COLON] = ACTIONS(223),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_PIPE_DOT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_1_GT] = ACTIONS(273),
    [anon_sym_2_GT] = ACTIONS(275),
    [anon_sym_H_GT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_1_GT_GT] = ACTIONS(279),
    [anon_sym_2_GT_GT] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_PIPEH] = ACTIONS(287),
    [anon_sym_AT_AT] = ACTIONS(287),
    [anon_sym_AT_ATdbt] = ACTIONS(287),
    [anon_sym_AT_ATdbta] = ACTIONS(287),
    [anon_sym_AT_ATdbtb] = ACTIONS(287),
    [anon_sym_AT_ATdbts] = ACTIONS(287),
    [anon_sym_AT_AT_DOT] = ACTIONS(287),
    [anon_sym_AT_AT_EQ] = ACTIONS(287),
    [anon_sym_AT_ATk] = ACTIONS(287),
    [anon_sym_AT_ATt] = ACTIONS(287),
    [anon_sym_AT_ATb] = ACTIONS(287),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(287),
    [anon_sym_AT_ATf] = ACTIONS(287),
    [anon_sym_AT_ATs_COLON] = ACTIONS(287),
    [anon_sym_AT_ATc_COLON] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym_AT_BANG] = ACTIONS(287),
    [anon_sym_AT_LPAREN] = ACTIONS(287),
    [anon_sym_ATa_COLON] = ACTIONS(287),
    [anon_sym_ATb_COLON] = ACTIONS(287),
    [anon_sym_ATB_COLON] = ACTIONS(287),
    [anon_sym_ATe_COLON] = ACTIONS(287),
    [anon_sym_ATF_COLON] = ACTIONS(287),
    [anon_sym_ATi_COLON] = ACTIONS(287),
    [anon_sym_ATk_COLON] = ACTIONS(287),
    [anon_sym_ATo_COLON] = ACTIONS(287),
    [anon_sym_ATr_COLON] = ACTIONS(287),
    [anon_sym_ATf_COLON] = ACTIONS(287),
    [anon_sym_ATs_COLON] = ACTIONS(287),
    [anon_sym_ATx_COLON] = ACTIONS(287),
    [anon_sym_PIPE_DOT] = ACTIONS(287),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_1_GT] = ACTIONS(287),
    [anon_sym_2_GT] = ACTIONS(287),
    [anon_sym_H_GT] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(287),
    [anon_sym_1_GT_GT] = ACTIONS(287),
    [anon_sym_2_GT_GT] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(287),
    [anon_sym_CR] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPEH] = ACTIONS(291),
    [anon_sym_AT_AT] = ACTIONS(291),
    [anon_sym_AT_ATdbt] = ACTIONS(291),
    [anon_sym_AT_ATdbta] = ACTIONS(291),
    [anon_sym_AT_ATdbtb] = ACTIONS(291),
    [anon_sym_AT_ATdbts] = ACTIONS(291),
    [anon_sym_AT_AT_DOT] = ACTIONS(291),
    [anon_sym_AT_AT_EQ] = ACTIONS(291),
    [anon_sym_AT_ATk] = ACTIONS(291),
    [anon_sym_AT_ATt] = ACTIONS(291),
    [anon_sym_AT_ATb] = ACTIONS(291),
    [anon_sym_AT_ATi] = ACTIONS(291),
    [anon_sym_AT_ATiS] = ACTIONS(291),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(291),
    [anon_sym_AT_ATc_COLON] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym_AT_BANG] = ACTIONS(291),
    [anon_sym_AT_LPAREN] = ACTIONS(291),
    [anon_sym_ATa_COLON] = ACTIONS(291),
    [anon_sym_ATb_COLON] = ACTIONS(291),
    [anon_sym_ATB_COLON] = ACTIONS(291),
    [anon_sym_ATe_COLON] = ACTIONS(291),
    [anon_sym_ATF_COLON] = ACTIONS(291),
    [anon_sym_ATi_COLON] = ACTIONS(291),
    [anon_sym_ATk_COLON] = ACTIONS(291),
    [anon_sym_ATo_COLON] = ACTIONS(291),
    [anon_sym_ATr_COLON] = ACTIONS(291),
    [anon_sym_ATf_COLON] = ACTIONS(291),
    [anon_sym_ATs_COLON] = ACTIONS(291),
    [anon_sym_ATx_COLON] = ACTIONS(291),
    [anon_sym_PIPE_DOT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_1_GT] = ACTIONS(291),
    [anon_sym_2_GT] = ACTIONS(291),
    [anon_sym_H_GT] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_1_GT_GT] = ACTIONS(291),
    [anon_sym_2_GT_GT] = ACTIONS(291),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPEH] = ACTIONS(167),
    [anon_sym_AT_AT] = ACTIONS(169),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(171),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(175),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(179),
    [anon_sym_AT_ATk] = ACTIONS(181),
    [anon_sym_AT_ATt] = ACTIONS(183),
    [anon_sym_AT_ATb] = ACTIONS(185),
    [anon_sym_AT_ATi] = ACTIONS(187),
    [anon_sym_AT_ATiS] = ACTIONS(189),
    [anon_sym_AT_ATf] = ACTIONS(191),
    [anon_sym_AT_ATs_COLON] = ACTIONS(193),
    [anon_sym_AT_ATc_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_AT_BANG] = ACTIONS(199),
    [anon_sym_AT_LPAREN] = ACTIONS(201),
    [anon_sym_ATa_COLON] = ACTIONS(203),
    [anon_sym_ATb_COLON] = ACTIONS(205),
    [anon_sym_ATB_COLON] = ACTIONS(207),
    [anon_sym_ATe_COLON] = ACTIONS(209),
    [anon_sym_ATF_COLON] = ACTIONS(211),
    [anon_sym_ATi_COLON] = ACTIONS(213),
    [anon_sym_ATk_COLON] = ACTIONS(215),
    [anon_sym_ATo_COLON] = ACTIONS(217),
    [anon_sym_ATr_COLON] = ACTIONS(219),
    [anon_sym_ATf_COLON] = ACTIONS(221),
    [anon_sym_ATs_COLON] = ACTIONS(223),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_PIPE_DOT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_1_GT] = ACTIONS(295),
    [anon_sym_2_GT] = ACTIONS(295),
    [anon_sym_H_GT] = ACTIONS(295),
    [anon_sym_GT_GT] = ACTIONS(295),
    [anon_sym_1_GT_GT] = ACTIONS(295),
    [anon_sym_2_GT_GT] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(295),
    [anon_sym_CR] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPEH] = ACTIONS(299),
    [anon_sym_AT_AT] = ACTIONS(299),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(299),
    [anon_sym_AT_ATdbtb] = ACTIONS(299),
    [anon_sym_AT_ATdbts] = ACTIONS(299),
    [anon_sym_AT_AT_DOT] = ACTIONS(299),
    [anon_sym_AT_AT_EQ] = ACTIONS(299),
    [anon_sym_AT_ATk] = ACTIONS(299),
    [anon_sym_AT_ATt] = ACTIONS(299),
    [anon_sym_AT_ATb] = ACTIONS(299),
    [anon_sym_AT_ATi] = ACTIONS(299),
    [anon_sym_AT_ATiS] = ACTIONS(299),
    [anon_sym_AT_ATf] = ACTIONS(299),
    [anon_sym_AT_ATs_COLON] = ACTIONS(299),
    [anon_sym_AT_ATc_COLON] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(299),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(299),
    [anon_sym_ATa_COLON] = ACTIONS(299),
    [anon_sym_ATb_COLON] = ACTIONS(299),
    [anon_sym_ATB_COLON] = ACTIONS(299),
    [anon_sym_ATe_COLON] = ACTIONS(299),
    [anon_sym_ATF_COLON] = ACTIONS(299),
    [anon_sym_ATi_COLON] = ACTIONS(299),
    [anon_sym_ATk_COLON] = ACTIONS(299),
    [anon_sym_ATo_COLON] = ACTIONS(299),
    [anon_sym_ATr_COLON] = ACTIONS(299),
    [anon_sym_ATf_COLON] = ACTIONS(299),
    [anon_sym_ATs_COLON] = ACTIONS(299),
    [anon_sym_ATx_COLON] = ACTIONS(299),
    [anon_sym_PIPE_DOT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_1_GT] = ACTIONS(299),
    [anon_sym_2_GT] = ACTIONS(299),
    [anon_sym_H_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_1_GT_GT] = ACTIONS(299),
    [anon_sym_2_GT_GT] = ACTIONS(299),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_CR] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_PIPEH] = ACTIONS(303),
    [anon_sym_AT_AT] = ACTIONS(303),
    [anon_sym_AT_ATdbt] = ACTIONS(303),
    [anon_sym_AT_ATdbta] = ACTIONS(303),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(303),
    [anon_sym_AT_AT_DOT] = ACTIONS(303),
    [anon_sym_AT_AT_EQ] = ACTIONS(303),
    [anon_sym_AT_ATk] = ACTIONS(303),
    [anon_sym_AT_ATt] = ACTIONS(303),
    [anon_sym_AT_ATb] = ACTIONS(303),
    [anon_sym_AT_ATi] = ACTIONS(303),
    [anon_sym_AT_ATiS] = ACTIONS(303),
    [anon_sym_AT_ATf] = ACTIONS(303),
    [anon_sym_AT_ATs_COLON] = ACTIONS(303),
    [anon_sym_AT_ATc_COLON] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_AT_BANG] = ACTIONS(303),
    [anon_sym_AT_LPAREN] = ACTIONS(303),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(303),
    [anon_sym_ATB_COLON] = ACTIONS(303),
    [anon_sym_ATe_COLON] = ACTIONS(303),
    [anon_sym_ATF_COLON] = ACTIONS(303),
    [anon_sym_ATi_COLON] = ACTIONS(303),
    [anon_sym_ATk_COLON] = ACTIONS(303),
    [anon_sym_ATo_COLON] = ACTIONS(303),
    [anon_sym_ATr_COLON] = ACTIONS(303),
    [anon_sym_ATf_COLON] = ACTIONS(303),
    [anon_sym_ATs_COLON] = ACTIONS(303),
    [anon_sym_ATx_COLON] = ACTIONS(303),
    [anon_sym_PIPE_DOT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_1_GT] = ACTIONS(303),
    [anon_sym_2_GT] = ACTIONS(303),
    [anon_sym_H_GT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_1_GT_GT] = ACTIONS(303),
    [anon_sym_2_GT_GT] = ACTIONS(303),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(303),
    [anon_sym_CR] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PIPEH] = ACTIONS(307),
    [anon_sym_AT_AT] = ACTIONS(307),
    [anon_sym_AT_ATdbt] = ACTIONS(307),
    [anon_sym_AT_ATdbta] = ACTIONS(307),
    [anon_sym_AT_ATdbtb] = ACTIONS(307),
    [anon_sym_AT_ATdbts] = ACTIONS(307),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(307),
    [anon_sym_AT_ATk] = ACTIONS(307),
    [anon_sym_AT_ATt] = ACTIONS(307),
    [anon_sym_AT_ATb] = ACTIONS(307),
    [anon_sym_AT_ATi] = ACTIONS(307),
    [anon_sym_AT_ATiS] = ACTIONS(307),
    [anon_sym_AT_ATf] = ACTIONS(307),
    [anon_sym_AT_ATs_COLON] = ACTIONS(307),
    [anon_sym_AT_ATc_COLON] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_AT_BANG] = ACTIONS(307),
    [anon_sym_AT_LPAREN] = ACTIONS(307),
    [anon_sym_ATa_COLON] = ACTIONS(307),
    [anon_sym_ATb_COLON] = ACTIONS(307),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(307),
    [anon_sym_ATF_COLON] = ACTIONS(307),
    [anon_sym_ATi_COLON] = ACTIONS(307),
    [anon_sym_ATk_COLON] = ACTIONS(307),
    [anon_sym_ATo_COLON] = ACTIONS(307),
    [anon_sym_ATr_COLON] = ACTIONS(307),
    [anon_sym_ATf_COLON] = ACTIONS(307),
    [anon_sym_ATs_COLON] = ACTIONS(307),
    [anon_sym_ATx_COLON] = ACTIONS(307),
    [anon_sym_PIPE_DOT] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_1_GT] = ACTIONS(307),
    [anon_sym_2_GT] = ACTIONS(307),
    [anon_sym_H_GT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_1_GT_GT] = ACTIONS(307),
    [anon_sym_2_GT_GT] = ACTIONS(307),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_CR] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPEH] = ACTIONS(311),
    [anon_sym_AT_AT] = ACTIONS(311),
    [anon_sym_AT_ATdbt] = ACTIONS(311),
    [anon_sym_AT_ATdbta] = ACTIONS(311),
    [anon_sym_AT_ATdbtb] = ACTIONS(311),
    [anon_sym_AT_ATdbts] = ACTIONS(311),
    [anon_sym_AT_AT_DOT] = ACTIONS(311),
    [anon_sym_AT_AT_EQ] = ACTIONS(311),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(311),
    [anon_sym_AT_ATb] = ACTIONS(311),
    [anon_sym_AT_ATi] = ACTIONS(311),
    [anon_sym_AT_ATiS] = ACTIONS(311),
    [anon_sym_AT_ATf] = ACTIONS(311),
    [anon_sym_AT_ATs_COLON] = ACTIONS(311),
    [anon_sym_AT_ATc_COLON] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_AT_BANG] = ACTIONS(311),
    [anon_sym_AT_LPAREN] = ACTIONS(311),
    [anon_sym_ATa_COLON] = ACTIONS(311),
    [anon_sym_ATb_COLON] = ACTIONS(311),
    [anon_sym_ATB_COLON] = ACTIONS(311),
    [anon_sym_ATe_COLON] = ACTIONS(311),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(311),
    [anon_sym_ATk_COLON] = ACTIONS(311),
    [anon_sym_ATo_COLON] = ACTIONS(311),
    [anon_sym_ATr_COLON] = ACTIONS(311),
    [anon_sym_ATf_COLON] = ACTIONS(311),
    [anon_sym_ATs_COLON] = ACTIONS(311),
    [anon_sym_ATx_COLON] = ACTIONS(311),
    [anon_sym_PIPE_DOT] = ACTIONS(311),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_1_GT] = ACTIONS(311),
    [anon_sym_2_GT] = ACTIONS(311),
    [anon_sym_H_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_1_GT_GT] = ACTIONS(311),
    [anon_sym_2_GT_GT] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_CR] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_PIPEH] = ACTIONS(315),
    [anon_sym_AT_AT] = ACTIONS(315),
    [anon_sym_AT_ATdbt] = ACTIONS(315),
    [anon_sym_AT_ATdbta] = ACTIONS(315),
    [anon_sym_AT_ATdbtb] = ACTIONS(315),
    [anon_sym_AT_ATdbts] = ACTIONS(315),
    [anon_sym_AT_AT_DOT] = ACTIONS(315),
    [anon_sym_AT_AT_EQ] = ACTIONS(315),
    [anon_sym_AT_ATk] = ACTIONS(315),
    [anon_sym_AT_ATt] = ACTIONS(315),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(315),
    [anon_sym_AT_ATiS] = ACTIONS(315),
    [anon_sym_AT_ATf] = ACTIONS(315),
    [anon_sym_AT_ATs_COLON] = ACTIONS(315),
    [anon_sym_AT_ATc_COLON] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_AT_BANG] = ACTIONS(315),
    [anon_sym_AT_LPAREN] = ACTIONS(315),
    [anon_sym_ATa_COLON] = ACTIONS(315),
    [anon_sym_ATb_COLON] = ACTIONS(315),
    [anon_sym_ATB_COLON] = ACTIONS(315),
    [anon_sym_ATe_COLON] = ACTIONS(315),
    [anon_sym_ATF_COLON] = ACTIONS(315),
    [anon_sym_ATi_COLON] = ACTIONS(315),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(315),
    [anon_sym_ATr_COLON] = ACTIONS(315),
    [anon_sym_ATf_COLON] = ACTIONS(315),
    [anon_sym_ATs_COLON] = ACTIONS(315),
    [anon_sym_ATx_COLON] = ACTIONS(315),
    [anon_sym_PIPE_DOT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_1_GT] = ACTIONS(315),
    [anon_sym_2_GT] = ACTIONS(315),
    [anon_sym_H_GT] = ACTIONS(315),
    [anon_sym_GT_GT] = ACTIONS(315),
    [anon_sym_1_GT_GT] = ACTIONS(315),
    [anon_sym_2_GT_GT] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_CR] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPEH] = ACTIONS(319),
    [anon_sym_AT_AT] = ACTIONS(319),
    [anon_sym_AT_ATdbt] = ACTIONS(319),
    [anon_sym_AT_ATdbta] = ACTIONS(319),
    [anon_sym_AT_ATdbtb] = ACTIONS(319),
    [anon_sym_AT_ATdbts] = ACTIONS(319),
    [anon_sym_AT_AT_DOT] = ACTIONS(319),
    [anon_sym_AT_AT_EQ] = ACTIONS(319),
    [anon_sym_AT_ATk] = ACTIONS(319),
    [anon_sym_AT_ATt] = ACTIONS(319),
    [anon_sym_AT_ATb] = ACTIONS(319),
    [anon_sym_AT_ATi] = ACTIONS(319),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(319),
    [anon_sym_AT_ATs_COLON] = ACTIONS(319),
    [anon_sym_AT_ATc_COLON] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_AT_BANG] = ACTIONS(319),
    [anon_sym_AT_LPAREN] = ACTIONS(319),
    [anon_sym_ATa_COLON] = ACTIONS(319),
    [anon_sym_ATb_COLON] = ACTIONS(319),
    [anon_sym_ATB_COLON] = ACTIONS(319),
    [anon_sym_ATe_COLON] = ACTIONS(319),
    [anon_sym_ATF_COLON] = ACTIONS(319),
    [anon_sym_ATi_COLON] = ACTIONS(319),
    [anon_sym_ATk_COLON] = ACTIONS(319),
    [anon_sym_ATo_COLON] = ACTIONS(319),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(319),
    [anon_sym_ATs_COLON] = ACTIONS(319),
    [anon_sym_ATx_COLON] = ACTIONS(319),
    [anon_sym_PIPE_DOT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_1_GT] = ACTIONS(319),
    [anon_sym_2_GT] = ACTIONS(319),
    [anon_sym_H_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_1_GT_GT] = ACTIONS(319),
    [anon_sym_2_GT_GT] = ACTIONS(319),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(319),
    [anon_sym_CR] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPEH] = ACTIONS(167),
    [anon_sym_AT_AT] = ACTIONS(169),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(171),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(175),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(179),
    [anon_sym_AT_ATk] = ACTIONS(181),
    [anon_sym_AT_ATt] = ACTIONS(183),
    [anon_sym_AT_ATb] = ACTIONS(185),
    [anon_sym_AT_ATi] = ACTIONS(187),
    [anon_sym_AT_ATiS] = ACTIONS(189),
    [anon_sym_AT_ATf] = ACTIONS(191),
    [anon_sym_AT_ATs_COLON] = ACTIONS(193),
    [anon_sym_AT_ATc_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(197),
    [anon_sym_AT_BANG] = ACTIONS(199),
    [anon_sym_AT_LPAREN] = ACTIONS(201),
    [anon_sym_ATa_COLON] = ACTIONS(203),
    [anon_sym_ATb_COLON] = ACTIONS(205),
    [anon_sym_ATB_COLON] = ACTIONS(207),
    [anon_sym_ATe_COLON] = ACTIONS(209),
    [anon_sym_ATF_COLON] = ACTIONS(211),
    [anon_sym_ATi_COLON] = ACTIONS(213),
    [anon_sym_ATk_COLON] = ACTIONS(215),
    [anon_sym_ATo_COLON] = ACTIONS(217),
    [anon_sym_ATr_COLON] = ACTIONS(219),
    [anon_sym_ATf_COLON] = ACTIONS(221),
    [anon_sym_ATs_COLON] = ACTIONS(223),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_PIPE_DOT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_1_GT] = ACTIONS(311),
    [anon_sym_2_GT] = ACTIONS(311),
    [anon_sym_H_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_1_GT_GT] = ACTIONS(311),
    [anon_sym_2_GT_GT] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_CR] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PIPEH] = ACTIONS(323),
    [anon_sym_AT_AT] = ACTIONS(323),
    [anon_sym_AT_ATdbt] = ACTIONS(323),
    [anon_sym_AT_ATdbta] = ACTIONS(323),
    [anon_sym_AT_ATdbtb] = ACTIONS(323),
    [anon_sym_AT_ATdbts] = ACTIONS(323),
    [anon_sym_AT_AT_DOT] = ACTIONS(323),
    [anon_sym_AT_AT_EQ] = ACTIONS(323),
    [anon_sym_AT_ATk] = ACTIONS(323),
    [anon_sym_AT_ATt] = ACTIONS(323),
    [anon_sym_AT_ATb] = ACTIONS(323),
    [anon_sym_AT_ATi] = ACTIONS(323),
    [anon_sym_AT_ATiS] = ACTIONS(323),
    [anon_sym_AT_ATf] = ACTIONS(323),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym_AT_BANG] = ACTIONS(323),
    [anon_sym_AT_LPAREN] = ACTIONS(323),
    [anon_sym_ATa_COLON] = ACTIONS(323),
    [anon_sym_ATb_COLON] = ACTIONS(323),
    [anon_sym_ATB_COLON] = ACTIONS(323),
    [anon_sym_ATe_COLON] = ACTIONS(323),
    [anon_sym_ATF_COLON] = ACTIONS(323),
    [anon_sym_ATi_COLON] = ACTIONS(323),
    [anon_sym_ATk_COLON] = ACTIONS(323),
    [anon_sym_ATo_COLON] = ACTIONS(323),
    [anon_sym_ATr_COLON] = ACTIONS(323),
    [anon_sym_ATf_COLON] = ACTIONS(323),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(323),
    [anon_sym_PIPE_DOT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_1_GT] = ACTIONS(323),
    [anon_sym_2_GT] = ACTIONS(323),
    [anon_sym_H_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_1_GT_GT] = ACTIONS(323),
    [anon_sym_2_GT_GT] = ACTIONS(323),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_CR] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPEH] = ACTIONS(327),
    [anon_sym_AT_AT] = ACTIONS(327),
    [anon_sym_AT_ATdbt] = ACTIONS(327),
    [anon_sym_AT_ATdbta] = ACTIONS(327),
    [anon_sym_AT_ATdbtb] = ACTIONS(327),
    [anon_sym_AT_ATdbts] = ACTIONS(327),
    [anon_sym_AT_AT_DOT] = ACTIONS(327),
    [anon_sym_AT_AT_EQ] = ACTIONS(327),
    [anon_sym_AT_ATk] = ACTIONS(327),
    [anon_sym_AT_ATt] = ACTIONS(327),
    [anon_sym_AT_ATb] = ACTIONS(327),
    [anon_sym_AT_ATi] = ACTIONS(327),
    [anon_sym_AT_ATiS] = ACTIONS(327),
    [anon_sym_AT_ATf] = ACTIONS(327),
    [anon_sym_AT_ATs_COLON] = ACTIONS(327),
    [anon_sym_AT_ATc_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(327),
    [anon_sym_AT_LPAREN] = ACTIONS(327),
    [anon_sym_ATa_COLON] = ACTIONS(327),
    [anon_sym_ATb_COLON] = ACTIONS(327),
    [anon_sym_ATB_COLON] = ACTIONS(327),
    [anon_sym_ATe_COLON] = ACTIONS(327),
    [anon_sym_ATF_COLON] = ACTIONS(327),
    [anon_sym_ATi_COLON] = ACTIONS(327),
    [anon_sym_ATk_COLON] = ACTIONS(327),
    [anon_sym_ATo_COLON] = ACTIONS(327),
    [anon_sym_ATr_COLON] = ACTIONS(327),
    [anon_sym_ATf_COLON] = ACTIONS(327),
    [anon_sym_ATs_COLON] = ACTIONS(327),
    [anon_sym_ATx_COLON] = ACTIONS(327),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_1_GT] = ACTIONS(327),
    [anon_sym_2_GT] = ACTIONS(327),
    [anon_sym_H_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_1_GT_GT] = ACTIONS(327),
    [anon_sym_2_GT_GT] = ACTIONS(327),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_CR] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPEH] = ACTIONS(331),
    [anon_sym_AT_AT] = ACTIONS(331),
    [anon_sym_AT_ATdbt] = ACTIONS(331),
    [anon_sym_AT_ATdbta] = ACTIONS(331),
    [anon_sym_AT_ATdbtb] = ACTIONS(331),
    [anon_sym_AT_ATdbts] = ACTIONS(331),
    [anon_sym_AT_AT_DOT] = ACTIONS(331),
    [anon_sym_AT_AT_EQ] = ACTIONS(331),
    [anon_sym_AT_ATk] = ACTIONS(331),
    [anon_sym_AT_ATt] = ACTIONS(331),
    [anon_sym_AT_ATb] = ACTIONS(331),
    [anon_sym_AT_ATi] = ACTIONS(331),
    [anon_sym_AT_ATiS] = ACTIONS(331),
    [anon_sym_AT_ATf] = ACTIONS(331),
    [anon_sym_AT_ATs_COLON] = ACTIONS(331),
    [anon_sym_AT_ATc_COLON] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_AT_BANG] = ACTIONS(331),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(331),
    [anon_sym_ATb_COLON] = ACTIONS(331),
    [anon_sym_ATB_COLON] = ACTIONS(331),
    [anon_sym_ATe_COLON] = ACTIONS(331),
    [anon_sym_ATF_COLON] = ACTIONS(331),
    [anon_sym_ATi_COLON] = ACTIONS(331),
    [anon_sym_ATk_COLON] = ACTIONS(331),
    [anon_sym_ATo_COLON] = ACTIONS(331),
    [anon_sym_ATr_COLON] = ACTIONS(331),
    [anon_sym_ATf_COLON] = ACTIONS(331),
    [anon_sym_ATs_COLON] = ACTIONS(331),
    [anon_sym_ATx_COLON] = ACTIONS(331),
    [anon_sym_PIPE_DOT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_1_GT] = ACTIONS(331),
    [anon_sym_2_GT] = ACTIONS(331),
    [anon_sym_H_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_1_GT_GT] = ACTIONS(331),
    [anon_sym_2_GT_GT] = ACTIONS(331),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_CR] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPEH] = ACTIONS(335),
    [anon_sym_AT_AT] = ACTIONS(335),
    [anon_sym_AT_ATdbt] = ACTIONS(335),
    [anon_sym_AT_ATdbta] = ACTIONS(335),
    [anon_sym_AT_ATdbtb] = ACTIONS(335),
    [anon_sym_AT_ATdbts] = ACTIONS(335),
    [anon_sym_AT_AT_DOT] = ACTIONS(335),
    [anon_sym_AT_AT_EQ] = ACTIONS(335),
    [anon_sym_AT_ATk] = ACTIONS(335),
    [anon_sym_AT_ATt] = ACTIONS(335),
    [anon_sym_AT_ATb] = ACTIONS(335),
    [anon_sym_AT_ATi] = ACTIONS(335),
    [anon_sym_AT_ATiS] = ACTIONS(335),
    [anon_sym_AT_ATf] = ACTIONS(335),
    [anon_sym_AT_ATs_COLON] = ACTIONS(335),
    [anon_sym_AT_ATc_COLON] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_AT_BANG] = ACTIONS(335),
    [anon_sym_AT_LPAREN] = ACTIONS(335),
    [anon_sym_ATa_COLON] = ACTIONS(335),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(335),
    [anon_sym_ATe_COLON] = ACTIONS(335),
    [anon_sym_ATF_COLON] = ACTIONS(335),
    [anon_sym_ATi_COLON] = ACTIONS(335),
    [anon_sym_ATk_COLON] = ACTIONS(335),
    [anon_sym_ATo_COLON] = ACTIONS(335),
    [anon_sym_ATr_COLON] = ACTIONS(335),
    [anon_sym_ATf_COLON] = ACTIONS(335),
    [anon_sym_ATs_COLON] = ACTIONS(335),
    [anon_sym_ATx_COLON] = ACTIONS(335),
    [anon_sym_PIPE_DOT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_1_GT] = ACTIONS(335),
    [anon_sym_2_GT] = ACTIONS(335),
    [anon_sym_H_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(335),
    [anon_sym_1_GT_GT] = ACTIONS(335),
    [anon_sym_2_GT_GT] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_CR] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPEH] = ACTIONS(339),
    [anon_sym_AT_AT] = ACTIONS(339),
    [anon_sym_AT_ATdbt] = ACTIONS(339),
    [anon_sym_AT_ATdbta] = ACTIONS(339),
    [anon_sym_AT_ATdbtb] = ACTIONS(339),
    [anon_sym_AT_ATdbts] = ACTIONS(339),
    [anon_sym_AT_AT_DOT] = ACTIONS(339),
    [anon_sym_AT_AT_EQ] = ACTIONS(339),
    [anon_sym_AT_ATk] = ACTIONS(339),
    [anon_sym_AT_ATt] = ACTIONS(339),
    [anon_sym_AT_ATb] = ACTIONS(339),
    [anon_sym_AT_ATi] = ACTIONS(339),
    [anon_sym_AT_ATiS] = ACTIONS(339),
    [anon_sym_AT_ATf] = ACTIONS(339),
    [anon_sym_AT_ATs_COLON] = ACTIONS(339),
    [anon_sym_AT_ATc_COLON] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_AT_BANG] = ACTIONS(339),
    [anon_sym_AT_LPAREN] = ACTIONS(339),
    [anon_sym_ATa_COLON] = ACTIONS(339),
    [anon_sym_ATb_COLON] = ACTIONS(339),
    [anon_sym_ATB_COLON] = ACTIONS(339),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(339),
    [anon_sym_ATi_COLON] = ACTIONS(339),
    [anon_sym_ATk_COLON] = ACTIONS(339),
    [anon_sym_ATo_COLON] = ACTIONS(339),
    [anon_sym_ATr_COLON] = ACTIONS(339),
    [anon_sym_ATf_COLON] = ACTIONS(339),
    [anon_sym_ATs_COLON] = ACTIONS(339),
    [anon_sym_ATx_COLON] = ACTIONS(339),
    [anon_sym_PIPE_DOT] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_1_GT] = ACTIONS(339),
    [anon_sym_2_GT] = ACTIONS(339),
    [anon_sym_H_GT] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [anon_sym_1_GT_GT] = ACTIONS(339),
    [anon_sym_2_GT_GT] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPEH] = ACTIONS(343),
    [anon_sym_AT_AT] = ACTIONS(343),
    [anon_sym_AT_ATdbt] = ACTIONS(343),
    [anon_sym_AT_ATdbta] = ACTIONS(343),
    [anon_sym_AT_ATdbtb] = ACTIONS(343),
    [anon_sym_AT_ATdbts] = ACTIONS(343),
    [anon_sym_AT_AT_DOT] = ACTIONS(343),
    [anon_sym_AT_AT_EQ] = ACTIONS(343),
    [anon_sym_AT_ATk] = ACTIONS(343),
    [anon_sym_AT_ATt] = ACTIONS(343),
    [anon_sym_AT_ATb] = ACTIONS(343),
    [anon_sym_AT_ATi] = ACTIONS(343),
    [anon_sym_AT_ATiS] = ACTIONS(343),
    [anon_sym_AT_ATf] = ACTIONS(343),
    [anon_sym_AT_ATs_COLON] = ACTIONS(343),
    [anon_sym_AT_ATc_COLON] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_AT_BANG] = ACTIONS(343),
    [anon_sym_AT_LPAREN] = ACTIONS(343),
    [anon_sym_ATa_COLON] = ACTIONS(343),
    [anon_sym_ATb_COLON] = ACTIONS(343),
    [anon_sym_ATB_COLON] = ACTIONS(343),
    [anon_sym_ATe_COLON] = ACTIONS(343),
    [anon_sym_ATF_COLON] = ACTIONS(343),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(343),
    [anon_sym_ATo_COLON] = ACTIONS(343),
    [anon_sym_ATr_COLON] = ACTIONS(343),
    [anon_sym_ATf_COLON] = ACTIONS(343),
    [anon_sym_ATs_COLON] = ACTIONS(343),
    [anon_sym_ATx_COLON] = ACTIONS(343),
    [anon_sym_PIPE_DOT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_1_GT] = ACTIONS(343),
    [anon_sym_2_GT] = ACTIONS(343),
    [anon_sym_H_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_1_GT_GT] = ACTIONS(343),
    [anon_sym_2_GT_GT] = ACTIONS(343),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_CR] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PIPEH] = ACTIONS(347),
    [anon_sym_AT_AT] = ACTIONS(347),
    [anon_sym_AT_ATdbt] = ACTIONS(347),
    [anon_sym_AT_ATdbta] = ACTIONS(347),
    [anon_sym_AT_ATdbtb] = ACTIONS(347),
    [anon_sym_AT_ATdbts] = ACTIONS(347),
    [anon_sym_AT_AT_DOT] = ACTIONS(347),
    [anon_sym_AT_AT_EQ] = ACTIONS(347),
    [anon_sym_AT_ATk] = ACTIONS(347),
    [anon_sym_AT_ATt] = ACTIONS(347),
    [anon_sym_AT_ATb] = ACTIONS(347),
    [anon_sym_AT_ATi] = ACTIONS(347),
    [anon_sym_AT_ATiS] = ACTIONS(347),
    [anon_sym_AT_ATf] = ACTIONS(347),
    [anon_sym_AT_ATs_COLON] = ACTIONS(347),
    [anon_sym_AT_ATc_COLON] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_AT_BANG] = ACTIONS(347),
    [anon_sym_AT_LPAREN] = ACTIONS(347),
    [anon_sym_ATa_COLON] = ACTIONS(347),
    [anon_sym_ATb_COLON] = ACTIONS(347),
    [anon_sym_ATB_COLON] = ACTIONS(347),
    [anon_sym_ATe_COLON] = ACTIONS(347),
    [anon_sym_ATF_COLON] = ACTIONS(347),
    [anon_sym_ATi_COLON] = ACTIONS(347),
    [anon_sym_ATk_COLON] = ACTIONS(347),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(347),
    [anon_sym_ATf_COLON] = ACTIONS(347),
    [anon_sym_ATs_COLON] = ACTIONS(347),
    [anon_sym_ATx_COLON] = ACTIONS(347),
    [anon_sym_PIPE_DOT] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_1_GT] = ACTIONS(347),
    [anon_sym_2_GT] = ACTIONS(347),
    [anon_sym_H_GT] = ACTIONS(347),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_1_GT_GT] = ACTIONS(347),
    [anon_sym_2_GT_GT] = ACTIONS(347),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_CR] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
  },
  [63] = {
    [aux_sym_commands_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_CR] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
  },
  [64] = {
    [aux_sym_commands_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(356),
    [anon_sym_CR] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
  },
  [65] = {
    [aux_sym_commands_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(356),
    [anon_sym_CR] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
  },
  [66] = {
    [sym_arg] = STATE(7),
    [sym_arg_identifier] = STATE(19),
    [aux_sym_iter_offsets_command_repeat1] = STATE(7),
    [aux_sym_eq_sep_val_token1] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(362),
    [anon_sym_CR] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(362),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(366),
    [anon_sym_CR] = ACTIONS(366),
    [anon_sym_SEMI] = ACTIONS(366),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(370),
    [anon_sym_CR] = ACTIONS(370),
    [anon_sym_SEMI] = ACTIONS(370),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(372),
    [anon_sym_CR] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(376),
    [anon_sym_CR] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(376),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(380),
    [anon_sym_CR] = ACTIONS(380),
    [anon_sym_SEMI] = ACTIONS(380),
  },
  [73] = {
    [sym_arg] = STATE(50),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [74] = {
    [sym_arg] = STATE(31),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [75] = {
    [sym_arg] = STATE(62),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [76] = {
    [sym_arg] = STATE(72),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [77] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [78] = {
    [sym_arg] = STATE(67),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [sym_arg] = STATE(40),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [80] = {
    [sym_arg] = STATE(41),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [81] = {
    [sym_arg] = STATE(42),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [82] = {
    [sym_arg] = STATE(43),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [83] = {
    [sym_arg] = STATE(44),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [84] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [85] = {
    [sym_arg] = STATE(46),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [86] = {
    [sym_arg] = STATE(47),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [sym_arg] = STATE(11),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [88] = {
    [sym_arg] = STATE(49),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [89] = {
    [sym_arg] = STATE(59),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [90] = {
    [sym_arg] = STATE(15),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [91] = {
    [sym_arg] = STATE(100),
    [sym_arg_identifier] = STATE(110),
    [aux_sym_eq_sep_val_token1] = ACTIONS(384),
    [sym__comment] = ACTIONS(3),
  },
  [92] = {
    [sym_arg] = STATE(68),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [93] = {
    [sym_arg] = STATE(69),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [94] = {
    [sym_arg] = STATE(71),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [sym_arg] = STATE(51),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [sym_arg] = STATE(77),
    [sym_arg_identifier] = STATE(110),
    [aux_sym_eq_sep_val_token1] = ACTIONS(384),
    [sym__comment] = ACTIONS(3),
  },
  [97] = {
    [sym_arg] = STATE(53),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [98] = {
    [sym_arg] = STATE(54),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [99] = {
    [sym_arg] = STATE(91),
    [sym_arg_identifier] = STATE(110),
    [aux_sym_eq_sep_val_token1] = ACTIONS(384),
    [sym__comment] = ACTIONS(3),
  },
  [100] = {
    [sym_arg] = STATE(57),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [101] = {
    [sym_arg] = STATE(39),
    [sym_arg_identifier] = STATE(21),
    [aux_sym_eq_sep_val_token1] = ACTIONS(382),
    [sym__comment] = ACTIONS(3),
  },
  [102] = {
    [sym_eq_sep_val] = STATE(36),
    [aux_sym_eq_sep_val_token1] = ACTIONS(386),
    [sym__comment] = ACTIONS(3),
  },
  [103] = {
    [sym_eq_sep_val] = STATE(37),
    [aux_sym_eq_sep_val_token1] = ACTIONS(386),
    [sym__comment] = ACTIONS(3),
  },
  [104] = {
    [sym_eq_sep_key] = ACTIONS(388),
    [sym__comment] = ACTIONS(3),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(390),
    [sym__comment] = ACTIONS(392),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym__comment] = ACTIONS(392),
  },
  [107] = {
    [sym__any_command] = ACTIONS(396),
    [sym__comment] = ACTIONS(3),
  },
  [108] = {
    [sym__macro_content] = ACTIONS(398),
    [sym__comment] = ACTIONS(3),
  },
  [109] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(115),
    [sym__comment] = ACTIONS(3),
  },
  [110] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(104),
  [9] = {.count = 1, .reusable = true}, SHIFT(23),
  [11] = {.count = 1, .reusable = true}, SHIFT(108),
  [13] = {.count = 1, .reusable = true}, SHIFT(107),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(65),
  [19] = {.count = 1, .reusable = false}, SHIFT(14),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = true}, SHIFT(5),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(104),
  [29] = {.count = 1, .reusable = false}, SHIFT(23),
  [31] = {.count = 1, .reusable = false}, SHIFT(108),
  [33] = {.count = 1, .reusable = false}, SHIFT(107),
  [35] = {.count = 1, .reusable = false}, SHIFT(3),
  [37] = {.count = 1, .reusable = false}, SHIFT(70),
  [39] = {.count = 1, .reusable = false}, SHIFT(5),
  [41] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(20),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 2, .production_id = 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 2, .production_id = 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(20),
  [64] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [66] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [68] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(90),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [75] = {.count = 1, .reusable = false}, SHIFT(90),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [81] = {.count = 1, .reusable = false}, SHIFT(60),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_identifier, 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_identifier, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [95] = {.count = 1, .reusable = false}, SHIFT(74),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_command, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_command, 2),
  [101] = {.count = 1, .reusable = false}, SHIFT(103),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 2),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 2),
  [107] = {.count = 1, .reusable = false}, SHIFT(102),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(18),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [167] = {.count = 1, .reusable = false}, SHIFT(26),
  [169] = {.count = 1, .reusable = false}, SHIFT(75),
  [171] = {.count = 1, .reusable = false}, SHIFT(27),
  [173] = {.count = 1, .reusable = false}, SHIFT(28),
  [175] = {.count = 1, .reusable = false}, SHIFT(29),
  [177] = {.count = 1, .reusable = false}, SHIFT(89),
  [179] = {.count = 1, .reusable = false}, SHIFT(66),
  [181] = {.count = 1, .reusable = false}, SHIFT(101),
  [183] = {.count = 1, .reusable = false}, SHIFT(32),
  [185] = {.count = 1, .reusable = false}, SHIFT(33),
  [187] = {.count = 1, .reusable = false}, SHIFT(24),
  [189] = {.count = 1, .reusable = false}, SHIFT(35),
  [191] = {.count = 1, .reusable = false}, SHIFT(16),
  [193] = {.count = 1, .reusable = false}, SHIFT(99),
  [195] = {.count = 1, .reusable = false}, SHIFT(4),
  [197] = {.count = 1, .reusable = false}, SHIFT(98),
  [199] = {.count = 1, .reusable = false}, SHIFT(97),
  [201] = {.count = 1, .reusable = false}, SHIFT(96),
  [203] = {.count = 1, .reusable = false}, SHIFT(95),
  [205] = {.count = 1, .reusable = false}, SHIFT(73),
  [207] = {.count = 1, .reusable = false}, SHIFT(88),
  [209] = {.count = 1, .reusable = false}, SHIFT(87),
  [211] = {.count = 1, .reusable = false}, SHIFT(86),
  [213] = {.count = 1, .reusable = false}, SHIFT(85),
  [215] = {.count = 1, .reusable = false}, SHIFT(84),
  [217] = {.count = 1, .reusable = false}, SHIFT(83),
  [219] = {.count = 1, .reusable = false}, SHIFT(82),
  [221] = {.count = 1, .reusable = false}, SHIFT(81),
  [223] = {.count = 1, .reusable = false}, SHIFT(80),
  [225] = {.count = 1, .reusable = false}, SHIFT(79),
  [227] = {.count = 1, .reusable = false}, SHIFT(52),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_env_command, 4),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_env_command, 4),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_pointer_command, 4),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_command, 4),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [271] = {.count = 1, .reusable = false}, SHIFT(12),
  [273] = {.count = 1, .reusable = false}, SHIFT(78),
  [275] = {.count = 1, .reusable = false}, SHIFT(76),
  [277] = {.count = 1, .reusable = false}, SHIFT(94),
  [279] = {.count = 1, .reusable = false}, SHIFT(93),
  [281] = {.count = 1, .reusable = false}, SHIFT(92),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym__command, 1),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_command, 2),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_command, 2),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_system_command, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_system_command, 2),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_macro_command, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_macro_command, 3),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [351] = {.count = 2, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [356] = {.count = 1, .reusable = false}, SHIFT(2),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_out_redirect_command, 3),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [366] = {.count = 1, .reusable = false}, REDUCE(sym_err_append_redirect_command, 3),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_out_append_redirect_command, 3),
  [372] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_html_redirect_command, 3),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_err_redirect_command, 3),
  [382] = {.count = 1, .reusable = false}, SHIFT(22),
  [384] = {.count = 1, .reusable = false}, SHIFT(109),
  [386] = {.count = 1, .reusable = false}, SHIFT(38),
  [388] = {.count = 1, .reusable = false}, SHIFT(17),
  [390] = {.count = 1, .reusable = true}, SHIFT(58),
  [392] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [394] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [396] = {.count = 1, .reusable = false}, SHIFT(56),
  [398] = {.count = 1, .reusable = false}, SHIFT(105),
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
