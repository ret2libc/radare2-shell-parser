#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 216
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_PIPE = 1,
  anon_sym_PIPEH = 2,
  anon_sym_PIPET = 3,
  anon_sym_AT_AT = 4,
  anon_sym_AT_ATdbt = 5,
  anon_sym_AT_ATdbta = 6,
  anon_sym_AT_ATdbtb = 7,
  anon_sym_AT_ATdbts = 8,
  anon_sym_AT_AT_DOT = 9,
  anon_sym_AT_AT_EQ = 10,
  anon_sym_AT_ATk = 11,
  anon_sym_AT_ATt = 12,
  anon_sym_AT_ATb = 13,
  anon_sym_AT_ATi = 14,
  anon_sym_AT_ATiS = 15,
  anon_sym_AT_ATf = 16,
  anon_sym_COLON = 17,
  anon_sym_AT_ATs_COLON = 18,
  anon_sym_AT_ATc_COLON = 19,
  anon_sym_AT = 20,
  anon_sym_AT_BANG = 21,
  anon_sym_AT_LPAREN = 22,
  anon_sym_ATa_COLON = 23,
  anon_sym_ATb_COLON = 24,
  anon_sym_ATB_COLON = 25,
  anon_sym_ATe_COLON = 26,
  anon_sym_COMMA = 27,
  anon_sym_ATF_COLON = 28,
  anon_sym_ATi_COLON = 29,
  anon_sym_ATk_COLON = 30,
  anon_sym_ATo_COLON = 31,
  anon_sym_ATr_COLON = 32,
  anon_sym_ATf_COLON = 33,
  anon_sym_ATs_COLON = 34,
  anon_sym_ATx_COLON = 35,
  sym_interpreter_command = 36,
  anon_sym_RPAREN = 37,
  anon_sym_LPAREN = 38,
  anon_sym_DOT_BANG = 39,
  anon_sym_DOT_LPAREN = 40,
  anon_sym_DOT_SLASH = 41,
  anon_sym_ = 42,
  anon_sym_PIPE_DOT = 43,
  anon_sym_PERCENT = 44,
  anon_sym_DOT_DOT_DOT = 45,
  aux_sym_interpret_identifier_token1 = 46,
  sym__point_interpret_identifier = 47,
  sym_system_identifier = 48,
  sym_pointer_identifier = 49,
  anon_sym_EQ = 50,
  sym_macro_identifier = 51,
  sym_macro_call_content = 52,
  anon_sym_GT = 53,
  anon_sym_1_GT = 54,
  anon_sym_2_GT = 55,
  anon_sym_H_GT = 56,
  anon_sym_GT_GT = 57,
  anon_sym_1_GT_GT = 58,
  anon_sym_2_GT_GT = 59,
  sym_tmp_eval_arg = 60,
  sym_eq_sep_key = 61,
  sym_eq_sep_val = 62,
  sym_macro_content = 63,
  sym__any_command = 64,
  aux_sym_arg_identifier_token1 = 65,
  aux_sym_arg_identifier_token2 = 66,
  sym_number = 67,
  anon_sym_DQUOTE = 68,
  aux_sym_quoted_arg_token1 = 69,
  anon_sym_SQUOTE = 70,
  aux_sym_quoted_arg_token2 = 71,
  anon_sym_DOLLAR_LPAREN = 72,
  anon_sym_BQUOTE = 73,
  sym__comment = 74,
  anon_sym_LF = 75,
  anon_sym_CR = 76,
  anon_sym_SEMI = 77,
  sym_cmd_identifier = 78,
  sym__help_command = 79,
  sym__question_mark_identifier = 80,
  sym_commands = 81,
  sym__commands_singleline = 82,
  sym__command = 83,
  sym__simple_command = 84,
  sym__tmp_command = 85,
  sym__iter_command = 86,
  sym__pipe_command = 87,
  sym_html_disable_command = 88,
  sym_html_enable_command = 89,
  sym_scr_tts_command = 90,
  sym_pipe_command = 91,
  sym_pipe_second_command = 92,
  sym_iter_flags_command = 93,
  sym_iter_dbta_command = 94,
  sym_iter_dbtb_command = 95,
  sym_iter_dbts_command = 96,
  sym_iter_file_lines_command = 97,
  sym_iter_offsets_command = 98,
  sym_iter_sdbquery_command = 99,
  sym_iter_threads_command = 100,
  sym_iter_bbs_command = 101,
  sym_iter_instrs_command = 102,
  sym_iter_sections_command = 103,
  sym_iter_functions_command = 104,
  sym_iter_step_command = 105,
  sym_iter_interpret_command = 106,
  sym_tmp_seek_command = 107,
  sym_tmp_blksz_command = 108,
  sym_tmp_fromto_command = 109,
  sym_tmp_arch_command = 110,
  sym_tmp_bits_command = 111,
  sym_tmp_nthi_command = 112,
  sym_tmp_eval_command = 113,
  sym_tmp_fs_command = 114,
  sym_tmp_reli_command = 115,
  sym_tmp_kuery_command = 116,
  sym_tmp_fd_command = 117,
  sym_tmp_reg_command = 118,
  sym_tmp_file_command = 119,
  sym_tmp_string_command = 120,
  sym_tmp_hex_command = 121,
  sym_arged_command = 122,
  sym__simple_arged_command = 123,
  sym__math_arged_command = 124,
  sym__pointer_arged_command = 125,
  sym__macro_arged_command = 126,
  sym__system_command = 127,
  sym__interpret_command = 128,
  sym__env_command = 129,
  sym__last_command = 130,
  sym_interpret_identifier = 131,
  sym_interpret_arg = 132,
  sym_system_arg = 133,
  sym_question_mark_identifier = 134,
  sym_help_command = 135,
  sym_repeat_command = 136,
  sym__eq_sep_args = 137,
  sym_out_redirect_command = 138,
  sym_err_redirect_command = 139,
  sym_html_redirect_command = 140,
  sym_out_append_redirect_command = 141,
  sym_err_append_redirect_command = 142,
  sym_arg = 143,
  sym_arg_identifier = 144,
  sym_quoted_arg = 145,
  sym_cmd_substitution_arg = 146,
  aux_sym_commands_repeat1 = 147,
  aux_sym_commands_repeat2 = 148,
  aux_sym__commands_singleline_repeat1 = 149,
  aux_sym__commands_singleline_repeat2 = 150,
  aux_sym_iter_offsets_command_repeat1 = 151,
  aux_sym_tmp_eval_command_repeat1 = 152,
  aux_sym__interpret_command_repeat1 = 153,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPEH] = "|H",
  [anon_sym_PIPET] = "|T",
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
  [sym_interpreter_command] = "interpreter_command",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT_BANG] = ".!",
  [anon_sym_DOT_LPAREN] = ".(",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_] = " ",
  [anon_sym_PIPE_DOT] = "|.",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_interpret_identifier_token1] = "interpret_identifier_token1",
  [sym__point_interpret_identifier] = "_point_interpret_identifier",
  [sym_system_identifier] = "system_identifier",
  [sym_pointer_identifier] = "pointer_identifier",
  [anon_sym_EQ] = "=",
  [sym_macro_identifier] = "macro_identifier",
  [sym_macro_call_content] = "macro_call_content",
  [anon_sym_GT] = ">",
  [anon_sym_1_GT] = "1>",
  [anon_sym_2_GT] = "2>",
  [anon_sym_H_GT] = "H>",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_1_GT_GT] = "1>>",
  [anon_sym_2_GT_GT] = "2>>",
  [sym_tmp_eval_arg] = "tmp_eval_arg",
  [sym_eq_sep_key] = "eq_sep_key",
  [sym_eq_sep_val] = "eq_sep_val",
  [sym_macro_content] = "macro_content",
  [sym__any_command] = "_any_command",
  [aux_sym_arg_identifier_token1] = "arg_identifier_token1",
  [aux_sym_arg_identifier_token2] = "arg_identifier_token2",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_arg_token1] = "quoted_arg_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_arg_token2] = "quoted_arg_token2",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_BQUOTE] = "`",
  [sym__comment] = "_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_SEMI] = ";",
  [sym_cmd_identifier] = "cmd_identifier",
  [sym__help_command] = "_help_command",
  [sym__question_mark_identifier] = "_question_mark_identifier",
  [sym_commands] = "commands",
  [sym__commands_singleline] = "_commands_singleline",
  [sym__command] = "_command",
  [sym__simple_command] = "_simple_command",
  [sym__tmp_command] = "_tmp_command",
  [sym__iter_command] = "_iter_command",
  [sym__pipe_command] = "_pipe_command",
  [sym_html_disable_command] = "html_disable_command",
  [sym_html_enable_command] = "html_enable_command",
  [sym_scr_tts_command] = "scr_tts_command",
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
  [sym_arged_command] = "arged_command",
  [sym__simple_arged_command] = "_simple_arged_command",
  [sym__math_arged_command] = "_math_arged_command",
  [sym__pointer_arged_command] = "_pointer_arged_command",
  [sym__macro_arged_command] = "_macro_arged_command",
  [sym__system_command] = "_system_command",
  [sym__interpret_command] = "_interpret_command",
  [sym__env_command] = "_env_command",
  [sym__last_command] = "_last_command",
  [sym_interpret_identifier] = "interpret_identifier",
  [sym_interpret_arg] = "interpret_arg",
  [sym_system_arg] = "system_arg",
  [sym_question_mark_identifier] = "question_mark_identifier",
  [sym_help_command] = "help_command",
  [sym_repeat_command] = "repeat_command",
  [sym__eq_sep_args] = "_eq_sep_args",
  [sym_out_redirect_command] = "out_redirect_command",
  [sym_err_redirect_command] = "err_redirect_command",
  [sym_html_redirect_command] = "html_redirect_command",
  [sym_out_append_redirect_command] = "out_append_redirect_command",
  [sym_err_append_redirect_command] = "err_append_redirect_command",
  [sym_arg] = "arg",
  [sym_arg_identifier] = "arg_identifier",
  [sym_quoted_arg] = "quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_iter_offsets_command_repeat1] = "iter_offsets_command_repeat1",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym__interpret_command_repeat1] = "_interpret_command_repeat1",
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
  [anon_sym_PIPET] = {
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
  [sym_interpreter_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpret_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__point_interpret_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_system_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_call_content] = {
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
  [sym_tmp_eval_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_sep_key] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_sep_val] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_content] = {
    .visible = true,
    .named = true,
  },
  [sym__any_command] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_arg_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_arg_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym_cmd_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__help_command] = {
    .visible = false,
    .named = true,
  },
  [sym__question_mark_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_commands] = {
    .visible = true,
    .named = true,
  },
  [sym__commands_singleline] = {
    .visible = false,
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
  [sym_scr_tts_command] = {
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
  [sym_arged_command] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__math_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__pointer_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__macro_arged_command] = {
    .visible = false,
    .named = true,
  },
  [sym__system_command] = {
    .visible = false,
    .named = true,
  },
  [sym__interpret_command] = {
    .visible = false,
    .named = true,
  },
  [sym__env_command] = {
    .visible = false,
    .named = true,
  },
  [sym__last_command] = {
    .visible = false,
    .named = true,
  },
  [sym_interpret_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interpret_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_system_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_help_command] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_command] = {
    .visible = true,
    .named = true,
  },
  [sym__eq_sep_args] = {
    .visible = false,
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
  [sym_arg_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_substitution_arg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_commands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__commands_singleline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__commands_singleline_repeat2] = {
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
  [aux_sym__interpret_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_command = 2,
  field_string = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_command] = "command",
  [field_string] = "string",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_command, 0},
  [1] =
    {field_args, 0, .inherited = true},
    {field_command, 0, .inherited = true},
  [3] =
    {field_args, 1},
    {field_command, 0},
  [5] =
    {field_args, 0},
    {field_command, 1},
  [7] =
    {field_args, 2},
    {field_command, 0},
    {field_command, 1},
  [10] =
    {field_string, 1},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(224);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '|') ADVANCE(44);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '`') ADVANCE(243);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '!') ADVANCE(133);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == '(') ADVANCE(137);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(224);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '|') ADVANCE(44);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '1') ADVANCE(218);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(220);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '(') ADVANCE(117);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '1') ADVANCE(38);
      if (lookahead == '2') ADVANCE(39);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '|') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(250);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '$') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(235);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(186);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(212);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(164);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(165);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '@') ADVANCE(81);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(187);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == ';') ADVANCE(251);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(188);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(236);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(241);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(174);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(246);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(150);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == 'H') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'k') ADVANCE(64);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'k') ADVANCE(65);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '@') ADVANCE(50);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'F') ADVANCE(25);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'k') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(84);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'F') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'k') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(248);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(241);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__point_interpret_identifier);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(138);
      if (lookahead == ' ') ADVANCE(126);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_H_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(164);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(165);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 173:
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
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(174);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(122);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(186);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '`') ADVANCE(244);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(187);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '1') ADVANCE(207);
      if (lookahead == '2') ADVANCE(208);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead == 'H') ADVANCE(209);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(188);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(212);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '1') ADVANCE(218);
      if (lookahead == '2') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == '>') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == '>') ADVANCE(148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(227);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(124);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(234);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '/') ADVANCE(234);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead == '\t') ADVANCE(236);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead == '\r') ADVANCE(241);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(212);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 1},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 1, .external_lex_state = 1},
  [117] = {.lex_state = 1, .external_lex_state = 1},
  [118] = {.lex_state = 2, .external_lex_state = 2},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 13},
  [188] = {.lex_state = 138},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 15},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 16},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 18},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 18},
  [212] = {.lex_state = 15},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 2},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token__question_mark_identifier = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token__question_mark_identifier] = sym__question_mark_identifier,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token__question_mark_identifier] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__question_mark_identifier] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PIPEH] = ACTIONS(1),
    [anon_sym_PIPET] = ACTIONS(1),
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
    [sym_interpreter_command] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_BANG] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym_interpret_identifier_token1] = ACTIONS(1),
    [sym__point_interpret_identifier] = ACTIONS(1),
    [sym_system_identifier] = ACTIONS(1),
    [sym_pointer_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_1_GT] = ACTIONS(1),
    [anon_sym_2_GT] = ACTIONS(1),
    [anon_sym_H_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_1_GT_GT] = ACTIONS(1),
    [anon_sym_2_GT_GT] = ACTIONS(1),
    [aux_sym_arg_identifier_token2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym__help_command] = ACTIONS(1),
    [sym__question_mark_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(202),
    [sym__command] = STATE(172),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_html_disable_command] = STATE(108),
    [sym_html_enable_command] = STATE(108),
    [sym_scr_tts_command] = STATE(108),
    [sym_pipe_command] = STATE(108),
    [sym_iter_flags_command] = STATE(108),
    [sym_iter_dbta_command] = STATE(108),
    [sym_iter_dbtb_command] = STATE(108),
    [sym_iter_dbts_command] = STATE(108),
    [sym_iter_file_lines_command] = STATE(108),
    [sym_iter_offsets_command] = STATE(108),
    [sym_iter_sdbquery_command] = STATE(108),
    [sym_iter_threads_command] = STATE(108),
    [sym_iter_bbs_command] = STATE(108),
    [sym_iter_instrs_command] = STATE(108),
    [sym_iter_sections_command] = STATE(108),
    [sym_iter_functions_command] = STATE(108),
    [sym_iter_step_command] = STATE(108),
    [sym_iter_interpret_command] = STATE(108),
    [sym_tmp_seek_command] = STATE(108),
    [sym_tmp_blksz_command] = STATE(108),
    [sym_tmp_fromto_command] = STATE(108),
    [sym_tmp_arch_command] = STATE(108),
    [sym_tmp_bits_command] = STATE(108),
    [sym_tmp_nthi_command] = STATE(108),
    [sym_tmp_eval_command] = STATE(108),
    [sym_tmp_fs_command] = STATE(108),
    [sym_tmp_reli_command] = STATE(108),
    [sym_tmp_kuery_command] = STATE(108),
    [sym_tmp_fd_command] = STATE(108),
    [sym_tmp_reg_command] = STATE(108),
    [sym_tmp_file_command] = STATE(108),
    [sym_tmp_string_command] = STATE(108),
    [sym_tmp_hex_command] = STATE(108),
    [sym_arged_command] = STATE(108),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(14),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(172),
    [sym_repeat_command] = STATE(108),
    [sym_out_redirect_command] = STATE(172),
    [sym_err_redirect_command] = STATE(172),
    [sym_html_redirect_command] = STATE(172),
    [sym_out_append_redirect_command] = STATE(172),
    [sym_err_append_redirect_command] = STATE(172),
    [aux_sym_commands_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_CR] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [2] = {
    [sym__command] = STATE(169),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_html_disable_command] = STATE(108),
    [sym_html_enable_command] = STATE(108),
    [sym_scr_tts_command] = STATE(108),
    [sym_pipe_command] = STATE(108),
    [sym_iter_flags_command] = STATE(108),
    [sym_iter_dbta_command] = STATE(108),
    [sym_iter_dbtb_command] = STATE(108),
    [sym_iter_dbts_command] = STATE(108),
    [sym_iter_file_lines_command] = STATE(108),
    [sym_iter_offsets_command] = STATE(108),
    [sym_iter_sdbquery_command] = STATE(108),
    [sym_iter_threads_command] = STATE(108),
    [sym_iter_bbs_command] = STATE(108),
    [sym_iter_instrs_command] = STATE(108),
    [sym_iter_sections_command] = STATE(108),
    [sym_iter_functions_command] = STATE(108),
    [sym_iter_step_command] = STATE(108),
    [sym_iter_interpret_command] = STATE(108),
    [sym_tmp_seek_command] = STATE(108),
    [sym_tmp_blksz_command] = STATE(108),
    [sym_tmp_fromto_command] = STATE(108),
    [sym_tmp_arch_command] = STATE(108),
    [sym_tmp_bits_command] = STATE(108),
    [sym_tmp_nthi_command] = STATE(108),
    [sym_tmp_eval_command] = STATE(108),
    [sym_tmp_fs_command] = STATE(108),
    [sym_tmp_reli_command] = STATE(108),
    [sym_tmp_kuery_command] = STATE(108),
    [sym_tmp_fd_command] = STATE(108),
    [sym_tmp_reg_command] = STATE(108),
    [sym_tmp_file_command] = STATE(108),
    [sym_tmp_string_command] = STATE(108),
    [sym_tmp_hex_command] = STATE(108),
    [sym_arged_command] = STATE(108),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(14),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(169),
    [sym_repeat_command] = STATE(108),
    [sym_out_redirect_command] = STATE(169),
    [sym_err_redirect_command] = STATE(169),
    [sym_html_redirect_command] = STATE(169),
    [sym_out_append_redirect_command] = STATE(169),
    [sym_err_append_redirect_command] = STATE(169),
    [aux_sym_commands_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_interpreter_command] = ACTIONS(43),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [3] = {
    [sym__command] = STATE(174),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_html_disable_command] = STATE(108),
    [sym_html_enable_command] = STATE(108),
    [sym_scr_tts_command] = STATE(108),
    [sym_pipe_command] = STATE(108),
    [sym_iter_flags_command] = STATE(108),
    [sym_iter_dbta_command] = STATE(108),
    [sym_iter_dbtb_command] = STATE(108),
    [sym_iter_dbts_command] = STATE(108),
    [sym_iter_file_lines_command] = STATE(108),
    [sym_iter_offsets_command] = STATE(108),
    [sym_iter_sdbquery_command] = STATE(108),
    [sym_iter_threads_command] = STATE(108),
    [sym_iter_bbs_command] = STATE(108),
    [sym_iter_instrs_command] = STATE(108),
    [sym_iter_sections_command] = STATE(108),
    [sym_iter_functions_command] = STATE(108),
    [sym_iter_step_command] = STATE(108),
    [sym_iter_interpret_command] = STATE(108),
    [sym_tmp_seek_command] = STATE(108),
    [sym_tmp_blksz_command] = STATE(108),
    [sym_tmp_fromto_command] = STATE(108),
    [sym_tmp_arch_command] = STATE(108),
    [sym_tmp_bits_command] = STATE(108),
    [sym_tmp_nthi_command] = STATE(108),
    [sym_tmp_eval_command] = STATE(108),
    [sym_tmp_fs_command] = STATE(108),
    [sym_tmp_reli_command] = STATE(108),
    [sym_tmp_kuery_command] = STATE(108),
    [sym_tmp_fd_command] = STATE(108),
    [sym_tmp_reg_command] = STATE(108),
    [sym_tmp_file_command] = STATE(108),
    [sym_tmp_string_command] = STATE(108),
    [sym_tmp_hex_command] = STATE(108),
    [sym_arged_command] = STATE(108),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(14),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(174),
    [sym_repeat_command] = STATE(108),
    [sym_out_redirect_command] = STATE(174),
    [sym_err_redirect_command] = STATE(174),
    [sym_html_redirect_command] = STATE(174),
    [sym_out_append_redirect_command] = STATE(174),
    [sym_err_append_redirect_command] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_interpreter_command] = ACTIONS(49),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [4] = {
    [sym__commands_singleline] = STATE(207),
    [sym__command] = STATE(181),
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_html_disable_command] = STATE(114),
    [sym_html_enable_command] = STATE(114),
    [sym_scr_tts_command] = STATE(114),
    [sym_pipe_command] = STATE(114),
    [sym_iter_flags_command] = STATE(114),
    [sym_iter_dbta_command] = STATE(114),
    [sym_iter_dbtb_command] = STATE(114),
    [sym_iter_dbts_command] = STATE(114),
    [sym_iter_file_lines_command] = STATE(114),
    [sym_iter_offsets_command] = STATE(114),
    [sym_iter_sdbquery_command] = STATE(114),
    [sym_iter_threads_command] = STATE(114),
    [sym_iter_bbs_command] = STATE(114),
    [sym_iter_instrs_command] = STATE(114),
    [sym_iter_sections_command] = STATE(114),
    [sym_iter_functions_command] = STATE(114),
    [sym_iter_step_command] = STATE(114),
    [sym_iter_interpret_command] = STATE(114),
    [sym_tmp_seek_command] = STATE(114),
    [sym_tmp_blksz_command] = STATE(114),
    [sym_tmp_fromto_command] = STATE(114),
    [sym_tmp_arch_command] = STATE(114),
    [sym_tmp_bits_command] = STATE(114),
    [sym_tmp_nthi_command] = STATE(114),
    [sym_tmp_eval_command] = STATE(114),
    [sym_tmp_fs_command] = STATE(114),
    [sym_tmp_reli_command] = STATE(114),
    [sym_tmp_kuery_command] = STATE(114),
    [sym_tmp_fd_command] = STATE(114),
    [sym_tmp_reg_command] = STATE(114),
    [sym_tmp_file_command] = STATE(114),
    [sym_tmp_string_command] = STATE(114),
    [sym_tmp_hex_command] = STATE(114),
    [sym_arged_command] = STATE(114),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_help_command] = STATE(181),
    [sym_repeat_command] = STATE(114),
    [sym_out_redirect_command] = STATE(181),
    [sym_err_redirect_command] = STATE(181),
    [sym_html_redirect_command] = STATE(181),
    [sym_out_append_redirect_command] = STATE(181),
    [sym_err_append_redirect_command] = STATE(181),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [sym_interpreter_command] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(65),
  },
  [5] = {
    [sym__commands_singleline] = STATE(206),
    [sym__command] = STATE(175),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_html_disable_command] = STATE(111),
    [sym_html_enable_command] = STATE(111),
    [sym_scr_tts_command] = STATE(111),
    [sym_pipe_command] = STATE(111),
    [sym_iter_flags_command] = STATE(111),
    [sym_iter_dbta_command] = STATE(111),
    [sym_iter_dbtb_command] = STATE(111),
    [sym_iter_dbts_command] = STATE(111),
    [sym_iter_file_lines_command] = STATE(111),
    [sym_iter_offsets_command] = STATE(111),
    [sym_iter_sdbquery_command] = STATE(111),
    [sym_iter_threads_command] = STATE(111),
    [sym_iter_bbs_command] = STATE(111),
    [sym_iter_instrs_command] = STATE(111),
    [sym_iter_sections_command] = STATE(111),
    [sym_iter_functions_command] = STATE(111),
    [sym_iter_step_command] = STATE(111),
    [sym_iter_interpret_command] = STATE(111),
    [sym_tmp_seek_command] = STATE(111),
    [sym_tmp_blksz_command] = STATE(111),
    [sym_tmp_fromto_command] = STATE(111),
    [sym_tmp_arch_command] = STATE(111),
    [sym_tmp_bits_command] = STATE(111),
    [sym_tmp_nthi_command] = STATE(111),
    [sym_tmp_eval_command] = STATE(111),
    [sym_tmp_fs_command] = STATE(111),
    [sym_tmp_reli_command] = STATE(111),
    [sym_tmp_kuery_command] = STATE(111),
    [sym_tmp_fd_command] = STATE(111),
    [sym_tmp_reg_command] = STATE(111),
    [sym_tmp_file_command] = STATE(111),
    [sym_tmp_string_command] = STATE(111),
    [sym_tmp_hex_command] = STATE(111),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(175),
    [sym_repeat_command] = STATE(111),
    [sym_out_redirect_command] = STATE(175),
    [sym_err_redirect_command] = STATE(175),
    [sym_html_redirect_command] = STATE(175),
    [sym_out_append_redirect_command] = STATE(175),
    [sym_err_append_redirect_command] = STATE(175),
    [aux_sym__commands_singleline_repeat1] = STATE(10),
    [sym_interpreter_command] = ACTIONS(67),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [6] = {
    [sym__commands_singleline] = STATE(201),
    [sym__command] = STATE(181),
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_html_disable_command] = STATE(114),
    [sym_html_enable_command] = STATE(114),
    [sym_scr_tts_command] = STATE(114),
    [sym_pipe_command] = STATE(114),
    [sym_iter_flags_command] = STATE(114),
    [sym_iter_dbta_command] = STATE(114),
    [sym_iter_dbtb_command] = STATE(114),
    [sym_iter_dbts_command] = STATE(114),
    [sym_iter_file_lines_command] = STATE(114),
    [sym_iter_offsets_command] = STATE(114),
    [sym_iter_sdbquery_command] = STATE(114),
    [sym_iter_threads_command] = STATE(114),
    [sym_iter_bbs_command] = STATE(114),
    [sym_iter_instrs_command] = STATE(114),
    [sym_iter_sections_command] = STATE(114),
    [sym_iter_functions_command] = STATE(114),
    [sym_iter_step_command] = STATE(114),
    [sym_iter_interpret_command] = STATE(114),
    [sym_tmp_seek_command] = STATE(114),
    [sym_tmp_blksz_command] = STATE(114),
    [sym_tmp_fromto_command] = STATE(114),
    [sym_tmp_arch_command] = STATE(114),
    [sym_tmp_bits_command] = STATE(114),
    [sym_tmp_nthi_command] = STATE(114),
    [sym_tmp_eval_command] = STATE(114),
    [sym_tmp_fs_command] = STATE(114),
    [sym_tmp_reli_command] = STATE(114),
    [sym_tmp_kuery_command] = STATE(114),
    [sym_tmp_fd_command] = STATE(114),
    [sym_tmp_reg_command] = STATE(114),
    [sym_tmp_file_command] = STATE(114),
    [sym_tmp_string_command] = STATE(114),
    [sym_tmp_hex_command] = STATE(114),
    [sym_arged_command] = STATE(114),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_help_command] = STATE(181),
    [sym_repeat_command] = STATE(114),
    [sym_out_redirect_command] = STATE(181),
    [sym_err_redirect_command] = STATE(181),
    [sym_html_redirect_command] = STATE(181),
    [sym_out_append_redirect_command] = STATE(181),
    [sym_err_append_redirect_command] = STATE(181),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [sym_interpreter_command] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(65),
  },
  [7] = {
    [sym__commands_singleline] = STATE(199),
    [sym__command] = STATE(175),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_html_disable_command] = STATE(111),
    [sym_html_enable_command] = STATE(111),
    [sym_scr_tts_command] = STATE(111),
    [sym_pipe_command] = STATE(111),
    [sym_iter_flags_command] = STATE(111),
    [sym_iter_dbta_command] = STATE(111),
    [sym_iter_dbtb_command] = STATE(111),
    [sym_iter_dbts_command] = STATE(111),
    [sym_iter_file_lines_command] = STATE(111),
    [sym_iter_offsets_command] = STATE(111),
    [sym_iter_sdbquery_command] = STATE(111),
    [sym_iter_threads_command] = STATE(111),
    [sym_iter_bbs_command] = STATE(111),
    [sym_iter_instrs_command] = STATE(111),
    [sym_iter_sections_command] = STATE(111),
    [sym_iter_functions_command] = STATE(111),
    [sym_iter_step_command] = STATE(111),
    [sym_iter_interpret_command] = STATE(111),
    [sym_tmp_seek_command] = STATE(111),
    [sym_tmp_blksz_command] = STATE(111),
    [sym_tmp_fromto_command] = STATE(111),
    [sym_tmp_arch_command] = STATE(111),
    [sym_tmp_bits_command] = STATE(111),
    [sym_tmp_nthi_command] = STATE(111),
    [sym_tmp_eval_command] = STATE(111),
    [sym_tmp_fs_command] = STATE(111),
    [sym_tmp_reli_command] = STATE(111),
    [sym_tmp_kuery_command] = STATE(111),
    [sym_tmp_fd_command] = STATE(111),
    [sym_tmp_reg_command] = STATE(111),
    [sym_tmp_file_command] = STATE(111),
    [sym_tmp_string_command] = STATE(111),
    [sym_tmp_hex_command] = STATE(111),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(175),
    [sym_repeat_command] = STATE(111),
    [sym_out_redirect_command] = STATE(175),
    [sym_err_redirect_command] = STATE(175),
    [sym_html_redirect_command] = STATE(175),
    [sym_out_append_redirect_command] = STATE(175),
    [sym_err_append_redirect_command] = STATE(175),
    [aux_sym__commands_singleline_repeat1] = STATE(10),
    [sym_interpreter_command] = ACTIONS(67),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [8] = {
    [sym__commands_singleline] = STATE(215),
    [sym__command] = STATE(181),
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_html_disable_command] = STATE(114),
    [sym_html_enable_command] = STATE(114),
    [sym_scr_tts_command] = STATE(114),
    [sym_pipe_command] = STATE(114),
    [sym_iter_flags_command] = STATE(114),
    [sym_iter_dbta_command] = STATE(114),
    [sym_iter_dbtb_command] = STATE(114),
    [sym_iter_dbts_command] = STATE(114),
    [sym_iter_file_lines_command] = STATE(114),
    [sym_iter_offsets_command] = STATE(114),
    [sym_iter_sdbquery_command] = STATE(114),
    [sym_iter_threads_command] = STATE(114),
    [sym_iter_bbs_command] = STATE(114),
    [sym_iter_instrs_command] = STATE(114),
    [sym_iter_sections_command] = STATE(114),
    [sym_iter_functions_command] = STATE(114),
    [sym_iter_step_command] = STATE(114),
    [sym_iter_interpret_command] = STATE(114),
    [sym_tmp_seek_command] = STATE(114),
    [sym_tmp_blksz_command] = STATE(114),
    [sym_tmp_fromto_command] = STATE(114),
    [sym_tmp_arch_command] = STATE(114),
    [sym_tmp_bits_command] = STATE(114),
    [sym_tmp_nthi_command] = STATE(114),
    [sym_tmp_eval_command] = STATE(114),
    [sym_tmp_fs_command] = STATE(114),
    [sym_tmp_reli_command] = STATE(114),
    [sym_tmp_kuery_command] = STATE(114),
    [sym_tmp_fd_command] = STATE(114),
    [sym_tmp_reg_command] = STATE(114),
    [sym_tmp_file_command] = STATE(114),
    [sym_tmp_string_command] = STATE(114),
    [sym_tmp_hex_command] = STATE(114),
    [sym_arged_command] = STATE(114),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_help_command] = STATE(181),
    [sym_repeat_command] = STATE(114),
    [sym_out_redirect_command] = STATE(181),
    [sym_err_redirect_command] = STATE(181),
    [sym_html_redirect_command] = STATE(181),
    [sym_out_append_redirect_command] = STATE(181),
    [sym_err_append_redirect_command] = STATE(181),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [sym_interpreter_command] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(61),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(65),
  },
  [9] = {
    [sym__commands_singleline] = STATE(213),
    [sym__command] = STATE(175),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_html_disable_command] = STATE(111),
    [sym_html_enable_command] = STATE(111),
    [sym_scr_tts_command] = STATE(111),
    [sym_pipe_command] = STATE(111),
    [sym_iter_flags_command] = STATE(111),
    [sym_iter_dbta_command] = STATE(111),
    [sym_iter_dbtb_command] = STATE(111),
    [sym_iter_dbts_command] = STATE(111),
    [sym_iter_file_lines_command] = STATE(111),
    [sym_iter_offsets_command] = STATE(111),
    [sym_iter_sdbquery_command] = STATE(111),
    [sym_iter_threads_command] = STATE(111),
    [sym_iter_bbs_command] = STATE(111),
    [sym_iter_instrs_command] = STATE(111),
    [sym_iter_sections_command] = STATE(111),
    [sym_iter_functions_command] = STATE(111),
    [sym_iter_step_command] = STATE(111),
    [sym_iter_interpret_command] = STATE(111),
    [sym_tmp_seek_command] = STATE(111),
    [sym_tmp_blksz_command] = STATE(111),
    [sym_tmp_fromto_command] = STATE(111),
    [sym_tmp_arch_command] = STATE(111),
    [sym_tmp_bits_command] = STATE(111),
    [sym_tmp_nthi_command] = STATE(111),
    [sym_tmp_eval_command] = STATE(111),
    [sym_tmp_fs_command] = STATE(111),
    [sym_tmp_reli_command] = STATE(111),
    [sym_tmp_kuery_command] = STATE(111),
    [sym_tmp_fd_command] = STATE(111),
    [sym_tmp_reg_command] = STATE(111),
    [sym_tmp_file_command] = STATE(111),
    [sym_tmp_string_command] = STATE(111),
    [sym_tmp_hex_command] = STATE(111),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(175),
    [sym_repeat_command] = STATE(111),
    [sym_out_redirect_command] = STATE(175),
    [sym_err_redirect_command] = STATE(175),
    [sym_html_redirect_command] = STATE(175),
    [sym_out_append_redirect_command] = STATE(175),
    [sym_err_append_redirect_command] = STATE(175),
    [aux_sym__commands_singleline_repeat1] = STATE(10),
    [sym_interpreter_command] = ACTIONS(67),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [10] = {
    [sym__command] = STATE(185),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_html_disable_command] = STATE(111),
    [sym_html_enable_command] = STATE(111),
    [sym_scr_tts_command] = STATE(111),
    [sym_pipe_command] = STATE(111),
    [sym_iter_flags_command] = STATE(111),
    [sym_iter_dbta_command] = STATE(111),
    [sym_iter_dbtb_command] = STATE(111),
    [sym_iter_dbts_command] = STATE(111),
    [sym_iter_file_lines_command] = STATE(111),
    [sym_iter_offsets_command] = STATE(111),
    [sym_iter_sdbquery_command] = STATE(111),
    [sym_iter_threads_command] = STATE(111),
    [sym_iter_bbs_command] = STATE(111),
    [sym_iter_instrs_command] = STATE(111),
    [sym_iter_sections_command] = STATE(111),
    [sym_iter_functions_command] = STATE(111),
    [sym_iter_step_command] = STATE(111),
    [sym_iter_interpret_command] = STATE(111),
    [sym_tmp_seek_command] = STATE(111),
    [sym_tmp_blksz_command] = STATE(111),
    [sym_tmp_fromto_command] = STATE(111),
    [sym_tmp_arch_command] = STATE(111),
    [sym_tmp_bits_command] = STATE(111),
    [sym_tmp_nthi_command] = STATE(111),
    [sym_tmp_eval_command] = STATE(111),
    [sym_tmp_fs_command] = STATE(111),
    [sym_tmp_reli_command] = STATE(111),
    [sym_tmp_kuery_command] = STATE(111),
    [sym_tmp_fd_command] = STATE(111),
    [sym_tmp_reg_command] = STATE(111),
    [sym_tmp_file_command] = STATE(111),
    [sym_tmp_string_command] = STATE(111),
    [sym_tmp_hex_command] = STATE(111),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(185),
    [sym_repeat_command] = STATE(111),
    [sym_out_redirect_command] = STATE(185),
    [sym_err_redirect_command] = STATE(185),
    [sym_html_redirect_command] = STATE(185),
    [sym_out_append_redirect_command] = STATE(185),
    [sym_err_append_redirect_command] = STATE(185),
    [aux_sym__commands_singleline_repeat1] = STATE(117),
    [sym_interpreter_command] = ACTIONS(77),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [11] = {
    [sym__command] = STATE(184),
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_html_disable_command] = STATE(114),
    [sym_html_enable_command] = STATE(114),
    [sym_scr_tts_command] = STATE(114),
    [sym_pipe_command] = STATE(114),
    [sym_iter_flags_command] = STATE(114),
    [sym_iter_dbta_command] = STATE(114),
    [sym_iter_dbtb_command] = STATE(114),
    [sym_iter_dbts_command] = STATE(114),
    [sym_iter_file_lines_command] = STATE(114),
    [sym_iter_offsets_command] = STATE(114),
    [sym_iter_sdbquery_command] = STATE(114),
    [sym_iter_threads_command] = STATE(114),
    [sym_iter_bbs_command] = STATE(114),
    [sym_iter_instrs_command] = STATE(114),
    [sym_iter_sections_command] = STATE(114),
    [sym_iter_functions_command] = STATE(114),
    [sym_iter_step_command] = STATE(114),
    [sym_iter_interpret_command] = STATE(114),
    [sym_tmp_seek_command] = STATE(114),
    [sym_tmp_blksz_command] = STATE(114),
    [sym_tmp_fromto_command] = STATE(114),
    [sym_tmp_arch_command] = STATE(114),
    [sym_tmp_bits_command] = STATE(114),
    [sym_tmp_nthi_command] = STATE(114),
    [sym_tmp_eval_command] = STATE(114),
    [sym_tmp_fs_command] = STATE(114),
    [sym_tmp_reli_command] = STATE(114),
    [sym_tmp_kuery_command] = STATE(114),
    [sym_tmp_fd_command] = STATE(114),
    [sym_tmp_reg_command] = STATE(114),
    [sym_tmp_file_command] = STATE(114),
    [sym_tmp_string_command] = STATE(114),
    [sym_tmp_hex_command] = STATE(114),
    [sym_arged_command] = STATE(114),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_help_command] = STATE(184),
    [sym_repeat_command] = STATE(114),
    [sym_out_redirect_command] = STATE(184),
    [sym_err_redirect_command] = STATE(184),
    [sym_html_redirect_command] = STATE(184),
    [sym_out_append_redirect_command] = STATE(184),
    [sym_err_append_redirect_command] = STATE(184),
    [sym_interpreter_command] = ACTIONS(81),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(65),
  },
  [12] = {
    [sym__command] = STATE(179),
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_html_disable_command] = STATE(114),
    [sym_html_enable_command] = STATE(114),
    [sym_scr_tts_command] = STATE(114),
    [sym_pipe_command] = STATE(114),
    [sym_iter_flags_command] = STATE(114),
    [sym_iter_dbta_command] = STATE(114),
    [sym_iter_dbtb_command] = STATE(114),
    [sym_iter_dbts_command] = STATE(114),
    [sym_iter_file_lines_command] = STATE(114),
    [sym_iter_offsets_command] = STATE(114),
    [sym_iter_sdbquery_command] = STATE(114),
    [sym_iter_threads_command] = STATE(114),
    [sym_iter_bbs_command] = STATE(114),
    [sym_iter_instrs_command] = STATE(114),
    [sym_iter_sections_command] = STATE(114),
    [sym_iter_functions_command] = STATE(114),
    [sym_iter_step_command] = STATE(114),
    [sym_iter_interpret_command] = STATE(114),
    [sym_tmp_seek_command] = STATE(114),
    [sym_tmp_blksz_command] = STATE(114),
    [sym_tmp_fromto_command] = STATE(114),
    [sym_tmp_arch_command] = STATE(114),
    [sym_tmp_bits_command] = STATE(114),
    [sym_tmp_nthi_command] = STATE(114),
    [sym_tmp_eval_command] = STATE(114),
    [sym_tmp_fs_command] = STATE(114),
    [sym_tmp_reli_command] = STATE(114),
    [sym_tmp_kuery_command] = STATE(114),
    [sym_tmp_fd_command] = STATE(114),
    [sym_tmp_reg_command] = STATE(114),
    [sym_tmp_file_command] = STATE(114),
    [sym_tmp_string_command] = STATE(114),
    [sym_tmp_hex_command] = STATE(114),
    [sym_arged_command] = STATE(114),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_help_command] = STATE(179),
    [sym_repeat_command] = STATE(114),
    [sym_out_redirect_command] = STATE(179),
    [sym_err_redirect_command] = STATE(179),
    [sym_html_redirect_command] = STATE(179),
    [sym_out_append_redirect_command] = STATE(179),
    [sym_err_append_redirect_command] = STATE(179),
    [aux_sym__commands_singleline_repeat1] = STATE(117),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(65),
  },
  [13] = {
    [sym__command] = STATE(184),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_html_disable_command] = STATE(111),
    [sym_html_enable_command] = STATE(111),
    [sym_scr_tts_command] = STATE(111),
    [sym_pipe_command] = STATE(111),
    [sym_iter_flags_command] = STATE(111),
    [sym_iter_dbta_command] = STATE(111),
    [sym_iter_dbtb_command] = STATE(111),
    [sym_iter_dbts_command] = STATE(111),
    [sym_iter_file_lines_command] = STATE(111),
    [sym_iter_offsets_command] = STATE(111),
    [sym_iter_sdbquery_command] = STATE(111),
    [sym_iter_threads_command] = STATE(111),
    [sym_iter_bbs_command] = STATE(111),
    [sym_iter_instrs_command] = STATE(111),
    [sym_iter_sections_command] = STATE(111),
    [sym_iter_functions_command] = STATE(111),
    [sym_iter_step_command] = STATE(111),
    [sym_iter_interpret_command] = STATE(111),
    [sym_tmp_seek_command] = STATE(111),
    [sym_tmp_blksz_command] = STATE(111),
    [sym_tmp_fromto_command] = STATE(111),
    [sym_tmp_arch_command] = STATE(111),
    [sym_tmp_bits_command] = STATE(111),
    [sym_tmp_nthi_command] = STATE(111),
    [sym_tmp_eval_command] = STATE(111),
    [sym_tmp_fs_command] = STATE(111),
    [sym_tmp_reli_command] = STATE(111),
    [sym_tmp_kuery_command] = STATE(111),
    [sym_tmp_fd_command] = STATE(111),
    [sym_tmp_reg_command] = STATE(111),
    [sym_tmp_file_command] = STATE(111),
    [sym_tmp_string_command] = STATE(111),
    [sym_tmp_hex_command] = STATE(111),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_help_command] = STATE(184),
    [sym_repeat_command] = STATE(111),
    [sym_out_redirect_command] = STATE(184),
    [sym_err_redirect_command] = STATE(184),
    [sym_html_redirect_command] = STATE(184),
    [sym_out_append_redirect_command] = STATE(184),
    [sym_err_append_redirect_command] = STATE(184),
    [sym_interpreter_command] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym__question_mark_identifier] = ACTIONS(39),
  },
  [14] = {
    [sym__simple_command] = STATE(49),
    [sym__tmp_command] = STATE(49),
    [sym__iter_command] = STATE(49),
    [sym__pipe_command] = STATE(49),
    [sym_html_disable_command] = STATE(49),
    [sym_html_enable_command] = STATE(49),
    [sym_scr_tts_command] = STATE(49),
    [sym_pipe_command] = STATE(49),
    [sym_iter_flags_command] = STATE(49),
    [sym_iter_dbta_command] = STATE(49),
    [sym_iter_dbtb_command] = STATE(49),
    [sym_iter_dbts_command] = STATE(49),
    [sym_iter_file_lines_command] = STATE(49),
    [sym_iter_offsets_command] = STATE(49),
    [sym_iter_sdbquery_command] = STATE(49),
    [sym_iter_threads_command] = STATE(49),
    [sym_iter_bbs_command] = STATE(49),
    [sym_iter_instrs_command] = STATE(49),
    [sym_iter_sections_command] = STATE(49),
    [sym_iter_functions_command] = STATE(49),
    [sym_iter_step_command] = STATE(49),
    [sym_iter_interpret_command] = STATE(49),
    [sym_tmp_seek_command] = STATE(49),
    [sym_tmp_blksz_command] = STATE(49),
    [sym_tmp_fromto_command] = STATE(49),
    [sym_tmp_arch_command] = STATE(49),
    [sym_tmp_bits_command] = STATE(49),
    [sym_tmp_nthi_command] = STATE(49),
    [sym_tmp_eval_command] = STATE(49),
    [sym_tmp_fs_command] = STATE(49),
    [sym_tmp_reli_command] = STATE(49),
    [sym_tmp_kuery_command] = STATE(49),
    [sym_tmp_fd_command] = STATE(49),
    [sym_tmp_reg_command] = STATE(49),
    [sym_tmp_file_command] = STATE(49),
    [sym_tmp_string_command] = STATE(49),
    [sym_tmp_hex_command] = STATE(49),
    [sym_arged_command] = STATE(49),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(14),
    [sym_question_mark_identifier] = STATE(127),
    [sym_repeat_command] = STATE(49),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [15] = {
    [sym__simple_command] = STATE(113),
    [sym__tmp_command] = STATE(113),
    [sym__iter_command] = STATE(113),
    [sym__pipe_command] = STATE(113),
    [sym_html_disable_command] = STATE(113),
    [sym_html_enable_command] = STATE(113),
    [sym_scr_tts_command] = STATE(113),
    [sym_pipe_command] = STATE(113),
    [sym_iter_flags_command] = STATE(113),
    [sym_iter_dbta_command] = STATE(113),
    [sym_iter_dbtb_command] = STATE(113),
    [sym_iter_dbts_command] = STATE(113),
    [sym_iter_file_lines_command] = STATE(113),
    [sym_iter_offsets_command] = STATE(113),
    [sym_iter_sdbquery_command] = STATE(113),
    [sym_iter_threads_command] = STATE(113),
    [sym_iter_bbs_command] = STATE(113),
    [sym_iter_instrs_command] = STATE(113),
    [sym_iter_sections_command] = STATE(113),
    [sym_iter_functions_command] = STATE(113),
    [sym_iter_step_command] = STATE(113),
    [sym_iter_interpret_command] = STATE(113),
    [sym_tmp_seek_command] = STATE(113),
    [sym_tmp_blksz_command] = STATE(113),
    [sym_tmp_fromto_command] = STATE(113),
    [sym_tmp_arch_command] = STATE(113),
    [sym_tmp_bits_command] = STATE(113),
    [sym_tmp_nthi_command] = STATE(113),
    [sym_tmp_eval_command] = STATE(113),
    [sym_tmp_fs_command] = STATE(113),
    [sym_tmp_reli_command] = STATE(113),
    [sym_tmp_kuery_command] = STATE(113),
    [sym_tmp_fd_command] = STATE(113),
    [sym_tmp_reg_command] = STATE(113),
    [sym_tmp_file_command] = STATE(113),
    [sym_tmp_string_command] = STATE(113),
    [sym_tmp_hex_command] = STATE(113),
    [sym_arged_command] = STATE(113),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_repeat_command] = STATE(113),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [16] = {
    [sym__simple_command] = STATE(49),
    [sym__tmp_command] = STATE(49),
    [sym__iter_command] = STATE(49),
    [sym__pipe_command] = STATE(49),
    [sym_html_disable_command] = STATE(49),
    [sym_html_enable_command] = STATE(49),
    [sym_scr_tts_command] = STATE(49),
    [sym_pipe_command] = STATE(49),
    [sym_iter_flags_command] = STATE(49),
    [sym_iter_dbta_command] = STATE(49),
    [sym_iter_dbtb_command] = STATE(49),
    [sym_iter_dbts_command] = STATE(49),
    [sym_iter_file_lines_command] = STATE(49),
    [sym_iter_offsets_command] = STATE(49),
    [sym_iter_sdbquery_command] = STATE(49),
    [sym_iter_threads_command] = STATE(49),
    [sym_iter_bbs_command] = STATE(49),
    [sym_iter_instrs_command] = STATE(49),
    [sym_iter_sections_command] = STATE(49),
    [sym_iter_functions_command] = STATE(49),
    [sym_iter_step_command] = STATE(49),
    [sym_iter_interpret_command] = STATE(49),
    [sym_tmp_seek_command] = STATE(49),
    [sym_tmp_blksz_command] = STATE(49),
    [sym_tmp_fromto_command] = STATE(49),
    [sym_tmp_arch_command] = STATE(49),
    [sym_tmp_bits_command] = STATE(49),
    [sym_tmp_nthi_command] = STATE(49),
    [sym_tmp_eval_command] = STATE(49),
    [sym_tmp_fs_command] = STATE(49),
    [sym_tmp_reli_command] = STATE(49),
    [sym_tmp_kuery_command] = STATE(49),
    [sym_tmp_fd_command] = STATE(49),
    [sym_tmp_reg_command] = STATE(49),
    [sym_tmp_file_command] = STATE(49),
    [sym_tmp_string_command] = STATE(49),
    [sym_tmp_hex_command] = STATE(49),
    [sym_arged_command] = STATE(49),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_repeat_command] = STATE(49),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [17] = {
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_html_disable_command] = STATE(105),
    [sym_html_enable_command] = STATE(105),
    [sym_scr_tts_command] = STATE(105),
    [sym_pipe_command] = STATE(105),
    [sym_iter_flags_command] = STATE(105),
    [sym_iter_dbta_command] = STATE(105),
    [sym_iter_dbtb_command] = STATE(105),
    [sym_iter_dbts_command] = STATE(105),
    [sym_iter_file_lines_command] = STATE(105),
    [sym_iter_offsets_command] = STATE(105),
    [sym_iter_sdbquery_command] = STATE(105),
    [sym_iter_threads_command] = STATE(105),
    [sym_iter_bbs_command] = STATE(105),
    [sym_iter_instrs_command] = STATE(105),
    [sym_iter_sections_command] = STATE(105),
    [sym_iter_functions_command] = STATE(105),
    [sym_iter_step_command] = STATE(105),
    [sym_iter_interpret_command] = STATE(105),
    [sym_tmp_seek_command] = STATE(105),
    [sym_tmp_blksz_command] = STATE(105),
    [sym_tmp_fromto_command] = STATE(105),
    [sym_tmp_arch_command] = STATE(105),
    [sym_tmp_bits_command] = STATE(105),
    [sym_tmp_nthi_command] = STATE(105),
    [sym_tmp_eval_command] = STATE(105),
    [sym_tmp_fs_command] = STATE(105),
    [sym_tmp_reli_command] = STATE(105),
    [sym_tmp_kuery_command] = STATE(105),
    [sym_tmp_fd_command] = STATE(105),
    [sym_tmp_reg_command] = STATE(105),
    [sym_tmp_file_command] = STATE(105),
    [sym_tmp_string_command] = STATE(105),
    [sym_tmp_hex_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(14),
    [sym_question_mark_identifier] = STATE(127),
    [sym_repeat_command] = STATE(105),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [18] = {
    [sym__simple_command] = STATE(115),
    [sym__tmp_command] = STATE(115),
    [sym__iter_command] = STATE(115),
    [sym__pipe_command] = STATE(115),
    [sym_html_disable_command] = STATE(115),
    [sym_html_enable_command] = STATE(115),
    [sym_scr_tts_command] = STATE(115),
    [sym_pipe_command] = STATE(115),
    [sym_iter_flags_command] = STATE(115),
    [sym_iter_dbta_command] = STATE(115),
    [sym_iter_dbtb_command] = STATE(115),
    [sym_iter_dbts_command] = STATE(115),
    [sym_iter_file_lines_command] = STATE(115),
    [sym_iter_offsets_command] = STATE(115),
    [sym_iter_sdbquery_command] = STATE(115),
    [sym_iter_threads_command] = STATE(115),
    [sym_iter_bbs_command] = STATE(115),
    [sym_iter_instrs_command] = STATE(115),
    [sym_iter_sections_command] = STATE(115),
    [sym_iter_functions_command] = STATE(115),
    [sym_iter_step_command] = STATE(115),
    [sym_iter_interpret_command] = STATE(115),
    [sym_tmp_seek_command] = STATE(115),
    [sym_tmp_blksz_command] = STATE(115),
    [sym_tmp_fromto_command] = STATE(115),
    [sym_tmp_arch_command] = STATE(115),
    [sym_tmp_bits_command] = STATE(115),
    [sym_tmp_nthi_command] = STATE(115),
    [sym_tmp_eval_command] = STATE(115),
    [sym_tmp_fs_command] = STATE(115),
    [sym_tmp_reli_command] = STATE(115),
    [sym_tmp_kuery_command] = STATE(115),
    [sym_tmp_fd_command] = STATE(115),
    [sym_tmp_reg_command] = STATE(115),
    [sym_tmp_file_command] = STATE(115),
    [sym_tmp_string_command] = STATE(115),
    [sym_tmp_hex_command] = STATE(115),
    [sym_arged_command] = STATE(115),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_repeat_command] = STATE(115),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [19] = {
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_html_disable_command] = STATE(109),
    [sym_html_enable_command] = STATE(109),
    [sym_scr_tts_command] = STATE(109),
    [sym_pipe_command] = STATE(109),
    [sym_iter_flags_command] = STATE(109),
    [sym_iter_dbta_command] = STATE(109),
    [sym_iter_dbtb_command] = STATE(109),
    [sym_iter_dbts_command] = STATE(109),
    [sym_iter_file_lines_command] = STATE(109),
    [sym_iter_offsets_command] = STATE(109),
    [sym_iter_sdbquery_command] = STATE(109),
    [sym_iter_threads_command] = STATE(109),
    [sym_iter_bbs_command] = STATE(109),
    [sym_iter_instrs_command] = STATE(109),
    [sym_iter_sections_command] = STATE(109),
    [sym_iter_functions_command] = STATE(109),
    [sym_iter_step_command] = STATE(109),
    [sym_iter_interpret_command] = STATE(109),
    [sym_tmp_seek_command] = STATE(109),
    [sym_tmp_blksz_command] = STATE(109),
    [sym_tmp_fromto_command] = STATE(109),
    [sym_tmp_arch_command] = STATE(109),
    [sym_tmp_bits_command] = STATE(109),
    [sym_tmp_nthi_command] = STATE(109),
    [sym_tmp_eval_command] = STATE(109),
    [sym_tmp_fs_command] = STATE(109),
    [sym_tmp_reli_command] = STATE(109),
    [sym_tmp_kuery_command] = STATE(109),
    [sym_tmp_fd_command] = STATE(109),
    [sym_tmp_reg_command] = STATE(109),
    [sym_tmp_file_command] = STATE(109),
    [sym_tmp_string_command] = STATE(109),
    [sym_tmp_hex_command] = STATE(109),
    [sym_arged_command] = STATE(109),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(14),
    [sym_question_mark_identifier] = STATE(127),
    [sym_repeat_command] = STATE(109),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [20] = {
    [sym__simple_command] = STATE(110),
    [sym__tmp_command] = STATE(110),
    [sym__iter_command] = STATE(110),
    [sym__pipe_command] = STATE(110),
    [sym_html_disable_command] = STATE(110),
    [sym_html_enable_command] = STATE(110),
    [sym_scr_tts_command] = STATE(110),
    [sym_pipe_command] = STATE(110),
    [sym_iter_flags_command] = STATE(110),
    [sym_iter_dbta_command] = STATE(110),
    [sym_iter_dbtb_command] = STATE(110),
    [sym_iter_dbts_command] = STATE(110),
    [sym_iter_file_lines_command] = STATE(110),
    [sym_iter_offsets_command] = STATE(110),
    [sym_iter_sdbquery_command] = STATE(110),
    [sym_iter_threads_command] = STATE(110),
    [sym_iter_bbs_command] = STATE(110),
    [sym_iter_instrs_command] = STATE(110),
    [sym_iter_sections_command] = STATE(110),
    [sym_iter_functions_command] = STATE(110),
    [sym_iter_step_command] = STATE(110),
    [sym_iter_interpret_command] = STATE(110),
    [sym_tmp_seek_command] = STATE(110),
    [sym_tmp_blksz_command] = STATE(110),
    [sym_tmp_fromto_command] = STATE(110),
    [sym_tmp_arch_command] = STATE(110),
    [sym_tmp_bits_command] = STATE(110),
    [sym_tmp_nthi_command] = STATE(110),
    [sym_tmp_eval_command] = STATE(110),
    [sym_tmp_fs_command] = STATE(110),
    [sym_tmp_reli_command] = STATE(110),
    [sym_tmp_kuery_command] = STATE(110),
    [sym_tmp_fd_command] = STATE(110),
    [sym_tmp_reg_command] = STATE(110),
    [sym_tmp_file_command] = STATE(110),
    [sym_tmp_string_command] = STATE(110),
    [sym_tmp_hex_command] = STATE(110),
    [sym_arged_command] = STATE(110),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_repeat_command] = STATE(110),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [21] = {
    [sym__simple_command] = STATE(49),
    [sym__tmp_command] = STATE(49),
    [sym__iter_command] = STATE(49),
    [sym__pipe_command] = STATE(49),
    [sym_html_disable_command] = STATE(49),
    [sym_html_enable_command] = STATE(49),
    [sym_scr_tts_command] = STATE(49),
    [sym_pipe_command] = STATE(49),
    [sym_iter_flags_command] = STATE(49),
    [sym_iter_dbta_command] = STATE(49),
    [sym_iter_dbtb_command] = STATE(49),
    [sym_iter_dbts_command] = STATE(49),
    [sym_iter_file_lines_command] = STATE(49),
    [sym_iter_offsets_command] = STATE(49),
    [sym_iter_sdbquery_command] = STATE(49),
    [sym_iter_threads_command] = STATE(49),
    [sym_iter_bbs_command] = STATE(49),
    [sym_iter_instrs_command] = STATE(49),
    [sym_iter_sections_command] = STATE(49),
    [sym_iter_functions_command] = STATE(49),
    [sym_iter_step_command] = STATE(49),
    [sym_iter_interpret_command] = STATE(49),
    [sym_tmp_seek_command] = STATE(49),
    [sym_tmp_blksz_command] = STATE(49),
    [sym_tmp_fromto_command] = STATE(49),
    [sym_tmp_arch_command] = STATE(49),
    [sym_tmp_bits_command] = STATE(49),
    [sym_tmp_nthi_command] = STATE(49),
    [sym_tmp_eval_command] = STATE(49),
    [sym_tmp_fs_command] = STATE(49),
    [sym_tmp_reli_command] = STATE(49),
    [sym_tmp_kuery_command] = STATE(49),
    [sym_tmp_fd_command] = STATE(49),
    [sym_tmp_reg_command] = STATE(49),
    [sym_tmp_file_command] = STATE(49),
    [sym_tmp_string_command] = STATE(49),
    [sym_tmp_hex_command] = STATE(49),
    [sym_arged_command] = STATE(49),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(21),
    [sym_question_mark_identifier] = STATE(127),
    [sym_repeat_command] = STATE(49),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(71),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(73),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [22] = {
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_html_disable_command] = STATE(112),
    [sym_html_enable_command] = STATE(112),
    [sym_scr_tts_command] = STATE(112),
    [sym_pipe_command] = STATE(112),
    [sym_iter_flags_command] = STATE(112),
    [sym_iter_dbta_command] = STATE(112),
    [sym_iter_dbtb_command] = STATE(112),
    [sym_iter_dbts_command] = STATE(112),
    [sym_iter_file_lines_command] = STATE(112),
    [sym_iter_offsets_command] = STATE(112),
    [sym_iter_sdbquery_command] = STATE(112),
    [sym_iter_threads_command] = STATE(112),
    [sym_iter_bbs_command] = STATE(112),
    [sym_iter_instrs_command] = STATE(112),
    [sym_iter_sections_command] = STATE(112),
    [sym_iter_functions_command] = STATE(112),
    [sym_iter_step_command] = STATE(112),
    [sym_iter_interpret_command] = STATE(112),
    [sym_tmp_seek_command] = STATE(112),
    [sym_tmp_blksz_command] = STATE(112),
    [sym_tmp_fromto_command] = STATE(112),
    [sym_tmp_arch_command] = STATE(112),
    [sym_tmp_bits_command] = STATE(112),
    [sym_tmp_nthi_command] = STATE(112),
    [sym_tmp_eval_command] = STATE(112),
    [sym_tmp_fs_command] = STATE(112),
    [sym_tmp_reli_command] = STATE(112),
    [sym_tmp_kuery_command] = STATE(112),
    [sym_tmp_fd_command] = STATE(112),
    [sym_tmp_reg_command] = STATE(112),
    [sym_tmp_file_command] = STATE(112),
    [sym_tmp_string_command] = STATE(112),
    [sym_tmp_hex_command] = STATE(112),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(80),
    [sym__math_arged_command] = STATE(80),
    [sym__pointer_arged_command] = STATE(80),
    [sym__macro_arged_command] = STATE(80),
    [sym__system_command] = STATE(80),
    [sym__interpret_command] = STATE(80),
    [sym__env_command] = STATE(80),
    [sym__last_command] = STATE(80),
    [sym_interpret_identifier] = STATE(16),
    [sym_question_mark_identifier] = STATE(124),
    [sym_repeat_command] = STATE(112),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(53),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(27),
    [sym_macro_identifier] = ACTIONS(29),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(63),
    [sym__question_mark_identifier] = ACTIONS(87),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_PIPET] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(91),
    [anon_sym_AT_ATdbt] = ACTIONS(91),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(91),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(91),
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
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_DOT_BANG] = ACTIONS(93),
    [anon_sym_DOT_LPAREN] = ACTIONS(93),
    [anon_sym_DOT_SLASH] = ACTIONS(93),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(89),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(95),
    [aux_sym_interpret_identifier_token1] = ACTIONS(93),
    [sym__point_interpret_identifier] = ACTIONS(95),
    [sym_system_identifier] = ACTIONS(93),
    [sym_pointer_identifier] = ACTIONS(93),
    [sym_macro_identifier] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_1_GT] = ACTIONS(91),
    [anon_sym_2_GT] = ACTIONS(91),
    [anon_sym_H_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_1_GT_GT] = ACTIONS(89),
    [anon_sym_2_GT_GT] = ACTIONS(89),
    [sym_number] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_CR] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(93),
    [sym__question_mark_identifier] = ACTIONS(93),
  },
  [24] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_PIPET] = ACTIONS(99),
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
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_1_GT] = ACTIONS(99),
    [anon_sym_2_GT] = ACTIONS(99),
    [anon_sym_H_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_1_GT_GT] = ACTIONS(99),
    [anon_sym_2_GT_GT] = ACTIONS(99),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_CR] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
  },
  [25] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPEH] = ACTIONS(113),
    [anon_sym_PIPET] = ACTIONS(113),
    [anon_sym_AT_AT] = ACTIONS(113),
    [anon_sym_AT_ATdbt] = ACTIONS(113),
    [anon_sym_AT_ATdbta] = ACTIONS(113),
    [anon_sym_AT_ATdbtb] = ACTIONS(113),
    [anon_sym_AT_ATdbts] = ACTIONS(113),
    [anon_sym_AT_AT_DOT] = ACTIONS(113),
    [anon_sym_AT_AT_EQ] = ACTIONS(113),
    [anon_sym_AT_ATk] = ACTIONS(113),
    [anon_sym_AT_ATt] = ACTIONS(113),
    [anon_sym_AT_ATb] = ACTIONS(113),
    [anon_sym_AT_ATi] = ACTIONS(113),
    [anon_sym_AT_ATiS] = ACTIONS(113),
    [anon_sym_AT_ATf] = ACTIONS(113),
    [anon_sym_AT_ATs_COLON] = ACTIONS(113),
    [anon_sym_AT_ATc_COLON] = ACTIONS(113),
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
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_1_GT] = ACTIONS(113),
    [anon_sym_2_GT] = ACTIONS(113),
    [anon_sym_H_GT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_1_GT_GT] = ACTIONS(113),
    [anon_sym_2_GT_GT] = ACTIONS(113),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_CR] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
  },
  [26] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_PIPEH] = ACTIONS(117),
    [anon_sym_PIPET] = ACTIONS(117),
    [anon_sym_AT_AT] = ACTIONS(117),
    [anon_sym_AT_ATdbt] = ACTIONS(117),
    [anon_sym_AT_ATdbta] = ACTIONS(117),
    [anon_sym_AT_ATdbtb] = ACTIONS(117),
    [anon_sym_AT_ATdbts] = ACTIONS(117),
    [anon_sym_AT_AT_DOT] = ACTIONS(117),
    [anon_sym_AT_AT_EQ] = ACTIONS(117),
    [anon_sym_AT_ATk] = ACTIONS(117),
    [anon_sym_AT_ATt] = ACTIONS(117),
    [anon_sym_AT_ATb] = ACTIONS(117),
    [anon_sym_AT_ATi] = ACTIONS(117),
    [anon_sym_AT_ATiS] = ACTIONS(117),
    [anon_sym_AT_ATf] = ACTIONS(117),
    [anon_sym_AT_ATs_COLON] = ACTIONS(117),
    [anon_sym_AT_ATc_COLON] = ACTIONS(117),
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
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_1_GT] = ACTIONS(117),
    [anon_sym_2_GT] = ACTIONS(117),
    [anon_sym_H_GT] = ACTIONS(117),
    [anon_sym_GT_GT] = ACTIONS(117),
    [anon_sym_1_GT_GT] = ACTIONS(117),
    [anon_sym_2_GT_GT] = ACTIONS(117),
    [aux_sym_arg_identifier_token1] = ACTIONS(119),
    [aux_sym_arg_identifier_token2] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_CR] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
  },
  [27] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_PIPEH] = ACTIONS(136),
    [anon_sym_PIPET] = ACTIONS(136),
    [anon_sym_AT_AT] = ACTIONS(136),
    [anon_sym_AT_ATdbt] = ACTIONS(136),
    [anon_sym_AT_ATdbta] = ACTIONS(136),
    [anon_sym_AT_ATdbtb] = ACTIONS(136),
    [anon_sym_AT_ATdbts] = ACTIONS(136),
    [anon_sym_AT_AT_DOT] = ACTIONS(136),
    [anon_sym_AT_AT_EQ] = ACTIONS(136),
    [anon_sym_AT_ATk] = ACTIONS(136),
    [anon_sym_AT_ATt] = ACTIONS(136),
    [anon_sym_AT_ATb] = ACTIONS(136),
    [anon_sym_AT_ATi] = ACTIONS(136),
    [anon_sym_AT_ATiS] = ACTIONS(136),
    [anon_sym_AT_ATf] = ACTIONS(136),
    [anon_sym_AT_ATs_COLON] = ACTIONS(136),
    [anon_sym_AT_ATc_COLON] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_AT_BANG] = ACTIONS(136),
    [anon_sym_AT_LPAREN] = ACTIONS(136),
    [anon_sym_ATa_COLON] = ACTIONS(136),
    [anon_sym_ATb_COLON] = ACTIONS(136),
    [anon_sym_ATB_COLON] = ACTIONS(136),
    [anon_sym_ATe_COLON] = ACTIONS(136),
    [anon_sym_ATF_COLON] = ACTIONS(136),
    [anon_sym_ATi_COLON] = ACTIONS(136),
    [anon_sym_ATk_COLON] = ACTIONS(136),
    [anon_sym_ATo_COLON] = ACTIONS(136),
    [anon_sym_ATr_COLON] = ACTIONS(136),
    [anon_sym_ATf_COLON] = ACTIONS(136),
    [anon_sym_ATs_COLON] = ACTIONS(136),
    [anon_sym_ATx_COLON] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_1_GT] = ACTIONS(136),
    [anon_sym_2_GT] = ACTIONS(136),
    [anon_sym_H_GT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_1_GT_GT] = ACTIONS(136),
    [anon_sym_2_GT_GT] = ACTIONS(136),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(136),
    [anon_sym_CR] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
  },
  [28] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_AT_BANG] = ACTIONS(140),
    [anon_sym_AT_LPAREN] = ACTIONS(140),
    [anon_sym_ATa_COLON] = ACTIONS(140),
    [anon_sym_ATb_COLON] = ACTIONS(140),
    [anon_sym_ATB_COLON] = ACTIONS(140),
    [anon_sym_ATe_COLON] = ACTIONS(140),
    [anon_sym_ATF_COLON] = ACTIONS(140),
    [anon_sym_ATi_COLON] = ACTIONS(140),
    [anon_sym_ATk_COLON] = ACTIONS(140),
    [anon_sym_ATo_COLON] = ACTIONS(140),
    [anon_sym_ATr_COLON] = ACTIONS(140),
    [anon_sym_ATf_COLON] = ACTIONS(140),
    [anon_sym_ATs_COLON] = ACTIONS(140),
    [anon_sym_ATx_COLON] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_1_GT] = ACTIONS(140),
    [anon_sym_2_GT] = ACTIONS(140),
    [anon_sym_H_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_1_GT_GT] = ACTIONS(140),
    [anon_sym_2_GT_GT] = ACTIONS(140),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [29] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_PIPEH] = ACTIONS(144),
    [anon_sym_PIPET] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(144),
    [anon_sym_AT_ATdbt] = ACTIONS(144),
    [anon_sym_AT_ATdbta] = ACTIONS(144),
    [anon_sym_AT_ATdbtb] = ACTIONS(144),
    [anon_sym_AT_ATdbts] = ACTIONS(144),
    [anon_sym_AT_AT_DOT] = ACTIONS(144),
    [anon_sym_AT_AT_EQ] = ACTIONS(144),
    [anon_sym_AT_ATk] = ACTIONS(144),
    [anon_sym_AT_ATt] = ACTIONS(144),
    [anon_sym_AT_ATb] = ACTIONS(144),
    [anon_sym_AT_ATi] = ACTIONS(144),
    [anon_sym_AT_ATiS] = ACTIONS(144),
    [anon_sym_AT_ATf] = ACTIONS(144),
    [anon_sym_AT_ATs_COLON] = ACTIONS(144),
    [anon_sym_AT_ATc_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_BANG] = ACTIONS(144),
    [anon_sym_AT_LPAREN] = ACTIONS(144),
    [anon_sym_ATa_COLON] = ACTIONS(144),
    [anon_sym_ATb_COLON] = ACTIONS(144),
    [anon_sym_ATB_COLON] = ACTIONS(144),
    [anon_sym_ATe_COLON] = ACTIONS(144),
    [anon_sym_ATF_COLON] = ACTIONS(144),
    [anon_sym_ATi_COLON] = ACTIONS(144),
    [anon_sym_ATk_COLON] = ACTIONS(144),
    [anon_sym_ATo_COLON] = ACTIONS(144),
    [anon_sym_ATr_COLON] = ACTIONS(144),
    [anon_sym_ATf_COLON] = ACTIONS(144),
    [anon_sym_ATs_COLON] = ACTIONS(144),
    [anon_sym_ATx_COLON] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_1_GT] = ACTIONS(144),
    [anon_sym_2_GT] = ACTIONS(144),
    [anon_sym_H_GT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_1_GT_GT] = ACTIONS(144),
    [anon_sym_2_GT_GT] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [30] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(148),
    [anon_sym_AT_ATdbt] = ACTIONS(148),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(148),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_AT_BANG] = ACTIONS(148),
    [anon_sym_AT_LPAREN] = ACTIONS(148),
    [anon_sym_ATa_COLON] = ACTIONS(148),
    [anon_sym_ATb_COLON] = ACTIONS(148),
    [anon_sym_ATB_COLON] = ACTIONS(148),
    [anon_sym_ATe_COLON] = ACTIONS(148),
    [anon_sym_ATF_COLON] = ACTIONS(148),
    [anon_sym_ATi_COLON] = ACTIONS(148),
    [anon_sym_ATk_COLON] = ACTIONS(148),
    [anon_sym_ATo_COLON] = ACTIONS(148),
    [anon_sym_ATr_COLON] = ACTIONS(148),
    [anon_sym_ATf_COLON] = ACTIONS(148),
    [anon_sym_ATs_COLON] = ACTIONS(148),
    [anon_sym_ATx_COLON] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_1_GT] = ACTIONS(148),
    [anon_sym_2_GT] = ACTIONS(148),
    [anon_sym_H_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [anon_sym_1_GT_GT] = ACTIONS(148),
    [anon_sym_2_GT_GT] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [31] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPEH] = ACTIONS(113),
    [anon_sym_PIPET] = ACTIONS(113),
    [anon_sym_AT_AT] = ACTIONS(113),
    [anon_sym_AT_ATdbt] = ACTIONS(113),
    [anon_sym_AT_ATdbta] = ACTIONS(113),
    [anon_sym_AT_ATdbtb] = ACTIONS(113),
    [anon_sym_AT_ATdbts] = ACTIONS(113),
    [anon_sym_AT_AT_DOT] = ACTIONS(113),
    [anon_sym_AT_AT_EQ] = ACTIONS(113),
    [anon_sym_AT_ATk] = ACTIONS(113),
    [anon_sym_AT_ATt] = ACTIONS(113),
    [anon_sym_AT_ATb] = ACTIONS(113),
    [anon_sym_AT_ATi] = ACTIONS(113),
    [anon_sym_AT_ATiS] = ACTIONS(113),
    [anon_sym_AT_ATf] = ACTIONS(113),
    [anon_sym_AT_ATs_COLON] = ACTIONS(113),
    [anon_sym_AT_ATc_COLON] = ACTIONS(113),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_1_GT] = ACTIONS(113),
    [anon_sym_2_GT] = ACTIONS(113),
    [anon_sym_H_GT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(113),
    [anon_sym_1_GT_GT] = ACTIONS(113),
    [anon_sym_2_GT_GT] = ACTIONS(113),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(113),
  },
  [32] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_PIPEH] = ACTIONS(136),
    [anon_sym_PIPET] = ACTIONS(136),
    [anon_sym_AT_AT] = ACTIONS(136),
    [anon_sym_AT_ATdbt] = ACTIONS(136),
    [anon_sym_AT_ATdbta] = ACTIONS(136),
    [anon_sym_AT_ATdbtb] = ACTIONS(136),
    [anon_sym_AT_ATdbts] = ACTIONS(136),
    [anon_sym_AT_AT_DOT] = ACTIONS(136),
    [anon_sym_AT_AT_EQ] = ACTIONS(136),
    [anon_sym_AT_ATk] = ACTIONS(136),
    [anon_sym_AT_ATt] = ACTIONS(136),
    [anon_sym_AT_ATb] = ACTIONS(136),
    [anon_sym_AT_ATi] = ACTIONS(136),
    [anon_sym_AT_ATiS] = ACTIONS(136),
    [anon_sym_AT_ATf] = ACTIONS(136),
    [anon_sym_AT_ATs_COLON] = ACTIONS(136),
    [anon_sym_AT_ATc_COLON] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_AT_BANG] = ACTIONS(136),
    [anon_sym_AT_LPAREN] = ACTIONS(136),
    [anon_sym_ATa_COLON] = ACTIONS(136),
    [anon_sym_ATb_COLON] = ACTIONS(136),
    [anon_sym_ATB_COLON] = ACTIONS(136),
    [anon_sym_ATe_COLON] = ACTIONS(136),
    [anon_sym_ATF_COLON] = ACTIONS(136),
    [anon_sym_ATi_COLON] = ACTIONS(136),
    [anon_sym_ATk_COLON] = ACTIONS(136),
    [anon_sym_ATo_COLON] = ACTIONS(136),
    [anon_sym_ATr_COLON] = ACTIONS(136),
    [anon_sym_ATf_COLON] = ACTIONS(136),
    [anon_sym_ATs_COLON] = ACTIONS(136),
    [anon_sym_ATx_COLON] = ACTIONS(136),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_1_GT] = ACTIONS(136),
    [anon_sym_2_GT] = ACTIONS(136),
    [anon_sym_H_GT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_1_GT_GT] = ACTIONS(136),
    [anon_sym_2_GT_GT] = ACTIONS(136),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(136),
  },
  [33] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(148),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(148),
    [anon_sym_AT_ATdbt] = ACTIONS(148),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(148),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(148),
    [anon_sym_AT_BANG] = ACTIONS(148),
    [anon_sym_AT_LPAREN] = ACTIONS(148),
    [anon_sym_ATa_COLON] = ACTIONS(148),
    [anon_sym_ATb_COLON] = ACTIONS(148),
    [anon_sym_ATB_COLON] = ACTIONS(148),
    [anon_sym_ATe_COLON] = ACTIONS(148),
    [anon_sym_ATF_COLON] = ACTIONS(148),
    [anon_sym_ATi_COLON] = ACTIONS(148),
    [anon_sym_ATk_COLON] = ACTIONS(148),
    [anon_sym_ATo_COLON] = ACTIONS(148),
    [anon_sym_ATr_COLON] = ACTIONS(148),
    [anon_sym_ATf_COLON] = ACTIONS(148),
    [anon_sym_ATs_COLON] = ACTIONS(148),
    [anon_sym_ATx_COLON] = ACTIONS(148),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_1_GT] = ACTIONS(148),
    [anon_sym_2_GT] = ACTIONS(148),
    [anon_sym_H_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [anon_sym_1_GT_GT] = ACTIONS(148),
    [anon_sym_2_GT_GT] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [34] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_PIPET] = ACTIONS(99),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_1_GT] = ACTIONS(99),
    [anon_sym_2_GT] = ACTIONS(99),
    [anon_sym_H_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(99),
    [anon_sym_1_GT_GT] = ACTIONS(99),
    [anon_sym_2_GT_GT] = ACTIONS(99),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(99),
  },
  [35] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_AT_BANG] = ACTIONS(140),
    [anon_sym_AT_LPAREN] = ACTIONS(140),
    [anon_sym_ATa_COLON] = ACTIONS(140),
    [anon_sym_ATb_COLON] = ACTIONS(140),
    [anon_sym_ATB_COLON] = ACTIONS(140),
    [anon_sym_ATe_COLON] = ACTIONS(140),
    [anon_sym_ATF_COLON] = ACTIONS(140),
    [anon_sym_ATi_COLON] = ACTIONS(140),
    [anon_sym_ATk_COLON] = ACTIONS(140),
    [anon_sym_ATo_COLON] = ACTIONS(140),
    [anon_sym_ATr_COLON] = ACTIONS(140),
    [anon_sym_ATf_COLON] = ACTIONS(140),
    [anon_sym_ATs_COLON] = ACTIONS(140),
    [anon_sym_ATx_COLON] = ACTIONS(140),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_1_GT] = ACTIONS(140),
    [anon_sym_2_GT] = ACTIONS(140),
    [anon_sym_H_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_1_GT_GT] = ACTIONS(140),
    [anon_sym_2_GT_GT] = ACTIONS(140),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [36] = {
    [sym_arg] = STATE(31),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(31),
    [anon_sym_PIPE] = ACTIONS(144),
    [anon_sym_PIPEH] = ACTIONS(144),
    [anon_sym_PIPET] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(144),
    [anon_sym_AT_ATdbt] = ACTIONS(144),
    [anon_sym_AT_ATdbta] = ACTIONS(144),
    [anon_sym_AT_ATdbtb] = ACTIONS(144),
    [anon_sym_AT_ATdbts] = ACTIONS(144),
    [anon_sym_AT_AT_DOT] = ACTIONS(144),
    [anon_sym_AT_AT_EQ] = ACTIONS(144),
    [anon_sym_AT_ATk] = ACTIONS(144),
    [anon_sym_AT_ATt] = ACTIONS(144),
    [anon_sym_AT_ATb] = ACTIONS(144),
    [anon_sym_AT_ATi] = ACTIONS(144),
    [anon_sym_AT_ATiS] = ACTIONS(144),
    [anon_sym_AT_ATf] = ACTIONS(144),
    [anon_sym_AT_ATs_COLON] = ACTIONS(144),
    [anon_sym_AT_ATc_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(144),
    [anon_sym_AT_BANG] = ACTIONS(144),
    [anon_sym_AT_LPAREN] = ACTIONS(144),
    [anon_sym_ATa_COLON] = ACTIONS(144),
    [anon_sym_ATb_COLON] = ACTIONS(144),
    [anon_sym_ATB_COLON] = ACTIONS(144),
    [anon_sym_ATe_COLON] = ACTIONS(144),
    [anon_sym_ATF_COLON] = ACTIONS(144),
    [anon_sym_ATi_COLON] = ACTIONS(144),
    [anon_sym_ATk_COLON] = ACTIONS(144),
    [anon_sym_ATo_COLON] = ACTIONS(144),
    [anon_sym_ATr_COLON] = ACTIONS(144),
    [anon_sym_ATf_COLON] = ACTIONS(144),
    [anon_sym_ATs_COLON] = ACTIONS(144),
    [anon_sym_ATx_COLON] = ACTIONS(144),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_1_GT] = ACTIONS(144),
    [anon_sym_2_GT] = ACTIONS(144),
    [anon_sym_H_GT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_1_GT_GT] = ACTIONS(144),
    [anon_sym_2_GT_GT] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_PIPEH] = ACTIONS(152),
    [anon_sym_PIPET] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_AT_ATdbt] = ACTIONS(152),
    [anon_sym_AT_ATdbta] = ACTIONS(152),
    [anon_sym_AT_ATdbtb] = ACTIONS(152),
    [anon_sym_AT_ATdbts] = ACTIONS(152),
    [anon_sym_AT_AT_DOT] = ACTIONS(152),
    [anon_sym_AT_AT_EQ] = ACTIONS(152),
    [anon_sym_AT_ATk] = ACTIONS(152),
    [anon_sym_AT_ATt] = ACTIONS(152),
    [anon_sym_AT_ATb] = ACTIONS(152),
    [anon_sym_AT_ATi] = ACTIONS(152),
    [anon_sym_AT_ATiS] = ACTIONS(152),
    [anon_sym_AT_ATf] = ACTIONS(152),
    [anon_sym_AT_ATs_COLON] = ACTIONS(152),
    [anon_sym_AT_ATc_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
    [anon_sym_AT_BANG] = ACTIONS(152),
    [anon_sym_AT_LPAREN] = ACTIONS(152),
    [anon_sym_ATa_COLON] = ACTIONS(152),
    [anon_sym_ATb_COLON] = ACTIONS(152),
    [anon_sym_ATB_COLON] = ACTIONS(152),
    [anon_sym_ATe_COLON] = ACTIONS(152),
    [anon_sym_ATF_COLON] = ACTIONS(152),
    [anon_sym_ATi_COLON] = ACTIONS(152),
    [anon_sym_ATk_COLON] = ACTIONS(152),
    [anon_sym_ATo_COLON] = ACTIONS(152),
    [anon_sym_ATr_COLON] = ACTIONS(152),
    [anon_sym_ATf_COLON] = ACTIONS(152),
    [anon_sym_ATs_COLON] = ACTIONS(152),
    [anon_sym_ATx_COLON] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_1_GT] = ACTIONS(152),
    [anon_sym_2_GT] = ACTIONS(152),
    [anon_sym_H_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [anon_sym_1_GT_GT] = ACTIONS(152),
    [anon_sym_2_GT_GT] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(152),
    [aux_sym_arg_identifier_token2] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_PIPEH] = ACTIONS(156),
    [anon_sym_PIPET] = ACTIONS(156),
    [anon_sym_AT_AT] = ACTIONS(156),
    [anon_sym_AT_ATdbt] = ACTIONS(156),
    [anon_sym_AT_ATdbta] = ACTIONS(156),
    [anon_sym_AT_ATdbtb] = ACTIONS(156),
    [anon_sym_AT_ATdbts] = ACTIONS(156),
    [anon_sym_AT_AT_DOT] = ACTIONS(156),
    [anon_sym_AT_AT_EQ] = ACTIONS(156),
    [anon_sym_AT_ATk] = ACTIONS(156),
    [anon_sym_AT_ATt] = ACTIONS(156),
    [anon_sym_AT_ATb] = ACTIONS(156),
    [anon_sym_AT_ATi] = ACTIONS(156),
    [anon_sym_AT_ATiS] = ACTIONS(156),
    [anon_sym_AT_ATf] = ACTIONS(156),
    [anon_sym_AT_ATs_COLON] = ACTIONS(156),
    [anon_sym_AT_ATc_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_AT_BANG] = ACTIONS(156),
    [anon_sym_AT_LPAREN] = ACTIONS(156),
    [anon_sym_ATa_COLON] = ACTIONS(156),
    [anon_sym_ATb_COLON] = ACTIONS(156),
    [anon_sym_ATB_COLON] = ACTIONS(156),
    [anon_sym_ATe_COLON] = ACTIONS(156),
    [anon_sym_ATF_COLON] = ACTIONS(156),
    [anon_sym_ATi_COLON] = ACTIONS(156),
    [anon_sym_ATk_COLON] = ACTIONS(156),
    [anon_sym_ATo_COLON] = ACTIONS(156),
    [anon_sym_ATr_COLON] = ACTIONS(156),
    [anon_sym_ATf_COLON] = ACTIONS(156),
    [anon_sym_ATs_COLON] = ACTIONS(156),
    [anon_sym_ATx_COLON] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_1_GT] = ACTIONS(156),
    [anon_sym_2_GT] = ACTIONS(156),
    [anon_sym_H_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [anon_sym_1_GT_GT] = ACTIONS(156),
    [anon_sym_2_GT_GT] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(156),
    [aux_sym_arg_identifier_token2] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_PIPEH] = ACTIONS(160),
    [anon_sym_PIPET] = ACTIONS(160),
    [anon_sym_AT_AT] = ACTIONS(160),
    [anon_sym_AT_ATdbt] = ACTIONS(160),
    [anon_sym_AT_ATdbta] = ACTIONS(160),
    [anon_sym_AT_ATdbtb] = ACTIONS(160),
    [anon_sym_AT_ATdbts] = ACTIONS(160),
    [anon_sym_AT_AT_DOT] = ACTIONS(160),
    [anon_sym_AT_AT_EQ] = ACTIONS(160),
    [anon_sym_AT_ATk] = ACTIONS(160),
    [anon_sym_AT_ATt] = ACTIONS(160),
    [anon_sym_AT_ATb] = ACTIONS(160),
    [anon_sym_AT_ATi] = ACTIONS(160),
    [anon_sym_AT_ATiS] = ACTIONS(160),
    [anon_sym_AT_ATf] = ACTIONS(160),
    [anon_sym_AT_ATs_COLON] = ACTIONS(160),
    [anon_sym_AT_ATc_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_AT_BANG] = ACTIONS(160),
    [anon_sym_AT_LPAREN] = ACTIONS(160),
    [anon_sym_ATa_COLON] = ACTIONS(160),
    [anon_sym_ATb_COLON] = ACTIONS(160),
    [anon_sym_ATB_COLON] = ACTIONS(160),
    [anon_sym_ATe_COLON] = ACTIONS(160),
    [anon_sym_ATF_COLON] = ACTIONS(160),
    [anon_sym_ATi_COLON] = ACTIONS(160),
    [anon_sym_ATk_COLON] = ACTIONS(160),
    [anon_sym_ATo_COLON] = ACTIONS(160),
    [anon_sym_ATr_COLON] = ACTIONS(160),
    [anon_sym_ATf_COLON] = ACTIONS(160),
    [anon_sym_ATs_COLON] = ACTIONS(160),
    [anon_sym_ATx_COLON] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(160),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_1_GT] = ACTIONS(160),
    [anon_sym_2_GT] = ACTIONS(160),
    [anon_sym_H_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(160),
    [anon_sym_1_GT_GT] = ACTIONS(160),
    [anon_sym_2_GT_GT] = ACTIONS(160),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_PIPEH] = ACTIONS(152),
    [anon_sym_PIPET] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_AT_ATdbt] = ACTIONS(152),
    [anon_sym_AT_ATdbta] = ACTIONS(152),
    [anon_sym_AT_ATdbtb] = ACTIONS(152),
    [anon_sym_AT_ATdbts] = ACTIONS(152),
    [anon_sym_AT_AT_DOT] = ACTIONS(152),
    [anon_sym_AT_AT_EQ] = ACTIONS(152),
    [anon_sym_AT_ATk] = ACTIONS(152),
    [anon_sym_AT_ATt] = ACTIONS(152),
    [anon_sym_AT_ATb] = ACTIONS(152),
    [anon_sym_AT_ATi] = ACTIONS(152),
    [anon_sym_AT_ATiS] = ACTIONS(152),
    [anon_sym_AT_ATf] = ACTIONS(152),
    [anon_sym_AT_ATs_COLON] = ACTIONS(152),
    [anon_sym_AT_ATc_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(152),
    [anon_sym_AT_BANG] = ACTIONS(152),
    [anon_sym_AT_LPAREN] = ACTIONS(152),
    [anon_sym_ATa_COLON] = ACTIONS(152),
    [anon_sym_ATb_COLON] = ACTIONS(152),
    [anon_sym_ATB_COLON] = ACTIONS(152),
    [anon_sym_ATe_COLON] = ACTIONS(152),
    [anon_sym_ATF_COLON] = ACTIONS(152),
    [anon_sym_ATi_COLON] = ACTIONS(152),
    [anon_sym_ATk_COLON] = ACTIONS(152),
    [anon_sym_ATo_COLON] = ACTIONS(152),
    [anon_sym_ATr_COLON] = ACTIONS(152),
    [anon_sym_ATf_COLON] = ACTIONS(152),
    [anon_sym_ATs_COLON] = ACTIONS(152),
    [anon_sym_ATx_COLON] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_1_GT] = ACTIONS(152),
    [anon_sym_2_GT] = ACTIONS(152),
    [anon_sym_H_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [anon_sym_1_GT_GT] = ACTIONS(152),
    [anon_sym_2_GT_GT] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(152),
    [aux_sym_arg_identifier_token2] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_PIPEH] = ACTIONS(164),
    [anon_sym_PIPET] = ACTIONS(164),
    [anon_sym_AT_AT] = ACTIONS(164),
    [anon_sym_AT_ATdbt] = ACTIONS(164),
    [anon_sym_AT_ATdbta] = ACTIONS(164),
    [anon_sym_AT_ATdbtb] = ACTIONS(164),
    [anon_sym_AT_ATdbts] = ACTIONS(164),
    [anon_sym_AT_AT_DOT] = ACTIONS(164),
    [anon_sym_AT_AT_EQ] = ACTIONS(164),
    [anon_sym_AT_ATk] = ACTIONS(164),
    [anon_sym_AT_ATt] = ACTIONS(164),
    [anon_sym_AT_ATb] = ACTIONS(164),
    [anon_sym_AT_ATi] = ACTIONS(164),
    [anon_sym_AT_ATiS] = ACTIONS(164),
    [anon_sym_AT_ATf] = ACTIONS(164),
    [anon_sym_AT_ATs_COLON] = ACTIONS(164),
    [anon_sym_AT_ATc_COLON] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_AT_BANG] = ACTIONS(164),
    [anon_sym_AT_LPAREN] = ACTIONS(164),
    [anon_sym_ATa_COLON] = ACTIONS(164),
    [anon_sym_ATb_COLON] = ACTIONS(164),
    [anon_sym_ATB_COLON] = ACTIONS(164),
    [anon_sym_ATe_COLON] = ACTIONS(164),
    [anon_sym_ATF_COLON] = ACTIONS(164),
    [anon_sym_ATi_COLON] = ACTIONS(164),
    [anon_sym_ATk_COLON] = ACTIONS(164),
    [anon_sym_ATo_COLON] = ACTIONS(164),
    [anon_sym_ATr_COLON] = ACTIONS(164),
    [anon_sym_ATf_COLON] = ACTIONS(164),
    [anon_sym_ATs_COLON] = ACTIONS(164),
    [anon_sym_ATx_COLON] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_1_GT] = ACTIONS(164),
    [anon_sym_2_GT] = ACTIONS(164),
    [anon_sym_H_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [anon_sym_1_GT_GT] = ACTIONS(164),
    [anon_sym_2_GT_GT] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [42] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_PIPEH] = ACTIONS(166),
    [anon_sym_PIPET] = ACTIONS(166),
    [anon_sym_AT_AT] = ACTIONS(168),
    [anon_sym_AT_ATdbt] = ACTIONS(168),
    [anon_sym_AT_ATdbta] = ACTIONS(166),
    [anon_sym_AT_ATdbtb] = ACTIONS(166),
    [anon_sym_AT_ATdbts] = ACTIONS(166),
    [anon_sym_AT_AT_DOT] = ACTIONS(166),
    [anon_sym_AT_AT_EQ] = ACTIONS(166),
    [anon_sym_AT_ATk] = ACTIONS(166),
    [anon_sym_AT_ATt] = ACTIONS(166),
    [anon_sym_AT_ATb] = ACTIONS(166),
    [anon_sym_AT_ATi] = ACTIONS(168),
    [anon_sym_AT_ATiS] = ACTIONS(166),
    [anon_sym_AT_ATf] = ACTIONS(166),
    [anon_sym_AT_ATs_COLON] = ACTIONS(166),
    [anon_sym_AT_ATc_COLON] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(168),
    [anon_sym_AT_BANG] = ACTIONS(166),
    [anon_sym_AT_LPAREN] = ACTIONS(166),
    [anon_sym_ATa_COLON] = ACTIONS(166),
    [anon_sym_ATb_COLON] = ACTIONS(166),
    [anon_sym_ATB_COLON] = ACTIONS(166),
    [anon_sym_ATe_COLON] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_ATF_COLON] = ACTIONS(166),
    [anon_sym_ATi_COLON] = ACTIONS(166),
    [anon_sym_ATk_COLON] = ACTIONS(166),
    [anon_sym_ATo_COLON] = ACTIONS(166),
    [anon_sym_ATr_COLON] = ACTIONS(166),
    [anon_sym_ATf_COLON] = ACTIONS(166),
    [anon_sym_ATs_COLON] = ACTIONS(166),
    [anon_sym_ATx_COLON] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_1_GT] = ACTIONS(168),
    [anon_sym_2_GT] = ACTIONS(168),
    [anon_sym_H_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(166),
    [anon_sym_1_GT_GT] = ACTIONS(166),
    [anon_sym_2_GT_GT] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [43] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PIPEH] = ACTIONS(172),
    [anon_sym_PIPET] = ACTIONS(172),
    [anon_sym_AT_AT] = ACTIONS(174),
    [anon_sym_AT_ATdbt] = ACTIONS(174),
    [anon_sym_AT_ATdbta] = ACTIONS(172),
    [anon_sym_AT_ATdbtb] = ACTIONS(172),
    [anon_sym_AT_ATdbts] = ACTIONS(172),
    [anon_sym_AT_AT_DOT] = ACTIONS(172),
    [anon_sym_AT_AT_EQ] = ACTIONS(172),
    [anon_sym_AT_ATk] = ACTIONS(172),
    [anon_sym_AT_ATt] = ACTIONS(172),
    [anon_sym_AT_ATb] = ACTIONS(172),
    [anon_sym_AT_ATi] = ACTIONS(174),
    [anon_sym_AT_ATiS] = ACTIONS(172),
    [anon_sym_AT_ATf] = ACTIONS(172),
    [anon_sym_AT_ATs_COLON] = ACTIONS(172),
    [anon_sym_AT_ATc_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_AT_BANG] = ACTIONS(172),
    [anon_sym_AT_LPAREN] = ACTIONS(172),
    [anon_sym_ATa_COLON] = ACTIONS(172),
    [anon_sym_ATb_COLON] = ACTIONS(172),
    [anon_sym_ATB_COLON] = ACTIONS(172),
    [anon_sym_ATe_COLON] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_ATF_COLON] = ACTIONS(172),
    [anon_sym_ATi_COLON] = ACTIONS(172),
    [anon_sym_ATk_COLON] = ACTIONS(172),
    [anon_sym_ATo_COLON] = ACTIONS(172),
    [anon_sym_ATr_COLON] = ACTIONS(172),
    [anon_sym_ATf_COLON] = ACTIONS(172),
    [anon_sym_ATs_COLON] = ACTIONS(172),
    [anon_sym_ATx_COLON] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_1_GT] = ACTIONS(174),
    [anon_sym_2_GT] = ACTIONS(174),
    [anon_sym_H_GT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [anon_sym_1_GT_GT] = ACTIONS(172),
    [anon_sym_2_GT_GT] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [44] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_PIPEH] = ACTIONS(176),
    [anon_sym_PIPET] = ACTIONS(176),
    [anon_sym_AT_AT] = ACTIONS(178),
    [anon_sym_AT_ATdbt] = ACTIONS(178),
    [anon_sym_AT_ATdbta] = ACTIONS(176),
    [anon_sym_AT_ATdbtb] = ACTIONS(176),
    [anon_sym_AT_ATdbts] = ACTIONS(176),
    [anon_sym_AT_AT_DOT] = ACTIONS(176),
    [anon_sym_AT_AT_EQ] = ACTIONS(176),
    [anon_sym_AT_ATk] = ACTIONS(176),
    [anon_sym_AT_ATt] = ACTIONS(176),
    [anon_sym_AT_ATb] = ACTIONS(176),
    [anon_sym_AT_ATi] = ACTIONS(178),
    [anon_sym_AT_ATiS] = ACTIONS(176),
    [anon_sym_AT_ATf] = ACTIONS(176),
    [anon_sym_AT_ATs_COLON] = ACTIONS(176),
    [anon_sym_AT_ATc_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_AT_BANG] = ACTIONS(176),
    [anon_sym_AT_LPAREN] = ACTIONS(176),
    [anon_sym_ATa_COLON] = ACTIONS(176),
    [anon_sym_ATb_COLON] = ACTIONS(176),
    [anon_sym_ATB_COLON] = ACTIONS(176),
    [anon_sym_ATe_COLON] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(180),
    [anon_sym_ATF_COLON] = ACTIONS(176),
    [anon_sym_ATi_COLON] = ACTIONS(176),
    [anon_sym_ATk_COLON] = ACTIONS(176),
    [anon_sym_ATo_COLON] = ACTIONS(176),
    [anon_sym_ATr_COLON] = ACTIONS(176),
    [anon_sym_ATf_COLON] = ACTIONS(176),
    [anon_sym_ATs_COLON] = ACTIONS(176),
    [anon_sym_ATx_COLON] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_1_GT] = ACTIONS(178),
    [anon_sym_2_GT] = ACTIONS(178),
    [anon_sym_H_GT] = ACTIONS(176),
    [anon_sym_GT_GT] = ACTIONS(176),
    [anon_sym_1_GT_GT] = ACTIONS(176),
    [anon_sym_2_GT_GT] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(185),
    [anon_sym_PIPEH] = ACTIONS(183),
    [anon_sym_PIPET] = ACTIONS(183),
    [anon_sym_AT_AT] = ACTIONS(185),
    [anon_sym_AT_ATdbt] = ACTIONS(185),
    [anon_sym_AT_ATdbta] = ACTIONS(183),
    [anon_sym_AT_ATdbtb] = ACTIONS(183),
    [anon_sym_AT_ATdbts] = ACTIONS(183),
    [anon_sym_AT_AT_DOT] = ACTIONS(183),
    [anon_sym_AT_AT_EQ] = ACTIONS(183),
    [anon_sym_AT_ATk] = ACTIONS(183),
    [anon_sym_AT_ATt] = ACTIONS(183),
    [anon_sym_AT_ATb] = ACTIONS(183),
    [anon_sym_AT_ATi] = ACTIONS(185),
    [anon_sym_AT_ATiS] = ACTIONS(183),
    [anon_sym_AT_ATf] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_AT_ATs_COLON] = ACTIONS(183),
    [anon_sym_AT_ATc_COLON] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(185),
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
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_1_GT] = ACTIONS(185),
    [anon_sym_2_GT] = ACTIONS(185),
    [anon_sym_H_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_1_GT_GT] = ACTIONS(183),
    [anon_sym_2_GT_GT] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_PIPE] = ACTIONS(191),
    [anon_sym_PIPEH] = ACTIONS(189),
    [anon_sym_PIPET] = ACTIONS(189),
    [anon_sym_AT_AT] = ACTIONS(191),
    [anon_sym_AT_ATdbt] = ACTIONS(191),
    [anon_sym_AT_ATdbta] = ACTIONS(189),
    [anon_sym_AT_ATdbtb] = ACTIONS(189),
    [anon_sym_AT_ATdbts] = ACTIONS(189),
    [anon_sym_AT_AT_DOT] = ACTIONS(189),
    [anon_sym_AT_AT_EQ] = ACTIONS(189),
    [anon_sym_AT_ATk] = ACTIONS(189),
    [anon_sym_AT_ATt] = ACTIONS(189),
    [anon_sym_AT_ATb] = ACTIONS(189),
    [anon_sym_AT_ATi] = ACTIONS(191),
    [anon_sym_AT_ATiS] = ACTIONS(189),
    [anon_sym_AT_ATf] = ACTIONS(189),
    [anon_sym_AT_ATs_COLON] = ACTIONS(189),
    [anon_sym_AT_ATc_COLON] = ACTIONS(189),
    [anon_sym_AT] = ACTIONS(191),
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
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_1_GT] = ACTIONS(191),
    [anon_sym_2_GT] = ACTIONS(191),
    [anon_sym_H_GT] = ACTIONS(189),
    [anon_sym_GT_GT] = ACTIONS(189),
    [anon_sym_1_GT_GT] = ACTIONS(189),
    [anon_sym_2_GT_GT] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_CR] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_PIPEH] = ACTIONS(176),
    [anon_sym_PIPET] = ACTIONS(176),
    [anon_sym_AT_AT] = ACTIONS(178),
    [anon_sym_AT_ATdbt] = ACTIONS(178),
    [anon_sym_AT_ATdbta] = ACTIONS(176),
    [anon_sym_AT_ATdbtb] = ACTIONS(176),
    [anon_sym_AT_ATdbts] = ACTIONS(176),
    [anon_sym_AT_AT_DOT] = ACTIONS(176),
    [anon_sym_AT_AT_EQ] = ACTIONS(176),
    [anon_sym_AT_ATk] = ACTIONS(176),
    [anon_sym_AT_ATt] = ACTIONS(176),
    [anon_sym_AT_ATb] = ACTIONS(176),
    [anon_sym_AT_ATi] = ACTIONS(178),
    [anon_sym_AT_ATiS] = ACTIONS(176),
    [anon_sym_AT_ATf] = ACTIONS(176),
    [anon_sym_AT_ATs_COLON] = ACTIONS(176),
    [anon_sym_AT_ATc_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_AT_BANG] = ACTIONS(176),
    [anon_sym_AT_LPAREN] = ACTIONS(176),
    [anon_sym_ATa_COLON] = ACTIONS(176),
    [anon_sym_ATb_COLON] = ACTIONS(176),
    [anon_sym_ATB_COLON] = ACTIONS(176),
    [anon_sym_ATe_COLON] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_ATF_COLON] = ACTIONS(176),
    [anon_sym_ATi_COLON] = ACTIONS(176),
    [anon_sym_ATk_COLON] = ACTIONS(176),
    [anon_sym_ATo_COLON] = ACTIONS(176),
    [anon_sym_ATr_COLON] = ACTIONS(176),
    [anon_sym_ATf_COLON] = ACTIONS(176),
    [anon_sym_ATs_COLON] = ACTIONS(176),
    [anon_sym_ATx_COLON] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_1_GT] = ACTIONS(178),
    [anon_sym_2_GT] = ACTIONS(178),
    [anon_sym_H_GT] = ACTIONS(176),
    [anon_sym_GT_GT] = ACTIONS(176),
    [anon_sym_1_GT_GT] = ACTIONS(176),
    [anon_sym_2_GT_GT] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_PIPE] = ACTIONS(197),
    [anon_sym_PIPEH] = ACTIONS(195),
    [anon_sym_PIPET] = ACTIONS(195),
    [anon_sym_AT_AT] = ACTIONS(197),
    [anon_sym_AT_ATdbt] = ACTIONS(197),
    [anon_sym_AT_ATdbta] = ACTIONS(195),
    [anon_sym_AT_ATdbtb] = ACTIONS(195),
    [anon_sym_AT_ATdbts] = ACTIONS(195),
    [anon_sym_AT_AT_DOT] = ACTIONS(195),
    [anon_sym_AT_AT_EQ] = ACTIONS(195),
    [anon_sym_AT_ATk] = ACTIONS(195),
    [anon_sym_AT_ATt] = ACTIONS(195),
    [anon_sym_AT_ATb] = ACTIONS(195),
    [anon_sym_AT_ATi] = ACTIONS(197),
    [anon_sym_AT_ATiS] = ACTIONS(195),
    [anon_sym_AT_ATf] = ACTIONS(195),
    [anon_sym_AT_ATs_COLON] = ACTIONS(195),
    [anon_sym_AT_ATc_COLON] = ACTIONS(195),
    [anon_sym_AT] = ACTIONS(197),
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
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_1_GT] = ACTIONS(197),
    [anon_sym_2_GT] = ACTIONS(197),
    [anon_sym_H_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_1_GT_GT] = ACTIONS(195),
    [anon_sym_2_GT_GT] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_PIPEH] = ACTIONS(134),
    [anon_sym_PIPET] = ACTIONS(134),
    [anon_sym_AT_AT] = ACTIONS(136),
    [anon_sym_AT_ATdbt] = ACTIONS(136),
    [anon_sym_AT_ATdbta] = ACTIONS(134),
    [anon_sym_AT_ATdbtb] = ACTIONS(134),
    [anon_sym_AT_ATdbts] = ACTIONS(134),
    [anon_sym_AT_AT_DOT] = ACTIONS(134),
    [anon_sym_AT_AT_EQ] = ACTIONS(134),
    [anon_sym_AT_ATk] = ACTIONS(134),
    [anon_sym_AT_ATt] = ACTIONS(134),
    [anon_sym_AT_ATb] = ACTIONS(134),
    [anon_sym_AT_ATi] = ACTIONS(136),
    [anon_sym_AT_ATiS] = ACTIONS(134),
    [anon_sym_AT_ATf] = ACTIONS(134),
    [anon_sym_AT_ATs_COLON] = ACTIONS(134),
    [anon_sym_AT_ATc_COLON] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_AT_BANG] = ACTIONS(134),
    [anon_sym_AT_LPAREN] = ACTIONS(134),
    [anon_sym_ATa_COLON] = ACTIONS(134),
    [anon_sym_ATb_COLON] = ACTIONS(134),
    [anon_sym_ATB_COLON] = ACTIONS(134),
    [anon_sym_ATe_COLON] = ACTIONS(134),
    [anon_sym_ATF_COLON] = ACTIONS(134),
    [anon_sym_ATi_COLON] = ACTIONS(134),
    [anon_sym_ATk_COLON] = ACTIONS(134),
    [anon_sym_ATo_COLON] = ACTIONS(134),
    [anon_sym_ATr_COLON] = ACTIONS(134),
    [anon_sym_ATf_COLON] = ACTIONS(134),
    [anon_sym_ATs_COLON] = ACTIONS(134),
    [anon_sym_ATx_COLON] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_1_GT] = ACTIONS(136),
    [anon_sym_2_GT] = ACTIONS(136),
    [anon_sym_H_GT] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(134),
    [anon_sym_1_GT_GT] = ACTIONS(134),
    [anon_sym_2_GT_GT] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_CR] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(201),
    [anon_sym_AT_AT] = ACTIONS(203),
    [anon_sym_AT_ATdbt] = ACTIONS(203),
    [anon_sym_AT_ATdbta] = ACTIONS(201),
    [anon_sym_AT_ATdbtb] = ACTIONS(201),
    [anon_sym_AT_ATdbts] = ACTIONS(201),
    [anon_sym_AT_AT_DOT] = ACTIONS(201),
    [anon_sym_AT_AT_EQ] = ACTIONS(201),
    [anon_sym_AT_ATk] = ACTIONS(201),
    [anon_sym_AT_ATt] = ACTIONS(201),
    [anon_sym_AT_ATb] = ACTIONS(201),
    [anon_sym_AT_ATi] = ACTIONS(203),
    [anon_sym_AT_ATiS] = ACTIONS(201),
    [anon_sym_AT_ATf] = ACTIONS(201),
    [anon_sym_AT_ATs_COLON] = ACTIONS(201),
    [anon_sym_AT_ATc_COLON] = ACTIONS(201),
    [anon_sym_AT] = ACTIONS(203),
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
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_1_GT] = ACTIONS(203),
    [anon_sym_2_GT] = ACTIONS(203),
    [anon_sym_H_GT] = ACTIONS(201),
    [anon_sym_GT_GT] = ACTIONS(201),
    [anon_sym_1_GT_GT] = ACTIONS(201),
    [anon_sym_2_GT_GT] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_CR] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(205),
    [anon_sym_AT_ATdbtb] = ACTIONS(205),
    [anon_sym_AT_ATdbts] = ACTIONS(205),
    [anon_sym_AT_AT_DOT] = ACTIONS(205),
    [anon_sym_AT_AT_EQ] = ACTIONS(205),
    [anon_sym_AT_ATk] = ACTIONS(205),
    [anon_sym_AT_ATt] = ACTIONS(205),
    [anon_sym_AT_ATb] = ACTIONS(205),
    [anon_sym_AT_ATi] = ACTIONS(207),
    [anon_sym_AT_ATiS] = ACTIONS(205),
    [anon_sym_AT_ATf] = ACTIONS(205),
    [anon_sym_AT_ATs_COLON] = ACTIONS(205),
    [anon_sym_AT_ATc_COLON] = ACTIONS(205),
    [anon_sym_AT] = ACTIONS(207),
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
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_1_GT] = ACTIONS(207),
    [anon_sym_2_GT] = ACTIONS(207),
    [anon_sym_H_GT] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(205),
    [anon_sym_1_GT_GT] = ACTIONS(205),
    [anon_sym_2_GT_GT] = ACTIONS(205),
    [anon_sym_BQUOTE] = ACTIONS(205),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(205),
    [anon_sym_CR] = ACTIONS(205),
    [anon_sym_SEMI] = ACTIONS(205),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_PIPE] = ACTIONS(211),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(209),
    [anon_sym_AT_AT] = ACTIONS(211),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(209),
    [anon_sym_AT_ATdbts] = ACTIONS(209),
    [anon_sym_AT_AT_DOT] = ACTIONS(209),
    [anon_sym_AT_AT_EQ] = ACTIONS(209),
    [anon_sym_AT_ATk] = ACTIONS(209),
    [anon_sym_AT_ATt] = ACTIONS(209),
    [anon_sym_AT_ATb] = ACTIONS(209),
    [anon_sym_AT_ATi] = ACTIONS(211),
    [anon_sym_AT_ATiS] = ACTIONS(209),
    [anon_sym_AT_ATf] = ACTIONS(209),
    [anon_sym_AT_ATs_COLON] = ACTIONS(209),
    [anon_sym_AT_ATc_COLON] = ACTIONS(209),
    [anon_sym_AT] = ACTIONS(211),
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
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_1_GT] = ACTIONS(211),
    [anon_sym_2_GT] = ACTIONS(211),
    [anon_sym_H_GT] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(209),
    [anon_sym_1_GT_GT] = ACTIONS(209),
    [anon_sym_2_GT_GT] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_CR] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_PIPE] = ACTIONS(215),
    [anon_sym_PIPEH] = ACTIONS(213),
    [anon_sym_PIPET] = ACTIONS(213),
    [anon_sym_AT_AT] = ACTIONS(215),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(213),
    [anon_sym_AT_AT_EQ] = ACTIONS(213),
    [anon_sym_AT_ATk] = ACTIONS(213),
    [anon_sym_AT_ATt] = ACTIONS(213),
    [anon_sym_AT_ATb] = ACTIONS(213),
    [anon_sym_AT_ATi] = ACTIONS(215),
    [anon_sym_AT_ATiS] = ACTIONS(213),
    [anon_sym_AT_ATf] = ACTIONS(213),
    [anon_sym_AT_ATs_COLON] = ACTIONS(213),
    [anon_sym_AT_ATc_COLON] = ACTIONS(213),
    [anon_sym_AT] = ACTIONS(215),
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
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_1_GT] = ACTIONS(215),
    [anon_sym_2_GT] = ACTIONS(215),
    [anon_sym_H_GT] = ACTIONS(213),
    [anon_sym_GT_GT] = ACTIONS(213),
    [anon_sym_1_GT_GT] = ACTIONS(213),
    [anon_sym_2_GT_GT] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_CR] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_PIPEH] = ACTIONS(217),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(219),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(217),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(217),
    [anon_sym_AT_ATt] = ACTIONS(217),
    [anon_sym_AT_ATb] = ACTIONS(217),
    [anon_sym_AT_ATi] = ACTIONS(219),
    [anon_sym_AT_ATiS] = ACTIONS(217),
    [anon_sym_AT_ATf] = ACTIONS(217),
    [anon_sym_AT_ATs_COLON] = ACTIONS(217),
    [anon_sym_AT_ATc_COLON] = ACTIONS(217),
    [anon_sym_AT] = ACTIONS(219),
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
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_1_GT] = ACTIONS(219),
    [anon_sym_2_GT] = ACTIONS(219),
    [anon_sym_H_GT] = ACTIONS(217),
    [anon_sym_GT_GT] = ACTIONS(217),
    [anon_sym_1_GT_GT] = ACTIONS(217),
    [anon_sym_2_GT_GT] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_CR] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_PIPEH] = ACTIONS(221),
    [anon_sym_PIPET] = ACTIONS(221),
    [anon_sym_AT_AT] = ACTIONS(223),
    [anon_sym_AT_ATdbt] = ACTIONS(223),
    [anon_sym_AT_ATdbta] = ACTIONS(221),
    [anon_sym_AT_ATdbtb] = ACTIONS(221),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(221),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(221),
    [anon_sym_AT_ATi] = ACTIONS(223),
    [anon_sym_AT_ATiS] = ACTIONS(221),
    [anon_sym_AT_ATf] = ACTIONS(221),
    [anon_sym_AT_ATs_COLON] = ACTIONS(221),
    [anon_sym_AT_ATc_COLON] = ACTIONS(221),
    [anon_sym_AT] = ACTIONS(223),
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
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_1_GT] = ACTIONS(223),
    [anon_sym_2_GT] = ACTIONS(223),
    [anon_sym_H_GT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_1_GT_GT] = ACTIONS(221),
    [anon_sym_2_GT_GT] = ACTIONS(221),
    [anon_sym_BQUOTE] = ACTIONS(221),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(221),
    [anon_sym_CR] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_PIPEH] = ACTIONS(150),
    [anon_sym_PIPET] = ACTIONS(150),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_AT_ATdbt] = ACTIONS(152),
    [anon_sym_AT_ATdbta] = ACTIONS(150),
    [anon_sym_AT_ATdbtb] = ACTIONS(150),
    [anon_sym_AT_ATdbts] = ACTIONS(150),
    [anon_sym_AT_AT_DOT] = ACTIONS(150),
    [anon_sym_AT_AT_EQ] = ACTIONS(150),
    [anon_sym_AT_ATk] = ACTIONS(150),
    [anon_sym_AT_ATt] = ACTIONS(150),
    [anon_sym_AT_ATb] = ACTIONS(150),
    [anon_sym_AT_ATi] = ACTIONS(152),
    [anon_sym_AT_ATiS] = ACTIONS(150),
    [anon_sym_AT_ATf] = ACTIONS(150),
    [anon_sym_AT_ATs_COLON] = ACTIONS(150),
    [anon_sym_AT_ATc_COLON] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(152),
    [anon_sym_AT_BANG] = ACTIONS(150),
    [anon_sym_AT_LPAREN] = ACTIONS(150),
    [anon_sym_ATa_COLON] = ACTIONS(150),
    [anon_sym_ATb_COLON] = ACTIONS(150),
    [anon_sym_ATB_COLON] = ACTIONS(150),
    [anon_sym_ATe_COLON] = ACTIONS(150),
    [anon_sym_ATF_COLON] = ACTIONS(150),
    [anon_sym_ATi_COLON] = ACTIONS(150),
    [anon_sym_ATk_COLON] = ACTIONS(150),
    [anon_sym_ATo_COLON] = ACTIONS(150),
    [anon_sym_ATr_COLON] = ACTIONS(150),
    [anon_sym_ATf_COLON] = ACTIONS(150),
    [anon_sym_ATs_COLON] = ACTIONS(150),
    [anon_sym_ATx_COLON] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_1_GT] = ACTIONS(152),
    [anon_sym_2_GT] = ACTIONS(152),
    [anon_sym_H_GT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_1_GT_GT] = ACTIONS(150),
    [anon_sym_2_GT_GT] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_PIPE] = ACTIONS(227),
    [anon_sym_PIPEH] = ACTIONS(225),
    [anon_sym_PIPET] = ACTIONS(225),
    [anon_sym_AT_AT] = ACTIONS(227),
    [anon_sym_AT_ATdbt] = ACTIONS(227),
    [anon_sym_AT_ATdbta] = ACTIONS(225),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(225),
    [anon_sym_AT_AT_DOT] = ACTIONS(225),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(225),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(225),
    [anon_sym_AT_ATf] = ACTIONS(225),
    [anon_sym_AT_ATs_COLON] = ACTIONS(225),
    [anon_sym_AT_ATc_COLON] = ACTIONS(225),
    [anon_sym_AT] = ACTIONS(227),
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
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_1_GT] = ACTIONS(227),
    [anon_sym_2_GT] = ACTIONS(227),
    [anon_sym_H_GT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(225),
    [anon_sym_1_GT_GT] = ACTIONS(225),
    [anon_sym_2_GT_GT] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_CR] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_PIPE] = ACTIONS(231),
    [anon_sym_PIPEH] = ACTIONS(229),
    [anon_sym_PIPET] = ACTIONS(229),
    [anon_sym_AT_AT] = ACTIONS(231),
    [anon_sym_AT_ATdbt] = ACTIONS(231),
    [anon_sym_AT_ATdbta] = ACTIONS(229),
    [anon_sym_AT_ATdbtb] = ACTIONS(229),
    [anon_sym_AT_ATdbts] = ACTIONS(229),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(229),
    [anon_sym_AT_ATk] = ACTIONS(229),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(229),
    [anon_sym_AT_ATi] = ACTIONS(231),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(229),
    [anon_sym_AT_ATc_COLON] = ACTIONS(229),
    [anon_sym_AT] = ACTIONS(231),
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
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_1_GT] = ACTIONS(231),
    [anon_sym_2_GT] = ACTIONS(231),
    [anon_sym_H_GT] = ACTIONS(229),
    [anon_sym_GT_GT] = ACTIONS(229),
    [anon_sym_1_GT_GT] = ACTIONS(229),
    [anon_sym_2_GT_GT] = ACTIONS(229),
    [anon_sym_BQUOTE] = ACTIONS(229),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(229),
    [anon_sym_CR] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(229),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(235),
    [anon_sym_PIPEH] = ACTIONS(233),
    [anon_sym_PIPET] = ACTIONS(233),
    [anon_sym_AT_AT] = ACTIONS(235),
    [anon_sym_AT_ATdbt] = ACTIONS(235),
    [anon_sym_AT_ATdbta] = ACTIONS(233),
    [anon_sym_AT_ATdbtb] = ACTIONS(233),
    [anon_sym_AT_ATdbts] = ACTIONS(233),
    [anon_sym_AT_AT_DOT] = ACTIONS(233),
    [anon_sym_AT_AT_EQ] = ACTIONS(233),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(233),
    [anon_sym_AT_ATb] = ACTIONS(233),
    [anon_sym_AT_ATi] = ACTIONS(235),
    [anon_sym_AT_ATiS] = ACTIONS(233),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(235),
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
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_1_GT] = ACTIONS(235),
    [anon_sym_2_GT] = ACTIONS(235),
    [anon_sym_H_GT] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(233),
    [anon_sym_1_GT_GT] = ACTIONS(233),
    [anon_sym_2_GT_GT] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_CR] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_PIPEH] = ACTIONS(237),
    [anon_sym_PIPET] = ACTIONS(237),
    [anon_sym_AT_AT] = ACTIONS(239),
    [anon_sym_AT_ATdbt] = ACTIONS(239),
    [anon_sym_AT_ATdbta] = ACTIONS(237),
    [anon_sym_AT_ATdbtb] = ACTIONS(237),
    [anon_sym_AT_ATdbts] = ACTIONS(237),
    [anon_sym_AT_AT_DOT] = ACTIONS(237),
    [anon_sym_AT_AT_EQ] = ACTIONS(237),
    [anon_sym_AT_ATk] = ACTIONS(237),
    [anon_sym_AT_ATt] = ACTIONS(237),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(237),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(237),
    [anon_sym_AT_ATc_COLON] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(239),
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
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_1_GT] = ACTIONS(239),
    [anon_sym_2_GT] = ACTIONS(239),
    [anon_sym_H_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_1_GT_GT] = ACTIONS(237),
    [anon_sym_2_GT_GT] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(243),
    [anon_sym_PIPEH] = ACTIONS(241),
    [anon_sym_PIPET] = ACTIONS(241),
    [anon_sym_AT_AT] = ACTIONS(243),
    [anon_sym_AT_ATdbt] = ACTIONS(243),
    [anon_sym_AT_ATdbta] = ACTIONS(241),
    [anon_sym_AT_ATdbtb] = ACTIONS(241),
    [anon_sym_AT_ATdbts] = ACTIONS(241),
    [anon_sym_AT_AT_DOT] = ACTIONS(241),
    [anon_sym_AT_AT_EQ] = ACTIONS(241),
    [anon_sym_AT_ATk] = ACTIONS(241),
    [anon_sym_AT_ATt] = ACTIONS(241),
    [anon_sym_AT_ATb] = ACTIONS(241),
    [anon_sym_AT_ATi] = ACTIONS(243),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(241),
    [anon_sym_AT_ATs_COLON] = ACTIONS(241),
    [anon_sym_AT_ATc_COLON] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
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
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_1_GT] = ACTIONS(243),
    [anon_sym_2_GT] = ACTIONS(243),
    [anon_sym_H_GT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(241),
    [anon_sym_1_GT_GT] = ACTIONS(241),
    [anon_sym_2_GT_GT] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_CR] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_PIPEH] = ACTIONS(245),
    [anon_sym_PIPET] = ACTIONS(245),
    [anon_sym_AT_AT] = ACTIONS(247),
    [anon_sym_AT_ATdbt] = ACTIONS(247),
    [anon_sym_AT_ATdbta] = ACTIONS(245),
    [anon_sym_AT_ATdbtb] = ACTIONS(245),
    [anon_sym_AT_ATdbts] = ACTIONS(245),
    [anon_sym_AT_AT_DOT] = ACTIONS(245),
    [anon_sym_AT_AT_EQ] = ACTIONS(245),
    [anon_sym_AT_ATk] = ACTIONS(245),
    [anon_sym_AT_ATt] = ACTIONS(245),
    [anon_sym_AT_ATb] = ACTIONS(245),
    [anon_sym_AT_ATi] = ACTIONS(247),
    [anon_sym_AT_ATiS] = ACTIONS(245),
    [anon_sym_AT_ATf] = ACTIONS(245),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(245),
    [anon_sym_AT] = ACTIONS(247),
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
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_1_GT] = ACTIONS(247),
    [anon_sym_2_GT] = ACTIONS(247),
    [anon_sym_H_GT] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_1_GT_GT] = ACTIONS(245),
    [anon_sym_2_GT_GT] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_CR] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(152),
    [anon_sym_PIPEH] = ACTIONS(150),
    [anon_sym_PIPET] = ACTIONS(150),
    [anon_sym_AT_AT] = ACTIONS(152),
    [anon_sym_AT_ATdbt] = ACTIONS(152),
    [anon_sym_AT_ATdbta] = ACTIONS(150),
    [anon_sym_AT_ATdbtb] = ACTIONS(150),
    [anon_sym_AT_ATdbts] = ACTIONS(150),
    [anon_sym_AT_AT_DOT] = ACTIONS(150),
    [anon_sym_AT_AT_EQ] = ACTIONS(150),
    [anon_sym_AT_ATk] = ACTIONS(150),
    [anon_sym_AT_ATt] = ACTIONS(150),
    [anon_sym_AT_ATb] = ACTIONS(150),
    [anon_sym_AT_ATi] = ACTIONS(152),
    [anon_sym_AT_ATiS] = ACTIONS(150),
    [anon_sym_AT_ATf] = ACTIONS(150),
    [anon_sym_AT_ATs_COLON] = ACTIONS(150),
    [anon_sym_AT_ATc_COLON] = ACTIONS(150),
    [anon_sym_AT] = ACTIONS(152),
    [anon_sym_AT_BANG] = ACTIONS(150),
    [anon_sym_AT_LPAREN] = ACTIONS(150),
    [anon_sym_ATa_COLON] = ACTIONS(150),
    [anon_sym_ATb_COLON] = ACTIONS(150),
    [anon_sym_ATB_COLON] = ACTIONS(150),
    [anon_sym_ATe_COLON] = ACTIONS(150),
    [anon_sym_ATF_COLON] = ACTIONS(150),
    [anon_sym_ATi_COLON] = ACTIONS(150),
    [anon_sym_ATk_COLON] = ACTIONS(150),
    [anon_sym_ATo_COLON] = ACTIONS(150),
    [anon_sym_ATr_COLON] = ACTIONS(150),
    [anon_sym_ATf_COLON] = ACTIONS(150),
    [anon_sym_ATs_COLON] = ACTIONS(150),
    [anon_sym_ATx_COLON] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_1_GT] = ACTIONS(152),
    [anon_sym_2_GT] = ACTIONS(152),
    [anon_sym_H_GT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(150),
    [anon_sym_1_GT_GT] = ACTIONS(150),
    [anon_sym_2_GT_GT] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(164),
    [anon_sym_PIPEH] = ACTIONS(162),
    [anon_sym_PIPET] = ACTIONS(162),
    [anon_sym_AT_AT] = ACTIONS(164),
    [anon_sym_AT_ATdbt] = ACTIONS(164),
    [anon_sym_AT_ATdbta] = ACTIONS(162),
    [anon_sym_AT_ATdbtb] = ACTIONS(162),
    [anon_sym_AT_ATdbts] = ACTIONS(162),
    [anon_sym_AT_AT_DOT] = ACTIONS(162),
    [anon_sym_AT_AT_EQ] = ACTIONS(162),
    [anon_sym_AT_ATk] = ACTIONS(162),
    [anon_sym_AT_ATt] = ACTIONS(162),
    [anon_sym_AT_ATb] = ACTIONS(162),
    [anon_sym_AT_ATi] = ACTIONS(164),
    [anon_sym_AT_ATiS] = ACTIONS(162),
    [anon_sym_AT_ATf] = ACTIONS(162),
    [anon_sym_AT_ATs_COLON] = ACTIONS(162),
    [anon_sym_AT_ATc_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(164),
    [anon_sym_AT_BANG] = ACTIONS(162),
    [anon_sym_AT_LPAREN] = ACTIONS(162),
    [anon_sym_ATa_COLON] = ACTIONS(162),
    [anon_sym_ATb_COLON] = ACTIONS(162),
    [anon_sym_ATB_COLON] = ACTIONS(162),
    [anon_sym_ATe_COLON] = ACTIONS(162),
    [anon_sym_ATF_COLON] = ACTIONS(162),
    [anon_sym_ATi_COLON] = ACTIONS(162),
    [anon_sym_ATk_COLON] = ACTIONS(162),
    [anon_sym_ATo_COLON] = ACTIONS(162),
    [anon_sym_ATr_COLON] = ACTIONS(162),
    [anon_sym_ATf_COLON] = ACTIONS(162),
    [anon_sym_ATs_COLON] = ACTIONS(162),
    [anon_sym_ATx_COLON] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_1_GT] = ACTIONS(164),
    [anon_sym_2_GT] = ACTIONS(164),
    [anon_sym_H_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [anon_sym_1_GT_GT] = ACTIONS(162),
    [anon_sym_2_GT_GT] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(251),
    [anon_sym_PIPEH] = ACTIONS(249),
    [anon_sym_PIPET] = ACTIONS(249),
    [anon_sym_AT_AT] = ACTIONS(251),
    [anon_sym_AT_ATdbt] = ACTIONS(251),
    [anon_sym_AT_ATdbta] = ACTIONS(249),
    [anon_sym_AT_ATdbtb] = ACTIONS(249),
    [anon_sym_AT_ATdbts] = ACTIONS(249),
    [anon_sym_AT_AT_DOT] = ACTIONS(249),
    [anon_sym_AT_AT_EQ] = ACTIONS(249),
    [anon_sym_AT_ATk] = ACTIONS(249),
    [anon_sym_AT_ATt] = ACTIONS(249),
    [anon_sym_AT_ATb] = ACTIONS(249),
    [anon_sym_AT_ATi] = ACTIONS(251),
    [anon_sym_AT_ATiS] = ACTIONS(249),
    [anon_sym_AT_ATf] = ACTIONS(249),
    [anon_sym_AT_ATs_COLON] = ACTIONS(249),
    [anon_sym_AT_ATc_COLON] = ACTIONS(249),
    [anon_sym_AT] = ACTIONS(251),
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
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_1_GT] = ACTIONS(251),
    [anon_sym_2_GT] = ACTIONS(251),
    [anon_sym_H_GT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(249),
    [anon_sym_1_GT_GT] = ACTIONS(249),
    [anon_sym_2_GT_GT] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(249),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(249),
    [anon_sym_CR] = ACTIONS(249),
    [anon_sym_SEMI] = ACTIONS(249),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_PIPE] = ACTIONS(255),
    [anon_sym_PIPEH] = ACTIONS(253),
    [anon_sym_PIPET] = ACTIONS(253),
    [anon_sym_AT_AT] = ACTIONS(255),
    [anon_sym_AT_ATdbt] = ACTIONS(255),
    [anon_sym_AT_ATdbta] = ACTIONS(253),
    [anon_sym_AT_ATdbtb] = ACTIONS(253),
    [anon_sym_AT_ATdbts] = ACTIONS(253),
    [anon_sym_AT_AT_DOT] = ACTIONS(253),
    [anon_sym_AT_AT_EQ] = ACTIONS(253),
    [anon_sym_AT_ATk] = ACTIONS(253),
    [anon_sym_AT_ATt] = ACTIONS(253),
    [anon_sym_AT_ATb] = ACTIONS(253),
    [anon_sym_AT_ATi] = ACTIONS(255),
    [anon_sym_AT_ATiS] = ACTIONS(253),
    [anon_sym_AT_ATf] = ACTIONS(253),
    [anon_sym_AT_ATs_COLON] = ACTIONS(253),
    [anon_sym_AT_ATc_COLON] = ACTIONS(253),
    [anon_sym_AT] = ACTIONS(255),
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
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_1_GT] = ACTIONS(255),
    [anon_sym_2_GT] = ACTIONS(255),
    [anon_sym_H_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(253),
    [anon_sym_1_GT_GT] = ACTIONS(253),
    [anon_sym_2_GT_GT] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(253),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(253),
    [anon_sym_CR] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(253),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(259),
    [anon_sym_PIPEH] = ACTIONS(257),
    [anon_sym_PIPET] = ACTIONS(257),
    [anon_sym_AT_AT] = ACTIONS(259),
    [anon_sym_AT_ATdbt] = ACTIONS(259),
    [anon_sym_AT_ATdbta] = ACTIONS(257),
    [anon_sym_AT_ATdbtb] = ACTIONS(257),
    [anon_sym_AT_ATdbts] = ACTIONS(257),
    [anon_sym_AT_AT_DOT] = ACTIONS(257),
    [anon_sym_AT_AT_EQ] = ACTIONS(257),
    [anon_sym_AT_ATk] = ACTIONS(257),
    [anon_sym_AT_ATt] = ACTIONS(257),
    [anon_sym_AT_ATb] = ACTIONS(257),
    [anon_sym_AT_ATi] = ACTIONS(259),
    [anon_sym_AT_ATiS] = ACTIONS(257),
    [anon_sym_AT_ATf] = ACTIONS(257),
    [anon_sym_AT_ATs_COLON] = ACTIONS(257),
    [anon_sym_AT_ATc_COLON] = ACTIONS(257),
    [anon_sym_AT] = ACTIONS(259),
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
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_1_GT] = ACTIONS(259),
    [anon_sym_2_GT] = ACTIONS(259),
    [anon_sym_H_GT] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(257),
    [anon_sym_1_GT_GT] = ACTIONS(257),
    [anon_sym_2_GT_GT] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_CR] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [anon_sym_PIPE] = ACTIONS(263),
    [anon_sym_PIPEH] = ACTIONS(261),
    [anon_sym_PIPET] = ACTIONS(261),
    [anon_sym_AT_AT] = ACTIONS(263),
    [anon_sym_AT_ATdbt] = ACTIONS(263),
    [anon_sym_AT_ATdbta] = ACTIONS(261),
    [anon_sym_AT_ATdbtb] = ACTIONS(261),
    [anon_sym_AT_ATdbts] = ACTIONS(261),
    [anon_sym_AT_AT_DOT] = ACTIONS(261),
    [anon_sym_AT_AT_EQ] = ACTIONS(261),
    [anon_sym_AT_ATk] = ACTIONS(261),
    [anon_sym_AT_ATt] = ACTIONS(261),
    [anon_sym_AT_ATb] = ACTIONS(261),
    [anon_sym_AT_ATi] = ACTIONS(263),
    [anon_sym_AT_ATiS] = ACTIONS(261),
    [anon_sym_AT_ATf] = ACTIONS(261),
    [anon_sym_AT_ATs_COLON] = ACTIONS(261),
    [anon_sym_AT_ATc_COLON] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(263),
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
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(261),
    [anon_sym_GT] = ACTIONS(263),
    [anon_sym_1_GT] = ACTIONS(263),
    [anon_sym_2_GT] = ACTIONS(263),
    [anon_sym_H_GT] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(261),
    [anon_sym_1_GT_GT] = ACTIONS(261),
    [anon_sym_2_GT_GT] = ACTIONS(261),
    [anon_sym_BQUOTE] = ACTIONS(261),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(261),
    [anon_sym_CR] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(261),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_PIPEH] = ACTIONS(134),
    [anon_sym_PIPET] = ACTIONS(134),
    [anon_sym_AT_AT] = ACTIONS(136),
    [anon_sym_AT_ATdbt] = ACTIONS(136),
    [anon_sym_AT_ATdbta] = ACTIONS(134),
    [anon_sym_AT_ATdbtb] = ACTIONS(134),
    [anon_sym_AT_ATdbts] = ACTIONS(134),
    [anon_sym_AT_AT_DOT] = ACTIONS(134),
    [anon_sym_AT_AT_EQ] = ACTIONS(134),
    [anon_sym_AT_ATk] = ACTIONS(134),
    [anon_sym_AT_ATt] = ACTIONS(134),
    [anon_sym_AT_ATb] = ACTIONS(134),
    [anon_sym_AT_ATi] = ACTIONS(136),
    [anon_sym_AT_ATiS] = ACTIONS(134),
    [anon_sym_AT_ATf] = ACTIONS(134),
    [anon_sym_AT_ATs_COLON] = ACTIONS(134),
    [anon_sym_AT_ATc_COLON] = ACTIONS(134),
    [anon_sym_AT] = ACTIONS(136),
    [anon_sym_AT_BANG] = ACTIONS(134),
    [anon_sym_AT_LPAREN] = ACTIONS(134),
    [anon_sym_ATa_COLON] = ACTIONS(134),
    [anon_sym_ATb_COLON] = ACTIONS(134),
    [anon_sym_ATB_COLON] = ACTIONS(134),
    [anon_sym_ATe_COLON] = ACTIONS(134),
    [anon_sym_ATF_COLON] = ACTIONS(134),
    [anon_sym_ATi_COLON] = ACTIONS(134),
    [anon_sym_ATk_COLON] = ACTIONS(134),
    [anon_sym_ATo_COLON] = ACTIONS(134),
    [anon_sym_ATr_COLON] = ACTIONS(134),
    [anon_sym_ATf_COLON] = ACTIONS(134),
    [anon_sym_ATs_COLON] = ACTIONS(134),
    [anon_sym_ATx_COLON] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_1_GT] = ACTIONS(136),
    [anon_sym_2_GT] = ACTIONS(136),
    [anon_sym_H_GT] = ACTIONS(134),
    [anon_sym_GT_GT] = ACTIONS(134),
    [anon_sym_1_GT_GT] = ACTIONS(134),
    [anon_sym_2_GT_GT] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_CR] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(267),
    [anon_sym_PIPEH] = ACTIONS(265),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(267),
    [anon_sym_AT_ATdbta] = ACTIONS(265),
    [anon_sym_AT_ATdbtb] = ACTIONS(265),
    [anon_sym_AT_ATdbts] = ACTIONS(265),
    [anon_sym_AT_AT_DOT] = ACTIONS(265),
    [anon_sym_AT_AT_EQ] = ACTIONS(265),
    [anon_sym_AT_ATk] = ACTIONS(265),
    [anon_sym_AT_ATt] = ACTIONS(265),
    [anon_sym_AT_ATb] = ACTIONS(265),
    [anon_sym_AT_ATi] = ACTIONS(267),
    [anon_sym_AT_ATiS] = ACTIONS(265),
    [anon_sym_AT_ATf] = ACTIONS(265),
    [anon_sym_AT_ATs_COLON] = ACTIONS(265),
    [anon_sym_AT_ATc_COLON] = ACTIONS(265),
    [anon_sym_AT] = ACTIONS(267),
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
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_1_GT] = ACTIONS(267),
    [anon_sym_2_GT] = ACTIONS(267),
    [anon_sym_H_GT] = ACTIONS(265),
    [anon_sym_GT_GT] = ACTIONS(265),
    [anon_sym_1_GT_GT] = ACTIONS(265),
    [anon_sym_2_GT_GT] = ACTIONS(265),
    [anon_sym_BQUOTE] = ACTIONS(265),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(265),
    [anon_sym_CR] = ACTIONS(265),
    [anon_sym_SEMI] = ACTIONS(265),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_PIPE] = ACTIONS(271),
    [anon_sym_PIPEH] = ACTIONS(269),
    [anon_sym_PIPET] = ACTIONS(269),
    [anon_sym_AT_AT] = ACTIONS(271),
    [anon_sym_AT_ATdbt] = ACTIONS(271),
    [anon_sym_AT_ATdbta] = ACTIONS(269),
    [anon_sym_AT_ATdbtb] = ACTIONS(269),
    [anon_sym_AT_ATdbts] = ACTIONS(269),
    [anon_sym_AT_AT_DOT] = ACTIONS(269),
    [anon_sym_AT_AT_EQ] = ACTIONS(269),
    [anon_sym_AT_ATk] = ACTIONS(269),
    [anon_sym_AT_ATt] = ACTIONS(269),
    [anon_sym_AT_ATb] = ACTIONS(269),
    [anon_sym_AT_ATi] = ACTIONS(271),
    [anon_sym_AT_ATiS] = ACTIONS(269),
    [anon_sym_AT_ATf] = ACTIONS(269),
    [anon_sym_AT_ATs_COLON] = ACTIONS(269),
    [anon_sym_AT_ATc_COLON] = ACTIONS(269),
    [anon_sym_AT] = ACTIONS(271),
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
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_1_GT] = ACTIONS(271),
    [anon_sym_2_GT] = ACTIONS(271),
    [anon_sym_H_GT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(269),
    [anon_sym_1_GT_GT] = ACTIONS(269),
    [anon_sym_2_GT_GT] = ACTIONS(269),
    [anon_sym_BQUOTE] = ACTIONS(269),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(269),
    [anon_sym_CR] = ACTIONS(269),
    [anon_sym_SEMI] = ACTIONS(269),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_PIPE] = ACTIONS(275),
    [anon_sym_PIPEH] = ACTIONS(273),
    [anon_sym_PIPET] = ACTIONS(273),
    [anon_sym_AT_AT] = ACTIONS(275),
    [anon_sym_AT_ATdbt] = ACTIONS(275),
    [anon_sym_AT_ATdbta] = ACTIONS(273),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(273),
    [anon_sym_AT_AT_DOT] = ACTIONS(273),
    [anon_sym_AT_AT_EQ] = ACTIONS(273),
    [anon_sym_AT_ATk] = ACTIONS(273),
    [anon_sym_AT_ATt] = ACTIONS(273),
    [anon_sym_AT_ATb] = ACTIONS(273),
    [anon_sym_AT_ATi] = ACTIONS(275),
    [anon_sym_AT_ATiS] = ACTIONS(273),
    [anon_sym_AT_ATf] = ACTIONS(273),
    [anon_sym_AT_ATs_COLON] = ACTIONS(273),
    [anon_sym_AT_ATc_COLON] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(275),
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
    [anon_sym_RPAREN] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_1_GT] = ACTIONS(275),
    [anon_sym_2_GT] = ACTIONS(275),
    [anon_sym_H_GT] = ACTIONS(273),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_1_GT_GT] = ACTIONS(273),
    [anon_sym_2_GT_GT] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(273),
    [anon_sym_CR] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(156),
    [anon_sym_PIPEH] = ACTIONS(154),
    [anon_sym_PIPET] = ACTIONS(154),
    [anon_sym_AT_AT] = ACTIONS(156),
    [anon_sym_AT_ATdbt] = ACTIONS(156),
    [anon_sym_AT_ATdbta] = ACTIONS(154),
    [anon_sym_AT_ATdbtb] = ACTIONS(154),
    [anon_sym_AT_ATdbts] = ACTIONS(154),
    [anon_sym_AT_AT_DOT] = ACTIONS(154),
    [anon_sym_AT_AT_EQ] = ACTIONS(154),
    [anon_sym_AT_ATk] = ACTIONS(154),
    [anon_sym_AT_ATt] = ACTIONS(154),
    [anon_sym_AT_ATb] = ACTIONS(154),
    [anon_sym_AT_ATi] = ACTIONS(156),
    [anon_sym_AT_ATiS] = ACTIONS(154),
    [anon_sym_AT_ATf] = ACTIONS(154),
    [anon_sym_AT_ATs_COLON] = ACTIONS(154),
    [anon_sym_AT_ATc_COLON] = ACTIONS(154),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_AT_BANG] = ACTIONS(154),
    [anon_sym_AT_LPAREN] = ACTIONS(154),
    [anon_sym_ATa_COLON] = ACTIONS(154),
    [anon_sym_ATb_COLON] = ACTIONS(154),
    [anon_sym_ATB_COLON] = ACTIONS(154),
    [anon_sym_ATe_COLON] = ACTIONS(154),
    [anon_sym_ATF_COLON] = ACTIONS(154),
    [anon_sym_ATi_COLON] = ACTIONS(154),
    [anon_sym_ATk_COLON] = ACTIONS(154),
    [anon_sym_ATo_COLON] = ACTIONS(154),
    [anon_sym_ATr_COLON] = ACTIONS(154),
    [anon_sym_ATf_COLON] = ACTIONS(154),
    [anon_sym_ATs_COLON] = ACTIONS(154),
    [anon_sym_ATx_COLON] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(154),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_1_GT] = ACTIONS(156),
    [anon_sym_2_GT] = ACTIONS(156),
    [anon_sym_H_GT] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(154),
    [anon_sym_1_GT_GT] = ACTIONS(154),
    [anon_sym_2_GT_GT] = ACTIONS(154),
    [anon_sym_BQUOTE] = ACTIONS(154),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(154),
    [anon_sym_CR] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(154),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_PIPE] = ACTIONS(279),
    [anon_sym_PIPEH] = ACTIONS(277),
    [anon_sym_PIPET] = ACTIONS(277),
    [anon_sym_AT_AT] = ACTIONS(279),
    [anon_sym_AT_ATdbt] = ACTIONS(279),
    [anon_sym_AT_ATdbta] = ACTIONS(277),
    [anon_sym_AT_ATdbtb] = ACTIONS(277),
    [anon_sym_AT_ATdbts] = ACTIONS(277),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(277),
    [anon_sym_AT_ATk] = ACTIONS(277),
    [anon_sym_AT_ATt] = ACTIONS(277),
    [anon_sym_AT_ATb] = ACTIONS(277),
    [anon_sym_AT_ATi] = ACTIONS(279),
    [anon_sym_AT_ATiS] = ACTIONS(277),
    [anon_sym_AT_ATf] = ACTIONS(277),
    [anon_sym_AT_ATs_COLON] = ACTIONS(277),
    [anon_sym_AT_ATc_COLON] = ACTIONS(277),
    [anon_sym_AT] = ACTIONS(279),
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
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_1_GT] = ACTIONS(279),
    [anon_sym_2_GT] = ACTIONS(279),
    [anon_sym_H_GT] = ACTIONS(277),
    [anon_sym_GT_GT] = ACTIONS(277),
    [anon_sym_1_GT_GT] = ACTIONS(277),
    [anon_sym_2_GT_GT] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_CR] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(283),
    [anon_sym_PIPEH] = ACTIONS(281),
    [anon_sym_PIPET] = ACTIONS(281),
    [anon_sym_AT_AT] = ACTIONS(283),
    [anon_sym_AT_ATdbt] = ACTIONS(283),
    [anon_sym_AT_ATdbta] = ACTIONS(281),
    [anon_sym_AT_ATdbtb] = ACTIONS(281),
    [anon_sym_AT_ATdbts] = ACTIONS(281),
    [anon_sym_AT_AT_DOT] = ACTIONS(281),
    [anon_sym_AT_AT_EQ] = ACTIONS(281),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(281),
    [anon_sym_AT_ATb] = ACTIONS(281),
    [anon_sym_AT_ATi] = ACTIONS(283),
    [anon_sym_AT_ATiS] = ACTIONS(281),
    [anon_sym_AT_ATf] = ACTIONS(281),
    [anon_sym_AT_ATs_COLON] = ACTIONS(281),
    [anon_sym_AT_ATc_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(283),
    [anon_sym_AT_BANG] = ACTIONS(281),
    [anon_sym_AT_LPAREN] = ACTIONS(281),
    [anon_sym_ATa_COLON] = ACTIONS(281),
    [anon_sym_ATb_COLON] = ACTIONS(281),
    [anon_sym_ATB_COLON] = ACTIONS(281),
    [anon_sym_ATe_COLON] = ACTIONS(281),
    [anon_sym_ATF_COLON] = ACTIONS(281),
    [anon_sym_ATi_COLON] = ACTIONS(281),
    [anon_sym_ATk_COLON] = ACTIONS(281),
    [anon_sym_ATo_COLON] = ACTIONS(281),
    [anon_sym_ATr_COLON] = ACTIONS(281),
    [anon_sym_ATf_COLON] = ACTIONS(281),
    [anon_sym_ATs_COLON] = ACTIONS(281),
    [anon_sym_ATx_COLON] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_1_GT] = ACTIONS(283),
    [anon_sym_2_GT] = ACTIONS(283),
    [anon_sym_H_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(281),
    [anon_sym_1_GT_GT] = ACTIONS(281),
    [anon_sym_2_GT_GT] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_CR] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(287),
    [anon_sym_PIPEH] = ACTIONS(285),
    [anon_sym_PIPET] = ACTIONS(285),
    [anon_sym_AT_AT] = ACTIONS(287),
    [anon_sym_AT_ATdbt] = ACTIONS(287),
    [anon_sym_AT_ATdbta] = ACTIONS(285),
    [anon_sym_AT_ATdbtb] = ACTIONS(285),
    [anon_sym_AT_ATdbts] = ACTIONS(285),
    [anon_sym_AT_AT_DOT] = ACTIONS(285),
    [anon_sym_AT_AT_EQ] = ACTIONS(285),
    [anon_sym_AT_ATk] = ACTIONS(285),
    [anon_sym_AT_ATt] = ACTIONS(285),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(285),
    [anon_sym_AT_ATf] = ACTIONS(285),
    [anon_sym_AT_ATs_COLON] = ACTIONS(285),
    [anon_sym_AT_ATc_COLON] = ACTIONS(285),
    [anon_sym_AT] = ACTIONS(287),
    [anon_sym_AT_BANG] = ACTIONS(285),
    [anon_sym_AT_LPAREN] = ACTIONS(285),
    [anon_sym_ATa_COLON] = ACTIONS(285),
    [anon_sym_ATb_COLON] = ACTIONS(285),
    [anon_sym_ATB_COLON] = ACTIONS(285),
    [anon_sym_ATe_COLON] = ACTIONS(285),
    [anon_sym_ATF_COLON] = ACTIONS(285),
    [anon_sym_ATi_COLON] = ACTIONS(285),
    [anon_sym_ATk_COLON] = ACTIONS(285),
    [anon_sym_ATo_COLON] = ACTIONS(285),
    [anon_sym_ATr_COLON] = ACTIONS(285),
    [anon_sym_ATf_COLON] = ACTIONS(285),
    [anon_sym_ATs_COLON] = ACTIONS(285),
    [anon_sym_ATx_COLON] = ACTIONS(285),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(285),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_1_GT] = ACTIONS(287),
    [anon_sym_2_GT] = ACTIONS(287),
    [anon_sym_H_GT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(285),
    [anon_sym_1_GT_GT] = ACTIONS(285),
    [anon_sym_2_GT_GT] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_CR] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPEH] = ACTIONS(289),
    [anon_sym_PIPET] = ACTIONS(289),
    [anon_sym_AT_AT] = ACTIONS(291),
    [anon_sym_AT_ATdbt] = ACTIONS(291),
    [anon_sym_AT_ATdbta] = ACTIONS(289),
    [anon_sym_AT_ATdbtb] = ACTIONS(289),
    [anon_sym_AT_ATdbts] = ACTIONS(289),
    [anon_sym_AT_AT_DOT] = ACTIONS(289),
    [anon_sym_AT_AT_EQ] = ACTIONS(289),
    [anon_sym_AT_ATk] = ACTIONS(289),
    [anon_sym_AT_ATt] = ACTIONS(289),
    [anon_sym_AT_ATb] = ACTIONS(289),
    [anon_sym_AT_ATi] = ACTIONS(291),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(289),
    [anon_sym_AT_ATs_COLON] = ACTIONS(289),
    [anon_sym_AT_ATc_COLON] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym_AT_BANG] = ACTIONS(289),
    [anon_sym_AT_LPAREN] = ACTIONS(289),
    [anon_sym_ATa_COLON] = ACTIONS(289),
    [anon_sym_ATb_COLON] = ACTIONS(289),
    [anon_sym_ATB_COLON] = ACTIONS(289),
    [anon_sym_ATe_COLON] = ACTIONS(289),
    [anon_sym_ATF_COLON] = ACTIONS(289),
    [anon_sym_ATi_COLON] = ACTIONS(289),
    [anon_sym_ATk_COLON] = ACTIONS(289),
    [anon_sym_ATo_COLON] = ACTIONS(289),
    [anon_sym_ATr_COLON] = ACTIONS(289),
    [anon_sym_ATf_COLON] = ACTIONS(289),
    [anon_sym_ATs_COLON] = ACTIONS(289),
    [anon_sym_ATx_COLON] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_1_GT] = ACTIONS(291),
    [anon_sym_2_GT] = ACTIONS(291),
    [anon_sym_H_GT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(289),
    [anon_sym_1_GT_GT] = ACTIONS(289),
    [anon_sym_2_GT_GT] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_CR] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(293),
    [anon_sym_AT_AT] = ACTIONS(295),
    [anon_sym_AT_ATdbt] = ACTIONS(295),
    [anon_sym_AT_ATdbta] = ACTIONS(293),
    [anon_sym_AT_ATdbtb] = ACTIONS(293),
    [anon_sym_AT_ATdbts] = ACTIONS(293),
    [anon_sym_AT_AT_DOT] = ACTIONS(293),
    [anon_sym_AT_AT_EQ] = ACTIONS(293),
    [anon_sym_AT_ATk] = ACTIONS(293),
    [anon_sym_AT_ATt] = ACTIONS(293),
    [anon_sym_AT_ATb] = ACTIONS(293),
    [anon_sym_AT_ATi] = ACTIONS(295),
    [anon_sym_AT_ATiS] = ACTIONS(293),
    [anon_sym_AT_ATf] = ACTIONS(293),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym_AT_BANG] = ACTIONS(293),
    [anon_sym_AT_LPAREN] = ACTIONS(293),
    [anon_sym_ATa_COLON] = ACTIONS(293),
    [anon_sym_ATb_COLON] = ACTIONS(293),
    [anon_sym_ATB_COLON] = ACTIONS(293),
    [anon_sym_ATe_COLON] = ACTIONS(293),
    [anon_sym_ATF_COLON] = ACTIONS(293),
    [anon_sym_ATi_COLON] = ACTIONS(293),
    [anon_sym_ATk_COLON] = ACTIONS(293),
    [anon_sym_ATo_COLON] = ACTIONS(293),
    [anon_sym_ATr_COLON] = ACTIONS(293),
    [anon_sym_ATf_COLON] = ACTIONS(293),
    [anon_sym_ATs_COLON] = ACTIONS(293),
    [anon_sym_ATx_COLON] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_1_GT] = ACTIONS(295),
    [anon_sym_2_GT] = ACTIONS(295),
    [anon_sym_H_GT] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(293),
    [anon_sym_1_GT_GT] = ACTIONS(293),
    [anon_sym_2_GT_GT] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(293),
    [anon_sym_CR] = ACTIONS(293),
    [anon_sym_SEMI] = ACTIONS(293),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(299),
    [anon_sym_PIPEH] = ACTIONS(297),
    [anon_sym_PIPET] = ACTIONS(297),
    [anon_sym_AT_AT] = ACTIONS(299),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(297),
    [anon_sym_AT_ATdbtb] = ACTIONS(297),
    [anon_sym_AT_ATdbts] = ACTIONS(297),
    [anon_sym_AT_AT_DOT] = ACTIONS(297),
    [anon_sym_AT_AT_EQ] = ACTIONS(297),
    [anon_sym_AT_ATk] = ACTIONS(297),
    [anon_sym_AT_ATt] = ACTIONS(297),
    [anon_sym_AT_ATb] = ACTIONS(297),
    [anon_sym_AT_ATi] = ACTIONS(299),
    [anon_sym_AT_ATiS] = ACTIONS(297),
    [anon_sym_AT_ATf] = ACTIONS(297),
    [anon_sym_AT_ATs_COLON] = ACTIONS(297),
    [anon_sym_AT_ATc_COLON] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(299),
    [anon_sym_AT_BANG] = ACTIONS(297),
    [anon_sym_AT_LPAREN] = ACTIONS(297),
    [anon_sym_ATa_COLON] = ACTIONS(297),
    [anon_sym_ATb_COLON] = ACTIONS(297),
    [anon_sym_ATB_COLON] = ACTIONS(297),
    [anon_sym_ATe_COLON] = ACTIONS(297),
    [anon_sym_ATF_COLON] = ACTIONS(297),
    [anon_sym_ATi_COLON] = ACTIONS(297),
    [anon_sym_ATk_COLON] = ACTIONS(297),
    [anon_sym_ATo_COLON] = ACTIONS(297),
    [anon_sym_ATr_COLON] = ACTIONS(297),
    [anon_sym_ATf_COLON] = ACTIONS(297),
    [anon_sym_ATs_COLON] = ACTIONS(297),
    [anon_sym_ATx_COLON] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_1_GT] = ACTIONS(299),
    [anon_sym_2_GT] = ACTIONS(299),
    [anon_sym_H_GT] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(297),
    [anon_sym_1_GT_GT] = ACTIONS(297),
    [anon_sym_2_GT_GT] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(297),
    [anon_sym_CR] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_PIPEH] = ACTIONS(301),
    [anon_sym_PIPET] = ACTIONS(301),
    [anon_sym_AT_AT] = ACTIONS(303),
    [anon_sym_AT_ATdbt] = ACTIONS(303),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(301),
    [anon_sym_AT_ATdbts] = ACTIONS(301),
    [anon_sym_AT_AT_DOT] = ACTIONS(301),
    [anon_sym_AT_AT_EQ] = ACTIONS(301),
    [anon_sym_AT_ATk] = ACTIONS(301),
    [anon_sym_AT_ATt] = ACTIONS(301),
    [anon_sym_AT_ATb] = ACTIONS(301),
    [anon_sym_AT_ATi] = ACTIONS(303),
    [anon_sym_AT_ATiS] = ACTIONS(301),
    [anon_sym_AT_ATf] = ACTIONS(301),
    [anon_sym_AT_ATs_COLON] = ACTIONS(301),
    [anon_sym_AT_ATc_COLON] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym_AT_BANG] = ACTIONS(301),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(301),
    [anon_sym_ATb_COLON] = ACTIONS(301),
    [anon_sym_ATB_COLON] = ACTIONS(301),
    [anon_sym_ATe_COLON] = ACTIONS(301),
    [anon_sym_ATF_COLON] = ACTIONS(301),
    [anon_sym_ATi_COLON] = ACTIONS(301),
    [anon_sym_ATk_COLON] = ACTIONS(301),
    [anon_sym_ATo_COLON] = ACTIONS(301),
    [anon_sym_ATr_COLON] = ACTIONS(301),
    [anon_sym_ATf_COLON] = ACTIONS(301),
    [anon_sym_ATs_COLON] = ACTIONS(301),
    [anon_sym_ATx_COLON] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_1_GT] = ACTIONS(303),
    [anon_sym_2_GT] = ACTIONS(303),
    [anon_sym_H_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [anon_sym_1_GT_GT] = ACTIONS(301),
    [anon_sym_2_GT_GT] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(301),
    [anon_sym_CR] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_PIPEH] = ACTIONS(305),
    [anon_sym_PIPET] = ACTIONS(305),
    [anon_sym_AT_AT] = ACTIONS(307),
    [anon_sym_AT_ATdbt] = ACTIONS(307),
    [anon_sym_AT_ATdbta] = ACTIONS(305),
    [anon_sym_AT_ATdbtb] = ACTIONS(305),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(305),
    [anon_sym_AT_AT_EQ] = ACTIONS(305),
    [anon_sym_AT_ATk] = ACTIONS(305),
    [anon_sym_AT_ATt] = ACTIONS(305),
    [anon_sym_AT_ATb] = ACTIONS(305),
    [anon_sym_AT_ATi] = ACTIONS(307),
    [anon_sym_AT_ATiS] = ACTIONS(305),
    [anon_sym_AT_ATf] = ACTIONS(305),
    [anon_sym_AT_ATs_COLON] = ACTIONS(305),
    [anon_sym_AT_ATc_COLON] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym_AT_BANG] = ACTIONS(305),
    [anon_sym_AT_LPAREN] = ACTIONS(305),
    [anon_sym_ATa_COLON] = ACTIONS(305),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(305),
    [anon_sym_ATe_COLON] = ACTIONS(305),
    [anon_sym_ATF_COLON] = ACTIONS(305),
    [anon_sym_ATi_COLON] = ACTIONS(305),
    [anon_sym_ATk_COLON] = ACTIONS(305),
    [anon_sym_ATo_COLON] = ACTIONS(305),
    [anon_sym_ATr_COLON] = ACTIONS(305),
    [anon_sym_ATf_COLON] = ACTIONS(305),
    [anon_sym_ATs_COLON] = ACTIONS(305),
    [anon_sym_ATx_COLON] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_1_GT] = ACTIONS(307),
    [anon_sym_2_GT] = ACTIONS(307),
    [anon_sym_H_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(305),
    [anon_sym_1_GT_GT] = ACTIONS(305),
    [anon_sym_2_GT_GT] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(305),
    [anon_sym_CR] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_PIPEH] = ACTIONS(309),
    [anon_sym_PIPET] = ACTIONS(309),
    [anon_sym_AT_AT] = ACTIONS(311),
    [anon_sym_AT_ATdbt] = ACTIONS(311),
    [anon_sym_AT_ATdbta] = ACTIONS(309),
    [anon_sym_AT_ATdbtb] = ACTIONS(309),
    [anon_sym_AT_ATdbts] = ACTIONS(309),
    [anon_sym_AT_AT_DOT] = ACTIONS(309),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(309),
    [anon_sym_AT_ATt] = ACTIONS(309),
    [anon_sym_AT_ATb] = ACTIONS(309),
    [anon_sym_AT_ATi] = ACTIONS(311),
    [anon_sym_AT_ATiS] = ACTIONS(309),
    [anon_sym_AT_ATf] = ACTIONS(309),
    [anon_sym_AT_ATs_COLON] = ACTIONS(309),
    [anon_sym_AT_ATc_COLON] = ACTIONS(309),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym_AT_BANG] = ACTIONS(309),
    [anon_sym_AT_LPAREN] = ACTIONS(309),
    [anon_sym_ATa_COLON] = ACTIONS(309),
    [anon_sym_ATb_COLON] = ACTIONS(309),
    [anon_sym_ATB_COLON] = ACTIONS(309),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(309),
    [anon_sym_ATi_COLON] = ACTIONS(309),
    [anon_sym_ATk_COLON] = ACTIONS(309),
    [anon_sym_ATo_COLON] = ACTIONS(309),
    [anon_sym_ATr_COLON] = ACTIONS(309),
    [anon_sym_ATf_COLON] = ACTIONS(309),
    [anon_sym_ATs_COLON] = ACTIONS(309),
    [anon_sym_ATx_COLON] = ACTIONS(309),
    [anon_sym_RPAREN] = ACTIONS(309),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(311),
    [anon_sym_1_GT] = ACTIONS(311),
    [anon_sym_2_GT] = ACTIONS(311),
    [anon_sym_H_GT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(309),
    [anon_sym_1_GT_GT] = ACTIONS(309),
    [anon_sym_2_GT_GT] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_CR] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_PIPEH] = ACTIONS(313),
    [anon_sym_PIPET] = ACTIONS(313),
    [anon_sym_AT_AT] = ACTIONS(315),
    [anon_sym_AT_ATdbt] = ACTIONS(315),
    [anon_sym_AT_ATdbta] = ACTIONS(313),
    [anon_sym_AT_ATdbtb] = ACTIONS(313),
    [anon_sym_AT_ATdbts] = ACTIONS(313),
    [anon_sym_AT_AT_DOT] = ACTIONS(313),
    [anon_sym_AT_AT_EQ] = ACTIONS(313),
    [anon_sym_AT_ATk] = ACTIONS(313),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(313),
    [anon_sym_AT_ATi] = ACTIONS(315),
    [anon_sym_AT_ATiS] = ACTIONS(313),
    [anon_sym_AT_ATf] = ACTIONS(313),
    [anon_sym_AT_ATs_COLON] = ACTIONS(313),
    [anon_sym_AT_ATc_COLON] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym_AT_BANG] = ACTIONS(313),
    [anon_sym_AT_LPAREN] = ACTIONS(313),
    [anon_sym_ATa_COLON] = ACTIONS(313),
    [anon_sym_ATb_COLON] = ACTIONS(313),
    [anon_sym_ATB_COLON] = ACTIONS(313),
    [anon_sym_ATe_COLON] = ACTIONS(313),
    [anon_sym_ATF_COLON] = ACTIONS(313),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(313),
    [anon_sym_ATo_COLON] = ACTIONS(313),
    [anon_sym_ATr_COLON] = ACTIONS(313),
    [anon_sym_ATf_COLON] = ACTIONS(313),
    [anon_sym_ATs_COLON] = ACTIONS(313),
    [anon_sym_ATx_COLON] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(313),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_1_GT] = ACTIONS(315),
    [anon_sym_2_GT] = ACTIONS(315),
    [anon_sym_H_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(313),
    [anon_sym_1_GT_GT] = ACTIONS(313),
    [anon_sym_2_GT_GT] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_CR] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
  },
  [84] = {
    [sym__eq_sep_args] = STATE(67),
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPEH] = ACTIONS(319),
    [anon_sym_PIPET] = ACTIONS(319),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_1_GT] = ACTIONS(319),
    [anon_sym_2_GT] = ACTIONS(319),
    [anon_sym_H_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_1_GT_GT] = ACTIONS(319),
    [anon_sym_2_GT_GT] = ACTIONS(319),
    [sym_eq_sep_key] = ACTIONS(321),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(319),
    [anon_sym_CR] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_PIPEH] = ACTIONS(323),
    [anon_sym_PIPET] = ACTIONS(323),
    [anon_sym_AT_AT] = ACTIONS(325),
    [anon_sym_AT_ATdbt] = ACTIONS(325),
    [anon_sym_AT_ATdbta] = ACTIONS(323),
    [anon_sym_AT_ATdbtb] = ACTIONS(323),
    [anon_sym_AT_ATdbts] = ACTIONS(323),
    [anon_sym_AT_AT_DOT] = ACTIONS(323),
    [anon_sym_AT_AT_EQ] = ACTIONS(323),
    [anon_sym_AT_ATk] = ACTIONS(323),
    [anon_sym_AT_ATt] = ACTIONS(323),
    [anon_sym_AT_ATb] = ACTIONS(323),
    [anon_sym_AT_ATi] = ACTIONS(325),
    [anon_sym_AT_ATiS] = ACTIONS(323),
    [anon_sym_AT_ATf] = ACTIONS(323),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(325),
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
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_1_GT] = ACTIONS(325),
    [anon_sym_2_GT] = ACTIONS(325),
    [anon_sym_H_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_1_GT_GT] = ACTIONS(323),
    [anon_sym_2_GT_GT] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_CR] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_PIPEH] = ACTIONS(327),
    [anon_sym_PIPET] = ACTIONS(327),
    [anon_sym_AT_AT] = ACTIONS(329),
    [anon_sym_AT_ATdbt] = ACTIONS(329),
    [anon_sym_AT_ATdbta] = ACTIONS(327),
    [anon_sym_AT_ATdbtb] = ACTIONS(327),
    [anon_sym_AT_ATdbts] = ACTIONS(327),
    [anon_sym_AT_AT_DOT] = ACTIONS(327),
    [anon_sym_AT_AT_EQ] = ACTIONS(327),
    [anon_sym_AT_ATk] = ACTIONS(327),
    [anon_sym_AT_ATt] = ACTIONS(327),
    [anon_sym_AT_ATb] = ACTIONS(327),
    [anon_sym_AT_ATi] = ACTIONS(329),
    [anon_sym_AT_ATiS] = ACTIONS(327),
    [anon_sym_AT_ATf] = ACTIONS(327),
    [anon_sym_AT_ATs_COLON] = ACTIONS(327),
    [anon_sym_AT_ATc_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(329),
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
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_1_GT] = ACTIONS(329),
    [anon_sym_2_GT] = ACTIONS(329),
    [anon_sym_H_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_1_GT_GT] = ACTIONS(327),
    [anon_sym_2_GT_GT] = ACTIONS(327),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_CR] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(160),
    [anon_sym_PIPEH] = ACTIONS(158),
    [anon_sym_PIPET] = ACTIONS(158),
    [anon_sym_AT_AT] = ACTIONS(160),
    [anon_sym_AT_ATdbt] = ACTIONS(160),
    [anon_sym_AT_ATdbta] = ACTIONS(158),
    [anon_sym_AT_ATdbtb] = ACTIONS(158),
    [anon_sym_AT_ATdbts] = ACTIONS(158),
    [anon_sym_AT_AT_DOT] = ACTIONS(158),
    [anon_sym_AT_AT_EQ] = ACTIONS(158),
    [anon_sym_AT_ATk] = ACTIONS(158),
    [anon_sym_AT_ATt] = ACTIONS(158),
    [anon_sym_AT_ATb] = ACTIONS(158),
    [anon_sym_AT_ATi] = ACTIONS(160),
    [anon_sym_AT_ATiS] = ACTIONS(158),
    [anon_sym_AT_ATf] = ACTIONS(158),
    [anon_sym_AT_ATs_COLON] = ACTIONS(158),
    [anon_sym_AT_ATc_COLON] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_AT_BANG] = ACTIONS(158),
    [anon_sym_AT_LPAREN] = ACTIONS(158),
    [anon_sym_ATa_COLON] = ACTIONS(158),
    [anon_sym_ATb_COLON] = ACTIONS(158),
    [anon_sym_ATB_COLON] = ACTIONS(158),
    [anon_sym_ATe_COLON] = ACTIONS(158),
    [anon_sym_ATF_COLON] = ACTIONS(158),
    [anon_sym_ATi_COLON] = ACTIONS(158),
    [anon_sym_ATk_COLON] = ACTIONS(158),
    [anon_sym_ATo_COLON] = ACTIONS(158),
    [anon_sym_ATr_COLON] = ACTIONS(158),
    [anon_sym_ATf_COLON] = ACTIONS(158),
    [anon_sym_ATs_COLON] = ACTIONS(158),
    [anon_sym_ATx_COLON] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_1_GT] = ACTIONS(160),
    [anon_sym_2_GT] = ACTIONS(160),
    [anon_sym_H_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [anon_sym_1_GT_GT] = ACTIONS(158),
    [anon_sym_2_GT_GT] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_PIPEH] = ACTIONS(331),
    [anon_sym_PIPET] = ACTIONS(331),
    [anon_sym_AT_AT] = ACTIONS(333),
    [anon_sym_AT_ATdbt] = ACTIONS(333),
    [anon_sym_AT_ATdbta] = ACTIONS(331),
    [anon_sym_AT_ATdbtb] = ACTIONS(331),
    [anon_sym_AT_ATdbts] = ACTIONS(331),
    [anon_sym_AT_AT_DOT] = ACTIONS(331),
    [anon_sym_AT_AT_EQ] = ACTIONS(331),
    [anon_sym_AT_ATk] = ACTIONS(331),
    [anon_sym_AT_ATt] = ACTIONS(331),
    [anon_sym_AT_ATb] = ACTIONS(331),
    [anon_sym_AT_ATi] = ACTIONS(333),
    [anon_sym_AT_ATiS] = ACTIONS(331),
    [anon_sym_AT_ATf] = ACTIONS(331),
    [anon_sym_AT_ATs_COLON] = ACTIONS(331),
    [anon_sym_AT_ATc_COLON] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(333),
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
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_1_GT] = ACTIONS(333),
    [anon_sym_2_GT] = ACTIONS(333),
    [anon_sym_H_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_1_GT_GT] = ACTIONS(331),
    [anon_sym_2_GT_GT] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(331),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_CR] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_PIPE] = ACTIONS(337),
    [anon_sym_PIPEH] = ACTIONS(335),
    [anon_sym_PIPET] = ACTIONS(335),
    [anon_sym_AT_AT] = ACTIONS(337),
    [anon_sym_AT_ATdbt] = ACTIONS(337),
    [anon_sym_AT_ATdbta] = ACTIONS(335),
    [anon_sym_AT_ATdbtb] = ACTIONS(335),
    [anon_sym_AT_ATdbts] = ACTIONS(335),
    [anon_sym_AT_AT_DOT] = ACTIONS(335),
    [anon_sym_AT_AT_EQ] = ACTIONS(335),
    [anon_sym_AT_ATk] = ACTIONS(335),
    [anon_sym_AT_ATt] = ACTIONS(335),
    [anon_sym_AT_ATb] = ACTIONS(335),
    [anon_sym_AT_ATi] = ACTIONS(337),
    [anon_sym_AT_ATiS] = ACTIONS(335),
    [anon_sym_AT_ATf] = ACTIONS(335),
    [anon_sym_AT_ATs_COLON] = ACTIONS(335),
    [anon_sym_AT_ATc_COLON] = ACTIONS(335),
    [anon_sym_AT] = ACTIONS(337),
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
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_1_GT] = ACTIONS(337),
    [anon_sym_2_GT] = ACTIONS(337),
    [anon_sym_H_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(335),
    [anon_sym_1_GT_GT] = ACTIONS(335),
    [anon_sym_2_GT_GT] = ACTIONS(335),
    [anon_sym_BQUOTE] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_CR] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_PIPEH] = ACTIONS(339),
    [anon_sym_PIPET] = ACTIONS(339),
    [anon_sym_AT_AT] = ACTIONS(341),
    [anon_sym_AT_ATdbt] = ACTIONS(341),
    [anon_sym_AT_ATdbta] = ACTIONS(339),
    [anon_sym_AT_ATdbtb] = ACTIONS(339),
    [anon_sym_AT_ATdbts] = ACTIONS(339),
    [anon_sym_AT_AT_DOT] = ACTIONS(339),
    [anon_sym_AT_AT_EQ] = ACTIONS(339),
    [anon_sym_AT_ATk] = ACTIONS(339),
    [anon_sym_AT_ATt] = ACTIONS(339),
    [anon_sym_AT_ATb] = ACTIONS(339),
    [anon_sym_AT_ATi] = ACTIONS(341),
    [anon_sym_AT_ATiS] = ACTIONS(339),
    [anon_sym_AT_ATf] = ACTIONS(339),
    [anon_sym_AT_ATs_COLON] = ACTIONS(339),
    [anon_sym_AT_ATc_COLON] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(341),
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
    [anon_sym_RPAREN] = ACTIONS(339),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_1_GT] = ACTIONS(341),
    [anon_sym_2_GT] = ACTIONS(341),
    [anon_sym_H_GT] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [anon_sym_1_GT_GT] = ACTIONS(339),
    [anon_sym_2_GT_GT] = ACTIONS(339),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_PIPET] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(91),
    [anon_sym_AT_ATdbt] = ACTIONS(91),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(91),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(91),
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
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_1_GT] = ACTIONS(91),
    [anon_sym_2_GT] = ACTIONS(91),
    [anon_sym_H_GT] = ACTIONS(89),
    [anon_sym_GT_GT] = ACTIONS(89),
    [anon_sym_1_GT_GT] = ACTIONS(89),
    [anon_sym_2_GT_GT] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_CR] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPEH] = ACTIONS(343),
    [anon_sym_PIPET] = ACTIONS(343),
    [anon_sym_AT_AT] = ACTIONS(345),
    [anon_sym_AT_ATdbt] = ACTIONS(345),
    [anon_sym_AT_ATdbta] = ACTIONS(343),
    [anon_sym_AT_ATdbtb] = ACTIONS(343),
    [anon_sym_AT_ATdbts] = ACTIONS(343),
    [anon_sym_AT_AT_DOT] = ACTIONS(343),
    [anon_sym_AT_AT_EQ] = ACTIONS(343),
    [anon_sym_AT_ATk] = ACTIONS(343),
    [anon_sym_AT_ATt] = ACTIONS(343),
    [anon_sym_AT_ATb] = ACTIONS(343),
    [anon_sym_AT_ATi] = ACTIONS(345),
    [anon_sym_AT_ATiS] = ACTIONS(343),
    [anon_sym_AT_ATf] = ACTIONS(343),
    [anon_sym_AT_ATs_COLON] = ACTIONS(343),
    [anon_sym_AT_ATc_COLON] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(345),
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
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_1_GT] = ACTIONS(345),
    [anon_sym_2_GT] = ACTIONS(345),
    [anon_sym_H_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [anon_sym_1_GT_GT] = ACTIONS(343),
    [anon_sym_2_GT_GT] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_CR] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(349),
    [anon_sym_PIPEH] = ACTIONS(347),
    [anon_sym_PIPET] = ACTIONS(347),
    [anon_sym_AT_AT] = ACTIONS(349),
    [anon_sym_AT_ATdbt] = ACTIONS(349),
    [anon_sym_AT_ATdbta] = ACTIONS(347),
    [anon_sym_AT_ATdbtb] = ACTIONS(347),
    [anon_sym_AT_ATdbts] = ACTIONS(347),
    [anon_sym_AT_AT_DOT] = ACTIONS(347),
    [anon_sym_AT_AT_EQ] = ACTIONS(347),
    [anon_sym_AT_ATk] = ACTIONS(347),
    [anon_sym_AT_ATt] = ACTIONS(347),
    [anon_sym_AT_ATb] = ACTIONS(347),
    [anon_sym_AT_ATi] = ACTIONS(349),
    [anon_sym_AT_ATiS] = ACTIONS(347),
    [anon_sym_AT_ATf] = ACTIONS(347),
    [anon_sym_AT_ATs_COLON] = ACTIONS(347),
    [anon_sym_AT_ATc_COLON] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(349),
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
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_1_GT] = ACTIONS(349),
    [anon_sym_2_GT] = ACTIONS(349),
    [anon_sym_H_GT] = ACTIONS(347),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_1_GT_GT] = ACTIONS(347),
    [anon_sym_2_GT_GT] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_CR] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(353),
    [anon_sym_PIPEH] = ACTIONS(351),
    [anon_sym_PIPET] = ACTIONS(351),
    [anon_sym_AT_AT] = ACTIONS(353),
    [anon_sym_AT_ATdbt] = ACTIONS(353),
    [anon_sym_AT_ATdbta] = ACTIONS(351),
    [anon_sym_AT_ATdbtb] = ACTIONS(351),
    [anon_sym_AT_ATdbts] = ACTIONS(351),
    [anon_sym_AT_AT_DOT] = ACTIONS(351),
    [anon_sym_AT_AT_EQ] = ACTIONS(351),
    [anon_sym_AT_ATk] = ACTIONS(351),
    [anon_sym_AT_ATt] = ACTIONS(351),
    [anon_sym_AT_ATb] = ACTIONS(351),
    [anon_sym_AT_ATi] = ACTIONS(353),
    [anon_sym_AT_ATiS] = ACTIONS(351),
    [anon_sym_AT_ATf] = ACTIONS(351),
    [anon_sym_AT_ATs_COLON] = ACTIONS(351),
    [anon_sym_AT_ATc_COLON] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(353),
    [anon_sym_AT_BANG] = ACTIONS(351),
    [anon_sym_AT_LPAREN] = ACTIONS(351),
    [anon_sym_ATa_COLON] = ACTIONS(351),
    [anon_sym_ATb_COLON] = ACTIONS(351),
    [anon_sym_ATB_COLON] = ACTIONS(351),
    [anon_sym_ATe_COLON] = ACTIONS(351),
    [anon_sym_ATF_COLON] = ACTIONS(351),
    [anon_sym_ATi_COLON] = ACTIONS(351),
    [anon_sym_ATk_COLON] = ACTIONS(351),
    [anon_sym_ATo_COLON] = ACTIONS(351),
    [anon_sym_ATr_COLON] = ACTIONS(351),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(351),
    [anon_sym_ATx_COLON] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_1_GT] = ACTIONS(353),
    [anon_sym_2_GT] = ACTIONS(353),
    [anon_sym_H_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [anon_sym_1_GT_GT] = ACTIONS(351),
    [anon_sym_2_GT_GT] = ACTIONS(351),
    [anon_sym_BQUOTE] = ACTIONS(351),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_CR] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(357),
    [anon_sym_PIPEH] = ACTIONS(355),
    [anon_sym_PIPET] = ACTIONS(355),
    [anon_sym_AT_AT] = ACTIONS(357),
    [anon_sym_AT_ATdbt] = ACTIONS(357),
    [anon_sym_AT_ATdbta] = ACTIONS(355),
    [anon_sym_AT_ATdbtb] = ACTIONS(355),
    [anon_sym_AT_ATdbts] = ACTIONS(355),
    [anon_sym_AT_AT_DOT] = ACTIONS(355),
    [anon_sym_AT_AT_EQ] = ACTIONS(355),
    [anon_sym_AT_ATk] = ACTIONS(355),
    [anon_sym_AT_ATt] = ACTIONS(355),
    [anon_sym_AT_ATb] = ACTIONS(355),
    [anon_sym_AT_ATi] = ACTIONS(357),
    [anon_sym_AT_ATiS] = ACTIONS(355),
    [anon_sym_AT_ATf] = ACTIONS(355),
    [anon_sym_AT_ATs_COLON] = ACTIONS(355),
    [anon_sym_AT_ATc_COLON] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(357),
    [anon_sym_AT_BANG] = ACTIONS(355),
    [anon_sym_AT_LPAREN] = ACTIONS(355),
    [anon_sym_ATa_COLON] = ACTIONS(355),
    [anon_sym_ATb_COLON] = ACTIONS(355),
    [anon_sym_ATB_COLON] = ACTIONS(355),
    [anon_sym_ATe_COLON] = ACTIONS(355),
    [anon_sym_ATF_COLON] = ACTIONS(355),
    [anon_sym_ATi_COLON] = ACTIONS(355),
    [anon_sym_ATk_COLON] = ACTIONS(355),
    [anon_sym_ATo_COLON] = ACTIONS(355),
    [anon_sym_ATr_COLON] = ACTIONS(355),
    [anon_sym_ATf_COLON] = ACTIONS(355),
    [anon_sym_ATs_COLON] = ACTIONS(355),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_1_GT] = ACTIONS(357),
    [anon_sym_2_GT] = ACTIONS(357),
    [anon_sym_H_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [anon_sym_1_GT_GT] = ACTIONS(355),
    [anon_sym_2_GT_GT] = ACTIONS(355),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_PIPE] = ACTIONS(361),
    [anon_sym_PIPEH] = ACTIONS(359),
    [anon_sym_PIPET] = ACTIONS(359),
    [anon_sym_AT_AT] = ACTIONS(361),
    [anon_sym_AT_ATdbt] = ACTIONS(361),
    [anon_sym_AT_ATdbta] = ACTIONS(359),
    [anon_sym_AT_ATdbtb] = ACTIONS(359),
    [anon_sym_AT_ATdbts] = ACTIONS(359),
    [anon_sym_AT_AT_DOT] = ACTIONS(359),
    [anon_sym_AT_AT_EQ] = ACTIONS(359),
    [anon_sym_AT_ATk] = ACTIONS(359),
    [anon_sym_AT_ATt] = ACTIONS(359),
    [anon_sym_AT_ATb] = ACTIONS(359),
    [anon_sym_AT_ATi] = ACTIONS(361),
    [anon_sym_AT_ATiS] = ACTIONS(359),
    [anon_sym_AT_ATf] = ACTIONS(359),
    [anon_sym_AT_ATs_COLON] = ACTIONS(359),
    [anon_sym_AT_ATc_COLON] = ACTIONS(359),
    [anon_sym_AT] = ACTIONS(361),
    [anon_sym_AT_BANG] = ACTIONS(359),
    [anon_sym_AT_LPAREN] = ACTIONS(359),
    [anon_sym_ATa_COLON] = ACTIONS(359),
    [anon_sym_ATb_COLON] = ACTIONS(359),
    [anon_sym_ATB_COLON] = ACTIONS(359),
    [anon_sym_ATe_COLON] = ACTIONS(359),
    [anon_sym_ATF_COLON] = ACTIONS(359),
    [anon_sym_ATi_COLON] = ACTIONS(359),
    [anon_sym_ATk_COLON] = ACTIONS(359),
    [anon_sym_ATo_COLON] = ACTIONS(359),
    [anon_sym_ATr_COLON] = ACTIONS(359),
    [anon_sym_ATf_COLON] = ACTIONS(359),
    [anon_sym_ATs_COLON] = ACTIONS(359),
    [anon_sym_ATx_COLON] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_1_GT] = ACTIONS(361),
    [anon_sym_2_GT] = ACTIONS(361),
    [anon_sym_H_GT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_1_GT_GT] = ACTIONS(359),
    [anon_sym_2_GT_GT] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_CR] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(359),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_PIPEH] = ACTIONS(363),
    [anon_sym_PIPET] = ACTIONS(363),
    [anon_sym_AT_AT] = ACTIONS(365),
    [anon_sym_AT_ATdbt] = ACTIONS(365),
    [anon_sym_AT_ATdbta] = ACTIONS(363),
    [anon_sym_AT_ATdbtb] = ACTIONS(363),
    [anon_sym_AT_ATdbts] = ACTIONS(363),
    [anon_sym_AT_AT_DOT] = ACTIONS(363),
    [anon_sym_AT_AT_EQ] = ACTIONS(363),
    [anon_sym_AT_ATk] = ACTIONS(363),
    [anon_sym_AT_ATt] = ACTIONS(363),
    [anon_sym_AT_ATb] = ACTIONS(363),
    [anon_sym_AT_ATi] = ACTIONS(365),
    [anon_sym_AT_ATiS] = ACTIONS(363),
    [anon_sym_AT_ATf] = ACTIONS(363),
    [anon_sym_AT_ATs_COLON] = ACTIONS(363),
    [anon_sym_AT_ATc_COLON] = ACTIONS(363),
    [anon_sym_AT] = ACTIONS(365),
    [anon_sym_AT_BANG] = ACTIONS(363),
    [anon_sym_AT_LPAREN] = ACTIONS(363),
    [anon_sym_ATa_COLON] = ACTIONS(363),
    [anon_sym_ATb_COLON] = ACTIONS(363),
    [anon_sym_ATB_COLON] = ACTIONS(363),
    [anon_sym_ATe_COLON] = ACTIONS(363),
    [anon_sym_ATF_COLON] = ACTIONS(363),
    [anon_sym_ATi_COLON] = ACTIONS(363),
    [anon_sym_ATk_COLON] = ACTIONS(363),
    [anon_sym_ATo_COLON] = ACTIONS(363),
    [anon_sym_ATr_COLON] = ACTIONS(363),
    [anon_sym_ATf_COLON] = ACTIONS(363),
    [anon_sym_ATs_COLON] = ACTIONS(363),
    [anon_sym_ATx_COLON] = ACTIONS(363),
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_1_GT] = ACTIONS(365),
    [anon_sym_2_GT] = ACTIONS(365),
    [anon_sym_H_GT] = ACTIONS(363),
    [anon_sym_GT_GT] = ACTIONS(363),
    [anon_sym_1_GT_GT] = ACTIONS(363),
    [anon_sym_2_GT_GT] = ACTIONS(363),
    [anon_sym_BQUOTE] = ACTIONS(363),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_CR] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
  },
  [98] = {
    [sym_pipe_second_command] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PIPEH] = ACTIONS(369),
    [anon_sym_PIPET] = ACTIONS(369),
    [anon_sym_AT_AT] = ACTIONS(369),
    [anon_sym_AT_ATdbt] = ACTIONS(369),
    [anon_sym_AT_ATdbta] = ACTIONS(369),
    [anon_sym_AT_ATdbtb] = ACTIONS(369),
    [anon_sym_AT_ATdbts] = ACTIONS(369),
    [anon_sym_AT_AT_DOT] = ACTIONS(369),
    [anon_sym_AT_AT_EQ] = ACTIONS(369),
    [anon_sym_AT_ATk] = ACTIONS(369),
    [anon_sym_AT_ATt] = ACTIONS(369),
    [anon_sym_AT_ATb] = ACTIONS(369),
    [anon_sym_AT_ATi] = ACTIONS(369),
    [anon_sym_AT_ATiS] = ACTIONS(369),
    [anon_sym_AT_ATf] = ACTIONS(369),
    [anon_sym_AT_ATs_COLON] = ACTIONS(369),
    [anon_sym_AT_ATc_COLON] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_AT_BANG] = ACTIONS(369),
    [anon_sym_AT_LPAREN] = ACTIONS(369),
    [anon_sym_ATa_COLON] = ACTIONS(369),
    [anon_sym_ATb_COLON] = ACTIONS(369),
    [anon_sym_ATB_COLON] = ACTIONS(369),
    [anon_sym_ATe_COLON] = ACTIONS(369),
    [anon_sym_ATF_COLON] = ACTIONS(369),
    [anon_sym_ATi_COLON] = ACTIONS(369),
    [anon_sym_ATk_COLON] = ACTIONS(369),
    [anon_sym_ATo_COLON] = ACTIONS(369),
    [anon_sym_ATr_COLON] = ACTIONS(369),
    [anon_sym_ATf_COLON] = ACTIONS(369),
    [anon_sym_ATs_COLON] = ACTIONS(369),
    [anon_sym_ATx_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_1_GT] = ACTIONS(369),
    [anon_sym_2_GT] = ACTIONS(369),
    [anon_sym_H_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_1_GT_GT] = ACTIONS(369),
    [anon_sym_2_GT_GT] = ACTIONS(369),
    [sym__any_command] = ACTIONS(371),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(369),
    [anon_sym_CR] = ACTIONS(369),
    [anon_sym_SEMI] = ACTIONS(369),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_PIPE] = ACTIONS(375),
    [anon_sym_PIPEH] = ACTIONS(373),
    [anon_sym_PIPET] = ACTIONS(373),
    [anon_sym_AT_AT] = ACTIONS(375),
    [anon_sym_AT_ATdbt] = ACTIONS(375),
    [anon_sym_AT_ATdbta] = ACTIONS(373),
    [anon_sym_AT_ATdbtb] = ACTIONS(373),
    [anon_sym_AT_ATdbts] = ACTIONS(373),
    [anon_sym_AT_AT_DOT] = ACTIONS(373),
    [anon_sym_AT_AT_EQ] = ACTIONS(373),
    [anon_sym_AT_ATk] = ACTIONS(373),
    [anon_sym_AT_ATt] = ACTIONS(373),
    [anon_sym_AT_ATb] = ACTIONS(373),
    [anon_sym_AT_ATi] = ACTIONS(375),
    [anon_sym_AT_ATiS] = ACTIONS(373),
    [anon_sym_AT_ATf] = ACTIONS(373),
    [anon_sym_AT_ATs_COLON] = ACTIONS(373),
    [anon_sym_AT_ATc_COLON] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(375),
    [anon_sym_AT_BANG] = ACTIONS(373),
    [anon_sym_AT_LPAREN] = ACTIONS(373),
    [anon_sym_ATa_COLON] = ACTIONS(373),
    [anon_sym_ATb_COLON] = ACTIONS(373),
    [anon_sym_ATB_COLON] = ACTIONS(373),
    [anon_sym_ATe_COLON] = ACTIONS(373),
    [anon_sym_ATF_COLON] = ACTIONS(373),
    [anon_sym_ATi_COLON] = ACTIONS(373),
    [anon_sym_ATk_COLON] = ACTIONS(373),
    [anon_sym_ATo_COLON] = ACTIONS(373),
    [anon_sym_ATr_COLON] = ACTIONS(373),
    [anon_sym_ATf_COLON] = ACTIONS(373),
    [anon_sym_ATs_COLON] = ACTIONS(373),
    [anon_sym_ATx_COLON] = ACTIONS(373),
    [anon_sym_RPAREN] = ACTIONS(373),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_1_GT] = ACTIONS(375),
    [anon_sym_2_GT] = ACTIONS(375),
    [anon_sym_H_GT] = ACTIONS(373),
    [anon_sym_GT_GT] = ACTIONS(373),
    [anon_sym_1_GT_GT] = ACTIONS(373),
    [anon_sym_2_GT_GT] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(373),
    [anon_sym_CR] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
  },
  [100] = {
    [sym_system_arg] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPEH] = ACTIONS(379),
    [anon_sym_PIPET] = ACTIONS(379),
    [anon_sym_AT_AT] = ACTIONS(379),
    [anon_sym_AT_ATdbt] = ACTIONS(379),
    [anon_sym_AT_ATdbta] = ACTIONS(379),
    [anon_sym_AT_ATdbtb] = ACTIONS(379),
    [anon_sym_AT_ATdbts] = ACTIONS(379),
    [anon_sym_AT_AT_DOT] = ACTIONS(379),
    [anon_sym_AT_AT_EQ] = ACTIONS(379),
    [anon_sym_AT_ATk] = ACTIONS(379),
    [anon_sym_AT_ATt] = ACTIONS(379),
    [anon_sym_AT_ATb] = ACTIONS(379),
    [anon_sym_AT_ATi] = ACTIONS(379),
    [anon_sym_AT_ATiS] = ACTIONS(379),
    [anon_sym_AT_ATf] = ACTIONS(379),
    [anon_sym_AT_ATs_COLON] = ACTIONS(379),
    [anon_sym_AT_ATc_COLON] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_AT_BANG] = ACTIONS(379),
    [anon_sym_AT_LPAREN] = ACTIONS(379),
    [anon_sym_ATa_COLON] = ACTIONS(379),
    [anon_sym_ATb_COLON] = ACTIONS(379),
    [anon_sym_ATB_COLON] = ACTIONS(379),
    [anon_sym_ATe_COLON] = ACTIONS(379),
    [anon_sym_ATF_COLON] = ACTIONS(379),
    [anon_sym_ATi_COLON] = ACTIONS(379),
    [anon_sym_ATk_COLON] = ACTIONS(379),
    [anon_sym_ATo_COLON] = ACTIONS(379),
    [anon_sym_ATr_COLON] = ACTIONS(379),
    [anon_sym_ATf_COLON] = ACTIONS(379),
    [anon_sym_ATs_COLON] = ACTIONS(379),
    [anon_sym_ATx_COLON] = ACTIONS(379),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_1_GT] = ACTIONS(379),
    [anon_sym_2_GT] = ACTIONS(379),
    [anon_sym_H_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_1_GT_GT] = ACTIONS(379),
    [anon_sym_2_GT_GT] = ACTIONS(379),
    [sym__any_command] = ACTIONS(381),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_CR] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(379),
  },
  [101] = {
    [sym_system_arg] = STATE(62),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPEH] = ACTIONS(379),
    [anon_sym_PIPET] = ACTIONS(379),
    [anon_sym_AT_AT] = ACTIONS(379),
    [anon_sym_AT_ATdbt] = ACTIONS(379),
    [anon_sym_AT_ATdbta] = ACTIONS(379),
    [anon_sym_AT_ATdbtb] = ACTIONS(379),
    [anon_sym_AT_ATdbts] = ACTIONS(379),
    [anon_sym_AT_AT_DOT] = ACTIONS(379),
    [anon_sym_AT_AT_EQ] = ACTIONS(379),
    [anon_sym_AT_ATk] = ACTIONS(379),
    [anon_sym_AT_ATt] = ACTIONS(379),
    [anon_sym_AT_ATb] = ACTIONS(379),
    [anon_sym_AT_ATi] = ACTIONS(379),
    [anon_sym_AT_ATiS] = ACTIONS(379),
    [anon_sym_AT_ATf] = ACTIONS(379),
    [anon_sym_AT_ATs_COLON] = ACTIONS(379),
    [anon_sym_AT_ATc_COLON] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_AT_BANG] = ACTIONS(379),
    [anon_sym_AT_LPAREN] = ACTIONS(379),
    [anon_sym_ATa_COLON] = ACTIONS(379),
    [anon_sym_ATb_COLON] = ACTIONS(379),
    [anon_sym_ATB_COLON] = ACTIONS(379),
    [anon_sym_ATe_COLON] = ACTIONS(379),
    [anon_sym_ATF_COLON] = ACTIONS(379),
    [anon_sym_ATi_COLON] = ACTIONS(379),
    [anon_sym_ATk_COLON] = ACTIONS(379),
    [anon_sym_ATo_COLON] = ACTIONS(379),
    [anon_sym_ATr_COLON] = ACTIONS(379),
    [anon_sym_ATf_COLON] = ACTIONS(379),
    [anon_sym_ATs_COLON] = ACTIONS(379),
    [anon_sym_ATx_COLON] = ACTIONS(379),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_1_GT] = ACTIONS(379),
    [anon_sym_2_GT] = ACTIONS(379),
    [anon_sym_H_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_1_GT_GT] = ACTIONS(379),
    [anon_sym_2_GT_GT] = ACTIONS(379),
    [sym__any_command] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(379),
  },
  [102] = {
    [sym_pipe_second_command] = STATE(99),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PIPEH] = ACTIONS(369),
    [anon_sym_PIPET] = ACTIONS(369),
    [anon_sym_AT_AT] = ACTIONS(369),
    [anon_sym_AT_ATdbt] = ACTIONS(369),
    [anon_sym_AT_ATdbta] = ACTIONS(369),
    [anon_sym_AT_ATdbtb] = ACTIONS(369),
    [anon_sym_AT_ATdbts] = ACTIONS(369),
    [anon_sym_AT_AT_DOT] = ACTIONS(369),
    [anon_sym_AT_AT_EQ] = ACTIONS(369),
    [anon_sym_AT_ATk] = ACTIONS(369),
    [anon_sym_AT_ATt] = ACTIONS(369),
    [anon_sym_AT_ATb] = ACTIONS(369),
    [anon_sym_AT_ATi] = ACTIONS(369),
    [anon_sym_AT_ATiS] = ACTIONS(369),
    [anon_sym_AT_ATf] = ACTIONS(369),
    [anon_sym_AT_ATs_COLON] = ACTIONS(369),
    [anon_sym_AT_ATc_COLON] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_AT_BANG] = ACTIONS(369),
    [anon_sym_AT_LPAREN] = ACTIONS(369),
    [anon_sym_ATa_COLON] = ACTIONS(369),
    [anon_sym_ATb_COLON] = ACTIONS(369),
    [anon_sym_ATB_COLON] = ACTIONS(369),
    [anon_sym_ATe_COLON] = ACTIONS(369),
    [anon_sym_ATF_COLON] = ACTIONS(369),
    [anon_sym_ATi_COLON] = ACTIONS(369),
    [anon_sym_ATk_COLON] = ACTIONS(369),
    [anon_sym_ATo_COLON] = ACTIONS(369),
    [anon_sym_ATr_COLON] = ACTIONS(369),
    [anon_sym_ATf_COLON] = ACTIONS(369),
    [anon_sym_ATs_COLON] = ACTIONS(369),
    [anon_sym_ATx_COLON] = ACTIONS(369),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_1_GT] = ACTIONS(369),
    [anon_sym_2_GT] = ACTIONS(369),
    [anon_sym_H_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_1_GT_GT] = ACTIONS(369),
    [anon_sym_2_GT_GT] = ACTIONS(369),
    [sym__any_command] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(369),
  },
  [103] = {
    [sym__eq_sep_args] = STATE(67),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPEH] = ACTIONS(319),
    [anon_sym_PIPET] = ACTIONS(319),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_1_GT] = ACTIONS(319),
    [anon_sym_2_GT] = ACTIONS(319),
    [anon_sym_H_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_1_GT_GT] = ACTIONS(319),
    [anon_sym_2_GT_GT] = ACTIONS(319),
    [sym_eq_sep_key] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(319),
  },
  [104] = {
    [sym__eq_sep_args] = STATE(67),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPEH] = ACTIONS(319),
    [anon_sym_PIPET] = ACTIONS(319),
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
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_1_GT] = ACTIONS(319),
    [anon_sym_2_GT] = ACTIONS(319),
    [anon_sym_H_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_1_GT_GT] = ACTIONS(319),
    [anon_sym_2_GT_GT] = ACTIONS(319),
    [sym_eq_sep_key] = ACTIONS(321),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(319),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_1_GT] = ACTIONS(453),
    [anon_sym_2_GT] = ACTIONS(453),
    [anon_sym_H_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_1_GT_GT] = ACTIONS(383),
    [anon_sym_2_GT_GT] = ACTIONS(383),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_CR] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
  },
  [106] = {
    [sym_system_arg] = STATE(62),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPEH] = ACTIONS(379),
    [anon_sym_PIPET] = ACTIONS(379),
    [anon_sym_AT_AT] = ACTIONS(379),
    [anon_sym_AT_ATdbt] = ACTIONS(379),
    [anon_sym_AT_ATdbta] = ACTIONS(379),
    [anon_sym_AT_ATdbtb] = ACTIONS(379),
    [anon_sym_AT_ATdbts] = ACTIONS(379),
    [anon_sym_AT_AT_DOT] = ACTIONS(379),
    [anon_sym_AT_AT_EQ] = ACTIONS(379),
    [anon_sym_AT_ATk] = ACTIONS(379),
    [anon_sym_AT_ATt] = ACTIONS(379),
    [anon_sym_AT_ATb] = ACTIONS(379),
    [anon_sym_AT_ATi] = ACTIONS(379),
    [anon_sym_AT_ATiS] = ACTIONS(379),
    [anon_sym_AT_ATf] = ACTIONS(379),
    [anon_sym_AT_ATs_COLON] = ACTIONS(379),
    [anon_sym_AT_ATc_COLON] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_AT_BANG] = ACTIONS(379),
    [anon_sym_AT_LPAREN] = ACTIONS(379),
    [anon_sym_ATa_COLON] = ACTIONS(379),
    [anon_sym_ATb_COLON] = ACTIONS(379),
    [anon_sym_ATB_COLON] = ACTIONS(379),
    [anon_sym_ATe_COLON] = ACTIONS(379),
    [anon_sym_ATF_COLON] = ACTIONS(379),
    [anon_sym_ATi_COLON] = ACTIONS(379),
    [anon_sym_ATk_COLON] = ACTIONS(379),
    [anon_sym_ATo_COLON] = ACTIONS(379),
    [anon_sym_ATr_COLON] = ACTIONS(379),
    [anon_sym_ATf_COLON] = ACTIONS(379),
    [anon_sym_ATs_COLON] = ACTIONS(379),
    [anon_sym_ATx_COLON] = ACTIONS(379),
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_1_GT] = ACTIONS(379),
    [anon_sym_2_GT] = ACTIONS(379),
    [anon_sym_H_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_1_GT_GT] = ACTIONS(379),
    [anon_sym_2_GT_GT] = ACTIONS(379),
    [sym__any_command] = ACTIONS(381),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(379),
  },
  [107] = {
    [sym_pipe_second_command] = STATE(99),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PIPEH] = ACTIONS(369),
    [anon_sym_PIPET] = ACTIONS(369),
    [anon_sym_AT_AT] = ACTIONS(369),
    [anon_sym_AT_ATdbt] = ACTIONS(369),
    [anon_sym_AT_ATdbta] = ACTIONS(369),
    [anon_sym_AT_ATdbtb] = ACTIONS(369),
    [anon_sym_AT_ATdbts] = ACTIONS(369),
    [anon_sym_AT_AT_DOT] = ACTIONS(369),
    [anon_sym_AT_AT_EQ] = ACTIONS(369),
    [anon_sym_AT_ATk] = ACTIONS(369),
    [anon_sym_AT_ATt] = ACTIONS(369),
    [anon_sym_AT_ATb] = ACTIONS(369),
    [anon_sym_AT_ATi] = ACTIONS(369),
    [anon_sym_AT_ATiS] = ACTIONS(369),
    [anon_sym_AT_ATf] = ACTIONS(369),
    [anon_sym_AT_ATs_COLON] = ACTIONS(369),
    [anon_sym_AT_ATc_COLON] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_AT_BANG] = ACTIONS(369),
    [anon_sym_AT_LPAREN] = ACTIONS(369),
    [anon_sym_ATa_COLON] = ACTIONS(369),
    [anon_sym_ATb_COLON] = ACTIONS(369),
    [anon_sym_ATB_COLON] = ACTIONS(369),
    [anon_sym_ATe_COLON] = ACTIONS(369),
    [anon_sym_ATF_COLON] = ACTIONS(369),
    [anon_sym_ATi_COLON] = ACTIONS(369),
    [anon_sym_ATk_COLON] = ACTIONS(369),
    [anon_sym_ATo_COLON] = ACTIONS(369),
    [anon_sym_ATr_COLON] = ACTIONS(369),
    [anon_sym_ATf_COLON] = ACTIONS(369),
    [anon_sym_ATs_COLON] = ACTIONS(369),
    [anon_sym_ATx_COLON] = ACTIONS(369),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_1_GT] = ACTIONS(369),
    [anon_sym_2_GT] = ACTIONS(369),
    [anon_sym_H_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(369),
    [anon_sym_1_GT_GT] = ACTIONS(369),
    [anon_sym_2_GT_GT] = ACTIONS(369),
    [sym__any_command] = ACTIONS(371),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(369),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_1_GT] = ACTIONS(457),
    [anon_sym_2_GT] = ACTIONS(459),
    [anon_sym_H_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_1_GT_GT] = ACTIONS(463),
    [anon_sym_2_GT_GT] = ACTIONS(465),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_CR] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(455),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_1_GT] = ACTIONS(469),
    [anon_sym_2_GT] = ACTIONS(469),
    [anon_sym_H_GT] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_1_GT_GT] = ACTIONS(467),
    [anon_sym_2_GT_GT] = ACTIONS(467),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(467),
    [anon_sym_CR] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(467),
  },
  [110] = {
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_1_GT] = ACTIONS(453),
    [anon_sym_2_GT] = ACTIONS(453),
    [anon_sym_H_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_1_GT_GT] = ACTIONS(383),
    [anon_sym_2_GT_GT] = ACTIONS(383),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(383),
  },
  [111] = {
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_1_GT] = ACTIONS(457),
    [anon_sym_2_GT] = ACTIONS(459),
    [anon_sym_H_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_1_GT_GT] = ACTIONS(463),
    [anon_sym_2_GT_GT] = ACTIONS(465),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(455),
  },
  [112] = {
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(475),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_1_GT] = ACTIONS(469),
    [anon_sym_2_GT] = ACTIONS(469),
    [anon_sym_H_GT] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_1_GT_GT] = ACTIONS(467),
    [anon_sym_2_GT_GT] = ACTIONS(467),
    [anon_sym_BQUOTE] = ACTIONS(467),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(467),
  },
  [113] = {
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_1_GT] = ACTIONS(469),
    [anon_sym_2_GT] = ACTIONS(469),
    [anon_sym_H_GT] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(467),
    [anon_sym_1_GT_GT] = ACTIONS(467),
    [anon_sym_2_GT_GT] = ACTIONS(467),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(467),
  },
  [114] = {
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(475),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_1_GT] = ACTIONS(457),
    [anon_sym_2_GT] = ACTIONS(459),
    [anon_sym_H_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(463),
    [anon_sym_1_GT_GT] = ACTIONS(463),
    [anon_sym_2_GT_GT] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(455),
  },
  [115] = {
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(475),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_1_GT] = ACTIONS(453),
    [anon_sym_2_GT] = ACTIONS(453),
    [anon_sym_H_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_1_GT_GT] = ACTIONS(383),
    [anon_sym_2_GT_GT] = ACTIONS(383),
    [anon_sym_BQUOTE] = ACTIONS(383),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(383),
  },
  [116] = {
    [aux_sym_commands_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(481),
    [sym_interpreter_command] = ACTIONS(483),
    [anon_sym_DOT_BANG] = ACTIONS(481),
    [anon_sym_DOT_LPAREN] = ACTIONS(481),
    [anon_sym_DOT_SLASH] = ACTIONS(481),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(481),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(483),
    [aux_sym_interpret_identifier_token1] = ACTIONS(481),
    [sym__point_interpret_identifier] = ACTIONS(483),
    [sym_system_identifier] = ACTIONS(481),
    [sym_pointer_identifier] = ACTIONS(481),
    [sym_macro_identifier] = ACTIONS(481),
    [sym_number] = ACTIONS(481),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_CR] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [sym_cmd_identifier] = ACTIONS(481),
    [sym__help_command] = ACTIONS(481),
    [sym__question_mark_identifier] = ACTIONS(481),
  },
  [117] = {
    [aux_sym__commands_singleline_repeat1] = STATE(117),
    [sym_interpreter_command] = ACTIONS(488),
    [anon_sym_DOT_BANG] = ACTIONS(490),
    [anon_sym_DOT_LPAREN] = ACTIONS(490),
    [anon_sym_DOT_SLASH] = ACTIONS(490),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(490),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(488),
    [aux_sym_interpret_identifier_token1] = ACTIONS(490),
    [sym__point_interpret_identifier] = ACTIONS(488),
    [sym_system_identifier] = ACTIONS(490),
    [sym_pointer_identifier] = ACTIONS(490),
    [sym_macro_identifier] = ACTIONS(490),
    [sym_number] = ACTIONS(490),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(492),
    [sym_cmd_identifier] = ACTIONS(490),
    [sym__help_command] = ACTIONS(490),
    [sym__question_mark_identifier] = ACTIONS(490),
  },
  [118] = {
    [anon_sym_DOT_BANG] = ACTIONS(93),
    [anon_sym_DOT_LPAREN] = ACTIONS(93),
    [anon_sym_DOT_SLASH] = ACTIONS(93),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(95),
    [aux_sym_interpret_identifier_token1] = ACTIONS(93),
    [sym__point_interpret_identifier] = ACTIONS(95),
    [sym_system_identifier] = ACTIONS(93),
    [sym_pointer_identifier] = ACTIONS(93),
    [sym_macro_identifier] = ACTIONS(93),
    [sym_number] = ACTIONS(93),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(93),
    [sym__question_mark_identifier] = ACTIONS(93),
  },
  [119] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(34),
    [aux_sym__interpret_command_repeat1] = STATE(155),
    [anon_sym_] = ACTIONS(495),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [120] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [aux_sym__interpret_command_repeat1] = STATE(119),
    [anon_sym_] = ACTIONS(497),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [121] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [aux_sym__interpret_command_repeat1] = STATE(155),
    [anon_sym_] = ACTIONS(495),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [122] = {
    [sym_arg] = STATE(27),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(27),
    [aux_sym__interpret_command_repeat1] = STATE(121),
    [anon_sym_] = ACTIONS(499),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [123] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [124] = {
    [sym_arg] = STATE(33),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(33),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(505),
    [aux_sym_arg_identifier_token2] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(503),
    [anon_sym_CR] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
  },
  [126] = {
    [sym_arg] = STATE(35),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(35),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [127] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(101),
    [aux_sym_arg_identifier_token2] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
  },
  [128] = {
    [sym_arg] = STATE(78),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [129] = {
    [sym_arg] = STATE(74),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [130] = {
    [sym_arg] = STATE(132),
    [sym_arg_identifier] = STATE(160),
    [sym_quoted_arg] = STATE(160),
    [sym_cmd_substitution_arg] = STATE(160),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(517),
    [aux_sym_arg_identifier_token2] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [sym__comment] = ACTIONS(5),
  },
  [131] = {
    [sym_arg] = STATE(82),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [132] = {
    [sym_arg] = STATE(129),
    [sym_arg_identifier] = STATE(160),
    [sym_quoted_arg] = STATE(160),
    [sym_cmd_substitution_arg] = STATE(160),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(517),
    [aux_sym_arg_identifier_token2] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [sym__comment] = ACTIONS(5),
  },
  [133] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [134] = {
    [sym_arg] = STATE(158),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [135] = {
    [sym_arg] = STATE(76),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [136] = {
    [sym_arg] = STATE(75),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [137] = {
    [sym_arg] = STATE(72),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [138] = {
    [sym_arg] = STATE(152),
    [sym_arg_identifier] = STATE(160),
    [sym_quoted_arg] = STATE(160),
    [sym_cmd_substitution_arg] = STATE(160),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(517),
    [aux_sym_arg_identifier_token2] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [sym__comment] = ACTIONS(5),
  },
  [139] = {
    [sym_arg] = STATE(70),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [140] = {
    [sym_arg] = STATE(93),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [141] = {
    [sym_arg] = STATE(165),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [142] = {
    [sym_arg] = STATE(68),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [143] = {
    [sym_arg] = STATE(79),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [144] = {
    [sym_arg] = STATE(85),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [145] = {
    [sym_arg] = STATE(61),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [146] = {
    [sym_arg] = STATE(55),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [147] = {
    [sym_arg] = STATE(51),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [148] = {
    [sym_arg] = STATE(97),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [149] = {
    [sym_arg] = STATE(95),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [150] = {
    [sym_arg] = STATE(89),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [151] = {
    [sym_arg] = STATE(161),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [152] = {
    [sym_arg] = STATE(90),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [153] = {
    [sym_arg] = STATE(166),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [154] = {
    [sym_arg] = STATE(157),
    [sym_arg_identifier] = STATE(73),
    [sym_quoted_arg] = STATE(73),
    [sym_cmd_substitution_arg] = STATE(73),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(507),
    [aux_sym_arg_identifier_token2] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_SQUOTE] = ACTIONS(511),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(5),
  },
  [155] = {
    [aux_sym__interpret_command_repeat1] = STATE(155),
    [anon_sym_] = ACTIONS(527),
    [aux_sym_arg_identifier_token1] = ACTIONS(530),
    [aux_sym_arg_identifier_token2] = ACTIONS(530),
    [anon_sym_DQUOTE] = ACTIONS(530),
    [anon_sym_SQUOTE] = ACTIONS(530),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(530),
    [anon_sym_BQUOTE] = ACTIONS(530),
    [sym__comment] = ACTIONS(5),
  },
  [156] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(505),
    [aux_sym_arg_identifier_token2] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(503),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(532),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(532),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(532),
    [anon_sym_CR] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [anon_sym_RPAREN] = ACTIONS(534),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(534),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(534),
    [anon_sym_CR] = ACTIONS(534),
    [anon_sym_SEMI] = ACTIONS(534),
  },
  [159] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(5),
  },
  [160] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(156),
    [aux_sym_arg_identifier_token2] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(5),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(536),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(536),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_CR] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(536),
  },
  [162] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(505),
    [aux_sym_arg_identifier_token2] = ACTIONS(505),
    [anon_sym_DQUOTE] = ACTIONS(505),
    [anon_sym_SQUOTE] = ACTIONS(505),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [sym__comment] = ACTIONS(5),
  },
  [163] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
  },
  [164] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(152),
    [aux_sym_arg_identifier_token2] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(5),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(538),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(538),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(538),
    [anon_sym_CR] = ACTIONS(538),
    [anon_sym_SEMI] = ACTIONS(538),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_CR] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(540),
  },
  [167] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(152),
    [aux_sym_arg_identifier_token2] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(5),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_CR] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
  },
  [169] = {
    [aux_sym_commands_repeat2] = STATE(170),
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(544),
    [anon_sym_CR] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
  },
  [170] = {
    [aux_sym_commands_repeat2] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(546),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(544),
    [anon_sym_CR] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
  },
  [171] = {
    [aux_sym_commands_repeat2] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(544),
    [anon_sym_CR] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
  },
  [172] = {
    [aux_sym_commands_repeat2] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(544),
    [anon_sym_CR] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
  },
  [173] = {
    [aux_sym_commands_repeat2] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(548),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(550),
    [anon_sym_CR] = ACTIONS(550),
    [anon_sym_SEMI] = ACTIONS(550),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(548),
    [anon_sym_CR] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(548),
  },
  [175] = {
    [aux_sym__commands_singleline_repeat2] = STATE(180),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(555),
  },
  [176] = {
    [aux_sym__commands_singleline_repeat2] = STATE(177),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(557),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [177] = {
    [aux_sym__commands_singleline_repeat2] = STATE(177),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(563),
  },
  [178] = {
    [aux_sym__commands_singleline_repeat2] = STATE(177),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(566),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [179] = {
    [aux_sym__commands_singleline_repeat2] = STATE(178),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(557),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [180] = {
    [aux_sym__commands_singleline_repeat2] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(555),
  },
  [181] = {
    [aux_sym__commands_singleline_repeat2] = STATE(176),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(553),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [182] = {
    [aux_sym__commands_singleline_repeat2] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(566),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(555),
  },
  [183] = {
    [aux_sym__commands_singleline_repeat2] = STATE(183),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(568),
  },
  [184] = {
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(561),
  },
  [185] = {
    [aux_sym__commands_singleline_repeat2] = STATE(182),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(555),
  },
  [186] = {
    [sym__eq_sep_args] = STATE(83),
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_key] = ACTIONS(321),
    [sym__comment] = ACTIONS(5),
  },
  [187] = {
    [sym_interpret_arg] = STATE(69),
    [anon_sym_] = ACTIONS(5),
    [sym__any_command] = ACTIONS(571),
    [sym__comment] = ACTIONS(5),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_] = ACTIONS(5),
    [sym_macro_call_content] = ACTIONS(575),
    [sym__comment] = ACTIONS(5),
  },
  [189] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [191] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token2] = ACTIONS(581),
    [sym__comment] = ACTIONS(5),
  },
  [192] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(583),
    [sym__comment] = ACTIONS(5),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [194] = {
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_val] = ACTIONS(587),
    [sym__comment] = ACTIONS(5),
  },
  [195] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token2] = ACTIONS(589),
    [sym__comment] = ACTIONS(5),
  },
  [196] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(591),
    [sym__comment] = ACTIONS(5),
  },
  [197] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(3),
  },
  [198] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(3),
  },
  [199] = {
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
  },
  [201] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(597),
    [sym__comment] = ACTIONS(3),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(601),
    [sym__comment] = ACTIONS(5),
  },
  [204] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(603),
    [sym__comment] = ACTIONS(3),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(607),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(609),
    [sym__comment] = ACTIONS(5),
  },
  [209] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token2] = ACTIONS(611),
    [sym__comment] = ACTIONS(5),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(613),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(615),
    [sym__comment] = ACTIONS(5),
  },
  [212] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(617),
    [sym__comment] = ACTIONS(5),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(621),
    [sym__comment] = ACTIONS(5),
  },
  [215] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(623),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [9] = {.count = 1, .reusable = false}, SHIFT(172),
  [11] = {.count = 1, .reusable = true}, SHIFT(187),
  [13] = {.count = 1, .reusable = true}, SHIFT(211),
  [15] = {.count = 1, .reusable = true}, SHIFT(122),
  [17] = {.count = 1, .reusable = true}, SHIFT(84),
  [19] = {.count = 1, .reusable = false}, SHIFT(91),
  [21] = {.count = 1, .reusable = true}, SHIFT(118),
  [23] = {.count = 1, .reusable = false}, SHIFT(23),
  [25] = {.count = 1, .reusable = true}, SHIFT(100),
  [27] = {.count = 1, .reusable = true}, SHIFT(186),
  [29] = {.count = 1, .reusable = true}, SHIFT(203),
  [31] = {.count = 1, .reusable = true}, SHIFT(17),
  [33] = {.count = 1, .reusable = true}, SHIFT(2),
  [35] = {.count = 1, .reusable = true}, SHIFT(29),
  [37] = {.count = 1, .reusable = true}, SHIFT(168),
  [39] = {.count = 1, .reusable = true}, SHIFT(125),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [43] = {.count = 1, .reusable = false}, SHIFT(169),
  [45] = {.count = 1, .reusable = true}, SHIFT(116),
  [47] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(174),
  [51] = {.count = 1, .reusable = false}, SHIFT(181),
  [53] = {.count = 1, .reusable = true}, SHIFT(120),
  [55] = {.count = 1, .reusable = true}, SHIFT(103),
  [57] = {.count = 1, .reusable = true}, SHIFT(101),
  [59] = {.count = 1, .reusable = true}, SHIFT(18),
  [61] = {.count = 1, .reusable = true}, SHIFT(12),
  [63] = {.count = 1, .reusable = true}, SHIFT(36),
  [65] = {.count = 1, .reusable = true}, SHIFT(156),
  [67] = {.count = 1, .reusable = false}, SHIFT(175),
  [69] = {.count = 1, .reusable = true}, SHIFT(104),
  [71] = {.count = 1, .reusable = true}, SHIFT(106),
  [73] = {.count = 1, .reusable = true}, SHIFT(20),
  [75] = {.count = 1, .reusable = true}, SHIFT(10),
  [77] = {.count = 1, .reusable = false}, SHIFT(185),
  [79] = {.count = 1, .reusable = true}, SHIFT(117),
  [81] = {.count = 1, .reusable = false}, SHIFT(184),
  [83] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [85] = {.count = 1, .reusable = false}, SHIFT(179),
  [87] = {.count = 1, .reusable = true}, SHIFT(162),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1, .production_id = 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1, .production_id = 1),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_identifier, 1),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_identifier, 1),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 5),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 5),
  [101] = {.count = 1, .reusable = false}, SHIFT(39),
  [103] = {.count = 1, .reusable = false}, SHIFT(192),
  [105] = {.count = 1, .reusable = false}, SHIFT(191),
  [107] = {.count = 1, .reusable = false}, SHIFT(9),
  [109] = {.count = 1, .reusable = false}, SHIFT(8),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(39),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(192),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(191),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(9),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(8),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [170] = {.count = 1, .reusable = true}, SHIFT(214),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [176] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [178] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(214),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [187] = {.count = 1, .reusable = true}, SHIFT(133),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [193] = {.count = 1, .reusable = true}, SHIFT(188),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(194),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [231] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [295] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [303] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [321] = {.count = 1, .reusable = false}, SHIFT(48),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [371] = {.count = 1, .reusable = false}, SHIFT(50),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [381] = {.count = 1, .reusable = false}, SHIFT(66),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [385] = {.count = 1, .reusable = false}, SHIFT(98),
  [387] = {.count = 1, .reusable = true}, SHIFT(65),
  [389] = {.count = 1, .reusable = true}, SHIFT(86),
  [391] = {.count = 1, .reusable = false}, SHIFT(148),
  [393] = {.count = 1, .reusable = false}, SHIFT(52),
  [395] = {.count = 1, .reusable = true}, SHIFT(52),
  [397] = {.count = 1, .reusable = true}, SHIFT(53),
  [399] = {.count = 1, .reusable = true}, SHIFT(54),
  [401] = {.count = 1, .reusable = true}, SHIFT(149),
  [403] = {.count = 1, .reusable = true}, SHIFT(123),
  [405] = {.count = 1, .reusable = true}, SHIFT(140),
  [407] = {.count = 1, .reusable = true}, SHIFT(57),
  [409] = {.count = 1, .reusable = true}, SHIFT(58),
  [411] = {.count = 1, .reusable = false}, SHIFT(59),
  [413] = {.count = 1, .reusable = true}, SHIFT(60),
  [415] = {.count = 1, .reusable = true}, SHIFT(45),
  [417] = {.count = 1, .reusable = true}, SHIFT(130),
  [419] = {.count = 1, .reusable = true}, SHIFT(19),
  [421] = {.count = 1, .reusable = false}, SHIFT(131),
  [423] = {.count = 1, .reusable = true}, SHIFT(143),
  [425] = {.count = 1, .reusable = true}, SHIFT(138),
  [427] = {.count = 1, .reusable = true}, SHIFT(128),
  [429] = {.count = 1, .reusable = true}, SHIFT(135),
  [431] = {.count = 1, .reusable = true}, SHIFT(136),
  [433] = {.count = 1, .reusable = true}, SHIFT(196),
  [435] = {.count = 1, .reusable = true}, SHIFT(137),
  [437] = {.count = 1, .reusable = true}, SHIFT(139),
  [439] = {.count = 1, .reusable = true}, SHIFT(142),
  [441] = {.count = 1, .reusable = true}, SHIFT(144),
  [443] = {.count = 1, .reusable = true}, SHIFT(145),
  [445] = {.count = 1, .reusable = true}, SHIFT(146),
  [447] = {.count = 1, .reusable = true}, SHIFT(147),
  [449] = {.count = 1, .reusable = true}, SHIFT(150),
  [451] = {.count = 1, .reusable = true}, SHIFT(77),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [457] = {.count = 1, .reusable = false}, SHIFT(151),
  [459] = {.count = 1, .reusable = false}, SHIFT(141),
  [461] = {.count = 1, .reusable = true}, SHIFT(154),
  [463] = {.count = 1, .reusable = true}, SHIFT(153),
  [465] = {.count = 1, .reusable = true}, SHIFT(134),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [471] = {.count = 1, .reusable = false}, SHIFT(107),
  [473] = {.count = 1, .reusable = true}, SHIFT(15),
  [475] = {.count = 1, .reusable = true}, SHIFT(126),
  [477] = {.count = 1, .reusable = true}, SHIFT(22),
  [479] = {.count = 1, .reusable = false}, SHIFT(102),
  [481] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [483] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [485] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(116),
  [488] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [490] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [492] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(117),
  [495] = {.count = 1, .reusable = false}, SHIFT(155),
  [497] = {.count = 1, .reusable = false}, SHIFT(119),
  [499] = {.count = 1, .reusable = false}, SHIFT(121),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_question_mark_identifier, 1),
  [507] = {.count = 1, .reusable = false}, SHIFT(87),
  [509] = {.count = 1, .reusable = false}, SHIFT(208),
  [511] = {.count = 1, .reusable = false}, SHIFT(209),
  [513] = {.count = 1, .reusable = false}, SHIFT(7),
  [515] = {.count = 1, .reusable = false}, SHIFT(6),
  [517] = {.count = 1, .reusable = false}, SHIFT(159),
  [519] = {.count = 1, .reusable = false}, SHIFT(212),
  [521] = {.count = 1, .reusable = false}, SHIFT(195),
  [523] = {.count = 1, .reusable = false}, SHIFT(5),
  [525] = {.count = 1, .reusable = false}, SHIFT(4),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2), SHIFT_REPEAT(155),
  [530] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [544] = {.count = 1, .reusable = true}, SHIFT(3),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(3),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [555] = {.count = 1, .reusable = true}, SHIFT(13),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [559] = {.count = 1, .reusable = true}, SHIFT(11),
  [561] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [563] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(11),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [568] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(13),
  [571] = {.count = 1, .reusable = false}, SHIFT(71),
  [573] = {.count = 1, .reusable = false}, SHIFT(88),
  [575] = {.count = 1, .reusable = false}, SHIFT(210),
  [577] = {.count = 1, .reusable = true}, SHIFT(41),
  [579] = {.count = 1, .reusable = true}, SHIFT(46),
  [581] = {.count = 1, .reusable = false}, SHIFT(189),
  [583] = {.count = 1, .reusable = false}, SHIFT(200),
  [585] = {.count = 1, .reusable = true}, SHIFT(94),
  [587] = {.count = 1, .reusable = false}, SHIFT(96),
  [589] = {.count = 1, .reusable = false}, SHIFT(205),
  [591] = {.count = 1, .reusable = false}, SHIFT(43),
  [593] = {.count = 1, .reusable = true}, SHIFT(64),
  [595] = {.count = 1, .reusable = true}, SHIFT(63),
  [597] = {.count = 1, .reusable = true}, SHIFT(56),
  [599] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [601] = {.count = 1, .reusable = false}, SHIFT(190),
  [603] = {.count = 1, .reusable = true}, SHIFT(163),
  [605] = {.count = 1, .reusable = true}, SHIFT(164),
  [607] = {.count = 1, .reusable = true}, SHIFT(167),
  [609] = {.count = 1, .reusable = false}, SHIFT(197),
  [611] = {.count = 1, .reusable = false}, SHIFT(198),
  [613] = {.count = 1, .reusable = true}, SHIFT(81),
  [615] = {.count = 1, .reusable = false}, SHIFT(193),
  [617] = {.count = 1, .reusable = false}, SHIFT(204),
  [619] = {.count = 1, .reusable = true}, SHIFT(40),
  [621] = {.count = 1, .reusable = false}, SHIFT(47),
  [623] = {.count = 1, .reusable = true}, SHIFT(37),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
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
