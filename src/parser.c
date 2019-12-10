#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 139
#define SYMBOL_COUNT 143
#define ALIAS_COUNT 0
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 2
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
  anon_sym_STAR = 36,
  anon_sym_EQ = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  sym_interpreter_command = 40,
  anon_sym_DOT_BANG = 41,
  anon_sym_DOT_LPAREN = 42,
  anon_sym_DOT_SLASH = 43,
  anon_sym_ = 44,
  anon_sym_PIPE_DOT = 45,
  anon_sym_PERCENT = 46,
  anon_sym_DOT_DOT_DOT = 47,
  aux_sym_interpret_identifier_token1 = 48,
  sym__point_interpret_identifier = 49,
  sym_system_identifier = 50,
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
  aux_sym_eq_sep_val_token1 = 62,
  sym_macro_content = 63,
  sym__any_command = 64,
  sym_number = 65,
  sym__comment = 66,
  anon_sym_LF = 67,
  anon_sym_CR = 68,
  anon_sym_SEMI = 69,
  sym_cmd_identifier = 70,
  sym__help_command = 71,
  sym__question_mark_identifier = 72,
  sym_commands = 73,
  sym__command = 74,
  sym__simple_command = 75,
  sym__tmp_command = 76,
  sym__iter_command = 77,
  sym__pipe_command = 78,
  sym_html_disable_command = 79,
  sym_html_enable_command = 80,
  sym_scr_tts_command = 81,
  sym_pipe_command = 82,
  sym_pipe_second_command = 83,
  sym_iter_flags_command = 84,
  sym_iter_dbta_command = 85,
  sym_iter_dbtb_command = 86,
  sym_iter_dbts_command = 87,
  sym_iter_file_lines_command = 88,
  sym_iter_offsets_command = 89,
  sym_iter_sdbquery_command = 90,
  sym_iter_threads_command = 91,
  sym_iter_bbs_command = 92,
  sym_iter_instrs_command = 93,
  sym_iter_sections_command = 94,
  sym_iter_functions_command = 95,
  sym_iter_step_command = 96,
  sym_iter_interpret_command = 97,
  sym_tmp_seek_command = 98,
  sym_tmp_blksz_command = 99,
  sym_tmp_fromto_command = 100,
  sym_tmp_arch_command = 101,
  sym_tmp_bits_command = 102,
  sym_tmp_nthi_command = 103,
  sym_tmp_eval_command = 104,
  sym_tmp_fs_command = 105,
  sym_tmp_reli_command = 106,
  sym_tmp_kuery_command = 107,
  sym_tmp_fd_command = 108,
  sym_tmp_reg_command = 109,
  sym_tmp_file_command = 110,
  sym_tmp_string_command = 111,
  sym_tmp_hex_command = 112,
  sym_arged_command = 113,
  sym__simple_arged_command = 114,
  sym__math_arged_command = 115,
  sym__pointer_arged_command = 116,
  sym__macro_arged_command = 117,
  sym__system_command = 118,
  sym__interpret_command = 119,
  sym__env_command = 120,
  sym__last_command = 121,
  sym_interpret_identifier = 122,
  sym_interpret_arg = 123,
  sym_system_arg = 124,
  sym_question_mark_identifier = 125,
  sym_help_command = 126,
  sym_repeat_command = 127,
  sym_pointer_identifier = 128,
  sym__eq_sep_args = 129,
  sym_out_redirect_command = 130,
  sym_err_redirect_command = 131,
  sym_html_redirect_command = 132,
  sym_out_append_redirect_command = 133,
  sym_err_append_redirect_command = 134,
  sym_arg = 135,
  sym_eq_sep_val = 136,
  sym_arg_identifier = 137,
  aux_sym_commands_repeat1 = 138,
  aux_sym_commands_repeat2 = 139,
  aux_sym_iter_offsets_command_repeat1 = 140,
  aux_sym_tmp_eval_command_repeat1 = 141,
  aux_sym__interpret_command_repeat1 = 142,
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
  [anon_sym_STAR] = "*",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_interpreter_command] = "interpreter_command",
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
  [aux_sym_eq_sep_val_token1] = "eq_sep_val_token1",
  [sym_macro_content] = "macro_content",
  [sym__any_command] = "_any_command",
  [sym_number] = "number",
  [sym__comment] = "_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_SEMI] = ";",
  [sym_cmd_identifier] = "cmd_identifier",
  [sym__help_command] = "_help_command",
  [sym__question_mark_identifier] = "_question_mark_identifier",
  [sym_commands] = "commands",
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
  [sym_pointer_identifier] = "pointer_identifier",
  [sym__eq_sep_args] = "_eq_sep_args",
  [sym_out_redirect_command] = "out_redirect_command",
  [sym_err_redirect_command] = "err_redirect_command",
  [sym_html_redirect_command] = "html_redirect_command",
  [sym_out_append_redirect_command] = "out_append_redirect_command",
  [sym_err_append_redirect_command] = "err_append_redirect_command",
  [sym_arg] = "arg",
  [sym_eq_sep_val] = "eq_sep_val",
  [sym_arg_identifier] = "arg_identifier",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_interpreter_command] = {
    .visible = true,
    .named = true,
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
  [aux_sym_eq_sep_val_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_macro_content] = {
    .visible = true,
    .named = true,
  },
  [sym__any_command] = {
    .visible = false,
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
  [sym_pointer_identifier] = {
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
  [sym_eq_sep_val] = {
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
  [aux_sym_commands_repeat2] = {
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
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_command] = "command",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
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
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == '!') ADVANCE(122);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == '2') ADVANCE(202);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(34);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\t') ADVANCE(159);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(167);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '1') ADVANCE(155);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(157);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(158);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == '!') ADVANCE(122);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == '!') ADVANCE(122);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '(') ADVANCE(124);
      if (lookahead == ')') ADVANCE(109);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == ',') ADVANCE(89);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(201);
      if (lookahead == '2') ADVANCE(202);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(34);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(32);
      if (lookahead == '2') ADVANCE(33);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '>') ADVANCE(131);
      if (lookahead == '@') ADVANCE(75);
      if (lookahead == 'H') ADVANCE(34);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(209);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == ';') ADVANCE(210);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(197);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(151);
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(149);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(174);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(205);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(137);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == 'H') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'k') ADVANCE(58);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '(') ADVANCE(79);
      if (lookahead == '@') ADVANCE(44);
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 'k') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'B') ADVANCE(180);
      if (lookahead == 'F') ADVANCE(181);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'f') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == 'k') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(207);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(12);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__point_interpret_identifier);
      if (lookahead == ' ') ADVANCE(120);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(12);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(17);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(17);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_1_GT);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_2_GT);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_H_GT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_H_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_1_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_2_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(145);
      if (lookahead == '/') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
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
          lookahead != '|') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == '1') ADVANCE(155);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(151);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 158:
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
          lookahead != '|') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(159);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(160);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '\t') ADVANCE(161);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(17);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_eq_sep_val_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(17);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(17);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '1') ADVANCE(195);
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == 'H') ADVANCE(197);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(17);
      if (lookahead != 0) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '>') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(204);
      if (lookahead == '>') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(204);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4, .external_lex_state = 1},
  [2] = {.lex_state = 4, .external_lex_state = 1},
  [3] = {.lex_state = 4, .external_lex_state = 1},
  [4] = {.lex_state = 5, .external_lex_state = 2},
  [5] = {.lex_state = 5, .external_lex_state = 2},
  [6] = {.lex_state = 5, .external_lex_state = 2},
  [7] = {.lex_state = 5, .external_lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 4, .external_lex_state = 1},
  [77] = {.lex_state = 5, .external_lex_state = 2},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 125},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_interpreter_command] = ACTIONS(1),
    [anon_sym_DOT_BANG] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_SLASH] = ACTIONS(1),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym_interpret_identifier_token1] = ACTIONS(1),
    [sym__point_interpret_identifier] = ACTIONS(1),
    [sym_system_identifier] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_1_GT] = ACTIONS(1),
    [anon_sym_2_GT] = ACTIONS(1),
    [anon_sym_H_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_1_GT_GT] = ACTIONS(1),
    [anon_sym_2_GT_GT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym__help_command] = ACTIONS(1),
    [sym__question_mark_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(128),
    [sym__command] = STATE(82),
    [sym__simple_command] = STATE(59),
    [sym__tmp_command] = STATE(59),
    [sym__iter_command] = STATE(59),
    [sym__pipe_command] = STATE(59),
    [sym_html_disable_command] = STATE(59),
    [sym_html_enable_command] = STATE(59),
    [sym_scr_tts_command] = STATE(59),
    [sym_pipe_command] = STATE(59),
    [sym_iter_flags_command] = STATE(59),
    [sym_iter_dbta_command] = STATE(59),
    [sym_iter_dbtb_command] = STATE(59),
    [sym_iter_dbts_command] = STATE(59),
    [sym_iter_file_lines_command] = STATE(59),
    [sym_iter_offsets_command] = STATE(59),
    [sym_iter_sdbquery_command] = STATE(59),
    [sym_iter_threads_command] = STATE(59),
    [sym_iter_bbs_command] = STATE(59),
    [sym_iter_instrs_command] = STATE(59),
    [sym_iter_sections_command] = STATE(59),
    [sym_iter_functions_command] = STATE(59),
    [sym_iter_step_command] = STATE(59),
    [sym_iter_interpret_command] = STATE(59),
    [sym_tmp_seek_command] = STATE(59),
    [sym_tmp_blksz_command] = STATE(59),
    [sym_tmp_fromto_command] = STATE(59),
    [sym_tmp_arch_command] = STATE(59),
    [sym_tmp_bits_command] = STATE(59),
    [sym_tmp_nthi_command] = STATE(59),
    [sym_tmp_eval_command] = STATE(59),
    [sym_tmp_fs_command] = STATE(59),
    [sym_tmp_reli_command] = STATE(59),
    [sym_tmp_kuery_command] = STATE(59),
    [sym_tmp_fd_command] = STATE(59),
    [sym_tmp_reg_command] = STATE(59),
    [sym_tmp_file_command] = STATE(59),
    [sym_tmp_string_command] = STATE(59),
    [sym_tmp_hex_command] = STATE(59),
    [sym_arged_command] = STATE(59),
    [sym__simple_arged_command] = STATE(29),
    [sym__math_arged_command] = STATE(29),
    [sym__pointer_arged_command] = STATE(29),
    [sym__macro_arged_command] = STATE(29),
    [sym__system_command] = STATE(29),
    [sym__interpret_command] = STATE(29),
    [sym__env_command] = STATE(29),
    [sym__last_command] = STATE(29),
    [sym_interpret_identifier] = STATE(4),
    [sym_question_mark_identifier] = STATE(86),
    [sym_help_command] = STATE(82),
    [sym_repeat_command] = STATE(59),
    [sym_pointer_identifier] = STATE(126),
    [sym_out_redirect_command] = STATE(82),
    [sym_err_redirect_command] = STATE(82),
    [sym_html_redirect_command] = STATE(82),
    [sym_out_append_redirect_command] = STATE(82),
    [sym_err_append_redirect_command] = STATE(82),
    [aux_sym_commands_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_STAR] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_macro_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(31),
    [anon_sym_CR] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(31),
    [sym_cmd_identifier] = ACTIONS(33),
    [sym__help_command] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(37),
  },
  [2] = {
    [sym__command] = STATE(81),
    [sym__simple_command] = STATE(59),
    [sym__tmp_command] = STATE(59),
    [sym__iter_command] = STATE(59),
    [sym__pipe_command] = STATE(59),
    [sym_html_disable_command] = STATE(59),
    [sym_html_enable_command] = STATE(59),
    [sym_scr_tts_command] = STATE(59),
    [sym_pipe_command] = STATE(59),
    [sym_iter_flags_command] = STATE(59),
    [sym_iter_dbta_command] = STATE(59),
    [sym_iter_dbtb_command] = STATE(59),
    [sym_iter_dbts_command] = STATE(59),
    [sym_iter_file_lines_command] = STATE(59),
    [sym_iter_offsets_command] = STATE(59),
    [sym_iter_sdbquery_command] = STATE(59),
    [sym_iter_threads_command] = STATE(59),
    [sym_iter_bbs_command] = STATE(59),
    [sym_iter_instrs_command] = STATE(59),
    [sym_iter_sections_command] = STATE(59),
    [sym_iter_functions_command] = STATE(59),
    [sym_iter_step_command] = STATE(59),
    [sym_iter_interpret_command] = STATE(59),
    [sym_tmp_seek_command] = STATE(59),
    [sym_tmp_blksz_command] = STATE(59),
    [sym_tmp_fromto_command] = STATE(59),
    [sym_tmp_arch_command] = STATE(59),
    [sym_tmp_bits_command] = STATE(59),
    [sym_tmp_nthi_command] = STATE(59),
    [sym_tmp_eval_command] = STATE(59),
    [sym_tmp_fs_command] = STATE(59),
    [sym_tmp_reli_command] = STATE(59),
    [sym_tmp_kuery_command] = STATE(59),
    [sym_tmp_fd_command] = STATE(59),
    [sym_tmp_reg_command] = STATE(59),
    [sym_tmp_file_command] = STATE(59),
    [sym_tmp_string_command] = STATE(59),
    [sym_tmp_hex_command] = STATE(59),
    [sym_arged_command] = STATE(59),
    [sym__simple_arged_command] = STATE(29),
    [sym__math_arged_command] = STATE(29),
    [sym__pointer_arged_command] = STATE(29),
    [sym__macro_arged_command] = STATE(29),
    [sym__system_command] = STATE(29),
    [sym__interpret_command] = STATE(29),
    [sym__env_command] = STATE(29),
    [sym__last_command] = STATE(29),
    [sym_interpret_identifier] = STATE(4),
    [sym_question_mark_identifier] = STATE(86),
    [sym_help_command] = STATE(81),
    [sym_repeat_command] = STATE(59),
    [sym_pointer_identifier] = STATE(126),
    [sym_out_redirect_command] = STATE(81),
    [sym_err_redirect_command] = STATE(81),
    [sym_html_redirect_command] = STATE(81),
    [sym_out_append_redirect_command] = STATE(81),
    [sym_err_append_redirect_command] = STATE(81),
    [aux_sym_commands_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_STAR] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(41),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_macro_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_CR] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(33),
    [sym__help_command] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(37),
  },
  [3] = {
    [sym__command] = STATE(91),
    [sym__simple_command] = STATE(59),
    [sym__tmp_command] = STATE(59),
    [sym__iter_command] = STATE(59),
    [sym__pipe_command] = STATE(59),
    [sym_html_disable_command] = STATE(59),
    [sym_html_enable_command] = STATE(59),
    [sym_scr_tts_command] = STATE(59),
    [sym_pipe_command] = STATE(59),
    [sym_iter_flags_command] = STATE(59),
    [sym_iter_dbta_command] = STATE(59),
    [sym_iter_dbtb_command] = STATE(59),
    [sym_iter_dbts_command] = STATE(59),
    [sym_iter_file_lines_command] = STATE(59),
    [sym_iter_offsets_command] = STATE(59),
    [sym_iter_sdbquery_command] = STATE(59),
    [sym_iter_threads_command] = STATE(59),
    [sym_iter_bbs_command] = STATE(59),
    [sym_iter_instrs_command] = STATE(59),
    [sym_iter_sections_command] = STATE(59),
    [sym_iter_functions_command] = STATE(59),
    [sym_iter_step_command] = STATE(59),
    [sym_iter_interpret_command] = STATE(59),
    [sym_tmp_seek_command] = STATE(59),
    [sym_tmp_blksz_command] = STATE(59),
    [sym_tmp_fromto_command] = STATE(59),
    [sym_tmp_arch_command] = STATE(59),
    [sym_tmp_bits_command] = STATE(59),
    [sym_tmp_nthi_command] = STATE(59),
    [sym_tmp_eval_command] = STATE(59),
    [sym_tmp_fs_command] = STATE(59),
    [sym_tmp_reli_command] = STATE(59),
    [sym_tmp_kuery_command] = STATE(59),
    [sym_tmp_fd_command] = STATE(59),
    [sym_tmp_reg_command] = STATE(59),
    [sym_tmp_file_command] = STATE(59),
    [sym_tmp_string_command] = STATE(59),
    [sym_tmp_hex_command] = STATE(59),
    [sym_arged_command] = STATE(59),
    [sym__simple_arged_command] = STATE(29),
    [sym__math_arged_command] = STATE(29),
    [sym__pointer_arged_command] = STATE(29),
    [sym__macro_arged_command] = STATE(29),
    [sym__system_command] = STATE(29),
    [sym__interpret_command] = STATE(29),
    [sym__env_command] = STATE(29),
    [sym__last_command] = STATE(29),
    [sym_interpret_identifier] = STATE(4),
    [sym_question_mark_identifier] = STATE(86),
    [sym_help_command] = STATE(91),
    [sym_repeat_command] = STATE(59),
    [sym_pointer_identifier] = STATE(126),
    [sym_out_redirect_command] = STATE(91),
    [sym_err_redirect_command] = STATE(91),
    [sym_html_redirect_command] = STATE(91),
    [sym_out_append_redirect_command] = STATE(91),
    [sym_err_append_redirect_command] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_STAR] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_macro_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_cmd_identifier] = ACTIONS(33),
    [sym__help_command] = ACTIONS(35),
    [sym__question_mark_identifier] = ACTIONS(37),
  },
  [4] = {
    [sym__simple_command] = STATE(75),
    [sym__tmp_command] = STATE(75),
    [sym__iter_command] = STATE(75),
    [sym__pipe_command] = STATE(75),
    [sym_html_disable_command] = STATE(75),
    [sym_html_enable_command] = STATE(75),
    [sym_scr_tts_command] = STATE(75),
    [sym_pipe_command] = STATE(75),
    [sym_iter_flags_command] = STATE(75),
    [sym_iter_dbta_command] = STATE(75),
    [sym_iter_dbtb_command] = STATE(75),
    [sym_iter_dbts_command] = STATE(75),
    [sym_iter_file_lines_command] = STATE(75),
    [sym_iter_offsets_command] = STATE(75),
    [sym_iter_sdbquery_command] = STATE(75),
    [sym_iter_threads_command] = STATE(75),
    [sym_iter_bbs_command] = STATE(75),
    [sym_iter_instrs_command] = STATE(75),
    [sym_iter_sections_command] = STATE(75),
    [sym_iter_functions_command] = STATE(75),
    [sym_iter_step_command] = STATE(75),
    [sym_iter_interpret_command] = STATE(75),
    [sym_tmp_seek_command] = STATE(75),
    [sym_tmp_blksz_command] = STATE(75),
    [sym_tmp_fromto_command] = STATE(75),
    [sym_tmp_arch_command] = STATE(75),
    [sym_tmp_bits_command] = STATE(75),
    [sym_tmp_nthi_command] = STATE(75),
    [sym_tmp_eval_command] = STATE(75),
    [sym_tmp_fs_command] = STATE(75),
    [sym_tmp_reli_command] = STATE(75),
    [sym_tmp_kuery_command] = STATE(75),
    [sym_tmp_fd_command] = STATE(75),
    [sym_tmp_reg_command] = STATE(75),
    [sym_tmp_file_command] = STATE(75),
    [sym_tmp_string_command] = STATE(75),
    [sym_tmp_hex_command] = STATE(75),
    [sym_arged_command] = STATE(75),
    [sym__simple_arged_command] = STATE(29),
    [sym__math_arged_command] = STATE(29),
    [sym__pointer_arged_command] = STATE(29),
    [sym__macro_arged_command] = STATE(29),
    [sym__system_command] = STATE(29),
    [sym__interpret_command] = STATE(29),
    [sym__env_command] = STATE(29),
    [sym__last_command] = STATE(29),
    [sym_interpret_identifier] = STATE(4),
    [sym_question_mark_identifier] = STATE(86),
    [sym_repeat_command] = STATE(75),
    [sym_pointer_identifier] = STATE(126),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_macro_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(49),
    [sym_cmd_identifier] = ACTIONS(33),
    [sym__question_mark_identifier] = ACTIONS(51),
  },
  [5] = {
    [sym__simple_command] = STATE(66),
    [sym__tmp_command] = STATE(66),
    [sym__iter_command] = STATE(66),
    [sym__pipe_command] = STATE(66),
    [sym_html_disable_command] = STATE(66),
    [sym_html_enable_command] = STATE(66),
    [sym_scr_tts_command] = STATE(66),
    [sym_pipe_command] = STATE(66),
    [sym_iter_flags_command] = STATE(66),
    [sym_iter_dbta_command] = STATE(66),
    [sym_iter_dbtb_command] = STATE(66),
    [sym_iter_dbts_command] = STATE(66),
    [sym_iter_file_lines_command] = STATE(66),
    [sym_iter_offsets_command] = STATE(66),
    [sym_iter_sdbquery_command] = STATE(66),
    [sym_iter_threads_command] = STATE(66),
    [sym_iter_bbs_command] = STATE(66),
    [sym_iter_instrs_command] = STATE(66),
    [sym_iter_sections_command] = STATE(66),
    [sym_iter_functions_command] = STATE(66),
    [sym_iter_step_command] = STATE(66),
    [sym_iter_interpret_command] = STATE(66),
    [sym_tmp_seek_command] = STATE(66),
    [sym_tmp_blksz_command] = STATE(66),
    [sym_tmp_fromto_command] = STATE(66),
    [sym_tmp_arch_command] = STATE(66),
    [sym_tmp_bits_command] = STATE(66),
    [sym_tmp_nthi_command] = STATE(66),
    [sym_tmp_eval_command] = STATE(66),
    [sym_tmp_fs_command] = STATE(66),
    [sym_tmp_reli_command] = STATE(66),
    [sym_tmp_kuery_command] = STATE(66),
    [sym_tmp_fd_command] = STATE(66),
    [sym_tmp_reg_command] = STATE(66),
    [sym_tmp_file_command] = STATE(66),
    [sym_tmp_string_command] = STATE(66),
    [sym_tmp_hex_command] = STATE(66),
    [sym_arged_command] = STATE(66),
    [sym__simple_arged_command] = STATE(29),
    [sym__math_arged_command] = STATE(29),
    [sym__pointer_arged_command] = STATE(29),
    [sym__macro_arged_command] = STATE(29),
    [sym__system_command] = STATE(29),
    [sym__interpret_command] = STATE(29),
    [sym__env_command] = STATE(29),
    [sym__last_command] = STATE(29),
    [sym_interpret_identifier] = STATE(4),
    [sym_question_mark_identifier] = STATE(86),
    [sym_repeat_command] = STATE(66),
    [sym_pointer_identifier] = STATE(126),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_macro_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(49),
    [sym_cmd_identifier] = ACTIONS(33),
    [sym__question_mark_identifier] = ACTIONS(51),
  },
  [6] = {
    [sym__simple_command] = STATE(41),
    [sym__tmp_command] = STATE(41),
    [sym__iter_command] = STATE(41),
    [sym__pipe_command] = STATE(41),
    [sym_html_disable_command] = STATE(41),
    [sym_html_enable_command] = STATE(41),
    [sym_scr_tts_command] = STATE(41),
    [sym_pipe_command] = STATE(41),
    [sym_iter_flags_command] = STATE(41),
    [sym_iter_dbta_command] = STATE(41),
    [sym_iter_dbtb_command] = STATE(41),
    [sym_iter_dbts_command] = STATE(41),
    [sym_iter_file_lines_command] = STATE(41),
    [sym_iter_offsets_command] = STATE(41),
    [sym_iter_sdbquery_command] = STATE(41),
    [sym_iter_threads_command] = STATE(41),
    [sym_iter_bbs_command] = STATE(41),
    [sym_iter_instrs_command] = STATE(41),
    [sym_iter_sections_command] = STATE(41),
    [sym_iter_functions_command] = STATE(41),
    [sym_iter_step_command] = STATE(41),
    [sym_iter_interpret_command] = STATE(41),
    [sym_tmp_seek_command] = STATE(41),
    [sym_tmp_blksz_command] = STATE(41),
    [sym_tmp_fromto_command] = STATE(41),
    [sym_tmp_arch_command] = STATE(41),
    [sym_tmp_bits_command] = STATE(41),
    [sym_tmp_nthi_command] = STATE(41),
    [sym_tmp_eval_command] = STATE(41),
    [sym_tmp_fs_command] = STATE(41),
    [sym_tmp_reli_command] = STATE(41),
    [sym_tmp_kuery_command] = STATE(41),
    [sym_tmp_fd_command] = STATE(41),
    [sym_tmp_reg_command] = STATE(41),
    [sym_tmp_file_command] = STATE(41),
    [sym_tmp_string_command] = STATE(41),
    [sym_tmp_hex_command] = STATE(41),
    [sym_arged_command] = STATE(41),
    [sym__simple_arged_command] = STATE(29),
    [sym__math_arged_command] = STATE(29),
    [sym__pointer_arged_command] = STATE(29),
    [sym__macro_arged_command] = STATE(29),
    [sym__system_command] = STATE(29),
    [sym__interpret_command] = STATE(29),
    [sym__env_command] = STATE(29),
    [sym__last_command] = STATE(29),
    [sym_interpret_identifier] = STATE(4),
    [sym_question_mark_identifier] = STATE(86),
    [sym_repeat_command] = STATE(41),
    [sym_pointer_identifier] = STATE(126),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym_interpret_identifier_token1] = ACTIONS(21),
    [sym__point_interpret_identifier] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_macro_identifier] = ACTIONS(27),
    [sym_number] = ACTIONS(29),
    [sym__comment] = ACTIONS(49),
    [sym_cmd_identifier] = ACTIONS(33),
    [sym__question_mark_identifier] = ACTIONS(51),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(55),
    [anon_sym_PIPEH] = ACTIONS(53),
    [anon_sym_PIPET] = ACTIONS(53),
    [anon_sym_AT_AT] = ACTIONS(55),
    [anon_sym_AT_ATdbt] = ACTIONS(55),
    [anon_sym_AT_ATdbta] = ACTIONS(53),
    [anon_sym_AT_ATdbtb] = ACTIONS(53),
    [anon_sym_AT_ATdbts] = ACTIONS(53),
    [anon_sym_AT_AT_DOT] = ACTIONS(53),
    [anon_sym_AT_AT_EQ] = ACTIONS(53),
    [anon_sym_AT_ATk] = ACTIONS(53),
    [anon_sym_AT_ATt] = ACTIONS(53),
    [anon_sym_AT_ATb] = ACTIONS(53),
    [anon_sym_AT_ATi] = ACTIONS(55),
    [anon_sym_AT_ATiS] = ACTIONS(53),
    [anon_sym_AT_ATf] = ACTIONS(53),
    [anon_sym_AT_ATs_COLON] = ACTIONS(53),
    [anon_sym_AT_ATc_COLON] = ACTIONS(53),
    [anon_sym_AT] = ACTIONS(55),
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
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_DOT_BANG] = ACTIONS(57),
    [anon_sym_DOT_LPAREN] = ACTIONS(57),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PIPE_DOT] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(59),
    [aux_sym_interpret_identifier_token1] = ACTIONS(57),
    [sym__point_interpret_identifier] = ACTIONS(59),
    [sym_system_identifier] = ACTIONS(57),
    [sym_macro_identifier] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(55),
    [anon_sym_1_GT] = ACTIONS(55),
    [anon_sym_2_GT] = ACTIONS(55),
    [anon_sym_H_GT] = ACTIONS(53),
    [anon_sym_GT_GT] = ACTIONS(53),
    [anon_sym_1_GT_GT] = ACTIONS(53),
    [anon_sym_2_GT_GT] = ACTIONS(53),
    [sym_number] = ACTIONS(59),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__question_mark_identifier] = ACTIONS(57),
  },
  [8] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_PIPEH] = ACTIONS(63),
    [anon_sym_PIPET] = ACTIONS(63),
    [anon_sym_AT_AT] = ACTIONS(63),
    [anon_sym_AT_ATdbt] = ACTIONS(63),
    [anon_sym_AT_ATdbta] = ACTIONS(63),
    [anon_sym_AT_ATdbtb] = ACTIONS(63),
    [anon_sym_AT_ATdbts] = ACTIONS(63),
    [anon_sym_AT_AT_DOT] = ACTIONS(63),
    [anon_sym_AT_AT_EQ] = ACTIONS(63),
    [anon_sym_AT_ATk] = ACTIONS(63),
    [anon_sym_AT_ATt] = ACTIONS(63),
    [anon_sym_AT_ATb] = ACTIONS(63),
    [anon_sym_AT_ATi] = ACTIONS(63),
    [anon_sym_AT_ATiS] = ACTIONS(63),
    [anon_sym_AT_ATf] = ACTIONS(63),
    [anon_sym_AT_ATs_COLON] = ACTIONS(63),
    [anon_sym_AT_ATc_COLON] = ACTIONS(63),
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
    [anon_sym_PIPE_DOT] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_1_GT] = ACTIONS(63),
    [anon_sym_2_GT] = ACTIONS(63),
    [anon_sym_H_GT] = ACTIONS(63),
    [anon_sym_GT_GT] = ACTIONS(63),
    [anon_sym_1_GT_GT] = ACTIONS(63),
    [anon_sym_2_GT_GT] = ACTIONS(63),
    [aux_sym_eq_sep_val_token1] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(63),
    [anon_sym_CR] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(63),
  },
  [9] = {
    [sym_arg] = STATE(10),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_PIPEH] = ACTIONS(70),
    [anon_sym_PIPET] = ACTIONS(70),
    [anon_sym_AT_AT] = ACTIONS(70),
    [anon_sym_AT_ATdbt] = ACTIONS(70),
    [anon_sym_AT_ATdbta] = ACTIONS(70),
    [anon_sym_AT_ATdbtb] = ACTIONS(70),
    [anon_sym_AT_ATdbts] = ACTIONS(70),
    [anon_sym_AT_AT_DOT] = ACTIONS(70),
    [anon_sym_AT_AT_EQ] = ACTIONS(70),
    [anon_sym_AT_ATk] = ACTIONS(70),
    [anon_sym_AT_ATt] = ACTIONS(70),
    [anon_sym_AT_ATb] = ACTIONS(70),
    [anon_sym_AT_ATi] = ACTIONS(70),
    [anon_sym_AT_ATiS] = ACTIONS(70),
    [anon_sym_AT_ATf] = ACTIONS(70),
    [anon_sym_AT_ATs_COLON] = ACTIONS(70),
    [anon_sym_AT_ATc_COLON] = ACTIONS(70),
    [anon_sym_AT] = ACTIONS(70),
    [anon_sym_AT_BANG] = ACTIONS(70),
    [anon_sym_AT_LPAREN] = ACTIONS(70),
    [anon_sym_ATa_COLON] = ACTIONS(70),
    [anon_sym_ATb_COLON] = ACTIONS(70),
    [anon_sym_ATB_COLON] = ACTIONS(70),
    [anon_sym_ATe_COLON] = ACTIONS(70),
    [anon_sym_ATF_COLON] = ACTIONS(70),
    [anon_sym_ATi_COLON] = ACTIONS(70),
    [anon_sym_ATk_COLON] = ACTIONS(70),
    [anon_sym_ATo_COLON] = ACTIONS(70),
    [anon_sym_ATr_COLON] = ACTIONS(70),
    [anon_sym_ATf_COLON] = ACTIONS(70),
    [anon_sym_ATs_COLON] = ACTIONS(70),
    [anon_sym_ATx_COLON] = ACTIONS(70),
    [anon_sym_PIPE_DOT] = ACTIONS(70),
    [anon_sym_GT] = ACTIONS(70),
    [anon_sym_1_GT] = ACTIONS(70),
    [anon_sym_2_GT] = ACTIONS(70),
    [anon_sym_H_GT] = ACTIONS(70),
    [anon_sym_GT_GT] = ACTIONS(70),
    [anon_sym_1_GT_GT] = ACTIONS(70),
    [anon_sym_2_GT_GT] = ACTIONS(70),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(70),
    [anon_sym_CR] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(70),
  },
  [10] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_PIPEH] = ACTIONS(76),
    [anon_sym_PIPET] = ACTIONS(76),
    [anon_sym_AT_AT] = ACTIONS(76),
    [anon_sym_AT_ATdbt] = ACTIONS(76),
    [anon_sym_AT_ATdbta] = ACTIONS(76),
    [anon_sym_AT_ATdbtb] = ACTIONS(76),
    [anon_sym_AT_ATdbts] = ACTIONS(76),
    [anon_sym_AT_AT_DOT] = ACTIONS(76),
    [anon_sym_AT_AT_EQ] = ACTIONS(76),
    [anon_sym_AT_ATk] = ACTIONS(76),
    [anon_sym_AT_ATt] = ACTIONS(76),
    [anon_sym_AT_ATb] = ACTIONS(76),
    [anon_sym_AT_ATi] = ACTIONS(76),
    [anon_sym_AT_ATiS] = ACTIONS(76),
    [anon_sym_AT_ATf] = ACTIONS(76),
    [anon_sym_AT_ATs_COLON] = ACTIONS(76),
    [anon_sym_AT_ATc_COLON] = ACTIONS(76),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_AT_BANG] = ACTIONS(76),
    [anon_sym_AT_LPAREN] = ACTIONS(76),
    [anon_sym_ATa_COLON] = ACTIONS(76),
    [anon_sym_ATb_COLON] = ACTIONS(76),
    [anon_sym_ATB_COLON] = ACTIONS(76),
    [anon_sym_ATe_COLON] = ACTIONS(76),
    [anon_sym_ATF_COLON] = ACTIONS(76),
    [anon_sym_ATi_COLON] = ACTIONS(76),
    [anon_sym_ATk_COLON] = ACTIONS(76),
    [anon_sym_ATo_COLON] = ACTIONS(76),
    [anon_sym_ATr_COLON] = ACTIONS(76),
    [anon_sym_ATf_COLON] = ACTIONS(76),
    [anon_sym_ATs_COLON] = ACTIONS(76),
    [anon_sym_ATx_COLON] = ACTIONS(76),
    [anon_sym_PIPE_DOT] = ACTIONS(76),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_1_GT] = ACTIONS(76),
    [anon_sym_2_GT] = ACTIONS(76),
    [anon_sym_H_GT] = ACTIONS(76),
    [anon_sym_GT_GT] = ACTIONS(76),
    [anon_sym_1_GT_GT] = ACTIONS(76),
    [anon_sym_2_GT_GT] = ACTIONS(76),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(76),
    [anon_sym_CR] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(76),
  },
  [11] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_PIPEH] = ACTIONS(80),
    [anon_sym_PIPET] = ACTIONS(80),
    [anon_sym_AT_AT] = ACTIONS(80),
    [anon_sym_AT_ATdbt] = ACTIONS(80),
    [anon_sym_AT_ATdbta] = ACTIONS(80),
    [anon_sym_AT_ATdbtb] = ACTIONS(80),
    [anon_sym_AT_ATdbts] = ACTIONS(80),
    [anon_sym_AT_AT_DOT] = ACTIONS(80),
    [anon_sym_AT_AT_EQ] = ACTIONS(80),
    [anon_sym_AT_ATk] = ACTIONS(80),
    [anon_sym_AT_ATt] = ACTIONS(80),
    [anon_sym_AT_ATb] = ACTIONS(80),
    [anon_sym_AT_ATi] = ACTIONS(80),
    [anon_sym_AT_ATiS] = ACTIONS(80),
    [anon_sym_AT_ATf] = ACTIONS(80),
    [anon_sym_AT_ATs_COLON] = ACTIONS(80),
    [anon_sym_AT_ATc_COLON] = ACTIONS(80),
    [anon_sym_AT] = ACTIONS(80),
    [anon_sym_AT_BANG] = ACTIONS(80),
    [anon_sym_AT_LPAREN] = ACTIONS(80),
    [anon_sym_ATa_COLON] = ACTIONS(80),
    [anon_sym_ATb_COLON] = ACTIONS(80),
    [anon_sym_ATB_COLON] = ACTIONS(80),
    [anon_sym_ATe_COLON] = ACTIONS(80),
    [anon_sym_ATF_COLON] = ACTIONS(80),
    [anon_sym_ATi_COLON] = ACTIONS(80),
    [anon_sym_ATk_COLON] = ACTIONS(80),
    [anon_sym_ATo_COLON] = ACTIONS(80),
    [anon_sym_ATr_COLON] = ACTIONS(80),
    [anon_sym_ATf_COLON] = ACTIONS(80),
    [anon_sym_ATs_COLON] = ACTIONS(80),
    [anon_sym_ATx_COLON] = ACTIONS(80),
    [anon_sym_PIPE_DOT] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [anon_sym_1_GT] = ACTIONS(80),
    [anon_sym_2_GT] = ACTIONS(80),
    [anon_sym_H_GT] = ACTIONS(80),
    [anon_sym_GT_GT] = ACTIONS(80),
    [anon_sym_1_GT_GT] = ACTIONS(80),
    [anon_sym_2_GT_GT] = ACTIONS(80),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(80),
    [anon_sym_CR] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(80),
  },
  [12] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_PIPEH] = ACTIONS(84),
    [anon_sym_PIPET] = ACTIONS(84),
    [anon_sym_AT_AT] = ACTIONS(84),
    [anon_sym_AT_ATdbt] = ACTIONS(84),
    [anon_sym_AT_ATdbta] = ACTIONS(84),
    [anon_sym_AT_ATdbtb] = ACTIONS(84),
    [anon_sym_AT_ATdbts] = ACTIONS(84),
    [anon_sym_AT_AT_DOT] = ACTIONS(84),
    [anon_sym_AT_AT_EQ] = ACTIONS(84),
    [anon_sym_AT_ATk] = ACTIONS(84),
    [anon_sym_AT_ATt] = ACTIONS(84),
    [anon_sym_AT_ATb] = ACTIONS(84),
    [anon_sym_AT_ATi] = ACTIONS(84),
    [anon_sym_AT_ATiS] = ACTIONS(84),
    [anon_sym_AT_ATf] = ACTIONS(84),
    [anon_sym_AT_ATs_COLON] = ACTIONS(84),
    [anon_sym_AT_ATc_COLON] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_AT_BANG] = ACTIONS(84),
    [anon_sym_AT_LPAREN] = ACTIONS(84),
    [anon_sym_ATa_COLON] = ACTIONS(84),
    [anon_sym_ATb_COLON] = ACTIONS(84),
    [anon_sym_ATB_COLON] = ACTIONS(84),
    [anon_sym_ATe_COLON] = ACTIONS(84),
    [anon_sym_ATF_COLON] = ACTIONS(84),
    [anon_sym_ATi_COLON] = ACTIONS(84),
    [anon_sym_ATk_COLON] = ACTIONS(84),
    [anon_sym_ATo_COLON] = ACTIONS(84),
    [anon_sym_ATr_COLON] = ACTIONS(84),
    [anon_sym_ATf_COLON] = ACTIONS(84),
    [anon_sym_ATs_COLON] = ACTIONS(84),
    [anon_sym_ATx_COLON] = ACTIONS(84),
    [anon_sym_PIPE_DOT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_1_GT] = ACTIONS(84),
    [anon_sym_2_GT] = ACTIONS(84),
    [anon_sym_H_GT] = ACTIONS(84),
    [anon_sym_GT_GT] = ACTIONS(84),
    [anon_sym_1_GT_GT] = ACTIONS(84),
    [anon_sym_2_GT_GT] = ACTIONS(84),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_CR] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(84),
  },
  [13] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_PIPEH] = ACTIONS(88),
    [anon_sym_PIPET] = ACTIONS(88),
    [anon_sym_AT_AT] = ACTIONS(88),
    [anon_sym_AT_ATdbt] = ACTIONS(88),
    [anon_sym_AT_ATdbta] = ACTIONS(88),
    [anon_sym_AT_ATdbtb] = ACTIONS(88),
    [anon_sym_AT_ATdbts] = ACTIONS(88),
    [anon_sym_AT_AT_DOT] = ACTIONS(88),
    [anon_sym_AT_AT_EQ] = ACTIONS(88),
    [anon_sym_AT_ATk] = ACTIONS(88),
    [anon_sym_AT_ATt] = ACTIONS(88),
    [anon_sym_AT_ATb] = ACTIONS(88),
    [anon_sym_AT_ATi] = ACTIONS(88),
    [anon_sym_AT_ATiS] = ACTIONS(88),
    [anon_sym_AT_ATf] = ACTIONS(88),
    [anon_sym_AT_ATs_COLON] = ACTIONS(88),
    [anon_sym_AT_ATc_COLON] = ACTIONS(88),
    [anon_sym_AT] = ACTIONS(88),
    [anon_sym_AT_BANG] = ACTIONS(88),
    [anon_sym_AT_LPAREN] = ACTIONS(88),
    [anon_sym_ATa_COLON] = ACTIONS(88),
    [anon_sym_ATb_COLON] = ACTIONS(88),
    [anon_sym_ATB_COLON] = ACTIONS(88),
    [anon_sym_ATe_COLON] = ACTIONS(88),
    [anon_sym_ATF_COLON] = ACTIONS(88),
    [anon_sym_ATi_COLON] = ACTIONS(88),
    [anon_sym_ATk_COLON] = ACTIONS(88),
    [anon_sym_ATo_COLON] = ACTIONS(88),
    [anon_sym_ATr_COLON] = ACTIONS(88),
    [anon_sym_ATf_COLON] = ACTIONS(88),
    [anon_sym_ATs_COLON] = ACTIONS(88),
    [anon_sym_ATx_COLON] = ACTIONS(88),
    [anon_sym_PIPE_DOT] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_1_GT] = ACTIONS(88),
    [anon_sym_2_GT] = ACTIONS(88),
    [anon_sym_H_GT] = ACTIONS(88),
    [anon_sym_GT_GT] = ACTIONS(88),
    [anon_sym_1_GT_GT] = ACTIONS(88),
    [anon_sym_2_GT_GT] = ACTIONS(88),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(88),
    [anon_sym_CR] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(88),
  },
  [14] = {
    [sym_arg] = STATE(8),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_PIPEH] = ACTIONS(92),
    [anon_sym_PIPET] = ACTIONS(92),
    [anon_sym_AT_AT] = ACTIONS(92),
    [anon_sym_AT_ATdbt] = ACTIONS(92),
    [anon_sym_AT_ATdbta] = ACTIONS(92),
    [anon_sym_AT_ATdbtb] = ACTIONS(92),
    [anon_sym_AT_ATdbts] = ACTIONS(92),
    [anon_sym_AT_AT_DOT] = ACTIONS(92),
    [anon_sym_AT_AT_EQ] = ACTIONS(92),
    [anon_sym_AT_ATk] = ACTIONS(92),
    [anon_sym_AT_ATt] = ACTIONS(92),
    [anon_sym_AT_ATb] = ACTIONS(92),
    [anon_sym_AT_ATi] = ACTIONS(92),
    [anon_sym_AT_ATiS] = ACTIONS(92),
    [anon_sym_AT_ATf] = ACTIONS(92),
    [anon_sym_AT_ATs_COLON] = ACTIONS(92),
    [anon_sym_AT_ATc_COLON] = ACTIONS(92),
    [anon_sym_AT] = ACTIONS(92),
    [anon_sym_AT_BANG] = ACTIONS(92),
    [anon_sym_AT_LPAREN] = ACTIONS(92),
    [anon_sym_ATa_COLON] = ACTIONS(92),
    [anon_sym_ATb_COLON] = ACTIONS(92),
    [anon_sym_ATB_COLON] = ACTIONS(92),
    [anon_sym_ATe_COLON] = ACTIONS(92),
    [anon_sym_ATF_COLON] = ACTIONS(92),
    [anon_sym_ATi_COLON] = ACTIONS(92),
    [anon_sym_ATk_COLON] = ACTIONS(92),
    [anon_sym_ATo_COLON] = ACTIONS(92),
    [anon_sym_ATr_COLON] = ACTIONS(92),
    [anon_sym_ATf_COLON] = ACTIONS(92),
    [anon_sym_ATs_COLON] = ACTIONS(92),
    [anon_sym_ATx_COLON] = ACTIONS(92),
    [anon_sym_PIPE_DOT] = ACTIONS(92),
    [anon_sym_GT] = ACTIONS(92),
    [anon_sym_1_GT] = ACTIONS(92),
    [anon_sym_2_GT] = ACTIONS(92),
    [anon_sym_H_GT] = ACTIONS(92),
    [anon_sym_GT_GT] = ACTIONS(92),
    [anon_sym_1_GT_GT] = ACTIONS(92),
    [anon_sym_2_GT_GT] = ACTIONS(92),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(92),
    [anon_sym_CR] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(92),
  },
  [15] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_PIPEH] = ACTIONS(94),
    [anon_sym_PIPET] = ACTIONS(94),
    [anon_sym_AT_AT] = ACTIONS(96),
    [anon_sym_AT_ATdbt] = ACTIONS(96),
    [anon_sym_AT_ATdbta] = ACTIONS(94),
    [anon_sym_AT_ATdbtb] = ACTIONS(94),
    [anon_sym_AT_ATdbts] = ACTIONS(94),
    [anon_sym_AT_AT_DOT] = ACTIONS(94),
    [anon_sym_AT_AT_EQ] = ACTIONS(94),
    [anon_sym_AT_ATk] = ACTIONS(94),
    [anon_sym_AT_ATt] = ACTIONS(94),
    [anon_sym_AT_ATb] = ACTIONS(94),
    [anon_sym_AT_ATi] = ACTIONS(96),
    [anon_sym_AT_ATiS] = ACTIONS(94),
    [anon_sym_AT_ATf] = ACTIONS(94),
    [anon_sym_AT_ATs_COLON] = ACTIONS(94),
    [anon_sym_AT_ATc_COLON] = ACTIONS(94),
    [anon_sym_AT] = ACTIONS(96),
    [anon_sym_AT_BANG] = ACTIONS(94),
    [anon_sym_AT_LPAREN] = ACTIONS(94),
    [anon_sym_ATa_COLON] = ACTIONS(94),
    [anon_sym_ATb_COLON] = ACTIONS(94),
    [anon_sym_ATB_COLON] = ACTIONS(94),
    [anon_sym_ATe_COLON] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_ATF_COLON] = ACTIONS(94),
    [anon_sym_ATi_COLON] = ACTIONS(94),
    [anon_sym_ATk_COLON] = ACTIONS(94),
    [anon_sym_ATo_COLON] = ACTIONS(94),
    [anon_sym_ATr_COLON] = ACTIONS(94),
    [anon_sym_ATf_COLON] = ACTIONS(94),
    [anon_sym_ATs_COLON] = ACTIONS(94),
    [anon_sym_ATx_COLON] = ACTIONS(94),
    [anon_sym_PIPE_DOT] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(96),
    [anon_sym_1_GT] = ACTIONS(96),
    [anon_sym_2_GT] = ACTIONS(96),
    [anon_sym_H_GT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(94),
    [anon_sym_1_GT_GT] = ACTIONS(94),
    [anon_sym_2_GT_GT] = ACTIONS(94),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(94),
    [anon_sym_CR] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(94),
  },
  [16] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_PIPEH] = ACTIONS(100),
    [anon_sym_PIPET] = ACTIONS(100),
    [anon_sym_AT_AT] = ACTIONS(102),
    [anon_sym_AT_ATdbt] = ACTIONS(102),
    [anon_sym_AT_ATdbta] = ACTIONS(100),
    [anon_sym_AT_ATdbtb] = ACTIONS(100),
    [anon_sym_AT_ATdbts] = ACTIONS(100),
    [anon_sym_AT_AT_DOT] = ACTIONS(100),
    [anon_sym_AT_AT_EQ] = ACTIONS(100),
    [anon_sym_AT_ATk] = ACTIONS(100),
    [anon_sym_AT_ATt] = ACTIONS(100),
    [anon_sym_AT_ATb] = ACTIONS(100),
    [anon_sym_AT_ATi] = ACTIONS(102),
    [anon_sym_AT_ATiS] = ACTIONS(100),
    [anon_sym_AT_ATf] = ACTIONS(100),
    [anon_sym_AT_ATs_COLON] = ACTIONS(100),
    [anon_sym_AT_ATc_COLON] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(102),
    [anon_sym_AT_BANG] = ACTIONS(100),
    [anon_sym_AT_LPAREN] = ACTIONS(100),
    [anon_sym_ATa_COLON] = ACTIONS(100),
    [anon_sym_ATb_COLON] = ACTIONS(100),
    [anon_sym_ATB_COLON] = ACTIONS(100),
    [anon_sym_ATe_COLON] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_ATF_COLON] = ACTIONS(100),
    [anon_sym_ATi_COLON] = ACTIONS(100),
    [anon_sym_ATk_COLON] = ACTIONS(100),
    [anon_sym_ATo_COLON] = ACTIONS(100),
    [anon_sym_ATr_COLON] = ACTIONS(100),
    [anon_sym_ATf_COLON] = ACTIONS(100),
    [anon_sym_ATs_COLON] = ACTIONS(100),
    [anon_sym_ATx_COLON] = ACTIONS(100),
    [anon_sym_PIPE_DOT] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_1_GT] = ACTIONS(102),
    [anon_sym_2_GT] = ACTIONS(102),
    [anon_sym_H_GT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_1_GT_GT] = ACTIONS(100),
    [anon_sym_2_GT_GT] = ACTIONS(100),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
  },
  [17] = {
    [sym_system_arg] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PIPEH] = ACTIONS(109),
    [anon_sym_PIPET] = ACTIONS(109),
    [anon_sym_AT_AT] = ACTIONS(109),
    [anon_sym_AT_ATdbt] = ACTIONS(109),
    [anon_sym_AT_ATdbta] = ACTIONS(109),
    [anon_sym_AT_ATdbtb] = ACTIONS(109),
    [anon_sym_AT_ATdbts] = ACTIONS(109),
    [anon_sym_AT_AT_DOT] = ACTIONS(109),
    [anon_sym_AT_AT_EQ] = ACTIONS(109),
    [anon_sym_AT_ATk] = ACTIONS(109),
    [anon_sym_AT_ATt] = ACTIONS(109),
    [anon_sym_AT_ATb] = ACTIONS(109),
    [anon_sym_AT_ATi] = ACTIONS(109),
    [anon_sym_AT_ATiS] = ACTIONS(109),
    [anon_sym_AT_ATf] = ACTIONS(109),
    [anon_sym_AT_ATs_COLON] = ACTIONS(109),
    [anon_sym_AT_ATc_COLON] = ACTIONS(109),
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
    [sym__any_command] = ACTIONS(111),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
  },
  [18] = {
    [sym__eq_sep_args] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPEH] = ACTIONS(115),
    [anon_sym_PIPET] = ACTIONS(115),
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
    [sym_eq_sep_key] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_CR] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
  },
  [19] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPEH] = ACTIONS(119),
    [anon_sym_PIPET] = ACTIONS(119),
    [anon_sym_AT_AT] = ACTIONS(121),
    [anon_sym_AT_ATdbt] = ACTIONS(121),
    [anon_sym_AT_ATdbta] = ACTIONS(119),
    [anon_sym_AT_ATdbtb] = ACTIONS(119),
    [anon_sym_AT_ATdbts] = ACTIONS(119),
    [anon_sym_AT_AT_DOT] = ACTIONS(119),
    [anon_sym_AT_AT_EQ] = ACTIONS(119),
    [anon_sym_AT_ATk] = ACTIONS(119),
    [anon_sym_AT_ATt] = ACTIONS(119),
    [anon_sym_AT_ATb] = ACTIONS(119),
    [anon_sym_AT_ATi] = ACTIONS(121),
    [anon_sym_AT_ATiS] = ACTIONS(119),
    [anon_sym_AT_ATf] = ACTIONS(119),
    [anon_sym_AT_ATs_COLON] = ACTIONS(119),
    [anon_sym_AT_ATc_COLON] = ACTIONS(119),
    [anon_sym_AT] = ACTIONS(121),
    [anon_sym_AT_BANG] = ACTIONS(119),
    [anon_sym_AT_LPAREN] = ACTIONS(119),
    [anon_sym_ATa_COLON] = ACTIONS(119),
    [anon_sym_ATb_COLON] = ACTIONS(119),
    [anon_sym_ATB_COLON] = ACTIONS(119),
    [anon_sym_ATe_COLON] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_ATF_COLON] = ACTIONS(119),
    [anon_sym_ATi_COLON] = ACTIONS(119),
    [anon_sym_ATk_COLON] = ACTIONS(119),
    [anon_sym_ATo_COLON] = ACTIONS(119),
    [anon_sym_ATr_COLON] = ACTIONS(119),
    [anon_sym_ATf_COLON] = ACTIONS(119),
    [anon_sym_ATs_COLON] = ACTIONS(119),
    [anon_sym_ATx_COLON] = ACTIONS(119),
    [anon_sym_PIPE_DOT] = ACTIONS(119),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_1_GT] = ACTIONS(121),
    [anon_sym_2_GT] = ACTIONS(121),
    [anon_sym_H_GT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(119),
    [anon_sym_1_GT_GT] = ACTIONS(119),
    [anon_sym_2_GT_GT] = ACTIONS(119),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_CR] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
  },
  [20] = {
    [sym_pipe_second_command] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(125),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_PIPET] = ACTIONS(125),
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
    [sym__any_command] = ACTIONS(127),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_PIPEH] = ACTIONS(129),
    [anon_sym_PIPET] = ACTIONS(129),
    [anon_sym_AT_AT] = ACTIONS(131),
    [anon_sym_AT_ATdbt] = ACTIONS(131),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(129),
    [anon_sym_AT_AT_DOT] = ACTIONS(129),
    [anon_sym_AT_AT_EQ] = ACTIONS(129),
    [anon_sym_AT_ATk] = ACTIONS(129),
    [anon_sym_AT_ATt] = ACTIONS(129),
    [anon_sym_AT_ATb] = ACTIONS(129),
    [anon_sym_AT_ATi] = ACTIONS(131),
    [anon_sym_AT_ATiS] = ACTIONS(129),
    [anon_sym_AT_ATf] = ACTIONS(129),
    [anon_sym_AT_ATs_COLON] = ACTIONS(129),
    [anon_sym_AT_ATc_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(131),
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
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_PIPE_DOT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_1_GT] = ACTIONS(131),
    [anon_sym_2_GT] = ACTIONS(131),
    [anon_sym_H_GT] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [anon_sym_1_GT_GT] = ACTIONS(129),
    [anon_sym_2_GT_GT] = ACTIONS(129),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_CR] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPEH] = ACTIONS(135),
    [anon_sym_PIPET] = ACTIONS(135),
    [anon_sym_AT_AT] = ACTIONS(137),
    [anon_sym_AT_ATdbt] = ACTIONS(137),
    [anon_sym_AT_ATdbta] = ACTIONS(135),
    [anon_sym_AT_ATdbtb] = ACTIONS(135),
    [anon_sym_AT_ATdbts] = ACTIONS(135),
    [anon_sym_AT_AT_DOT] = ACTIONS(135),
    [anon_sym_AT_AT_EQ] = ACTIONS(135),
    [anon_sym_AT_ATk] = ACTIONS(135),
    [anon_sym_AT_ATt] = ACTIONS(135),
    [anon_sym_AT_ATb] = ACTIONS(135),
    [anon_sym_AT_ATi] = ACTIONS(137),
    [anon_sym_AT_ATiS] = ACTIONS(135),
    [anon_sym_AT_ATf] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(139),
    [anon_sym_AT_ATs_COLON] = ACTIONS(135),
    [anon_sym_AT_ATc_COLON] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_AT_BANG] = ACTIONS(135),
    [anon_sym_AT_LPAREN] = ACTIONS(135),
    [anon_sym_ATa_COLON] = ACTIONS(135),
    [anon_sym_ATb_COLON] = ACTIONS(135),
    [anon_sym_ATB_COLON] = ACTIONS(135),
    [anon_sym_ATe_COLON] = ACTIONS(135),
    [anon_sym_ATF_COLON] = ACTIONS(135),
    [anon_sym_ATi_COLON] = ACTIONS(135),
    [anon_sym_ATk_COLON] = ACTIONS(135),
    [anon_sym_ATo_COLON] = ACTIONS(135),
    [anon_sym_ATr_COLON] = ACTIONS(135),
    [anon_sym_ATf_COLON] = ACTIONS(135),
    [anon_sym_ATs_COLON] = ACTIONS(135),
    [anon_sym_ATx_COLON] = ACTIONS(135),
    [anon_sym_PIPE_DOT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_1_GT] = ACTIONS(137),
    [anon_sym_2_GT] = ACTIONS(137),
    [anon_sym_H_GT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [anon_sym_1_GT_GT] = ACTIONS(135),
    [anon_sym_2_GT_GT] = ACTIONS(135),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_CR] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_PIPE] = ACTIONS(143),
    [anon_sym_PIPEH] = ACTIONS(141),
    [anon_sym_PIPET] = ACTIONS(141),
    [anon_sym_AT_AT] = ACTIONS(143),
    [anon_sym_AT_ATdbt] = ACTIONS(143),
    [anon_sym_AT_ATdbta] = ACTIONS(141),
    [anon_sym_AT_ATdbtb] = ACTIONS(141),
    [anon_sym_AT_ATdbts] = ACTIONS(141),
    [anon_sym_AT_AT_DOT] = ACTIONS(141),
    [anon_sym_AT_AT_EQ] = ACTIONS(141),
    [anon_sym_AT_ATk] = ACTIONS(141),
    [anon_sym_AT_ATt] = ACTIONS(141),
    [anon_sym_AT_ATb] = ACTIONS(141),
    [anon_sym_AT_ATi] = ACTIONS(143),
    [anon_sym_AT_ATiS] = ACTIONS(141),
    [anon_sym_AT_ATf] = ACTIONS(141),
    [anon_sym_AT_ATs_COLON] = ACTIONS(141),
    [anon_sym_AT_ATc_COLON] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(143),
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
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_PIPE_DOT] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(143),
    [anon_sym_1_GT] = ACTIONS(143),
    [anon_sym_2_GT] = ACTIONS(143),
    [anon_sym_H_GT] = ACTIONS(141),
    [anon_sym_GT_GT] = ACTIONS(141),
    [anon_sym_1_GT_GT] = ACTIONS(141),
    [anon_sym_2_GT_GT] = ACTIONS(141),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(141),
    [anon_sym_CR] = ACTIONS(141),
    [anon_sym_SEMI] = ACTIONS(141),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPEH] = ACTIONS(149),
    [anon_sym_PIPET] = ACTIONS(149),
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
    [aux_sym_eq_sep_val_token1] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(149),
    [anon_sym_CR] = ACTIONS(149),
    [anon_sym_SEMI] = ACTIONS(149),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPEH] = ACTIONS(153),
    [anon_sym_PIPET] = ACTIONS(153),
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
    [aux_sym_eq_sep_val_token1] = ACTIONS(153),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(153),
    [anon_sym_CR] = ACTIONS(153),
    [anon_sym_SEMI] = ACTIONS(153),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_PIPEH] = ACTIONS(100),
    [anon_sym_PIPET] = ACTIONS(100),
    [anon_sym_AT_AT] = ACTIONS(102),
    [anon_sym_AT_ATdbt] = ACTIONS(102),
    [anon_sym_AT_ATdbta] = ACTIONS(100),
    [anon_sym_AT_ATdbtb] = ACTIONS(100),
    [anon_sym_AT_ATdbts] = ACTIONS(100),
    [anon_sym_AT_AT_DOT] = ACTIONS(100),
    [anon_sym_AT_AT_EQ] = ACTIONS(100),
    [anon_sym_AT_ATk] = ACTIONS(100),
    [anon_sym_AT_ATt] = ACTIONS(100),
    [anon_sym_AT_ATb] = ACTIONS(100),
    [anon_sym_AT_ATi] = ACTIONS(102),
    [anon_sym_AT_ATiS] = ACTIONS(100),
    [anon_sym_AT_ATf] = ACTIONS(100),
    [anon_sym_AT_ATs_COLON] = ACTIONS(100),
    [anon_sym_AT_ATc_COLON] = ACTIONS(100),
    [anon_sym_AT] = ACTIONS(102),
    [anon_sym_AT_BANG] = ACTIONS(100),
    [anon_sym_AT_LPAREN] = ACTIONS(100),
    [anon_sym_ATa_COLON] = ACTIONS(100),
    [anon_sym_ATb_COLON] = ACTIONS(100),
    [anon_sym_ATB_COLON] = ACTIONS(100),
    [anon_sym_ATe_COLON] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_ATF_COLON] = ACTIONS(100),
    [anon_sym_ATi_COLON] = ACTIONS(100),
    [anon_sym_ATk_COLON] = ACTIONS(100),
    [anon_sym_ATo_COLON] = ACTIONS(100),
    [anon_sym_ATr_COLON] = ACTIONS(100),
    [anon_sym_ATf_COLON] = ACTIONS(100),
    [anon_sym_ATs_COLON] = ACTIONS(100),
    [anon_sym_ATx_COLON] = ACTIONS(100),
    [anon_sym_PIPE_DOT] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_1_GT] = ACTIONS(102),
    [anon_sym_2_GT] = ACTIONS(102),
    [anon_sym_H_GT] = ACTIONS(100),
    [anon_sym_GT_GT] = ACTIONS(100),
    [anon_sym_1_GT_GT] = ACTIONS(100),
    [anon_sym_2_GT_GT] = ACTIONS(100),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(100),
    [anon_sym_CR] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(100),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_PIPE] = ACTIONS(157),
    [anon_sym_PIPEH] = ACTIONS(155),
    [anon_sym_PIPET] = ACTIONS(155),
    [anon_sym_AT_AT] = ACTIONS(157),
    [anon_sym_AT_ATdbt] = ACTIONS(157),
    [anon_sym_AT_ATdbta] = ACTIONS(155),
    [anon_sym_AT_ATdbtb] = ACTIONS(155),
    [anon_sym_AT_ATdbts] = ACTIONS(155),
    [anon_sym_AT_AT_DOT] = ACTIONS(155),
    [anon_sym_AT_AT_EQ] = ACTIONS(155),
    [anon_sym_AT_ATk] = ACTIONS(155),
    [anon_sym_AT_ATt] = ACTIONS(155),
    [anon_sym_AT_ATb] = ACTIONS(155),
    [anon_sym_AT_ATi] = ACTIONS(157),
    [anon_sym_AT_ATiS] = ACTIONS(155),
    [anon_sym_AT_ATf] = ACTIONS(155),
    [anon_sym_AT_ATs_COLON] = ACTIONS(155),
    [anon_sym_AT_ATc_COLON] = ACTIONS(155),
    [anon_sym_AT] = ACTIONS(157),
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
    [anon_sym_PIPE_DOT] = ACTIONS(155),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_1_GT] = ACTIONS(157),
    [anon_sym_2_GT] = ACTIONS(157),
    [anon_sym_H_GT] = ACTIONS(155),
    [anon_sym_GT_GT] = ACTIONS(155),
    [anon_sym_1_GT_GT] = ACTIONS(155),
    [anon_sym_2_GT_GT] = ACTIONS(155),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(155),
    [anon_sym_CR] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(161),
    [anon_sym_PIPEH] = ACTIONS(159),
    [anon_sym_PIPET] = ACTIONS(159),
    [anon_sym_AT_AT] = ACTIONS(161),
    [anon_sym_AT_ATdbt] = ACTIONS(161),
    [anon_sym_AT_ATdbta] = ACTIONS(159),
    [anon_sym_AT_ATdbtb] = ACTIONS(159),
    [anon_sym_AT_ATdbts] = ACTIONS(159),
    [anon_sym_AT_AT_DOT] = ACTIONS(159),
    [anon_sym_AT_AT_EQ] = ACTIONS(159),
    [anon_sym_AT_ATk] = ACTIONS(159),
    [anon_sym_AT_ATt] = ACTIONS(159),
    [anon_sym_AT_ATb] = ACTIONS(159),
    [anon_sym_AT_ATi] = ACTIONS(161),
    [anon_sym_AT_ATiS] = ACTIONS(159),
    [anon_sym_AT_ATf] = ACTIONS(159),
    [anon_sym_AT_ATs_COLON] = ACTIONS(159),
    [anon_sym_AT_ATc_COLON] = ACTIONS(159),
    [anon_sym_AT] = ACTIONS(161),
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
    [anon_sym_PIPE_DOT] = ACTIONS(159),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_1_GT] = ACTIONS(161),
    [anon_sym_2_GT] = ACTIONS(161),
    [anon_sym_H_GT] = ACTIONS(159),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_1_GT_GT] = ACTIONS(159),
    [anon_sym_2_GT_GT] = ACTIONS(159),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(159),
    [anon_sym_CR] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_PIPE] = ACTIONS(165),
    [anon_sym_PIPEH] = ACTIONS(163),
    [anon_sym_PIPET] = ACTIONS(163),
    [anon_sym_AT_AT] = ACTIONS(165),
    [anon_sym_AT_ATdbt] = ACTIONS(165),
    [anon_sym_AT_ATdbta] = ACTIONS(163),
    [anon_sym_AT_ATdbtb] = ACTIONS(163),
    [anon_sym_AT_ATdbts] = ACTIONS(163),
    [anon_sym_AT_AT_DOT] = ACTIONS(163),
    [anon_sym_AT_AT_EQ] = ACTIONS(163),
    [anon_sym_AT_ATk] = ACTIONS(163),
    [anon_sym_AT_ATt] = ACTIONS(163),
    [anon_sym_AT_ATb] = ACTIONS(163),
    [anon_sym_AT_ATi] = ACTIONS(165),
    [anon_sym_AT_ATiS] = ACTIONS(163),
    [anon_sym_AT_ATf] = ACTIONS(163),
    [anon_sym_AT_ATs_COLON] = ACTIONS(163),
    [anon_sym_AT_ATc_COLON] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(165),
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
    [anon_sym_PIPE_DOT] = ACTIONS(163),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_1_GT] = ACTIONS(165),
    [anon_sym_2_GT] = ACTIONS(165),
    [anon_sym_H_GT] = ACTIONS(163),
    [anon_sym_GT_GT] = ACTIONS(163),
    [anon_sym_1_GT_GT] = ACTIONS(163),
    [anon_sym_2_GT_GT] = ACTIONS(163),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_CR] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(153),
    [anon_sym_PIPEH] = ACTIONS(151),
    [anon_sym_PIPET] = ACTIONS(151),
    [anon_sym_AT_AT] = ACTIONS(153),
    [anon_sym_AT_ATdbt] = ACTIONS(153),
    [anon_sym_AT_ATdbta] = ACTIONS(151),
    [anon_sym_AT_ATdbtb] = ACTIONS(151),
    [anon_sym_AT_ATdbts] = ACTIONS(151),
    [anon_sym_AT_AT_DOT] = ACTIONS(151),
    [anon_sym_AT_AT_EQ] = ACTIONS(151),
    [anon_sym_AT_ATk] = ACTIONS(151),
    [anon_sym_AT_ATt] = ACTIONS(151),
    [anon_sym_AT_ATb] = ACTIONS(151),
    [anon_sym_AT_ATi] = ACTIONS(153),
    [anon_sym_AT_ATiS] = ACTIONS(151),
    [anon_sym_AT_ATf] = ACTIONS(151),
    [anon_sym_AT_ATs_COLON] = ACTIONS(151),
    [anon_sym_AT_ATc_COLON] = ACTIONS(151),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_AT_BANG] = ACTIONS(151),
    [anon_sym_AT_LPAREN] = ACTIONS(151),
    [anon_sym_ATa_COLON] = ACTIONS(151),
    [anon_sym_ATb_COLON] = ACTIONS(151),
    [anon_sym_ATB_COLON] = ACTIONS(151),
    [anon_sym_ATe_COLON] = ACTIONS(151),
    [anon_sym_ATF_COLON] = ACTIONS(151),
    [anon_sym_ATi_COLON] = ACTIONS(151),
    [anon_sym_ATk_COLON] = ACTIONS(151),
    [anon_sym_ATo_COLON] = ACTIONS(151),
    [anon_sym_ATr_COLON] = ACTIONS(151),
    [anon_sym_ATf_COLON] = ACTIONS(151),
    [anon_sym_ATs_COLON] = ACTIONS(151),
    [anon_sym_ATx_COLON] = ACTIONS(151),
    [anon_sym_PIPE_DOT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_1_GT] = ACTIONS(153),
    [anon_sym_2_GT] = ACTIONS(153),
    [anon_sym_H_GT] = ACTIONS(151),
    [anon_sym_GT_GT] = ACTIONS(151),
    [anon_sym_1_GT_GT] = ACTIONS(151),
    [anon_sym_2_GT_GT] = ACTIONS(151),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_CR] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_PIPE] = ACTIONS(149),
    [anon_sym_PIPEH] = ACTIONS(147),
    [anon_sym_PIPET] = ACTIONS(147),
    [anon_sym_AT_AT] = ACTIONS(149),
    [anon_sym_AT_ATdbt] = ACTIONS(149),
    [anon_sym_AT_ATdbta] = ACTIONS(147),
    [anon_sym_AT_ATdbtb] = ACTIONS(147),
    [anon_sym_AT_ATdbts] = ACTIONS(147),
    [anon_sym_AT_AT_DOT] = ACTIONS(147),
    [anon_sym_AT_AT_EQ] = ACTIONS(147),
    [anon_sym_AT_ATk] = ACTIONS(147),
    [anon_sym_AT_ATt] = ACTIONS(147),
    [anon_sym_AT_ATb] = ACTIONS(147),
    [anon_sym_AT_ATi] = ACTIONS(149),
    [anon_sym_AT_ATiS] = ACTIONS(147),
    [anon_sym_AT_ATf] = ACTIONS(147),
    [anon_sym_AT_ATs_COLON] = ACTIONS(147),
    [anon_sym_AT_ATc_COLON] = ACTIONS(147),
    [anon_sym_AT] = ACTIONS(149),
    [anon_sym_AT_BANG] = ACTIONS(147),
    [anon_sym_AT_LPAREN] = ACTIONS(147),
    [anon_sym_ATa_COLON] = ACTIONS(147),
    [anon_sym_ATb_COLON] = ACTIONS(147),
    [anon_sym_ATB_COLON] = ACTIONS(147),
    [anon_sym_ATe_COLON] = ACTIONS(147),
    [anon_sym_ATF_COLON] = ACTIONS(147),
    [anon_sym_ATi_COLON] = ACTIONS(147),
    [anon_sym_ATk_COLON] = ACTIONS(147),
    [anon_sym_ATo_COLON] = ACTIONS(147),
    [anon_sym_ATr_COLON] = ACTIONS(147),
    [anon_sym_ATf_COLON] = ACTIONS(147),
    [anon_sym_ATs_COLON] = ACTIONS(147),
    [anon_sym_ATx_COLON] = ACTIONS(147),
    [anon_sym_PIPE_DOT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_1_GT] = ACTIONS(149),
    [anon_sym_2_GT] = ACTIONS(149),
    [anon_sym_H_GT] = ACTIONS(147),
    [anon_sym_GT_GT] = ACTIONS(147),
    [anon_sym_1_GT_GT] = ACTIONS(147),
    [anon_sym_2_GT_GT] = ACTIONS(147),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(147),
    [anon_sym_CR] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(147),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_PIPE] = ACTIONS(169),
    [anon_sym_PIPEH] = ACTIONS(167),
    [anon_sym_PIPET] = ACTIONS(167),
    [anon_sym_AT_AT] = ACTIONS(169),
    [anon_sym_AT_ATdbt] = ACTIONS(169),
    [anon_sym_AT_ATdbta] = ACTIONS(167),
    [anon_sym_AT_ATdbtb] = ACTIONS(167),
    [anon_sym_AT_ATdbts] = ACTIONS(167),
    [anon_sym_AT_AT_DOT] = ACTIONS(167),
    [anon_sym_AT_AT_EQ] = ACTIONS(167),
    [anon_sym_AT_ATk] = ACTIONS(167),
    [anon_sym_AT_ATt] = ACTIONS(167),
    [anon_sym_AT_ATb] = ACTIONS(167),
    [anon_sym_AT_ATi] = ACTIONS(169),
    [anon_sym_AT_ATiS] = ACTIONS(167),
    [anon_sym_AT_ATf] = ACTIONS(167),
    [anon_sym_AT_ATs_COLON] = ACTIONS(167),
    [anon_sym_AT_ATc_COLON] = ACTIONS(167),
    [anon_sym_AT] = ACTIONS(169),
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
    [anon_sym_PIPE_DOT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_1_GT] = ACTIONS(169),
    [anon_sym_2_GT] = ACTIONS(169),
    [anon_sym_H_GT] = ACTIONS(167),
    [anon_sym_GT_GT] = ACTIONS(167),
    [anon_sym_1_GT_GT] = ACTIONS(167),
    [anon_sym_2_GT_GT] = ACTIONS(167),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_PIPEH] = ACTIONS(82),
    [anon_sym_PIPET] = ACTIONS(82),
    [anon_sym_AT_AT] = ACTIONS(84),
    [anon_sym_AT_ATdbt] = ACTIONS(84),
    [anon_sym_AT_ATdbta] = ACTIONS(82),
    [anon_sym_AT_ATdbtb] = ACTIONS(82),
    [anon_sym_AT_ATdbts] = ACTIONS(82),
    [anon_sym_AT_AT_DOT] = ACTIONS(82),
    [anon_sym_AT_AT_EQ] = ACTIONS(82),
    [anon_sym_AT_ATk] = ACTIONS(82),
    [anon_sym_AT_ATt] = ACTIONS(82),
    [anon_sym_AT_ATb] = ACTIONS(82),
    [anon_sym_AT_ATi] = ACTIONS(84),
    [anon_sym_AT_ATiS] = ACTIONS(82),
    [anon_sym_AT_ATf] = ACTIONS(82),
    [anon_sym_AT_ATs_COLON] = ACTIONS(82),
    [anon_sym_AT_ATc_COLON] = ACTIONS(82),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_AT_BANG] = ACTIONS(82),
    [anon_sym_AT_LPAREN] = ACTIONS(82),
    [anon_sym_ATa_COLON] = ACTIONS(82),
    [anon_sym_ATb_COLON] = ACTIONS(82),
    [anon_sym_ATB_COLON] = ACTIONS(82),
    [anon_sym_ATe_COLON] = ACTIONS(82),
    [anon_sym_ATF_COLON] = ACTIONS(82),
    [anon_sym_ATi_COLON] = ACTIONS(82),
    [anon_sym_ATk_COLON] = ACTIONS(82),
    [anon_sym_ATo_COLON] = ACTIONS(82),
    [anon_sym_ATr_COLON] = ACTIONS(82),
    [anon_sym_ATf_COLON] = ACTIONS(82),
    [anon_sym_ATs_COLON] = ACTIONS(82),
    [anon_sym_ATx_COLON] = ACTIONS(82),
    [anon_sym_PIPE_DOT] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_1_GT] = ACTIONS(84),
    [anon_sym_2_GT] = ACTIONS(84),
    [anon_sym_H_GT] = ACTIONS(82),
    [anon_sym_GT_GT] = ACTIONS(82),
    [anon_sym_1_GT_GT] = ACTIONS(82),
    [anon_sym_2_GT_GT] = ACTIONS(82),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(82),
    [anon_sym_CR] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_PIPEH] = ACTIONS(171),
    [anon_sym_PIPET] = ACTIONS(171),
    [anon_sym_AT_AT] = ACTIONS(173),
    [anon_sym_AT_ATdbt] = ACTIONS(173),
    [anon_sym_AT_ATdbta] = ACTIONS(171),
    [anon_sym_AT_ATdbtb] = ACTIONS(171),
    [anon_sym_AT_ATdbts] = ACTIONS(171),
    [anon_sym_AT_AT_DOT] = ACTIONS(171),
    [anon_sym_AT_AT_EQ] = ACTIONS(171),
    [anon_sym_AT_ATk] = ACTIONS(171),
    [anon_sym_AT_ATt] = ACTIONS(171),
    [anon_sym_AT_ATb] = ACTIONS(171),
    [anon_sym_AT_ATi] = ACTIONS(173),
    [anon_sym_AT_ATiS] = ACTIONS(171),
    [anon_sym_AT_ATf] = ACTIONS(171),
    [anon_sym_AT_ATs_COLON] = ACTIONS(171),
    [anon_sym_AT_ATc_COLON] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(173),
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
    [anon_sym_PIPE_DOT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_1_GT] = ACTIONS(173),
    [anon_sym_2_GT] = ACTIONS(173),
    [anon_sym_H_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_1_GT_GT] = ACTIONS(171),
    [anon_sym_2_GT_GT] = ACTIONS(171),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_PIPE] = ACTIONS(177),
    [anon_sym_PIPEH] = ACTIONS(175),
    [anon_sym_PIPET] = ACTIONS(175),
    [anon_sym_AT_AT] = ACTIONS(177),
    [anon_sym_AT_ATdbt] = ACTIONS(177),
    [anon_sym_AT_ATdbta] = ACTIONS(175),
    [anon_sym_AT_ATdbtb] = ACTIONS(175),
    [anon_sym_AT_ATdbts] = ACTIONS(175),
    [anon_sym_AT_AT_DOT] = ACTIONS(175),
    [anon_sym_AT_AT_EQ] = ACTIONS(175),
    [anon_sym_AT_ATk] = ACTIONS(175),
    [anon_sym_AT_ATt] = ACTIONS(175),
    [anon_sym_AT_ATb] = ACTIONS(175),
    [anon_sym_AT_ATi] = ACTIONS(177),
    [anon_sym_AT_ATiS] = ACTIONS(175),
    [anon_sym_AT_ATf] = ACTIONS(175),
    [anon_sym_AT_ATs_COLON] = ACTIONS(175),
    [anon_sym_AT_ATc_COLON] = ACTIONS(175),
    [anon_sym_AT] = ACTIONS(177),
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
    [anon_sym_PIPE_DOT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_1_GT] = ACTIONS(177),
    [anon_sym_2_GT] = ACTIONS(177),
    [anon_sym_H_GT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(175),
    [anon_sym_1_GT_GT] = ACTIONS(175),
    [anon_sym_2_GT_GT] = ACTIONS(175),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(181),
    [anon_sym_PIPEH] = ACTIONS(179),
    [anon_sym_PIPET] = ACTIONS(179),
    [anon_sym_AT_AT] = ACTIONS(181),
    [anon_sym_AT_ATdbt] = ACTIONS(181),
    [anon_sym_AT_ATdbta] = ACTIONS(179),
    [anon_sym_AT_ATdbtb] = ACTIONS(179),
    [anon_sym_AT_ATdbts] = ACTIONS(179),
    [anon_sym_AT_AT_DOT] = ACTIONS(179),
    [anon_sym_AT_AT_EQ] = ACTIONS(179),
    [anon_sym_AT_ATk] = ACTIONS(179),
    [anon_sym_AT_ATt] = ACTIONS(179),
    [anon_sym_AT_ATb] = ACTIONS(179),
    [anon_sym_AT_ATi] = ACTIONS(181),
    [anon_sym_AT_ATiS] = ACTIONS(179),
    [anon_sym_AT_ATf] = ACTIONS(179),
    [anon_sym_AT_ATs_COLON] = ACTIONS(179),
    [anon_sym_AT_ATc_COLON] = ACTIONS(179),
    [anon_sym_AT] = ACTIONS(181),
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
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_1_GT] = ACTIONS(181),
    [anon_sym_2_GT] = ACTIONS(181),
    [anon_sym_H_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(179),
    [anon_sym_1_GT_GT] = ACTIONS(179),
    [anon_sym_2_GT_GT] = ACTIONS(179),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
  },
  [37] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_1_GT] = ACTIONS(185),
    [anon_sym_2_GT] = ACTIONS(185),
    [anon_sym_H_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_1_GT_GT] = ACTIONS(183),
    [anon_sym_2_GT_GT] = ACTIONS(183),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(189),
    [anon_sym_PIPEH] = ACTIONS(187),
    [anon_sym_PIPET] = ACTIONS(187),
    [anon_sym_AT_AT] = ACTIONS(189),
    [anon_sym_AT_ATdbt] = ACTIONS(189),
    [anon_sym_AT_ATdbta] = ACTIONS(187),
    [anon_sym_AT_ATdbtb] = ACTIONS(187),
    [anon_sym_AT_ATdbts] = ACTIONS(187),
    [anon_sym_AT_AT_DOT] = ACTIONS(187),
    [anon_sym_AT_AT_EQ] = ACTIONS(187),
    [anon_sym_AT_ATk] = ACTIONS(187),
    [anon_sym_AT_ATt] = ACTIONS(187),
    [anon_sym_AT_ATb] = ACTIONS(187),
    [anon_sym_AT_ATi] = ACTIONS(189),
    [anon_sym_AT_ATiS] = ACTIONS(187),
    [anon_sym_AT_ATf] = ACTIONS(187),
    [anon_sym_AT_ATs_COLON] = ACTIONS(187),
    [anon_sym_AT_ATc_COLON] = ACTIONS(187),
    [anon_sym_AT] = ACTIONS(189),
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
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_1_GT] = ACTIONS(189),
    [anon_sym_2_GT] = ACTIONS(189),
    [anon_sym_H_GT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(187),
    [anon_sym_1_GT_GT] = ACTIONS(187),
    [anon_sym_2_GT_GT] = ACTIONS(187),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_PIPE] = ACTIONS(193),
    [anon_sym_PIPEH] = ACTIONS(191),
    [anon_sym_PIPET] = ACTIONS(191),
    [anon_sym_AT_AT] = ACTIONS(193),
    [anon_sym_AT_ATdbt] = ACTIONS(193),
    [anon_sym_AT_ATdbta] = ACTIONS(191),
    [anon_sym_AT_ATdbtb] = ACTIONS(191),
    [anon_sym_AT_ATdbts] = ACTIONS(191),
    [anon_sym_AT_AT_DOT] = ACTIONS(191),
    [anon_sym_AT_AT_EQ] = ACTIONS(191),
    [anon_sym_AT_ATk] = ACTIONS(191),
    [anon_sym_AT_ATt] = ACTIONS(191),
    [anon_sym_AT_ATb] = ACTIONS(191),
    [anon_sym_AT_ATi] = ACTIONS(193),
    [anon_sym_AT_ATiS] = ACTIONS(191),
    [anon_sym_AT_ATf] = ACTIONS(191),
    [anon_sym_AT_ATs_COLON] = ACTIONS(191),
    [anon_sym_AT_ATc_COLON] = ACTIONS(191),
    [anon_sym_AT] = ACTIONS(193),
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
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_1_GT] = ACTIONS(193),
    [anon_sym_2_GT] = ACTIONS(193),
    [anon_sym_H_GT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(191),
    [anon_sym_1_GT_GT] = ACTIONS(191),
    [anon_sym_2_GT_GT] = ACTIONS(191),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
  },
  [40] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_1_GT] = ACTIONS(197),
    [anon_sym_2_GT] = ACTIONS(197),
    [anon_sym_H_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(195),
    [anon_sym_1_GT_GT] = ACTIONS(195),
    [anon_sym_2_GT_GT] = ACTIONS(195),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(219),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_AT_BANG] = ACTIONS(239),
    [anon_sym_AT_LPAREN] = ACTIONS(241),
    [anon_sym_ATa_COLON] = ACTIONS(243),
    [anon_sym_ATb_COLON] = ACTIONS(245),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(249),
    [anon_sym_ATF_COLON] = ACTIONS(251),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(255),
    [anon_sym_ATo_COLON] = ACTIONS(257),
    [anon_sym_ATr_COLON] = ACTIONS(259),
    [anon_sym_ATf_COLON] = ACTIONS(261),
    [anon_sym_ATs_COLON] = ACTIONS(263),
    [anon_sym_ATx_COLON] = ACTIONS(265),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_1_GT] = ACTIONS(269),
    [anon_sym_2_GT] = ACTIONS(269),
    [anon_sym_H_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(199),
    [anon_sym_1_GT_GT] = ACTIONS(199),
    [anon_sym_2_GT_GT] = ACTIONS(199),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_CR] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_PIPE] = ACTIONS(273),
    [anon_sym_PIPEH] = ACTIONS(271),
    [anon_sym_PIPET] = ACTIONS(271),
    [anon_sym_AT_AT] = ACTIONS(273),
    [anon_sym_AT_ATdbt] = ACTIONS(273),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(271),
    [anon_sym_AT_ATdbts] = ACTIONS(271),
    [anon_sym_AT_AT_DOT] = ACTIONS(271),
    [anon_sym_AT_AT_EQ] = ACTIONS(271),
    [anon_sym_AT_ATk] = ACTIONS(271),
    [anon_sym_AT_ATt] = ACTIONS(271),
    [anon_sym_AT_ATb] = ACTIONS(271),
    [anon_sym_AT_ATi] = ACTIONS(273),
    [anon_sym_AT_ATiS] = ACTIONS(271),
    [anon_sym_AT_ATf] = ACTIONS(271),
    [anon_sym_AT_ATs_COLON] = ACTIONS(271),
    [anon_sym_AT_ATc_COLON] = ACTIONS(271),
    [anon_sym_AT] = ACTIONS(273),
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
    [anon_sym_GT] = ACTIONS(273),
    [anon_sym_1_GT] = ACTIONS(273),
    [anon_sym_2_GT] = ACTIONS(273),
    [anon_sym_H_GT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(271),
    [anon_sym_1_GT_GT] = ACTIONS(271),
    [anon_sym_2_GT_GT] = ACTIONS(271),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(271),
    [anon_sym_CR] = ACTIONS(271),
    [anon_sym_SEMI] = ACTIONS(271),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_PIPE] = ACTIONS(277),
    [anon_sym_PIPEH] = ACTIONS(275),
    [anon_sym_PIPET] = ACTIONS(275),
    [anon_sym_AT_AT] = ACTIONS(277),
    [anon_sym_AT_ATdbt] = ACTIONS(277),
    [anon_sym_AT_ATdbta] = ACTIONS(275),
    [anon_sym_AT_ATdbtb] = ACTIONS(275),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(275),
    [anon_sym_AT_AT_EQ] = ACTIONS(275),
    [anon_sym_AT_ATk] = ACTIONS(275),
    [anon_sym_AT_ATt] = ACTIONS(275),
    [anon_sym_AT_ATb] = ACTIONS(275),
    [anon_sym_AT_ATi] = ACTIONS(277),
    [anon_sym_AT_ATiS] = ACTIONS(275),
    [anon_sym_AT_ATf] = ACTIONS(275),
    [anon_sym_AT_ATs_COLON] = ACTIONS(275),
    [anon_sym_AT_ATc_COLON] = ACTIONS(275),
    [anon_sym_AT] = ACTIONS(277),
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
    [anon_sym_GT] = ACTIONS(277),
    [anon_sym_1_GT] = ACTIONS(277),
    [anon_sym_2_GT] = ACTIONS(277),
    [anon_sym_H_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(275),
    [anon_sym_1_GT_GT] = ACTIONS(275),
    [anon_sym_2_GT_GT] = ACTIONS(275),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(275),
    [anon_sym_CR] = ACTIONS(275),
    [anon_sym_SEMI] = ACTIONS(275),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPEH] = ACTIONS(279),
    [anon_sym_PIPET] = ACTIONS(279),
    [anon_sym_AT_AT] = ACTIONS(281),
    [anon_sym_AT_ATdbt] = ACTIONS(281),
    [anon_sym_AT_ATdbta] = ACTIONS(279),
    [anon_sym_AT_ATdbtb] = ACTIONS(279),
    [anon_sym_AT_ATdbts] = ACTIONS(279),
    [anon_sym_AT_AT_DOT] = ACTIONS(279),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(279),
    [anon_sym_AT_ATt] = ACTIONS(279),
    [anon_sym_AT_ATb] = ACTIONS(279),
    [anon_sym_AT_ATi] = ACTIONS(281),
    [anon_sym_AT_ATiS] = ACTIONS(279),
    [anon_sym_AT_ATf] = ACTIONS(279),
    [anon_sym_AT_ATs_COLON] = ACTIONS(279),
    [anon_sym_AT_ATc_COLON] = ACTIONS(279),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_AT_BANG] = ACTIONS(279),
    [anon_sym_AT_LPAREN] = ACTIONS(279),
    [anon_sym_ATa_COLON] = ACTIONS(279),
    [anon_sym_ATb_COLON] = ACTIONS(279),
    [anon_sym_ATB_COLON] = ACTIONS(279),
    [anon_sym_ATe_COLON] = ACTIONS(279),
    [anon_sym_ATF_COLON] = ACTIONS(279),
    [anon_sym_ATi_COLON] = ACTIONS(279),
    [anon_sym_ATk_COLON] = ACTIONS(279),
    [anon_sym_ATo_COLON] = ACTIONS(279),
    [anon_sym_ATr_COLON] = ACTIONS(279),
    [anon_sym_ATf_COLON] = ACTIONS(279),
    [anon_sym_ATs_COLON] = ACTIONS(279),
    [anon_sym_ATx_COLON] = ACTIONS(279),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_1_GT] = ACTIONS(281),
    [anon_sym_2_GT] = ACTIONS(281),
    [anon_sym_H_GT] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(279),
    [anon_sym_1_GT_GT] = ACTIONS(279),
    [anon_sym_2_GT_GT] = ACTIONS(279),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(279),
    [anon_sym_CR] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_PIPE] = ACTIONS(285),
    [anon_sym_PIPEH] = ACTIONS(283),
    [anon_sym_PIPET] = ACTIONS(283),
    [anon_sym_AT_AT] = ACTIONS(285),
    [anon_sym_AT_ATdbt] = ACTIONS(285),
    [anon_sym_AT_ATdbta] = ACTIONS(283),
    [anon_sym_AT_ATdbtb] = ACTIONS(283),
    [anon_sym_AT_ATdbts] = ACTIONS(283),
    [anon_sym_AT_AT_DOT] = ACTIONS(283),
    [anon_sym_AT_AT_EQ] = ACTIONS(283),
    [anon_sym_AT_ATk] = ACTIONS(283),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(283),
    [anon_sym_AT_ATi] = ACTIONS(285),
    [anon_sym_AT_ATiS] = ACTIONS(283),
    [anon_sym_AT_ATf] = ACTIONS(283),
    [anon_sym_AT_ATs_COLON] = ACTIONS(283),
    [anon_sym_AT_ATc_COLON] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(285),
    [anon_sym_AT_BANG] = ACTIONS(283),
    [anon_sym_AT_LPAREN] = ACTIONS(283),
    [anon_sym_ATa_COLON] = ACTIONS(283),
    [anon_sym_ATb_COLON] = ACTIONS(283),
    [anon_sym_ATB_COLON] = ACTIONS(283),
    [anon_sym_ATe_COLON] = ACTIONS(283),
    [anon_sym_ATF_COLON] = ACTIONS(283),
    [anon_sym_ATi_COLON] = ACTIONS(283),
    [anon_sym_ATk_COLON] = ACTIONS(283),
    [anon_sym_ATo_COLON] = ACTIONS(283),
    [anon_sym_ATr_COLON] = ACTIONS(283),
    [anon_sym_ATf_COLON] = ACTIONS(283),
    [anon_sym_ATs_COLON] = ACTIONS(283),
    [anon_sym_ATx_COLON] = ACTIONS(283),
    [anon_sym_PIPE_DOT] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_1_GT] = ACTIONS(285),
    [anon_sym_2_GT] = ACTIONS(285),
    [anon_sym_H_GT] = ACTIONS(283),
    [anon_sym_GT_GT] = ACTIONS(283),
    [anon_sym_1_GT_GT] = ACTIONS(283),
    [anon_sym_2_GT_GT] = ACTIONS(283),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_PIPEH] = ACTIONS(287),
    [anon_sym_PIPET] = ACTIONS(287),
    [anon_sym_AT_AT] = ACTIONS(289),
    [anon_sym_AT_ATdbt] = ACTIONS(289),
    [anon_sym_AT_ATdbta] = ACTIONS(287),
    [anon_sym_AT_ATdbtb] = ACTIONS(287),
    [anon_sym_AT_ATdbts] = ACTIONS(287),
    [anon_sym_AT_AT_DOT] = ACTIONS(287),
    [anon_sym_AT_AT_EQ] = ACTIONS(287),
    [anon_sym_AT_ATk] = ACTIONS(287),
    [anon_sym_AT_ATt] = ACTIONS(287),
    [anon_sym_AT_ATb] = ACTIONS(287),
    [anon_sym_AT_ATi] = ACTIONS(289),
    [anon_sym_AT_ATiS] = ACTIONS(287),
    [anon_sym_AT_ATf] = ACTIONS(287),
    [anon_sym_AT_ATs_COLON] = ACTIONS(287),
    [anon_sym_AT_ATc_COLON] = ACTIONS(287),
    [anon_sym_AT] = ACTIONS(289),
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
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_1_GT] = ACTIONS(289),
    [anon_sym_2_GT] = ACTIONS(289),
    [anon_sym_H_GT] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(287),
    [anon_sym_1_GT_GT] = ACTIONS(287),
    [anon_sym_2_GT_GT] = ACTIONS(287),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(287),
    [anon_sym_CR] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_PIPEH] = ACTIONS(291),
    [anon_sym_PIPET] = ACTIONS(291),
    [anon_sym_AT_AT] = ACTIONS(293),
    [anon_sym_AT_ATdbt] = ACTIONS(293),
    [anon_sym_AT_ATdbta] = ACTIONS(291),
    [anon_sym_AT_ATdbtb] = ACTIONS(291),
    [anon_sym_AT_ATdbts] = ACTIONS(291),
    [anon_sym_AT_AT_DOT] = ACTIONS(291),
    [anon_sym_AT_AT_EQ] = ACTIONS(291),
    [anon_sym_AT_ATk] = ACTIONS(291),
    [anon_sym_AT_ATt] = ACTIONS(291),
    [anon_sym_AT_ATb] = ACTIONS(291),
    [anon_sym_AT_ATi] = ACTIONS(293),
    [anon_sym_AT_ATiS] = ACTIONS(291),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(291),
    [anon_sym_AT_ATc_COLON] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(293),
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
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_1_GT] = ACTIONS(293),
    [anon_sym_2_GT] = ACTIONS(293),
    [anon_sym_H_GT] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(291),
    [anon_sym_1_GT_GT] = ACTIONS(291),
    [anon_sym_2_GT_GT] = ACTIONS(291),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_PIPEH] = ACTIONS(295),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(297),
    [anon_sym_AT_ATdbta] = ACTIONS(295),
    [anon_sym_AT_ATdbtb] = ACTIONS(295),
    [anon_sym_AT_ATdbts] = ACTIONS(295),
    [anon_sym_AT_AT_DOT] = ACTIONS(295),
    [anon_sym_AT_AT_EQ] = ACTIONS(295),
    [anon_sym_AT_ATk] = ACTIONS(295),
    [anon_sym_AT_ATt] = ACTIONS(295),
    [anon_sym_AT_ATb] = ACTIONS(295),
    [anon_sym_AT_ATi] = ACTIONS(297),
    [anon_sym_AT_ATiS] = ACTIONS(295),
    [anon_sym_AT_ATf] = ACTIONS(295),
    [anon_sym_AT_ATs_COLON] = ACTIONS(295),
    [anon_sym_AT_ATc_COLON] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(295),
    [anon_sym_AT_LPAREN] = ACTIONS(295),
    [anon_sym_ATa_COLON] = ACTIONS(295),
    [anon_sym_ATb_COLON] = ACTIONS(295),
    [anon_sym_ATB_COLON] = ACTIONS(295),
    [anon_sym_ATe_COLON] = ACTIONS(295),
    [anon_sym_ATF_COLON] = ACTIONS(295),
    [anon_sym_ATi_COLON] = ACTIONS(295),
    [anon_sym_ATk_COLON] = ACTIONS(295),
    [anon_sym_ATo_COLON] = ACTIONS(295),
    [anon_sym_ATr_COLON] = ACTIONS(295),
    [anon_sym_ATf_COLON] = ACTIONS(295),
    [anon_sym_ATs_COLON] = ACTIONS(295),
    [anon_sym_ATx_COLON] = ACTIONS(295),
    [anon_sym_PIPE_DOT] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_1_GT] = ACTIONS(297),
    [anon_sym_2_GT] = ACTIONS(297),
    [anon_sym_H_GT] = ACTIONS(295),
    [anon_sym_GT_GT] = ACTIONS(295),
    [anon_sym_1_GT_GT] = ACTIONS(295),
    [anon_sym_2_GT_GT] = ACTIONS(295),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(295),
    [anon_sym_CR] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_PIPEH] = ACTIONS(299),
    [anon_sym_PIPET] = ACTIONS(299),
    [anon_sym_AT_AT] = ACTIONS(301),
    [anon_sym_AT_ATdbt] = ACTIONS(301),
    [anon_sym_AT_ATdbta] = ACTIONS(299),
    [anon_sym_AT_ATdbtb] = ACTIONS(299),
    [anon_sym_AT_ATdbts] = ACTIONS(299),
    [anon_sym_AT_AT_DOT] = ACTIONS(299),
    [anon_sym_AT_AT_EQ] = ACTIONS(299),
    [anon_sym_AT_ATk] = ACTIONS(299),
    [anon_sym_AT_ATt] = ACTIONS(299),
    [anon_sym_AT_ATb] = ACTIONS(299),
    [anon_sym_AT_ATi] = ACTIONS(301),
    [anon_sym_AT_ATiS] = ACTIONS(299),
    [anon_sym_AT_ATf] = ACTIONS(299),
    [anon_sym_AT_ATs_COLON] = ACTIONS(299),
    [anon_sym_AT_ATc_COLON] = ACTIONS(299),
    [anon_sym_AT] = ACTIONS(301),
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
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_1_GT] = ACTIONS(301),
    [anon_sym_2_GT] = ACTIONS(301),
    [anon_sym_H_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(299),
    [anon_sym_1_GT_GT] = ACTIONS(299),
    [anon_sym_2_GT_GT] = ACTIONS(299),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_CR] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_PIPEH] = ACTIONS(303),
    [anon_sym_PIPET] = ACTIONS(303),
    [anon_sym_AT_AT] = ACTIONS(305),
    [anon_sym_AT_ATdbt] = ACTIONS(305),
    [anon_sym_AT_ATdbta] = ACTIONS(303),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(303),
    [anon_sym_AT_AT_DOT] = ACTIONS(303),
    [anon_sym_AT_AT_EQ] = ACTIONS(303),
    [anon_sym_AT_ATk] = ACTIONS(303),
    [anon_sym_AT_ATt] = ACTIONS(303),
    [anon_sym_AT_ATb] = ACTIONS(303),
    [anon_sym_AT_ATi] = ACTIONS(305),
    [anon_sym_AT_ATiS] = ACTIONS(303),
    [anon_sym_AT_ATf] = ACTIONS(303),
    [anon_sym_AT_ATs_COLON] = ACTIONS(303),
    [anon_sym_AT_ATc_COLON] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(305),
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
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_1_GT] = ACTIONS(305),
    [anon_sym_2_GT] = ACTIONS(305),
    [anon_sym_H_GT] = ACTIONS(303),
    [anon_sym_GT_GT] = ACTIONS(303),
    [anon_sym_1_GT_GT] = ACTIONS(303),
    [anon_sym_2_GT_GT] = ACTIONS(303),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(303),
    [anon_sym_CR] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(309),
    [anon_sym_PIPEH] = ACTIONS(307),
    [anon_sym_PIPET] = ACTIONS(307),
    [anon_sym_AT_AT] = ACTIONS(309),
    [anon_sym_AT_ATdbt] = ACTIONS(309),
    [anon_sym_AT_ATdbta] = ACTIONS(307),
    [anon_sym_AT_ATdbtb] = ACTIONS(307),
    [anon_sym_AT_ATdbts] = ACTIONS(307),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(307),
    [anon_sym_AT_ATk] = ACTIONS(307),
    [anon_sym_AT_ATt] = ACTIONS(307),
    [anon_sym_AT_ATb] = ACTIONS(307),
    [anon_sym_AT_ATi] = ACTIONS(309),
    [anon_sym_AT_ATiS] = ACTIONS(307),
    [anon_sym_AT_ATf] = ACTIONS(307),
    [anon_sym_AT_ATs_COLON] = ACTIONS(307),
    [anon_sym_AT_ATc_COLON] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(309),
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
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_1_GT] = ACTIONS(309),
    [anon_sym_2_GT] = ACTIONS(309),
    [anon_sym_H_GT] = ACTIONS(307),
    [anon_sym_GT_GT] = ACTIONS(307),
    [anon_sym_1_GT_GT] = ACTIONS(307),
    [anon_sym_2_GT_GT] = ACTIONS(307),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_CR] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(313),
    [anon_sym_PIPEH] = ACTIONS(311),
    [anon_sym_PIPET] = ACTIONS(311),
    [anon_sym_AT_AT] = ACTIONS(313),
    [anon_sym_AT_ATdbt] = ACTIONS(313),
    [anon_sym_AT_ATdbta] = ACTIONS(311),
    [anon_sym_AT_ATdbtb] = ACTIONS(311),
    [anon_sym_AT_ATdbts] = ACTIONS(311),
    [anon_sym_AT_AT_DOT] = ACTIONS(311),
    [anon_sym_AT_AT_EQ] = ACTIONS(311),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(311),
    [anon_sym_AT_ATb] = ACTIONS(311),
    [anon_sym_AT_ATi] = ACTIONS(313),
    [anon_sym_AT_ATiS] = ACTIONS(311),
    [anon_sym_AT_ATf] = ACTIONS(311),
    [anon_sym_AT_ATs_COLON] = ACTIONS(311),
    [anon_sym_AT_ATc_COLON] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(313),
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
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_1_GT] = ACTIONS(313),
    [anon_sym_2_GT] = ACTIONS(313),
    [anon_sym_H_GT] = ACTIONS(311),
    [anon_sym_GT_GT] = ACTIONS(311),
    [anon_sym_1_GT_GT] = ACTIONS(311),
    [anon_sym_2_GT_GT] = ACTIONS(311),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_CR] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPEH] = ACTIONS(315),
    [anon_sym_PIPET] = ACTIONS(315),
    [anon_sym_AT_AT] = ACTIONS(317),
    [anon_sym_AT_ATdbt] = ACTIONS(317),
    [anon_sym_AT_ATdbta] = ACTIONS(315),
    [anon_sym_AT_ATdbtb] = ACTIONS(315),
    [anon_sym_AT_ATdbts] = ACTIONS(315),
    [anon_sym_AT_AT_DOT] = ACTIONS(315),
    [anon_sym_AT_AT_EQ] = ACTIONS(315),
    [anon_sym_AT_ATk] = ACTIONS(315),
    [anon_sym_AT_ATt] = ACTIONS(315),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(315),
    [anon_sym_AT_ATf] = ACTIONS(315),
    [anon_sym_AT_ATs_COLON] = ACTIONS(315),
    [anon_sym_AT_ATc_COLON] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(317),
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
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_1_GT] = ACTIONS(317),
    [anon_sym_2_GT] = ACTIONS(317),
    [anon_sym_H_GT] = ACTIONS(315),
    [anon_sym_GT_GT] = ACTIONS(315),
    [anon_sym_1_GT_GT] = ACTIONS(315),
    [anon_sym_2_GT_GT] = ACTIONS(315),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_CR] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_PIPEH] = ACTIONS(319),
    [anon_sym_PIPET] = ACTIONS(319),
    [anon_sym_AT_AT] = ACTIONS(321),
    [anon_sym_AT_ATdbt] = ACTIONS(321),
    [anon_sym_AT_ATdbta] = ACTIONS(319),
    [anon_sym_AT_ATdbtb] = ACTIONS(319),
    [anon_sym_AT_ATdbts] = ACTIONS(319),
    [anon_sym_AT_AT_DOT] = ACTIONS(319),
    [anon_sym_AT_AT_EQ] = ACTIONS(319),
    [anon_sym_AT_ATk] = ACTIONS(319),
    [anon_sym_AT_ATt] = ACTIONS(319),
    [anon_sym_AT_ATb] = ACTIONS(319),
    [anon_sym_AT_ATi] = ACTIONS(321),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(319),
    [anon_sym_AT_ATs_COLON] = ACTIONS(319),
    [anon_sym_AT_ATc_COLON] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(321),
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
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_1_GT] = ACTIONS(321),
    [anon_sym_2_GT] = ACTIONS(321),
    [anon_sym_H_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(319),
    [anon_sym_1_GT_GT] = ACTIONS(319),
    [anon_sym_2_GT_GT] = ACTIONS(319),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(319),
    [anon_sym_CR] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
  },
  [55] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_1_GT] = ACTIONS(325),
    [anon_sym_2_GT] = ACTIONS(325),
    [anon_sym_H_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(323),
    [anon_sym_1_GT_GT] = ACTIONS(323),
    [anon_sym_2_GT_GT] = ACTIONS(323),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_CR] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
  },
  [56] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_1_GT] = ACTIONS(329),
    [anon_sym_2_GT] = ACTIONS(329),
    [anon_sym_H_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [anon_sym_1_GT_GT] = ACTIONS(327),
    [anon_sym_2_GT_GT] = ACTIONS(327),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_CR] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
  },
  [57] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_1_GT] = ACTIONS(333),
    [anon_sym_2_GT] = ACTIONS(333),
    [anon_sym_H_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [anon_sym_1_GT_GT] = ACTIONS(331),
    [anon_sym_2_GT_GT] = ACTIONS(331),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_CR] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
  },
  [58] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_1_GT] = ACTIONS(337),
    [anon_sym_2_GT] = ACTIONS(337),
    [anon_sym_H_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(335),
    [anon_sym_1_GT_GT] = ACTIONS(335),
    [anon_sym_2_GT_GT] = ACTIONS(335),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_CR] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(219),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_AT_BANG] = ACTIONS(239),
    [anon_sym_AT_LPAREN] = ACTIONS(241),
    [anon_sym_ATa_COLON] = ACTIONS(243),
    [anon_sym_ATb_COLON] = ACTIONS(245),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(249),
    [anon_sym_ATF_COLON] = ACTIONS(251),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(255),
    [anon_sym_ATo_COLON] = ACTIONS(257),
    [anon_sym_ATr_COLON] = ACTIONS(259),
    [anon_sym_ATf_COLON] = ACTIONS(261),
    [anon_sym_ATs_COLON] = ACTIONS(263),
    [anon_sym_ATx_COLON] = ACTIONS(265),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_1_GT] = ACTIONS(341),
    [anon_sym_2_GT] = ACTIONS(343),
    [anon_sym_H_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(347),
    [anon_sym_1_GT_GT] = ACTIONS(347),
    [anon_sym_2_GT_GT] = ACTIONS(349),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
  },
  [60] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_1_GT] = ACTIONS(353),
    [anon_sym_2_GT] = ACTIONS(353),
    [anon_sym_H_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [anon_sym_1_GT_GT] = ACTIONS(351),
    [anon_sym_2_GT_GT] = ACTIONS(351),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_CR] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
  },
  [61] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_1_GT] = ACTIONS(357),
    [anon_sym_2_GT] = ACTIONS(357),
    [anon_sym_H_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [anon_sym_1_GT_GT] = ACTIONS(355),
    [anon_sym_2_GT_GT] = ACTIONS(355),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
  },
  [62] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_1_GT] = ACTIONS(361),
    [anon_sym_2_GT] = ACTIONS(361),
    [anon_sym_H_GT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(359),
    [anon_sym_1_GT_GT] = ACTIONS(359),
    [anon_sym_2_GT_GT] = ACTIONS(359),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_CR] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(359),
  },
  [63] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_1_GT] = ACTIONS(365),
    [anon_sym_2_GT] = ACTIONS(365),
    [anon_sym_H_GT] = ACTIONS(363),
    [anon_sym_GT_GT] = ACTIONS(363),
    [anon_sym_1_GT_GT] = ACTIONS(363),
    [anon_sym_2_GT_GT] = ACTIONS(363),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_CR] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_PIPE] = ACTIONS(369),
    [anon_sym_PIPEH] = ACTIONS(367),
    [anon_sym_PIPET] = ACTIONS(367),
    [anon_sym_AT_AT] = ACTIONS(369),
    [anon_sym_AT_ATdbt] = ACTIONS(369),
    [anon_sym_AT_ATdbta] = ACTIONS(367),
    [anon_sym_AT_ATdbtb] = ACTIONS(367),
    [anon_sym_AT_ATdbts] = ACTIONS(367),
    [anon_sym_AT_AT_DOT] = ACTIONS(367),
    [anon_sym_AT_AT_EQ] = ACTIONS(367),
    [anon_sym_AT_ATk] = ACTIONS(367),
    [anon_sym_AT_ATt] = ACTIONS(367),
    [anon_sym_AT_ATb] = ACTIONS(367),
    [anon_sym_AT_ATi] = ACTIONS(369),
    [anon_sym_AT_ATiS] = ACTIONS(367),
    [anon_sym_AT_ATf] = ACTIONS(367),
    [anon_sym_AT_ATs_COLON] = ACTIONS(367),
    [anon_sym_AT_ATc_COLON] = ACTIONS(367),
    [anon_sym_AT] = ACTIONS(369),
    [anon_sym_AT_BANG] = ACTIONS(367),
    [anon_sym_AT_LPAREN] = ACTIONS(367),
    [anon_sym_ATa_COLON] = ACTIONS(367),
    [anon_sym_ATb_COLON] = ACTIONS(367),
    [anon_sym_ATB_COLON] = ACTIONS(367),
    [anon_sym_ATe_COLON] = ACTIONS(367),
    [anon_sym_ATF_COLON] = ACTIONS(367),
    [anon_sym_ATi_COLON] = ACTIONS(367),
    [anon_sym_ATk_COLON] = ACTIONS(367),
    [anon_sym_ATo_COLON] = ACTIONS(367),
    [anon_sym_ATr_COLON] = ACTIONS(367),
    [anon_sym_ATf_COLON] = ACTIONS(367),
    [anon_sym_ATs_COLON] = ACTIONS(367),
    [anon_sym_ATx_COLON] = ACTIONS(367),
    [anon_sym_PIPE_DOT] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_1_GT] = ACTIONS(369),
    [anon_sym_2_GT] = ACTIONS(369),
    [anon_sym_H_GT] = ACTIONS(367),
    [anon_sym_GT_GT] = ACTIONS(367),
    [anon_sym_1_GT_GT] = ACTIONS(367),
    [anon_sym_2_GT_GT] = ACTIONS(367),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(367),
    [anon_sym_CR] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_PIPE] = ACTIONS(373),
    [anon_sym_PIPEH] = ACTIONS(371),
    [anon_sym_PIPET] = ACTIONS(371),
    [anon_sym_AT_AT] = ACTIONS(373),
    [anon_sym_AT_ATdbt] = ACTIONS(373),
    [anon_sym_AT_ATdbta] = ACTIONS(371),
    [anon_sym_AT_ATdbtb] = ACTIONS(371),
    [anon_sym_AT_ATdbts] = ACTIONS(371),
    [anon_sym_AT_AT_DOT] = ACTIONS(371),
    [anon_sym_AT_AT_EQ] = ACTIONS(371),
    [anon_sym_AT_ATk] = ACTIONS(371),
    [anon_sym_AT_ATt] = ACTIONS(371),
    [anon_sym_AT_ATb] = ACTIONS(371),
    [anon_sym_AT_ATi] = ACTIONS(373),
    [anon_sym_AT_ATiS] = ACTIONS(371),
    [anon_sym_AT_ATf] = ACTIONS(371),
    [anon_sym_AT_ATs_COLON] = ACTIONS(371),
    [anon_sym_AT_ATc_COLON] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_AT_BANG] = ACTIONS(371),
    [anon_sym_AT_LPAREN] = ACTIONS(371),
    [anon_sym_ATa_COLON] = ACTIONS(371),
    [anon_sym_ATb_COLON] = ACTIONS(371),
    [anon_sym_ATB_COLON] = ACTIONS(371),
    [anon_sym_ATe_COLON] = ACTIONS(371),
    [anon_sym_ATF_COLON] = ACTIONS(371),
    [anon_sym_ATi_COLON] = ACTIONS(371),
    [anon_sym_ATk_COLON] = ACTIONS(371),
    [anon_sym_ATo_COLON] = ACTIONS(371),
    [anon_sym_ATr_COLON] = ACTIONS(371),
    [anon_sym_ATf_COLON] = ACTIONS(371),
    [anon_sym_ATs_COLON] = ACTIONS(371),
    [anon_sym_ATx_COLON] = ACTIONS(371),
    [anon_sym_PIPE_DOT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_1_GT] = ACTIONS(373),
    [anon_sym_2_GT] = ACTIONS(373),
    [anon_sym_H_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(371),
    [anon_sym_1_GT_GT] = ACTIONS(371),
    [anon_sym_2_GT_GT] = ACTIONS(371),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_CR] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(219),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_AT_BANG] = ACTIONS(239),
    [anon_sym_AT_LPAREN] = ACTIONS(241),
    [anon_sym_ATa_COLON] = ACTIONS(243),
    [anon_sym_ATb_COLON] = ACTIONS(245),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(249),
    [anon_sym_ATF_COLON] = ACTIONS(251),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(255),
    [anon_sym_ATo_COLON] = ACTIONS(257),
    [anon_sym_ATr_COLON] = ACTIONS(259),
    [anon_sym_ATf_COLON] = ACTIONS(261),
    [anon_sym_ATs_COLON] = ACTIONS(263),
    [anon_sym_ATx_COLON] = ACTIONS(265),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_1_GT] = ACTIONS(377),
    [anon_sym_2_GT] = ACTIONS(377),
    [anon_sym_H_GT] = ACTIONS(375),
    [anon_sym_GT_GT] = ACTIONS(375),
    [anon_sym_1_GT_GT] = ACTIONS(375),
    [anon_sym_2_GT_GT] = ACTIONS(375),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(375),
    [anon_sym_CR] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(375),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_PIPE] = ACTIONS(381),
    [anon_sym_PIPEH] = ACTIONS(379),
    [anon_sym_PIPET] = ACTIONS(379),
    [anon_sym_AT_AT] = ACTIONS(381),
    [anon_sym_AT_ATdbt] = ACTIONS(381),
    [anon_sym_AT_ATdbta] = ACTIONS(379),
    [anon_sym_AT_ATdbtb] = ACTIONS(379),
    [anon_sym_AT_ATdbts] = ACTIONS(379),
    [anon_sym_AT_AT_DOT] = ACTIONS(379),
    [anon_sym_AT_AT_EQ] = ACTIONS(379),
    [anon_sym_AT_ATk] = ACTIONS(379),
    [anon_sym_AT_ATt] = ACTIONS(379),
    [anon_sym_AT_ATb] = ACTIONS(379),
    [anon_sym_AT_ATi] = ACTIONS(381),
    [anon_sym_AT_ATiS] = ACTIONS(379),
    [anon_sym_AT_ATf] = ACTIONS(379),
    [anon_sym_AT_ATs_COLON] = ACTIONS(379),
    [anon_sym_AT_ATc_COLON] = ACTIONS(379),
    [anon_sym_AT] = ACTIONS(381),
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
    [anon_sym_PIPE_DOT] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_1_GT] = ACTIONS(381),
    [anon_sym_2_GT] = ACTIONS(381),
    [anon_sym_H_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(379),
    [anon_sym_1_GT_GT] = ACTIONS(379),
    [anon_sym_2_GT_GT] = ACTIONS(379),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_CR] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(379),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_PIPE] = ACTIONS(385),
    [anon_sym_PIPEH] = ACTIONS(383),
    [anon_sym_PIPET] = ACTIONS(383),
    [anon_sym_AT_AT] = ACTIONS(385),
    [anon_sym_AT_ATdbt] = ACTIONS(385),
    [anon_sym_AT_ATdbta] = ACTIONS(383),
    [anon_sym_AT_ATdbtb] = ACTIONS(383),
    [anon_sym_AT_ATdbts] = ACTIONS(383),
    [anon_sym_AT_AT_DOT] = ACTIONS(383),
    [anon_sym_AT_AT_EQ] = ACTIONS(383),
    [anon_sym_AT_ATk] = ACTIONS(383),
    [anon_sym_AT_ATt] = ACTIONS(383),
    [anon_sym_AT_ATb] = ACTIONS(383),
    [anon_sym_AT_ATi] = ACTIONS(385),
    [anon_sym_AT_ATiS] = ACTIONS(383),
    [anon_sym_AT_ATf] = ACTIONS(383),
    [anon_sym_AT_ATs_COLON] = ACTIONS(383),
    [anon_sym_AT_ATc_COLON] = ACTIONS(383),
    [anon_sym_AT] = ACTIONS(385),
    [anon_sym_AT_BANG] = ACTIONS(383),
    [anon_sym_AT_LPAREN] = ACTIONS(383),
    [anon_sym_ATa_COLON] = ACTIONS(383),
    [anon_sym_ATb_COLON] = ACTIONS(383),
    [anon_sym_ATB_COLON] = ACTIONS(383),
    [anon_sym_ATe_COLON] = ACTIONS(383),
    [anon_sym_ATF_COLON] = ACTIONS(383),
    [anon_sym_ATi_COLON] = ACTIONS(383),
    [anon_sym_ATk_COLON] = ACTIONS(383),
    [anon_sym_ATo_COLON] = ACTIONS(383),
    [anon_sym_ATr_COLON] = ACTIONS(383),
    [anon_sym_ATf_COLON] = ACTIONS(383),
    [anon_sym_ATs_COLON] = ACTIONS(383),
    [anon_sym_ATx_COLON] = ACTIONS(383),
    [anon_sym_PIPE_DOT] = ACTIONS(383),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_1_GT] = ACTIONS(385),
    [anon_sym_2_GT] = ACTIONS(385),
    [anon_sym_H_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(383),
    [anon_sym_1_GT_GT] = ACTIONS(383),
    [anon_sym_2_GT_GT] = ACTIONS(383),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_CR] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(389),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(389),
    [anon_sym_AT_ATdbt] = ACTIONS(389),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(389),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(389),
    [anon_sym_AT_BANG] = ACTIONS(387),
    [anon_sym_AT_LPAREN] = ACTIONS(387),
    [anon_sym_ATa_COLON] = ACTIONS(387),
    [anon_sym_ATb_COLON] = ACTIONS(387),
    [anon_sym_ATB_COLON] = ACTIONS(387),
    [anon_sym_ATe_COLON] = ACTIONS(387),
    [anon_sym_ATF_COLON] = ACTIONS(387),
    [anon_sym_ATi_COLON] = ACTIONS(387),
    [anon_sym_ATk_COLON] = ACTIONS(387),
    [anon_sym_ATo_COLON] = ACTIONS(387),
    [anon_sym_ATr_COLON] = ACTIONS(387),
    [anon_sym_ATf_COLON] = ACTIONS(387),
    [anon_sym_ATs_COLON] = ACTIONS(387),
    [anon_sym_ATx_COLON] = ACTIONS(387),
    [anon_sym_PIPE_DOT] = ACTIONS(387),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_1_GT] = ACTIONS(389),
    [anon_sym_2_GT] = ACTIONS(389),
    [anon_sym_H_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [anon_sym_1_GT_GT] = ACTIONS(387),
    [anon_sym_2_GT_GT] = ACTIONS(387),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_CR] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_PIPE] = ACTIONS(393),
    [anon_sym_PIPEH] = ACTIONS(391),
    [anon_sym_PIPET] = ACTIONS(391),
    [anon_sym_AT_AT] = ACTIONS(393),
    [anon_sym_AT_ATdbt] = ACTIONS(393),
    [anon_sym_AT_ATdbta] = ACTIONS(391),
    [anon_sym_AT_ATdbtb] = ACTIONS(391),
    [anon_sym_AT_ATdbts] = ACTIONS(391),
    [anon_sym_AT_AT_DOT] = ACTIONS(391),
    [anon_sym_AT_AT_EQ] = ACTIONS(391),
    [anon_sym_AT_ATk] = ACTIONS(391),
    [anon_sym_AT_ATt] = ACTIONS(391),
    [anon_sym_AT_ATb] = ACTIONS(391),
    [anon_sym_AT_ATi] = ACTIONS(393),
    [anon_sym_AT_ATiS] = ACTIONS(391),
    [anon_sym_AT_ATf] = ACTIONS(391),
    [anon_sym_AT_ATs_COLON] = ACTIONS(391),
    [anon_sym_AT_ATc_COLON] = ACTIONS(391),
    [anon_sym_AT] = ACTIONS(393),
    [anon_sym_AT_BANG] = ACTIONS(391),
    [anon_sym_AT_LPAREN] = ACTIONS(391),
    [anon_sym_ATa_COLON] = ACTIONS(391),
    [anon_sym_ATb_COLON] = ACTIONS(391),
    [anon_sym_ATB_COLON] = ACTIONS(391),
    [anon_sym_ATe_COLON] = ACTIONS(391),
    [anon_sym_ATF_COLON] = ACTIONS(391),
    [anon_sym_ATi_COLON] = ACTIONS(391),
    [anon_sym_ATk_COLON] = ACTIONS(391),
    [anon_sym_ATo_COLON] = ACTIONS(391),
    [anon_sym_ATr_COLON] = ACTIONS(391),
    [anon_sym_ATf_COLON] = ACTIONS(391),
    [anon_sym_ATs_COLON] = ACTIONS(391),
    [anon_sym_ATx_COLON] = ACTIONS(391),
    [anon_sym_PIPE_DOT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_1_GT] = ACTIONS(393),
    [anon_sym_2_GT] = ACTIONS(393),
    [anon_sym_H_GT] = ACTIONS(391),
    [anon_sym_GT_GT] = ACTIONS(391),
    [anon_sym_1_GT_GT] = ACTIONS(391),
    [anon_sym_2_GT_GT] = ACTIONS(391),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(391),
    [anon_sym_CR] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_PIPE] = ACTIONS(397),
    [anon_sym_PIPEH] = ACTIONS(395),
    [anon_sym_PIPET] = ACTIONS(395),
    [anon_sym_AT_AT] = ACTIONS(397),
    [anon_sym_AT_ATdbt] = ACTIONS(397),
    [anon_sym_AT_ATdbta] = ACTIONS(395),
    [anon_sym_AT_ATdbtb] = ACTIONS(395),
    [anon_sym_AT_ATdbts] = ACTIONS(395),
    [anon_sym_AT_AT_DOT] = ACTIONS(395),
    [anon_sym_AT_AT_EQ] = ACTIONS(395),
    [anon_sym_AT_ATk] = ACTIONS(395),
    [anon_sym_AT_ATt] = ACTIONS(395),
    [anon_sym_AT_ATb] = ACTIONS(395),
    [anon_sym_AT_ATi] = ACTIONS(397),
    [anon_sym_AT_ATiS] = ACTIONS(395),
    [anon_sym_AT_ATf] = ACTIONS(395),
    [anon_sym_AT_ATs_COLON] = ACTIONS(395),
    [anon_sym_AT_ATc_COLON] = ACTIONS(395),
    [anon_sym_AT] = ACTIONS(397),
    [anon_sym_AT_BANG] = ACTIONS(395),
    [anon_sym_AT_LPAREN] = ACTIONS(395),
    [anon_sym_ATa_COLON] = ACTIONS(395),
    [anon_sym_ATb_COLON] = ACTIONS(395),
    [anon_sym_ATB_COLON] = ACTIONS(395),
    [anon_sym_ATe_COLON] = ACTIONS(395),
    [anon_sym_ATF_COLON] = ACTIONS(395),
    [anon_sym_ATi_COLON] = ACTIONS(395),
    [anon_sym_ATk_COLON] = ACTIONS(395),
    [anon_sym_ATo_COLON] = ACTIONS(395),
    [anon_sym_ATr_COLON] = ACTIONS(395),
    [anon_sym_ATf_COLON] = ACTIONS(395),
    [anon_sym_ATs_COLON] = ACTIONS(395),
    [anon_sym_ATx_COLON] = ACTIONS(395),
    [anon_sym_PIPE_DOT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_1_GT] = ACTIONS(397),
    [anon_sym_2_GT] = ACTIONS(397),
    [anon_sym_H_GT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(395),
    [anon_sym_1_GT_GT] = ACTIONS(395),
    [anon_sym_2_GT_GT] = ACTIONS(395),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(395),
    [anon_sym_CR] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPEH] = ACTIONS(399),
    [anon_sym_PIPET] = ACTIONS(399),
    [anon_sym_AT_AT] = ACTIONS(401),
    [anon_sym_AT_ATdbt] = ACTIONS(401),
    [anon_sym_AT_ATdbta] = ACTIONS(399),
    [anon_sym_AT_ATdbtb] = ACTIONS(399),
    [anon_sym_AT_ATdbts] = ACTIONS(399),
    [anon_sym_AT_AT_DOT] = ACTIONS(399),
    [anon_sym_AT_AT_EQ] = ACTIONS(399),
    [anon_sym_AT_ATk] = ACTIONS(399),
    [anon_sym_AT_ATt] = ACTIONS(399),
    [anon_sym_AT_ATb] = ACTIONS(399),
    [anon_sym_AT_ATi] = ACTIONS(401),
    [anon_sym_AT_ATiS] = ACTIONS(399),
    [anon_sym_AT_ATf] = ACTIONS(399),
    [anon_sym_AT_ATs_COLON] = ACTIONS(399),
    [anon_sym_AT_ATc_COLON] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(401),
    [anon_sym_AT_BANG] = ACTIONS(399),
    [anon_sym_AT_LPAREN] = ACTIONS(399),
    [anon_sym_ATa_COLON] = ACTIONS(399),
    [anon_sym_ATb_COLON] = ACTIONS(399),
    [anon_sym_ATB_COLON] = ACTIONS(399),
    [anon_sym_ATe_COLON] = ACTIONS(399),
    [anon_sym_ATF_COLON] = ACTIONS(399),
    [anon_sym_ATi_COLON] = ACTIONS(399),
    [anon_sym_ATk_COLON] = ACTIONS(399),
    [anon_sym_ATo_COLON] = ACTIONS(399),
    [anon_sym_ATr_COLON] = ACTIONS(399),
    [anon_sym_ATf_COLON] = ACTIONS(399),
    [anon_sym_ATs_COLON] = ACTIONS(399),
    [anon_sym_ATx_COLON] = ACTIONS(399),
    [anon_sym_PIPE_DOT] = ACTIONS(399),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_1_GT] = ACTIONS(401),
    [anon_sym_2_GT] = ACTIONS(401),
    [anon_sym_H_GT] = ACTIONS(399),
    [anon_sym_GT_GT] = ACTIONS(399),
    [anon_sym_1_GT_GT] = ACTIONS(399),
    [anon_sym_2_GT_GT] = ACTIONS(399),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_CR] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(399),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_PIPE] = ACTIONS(405),
    [anon_sym_PIPEH] = ACTIONS(403),
    [anon_sym_PIPET] = ACTIONS(403),
    [anon_sym_AT_AT] = ACTIONS(405),
    [anon_sym_AT_ATdbt] = ACTIONS(405),
    [anon_sym_AT_ATdbta] = ACTIONS(403),
    [anon_sym_AT_ATdbtb] = ACTIONS(403),
    [anon_sym_AT_ATdbts] = ACTIONS(403),
    [anon_sym_AT_AT_DOT] = ACTIONS(403),
    [anon_sym_AT_AT_EQ] = ACTIONS(403),
    [anon_sym_AT_ATk] = ACTIONS(403),
    [anon_sym_AT_ATt] = ACTIONS(403),
    [anon_sym_AT_ATb] = ACTIONS(403),
    [anon_sym_AT_ATi] = ACTIONS(405),
    [anon_sym_AT_ATiS] = ACTIONS(403),
    [anon_sym_AT_ATf] = ACTIONS(403),
    [anon_sym_AT_ATs_COLON] = ACTIONS(403),
    [anon_sym_AT_ATc_COLON] = ACTIONS(403),
    [anon_sym_AT] = ACTIONS(405),
    [anon_sym_AT_BANG] = ACTIONS(403),
    [anon_sym_AT_LPAREN] = ACTIONS(403),
    [anon_sym_ATa_COLON] = ACTIONS(403),
    [anon_sym_ATb_COLON] = ACTIONS(403),
    [anon_sym_ATB_COLON] = ACTIONS(403),
    [anon_sym_ATe_COLON] = ACTIONS(403),
    [anon_sym_ATF_COLON] = ACTIONS(403),
    [anon_sym_ATi_COLON] = ACTIONS(403),
    [anon_sym_ATk_COLON] = ACTIONS(403),
    [anon_sym_ATo_COLON] = ACTIONS(403),
    [anon_sym_ATr_COLON] = ACTIONS(403),
    [anon_sym_ATf_COLON] = ACTIONS(403),
    [anon_sym_ATs_COLON] = ACTIONS(403),
    [anon_sym_ATx_COLON] = ACTIONS(403),
    [anon_sym_PIPE_DOT] = ACTIONS(403),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_1_GT] = ACTIONS(405),
    [anon_sym_2_GT] = ACTIONS(405),
    [anon_sym_H_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(403),
    [anon_sym_1_GT_GT] = ACTIONS(403),
    [anon_sym_2_GT_GT] = ACTIONS(403),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_CR] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_PIPE] = ACTIONS(409),
    [anon_sym_PIPEH] = ACTIONS(407),
    [anon_sym_PIPET] = ACTIONS(407),
    [anon_sym_AT_AT] = ACTIONS(409),
    [anon_sym_AT_ATdbt] = ACTIONS(409),
    [anon_sym_AT_ATdbta] = ACTIONS(407),
    [anon_sym_AT_ATdbtb] = ACTIONS(407),
    [anon_sym_AT_ATdbts] = ACTIONS(407),
    [anon_sym_AT_AT_DOT] = ACTIONS(407),
    [anon_sym_AT_AT_EQ] = ACTIONS(407),
    [anon_sym_AT_ATk] = ACTIONS(407),
    [anon_sym_AT_ATt] = ACTIONS(407),
    [anon_sym_AT_ATb] = ACTIONS(407),
    [anon_sym_AT_ATi] = ACTIONS(409),
    [anon_sym_AT_ATiS] = ACTIONS(407),
    [anon_sym_AT_ATf] = ACTIONS(407),
    [anon_sym_AT_ATs_COLON] = ACTIONS(407),
    [anon_sym_AT_ATc_COLON] = ACTIONS(407),
    [anon_sym_AT] = ACTIONS(409),
    [anon_sym_AT_BANG] = ACTIONS(407),
    [anon_sym_AT_LPAREN] = ACTIONS(407),
    [anon_sym_ATa_COLON] = ACTIONS(407),
    [anon_sym_ATb_COLON] = ACTIONS(407),
    [anon_sym_ATB_COLON] = ACTIONS(407),
    [anon_sym_ATe_COLON] = ACTIONS(407),
    [anon_sym_ATF_COLON] = ACTIONS(407),
    [anon_sym_ATi_COLON] = ACTIONS(407),
    [anon_sym_ATk_COLON] = ACTIONS(407),
    [anon_sym_ATo_COLON] = ACTIONS(407),
    [anon_sym_ATr_COLON] = ACTIONS(407),
    [anon_sym_ATf_COLON] = ACTIONS(407),
    [anon_sym_ATs_COLON] = ACTIONS(407),
    [anon_sym_ATx_COLON] = ACTIONS(407),
    [anon_sym_PIPE_DOT] = ACTIONS(407),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_1_GT] = ACTIONS(409),
    [anon_sym_2_GT] = ACTIONS(409),
    [anon_sym_H_GT] = ACTIONS(407),
    [anon_sym_GT_GT] = ACTIONS(407),
    [anon_sym_1_GT_GT] = ACTIONS(407),
    [anon_sym_2_GT_GT] = ACTIONS(407),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(407),
    [anon_sym_CR] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(407),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(201),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(219),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_AT_BANG] = ACTIONS(239),
    [anon_sym_AT_LPAREN] = ACTIONS(241),
    [anon_sym_ATa_COLON] = ACTIONS(243),
    [anon_sym_ATb_COLON] = ACTIONS(245),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(249),
    [anon_sym_ATF_COLON] = ACTIONS(251),
    [anon_sym_ATi_COLON] = ACTIONS(253),
    [anon_sym_ATk_COLON] = ACTIONS(255),
    [anon_sym_ATo_COLON] = ACTIONS(257),
    [anon_sym_ATr_COLON] = ACTIONS(259),
    [anon_sym_ATf_COLON] = ACTIONS(261),
    [anon_sym_ATs_COLON] = ACTIONS(263),
    [anon_sym_ATx_COLON] = ACTIONS(265),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_1_GT] = ACTIONS(84),
    [anon_sym_2_GT] = ACTIONS(84),
    [anon_sym_H_GT] = ACTIONS(82),
    [anon_sym_GT_GT] = ACTIONS(82),
    [anon_sym_1_GT_GT] = ACTIONS(82),
    [anon_sym_2_GT_GT] = ACTIONS(82),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(82),
    [anon_sym_CR] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(82),
  },
  [76] = {
    [aux_sym_commands_repeat1] = STATE(76),
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_STAR] = ACTIONS(411),
    [sym_interpreter_command] = ACTIONS(413),
    [anon_sym_DOT_BANG] = ACTIONS(411),
    [anon_sym_DOT_LPAREN] = ACTIONS(411),
    [anon_sym_DOT_SLASH] = ACTIONS(411),
    [anon_sym_PERCENT] = ACTIONS(411),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(413),
    [aux_sym_interpret_identifier_token1] = ACTIONS(411),
    [sym__point_interpret_identifier] = ACTIONS(413),
    [sym_system_identifier] = ACTIONS(411),
    [sym_macro_identifier] = ACTIONS(411),
    [sym_number] = ACTIONS(411),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_CR] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(415),
    [sym_cmd_identifier] = ACTIONS(411),
    [sym__help_command] = ACTIONS(411),
    [sym__question_mark_identifier] = ACTIONS(411),
  },
  [77] = {
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_DOT_BANG] = ACTIONS(57),
    [anon_sym_DOT_LPAREN] = ACTIONS(57),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(59),
    [aux_sym_interpret_identifier_token1] = ACTIONS(57),
    [sym__point_interpret_identifier] = ACTIONS(59),
    [sym_system_identifier] = ACTIONS(57),
    [sym_macro_identifier] = ACTIONS(57),
    [sym_number] = ACTIONS(57),
    [sym__comment] = ACTIONS(49),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__question_mark_identifier] = ACTIONS(57),
  },
  [78] = {
    [sym_arg] = STATE(14),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(14),
    [aux_sym__interpret_command_repeat1] = STATE(120),
    [anon_sym_] = ACTIONS(418),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
  },
  [79] = {
    [sym_arg] = STATE(12),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(12),
    [aux_sym__interpret_command_repeat1] = STATE(78),
    [anon_sym_] = ACTIONS(420),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [aux_sym_eq_sep_val_token1] = ACTIONS(424),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(426),
    [anon_sym_CR] = ACTIONS(426),
    [anon_sym_SEMI] = ACTIONS(426),
  },
  [81] = {
    [aux_sym_commands_repeat2] = STATE(84),
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(430),
    [anon_sym_CR] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
  },
  [82] = {
    [aux_sym_commands_repeat2] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(430),
    [anon_sym_CR] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
  },
  [83] = {
    [aux_sym_commands_repeat2] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(428),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(430),
    [anon_sym_CR] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
  },
  [84] = {
    [aux_sym_commands_repeat2] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(432),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(430),
    [anon_sym_CR] = ACTIONS(430),
    [anon_sym_SEMI] = ACTIONS(430),
  },
  [85] = {
    [aux_sym_commands_repeat2] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(434),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(436),
    [anon_sym_CR] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(436),
  },
  [86] = {
    [sym_arg] = STATE(13),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(13),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(422),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(422),
    [anon_sym_CR] = ACTIONS(422),
    [anon_sym_SEMI] = ACTIONS(422),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(439),
    [anon_sym_CR] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_CR] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(441),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(443),
    [anon_sym_CR] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(434),
    [anon_sym_CR] = ACTIONS(434),
    [anon_sym_SEMI] = ACTIONS(434),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_CR] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [sym__comment] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_CR] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(447),
  },
  [94] = {
    [sym_arg] = STATE(11),
    [sym_arg_identifier] = STATE(25),
    [aux_sym_iter_offsets_command_repeat1] = STATE(11),
    [aux_sym_eq_sep_val_token1] = ACTIONS(72),
    [sym__comment] = ACTIONS(3),
  },
  [95] = {
    [sym_arg] = STATE(63),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [96] = {
    [sym_arg] = STATE(64),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [97] = {
    [sym_arg] = STATE(58),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [98] = {
    [sym_arg] = STATE(42),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [99] = {
    [sym_arg] = STATE(119),
    [sym_arg_identifier] = STATE(138),
    [aux_sym_eq_sep_val_token1] = ACTIONS(451),
    [sym__comment] = ACTIONS(3),
  },
  [100] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [101] = {
    [sym_arg] = STATE(60),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [102] = {
    [sym_arg] = STATE(61),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [103] = {
    [sym_arg] = STATE(40),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [104] = {
    [sym_arg] = STATE(90),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [105] = {
    [sym_arg] = STATE(62),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [106] = {
    [sym_arg] = STATE(57),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [107] = {
    [sym_arg] = STATE(89),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [108] = {
    [sym_arg] = STATE(27),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [109] = {
    [sym_arg] = STATE(103),
    [sym_arg_identifier] = STATE(138),
    [aux_sym_eq_sep_val_token1] = ACTIONS(451),
    [sym__comment] = ACTIONS(3),
  },
  [110] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [111] = {
    [sym_arg] = STATE(65),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [112] = {
    [sym_arg] = STATE(99),
    [sym_arg_identifier] = STATE(138),
    [aux_sym_eq_sep_val_token1] = ACTIONS(451),
    [sym__comment] = ACTIONS(3),
  },
  [113] = {
    [sym_arg] = STATE(67),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [114] = {
    [sym_arg] = STATE(88),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [115] = {
    [sym_arg] = STATE(56),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [116] = {
    [sym_arg] = STATE(51),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [117] = {
    [sym_arg] = STATE(50),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [118] = {
    [sym_arg] = STATE(93),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [119] = {
    [sym_arg] = STATE(35),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [120] = {
    [aux_sym__interpret_command_repeat1] = STATE(120),
    [anon_sym_] = ACTIONS(453),
    [aux_sym_eq_sep_val_token1] = ACTIONS(456),
    [sym__comment] = ACTIONS(3),
  },
  [121] = {
    [sym_arg] = STATE(68),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [122] = {
    [sym_arg] = STATE(69),
    [sym_arg_identifier] = STATE(30),
    [aux_sym_eq_sep_val_token1] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
  },
  [123] = {
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_macro_call_content] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
  },
  [124] = {
    [sym_eq_sep_val] = STATE(45),
    [aux_sym_eq_sep_val_token1] = ACTIONS(462),
    [sym__comment] = ACTIONS(3),
  },
  [125] = {
    [sym_interpret_arg] = STATE(33),
    [sym__any_command] = ACTIONS(464),
    [sym__comment] = ACTIONS(3),
  },
  [126] = {
    [sym__eq_sep_args] = STATE(74),
    [sym_eq_sep_key] = ACTIONS(117),
    [sym__comment] = ACTIONS(3),
  },
  [127] = {
    [sym_macro_content] = ACTIONS(466),
    [sym__comment] = ACTIONS(3),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [sym__comment] = ACTIONS(49),
  },
  [129] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [sym__comment] = ACTIONS(49),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym__comment] = ACTIONS(49),
  },
  [131] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(424),
    [sym__comment] = ACTIONS(3),
  },
  [132] = {
    [sym_eq_sep_key] = ACTIONS(474),
    [sym__comment] = ACTIONS(3),
  },
  [133] = {
    [sym_tmp_eval_arg] = ACTIONS(476),
    [sym__comment] = ACTIONS(3),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(478),
    [sym__comment] = ACTIONS(49),
  },
  [135] = {
    [sym_tmp_eval_arg] = ACTIONS(480),
    [sym__comment] = ACTIONS(3),
  },
  [136] = {
    [sym_macro_content] = ACTIONS(482),
    [sym__comment] = ACTIONS(3),
  },
  [137] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(149),
    [sym__comment] = ACTIONS(3),
  },
  [138] = {
    [aux_sym_eq_sep_val_token1] = ACTIONS(153),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(132),
  [9] = {.count = 1, .reusable = false}, SHIFT(82),
  [11] = {.count = 1, .reusable = true}, SHIFT(125),
  [13] = {.count = 1, .reusable = true}, SHIFT(127),
  [15] = {.count = 1, .reusable = true}, SHIFT(79),
  [17] = {.count = 1, .reusable = true}, SHIFT(18),
  [19] = {.count = 1, .reusable = false}, SHIFT(29),
  [21] = {.count = 1, .reusable = true}, SHIFT(77),
  [23] = {.count = 1, .reusable = false}, SHIFT(7),
  [25] = {.count = 1, .reusable = true}, SHIFT(17),
  [27] = {.count = 1, .reusable = true}, SHIFT(136),
  [29] = {.count = 1, .reusable = true}, SHIFT(6),
  [31] = {.count = 1, .reusable = true}, SHIFT(2),
  [33] = {.count = 1, .reusable = true}, SHIFT(9),
  [35] = {.count = 1, .reusable = true}, SHIFT(87),
  [37] = {.count = 1, .reusable = true}, SHIFT(80),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(81),
  [43] = {.count = 1, .reusable = true}, SHIFT(76),
  [45] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(91),
  [49] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [51] = {.count = 1, .reusable = true}, SHIFT(131),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_identifier, 1),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_identifier, 1),
  [61] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(24),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [72] = {.count = 1, .reusable = false}, SHIFT(24),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 5),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 5),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(133),
  [100] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [102] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [104] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(133),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [111] = {.count = 1, .reusable = false}, SHIFT(37),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [117] = {.count = 1, .reusable = false}, SHIFT(23),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(71),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [133] = {.count = 1, .reusable = true}, SHIFT(123),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(98),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [145] = {.count = 1, .reusable = true}, SHIFT(124),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 1),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 1),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [201] = {.count = 1, .reusable = false}, SHIFT(20),
  [203] = {.count = 1, .reusable = true}, SHIFT(43),
  [205] = {.count = 1, .reusable = true}, SHIFT(44),
  [207] = {.count = 1, .reusable = false}, SHIFT(122),
  [209] = {.count = 1, .reusable = false}, SHIFT(46),
  [211] = {.count = 1, .reusable = true}, SHIFT(46),
  [213] = {.count = 1, .reusable = true}, SHIFT(47),
  [215] = {.count = 1, .reusable = true}, SHIFT(48),
  [217] = {.count = 1, .reusable = true}, SHIFT(121),
  [219] = {.count = 1, .reusable = true}, SHIFT(94),
  [221] = {.count = 1, .reusable = true}, SHIFT(113),
  [223] = {.count = 1, .reusable = true}, SHIFT(52),
  [225] = {.count = 1, .reusable = true}, SHIFT(53),
  [227] = {.count = 1, .reusable = false}, SHIFT(54),
  [229] = {.count = 1, .reusable = true}, SHIFT(55),
  [231] = {.count = 1, .reusable = true}, SHIFT(22),
  [233] = {.count = 1, .reusable = true}, SHIFT(112),
  [235] = {.count = 1, .reusable = true}, SHIFT(5),
  [237] = {.count = 1, .reusable = false}, SHIFT(111),
  [239] = {.count = 1, .reusable = true}, SHIFT(96),
  [241] = {.count = 1, .reusable = true}, SHIFT(109),
  [243] = {.count = 1, .reusable = true}, SHIFT(108),
  [245] = {.count = 1, .reusable = true}, SHIFT(95),
  [247] = {.count = 1, .reusable = true}, SHIFT(105),
  [249] = {.count = 1, .reusable = true}, SHIFT(135),
  [251] = {.count = 1, .reusable = true}, SHIFT(102),
  [253] = {.count = 1, .reusable = true}, SHIFT(101),
  [255] = {.count = 1, .reusable = true}, SHIFT(100),
  [257] = {.count = 1, .reusable = true}, SHIFT(97),
  [259] = {.count = 1, .reusable = true}, SHIFT(106),
  [261] = {.count = 1, .reusable = true}, SHIFT(115),
  [263] = {.count = 1, .reusable = true}, SHIFT(116),
  [265] = {.count = 1, .reusable = true}, SHIFT(117),
  [267] = {.count = 1, .reusable = true}, SHIFT(72),
  [269] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [341] = {.count = 1, .reusable = false}, SHIFT(118),
  [343] = {.count = 1, .reusable = false}, SHIFT(110),
  [345] = {.count = 1, .reusable = true}, SHIFT(104),
  [347] = {.count = 1, .reusable = true}, SHIFT(107),
  [349] = {.count = 1, .reusable = true}, SHIFT(114),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(76),
  [418] = {.count = 1, .reusable = false}, SHIFT(120),
  [420] = {.count = 1, .reusable = false}, SHIFT(78),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_question_mark_identifier, 1),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [430] = {.count = 1, .reusable = true}, SHIFT(3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [434] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [436] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(3),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_err_append_redirect_command, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_out_append_redirect_command, 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_html_redirect_command, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_err_redirect_command, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_out_redirect_command, 3),
  [449] = {.count = 1, .reusable = false}, SHIFT(31),
  [451] = {.count = 1, .reusable = false}, SHIFT(137),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2), SHIFT_REPEAT(120),
  [456] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2),
  [458] = {.count = 1, .reusable = false}, SHIFT(39),
  [460] = {.count = 1, .reusable = false}, SHIFT(130),
  [462] = {.count = 1, .reusable = false}, SHIFT(49),
  [464] = {.count = 1, .reusable = false}, SHIFT(32),
  [466] = {.count = 1, .reusable = false}, SHIFT(134),
  [468] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [470] = {.count = 1, .reusable = true}, SHIFT(21),
  [472] = {.count = 1, .reusable = true}, SHIFT(34),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_pointer_identifier, 1),
  [476] = {.count = 1, .reusable = false}, SHIFT(26),
  [478] = {.count = 1, .reusable = true}, SHIFT(73),
  [480] = {.count = 1, .reusable = false}, SHIFT(15),
  [482] = {.count = 1, .reusable = false}, SHIFT(129),
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
