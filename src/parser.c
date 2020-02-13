#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 255
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_DQUOTE = 1,
  aux_sym_legacy_quoted_command_token1 = 2,
  anon_sym_TILDE = 3,
  sym_grep_specifier = 4,
  anon_sym_PIPE = 5,
  anon_sym_PIPEH = 6,
  anon_sym_PIPET = 7,
  sym_pipe_second_command = 8,
  anon_sym_AT_AT = 9,
  anon_sym_AT_ATdbt = 10,
  anon_sym_AT_ATdbta = 11,
  anon_sym_AT_ATdbtb = 12,
  anon_sym_AT_ATdbts = 13,
  anon_sym_AT_AT_DOT = 14,
  anon_sym_AT_AT_EQ = 15,
  anon_sym_AT_ATk = 16,
  anon_sym_AT_ATt = 17,
  anon_sym_AT_ATb = 18,
  anon_sym_AT_ATi = 19,
  anon_sym_AT_ATiS = 20,
  anon_sym_AT_ATf = 21,
  anon_sym_COLON = 22,
  anon_sym_AT_ATs_COLON = 23,
  anon_sym_AT_ATc_COLON = 24,
  anon_sym_AT = 25,
  anon_sym_AT_BANG = 26,
  anon_sym_AT_LPAREN = 27,
  anon_sym_ATa_COLON = 28,
  anon_sym_ATb_COLON = 29,
  anon_sym_ATB_COLON = 30,
  anon_sym_ATe_COLON = 31,
  anon_sym_COMMA = 32,
  anon_sym_ATF_COLON = 33,
  anon_sym_ATi_COLON = 34,
  anon_sym_ATk_COLON = 35,
  anon_sym_ATo_COLON = 36,
  anon_sym_ATr_COLON = 37,
  anon_sym_ATf_COLON = 38,
  anon_sym_ATs_COLON = 39,
  anon_sym_ATx_COLON = 40,
  anon_sym_RPAREN = 41,
  anon_sym_LPAREN = 42,
  anon_sym_DOT = 43,
  anon_sym_DOT_BANG = 44,
  anon_sym_DOT_LPAREN = 45,
  anon_sym_PIPE_DOT = 46,
  anon_sym_DOT_SLASH = 47,
  anon_sym_ = 48,
  anon_sym_PERCENT = 49,
  anon_sym_env = 50,
  anon_sym_DOT_DOT_DOT = 51,
  aux_sym__interpret_identifier_token1 = 52,
  aux_sym__interpret_identifier_token2 = 53,
  sym_system_identifier = 54,
  sym_question_mark_identifier = 55,
  sym_pointer_identifier = 56,
  anon_sym_EQ = 57,
  sym_macro_identifier = 58,
  sym_macro_call_content = 59,
  anon_sym_GT = 60,
  anon_sym_GT_GT = 61,
  sym_html_redirect_operator = 62,
  sym_html_append_operator = 63,
  sym_tmp_eval_arg = 64,
  sym_eq_sep_key = 65,
  sym_eq_sep_val = 66,
  sym_macro_content = 67,
  sym__any_command = 68,
  sym_arg_identifier = 69,
  aux_sym_double_quoted_arg_token1 = 70,
  aux_sym_double_quoted_arg_token2 = 71,
  aux_sym_double_quoted_arg_token3 = 72,
  anon_sym_SQUOTE = 73,
  aux_sym_single_quoted_arg_token1 = 74,
  aux_sym_single_quoted_arg_token2 = 75,
  anon_sym_DOLLAR_LPAREN = 76,
  anon_sym_BQUOTE = 77,
  sym__comment = 78,
  anon_sym_LF = 79,
  anon_sym_CR = 80,
  anon_sym_SEMI = 81,
  sym_cmd_identifier = 82,
  sym__help_command = 83,
  sym_file_descriptor = 84,
  sym_repeat_number = 85,
  sym_interpreter_identifier = 86,
  sym_commands = 87,
  sym__commands_singleline = 88,
  sym__command = 89,
  sym_legacy_quoted_command = 90,
  sym__simple_command = 91,
  sym__tmp_command = 92,
  sym__iter_command = 93,
  sym__pipe_command = 94,
  sym_grep_command = 95,
  sym_html_disable_command = 96,
  sym_html_enable_command = 97,
  sym_scr_tts_command = 98,
  sym_pipe_command = 99,
  sym_iter_flags_command = 100,
  sym_iter_dbta_command = 101,
  sym_iter_dbtb_command = 102,
  sym_iter_dbts_command = 103,
  sym_iter_file_lines_command = 104,
  sym_iter_offsets_command = 105,
  sym_iter_sdbquery_command = 106,
  sym_iter_threads_command = 107,
  sym_iter_bbs_command = 108,
  sym_iter_instrs_command = 109,
  sym_iter_sections_command = 110,
  sym_iter_functions_command = 111,
  sym_iter_step_command = 112,
  sym_iter_interpret_command = 113,
  sym_tmp_seek_command = 114,
  sym_tmp_blksz_command = 115,
  sym_tmp_fromto_command = 116,
  sym_tmp_arch_command = 117,
  sym_tmp_bits_command = 118,
  sym_tmp_nthi_command = 119,
  sym_tmp_eval_command = 120,
  sym_tmp_fs_command = 121,
  sym_tmp_reli_command = 122,
  sym_tmp_kuery_command = 123,
  sym_tmp_fd_command = 124,
  sym_tmp_reg_command = 125,
  sym_tmp_file_command = 126,
  sym_tmp_string_command = 127,
  sym_tmp_hex_command = 128,
  sym__interpreter_command = 129,
  sym_help_command = 130,
  sym_arged_command = 131,
  sym__simple_arged_command = 132,
  sym__math_arged_command = 133,
  sym__pointer_arged_command = 134,
  sym__macro_arged_command = 135,
  sym__system_command = 136,
  sym__interpret_command = 137,
  sym__interpret_search_identifier = 138,
  sym__env_command = 139,
  sym__env_command_identifier = 140,
  sym_last_command = 141,
  sym_last_command_identifier = 142,
  sym__interpret_identifier = 143,
  sym_interpret_arg = 144,
  sym_system_arg = 145,
  sym_repeat_command = 146,
  sym__eq_sep_args = 147,
  sym_redirect_command = 148,
  sym__redirect_operator = 149,
  sym_fdn_redirect_operator = 150,
  sym_fdn_append_operator = 151,
  sym_arg = 152,
  sym_args = 153,
  sym_double_quoted_arg = 154,
  sym_single_quoted_arg = 155,
  sym_cmd_substitution_arg = 156,
  aux_sym_commands_repeat1 = 157,
  aux_sym_commands_repeat2 = 158,
  aux_sym__commands_singleline_repeat1 = 159,
  aux_sym__commands_singleline_repeat2 = 160,
  aux_sym_tmp_eval_command_repeat1 = 161,
  aux_sym__interpret_search_identifier_repeat1 = 162,
  aux_sym_args_repeat1 = 163,
  aux_sym_double_quoted_arg_repeat1 = 164,
  aux_sym_single_quoted_arg_repeat1 = 165,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_legacy_quoted_command_token1] = "legacy_quoted_command_token1",
  [anon_sym_TILDE] = "~",
  [sym_grep_specifier] = "grep_specifier",
  [anon_sym_PIPE] = "|",
  [anon_sym_PIPEH] = "|H",
  [anon_sym_PIPET] = "|T",
  [sym_pipe_second_command] = "pipe_second_command",
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
  [anon_sym_RPAREN] = ")",
  [anon_sym_LPAREN] = "(",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_BANG] = "cmd_identifier",
  [anon_sym_DOT_LPAREN] = "cmd_identifier",
  [anon_sym_PIPE_DOT] = "|.",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_] = " ",
  [anon_sym_PERCENT] = "%",
  [anon_sym_env] = "env",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym__interpret_identifier_token1] = "_interpret_identifier_token1",
  [aux_sym__interpret_identifier_token2] = "_interpret_identifier_token2",
  [sym_system_identifier] = "system_identifier",
  [sym_question_mark_identifier] = "cmd_identifier",
  [sym_pointer_identifier] = "cmd_identifier",
  [anon_sym_EQ] = "=",
  [sym_macro_identifier] = "cmd_identifier",
  [sym_macro_call_content] = "macro_call_content",
  [anon_sym_GT] = ">",
  [anon_sym_GT_GT] = ">>",
  [sym_html_redirect_operator] = "html_redirect_operator",
  [sym_html_append_operator] = "html_append_operator",
  [sym_tmp_eval_arg] = "tmp_eval_arg",
  [sym_eq_sep_key] = "eq_sep_key",
  [sym_eq_sep_val] = "eq_sep_val",
  [sym_macro_content] = "macro_content",
  [sym__any_command] = "_any_command",
  [sym_arg_identifier] = "arg_identifier",
  [aux_sym_double_quoted_arg_token1] = "double_quoted_arg_token1",
  [aux_sym_double_quoted_arg_token2] = "double_quoted_arg_token2",
  [aux_sym_double_quoted_arg_token3] = "double_quoted_arg_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_arg_token1] = "single_quoted_arg_token1",
  [aux_sym_single_quoted_arg_token2] = "single_quoted_arg_token2",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_BQUOTE] = "`",
  [sym__comment] = "_comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_SEMI] = ";",
  [sym_cmd_identifier] = "cmd_identifier",
  [sym__help_command] = "cmd_identifier",
  [sym_file_descriptor] = "file_descriptor",
  [sym_repeat_number] = "repeat_number",
  [sym_interpreter_identifier] = "cmd_identifier",
  [sym_commands] = "commands",
  [sym__commands_singleline] = "_commands_singleline",
  [sym__command] = "_command",
  [sym_legacy_quoted_command] = "legacy_quoted_command",
  [sym__simple_command] = "_simple_command",
  [sym__tmp_command] = "_tmp_command",
  [sym__iter_command] = "_iter_command",
  [sym__pipe_command] = "_pipe_command",
  [sym_grep_command] = "grep_command",
  [sym_html_disable_command] = "html_disable_command",
  [sym_html_enable_command] = "html_enable_command",
  [sym_scr_tts_command] = "scr_tts_command",
  [sym_pipe_command] = "pipe_command",
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
  [sym__interpreter_command] = "_interpreter_command",
  [sym_help_command] = "help_command",
  [sym_arged_command] = "arged_command",
  [sym__simple_arged_command] = "_simple_arged_command",
  [sym__math_arged_command] = "_math_arged_command",
  [sym__pointer_arged_command] = "_pointer_arged_command",
  [sym__macro_arged_command] = "_macro_arged_command",
  [sym__system_command] = "_system_command",
  [sym__interpret_command] = "_interpret_command",
  [sym__interpret_search_identifier] = "cmd_identifier",
  [sym__env_command] = "_env_command",
  [sym__env_command_identifier] = "cmd_identifier",
  [sym_last_command] = "last_command",
  [sym_last_command_identifier] = "cmd_identifier",
  [sym__interpret_identifier] = "cmd_identifier",
  [sym_interpret_arg] = "interpret_arg",
  [sym_system_arg] = "system_arg",
  [sym_repeat_command] = "repeat_command",
  [sym__eq_sep_args] = "_eq_sep_args",
  [sym_redirect_command] = "redirect_command",
  [sym__redirect_operator] = "_redirect_operator",
  [sym_fdn_redirect_operator] = "fdn_redirect_operator",
  [sym_fdn_append_operator] = "fdn_append_operator",
  [sym_arg] = "arg",
  [sym_args] = "args",
  [sym_double_quoted_arg] = "double_quoted_arg",
  [sym_single_quoted_arg] = "single_quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym__interpret_search_identifier_repeat1] = "_interpret_search_identifier_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_double_quoted_arg_repeat1] = "double_quoted_arg_repeat1",
  [aux_sym_single_quoted_arg_repeat1] = "single_quoted_arg_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_legacy_quoted_command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_grep_specifier] = {
    .visible = true,
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
  [sym_pipe_second_command] = {
    .visible = true,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_LPAREN] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_DOT] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_env] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__interpret_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpret_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_system_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_question_mark_identifier] = {
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
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_html_redirect_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_html_append_operator] = {
    .visible = true,
    .named = true,
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
  [sym_arg_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_double_quoted_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_arg_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_arg_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_arg_token2] = {
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
    .visible = true,
    .named = true,
  },
  [sym_file_descriptor] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_number] = {
    .visible = true,
    .named = true,
  },
  [sym_interpreter_identifier] = {
    .visible = true,
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
  [sym_legacy_quoted_command] = {
    .visible = true,
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
  [sym_grep_command] = {
    .visible = true,
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
  [sym__interpreter_command] = {
    .visible = false,
    .named = true,
  },
  [sym_help_command] = {
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
  [sym__interpret_search_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__env_command] = {
    .visible = false,
    .named = true,
  },
  [sym__env_command_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_last_command] = {
    .visible = true,
    .named = true,
  },
  [sym_last_command_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__interpret_identifier] = {
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
  [sym_repeat_command] = {
    .visible = true,
    .named = true,
  },
  [sym__eq_sep_args] = {
    .visible = false,
    .named = true,
  },
  [sym_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym__redirect_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_fdn_redirect_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_fdn_append_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_arg] = {
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
  [aux_sym_tmp_eval_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpret_search_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_arg_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_args = 2,
  field_command = 3,
  field_redirect_operator = 4,
  field_specifier = 5,
  field_string = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args] = "args",
  [field_command] = "command",
  [field_redirect_operator] = "redirect_operator",
  [field_specifier] = "specifier",
  [field_string] = "string",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 3},
  [10] = {.index = 16, .length = 4},
  [11] = {.index = 20, .length = 5},
  [12] = {.index = 25, .length = 6},
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
    {field_string, 1},
  [8] =
    {field_args, 1},
    {field_args, 2},
    {field_command, 0},
  [11] =
    {field_command, 0},
    {field_specifier, 2},
  [13] =
    {field_arg, 2},
    {field_command, 0},
    {field_redirect_operator, 1},
  [16] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_command, 0},
  [20] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_command, 0},
  [25] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_args, 5},
    {field_command, 0},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = sym_cmd_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '(') ADVANCE(228);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '!') ADVANCE(252);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '%') ADVANCE(245);
      if (lookahead == '(') ADVANCE(257);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '*') ADVANCE(254);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '?') ADVANCE(253);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(45);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(352);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(324);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(62);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(299);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0) ADVANCE(323);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(285);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(293);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == '\n') ADVANCE(388);
      if (lookahead == '\r') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(286);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(293);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(325);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(300);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == ')') ADVANCE(224);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(323);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(326);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(349);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(287);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(293);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ';') ADVANCE(390);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == '`') ADVANCE(383);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(352);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(361);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '$') ADVANCE(368);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == '`') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(366);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(372);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '\\') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(377);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(288);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(327);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 19:
      if (lookahead == '\t') ADVANCE(280);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(284);
      END_STATE();
    case 20:
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == '\t') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '#') ADVANCE(387);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(298);
      END_STATE();
    case 22:
      if (lookahead == '\t') ADVANCE(301);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(380);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(360);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(192);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(179);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(212);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(196);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(204);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(208);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(216);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(159);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 45:
      if (lookahead == '>') ADVANCE(272);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(246);
      END_STATE();
    case 50:
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(352);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(352);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(359);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\r') ADVANCE(61);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(232);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'H') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '\t') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(97);
      if (lookahead == '`') ADVANCE(383);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(122);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'k') ADVANCE(130);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(343);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(133);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(131);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 's') ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == '(') ADVANCE(171);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == 'B') ADVANCE(31);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(170);
      if (lookahead == '(') ADVANCE(174);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(336);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'k') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(340);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead == 'x') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(168);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'B') ADVANCE(306);
      if (lookahead == 'F') ADVANCE(307);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == 'k') ADVANCE(313);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead == 's') ADVANCE(316);
      if (lookahead == 'x') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'k') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 227:
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
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(251);
      if (lookahead == '!') ADVANCE(230);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(250);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(67);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(263);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(366);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '.') ADVANCE(247);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(256);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(258);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(30);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(30);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(276);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(280);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
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
          lookahead != '|') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(285);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(286);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == '`') ADVANCE(385);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(287);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == 'H') ADVANCE(292);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(288);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 293:
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
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(294);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(298);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(298);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(30);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(299);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(300);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(320);
      if (lookahead == '`') ADVANCE(382);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(301);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead == '/') ADVANCE(323);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(30);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(30);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(324);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(325);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(326);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(345);
      if (lookahead == '`') ADVANCE(384);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(327);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '/') ADVANCE(349);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '~') ADVANCE(30);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(329);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '~') ADVANCE(30);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';' ||
          lookahead == '~') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '*') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(352);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '{') ADVANCE(359);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          lookahead == '\'' ||
          lookahead == ')' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(352);
      if (lookahead != 0) ADVANCE(352);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '/') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(30);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(30);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(357);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead == '{') ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(356);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(357);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(356);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(354);
      if (lookahead == '}') ADVANCE(359);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(352);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(355);
      if (lookahead == '\\') ADVANCE(358);
      if (lookahead == '}') ADVANCE(360);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(30);
      if (lookahead != 0) ADVANCE(356);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(361);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(362);
      if (lookahead == '/') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(366);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(366);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(30);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(364);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(30);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token2);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token2);
      if (lookahead == '(') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token3);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token3);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(372);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(373);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(377);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '/') ADVANCE(377);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(375);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(30);
      if (lookahead != 0) ADVANCE(376);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token2);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token2);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(101);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '~') ADVANCE(349);
      END_STATE();
    case 385:
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
          lookahead != '|') ADVANCE(293);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(387);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(323);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 2},
  [6] = {.lex_state = 1, .external_lex_state = 2},
  [7] = {.lex_state = 1, .external_lex_state = 2},
  [8] = {.lex_state = 1, .external_lex_state = 2},
  [9] = {.lex_state = 1, .external_lex_state = 2},
  [10] = {.lex_state = 1, .external_lex_state = 2},
  [11] = {.lex_state = 1, .external_lex_state = 2},
  [12] = {.lex_state = 1, .external_lex_state = 2},
  [13] = {.lex_state = 1, .external_lex_state = 2},
  [14] = {.lex_state = 1, .external_lex_state = 2},
  [15] = {.lex_state = 1, .external_lex_state = 2},
  [16] = {.lex_state = 1, .external_lex_state = 2},
  [17] = {.lex_state = 1, .external_lex_state = 2},
  [18] = {.lex_state = 1, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 2},
  [20] = {.lex_state = 1, .external_lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 1, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 1, .external_lex_state = 2},
  [26] = {.lex_state = 1, .external_lex_state = 2},
  [27] = {.lex_state = 2, .external_lex_state = 3},
  [28] = {.lex_state = 2, .external_lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 3},
  [30] = {.lex_state = 2, .external_lex_state = 3},
  [31] = {.lex_state = 2, .external_lex_state = 3},
  [32] = {.lex_state = 2, .external_lex_state = 3},
  [33] = {.lex_state = 2, .external_lex_state = 3},
  [34] = {.lex_state = 2, .external_lex_state = 3},
  [35] = {.lex_state = 2, .external_lex_state = 3},
  [36] = {.lex_state = 2, .external_lex_state = 3},
  [37] = {.lex_state = 2, .external_lex_state = 3},
  [38] = {.lex_state = 2, .external_lex_state = 3},
  [39] = {.lex_state = 2, .external_lex_state = 3},
  [40] = {.lex_state = 2, .external_lex_state = 3},
  [41] = {.lex_state = 2, .external_lex_state = 3},
  [42] = {.lex_state = 2, .external_lex_state = 3},
  [43] = {.lex_state = 2, .external_lex_state = 3},
  [44] = {.lex_state = 2, .external_lex_state = 3},
  [45] = {.lex_state = 2, .external_lex_state = 3},
  [46] = {.lex_state = 2, .external_lex_state = 3},
  [47] = {.lex_state = 2, .external_lex_state = 3},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 3},
  [53] = {.lex_state = 0, .external_lex_state = 3},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 0, .external_lex_state = 3},
  [60] = {.lex_state = 0, .external_lex_state = 3},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 0, .external_lex_state = 3},
  [63] = {.lex_state = 0, .external_lex_state = 3},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 0, .external_lex_state = 3},
  [66] = {.lex_state = 3, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 4, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 5, .external_lex_state = 3},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 0, .external_lex_state = 3},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 0, .external_lex_state = 3},
  [81] = {.lex_state = 0, .external_lex_state = 3},
  [82] = {.lex_state = 0, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 0, .external_lex_state = 3},
  [87] = {.lex_state = 0, .external_lex_state = 3},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 0, .external_lex_state = 3},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 0, .external_lex_state = 3},
  [105] = {.lex_state = 0, .external_lex_state = 3},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 3},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 3},
  [111] = {.lex_state = 0, .external_lex_state = 3},
  [112] = {.lex_state = 0, .external_lex_state = 3},
  [113] = {.lex_state = 0, .external_lex_state = 3},
  [114] = {.lex_state = 0, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 5, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 6, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 7, .external_lex_state = 3},
  [126] = {.lex_state = 8, .external_lex_state = 3},
  [127] = {.lex_state = 9, .external_lex_state = 3},
  [128] = {.lex_state = 10, .external_lex_state = 3},
  [129] = {.lex_state = 11, .external_lex_state = 3},
  [130] = {.lex_state = 11, .external_lex_state = 3},
  [131] = {.lex_state = 12, .external_lex_state = 3},
  [132] = {.lex_state = 7, .external_lex_state = 3},
  [133] = {.lex_state = 4, .external_lex_state = 3},
  [134] = {.lex_state = 13, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 1, .external_lex_state = 2},
  [141] = {.lex_state = 1, .external_lex_state = 2},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 14},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 15},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 15},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 15},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 14},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 14},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 15},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 14},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 14},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 14},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 14},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 14},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 16},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 16},
  [216] = {.lex_state = 16},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 258},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 258},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 19},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 20},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 21},
  [252] = {.lex_state = 66},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 0},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token_file_descriptor = 2,
  ts_external_token_repeat_number = 3,
  ts_external_token_interpreter_identifier = 4,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token_repeat_number] = sym_repeat_number,
  [ts_external_token_interpreter_identifier] = sym_interpreter_identifier,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
    [ts_external_token_interpreter_identifier] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_repeat_number] = true,
    [ts_external_token_interpreter_identifier] = true,
  },
  [3] = {
    [ts_external_token_file_descriptor] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_BANG] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_DOT_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_env] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym__interpret_identifier_token1] = ACTIONS(1),
    [aux_sym__interpret_identifier_token2] = ACTIONS(1),
    [sym_system_identifier] = ACTIONS(1),
    [sym_question_mark_identifier] = ACTIONS(1),
    [sym_pointer_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_html_redirect_operator] = ACTIONS(1),
    [sym_html_append_operator] = ACTIONS(1),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(1),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym__help_command] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
    [sym_repeat_number] = ACTIONS(1),
    [sym_interpreter_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(250),
    [sym__command] = STATE(207),
    [sym_legacy_quoted_command] = STATE(207),
    [sym__simple_command] = STATE(55),
    [sym__tmp_command] = STATE(55),
    [sym__iter_command] = STATE(55),
    [sym__pipe_command] = STATE(55),
    [sym_grep_command] = STATE(55),
    [sym_html_disable_command] = STATE(55),
    [sym_html_enable_command] = STATE(55),
    [sym_scr_tts_command] = STATE(55),
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
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(55),
    [sym_arged_command] = STATE(55),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(73),
    [sym_last_command] = STATE(55),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(55),
    [sym_redirect_command] = STATE(207),
    [aux_sym_commands_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(33),
    [anon_sym_CR] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [2] = {
    [sym__simple_command] = STATE(100),
    [sym__tmp_command] = STATE(100),
    [sym__iter_command] = STATE(100),
    [sym__pipe_command] = STATE(100),
    [sym_grep_command] = STATE(100),
    [sym_html_disable_command] = STATE(100),
    [sym_html_enable_command] = STATE(100),
    [sym_scr_tts_command] = STATE(100),
    [sym_pipe_command] = STATE(100),
    [sym_iter_flags_command] = STATE(100),
    [sym_iter_dbta_command] = STATE(100),
    [sym_iter_dbtb_command] = STATE(100),
    [sym_iter_dbts_command] = STATE(100),
    [sym_iter_file_lines_command] = STATE(100),
    [sym_iter_offsets_command] = STATE(100),
    [sym_iter_sdbquery_command] = STATE(100),
    [sym_iter_threads_command] = STATE(100),
    [sym_iter_bbs_command] = STATE(100),
    [sym_iter_instrs_command] = STATE(100),
    [sym_iter_sections_command] = STATE(100),
    [sym_iter_functions_command] = STATE(100),
    [sym_iter_step_command] = STATE(100),
    [sym_iter_interpret_command] = STATE(100),
    [sym_tmp_seek_command] = STATE(100),
    [sym_tmp_blksz_command] = STATE(100),
    [sym_tmp_fromto_command] = STATE(100),
    [sym_tmp_arch_command] = STATE(100),
    [sym_tmp_bits_command] = STATE(100),
    [sym_tmp_nthi_command] = STATE(100),
    [sym_tmp_eval_command] = STATE(100),
    [sym_tmp_fs_command] = STATE(100),
    [sym_tmp_reli_command] = STATE(100),
    [sym_tmp_kuery_command] = STATE(100),
    [sym_tmp_fd_command] = STATE(100),
    [sym_tmp_reg_command] = STATE(100),
    [sym_tmp_file_command] = STATE(100),
    [sym_tmp_string_command] = STATE(100),
    [sym_tmp_hex_command] = STATE(100),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(100),
    [sym_arged_command] = STATE(100),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(73),
    [sym_last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(100),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPEH] = ACTIONS(43),
    [anon_sym_PIPET] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT_ATdbt] = ACTIONS(45),
    [anon_sym_AT_ATdbta] = ACTIONS(43),
    [anon_sym_AT_ATdbtb] = ACTIONS(43),
    [anon_sym_AT_ATdbts] = ACTIONS(43),
    [anon_sym_AT_AT_DOT] = ACTIONS(43),
    [anon_sym_AT_AT_EQ] = ACTIONS(43),
    [anon_sym_AT_ATk] = ACTIONS(43),
    [anon_sym_AT_ATt] = ACTIONS(43),
    [anon_sym_AT_ATb] = ACTIONS(43),
    [anon_sym_AT_ATi] = ACTIONS(45),
    [anon_sym_AT_ATiS] = ACTIONS(43),
    [anon_sym_AT_ATf] = ACTIONS(43),
    [anon_sym_AT_ATs_COLON] = ACTIONS(43),
    [anon_sym_AT_ATc_COLON] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
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
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_CR] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [3] = {
    [sym__simple_command] = STATE(100),
    [sym__tmp_command] = STATE(100),
    [sym__iter_command] = STATE(100),
    [sym__pipe_command] = STATE(100),
    [sym_grep_command] = STATE(100),
    [sym_html_disable_command] = STATE(100),
    [sym_html_enable_command] = STATE(100),
    [sym_scr_tts_command] = STATE(100),
    [sym_pipe_command] = STATE(100),
    [sym_iter_flags_command] = STATE(100),
    [sym_iter_dbta_command] = STATE(100),
    [sym_iter_dbtb_command] = STATE(100),
    [sym_iter_dbts_command] = STATE(100),
    [sym_iter_file_lines_command] = STATE(100),
    [sym_iter_offsets_command] = STATE(100),
    [sym_iter_sdbquery_command] = STATE(100),
    [sym_iter_threads_command] = STATE(100),
    [sym_iter_bbs_command] = STATE(100),
    [sym_iter_instrs_command] = STATE(100),
    [sym_iter_sections_command] = STATE(100),
    [sym_iter_functions_command] = STATE(100),
    [sym_iter_step_command] = STATE(100),
    [sym_iter_interpret_command] = STATE(100),
    [sym_tmp_seek_command] = STATE(100),
    [sym_tmp_blksz_command] = STATE(100),
    [sym_tmp_fromto_command] = STATE(100),
    [sym_tmp_arch_command] = STATE(100),
    [sym_tmp_bits_command] = STATE(100),
    [sym_tmp_nthi_command] = STATE(100),
    [sym_tmp_eval_command] = STATE(100),
    [sym_tmp_fs_command] = STATE(100),
    [sym_tmp_reli_command] = STATE(100),
    [sym_tmp_kuery_command] = STATE(100),
    [sym_tmp_fd_command] = STATE(100),
    [sym_tmp_reg_command] = STATE(100),
    [sym_tmp_file_command] = STATE(100),
    [sym_tmp_string_command] = STATE(100),
    [sym_tmp_hex_command] = STATE(100),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(100),
    [sym_arged_command] = STATE(100),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(100),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPEH] = ACTIONS(43),
    [anon_sym_PIPET] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT_ATdbt] = ACTIONS(45),
    [anon_sym_AT_ATdbta] = ACTIONS(43),
    [anon_sym_AT_ATdbtb] = ACTIONS(43),
    [anon_sym_AT_ATdbts] = ACTIONS(43),
    [anon_sym_AT_AT_DOT] = ACTIONS(43),
    [anon_sym_AT_AT_EQ] = ACTIONS(43),
    [anon_sym_AT_ATk] = ACTIONS(43),
    [anon_sym_AT_ATt] = ACTIONS(43),
    [anon_sym_AT_ATb] = ACTIONS(43),
    [anon_sym_AT_ATi] = ACTIONS(45),
    [anon_sym_AT_ATiS] = ACTIONS(43),
    [anon_sym_AT_ATf] = ACTIONS(43),
    [anon_sym_AT_ATs_COLON] = ACTIONS(43),
    [anon_sym_AT_ATc_COLON] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
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
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [4] = {
    [sym__simple_command] = STATE(100),
    [sym__tmp_command] = STATE(100),
    [sym__iter_command] = STATE(100),
    [sym__pipe_command] = STATE(100),
    [sym_grep_command] = STATE(100),
    [sym_html_disable_command] = STATE(100),
    [sym_html_enable_command] = STATE(100),
    [sym_scr_tts_command] = STATE(100),
    [sym_pipe_command] = STATE(100),
    [sym_iter_flags_command] = STATE(100),
    [sym_iter_dbta_command] = STATE(100),
    [sym_iter_dbtb_command] = STATE(100),
    [sym_iter_dbts_command] = STATE(100),
    [sym_iter_file_lines_command] = STATE(100),
    [sym_iter_offsets_command] = STATE(100),
    [sym_iter_sdbquery_command] = STATE(100),
    [sym_iter_threads_command] = STATE(100),
    [sym_iter_bbs_command] = STATE(100),
    [sym_iter_instrs_command] = STATE(100),
    [sym_iter_sections_command] = STATE(100),
    [sym_iter_functions_command] = STATE(100),
    [sym_iter_step_command] = STATE(100),
    [sym_iter_interpret_command] = STATE(100),
    [sym_tmp_seek_command] = STATE(100),
    [sym_tmp_blksz_command] = STATE(100),
    [sym_tmp_fromto_command] = STATE(100),
    [sym_tmp_arch_command] = STATE(100),
    [sym_tmp_bits_command] = STATE(100),
    [sym_tmp_nthi_command] = STATE(100),
    [sym_tmp_eval_command] = STATE(100),
    [sym_tmp_fs_command] = STATE(100),
    [sym_tmp_reli_command] = STATE(100),
    [sym_tmp_kuery_command] = STATE(100),
    [sym_tmp_fd_command] = STATE(100),
    [sym_tmp_reg_command] = STATE(100),
    [sym_tmp_file_command] = STATE(100),
    [sym_tmp_string_command] = STATE(100),
    [sym_tmp_hex_command] = STATE(100),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(100),
    [sym_arged_command] = STATE(100),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(100),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPEH] = ACTIONS(43),
    [anon_sym_PIPET] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT_ATdbt] = ACTIONS(45),
    [anon_sym_AT_ATdbta] = ACTIONS(43),
    [anon_sym_AT_ATdbtb] = ACTIONS(43),
    [anon_sym_AT_ATdbts] = ACTIONS(43),
    [anon_sym_AT_AT_DOT] = ACTIONS(43),
    [anon_sym_AT_AT_EQ] = ACTIONS(43),
    [anon_sym_AT_ATk] = ACTIONS(43),
    [anon_sym_AT_ATt] = ACTIONS(43),
    [anon_sym_AT_ATb] = ACTIONS(43),
    [anon_sym_AT_ATi] = ACTIONS(45),
    [anon_sym_AT_ATiS] = ACTIONS(43),
    [anon_sym_AT_ATf] = ACTIONS(43),
    [anon_sym_AT_ATs_COLON] = ACTIONS(43),
    [anon_sym_AT_ATc_COLON] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
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
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [5] = {
    [sym__command] = STATE(203),
    [sym_legacy_quoted_command] = STATE(203),
    [sym__simple_command] = STATE(55),
    [sym__tmp_command] = STATE(55),
    [sym__iter_command] = STATE(55),
    [sym__pipe_command] = STATE(55),
    [sym_grep_command] = STATE(55),
    [sym_html_disable_command] = STATE(55),
    [sym_html_enable_command] = STATE(55),
    [sym_scr_tts_command] = STATE(55),
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
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(55),
    [sym_arged_command] = STATE(55),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(73),
    [sym_last_command] = STATE(55),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(55),
    [sym_redirect_command] = STATE(203),
    [aux_sym_commands_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_CR] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [6] = {
    [sym__command] = STATE(213),
    [sym_legacy_quoted_command] = STATE(213),
    [sym__simple_command] = STATE(55),
    [sym__tmp_command] = STATE(55),
    [sym__iter_command] = STATE(55),
    [sym__pipe_command] = STATE(55),
    [sym_grep_command] = STATE(55),
    [sym_html_disable_command] = STATE(55),
    [sym_html_enable_command] = STATE(55),
    [sym_scr_tts_command] = STATE(55),
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
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(55),
    [sym_arged_command] = STATE(55),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(73),
    [sym_last_command] = STATE(55),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(55),
    [sym_redirect_command] = STATE(213),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [7] = {
    [sym__commands_singleline] = STATE(254),
    [sym__command] = STATE(218),
    [sym_legacy_quoted_command] = STATE(218),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(218),
    [aux_sym__commands_singleline_repeat1] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__commands_singleline] = STATE(240),
    [sym__command] = STATE(224),
    [sym_legacy_quoted_command] = STATE(224),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(224),
    [aux_sym__commands_singleline_repeat1] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [9] = {
    [sym__commands_singleline] = STATE(245),
    [sym__command] = STATE(218),
    [sym_legacy_quoted_command] = STATE(218),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(218),
    [aux_sym__commands_singleline_repeat1] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [10] = {
    [sym__commands_singleline] = STATE(244),
    [sym__command] = STATE(224),
    [sym_legacy_quoted_command] = STATE(224),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(224),
    [aux_sym__commands_singleline_repeat1] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [11] = {
    [sym__commands_singleline] = STATE(243),
    [sym__command] = STATE(218),
    [sym_legacy_quoted_command] = STATE(218),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(218),
    [aux_sym__commands_singleline_repeat1] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [12] = {
    [sym__commands_singleline] = STATE(234),
    [sym__command] = STATE(224),
    [sym_legacy_quoted_command] = STATE(224),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(224),
    [aux_sym__commands_singleline_repeat1] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [13] = {
    [sym__commands_singleline] = STATE(246),
    [sym__command] = STATE(224),
    [sym_legacy_quoted_command] = STATE(224),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(224),
    [aux_sym__commands_singleline_repeat1] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [14] = {
    [sym__commands_singleline] = STATE(241),
    [sym__command] = STATE(218),
    [sym_legacy_quoted_command] = STATE(218),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(218),
    [aux_sym__commands_singleline_repeat1] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [15] = {
    [sym__commands_singleline] = STATE(237),
    [sym__command] = STATE(218),
    [sym_legacy_quoted_command] = STATE(218),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(218),
    [aux_sym__commands_singleline_repeat1] = STATE(19),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [16] = {
    [sym__commands_singleline] = STATE(238),
    [sym__command] = STATE(224),
    [sym_legacy_quoted_command] = STATE(224),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(224),
    [aux_sym__commands_singleline_repeat1] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [17] = {
    [sym__command] = STATE(223),
    [sym_legacy_quoted_command] = STATE(223),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(223),
    [aux_sym__commands_singleline_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [18] = {
    [sym__command] = STATE(226),
    [sym_legacy_quoted_command] = STATE(226),
    [sym__simple_command] = STATE(120),
    [sym__tmp_command] = STATE(120),
    [sym__iter_command] = STATE(120),
    [sym__pipe_command] = STATE(120),
    [sym_grep_command] = STATE(120),
    [sym_html_disable_command] = STATE(120),
    [sym_html_enable_command] = STATE(120),
    [sym_scr_tts_command] = STATE(120),
    [sym_pipe_command] = STATE(120),
    [sym_iter_flags_command] = STATE(120),
    [sym_iter_dbta_command] = STATE(120),
    [sym_iter_dbtb_command] = STATE(120),
    [sym_iter_dbts_command] = STATE(120),
    [sym_iter_file_lines_command] = STATE(120),
    [sym_iter_offsets_command] = STATE(120),
    [sym_iter_sdbquery_command] = STATE(120),
    [sym_iter_threads_command] = STATE(120),
    [sym_iter_bbs_command] = STATE(120),
    [sym_iter_instrs_command] = STATE(120),
    [sym_iter_sections_command] = STATE(120),
    [sym_iter_functions_command] = STATE(120),
    [sym_iter_step_command] = STATE(120),
    [sym_iter_interpret_command] = STATE(120),
    [sym_tmp_seek_command] = STATE(120),
    [sym_tmp_blksz_command] = STATE(120),
    [sym_tmp_fromto_command] = STATE(120),
    [sym_tmp_arch_command] = STATE(120),
    [sym_tmp_bits_command] = STATE(120),
    [sym_tmp_nthi_command] = STATE(120),
    [sym_tmp_eval_command] = STATE(120),
    [sym_tmp_fs_command] = STATE(120),
    [sym_tmp_reli_command] = STATE(120),
    [sym_tmp_kuery_command] = STATE(120),
    [sym_tmp_fd_command] = STATE(120),
    [sym_tmp_reg_command] = STATE(120),
    [sym_tmp_file_command] = STATE(120),
    [sym_tmp_string_command] = STATE(120),
    [sym_tmp_hex_command] = STATE(120),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(120),
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(120),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(120),
    [sym_redirect_command] = STATE(226),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [19] = {
    [sym__command] = STATE(220),
    [sym_legacy_quoted_command] = STATE(220),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(220),
    [aux_sym__commands_singleline_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [20] = {
    [sym__command] = STATE(226),
    [sym_legacy_quoted_command] = STATE(226),
    [sym__simple_command] = STATE(122),
    [sym__tmp_command] = STATE(122),
    [sym__iter_command] = STATE(122),
    [sym__pipe_command] = STATE(122),
    [sym_grep_command] = STATE(122),
    [sym_html_disable_command] = STATE(122),
    [sym_html_enable_command] = STATE(122),
    [sym_scr_tts_command] = STATE(122),
    [sym_pipe_command] = STATE(122),
    [sym_iter_flags_command] = STATE(122),
    [sym_iter_dbta_command] = STATE(122),
    [sym_iter_dbtb_command] = STATE(122),
    [sym_iter_dbts_command] = STATE(122),
    [sym_iter_file_lines_command] = STATE(122),
    [sym_iter_offsets_command] = STATE(122),
    [sym_iter_sdbquery_command] = STATE(122),
    [sym_iter_threads_command] = STATE(122),
    [sym_iter_bbs_command] = STATE(122),
    [sym_iter_instrs_command] = STATE(122),
    [sym_iter_sections_command] = STATE(122),
    [sym_iter_functions_command] = STATE(122),
    [sym_iter_step_command] = STATE(122),
    [sym_iter_interpret_command] = STATE(122),
    [sym_tmp_seek_command] = STATE(122),
    [sym_tmp_blksz_command] = STATE(122),
    [sym_tmp_fromto_command] = STATE(122),
    [sym_tmp_arch_command] = STATE(122),
    [sym_tmp_bits_command] = STATE(122),
    [sym_tmp_nthi_command] = STATE(122),
    [sym_tmp_eval_command] = STATE(122),
    [sym_tmp_fs_command] = STATE(122),
    [sym_tmp_reli_command] = STATE(122),
    [sym_tmp_kuery_command] = STATE(122),
    [sym_tmp_fd_command] = STATE(122),
    [sym_tmp_reg_command] = STATE(122),
    [sym_tmp_file_command] = STATE(122),
    [sym_tmp_string_command] = STATE(122),
    [sym_tmp_hex_command] = STATE(122),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(122),
    [sym_redirect_command] = STATE(226),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [21] = {
    [sym__simple_command] = STATE(138),
    [sym__tmp_command] = STATE(138),
    [sym__iter_command] = STATE(138),
    [sym__pipe_command] = STATE(138),
    [sym_grep_command] = STATE(138),
    [sym_html_disable_command] = STATE(138),
    [sym_html_enable_command] = STATE(138),
    [sym_scr_tts_command] = STATE(138),
    [sym_pipe_command] = STATE(138),
    [sym_iter_flags_command] = STATE(138),
    [sym_iter_dbta_command] = STATE(138),
    [sym_iter_dbtb_command] = STATE(138),
    [sym_iter_dbts_command] = STATE(138),
    [sym_iter_file_lines_command] = STATE(138),
    [sym_iter_offsets_command] = STATE(138),
    [sym_iter_sdbquery_command] = STATE(138),
    [sym_iter_threads_command] = STATE(138),
    [sym_iter_bbs_command] = STATE(138),
    [sym_iter_instrs_command] = STATE(138),
    [sym_iter_sections_command] = STATE(138),
    [sym_iter_functions_command] = STATE(138),
    [sym_iter_step_command] = STATE(138),
    [sym_iter_interpret_command] = STATE(138),
    [sym_tmp_seek_command] = STATE(138),
    [sym_tmp_blksz_command] = STATE(138),
    [sym_tmp_fromto_command] = STATE(138),
    [sym_tmp_arch_command] = STATE(138),
    [sym_tmp_bits_command] = STATE(138),
    [sym_tmp_nthi_command] = STATE(138),
    [sym_tmp_eval_command] = STATE(138),
    [sym_tmp_fs_command] = STATE(138),
    [sym_tmp_reli_command] = STATE(138),
    [sym_tmp_kuery_command] = STATE(138),
    [sym_tmp_fd_command] = STATE(138),
    [sym_tmp_reg_command] = STATE(138),
    [sym_tmp_file_command] = STATE(138),
    [sym_tmp_string_command] = STATE(138),
    [sym_tmp_hex_command] = STATE(138),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(138),
    [sym_arged_command] = STATE(138),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(138),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(138),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [22] = {
    [sym__simple_command] = STATE(135),
    [sym__tmp_command] = STATE(135),
    [sym__iter_command] = STATE(135),
    [sym__pipe_command] = STATE(135),
    [sym_grep_command] = STATE(135),
    [sym_html_disable_command] = STATE(135),
    [sym_html_enable_command] = STATE(135),
    [sym_scr_tts_command] = STATE(135),
    [sym_pipe_command] = STATE(135),
    [sym_iter_flags_command] = STATE(135),
    [sym_iter_dbta_command] = STATE(135),
    [sym_iter_dbtb_command] = STATE(135),
    [sym_iter_dbts_command] = STATE(135),
    [sym_iter_file_lines_command] = STATE(135),
    [sym_iter_offsets_command] = STATE(135),
    [sym_iter_sdbquery_command] = STATE(135),
    [sym_iter_threads_command] = STATE(135),
    [sym_iter_bbs_command] = STATE(135),
    [sym_iter_instrs_command] = STATE(135),
    [sym_iter_sections_command] = STATE(135),
    [sym_iter_functions_command] = STATE(135),
    [sym_iter_step_command] = STATE(135),
    [sym_iter_interpret_command] = STATE(135),
    [sym_tmp_seek_command] = STATE(135),
    [sym_tmp_blksz_command] = STATE(135),
    [sym_tmp_fromto_command] = STATE(135),
    [sym_tmp_arch_command] = STATE(135),
    [sym_tmp_bits_command] = STATE(135),
    [sym_tmp_nthi_command] = STATE(135),
    [sym_tmp_eval_command] = STATE(135),
    [sym_tmp_fs_command] = STATE(135),
    [sym_tmp_reli_command] = STATE(135),
    [sym_tmp_kuery_command] = STATE(135),
    [sym_tmp_fd_command] = STATE(135),
    [sym_tmp_reg_command] = STATE(135),
    [sym_tmp_file_command] = STATE(135),
    [sym_tmp_string_command] = STATE(135),
    [sym_tmp_hex_command] = STATE(135),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(135),
    [sym_arged_command] = STATE(135),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(135),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(135),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [23] = {
    [sym__simple_command] = STATE(123),
    [sym__tmp_command] = STATE(123),
    [sym__iter_command] = STATE(123),
    [sym__pipe_command] = STATE(123),
    [sym_grep_command] = STATE(123),
    [sym_html_disable_command] = STATE(123),
    [sym_html_enable_command] = STATE(123),
    [sym_scr_tts_command] = STATE(123),
    [sym_pipe_command] = STATE(123),
    [sym_iter_flags_command] = STATE(123),
    [sym_iter_dbta_command] = STATE(123),
    [sym_iter_dbtb_command] = STATE(123),
    [sym_iter_dbts_command] = STATE(123),
    [sym_iter_file_lines_command] = STATE(123),
    [sym_iter_offsets_command] = STATE(123),
    [sym_iter_sdbquery_command] = STATE(123),
    [sym_iter_threads_command] = STATE(123),
    [sym_iter_bbs_command] = STATE(123),
    [sym_iter_instrs_command] = STATE(123),
    [sym_iter_sections_command] = STATE(123),
    [sym_iter_functions_command] = STATE(123),
    [sym_iter_step_command] = STATE(123),
    [sym_iter_interpret_command] = STATE(123),
    [sym_tmp_seek_command] = STATE(123),
    [sym_tmp_blksz_command] = STATE(123),
    [sym_tmp_fromto_command] = STATE(123),
    [sym_tmp_arch_command] = STATE(123),
    [sym_tmp_bits_command] = STATE(123),
    [sym_tmp_nthi_command] = STATE(123),
    [sym_tmp_eval_command] = STATE(123),
    [sym_tmp_fs_command] = STATE(123),
    [sym_tmp_reli_command] = STATE(123),
    [sym_tmp_kuery_command] = STATE(123),
    [sym_tmp_fd_command] = STATE(123),
    [sym_tmp_reg_command] = STATE(123),
    [sym_tmp_file_command] = STATE(123),
    [sym_tmp_string_command] = STATE(123),
    [sym_tmp_hex_command] = STATE(123),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(123),
    [sym_arged_command] = STATE(123),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(73),
    [sym_last_command] = STATE(123),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(123),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [24] = {
    [sym__simple_command] = STATE(136),
    [sym__tmp_command] = STATE(136),
    [sym__iter_command] = STATE(136),
    [sym__pipe_command] = STATE(136),
    [sym_grep_command] = STATE(136),
    [sym_html_disable_command] = STATE(136),
    [sym_html_enable_command] = STATE(136),
    [sym_scr_tts_command] = STATE(136),
    [sym_pipe_command] = STATE(136),
    [sym_iter_flags_command] = STATE(136),
    [sym_iter_dbta_command] = STATE(136),
    [sym_iter_dbtb_command] = STATE(136),
    [sym_iter_dbts_command] = STATE(136),
    [sym_iter_file_lines_command] = STATE(136),
    [sym_iter_offsets_command] = STATE(136),
    [sym_iter_sdbquery_command] = STATE(136),
    [sym_iter_threads_command] = STATE(136),
    [sym_iter_bbs_command] = STATE(136),
    [sym_iter_instrs_command] = STATE(136),
    [sym_iter_sections_command] = STATE(136),
    [sym_iter_functions_command] = STATE(136),
    [sym_iter_step_command] = STATE(136),
    [sym_iter_interpret_command] = STATE(136),
    [sym_tmp_seek_command] = STATE(136),
    [sym_tmp_blksz_command] = STATE(136),
    [sym_tmp_fromto_command] = STATE(136),
    [sym_tmp_arch_command] = STATE(136),
    [sym_tmp_bits_command] = STATE(136),
    [sym_tmp_nthi_command] = STATE(136),
    [sym_tmp_eval_command] = STATE(136),
    [sym_tmp_fs_command] = STATE(136),
    [sym_tmp_reli_command] = STATE(136),
    [sym_tmp_kuery_command] = STATE(136),
    [sym_tmp_fd_command] = STATE(136),
    [sym_tmp_reg_command] = STATE(136),
    [sym_tmp_file_command] = STATE(136),
    [sym_tmp_string_command] = STATE(136),
    [sym_tmp_hex_command] = STATE(136),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(136),
    [sym_arged_command] = STATE(136),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(129),
    [sym_last_command] = STATE(136),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(136),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(67),
    [anon_sym_env] = ACTIONS(67),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(69),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(71),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [25] = {
    [sym__simple_command] = STATE(139),
    [sym__tmp_command] = STATE(139),
    [sym__iter_command] = STATE(139),
    [sym__pipe_command] = STATE(139),
    [sym_grep_command] = STATE(139),
    [sym_html_disable_command] = STATE(139),
    [sym_html_enable_command] = STATE(139),
    [sym_scr_tts_command] = STATE(139),
    [sym_pipe_command] = STATE(139),
    [sym_iter_flags_command] = STATE(139),
    [sym_iter_dbta_command] = STATE(139),
    [sym_iter_dbtb_command] = STATE(139),
    [sym_iter_dbts_command] = STATE(139),
    [sym_iter_file_lines_command] = STATE(139),
    [sym_iter_offsets_command] = STATE(139),
    [sym_iter_sdbquery_command] = STATE(139),
    [sym_iter_threads_command] = STATE(139),
    [sym_iter_bbs_command] = STATE(139),
    [sym_iter_instrs_command] = STATE(139),
    [sym_iter_sections_command] = STATE(139),
    [sym_iter_functions_command] = STATE(139),
    [sym_iter_step_command] = STATE(139),
    [sym_iter_interpret_command] = STATE(139),
    [sym_tmp_seek_command] = STATE(139),
    [sym_tmp_blksz_command] = STATE(139),
    [sym_tmp_fromto_command] = STATE(139),
    [sym_tmp_arch_command] = STATE(139),
    [sym_tmp_bits_command] = STATE(139),
    [sym_tmp_nthi_command] = STATE(139),
    [sym_tmp_eval_command] = STATE(139),
    [sym_tmp_fs_command] = STATE(139),
    [sym_tmp_reli_command] = STATE(139),
    [sym_tmp_kuery_command] = STATE(139),
    [sym_tmp_fd_command] = STATE(139),
    [sym_tmp_reg_command] = STATE(139),
    [sym_tmp_file_command] = STATE(139),
    [sym_tmp_string_command] = STATE(139),
    [sym_tmp_hex_command] = STATE(139),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(139),
    [sym_arged_command] = STATE(139),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(125),
    [sym_last_command] = STATE(139),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(38),
    [sym_repeat_command] = STATE(139),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(49),
    [anon_sym_env] = ACTIONS(49),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(51),
    [sym_question_mark_identifier] = ACTIONS(53),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(55),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [26] = {
    [sym__simple_command] = STATE(124),
    [sym__tmp_command] = STATE(124),
    [sym__iter_command] = STATE(124),
    [sym__pipe_command] = STATE(124),
    [sym_grep_command] = STATE(124),
    [sym_html_disable_command] = STATE(124),
    [sym_html_enable_command] = STATE(124),
    [sym_scr_tts_command] = STATE(124),
    [sym_pipe_command] = STATE(124),
    [sym_iter_flags_command] = STATE(124),
    [sym_iter_dbta_command] = STATE(124),
    [sym_iter_dbtb_command] = STATE(124),
    [sym_iter_dbts_command] = STATE(124),
    [sym_iter_file_lines_command] = STATE(124),
    [sym_iter_offsets_command] = STATE(124),
    [sym_iter_sdbquery_command] = STATE(124),
    [sym_iter_threads_command] = STATE(124),
    [sym_iter_bbs_command] = STATE(124),
    [sym_iter_instrs_command] = STATE(124),
    [sym_iter_sections_command] = STATE(124),
    [sym_iter_functions_command] = STATE(124),
    [sym_iter_step_command] = STATE(124),
    [sym_iter_interpret_command] = STATE(124),
    [sym_tmp_seek_command] = STATE(124),
    [sym_tmp_blksz_command] = STATE(124),
    [sym_tmp_fromto_command] = STATE(124),
    [sym_tmp_arch_command] = STATE(124),
    [sym_tmp_bits_command] = STATE(124),
    [sym_tmp_nthi_command] = STATE(124),
    [sym_tmp_eval_command] = STATE(124),
    [sym_tmp_fs_command] = STATE(124),
    [sym_tmp_reli_command] = STATE(124),
    [sym_tmp_kuery_command] = STATE(124),
    [sym_tmp_fd_command] = STATE(124),
    [sym_tmp_reg_command] = STATE(124),
    [sym_tmp_file_command] = STATE(124),
    [sym_tmp_string_command] = STATE(124),
    [sym_tmp_hex_command] = STATE(124),
    [sym__interpreter_command] = STATE(72),
    [sym_help_command] = STATE(124),
    [sym_arged_command] = STATE(124),
    [sym__simple_arged_command] = STATE(72),
    [sym__math_arged_command] = STATE(72),
    [sym__pointer_arged_command] = STATE(72),
    [sym__macro_arged_command] = STATE(72),
    [sym__system_command] = STATE(72),
    [sym__interpret_command] = STATE(72),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(72),
    [sym__env_command_identifier] = STATE(73),
    [sym_last_command] = STATE(124),
    [sym_last_command_identifier] = STATE(92),
    [sym__interpret_identifier] = STATE(30),
    [sym_repeat_command] = STATE(124),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [27] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(88),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_PIPET] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(93),
    [anon_sym_AT_ATdbt] = ACTIONS(93),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(93),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(93),
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
    [anon_sym_PIPE_DOT] = ACTIONS(89),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(89),
    [sym_html_redirect_operator] = ACTIONS(93),
    [sym_html_append_operator] = ACTIONS(89),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_CR] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_file_descriptor] = ACTIONS(89),
  },
  [28] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(106),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_PIPET] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(93),
    [anon_sym_AT_ATdbt] = ACTIONS(93),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(93),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(93),
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
    [anon_sym_PIPE_DOT] = ACTIONS(89),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(89),
    [sym_html_redirect_operator] = ACTIONS(93),
    [sym_html_append_operator] = ACTIONS(89),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_CR] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_file_descriptor] = ACTIONS(89),
  },
  [29] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(107),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PIPEH] = ACTIONS(105),
    [anon_sym_PIPET] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(107),
    [anon_sym_AT_ATdbt] = ACTIONS(107),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(105),
    [anon_sym_AT_ATdbts] = ACTIONS(105),
    [anon_sym_AT_AT_DOT] = ACTIONS(105),
    [anon_sym_AT_AT_EQ] = ACTIONS(105),
    [anon_sym_AT_ATk] = ACTIONS(105),
    [anon_sym_AT_ATt] = ACTIONS(105),
    [anon_sym_AT_ATb] = ACTIONS(105),
    [anon_sym_AT_ATi] = ACTIONS(107),
    [anon_sym_AT_ATiS] = ACTIONS(105),
    [anon_sym_AT_ATf] = ACTIONS(105),
    [anon_sym_AT_ATs_COLON] = ACTIONS(105),
    [anon_sym_AT_ATc_COLON] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(107),
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
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_PIPE_DOT] = ACTIONS(105),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(105),
    [sym_html_redirect_operator] = ACTIONS(107),
    [sym_html_append_operator] = ACTIONS(105),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_CR] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [30] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(98),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPEH] = ACTIONS(109),
    [anon_sym_PIPET] = ACTIONS(109),
    [anon_sym_AT_AT] = ACTIONS(111),
    [anon_sym_AT_ATdbt] = ACTIONS(111),
    [anon_sym_AT_ATdbta] = ACTIONS(109),
    [anon_sym_AT_ATdbtb] = ACTIONS(109),
    [anon_sym_AT_ATdbts] = ACTIONS(109),
    [anon_sym_AT_AT_DOT] = ACTIONS(109),
    [anon_sym_AT_AT_EQ] = ACTIONS(109),
    [anon_sym_AT_ATk] = ACTIONS(109),
    [anon_sym_AT_ATt] = ACTIONS(109),
    [anon_sym_AT_ATb] = ACTIONS(109),
    [anon_sym_AT_ATi] = ACTIONS(111),
    [anon_sym_AT_ATiS] = ACTIONS(109),
    [anon_sym_AT_ATf] = ACTIONS(109),
    [anon_sym_AT_ATs_COLON] = ACTIONS(109),
    [anon_sym_AT_ATc_COLON] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(111),
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
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_PIPE_DOT] = ACTIONS(109),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(109),
    [sym_html_redirect_operator] = ACTIONS(111),
    [sym_html_append_operator] = ACTIONS(109),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(109),
  },
  [31] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(57),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPEH] = ACTIONS(113),
    [anon_sym_PIPET] = ACTIONS(113),
    [anon_sym_AT_AT] = ACTIONS(115),
    [anon_sym_AT_ATdbt] = ACTIONS(115),
    [anon_sym_AT_ATdbta] = ACTIONS(113),
    [anon_sym_AT_ATdbtb] = ACTIONS(113),
    [anon_sym_AT_ATdbts] = ACTIONS(113),
    [anon_sym_AT_AT_DOT] = ACTIONS(113),
    [anon_sym_AT_AT_EQ] = ACTIONS(113),
    [anon_sym_AT_ATk] = ACTIONS(113),
    [anon_sym_AT_ATt] = ACTIONS(113),
    [anon_sym_AT_ATb] = ACTIONS(113),
    [anon_sym_AT_ATi] = ACTIONS(115),
    [anon_sym_AT_ATiS] = ACTIONS(113),
    [anon_sym_AT_ATf] = ACTIONS(113),
    [anon_sym_AT_ATs_COLON] = ACTIONS(113),
    [anon_sym_AT_ATc_COLON] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(115),
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
    [anon_sym_PIPE_DOT] = ACTIONS(113),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(113),
    [sym_html_redirect_operator] = ACTIONS(115),
    [sym_html_append_operator] = ACTIONS(113),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_CR] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [32] = {
    [sym_arg] = STATE(33),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPEH] = ACTIONS(117),
    [anon_sym_PIPET] = ACTIONS(117),
    [anon_sym_AT_AT] = ACTIONS(119),
    [anon_sym_AT_ATdbt] = ACTIONS(119),
    [anon_sym_AT_ATdbta] = ACTIONS(117),
    [anon_sym_AT_ATdbtb] = ACTIONS(117),
    [anon_sym_AT_ATdbts] = ACTIONS(117),
    [anon_sym_AT_AT_DOT] = ACTIONS(117),
    [anon_sym_AT_AT_EQ] = ACTIONS(117),
    [anon_sym_AT_ATk] = ACTIONS(117),
    [anon_sym_AT_ATt] = ACTIONS(117),
    [anon_sym_AT_ATb] = ACTIONS(117),
    [anon_sym_AT_ATi] = ACTIONS(119),
    [anon_sym_AT_ATiS] = ACTIONS(117),
    [anon_sym_AT_ATf] = ACTIONS(117),
    [anon_sym_AT_ATs_COLON] = ACTIONS(117),
    [anon_sym_AT_ATc_COLON] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(119),
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
    [anon_sym_PIPE_DOT] = ACTIONS(117),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(117),
    [sym_html_redirect_operator] = ACTIONS(119),
    [sym_html_append_operator] = ACTIONS(117),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_CR] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
  },
  [33] = {
    [sym_arg] = STATE(33),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_PIPEH] = ACTIONS(121),
    [anon_sym_PIPET] = ACTIONS(121),
    [anon_sym_AT_AT] = ACTIONS(126),
    [anon_sym_AT_ATdbt] = ACTIONS(126),
    [anon_sym_AT_ATdbta] = ACTIONS(121),
    [anon_sym_AT_ATdbtb] = ACTIONS(121),
    [anon_sym_AT_ATdbts] = ACTIONS(121),
    [anon_sym_AT_AT_DOT] = ACTIONS(121),
    [anon_sym_AT_AT_EQ] = ACTIONS(121),
    [anon_sym_AT_ATk] = ACTIONS(121),
    [anon_sym_AT_ATt] = ACTIONS(121),
    [anon_sym_AT_ATb] = ACTIONS(121),
    [anon_sym_AT_ATi] = ACTIONS(126),
    [anon_sym_AT_ATiS] = ACTIONS(121),
    [anon_sym_AT_ATf] = ACTIONS(121),
    [anon_sym_AT_ATs_COLON] = ACTIONS(121),
    [anon_sym_AT_ATc_COLON] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(126),
    [anon_sym_AT_BANG] = ACTIONS(121),
    [anon_sym_AT_LPAREN] = ACTIONS(121),
    [anon_sym_ATa_COLON] = ACTIONS(121),
    [anon_sym_ATb_COLON] = ACTIONS(121),
    [anon_sym_ATB_COLON] = ACTIONS(121),
    [anon_sym_ATe_COLON] = ACTIONS(121),
    [anon_sym_ATF_COLON] = ACTIONS(121),
    [anon_sym_ATi_COLON] = ACTIONS(121),
    [anon_sym_ATk_COLON] = ACTIONS(121),
    [anon_sym_ATo_COLON] = ACTIONS(121),
    [anon_sym_ATr_COLON] = ACTIONS(121),
    [anon_sym_ATf_COLON] = ACTIONS(121),
    [anon_sym_ATs_COLON] = ACTIONS(121),
    [anon_sym_ATx_COLON] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_PIPE_DOT] = ACTIONS(121),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(121),
    [sym_html_redirect_operator] = ACTIONS(126),
    [sym_html_append_operator] = ACTIONS(121),
    [sym_arg_identifier] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_CR] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
  },
  [34] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(88),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_PIPET] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(93),
    [anon_sym_AT_ATdbt] = ACTIONS(93),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(93),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(93),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(89),
    [sym_html_redirect_operator] = ACTIONS(93),
    [sym_html_append_operator] = ACTIONS(89),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_file_descriptor] = ACTIONS(89),
  },
  [35] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(107),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_PIPEH] = ACTIONS(105),
    [anon_sym_PIPET] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(107),
    [anon_sym_AT_ATdbt] = ACTIONS(107),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(105),
    [anon_sym_AT_ATdbts] = ACTIONS(105),
    [anon_sym_AT_AT_DOT] = ACTIONS(105),
    [anon_sym_AT_AT_EQ] = ACTIONS(105),
    [anon_sym_AT_ATk] = ACTIONS(105),
    [anon_sym_AT_ATt] = ACTIONS(105),
    [anon_sym_AT_ATb] = ACTIONS(105),
    [anon_sym_AT_ATi] = ACTIONS(107),
    [anon_sym_AT_ATiS] = ACTIONS(105),
    [anon_sym_AT_ATf] = ACTIONS(105),
    [anon_sym_AT_ATs_COLON] = ACTIONS(105),
    [anon_sym_AT_ATc_COLON] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(107),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(105),
    [sym_html_redirect_operator] = ACTIONS(107),
    [sym_html_append_operator] = ACTIONS(105),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [36] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(106),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_PIPEH] = ACTIONS(89),
    [anon_sym_PIPET] = ACTIONS(89),
    [anon_sym_AT_AT] = ACTIONS(93),
    [anon_sym_AT_ATdbt] = ACTIONS(93),
    [anon_sym_AT_ATdbta] = ACTIONS(89),
    [anon_sym_AT_ATdbtb] = ACTIONS(89),
    [anon_sym_AT_ATdbts] = ACTIONS(89),
    [anon_sym_AT_AT_DOT] = ACTIONS(89),
    [anon_sym_AT_AT_EQ] = ACTIONS(89),
    [anon_sym_AT_ATk] = ACTIONS(89),
    [anon_sym_AT_ATt] = ACTIONS(89),
    [anon_sym_AT_ATb] = ACTIONS(89),
    [anon_sym_AT_ATi] = ACTIONS(93),
    [anon_sym_AT_ATiS] = ACTIONS(89),
    [anon_sym_AT_ATf] = ACTIONS(89),
    [anon_sym_AT_ATs_COLON] = ACTIONS(89),
    [anon_sym_AT_ATc_COLON] = ACTIONS(89),
    [anon_sym_AT] = ACTIONS(93),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_GT_GT] = ACTIONS(89),
    [sym_html_redirect_operator] = ACTIONS(93),
    [sym_html_append_operator] = ACTIONS(89),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_file_descriptor] = ACTIONS(89),
  },
  [37] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(57),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(115),
    [anon_sym_PIPEH] = ACTIONS(113),
    [anon_sym_PIPET] = ACTIONS(113),
    [anon_sym_AT_AT] = ACTIONS(115),
    [anon_sym_AT_ATdbt] = ACTIONS(115),
    [anon_sym_AT_ATdbta] = ACTIONS(113),
    [anon_sym_AT_ATdbtb] = ACTIONS(113),
    [anon_sym_AT_ATdbts] = ACTIONS(113),
    [anon_sym_AT_AT_DOT] = ACTIONS(113),
    [anon_sym_AT_AT_EQ] = ACTIONS(113),
    [anon_sym_AT_ATk] = ACTIONS(113),
    [anon_sym_AT_ATt] = ACTIONS(113),
    [anon_sym_AT_ATb] = ACTIONS(113),
    [anon_sym_AT_ATi] = ACTIONS(115),
    [anon_sym_AT_ATiS] = ACTIONS(113),
    [anon_sym_AT_ATf] = ACTIONS(113),
    [anon_sym_AT_ATs_COLON] = ACTIONS(113),
    [anon_sym_AT_ATc_COLON] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(115),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(113),
    [sym_html_redirect_operator] = ACTIONS(115),
    [sym_html_append_operator] = ACTIONS(113),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [38] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(98),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPEH] = ACTIONS(109),
    [anon_sym_PIPET] = ACTIONS(109),
    [anon_sym_AT_AT] = ACTIONS(111),
    [anon_sym_AT_ATdbt] = ACTIONS(111),
    [anon_sym_AT_ATdbta] = ACTIONS(109),
    [anon_sym_AT_ATdbtb] = ACTIONS(109),
    [anon_sym_AT_ATdbts] = ACTIONS(109),
    [anon_sym_AT_AT_DOT] = ACTIONS(109),
    [anon_sym_AT_AT_EQ] = ACTIONS(109),
    [anon_sym_AT_ATk] = ACTIONS(109),
    [anon_sym_AT_ATt] = ACTIONS(109),
    [anon_sym_AT_ATb] = ACTIONS(109),
    [anon_sym_AT_ATi] = ACTIONS(111),
    [anon_sym_AT_ATiS] = ACTIONS(109),
    [anon_sym_AT_ATf] = ACTIONS(109),
    [anon_sym_AT_ATs_COLON] = ACTIONS(109),
    [anon_sym_AT_ATc_COLON] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(111),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(109),
    [sym_html_redirect_operator] = ACTIONS(111),
    [sym_html_append_operator] = ACTIONS(109),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(109),
  },
  [39] = {
    [sym_arg] = STATE(33),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(119),
    [anon_sym_PIPEH] = ACTIONS(117),
    [anon_sym_PIPET] = ACTIONS(117),
    [anon_sym_AT_AT] = ACTIONS(119),
    [anon_sym_AT_ATdbt] = ACTIONS(119),
    [anon_sym_AT_ATdbta] = ACTIONS(117),
    [anon_sym_AT_ATdbtb] = ACTIONS(117),
    [anon_sym_AT_ATdbts] = ACTIONS(117),
    [anon_sym_AT_AT_DOT] = ACTIONS(117),
    [anon_sym_AT_AT_EQ] = ACTIONS(117),
    [anon_sym_AT_ATk] = ACTIONS(117),
    [anon_sym_AT_ATt] = ACTIONS(117),
    [anon_sym_AT_ATb] = ACTIONS(117),
    [anon_sym_AT_ATi] = ACTIONS(119),
    [anon_sym_AT_ATiS] = ACTIONS(117),
    [anon_sym_AT_ATf] = ACTIONS(117),
    [anon_sym_AT_ATs_COLON] = ACTIONS(117),
    [anon_sym_AT_ATc_COLON] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(119),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(117),
    [sym_html_redirect_operator] = ACTIONS(119),
    [sym_html_append_operator] = ACTIONS(117),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(142),
    [anon_sym_AT_ATdbt] = ACTIONS(142),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(142),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(142),
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
    [anon_sym_PIPE_DOT] = ACTIONS(140),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(140),
    [sym_html_redirect_operator] = ACTIONS(142),
    [sym_html_append_operator] = ACTIONS(140),
    [sym_arg_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_file_descriptor] = ACTIONS(140),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_PIPEH] = ACTIONS(144),
    [anon_sym_PIPET] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(146),
    [anon_sym_AT_ATdbt] = ACTIONS(146),
    [anon_sym_AT_ATdbta] = ACTIONS(144),
    [anon_sym_AT_ATdbtb] = ACTIONS(144),
    [anon_sym_AT_ATdbts] = ACTIONS(144),
    [anon_sym_AT_AT_DOT] = ACTIONS(144),
    [anon_sym_AT_AT_EQ] = ACTIONS(144),
    [anon_sym_AT_ATk] = ACTIONS(144),
    [anon_sym_AT_ATt] = ACTIONS(144),
    [anon_sym_AT_ATb] = ACTIONS(144),
    [anon_sym_AT_ATi] = ACTIONS(146),
    [anon_sym_AT_ATiS] = ACTIONS(144),
    [anon_sym_AT_ATf] = ACTIONS(144),
    [anon_sym_AT_ATs_COLON] = ACTIONS(144),
    [anon_sym_AT_ATc_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(146),
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
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_GT_GT] = ACTIONS(144),
    [sym_html_redirect_operator] = ACTIONS(146),
    [sym_html_append_operator] = ACTIONS(144),
    [sym_arg_identifier] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_file_descriptor] = ACTIONS(144),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(150),
    [anon_sym_AT_ATdbt] = ACTIONS(150),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(150),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(150),
    [sym_html_append_operator] = ACTIONS(148),
    [sym_arg_identifier] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_file_descriptor] = ACTIONS(148),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_TILDE] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_PIPEH] = ACTIONS(152),
    [anon_sym_PIPET] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(154),
    [anon_sym_AT_ATdbt] = ACTIONS(154),
    [anon_sym_AT_ATdbta] = ACTIONS(152),
    [anon_sym_AT_ATdbtb] = ACTIONS(152),
    [anon_sym_AT_ATdbts] = ACTIONS(152),
    [anon_sym_AT_AT_DOT] = ACTIONS(152),
    [anon_sym_AT_AT_EQ] = ACTIONS(152),
    [anon_sym_AT_ATk] = ACTIONS(152),
    [anon_sym_AT_ATt] = ACTIONS(152),
    [anon_sym_AT_ATb] = ACTIONS(152),
    [anon_sym_AT_ATi] = ACTIONS(154),
    [anon_sym_AT_ATiS] = ACTIONS(152),
    [anon_sym_AT_ATf] = ACTIONS(152),
    [anon_sym_AT_ATs_COLON] = ACTIONS(152),
    [anon_sym_AT_ATc_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(154),
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
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(154),
    [sym_html_append_operator] = ACTIONS(152),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_file_descriptor] = ACTIONS(152),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_PIPEH] = ACTIONS(156),
    [anon_sym_PIPET] = ACTIONS(156),
    [anon_sym_AT_AT] = ACTIONS(158),
    [anon_sym_AT_ATdbt] = ACTIONS(158),
    [anon_sym_AT_ATdbta] = ACTIONS(156),
    [anon_sym_AT_ATdbtb] = ACTIONS(156),
    [anon_sym_AT_ATdbts] = ACTIONS(156),
    [anon_sym_AT_AT_DOT] = ACTIONS(156),
    [anon_sym_AT_AT_EQ] = ACTIONS(156),
    [anon_sym_AT_ATk] = ACTIONS(156),
    [anon_sym_AT_ATt] = ACTIONS(156),
    [anon_sym_AT_ATb] = ACTIONS(156),
    [anon_sym_AT_ATi] = ACTIONS(158),
    [anon_sym_AT_ATiS] = ACTIONS(156),
    [anon_sym_AT_ATf] = ACTIONS(156),
    [anon_sym_AT_ATs_COLON] = ACTIONS(156),
    [anon_sym_AT_ATc_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(158),
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
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_PIPEH] = ACTIONS(160),
    [anon_sym_PIPET] = ACTIONS(160),
    [anon_sym_AT_AT] = ACTIONS(162),
    [anon_sym_AT_ATdbt] = ACTIONS(162),
    [anon_sym_AT_ATdbta] = ACTIONS(160),
    [anon_sym_AT_ATdbtb] = ACTIONS(160),
    [anon_sym_AT_ATdbts] = ACTIONS(160),
    [anon_sym_AT_AT_DOT] = ACTIONS(160),
    [anon_sym_AT_AT_EQ] = ACTIONS(160),
    [anon_sym_AT_ATk] = ACTIONS(160),
    [anon_sym_AT_ATt] = ACTIONS(160),
    [anon_sym_AT_ATb] = ACTIONS(160),
    [anon_sym_AT_ATi] = ACTIONS(162),
    [anon_sym_AT_ATiS] = ACTIONS(160),
    [anon_sym_AT_ATf] = ACTIONS(160),
    [anon_sym_AT_ATs_COLON] = ACTIONS(160),
    [anon_sym_AT_ATc_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(160),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(160),
    [sym_html_redirect_operator] = ACTIONS(162),
    [sym_html_append_operator] = ACTIONS(160),
    [sym_arg_identifier] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_file_descriptor] = ACTIONS(160),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_PIPEH] = ACTIONS(164),
    [anon_sym_PIPET] = ACTIONS(164),
    [anon_sym_AT_AT] = ACTIONS(166),
    [anon_sym_AT_ATdbt] = ACTIONS(166),
    [anon_sym_AT_ATdbta] = ACTIONS(164),
    [anon_sym_AT_ATdbtb] = ACTIONS(164),
    [anon_sym_AT_ATdbts] = ACTIONS(164),
    [anon_sym_AT_AT_DOT] = ACTIONS(164),
    [anon_sym_AT_AT_EQ] = ACTIONS(164),
    [anon_sym_AT_ATk] = ACTIONS(164),
    [anon_sym_AT_ATt] = ACTIONS(164),
    [anon_sym_AT_ATb] = ACTIONS(164),
    [anon_sym_AT_ATi] = ACTIONS(166),
    [anon_sym_AT_ATiS] = ACTIONS(164),
    [anon_sym_AT_ATf] = ACTIONS(164),
    [anon_sym_AT_ATs_COLON] = ACTIONS(164),
    [anon_sym_AT_ATc_COLON] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(166),
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
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(166),
    [sym_html_append_operator] = ACTIONS(164),
    [sym_arg_identifier] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_file_descriptor] = ACTIONS(164),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(150),
    [anon_sym_AT_ATdbt] = ACTIONS(150),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(150),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(150),
    [sym_html_append_operator] = ACTIONS(148),
    [sym_arg_identifier] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_file_descriptor] = ACTIONS(148),
  },
  [48] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_PIPEH] = ACTIONS(168),
    [anon_sym_PIPET] = ACTIONS(168),
    [anon_sym_AT_AT] = ACTIONS(170),
    [anon_sym_AT_ATdbt] = ACTIONS(170),
    [anon_sym_AT_ATdbta] = ACTIONS(168),
    [anon_sym_AT_ATdbtb] = ACTIONS(168),
    [anon_sym_AT_ATdbts] = ACTIONS(168),
    [anon_sym_AT_AT_DOT] = ACTIONS(168),
    [anon_sym_AT_AT_EQ] = ACTIONS(168),
    [anon_sym_AT_ATk] = ACTIONS(168),
    [anon_sym_AT_ATt] = ACTIONS(168),
    [anon_sym_AT_ATb] = ACTIONS(168),
    [anon_sym_AT_ATi] = ACTIONS(170),
    [anon_sym_AT_ATiS] = ACTIONS(168),
    [anon_sym_AT_ATf] = ACTIONS(168),
    [anon_sym_AT_ATs_COLON] = ACTIONS(168),
    [anon_sym_AT_ATc_COLON] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_AT_BANG] = ACTIONS(168),
    [anon_sym_AT_LPAREN] = ACTIONS(168),
    [anon_sym_ATa_COLON] = ACTIONS(168),
    [anon_sym_ATb_COLON] = ACTIONS(168),
    [anon_sym_ATB_COLON] = ACTIONS(168),
    [anon_sym_ATe_COLON] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_ATF_COLON] = ACTIONS(168),
    [anon_sym_ATi_COLON] = ACTIONS(168),
    [anon_sym_ATk_COLON] = ACTIONS(168),
    [anon_sym_ATo_COLON] = ACTIONS(168),
    [anon_sym_ATr_COLON] = ACTIONS(168),
    [anon_sym_ATf_COLON] = ACTIONS(168),
    [anon_sym_ATs_COLON] = ACTIONS(168),
    [anon_sym_ATx_COLON] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_PIPE_DOT] = ACTIONS(168),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_GT] = ACTIONS(168),
    [sym_html_redirect_operator] = ACTIONS(170),
    [sym_html_append_operator] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_file_descriptor] = ACTIONS(168),
  },
  [49] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_TILDE] = ACTIONS(175),
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
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_ATF_COLON] = ACTIONS(175),
    [anon_sym_ATi_COLON] = ACTIONS(175),
    [anon_sym_ATk_COLON] = ACTIONS(175),
    [anon_sym_ATo_COLON] = ACTIONS(175),
    [anon_sym_ATr_COLON] = ACTIONS(175),
    [anon_sym_ATf_COLON] = ACTIONS(175),
    [anon_sym_ATs_COLON] = ACTIONS(175),
    [anon_sym_ATx_COLON] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_PIPE_DOT] = ACTIONS(175),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(177),
    [anon_sym_GT_GT] = ACTIONS(175),
    [sym_html_redirect_operator] = ACTIONS(177),
    [sym_html_append_operator] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_file_descriptor] = ACTIONS(175),
  },
  [50] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_PIPEH] = ACTIONS(181),
    [anon_sym_PIPET] = ACTIONS(181),
    [anon_sym_AT_AT] = ACTIONS(183),
    [anon_sym_AT_ATdbt] = ACTIONS(183),
    [anon_sym_AT_ATdbta] = ACTIONS(181),
    [anon_sym_AT_ATdbtb] = ACTIONS(181),
    [anon_sym_AT_ATdbts] = ACTIONS(181),
    [anon_sym_AT_AT_DOT] = ACTIONS(181),
    [anon_sym_AT_AT_EQ] = ACTIONS(181),
    [anon_sym_AT_ATk] = ACTIONS(181),
    [anon_sym_AT_ATt] = ACTIONS(181),
    [anon_sym_AT_ATb] = ACTIONS(181),
    [anon_sym_AT_ATi] = ACTIONS(183),
    [anon_sym_AT_ATiS] = ACTIONS(181),
    [anon_sym_AT_ATf] = ACTIONS(181),
    [anon_sym_AT_ATs_COLON] = ACTIONS(181),
    [anon_sym_AT_ATc_COLON] = ACTIONS(181),
    [anon_sym_AT] = ACTIONS(183),
    [anon_sym_AT_BANG] = ACTIONS(181),
    [anon_sym_AT_LPAREN] = ACTIONS(181),
    [anon_sym_ATa_COLON] = ACTIONS(181),
    [anon_sym_ATb_COLON] = ACTIONS(181),
    [anon_sym_ATB_COLON] = ACTIONS(181),
    [anon_sym_ATe_COLON] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_ATF_COLON] = ACTIONS(181),
    [anon_sym_ATi_COLON] = ACTIONS(181),
    [anon_sym_ATk_COLON] = ACTIONS(181),
    [anon_sym_ATo_COLON] = ACTIONS(181),
    [anon_sym_ATr_COLON] = ACTIONS(181),
    [anon_sym_ATf_COLON] = ACTIONS(181),
    [anon_sym_ATs_COLON] = ACTIONS(181),
    [anon_sym_ATx_COLON] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_PIPE_DOT] = ACTIONS(181),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(181),
    [sym_html_redirect_operator] = ACTIONS(183),
    [sym_html_append_operator] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_CR] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [sym_file_descriptor] = ACTIONS(181),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_PIPE] = ACTIONS(187),
    [anon_sym_PIPEH] = ACTIONS(185),
    [anon_sym_PIPET] = ACTIONS(185),
    [anon_sym_AT_AT] = ACTIONS(187),
    [anon_sym_AT_ATdbt] = ACTIONS(187),
    [anon_sym_AT_ATdbta] = ACTIONS(185),
    [anon_sym_AT_ATdbtb] = ACTIONS(185),
    [anon_sym_AT_ATdbts] = ACTIONS(185),
    [anon_sym_AT_AT_DOT] = ACTIONS(185),
    [anon_sym_AT_AT_EQ] = ACTIONS(185),
    [anon_sym_AT_ATk] = ACTIONS(185),
    [anon_sym_AT_ATt] = ACTIONS(185),
    [anon_sym_AT_ATb] = ACTIONS(185),
    [anon_sym_AT_ATi] = ACTIONS(187),
    [anon_sym_AT_ATiS] = ACTIONS(185),
    [anon_sym_AT_ATf] = ACTIONS(185),
    [anon_sym_AT_ATs_COLON] = ACTIONS(185),
    [anon_sym_AT_ATc_COLON] = ACTIONS(185),
    [anon_sym_AT] = ACTIONS(187),
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
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_PIPE_DOT] = ACTIONS(185),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(185),
    [sym_html_redirect_operator] = ACTIONS(187),
    [sym_html_append_operator] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_CR] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [sym_file_descriptor] = ACTIONS(185),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
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
    [anon_sym_RPAREN] = ACTIONS(191),
    [anon_sym_PIPE_DOT] = ACTIONS(191),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(191),
    [sym_html_redirect_operator] = ACTIONS(193),
    [sym_html_append_operator] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [sym_file_descriptor] = ACTIONS(191),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPEH] = ACTIONS(197),
    [anon_sym_PIPET] = ACTIONS(197),
    [anon_sym_AT_AT] = ACTIONS(199),
    [anon_sym_AT_ATdbt] = ACTIONS(199),
    [anon_sym_AT_ATdbta] = ACTIONS(197),
    [anon_sym_AT_ATdbtb] = ACTIONS(197),
    [anon_sym_AT_ATdbts] = ACTIONS(197),
    [anon_sym_AT_AT_DOT] = ACTIONS(197),
    [anon_sym_AT_AT_EQ] = ACTIONS(197),
    [anon_sym_AT_ATk] = ACTIONS(197),
    [anon_sym_AT_ATt] = ACTIONS(197),
    [anon_sym_AT_ATb] = ACTIONS(197),
    [anon_sym_AT_ATi] = ACTIONS(199),
    [anon_sym_AT_ATiS] = ACTIONS(197),
    [anon_sym_AT_ATf] = ACTIONS(197),
    [anon_sym_AT_ATs_COLON] = ACTIONS(197),
    [anon_sym_AT_ATc_COLON] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
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
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_PIPE_DOT] = ACTIONS(197),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(197),
    [sym_html_redirect_operator] = ACTIONS(199),
    [sym_html_append_operator] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_PIPEH] = ACTIONS(168),
    [anon_sym_PIPET] = ACTIONS(168),
    [anon_sym_AT_AT] = ACTIONS(170),
    [anon_sym_AT_ATdbt] = ACTIONS(170),
    [anon_sym_AT_ATdbta] = ACTIONS(168),
    [anon_sym_AT_ATdbtb] = ACTIONS(168),
    [anon_sym_AT_ATdbts] = ACTIONS(168),
    [anon_sym_AT_AT_DOT] = ACTIONS(168),
    [anon_sym_AT_AT_EQ] = ACTIONS(168),
    [anon_sym_AT_ATk] = ACTIONS(168),
    [anon_sym_AT_ATt] = ACTIONS(168),
    [anon_sym_AT_ATb] = ACTIONS(168),
    [anon_sym_AT_ATi] = ACTIONS(170),
    [anon_sym_AT_ATiS] = ACTIONS(168),
    [anon_sym_AT_ATf] = ACTIONS(168),
    [anon_sym_AT_ATs_COLON] = ACTIONS(168),
    [anon_sym_AT_ATc_COLON] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_AT_BANG] = ACTIONS(168),
    [anon_sym_AT_LPAREN] = ACTIONS(168),
    [anon_sym_ATa_COLON] = ACTIONS(168),
    [anon_sym_ATb_COLON] = ACTIONS(168),
    [anon_sym_ATB_COLON] = ACTIONS(168),
    [anon_sym_ATe_COLON] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_ATF_COLON] = ACTIONS(168),
    [anon_sym_ATi_COLON] = ACTIONS(168),
    [anon_sym_ATk_COLON] = ACTIONS(168),
    [anon_sym_ATo_COLON] = ACTIONS(168),
    [anon_sym_ATr_COLON] = ACTIONS(168),
    [anon_sym_ATf_COLON] = ACTIONS(168),
    [anon_sym_ATs_COLON] = ACTIONS(168),
    [anon_sym_ATx_COLON] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_PIPE_DOT] = ACTIONS(168),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_GT] = ACTIONS(168),
    [sym_html_redirect_operator] = ACTIONS(170),
    [sym_html_append_operator] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_file_descriptor] = ACTIONS(168),
  },
  [55] = {
    [sym__redirect_operator] = STATE(155),
    [sym_fdn_redirect_operator] = STATE(155),
    [sym_fdn_append_operator] = STATE(155),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(207),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_html_redirect_operator] = ACTIONS(279),
    [sym_html_append_operator] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_CR] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(283),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_TILDE] = ACTIONS(285),
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
    [anon_sym_COLON] = ACTIONS(289),
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
    [anon_sym_PIPE_DOT] = ACTIONS(285),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(287),
    [anon_sym_GT_GT] = ACTIONS(285),
    [sym_html_redirect_operator] = ACTIONS(287),
    [sym_html_append_operator] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(285),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(285),
    [anon_sym_CR] = ACTIONS(285),
    [anon_sym_SEMI] = ACTIONS(285),
    [sym_file_descriptor] = ACTIONS(285),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
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
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_PIPE_DOT] = ACTIONS(291),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(291),
    [sym_html_redirect_operator] = ACTIONS(293),
    [sym_html_append_operator] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
    [sym_file_descriptor] = ACTIONS(291),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
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
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_PIPE_DOT] = ACTIONS(295),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(295),
    [sym_html_redirect_operator] = ACTIONS(297),
    [sym_html_append_operator] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(295),
    [anon_sym_CR] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
    [sym_file_descriptor] = ACTIONS(295),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
    [anon_sym_PIPEH] = ACTIONS(43),
    [anon_sym_PIPET] = ACTIONS(43),
    [anon_sym_AT_AT] = ACTIONS(45),
    [anon_sym_AT_ATdbt] = ACTIONS(45),
    [anon_sym_AT_ATdbta] = ACTIONS(43),
    [anon_sym_AT_ATdbtb] = ACTIONS(43),
    [anon_sym_AT_ATdbts] = ACTIONS(43),
    [anon_sym_AT_AT_DOT] = ACTIONS(43),
    [anon_sym_AT_AT_EQ] = ACTIONS(43),
    [anon_sym_AT_ATk] = ACTIONS(43),
    [anon_sym_AT_ATt] = ACTIONS(43),
    [anon_sym_AT_ATb] = ACTIONS(43),
    [anon_sym_AT_ATi] = ACTIONS(45),
    [anon_sym_AT_ATiS] = ACTIONS(43),
    [anon_sym_AT_ATf] = ACTIONS(43),
    [anon_sym_AT_ATs_COLON] = ACTIONS(43),
    [anon_sym_AT_ATc_COLON] = ACTIONS(43),
    [anon_sym_AT] = ACTIONS(45),
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
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_CR] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_file_descriptor] = ACTIONS(43),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(299),
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
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_PIPE_DOT] = ACTIONS(299),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(299),
    [sym_html_redirect_operator] = ACTIONS(301),
    [sym_html_append_operator] = ACTIONS(299),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_CR] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
    [sym_file_descriptor] = ACTIONS(299),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
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
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_PIPE_DOT] = ACTIONS(303),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(303),
    [sym_html_redirect_operator] = ACTIONS(305),
    [sym_html_append_operator] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(303),
    [anon_sym_CR] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
    [sym_file_descriptor] = ACTIONS(303),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(150),
    [anon_sym_AT_ATdbt] = ACTIONS(150),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(150),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(150),
    [sym_html_append_operator] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_file_descriptor] = ACTIONS(148),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
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
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_PIPE_DOT] = ACTIONS(307),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(307),
    [sym_html_redirect_operator] = ACTIONS(309),
    [sym_html_append_operator] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_CR] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
    [sym_file_descriptor] = ACTIONS(307),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
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
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_PIPE_DOT] = ACTIONS(311),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(311),
    [sym_html_redirect_operator] = ACTIONS(313),
    [sym_html_append_operator] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_CR] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
    [sym_file_descriptor] = ACTIONS(311),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
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
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_PIPE_DOT] = ACTIONS(315),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(315),
    [sym_html_redirect_operator] = ACTIONS(317),
    [sym_html_append_operator] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_CR] = ACTIONS(315),
    [anon_sym_SEMI] = ACTIONS(315),
    [sym_file_descriptor] = ACTIONS(315),
  },
  [66] = {
    [sym_system_arg] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_PIPEH] = ACTIONS(321),
    [anon_sym_PIPET] = ACTIONS(321),
    [anon_sym_AT_AT] = ACTIONS(321),
    [anon_sym_AT_ATdbt] = ACTIONS(321),
    [anon_sym_AT_ATdbta] = ACTIONS(321),
    [anon_sym_AT_ATdbtb] = ACTIONS(321),
    [anon_sym_AT_ATdbts] = ACTIONS(321),
    [anon_sym_AT_AT_DOT] = ACTIONS(321),
    [anon_sym_AT_AT_EQ] = ACTIONS(321),
    [anon_sym_AT_ATk] = ACTIONS(321),
    [anon_sym_AT_ATt] = ACTIONS(321),
    [anon_sym_AT_ATb] = ACTIONS(321),
    [anon_sym_AT_ATi] = ACTIONS(321),
    [anon_sym_AT_ATiS] = ACTIONS(321),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(321),
    [anon_sym_AT_ATc_COLON] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_AT_BANG] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(321),
    [anon_sym_ATa_COLON] = ACTIONS(321),
    [anon_sym_ATb_COLON] = ACTIONS(321),
    [anon_sym_ATB_COLON] = ACTIONS(321),
    [anon_sym_ATe_COLON] = ACTIONS(321),
    [anon_sym_ATF_COLON] = ACTIONS(321),
    [anon_sym_ATi_COLON] = ACTIONS(321),
    [anon_sym_ATk_COLON] = ACTIONS(321),
    [anon_sym_ATo_COLON] = ACTIONS(321),
    [anon_sym_ATr_COLON] = ACTIONS(321),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(321),
    [anon_sym_ATx_COLON] = ACTIONS(321),
    [anon_sym_PIPE_DOT] = ACTIONS(321),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [sym_html_redirect_operator] = ACTIONS(321),
    [sym_html_append_operator] = ACTIONS(321),
    [sym__any_command] = ACTIONS(323),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_CR] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym_file_descriptor] = ACTIONS(319),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPEH] = ACTIONS(325),
    [anon_sym_PIPET] = ACTIONS(325),
    [anon_sym_AT_AT] = ACTIONS(327),
    [anon_sym_AT_ATdbt] = ACTIONS(327),
    [anon_sym_AT_ATdbta] = ACTIONS(325),
    [anon_sym_AT_ATdbtb] = ACTIONS(325),
    [anon_sym_AT_ATdbts] = ACTIONS(325),
    [anon_sym_AT_AT_DOT] = ACTIONS(325),
    [anon_sym_AT_AT_EQ] = ACTIONS(325),
    [anon_sym_AT_ATk] = ACTIONS(325),
    [anon_sym_AT_ATt] = ACTIONS(325),
    [anon_sym_AT_ATb] = ACTIONS(325),
    [anon_sym_AT_ATi] = ACTIONS(327),
    [anon_sym_AT_ATiS] = ACTIONS(325),
    [anon_sym_AT_ATf] = ACTIONS(325),
    [anon_sym_AT_ATs_COLON] = ACTIONS(325),
    [anon_sym_AT_ATc_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(325),
    [anon_sym_AT_LPAREN] = ACTIONS(325),
    [anon_sym_ATa_COLON] = ACTIONS(325),
    [anon_sym_ATb_COLON] = ACTIONS(325),
    [anon_sym_ATB_COLON] = ACTIONS(325),
    [anon_sym_ATe_COLON] = ACTIONS(325),
    [anon_sym_ATF_COLON] = ACTIONS(325),
    [anon_sym_ATi_COLON] = ACTIONS(325),
    [anon_sym_ATk_COLON] = ACTIONS(325),
    [anon_sym_ATo_COLON] = ACTIONS(325),
    [anon_sym_ATr_COLON] = ACTIONS(325),
    [anon_sym_ATf_COLON] = ACTIONS(325),
    [anon_sym_ATs_COLON] = ACTIONS(325),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(325),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(325),
    [sym_html_redirect_operator] = ACTIONS(327),
    [sym_html_append_operator] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
    [sym_file_descriptor] = ACTIONS(325),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPEH] = ACTIONS(329),
    [anon_sym_PIPET] = ACTIONS(329),
    [anon_sym_AT_AT] = ACTIONS(331),
    [anon_sym_AT_ATdbt] = ACTIONS(331),
    [anon_sym_AT_ATdbta] = ACTIONS(329),
    [anon_sym_AT_ATdbtb] = ACTIONS(329),
    [anon_sym_AT_ATdbts] = ACTIONS(329),
    [anon_sym_AT_AT_DOT] = ACTIONS(329),
    [anon_sym_AT_AT_EQ] = ACTIONS(329),
    [anon_sym_AT_ATk] = ACTIONS(329),
    [anon_sym_AT_ATt] = ACTIONS(329),
    [anon_sym_AT_ATb] = ACTIONS(329),
    [anon_sym_AT_ATi] = ACTIONS(331),
    [anon_sym_AT_ATiS] = ACTIONS(329),
    [anon_sym_AT_ATf] = ACTIONS(329),
    [anon_sym_AT_ATs_COLON] = ACTIONS(329),
    [anon_sym_AT_ATc_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(329),
    [anon_sym_ATa_COLON] = ACTIONS(329),
    [anon_sym_ATb_COLON] = ACTIONS(329),
    [anon_sym_ATB_COLON] = ACTIONS(329),
    [anon_sym_ATe_COLON] = ACTIONS(329),
    [anon_sym_ATF_COLON] = ACTIONS(329),
    [anon_sym_ATi_COLON] = ACTIONS(329),
    [anon_sym_ATk_COLON] = ACTIONS(329),
    [anon_sym_ATo_COLON] = ACTIONS(329),
    [anon_sym_ATr_COLON] = ACTIONS(329),
    [anon_sym_ATf_COLON] = ACTIONS(329),
    [anon_sym_ATs_COLON] = ACTIONS(329),
    [anon_sym_ATx_COLON] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PIPE_DOT] = ACTIONS(329),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_html_redirect_operator] = ACTIONS(331),
    [sym_html_append_operator] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_CR] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(329),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(335),
    [anon_sym_PIPEH] = ACTIONS(333),
    [anon_sym_PIPET] = ACTIONS(333),
    [anon_sym_AT_AT] = ACTIONS(335),
    [anon_sym_AT_ATdbt] = ACTIONS(335),
    [anon_sym_AT_ATdbta] = ACTIONS(333),
    [anon_sym_AT_ATdbtb] = ACTIONS(333),
    [anon_sym_AT_ATdbts] = ACTIONS(333),
    [anon_sym_AT_AT_DOT] = ACTIONS(333),
    [anon_sym_AT_AT_EQ] = ACTIONS(333),
    [anon_sym_AT_ATk] = ACTIONS(333),
    [anon_sym_AT_ATt] = ACTIONS(333),
    [anon_sym_AT_ATb] = ACTIONS(333),
    [anon_sym_AT_ATi] = ACTIONS(335),
    [anon_sym_AT_ATiS] = ACTIONS(333),
    [anon_sym_AT_ATf] = ACTIONS(333),
    [anon_sym_AT_ATs_COLON] = ACTIONS(333),
    [anon_sym_AT_ATc_COLON] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(335),
    [anon_sym_AT_BANG] = ACTIONS(333),
    [anon_sym_AT_LPAREN] = ACTIONS(333),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(333),
    [anon_sym_ATB_COLON] = ACTIONS(333),
    [anon_sym_ATe_COLON] = ACTIONS(333),
    [anon_sym_ATF_COLON] = ACTIONS(333),
    [anon_sym_ATi_COLON] = ACTIONS(333),
    [anon_sym_ATk_COLON] = ACTIONS(333),
    [anon_sym_ATo_COLON] = ACTIONS(333),
    [anon_sym_ATr_COLON] = ACTIONS(333),
    [anon_sym_ATf_COLON] = ACTIONS(333),
    [anon_sym_ATs_COLON] = ACTIONS(333),
    [anon_sym_ATx_COLON] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_PIPE_DOT] = ACTIONS(333),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(333),
    [sym_html_redirect_operator] = ACTIONS(335),
    [sym_html_append_operator] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_CR] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
    [sym_file_descriptor] = ACTIONS(333),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(337),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPEH] = ACTIONS(337),
    [anon_sym_PIPET] = ACTIONS(337),
    [anon_sym_AT_AT] = ACTIONS(339),
    [anon_sym_AT_ATdbt] = ACTIONS(339),
    [anon_sym_AT_ATdbta] = ACTIONS(337),
    [anon_sym_AT_ATdbtb] = ACTIONS(337),
    [anon_sym_AT_ATdbts] = ACTIONS(337),
    [anon_sym_AT_AT_DOT] = ACTIONS(337),
    [anon_sym_AT_AT_EQ] = ACTIONS(337),
    [anon_sym_AT_ATk] = ACTIONS(337),
    [anon_sym_AT_ATt] = ACTIONS(337),
    [anon_sym_AT_ATb] = ACTIONS(337),
    [anon_sym_AT_ATi] = ACTIONS(339),
    [anon_sym_AT_ATiS] = ACTIONS(337),
    [anon_sym_AT_ATf] = ACTIONS(337),
    [anon_sym_AT_ATs_COLON] = ACTIONS(337),
    [anon_sym_AT_ATc_COLON] = ACTIONS(337),
    [anon_sym_AT] = ACTIONS(339),
    [anon_sym_AT_BANG] = ACTIONS(337),
    [anon_sym_AT_LPAREN] = ACTIONS(337),
    [anon_sym_ATa_COLON] = ACTIONS(337),
    [anon_sym_ATb_COLON] = ACTIONS(337),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(337),
    [anon_sym_ATF_COLON] = ACTIONS(337),
    [anon_sym_ATi_COLON] = ACTIONS(337),
    [anon_sym_ATk_COLON] = ACTIONS(337),
    [anon_sym_ATo_COLON] = ACTIONS(337),
    [anon_sym_ATr_COLON] = ACTIONS(337),
    [anon_sym_ATf_COLON] = ACTIONS(337),
    [anon_sym_ATs_COLON] = ACTIONS(337),
    [anon_sym_ATx_COLON] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_PIPE_DOT] = ACTIONS(337),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(337),
    [sym_html_redirect_operator] = ACTIONS(339),
    [sym_html_append_operator] = ACTIONS(337),
    [anon_sym_BQUOTE] = ACTIONS(337),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(337),
    [anon_sym_CR] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [sym_file_descriptor] = ACTIONS(337),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPEH] = ACTIONS(343),
    [anon_sym_PIPET] = ACTIONS(343),
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
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_PIPE_DOT] = ACTIONS(343),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [sym_html_redirect_operator] = ACTIONS(343),
    [sym_html_append_operator] = ACTIONS(343),
    [sym_macro_content] = ACTIONS(347),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_CR] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [sym_file_descriptor] = ACTIONS(341),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(349),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPEH] = ACTIONS(349),
    [anon_sym_PIPET] = ACTIONS(349),
    [anon_sym_AT_AT] = ACTIONS(351),
    [anon_sym_AT_ATdbt] = ACTIONS(351),
    [anon_sym_AT_ATdbta] = ACTIONS(349),
    [anon_sym_AT_ATdbtb] = ACTIONS(349),
    [anon_sym_AT_ATdbts] = ACTIONS(349),
    [anon_sym_AT_AT_DOT] = ACTIONS(349),
    [anon_sym_AT_AT_EQ] = ACTIONS(349),
    [anon_sym_AT_ATk] = ACTIONS(349),
    [anon_sym_AT_ATt] = ACTIONS(349),
    [anon_sym_AT_ATb] = ACTIONS(349),
    [anon_sym_AT_ATi] = ACTIONS(351),
    [anon_sym_AT_ATiS] = ACTIONS(349),
    [anon_sym_AT_ATf] = ACTIONS(349),
    [anon_sym_AT_ATs_COLON] = ACTIONS(349),
    [anon_sym_AT_ATc_COLON] = ACTIONS(349),
    [anon_sym_AT] = ACTIONS(351),
    [anon_sym_AT_BANG] = ACTIONS(349),
    [anon_sym_AT_LPAREN] = ACTIONS(349),
    [anon_sym_ATa_COLON] = ACTIONS(349),
    [anon_sym_ATb_COLON] = ACTIONS(349),
    [anon_sym_ATB_COLON] = ACTIONS(349),
    [anon_sym_ATe_COLON] = ACTIONS(349),
    [anon_sym_ATF_COLON] = ACTIONS(349),
    [anon_sym_ATi_COLON] = ACTIONS(349),
    [anon_sym_ATk_COLON] = ACTIONS(349),
    [anon_sym_ATo_COLON] = ACTIONS(349),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(349),
    [anon_sym_ATs_COLON] = ACTIONS(349),
    [anon_sym_ATx_COLON] = ACTIONS(349),
    [anon_sym_RPAREN] = ACTIONS(349),
    [anon_sym_PIPE_DOT] = ACTIONS(349),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(349),
    [sym_html_redirect_operator] = ACTIONS(351),
    [sym_html_append_operator] = ACTIONS(349),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(349),
    [anon_sym_CR] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(349),
    [sym_file_descriptor] = ACTIONS(349),
  },
  [73] = {
    [sym__eq_sep_args] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_PIPEH] = ACTIONS(355),
    [anon_sym_PIPET] = ACTIONS(355),
    [anon_sym_AT_AT] = ACTIONS(355),
    [anon_sym_AT_ATdbt] = ACTIONS(355),
    [anon_sym_AT_ATdbta] = ACTIONS(355),
    [anon_sym_AT_ATdbtb] = ACTIONS(355),
    [anon_sym_AT_ATdbts] = ACTIONS(355),
    [anon_sym_AT_AT_DOT] = ACTIONS(355),
    [anon_sym_AT_AT_EQ] = ACTIONS(355),
    [anon_sym_AT_ATk] = ACTIONS(355),
    [anon_sym_AT_ATt] = ACTIONS(355),
    [anon_sym_AT_ATb] = ACTIONS(355),
    [anon_sym_AT_ATi] = ACTIONS(355),
    [anon_sym_AT_ATiS] = ACTIONS(355),
    [anon_sym_AT_ATf] = ACTIONS(355),
    [anon_sym_AT_ATs_COLON] = ACTIONS(355),
    [anon_sym_AT_ATc_COLON] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
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
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_eq_sep_key] = ACTIONS(357),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(359),
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
    [anon_sym_PIPE_DOT] = ACTIONS(359),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(359),
    [sym_html_redirect_operator] = ACTIONS(361),
    [sym_html_append_operator] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(359),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_CR] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(359),
    [sym_file_descriptor] = ACTIONS(359),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_TILDE] = ACTIONS(363),
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
    [anon_sym_PIPE_DOT] = ACTIONS(363),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(363),
    [sym_html_redirect_operator] = ACTIONS(365),
    [sym_html_append_operator] = ACTIONS(363),
    [anon_sym_BQUOTE] = ACTIONS(363),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_CR] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
    [sym_file_descriptor] = ACTIONS(363),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_PIPEH] = ACTIONS(164),
    [anon_sym_PIPET] = ACTIONS(164),
    [anon_sym_AT_AT] = ACTIONS(166),
    [anon_sym_AT_ATdbt] = ACTIONS(166),
    [anon_sym_AT_ATdbta] = ACTIONS(164),
    [anon_sym_AT_ATdbtb] = ACTIONS(164),
    [anon_sym_AT_ATdbts] = ACTIONS(164),
    [anon_sym_AT_AT_DOT] = ACTIONS(164),
    [anon_sym_AT_AT_EQ] = ACTIONS(164),
    [anon_sym_AT_ATk] = ACTIONS(164),
    [anon_sym_AT_ATt] = ACTIONS(164),
    [anon_sym_AT_ATb] = ACTIONS(164),
    [anon_sym_AT_ATi] = ACTIONS(166),
    [anon_sym_AT_ATiS] = ACTIONS(164),
    [anon_sym_AT_ATf] = ACTIONS(164),
    [anon_sym_AT_ATs_COLON] = ACTIONS(164),
    [anon_sym_AT_ATc_COLON] = ACTIONS(164),
    [anon_sym_AT] = ACTIONS(166),
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
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(166),
    [sym_html_append_operator] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_file_descriptor] = ACTIONS(164),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_PIPEH] = ACTIONS(160),
    [anon_sym_PIPET] = ACTIONS(160),
    [anon_sym_AT_AT] = ACTIONS(162),
    [anon_sym_AT_ATdbt] = ACTIONS(162),
    [anon_sym_AT_ATdbta] = ACTIONS(160),
    [anon_sym_AT_ATdbtb] = ACTIONS(160),
    [anon_sym_AT_ATdbts] = ACTIONS(160),
    [anon_sym_AT_AT_DOT] = ACTIONS(160),
    [anon_sym_AT_AT_EQ] = ACTIONS(160),
    [anon_sym_AT_ATk] = ACTIONS(160),
    [anon_sym_AT_ATt] = ACTIONS(160),
    [anon_sym_AT_ATb] = ACTIONS(160),
    [anon_sym_AT_ATi] = ACTIONS(162),
    [anon_sym_AT_ATiS] = ACTIONS(160),
    [anon_sym_AT_ATf] = ACTIONS(160),
    [anon_sym_AT_ATs_COLON] = ACTIONS(160),
    [anon_sym_AT_ATc_COLON] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(160),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(160),
    [sym_html_redirect_operator] = ACTIONS(162),
    [sym_html_append_operator] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_file_descriptor] = ACTIONS(160),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(367),
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
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_PIPE_DOT] = ACTIONS(367),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(367),
    [sym_html_redirect_operator] = ACTIONS(369),
    [sym_html_append_operator] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(367),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(367),
    [anon_sym_CR] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
    [sym_file_descriptor] = ACTIONS(367),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_TILDE] = ACTIONS(371),
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
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_PIPE_DOT] = ACTIONS(371),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_GT_GT] = ACTIONS(371),
    [sym_html_redirect_operator] = ACTIONS(373),
    [sym_html_append_operator] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_CR] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
    [sym_file_descriptor] = ACTIONS(371),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_TILDE] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_PIPEH] = ACTIONS(144),
    [anon_sym_PIPET] = ACTIONS(144),
    [anon_sym_AT_AT] = ACTIONS(146),
    [anon_sym_AT_ATdbt] = ACTIONS(146),
    [anon_sym_AT_ATdbta] = ACTIONS(144),
    [anon_sym_AT_ATdbtb] = ACTIONS(144),
    [anon_sym_AT_ATdbts] = ACTIONS(144),
    [anon_sym_AT_AT_DOT] = ACTIONS(144),
    [anon_sym_AT_AT_EQ] = ACTIONS(144),
    [anon_sym_AT_ATk] = ACTIONS(144),
    [anon_sym_AT_ATt] = ACTIONS(144),
    [anon_sym_AT_ATb] = ACTIONS(144),
    [anon_sym_AT_ATi] = ACTIONS(146),
    [anon_sym_AT_ATiS] = ACTIONS(144),
    [anon_sym_AT_ATf] = ACTIONS(144),
    [anon_sym_AT_ATs_COLON] = ACTIONS(144),
    [anon_sym_AT_ATc_COLON] = ACTIONS(144),
    [anon_sym_AT] = ACTIONS(146),
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
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_GT_GT] = ACTIONS(144),
    [sym_html_redirect_operator] = ACTIONS(146),
    [sym_html_append_operator] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_file_descriptor] = ACTIONS(144),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_TILDE] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(154),
    [anon_sym_PIPEH] = ACTIONS(152),
    [anon_sym_PIPET] = ACTIONS(152),
    [anon_sym_AT_AT] = ACTIONS(154),
    [anon_sym_AT_ATdbt] = ACTIONS(154),
    [anon_sym_AT_ATdbta] = ACTIONS(152),
    [anon_sym_AT_ATdbtb] = ACTIONS(152),
    [anon_sym_AT_ATdbts] = ACTIONS(152),
    [anon_sym_AT_AT_DOT] = ACTIONS(152),
    [anon_sym_AT_AT_EQ] = ACTIONS(152),
    [anon_sym_AT_ATk] = ACTIONS(152),
    [anon_sym_AT_ATt] = ACTIONS(152),
    [anon_sym_AT_ATb] = ACTIONS(152),
    [anon_sym_AT_ATi] = ACTIONS(154),
    [anon_sym_AT_ATiS] = ACTIONS(152),
    [anon_sym_AT_ATf] = ACTIONS(152),
    [anon_sym_AT_ATs_COLON] = ACTIONS(152),
    [anon_sym_AT_ATc_COLON] = ACTIONS(152),
    [anon_sym_AT] = ACTIONS(154),
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
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(154),
    [sym_html_append_operator] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_file_descriptor] = ACTIONS(152),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPEH] = ACTIONS(197),
    [anon_sym_PIPET] = ACTIONS(197),
    [anon_sym_AT_AT] = ACTIONS(199),
    [anon_sym_AT_ATdbt] = ACTIONS(199),
    [anon_sym_AT_ATdbta] = ACTIONS(197),
    [anon_sym_AT_ATdbtb] = ACTIONS(197),
    [anon_sym_AT_ATdbts] = ACTIONS(197),
    [anon_sym_AT_AT_DOT] = ACTIONS(197),
    [anon_sym_AT_AT_EQ] = ACTIONS(197),
    [anon_sym_AT_ATk] = ACTIONS(197),
    [anon_sym_AT_ATt] = ACTIONS(197),
    [anon_sym_AT_ATb] = ACTIONS(197),
    [anon_sym_AT_ATi] = ACTIONS(199),
    [anon_sym_AT_ATiS] = ACTIONS(197),
    [anon_sym_AT_ATf] = ACTIONS(197),
    [anon_sym_AT_ATs_COLON] = ACTIONS(197),
    [anon_sym_AT_ATc_COLON] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
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
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_PIPE_DOT] = ACTIONS(197),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(197),
    [sym_html_redirect_operator] = ACTIONS(199),
    [sym_html_append_operator] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_PIPE] = ACTIONS(379),
    [anon_sym_PIPEH] = ACTIONS(377),
    [anon_sym_PIPET] = ACTIONS(377),
    [anon_sym_AT_AT] = ACTIONS(379),
    [anon_sym_AT_ATdbt] = ACTIONS(379),
    [anon_sym_AT_ATdbta] = ACTIONS(377),
    [anon_sym_AT_ATdbtb] = ACTIONS(377),
    [anon_sym_AT_ATdbts] = ACTIONS(377),
    [anon_sym_AT_AT_DOT] = ACTIONS(377),
    [anon_sym_AT_AT_EQ] = ACTIONS(377),
    [anon_sym_AT_ATk] = ACTIONS(377),
    [anon_sym_AT_ATt] = ACTIONS(377),
    [anon_sym_AT_ATb] = ACTIONS(377),
    [anon_sym_AT_ATi] = ACTIONS(379),
    [anon_sym_AT_ATiS] = ACTIONS(377),
    [anon_sym_AT_ATf] = ACTIONS(377),
    [anon_sym_AT_ATs_COLON] = ACTIONS(377),
    [anon_sym_AT_ATc_COLON] = ACTIONS(377),
    [anon_sym_AT] = ACTIONS(379),
    [anon_sym_AT_BANG] = ACTIONS(377),
    [anon_sym_AT_LPAREN] = ACTIONS(377),
    [anon_sym_ATa_COLON] = ACTIONS(377),
    [anon_sym_ATb_COLON] = ACTIONS(377),
    [anon_sym_ATB_COLON] = ACTIONS(377),
    [anon_sym_ATe_COLON] = ACTIONS(377),
    [anon_sym_ATF_COLON] = ACTIONS(377),
    [anon_sym_ATi_COLON] = ACTIONS(377),
    [anon_sym_ATk_COLON] = ACTIONS(377),
    [anon_sym_ATo_COLON] = ACTIONS(377),
    [anon_sym_ATr_COLON] = ACTIONS(377),
    [anon_sym_ATf_COLON] = ACTIONS(377),
    [anon_sym_ATs_COLON] = ACTIONS(377),
    [anon_sym_ATx_COLON] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_PIPE_DOT] = ACTIONS(377),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(379),
    [anon_sym_GT_GT] = ACTIONS(377),
    [sym_html_redirect_operator] = ACTIONS(379),
    [sym_html_append_operator] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(377),
    [anon_sym_CR] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [sym_file_descriptor] = ACTIONS(377),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_PIPE] = ACTIONS(383),
    [anon_sym_PIPEH] = ACTIONS(381),
    [anon_sym_PIPET] = ACTIONS(381),
    [anon_sym_AT_AT] = ACTIONS(383),
    [anon_sym_AT_ATdbt] = ACTIONS(383),
    [anon_sym_AT_ATdbta] = ACTIONS(381),
    [anon_sym_AT_ATdbtb] = ACTIONS(381),
    [anon_sym_AT_ATdbts] = ACTIONS(381),
    [anon_sym_AT_AT_DOT] = ACTIONS(381),
    [anon_sym_AT_AT_EQ] = ACTIONS(381),
    [anon_sym_AT_ATk] = ACTIONS(381),
    [anon_sym_AT_ATt] = ACTIONS(381),
    [anon_sym_AT_ATb] = ACTIONS(381),
    [anon_sym_AT_ATi] = ACTIONS(383),
    [anon_sym_AT_ATiS] = ACTIONS(381),
    [anon_sym_AT_ATf] = ACTIONS(381),
    [anon_sym_AT_ATs_COLON] = ACTIONS(381),
    [anon_sym_AT_ATc_COLON] = ACTIONS(381),
    [anon_sym_AT] = ACTIONS(383),
    [anon_sym_AT_BANG] = ACTIONS(381),
    [anon_sym_AT_LPAREN] = ACTIONS(381),
    [anon_sym_ATa_COLON] = ACTIONS(381),
    [anon_sym_ATb_COLON] = ACTIONS(381),
    [anon_sym_ATB_COLON] = ACTIONS(381),
    [anon_sym_ATe_COLON] = ACTIONS(381),
    [anon_sym_ATF_COLON] = ACTIONS(381),
    [anon_sym_ATi_COLON] = ACTIONS(381),
    [anon_sym_ATk_COLON] = ACTIONS(381),
    [anon_sym_ATo_COLON] = ACTIONS(381),
    [anon_sym_ATr_COLON] = ACTIONS(381),
    [anon_sym_ATf_COLON] = ACTIONS(381),
    [anon_sym_ATs_COLON] = ACTIONS(381),
    [anon_sym_ATx_COLON] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_PIPE_DOT] = ACTIONS(381),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(383),
    [anon_sym_GT_GT] = ACTIONS(381),
    [sym_html_redirect_operator] = ACTIONS(383),
    [sym_html_append_operator] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(381),
    [anon_sym_CR] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(381),
    [sym_file_descriptor] = ACTIONS(381),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(385),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(385),
    [anon_sym_PIPET] = ACTIONS(385),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(385),
    [anon_sym_AT_ATdbtb] = ACTIONS(385),
    [anon_sym_AT_ATdbts] = ACTIONS(385),
    [anon_sym_AT_AT_DOT] = ACTIONS(385),
    [anon_sym_AT_AT_EQ] = ACTIONS(385),
    [anon_sym_AT_ATk] = ACTIONS(385),
    [anon_sym_AT_ATt] = ACTIONS(385),
    [anon_sym_AT_ATb] = ACTIONS(385),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(385),
    [anon_sym_AT_ATf] = ACTIONS(385),
    [anon_sym_AT_ATs_COLON] = ACTIONS(385),
    [anon_sym_AT_ATc_COLON] = ACTIONS(385),
    [anon_sym_AT] = ACTIONS(387),
    [anon_sym_AT_BANG] = ACTIONS(385),
    [anon_sym_AT_LPAREN] = ACTIONS(385),
    [anon_sym_ATa_COLON] = ACTIONS(385),
    [anon_sym_ATb_COLON] = ACTIONS(385),
    [anon_sym_ATB_COLON] = ACTIONS(385),
    [anon_sym_ATe_COLON] = ACTIONS(385),
    [anon_sym_ATF_COLON] = ACTIONS(385),
    [anon_sym_ATi_COLON] = ACTIONS(385),
    [anon_sym_ATk_COLON] = ACTIONS(385),
    [anon_sym_ATo_COLON] = ACTIONS(385),
    [anon_sym_ATr_COLON] = ACTIONS(385),
    [anon_sym_ATf_COLON] = ACTIONS(385),
    [anon_sym_ATs_COLON] = ACTIONS(385),
    [anon_sym_ATx_COLON] = ACTIONS(385),
    [anon_sym_RPAREN] = ACTIONS(385),
    [anon_sym_PIPE_DOT] = ACTIONS(385),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(385),
    [sym_html_redirect_operator] = ACTIONS(387),
    [sym_html_append_operator] = ACTIONS(385),
    [anon_sym_BQUOTE] = ACTIONS(385),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(385),
    [anon_sym_CR] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(385),
    [sym_file_descriptor] = ACTIONS(385),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_PIPE] = ACTIONS(391),
    [anon_sym_PIPEH] = ACTIONS(389),
    [anon_sym_PIPET] = ACTIONS(389),
    [anon_sym_AT_AT] = ACTIONS(391),
    [anon_sym_AT_ATdbt] = ACTIONS(391),
    [anon_sym_AT_ATdbta] = ACTIONS(389),
    [anon_sym_AT_ATdbtb] = ACTIONS(389),
    [anon_sym_AT_ATdbts] = ACTIONS(389),
    [anon_sym_AT_AT_DOT] = ACTIONS(389),
    [anon_sym_AT_AT_EQ] = ACTIONS(389),
    [anon_sym_AT_ATk] = ACTIONS(389),
    [anon_sym_AT_ATt] = ACTIONS(389),
    [anon_sym_AT_ATb] = ACTIONS(389),
    [anon_sym_AT_ATi] = ACTIONS(391),
    [anon_sym_AT_ATiS] = ACTIONS(389),
    [anon_sym_AT_ATf] = ACTIONS(389),
    [anon_sym_AT_ATs_COLON] = ACTIONS(389),
    [anon_sym_AT_ATc_COLON] = ACTIONS(389),
    [anon_sym_AT] = ACTIONS(391),
    [anon_sym_AT_BANG] = ACTIONS(389),
    [anon_sym_AT_LPAREN] = ACTIONS(389),
    [anon_sym_ATa_COLON] = ACTIONS(389),
    [anon_sym_ATb_COLON] = ACTIONS(389),
    [anon_sym_ATB_COLON] = ACTIONS(389),
    [anon_sym_ATe_COLON] = ACTIONS(389),
    [anon_sym_ATF_COLON] = ACTIONS(389),
    [anon_sym_ATi_COLON] = ACTIONS(389),
    [anon_sym_ATk_COLON] = ACTIONS(389),
    [anon_sym_ATo_COLON] = ACTIONS(389),
    [anon_sym_ATr_COLON] = ACTIONS(389),
    [anon_sym_ATf_COLON] = ACTIONS(389),
    [anon_sym_ATs_COLON] = ACTIONS(389),
    [anon_sym_ATx_COLON] = ACTIONS(389),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_PIPE_DOT] = ACTIONS(389),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_GT_GT] = ACTIONS(389),
    [sym_html_redirect_operator] = ACTIONS(391),
    [sym_html_append_operator] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(389),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(389),
    [anon_sym_CR] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(389),
    [sym_file_descriptor] = ACTIONS(389),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_PIPEH] = ACTIONS(156),
    [anon_sym_PIPET] = ACTIONS(156),
    [anon_sym_AT_AT] = ACTIONS(158),
    [anon_sym_AT_ATdbt] = ACTIONS(158),
    [anon_sym_AT_ATdbta] = ACTIONS(156),
    [anon_sym_AT_ATdbtb] = ACTIONS(156),
    [anon_sym_AT_ATdbts] = ACTIONS(156),
    [anon_sym_AT_AT_DOT] = ACTIONS(156),
    [anon_sym_AT_AT_EQ] = ACTIONS(156),
    [anon_sym_AT_ATk] = ACTIONS(156),
    [anon_sym_AT_ATt] = ACTIONS(156),
    [anon_sym_AT_ATb] = ACTIONS(156),
    [anon_sym_AT_ATi] = ACTIONS(158),
    [anon_sym_AT_ATiS] = ACTIONS(156),
    [anon_sym_AT_ATf] = ACTIONS(156),
    [anon_sym_AT_ATs_COLON] = ACTIONS(156),
    [anon_sym_AT_ATc_COLON] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(158),
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
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_TILDE] = ACTIONS(393),
    [anon_sym_PIPE] = ACTIONS(395),
    [anon_sym_PIPEH] = ACTIONS(393),
    [anon_sym_PIPET] = ACTIONS(393),
    [anon_sym_AT_AT] = ACTIONS(395),
    [anon_sym_AT_ATdbt] = ACTIONS(395),
    [anon_sym_AT_ATdbta] = ACTIONS(393),
    [anon_sym_AT_ATdbtb] = ACTIONS(393),
    [anon_sym_AT_ATdbts] = ACTIONS(393),
    [anon_sym_AT_AT_DOT] = ACTIONS(393),
    [anon_sym_AT_AT_EQ] = ACTIONS(393),
    [anon_sym_AT_ATk] = ACTIONS(393),
    [anon_sym_AT_ATt] = ACTIONS(393),
    [anon_sym_AT_ATb] = ACTIONS(393),
    [anon_sym_AT_ATi] = ACTIONS(395),
    [anon_sym_AT_ATiS] = ACTIONS(393),
    [anon_sym_AT_ATf] = ACTIONS(393),
    [anon_sym_AT_ATs_COLON] = ACTIONS(393),
    [anon_sym_AT_ATc_COLON] = ACTIONS(393),
    [anon_sym_AT] = ACTIONS(395),
    [anon_sym_AT_BANG] = ACTIONS(393),
    [anon_sym_AT_LPAREN] = ACTIONS(393),
    [anon_sym_ATa_COLON] = ACTIONS(393),
    [anon_sym_ATb_COLON] = ACTIONS(393),
    [anon_sym_ATB_COLON] = ACTIONS(393),
    [anon_sym_ATe_COLON] = ACTIONS(393),
    [anon_sym_ATF_COLON] = ACTIONS(393),
    [anon_sym_ATi_COLON] = ACTIONS(393),
    [anon_sym_ATk_COLON] = ACTIONS(393),
    [anon_sym_ATo_COLON] = ACTIONS(393),
    [anon_sym_ATr_COLON] = ACTIONS(393),
    [anon_sym_ATf_COLON] = ACTIONS(393),
    [anon_sym_ATs_COLON] = ACTIONS(393),
    [anon_sym_ATx_COLON] = ACTIONS(393),
    [anon_sym_RPAREN] = ACTIONS(393),
    [anon_sym_PIPE_DOT] = ACTIONS(393),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_GT_GT] = ACTIONS(393),
    [sym_html_redirect_operator] = ACTIONS(395),
    [sym_html_append_operator] = ACTIONS(393),
    [anon_sym_BQUOTE] = ACTIONS(393),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(393),
    [anon_sym_CR] = ACTIONS(393),
    [anon_sym_SEMI] = ACTIONS(393),
    [sym_file_descriptor] = ACTIONS(393),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(397),
    [anon_sym_PIPE] = ACTIONS(399),
    [anon_sym_PIPEH] = ACTIONS(397),
    [anon_sym_PIPET] = ACTIONS(397),
    [anon_sym_AT_AT] = ACTIONS(399),
    [anon_sym_AT_ATdbt] = ACTIONS(399),
    [anon_sym_AT_ATdbta] = ACTIONS(397),
    [anon_sym_AT_ATdbtb] = ACTIONS(397),
    [anon_sym_AT_ATdbts] = ACTIONS(397),
    [anon_sym_AT_AT_DOT] = ACTIONS(397),
    [anon_sym_AT_AT_EQ] = ACTIONS(397),
    [anon_sym_AT_ATk] = ACTIONS(397),
    [anon_sym_AT_ATt] = ACTIONS(397),
    [anon_sym_AT_ATb] = ACTIONS(397),
    [anon_sym_AT_ATi] = ACTIONS(399),
    [anon_sym_AT_ATiS] = ACTIONS(397),
    [anon_sym_AT_ATf] = ACTIONS(397),
    [anon_sym_AT_ATs_COLON] = ACTIONS(397),
    [anon_sym_AT_ATc_COLON] = ACTIONS(397),
    [anon_sym_AT] = ACTIONS(399),
    [anon_sym_AT_BANG] = ACTIONS(397),
    [anon_sym_AT_LPAREN] = ACTIONS(397),
    [anon_sym_ATa_COLON] = ACTIONS(397),
    [anon_sym_ATb_COLON] = ACTIONS(397),
    [anon_sym_ATB_COLON] = ACTIONS(397),
    [anon_sym_ATe_COLON] = ACTIONS(397),
    [anon_sym_ATF_COLON] = ACTIONS(397),
    [anon_sym_ATi_COLON] = ACTIONS(397),
    [anon_sym_ATk_COLON] = ACTIONS(397),
    [anon_sym_ATo_COLON] = ACTIONS(397),
    [anon_sym_ATr_COLON] = ACTIONS(397),
    [anon_sym_ATf_COLON] = ACTIONS(397),
    [anon_sym_ATs_COLON] = ACTIONS(397),
    [anon_sym_ATx_COLON] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_PIPE_DOT] = ACTIONS(397),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(399),
    [anon_sym_GT_GT] = ACTIONS(397),
    [sym_html_redirect_operator] = ACTIONS(399),
    [sym_html_append_operator] = ACTIONS(397),
    [anon_sym_BQUOTE] = ACTIONS(397),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(397),
    [anon_sym_CR] = ACTIONS(397),
    [anon_sym_SEMI] = ACTIONS(397),
    [sym_file_descriptor] = ACTIONS(397),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(403),
    [anon_sym_PIPEH] = ACTIONS(401),
    [anon_sym_PIPET] = ACTIONS(401),
    [anon_sym_AT_AT] = ACTIONS(403),
    [anon_sym_AT_ATdbt] = ACTIONS(403),
    [anon_sym_AT_ATdbta] = ACTIONS(401),
    [anon_sym_AT_ATdbtb] = ACTIONS(401),
    [anon_sym_AT_ATdbts] = ACTIONS(401),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(401),
    [anon_sym_AT_ATk] = ACTIONS(401),
    [anon_sym_AT_ATt] = ACTIONS(401),
    [anon_sym_AT_ATb] = ACTIONS(401),
    [anon_sym_AT_ATi] = ACTIONS(403),
    [anon_sym_AT_ATiS] = ACTIONS(401),
    [anon_sym_AT_ATf] = ACTIONS(401),
    [anon_sym_AT_ATs_COLON] = ACTIONS(401),
    [anon_sym_AT_ATc_COLON] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(403),
    [anon_sym_AT_BANG] = ACTIONS(401),
    [anon_sym_AT_LPAREN] = ACTIONS(401),
    [anon_sym_ATa_COLON] = ACTIONS(401),
    [anon_sym_ATb_COLON] = ACTIONS(401),
    [anon_sym_ATB_COLON] = ACTIONS(401),
    [anon_sym_ATe_COLON] = ACTIONS(401),
    [anon_sym_ATF_COLON] = ACTIONS(401),
    [anon_sym_ATi_COLON] = ACTIONS(401),
    [anon_sym_ATk_COLON] = ACTIONS(401),
    [anon_sym_ATo_COLON] = ACTIONS(401),
    [anon_sym_ATr_COLON] = ACTIONS(401),
    [anon_sym_ATf_COLON] = ACTIONS(401),
    [anon_sym_ATs_COLON] = ACTIONS(401),
    [anon_sym_ATx_COLON] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_PIPE_DOT] = ACTIONS(401),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(403),
    [anon_sym_GT_GT] = ACTIONS(401),
    [sym_html_redirect_operator] = ACTIONS(403),
    [sym_html_append_operator] = ACTIONS(401),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(401),
    [anon_sym_CR] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym_file_descriptor] = ACTIONS(401),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_PIPE] = ACTIONS(407),
    [anon_sym_PIPEH] = ACTIONS(405),
    [anon_sym_PIPET] = ACTIONS(405),
    [anon_sym_AT_AT] = ACTIONS(407),
    [anon_sym_AT_ATdbt] = ACTIONS(407),
    [anon_sym_AT_ATdbta] = ACTIONS(405),
    [anon_sym_AT_ATdbtb] = ACTIONS(405),
    [anon_sym_AT_ATdbts] = ACTIONS(405),
    [anon_sym_AT_AT_DOT] = ACTIONS(405),
    [anon_sym_AT_AT_EQ] = ACTIONS(405),
    [anon_sym_AT_ATk] = ACTIONS(405),
    [anon_sym_AT_ATt] = ACTIONS(405),
    [anon_sym_AT_ATb] = ACTIONS(405),
    [anon_sym_AT_ATi] = ACTIONS(407),
    [anon_sym_AT_ATiS] = ACTIONS(405),
    [anon_sym_AT_ATf] = ACTIONS(405),
    [anon_sym_AT_ATs_COLON] = ACTIONS(405),
    [anon_sym_AT_ATc_COLON] = ACTIONS(405),
    [anon_sym_AT] = ACTIONS(407),
    [anon_sym_AT_BANG] = ACTIONS(405),
    [anon_sym_AT_LPAREN] = ACTIONS(405),
    [anon_sym_ATa_COLON] = ACTIONS(405),
    [anon_sym_ATb_COLON] = ACTIONS(405),
    [anon_sym_ATB_COLON] = ACTIONS(405),
    [anon_sym_ATe_COLON] = ACTIONS(405),
    [anon_sym_ATF_COLON] = ACTIONS(405),
    [anon_sym_ATi_COLON] = ACTIONS(405),
    [anon_sym_ATk_COLON] = ACTIONS(405),
    [anon_sym_ATo_COLON] = ACTIONS(405),
    [anon_sym_ATr_COLON] = ACTIONS(405),
    [anon_sym_ATf_COLON] = ACTIONS(405),
    [anon_sym_ATs_COLON] = ACTIONS(405),
    [anon_sym_ATx_COLON] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_PIPE_DOT] = ACTIONS(405),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(407),
    [anon_sym_GT_GT] = ACTIONS(405),
    [sym_html_redirect_operator] = ACTIONS(407),
    [sym_html_append_operator] = ACTIONS(405),
    [anon_sym_BQUOTE] = ACTIONS(405),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(405),
    [anon_sym_CR] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(405),
    [sym_file_descriptor] = ACTIONS(405),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_TILDE] = ACTIONS(409),
    [anon_sym_PIPE] = ACTIONS(411),
    [anon_sym_PIPEH] = ACTIONS(409),
    [anon_sym_PIPET] = ACTIONS(409),
    [anon_sym_AT_AT] = ACTIONS(411),
    [anon_sym_AT_ATdbt] = ACTIONS(411),
    [anon_sym_AT_ATdbta] = ACTIONS(409),
    [anon_sym_AT_ATdbtb] = ACTIONS(409),
    [anon_sym_AT_ATdbts] = ACTIONS(409),
    [anon_sym_AT_AT_DOT] = ACTIONS(409),
    [anon_sym_AT_AT_EQ] = ACTIONS(409),
    [anon_sym_AT_ATk] = ACTIONS(409),
    [anon_sym_AT_ATt] = ACTIONS(409),
    [anon_sym_AT_ATb] = ACTIONS(409),
    [anon_sym_AT_ATi] = ACTIONS(411),
    [anon_sym_AT_ATiS] = ACTIONS(409),
    [anon_sym_AT_ATf] = ACTIONS(409),
    [anon_sym_AT_ATs_COLON] = ACTIONS(409),
    [anon_sym_AT_ATc_COLON] = ACTIONS(409),
    [anon_sym_AT] = ACTIONS(411),
    [anon_sym_AT_BANG] = ACTIONS(409),
    [anon_sym_AT_LPAREN] = ACTIONS(409),
    [anon_sym_ATa_COLON] = ACTIONS(409),
    [anon_sym_ATb_COLON] = ACTIONS(409),
    [anon_sym_ATB_COLON] = ACTIONS(409),
    [anon_sym_ATe_COLON] = ACTIONS(409),
    [anon_sym_ATF_COLON] = ACTIONS(409),
    [anon_sym_ATi_COLON] = ACTIONS(409),
    [anon_sym_ATk_COLON] = ACTIONS(409),
    [anon_sym_ATo_COLON] = ACTIONS(409),
    [anon_sym_ATr_COLON] = ACTIONS(409),
    [anon_sym_ATf_COLON] = ACTIONS(409),
    [anon_sym_ATs_COLON] = ACTIONS(409),
    [anon_sym_ATx_COLON] = ACTIONS(409),
    [anon_sym_RPAREN] = ACTIONS(409),
    [anon_sym_PIPE_DOT] = ACTIONS(409),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(411),
    [anon_sym_GT_GT] = ACTIONS(409),
    [sym_html_redirect_operator] = ACTIONS(411),
    [sym_html_append_operator] = ACTIONS(409),
    [anon_sym_BQUOTE] = ACTIONS(409),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(409),
    [anon_sym_CR] = ACTIONS(409),
    [anon_sym_SEMI] = ACTIONS(409),
    [sym_file_descriptor] = ACTIONS(409),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_PIPE] = ACTIONS(415),
    [anon_sym_PIPEH] = ACTIONS(413),
    [anon_sym_PIPET] = ACTIONS(413),
    [anon_sym_AT_AT] = ACTIONS(415),
    [anon_sym_AT_ATdbt] = ACTIONS(415),
    [anon_sym_AT_ATdbta] = ACTIONS(413),
    [anon_sym_AT_ATdbtb] = ACTIONS(413),
    [anon_sym_AT_ATdbts] = ACTIONS(413),
    [anon_sym_AT_AT_DOT] = ACTIONS(413),
    [anon_sym_AT_AT_EQ] = ACTIONS(413),
    [anon_sym_AT_ATk] = ACTIONS(413),
    [anon_sym_AT_ATt] = ACTIONS(413),
    [anon_sym_AT_ATb] = ACTIONS(413),
    [anon_sym_AT_ATi] = ACTIONS(415),
    [anon_sym_AT_ATiS] = ACTIONS(413),
    [anon_sym_AT_ATf] = ACTIONS(413),
    [anon_sym_AT_ATs_COLON] = ACTIONS(413),
    [anon_sym_AT_ATc_COLON] = ACTIONS(413),
    [anon_sym_AT] = ACTIONS(415),
    [anon_sym_AT_BANG] = ACTIONS(413),
    [anon_sym_AT_LPAREN] = ACTIONS(413),
    [anon_sym_ATa_COLON] = ACTIONS(413),
    [anon_sym_ATb_COLON] = ACTIONS(413),
    [anon_sym_ATB_COLON] = ACTIONS(413),
    [anon_sym_ATe_COLON] = ACTIONS(413),
    [anon_sym_ATF_COLON] = ACTIONS(413),
    [anon_sym_ATi_COLON] = ACTIONS(413),
    [anon_sym_ATk_COLON] = ACTIONS(413),
    [anon_sym_ATo_COLON] = ACTIONS(413),
    [anon_sym_ATr_COLON] = ACTIONS(413),
    [anon_sym_ATf_COLON] = ACTIONS(413),
    [anon_sym_ATs_COLON] = ACTIONS(413),
    [anon_sym_ATx_COLON] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_PIPE_DOT] = ACTIONS(413),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(415),
    [anon_sym_GT_GT] = ACTIONS(413),
    [sym_html_redirect_operator] = ACTIONS(415),
    [sym_html_append_operator] = ACTIONS(413),
    [anon_sym_BQUOTE] = ACTIONS(413),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(413),
    [anon_sym_CR] = ACTIONS(413),
    [anon_sym_SEMI] = ACTIONS(413),
    [sym_file_descriptor] = ACTIONS(413),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPEH] = ACTIONS(417),
    [anon_sym_PIPET] = ACTIONS(417),
    [anon_sym_AT_AT] = ACTIONS(419),
    [anon_sym_AT_ATdbt] = ACTIONS(419),
    [anon_sym_AT_ATdbta] = ACTIONS(417),
    [anon_sym_AT_ATdbtb] = ACTIONS(417),
    [anon_sym_AT_ATdbts] = ACTIONS(417),
    [anon_sym_AT_AT_DOT] = ACTIONS(417),
    [anon_sym_AT_AT_EQ] = ACTIONS(417),
    [anon_sym_AT_ATk] = ACTIONS(417),
    [anon_sym_AT_ATt] = ACTIONS(417),
    [anon_sym_AT_ATb] = ACTIONS(417),
    [anon_sym_AT_ATi] = ACTIONS(419),
    [anon_sym_AT_ATiS] = ACTIONS(417),
    [anon_sym_AT_ATf] = ACTIONS(417),
    [anon_sym_AT_ATs_COLON] = ACTIONS(417),
    [anon_sym_AT_ATc_COLON] = ACTIONS(417),
    [anon_sym_AT] = ACTIONS(419),
    [anon_sym_AT_BANG] = ACTIONS(417),
    [anon_sym_AT_LPAREN] = ACTIONS(417),
    [anon_sym_ATa_COLON] = ACTIONS(417),
    [anon_sym_ATb_COLON] = ACTIONS(417),
    [anon_sym_ATB_COLON] = ACTIONS(417),
    [anon_sym_ATe_COLON] = ACTIONS(417),
    [anon_sym_ATF_COLON] = ACTIONS(417),
    [anon_sym_ATi_COLON] = ACTIONS(417),
    [anon_sym_ATk_COLON] = ACTIONS(417),
    [anon_sym_ATo_COLON] = ACTIONS(417),
    [anon_sym_ATr_COLON] = ACTIONS(417),
    [anon_sym_ATf_COLON] = ACTIONS(417),
    [anon_sym_ATs_COLON] = ACTIONS(417),
    [anon_sym_ATx_COLON] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_PIPE_DOT] = ACTIONS(417),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(417),
    [sym_html_redirect_operator] = ACTIONS(419),
    [sym_html_append_operator] = ACTIONS(417),
    [anon_sym_BQUOTE] = ACTIONS(417),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(417),
    [anon_sym_CR] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(417),
    [sym_file_descriptor] = ACTIONS(417),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_TILDE] = ACTIONS(421),
    [anon_sym_PIPE] = ACTIONS(423),
    [anon_sym_PIPEH] = ACTIONS(421),
    [anon_sym_PIPET] = ACTIONS(421),
    [anon_sym_AT_AT] = ACTIONS(423),
    [anon_sym_AT_ATdbt] = ACTIONS(423),
    [anon_sym_AT_ATdbta] = ACTIONS(421),
    [anon_sym_AT_ATdbtb] = ACTIONS(421),
    [anon_sym_AT_ATdbts] = ACTIONS(421),
    [anon_sym_AT_AT_DOT] = ACTIONS(421),
    [anon_sym_AT_AT_EQ] = ACTIONS(421),
    [anon_sym_AT_ATk] = ACTIONS(421),
    [anon_sym_AT_ATt] = ACTIONS(421),
    [anon_sym_AT_ATb] = ACTIONS(421),
    [anon_sym_AT_ATi] = ACTIONS(423),
    [anon_sym_AT_ATiS] = ACTIONS(421),
    [anon_sym_AT_ATf] = ACTIONS(421),
    [anon_sym_AT_ATs_COLON] = ACTIONS(421),
    [anon_sym_AT_ATc_COLON] = ACTIONS(421),
    [anon_sym_AT] = ACTIONS(423),
    [anon_sym_AT_BANG] = ACTIONS(421),
    [anon_sym_AT_LPAREN] = ACTIONS(421),
    [anon_sym_ATa_COLON] = ACTIONS(421),
    [anon_sym_ATb_COLON] = ACTIONS(421),
    [anon_sym_ATB_COLON] = ACTIONS(421),
    [anon_sym_ATe_COLON] = ACTIONS(421),
    [anon_sym_ATF_COLON] = ACTIONS(421),
    [anon_sym_ATi_COLON] = ACTIONS(421),
    [anon_sym_ATk_COLON] = ACTIONS(421),
    [anon_sym_ATo_COLON] = ACTIONS(421),
    [anon_sym_ATr_COLON] = ACTIONS(421),
    [anon_sym_ATf_COLON] = ACTIONS(421),
    [anon_sym_ATs_COLON] = ACTIONS(421),
    [anon_sym_ATx_COLON] = ACTIONS(421),
    [anon_sym_RPAREN] = ACTIONS(421),
    [anon_sym_PIPE_DOT] = ACTIONS(421),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(423),
    [anon_sym_GT_GT] = ACTIONS(421),
    [sym_html_redirect_operator] = ACTIONS(423),
    [sym_html_append_operator] = ACTIONS(421),
    [anon_sym_BQUOTE] = ACTIONS(421),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(421),
    [anon_sym_CR] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(421),
    [sym_file_descriptor] = ACTIONS(421),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_TILDE] = ACTIONS(425),
    [anon_sym_PIPE] = ACTIONS(427),
    [anon_sym_PIPEH] = ACTIONS(425),
    [anon_sym_PIPET] = ACTIONS(425),
    [anon_sym_AT_AT] = ACTIONS(427),
    [anon_sym_AT_ATdbt] = ACTIONS(427),
    [anon_sym_AT_ATdbta] = ACTIONS(425),
    [anon_sym_AT_ATdbtb] = ACTIONS(425),
    [anon_sym_AT_ATdbts] = ACTIONS(425),
    [anon_sym_AT_AT_DOT] = ACTIONS(425),
    [anon_sym_AT_AT_EQ] = ACTIONS(425),
    [anon_sym_AT_ATk] = ACTIONS(425),
    [anon_sym_AT_ATt] = ACTIONS(425),
    [anon_sym_AT_ATb] = ACTIONS(425),
    [anon_sym_AT_ATi] = ACTIONS(427),
    [anon_sym_AT_ATiS] = ACTIONS(425),
    [anon_sym_AT_ATf] = ACTIONS(425),
    [anon_sym_AT_ATs_COLON] = ACTIONS(425),
    [anon_sym_AT_ATc_COLON] = ACTIONS(425),
    [anon_sym_AT] = ACTIONS(427),
    [anon_sym_AT_BANG] = ACTIONS(425),
    [anon_sym_AT_LPAREN] = ACTIONS(425),
    [anon_sym_ATa_COLON] = ACTIONS(425),
    [anon_sym_ATb_COLON] = ACTIONS(425),
    [anon_sym_ATB_COLON] = ACTIONS(425),
    [anon_sym_ATe_COLON] = ACTIONS(425),
    [anon_sym_ATF_COLON] = ACTIONS(425),
    [anon_sym_ATi_COLON] = ACTIONS(425),
    [anon_sym_ATk_COLON] = ACTIONS(425),
    [anon_sym_ATo_COLON] = ACTIONS(425),
    [anon_sym_ATr_COLON] = ACTIONS(425),
    [anon_sym_ATf_COLON] = ACTIONS(425),
    [anon_sym_ATs_COLON] = ACTIONS(425),
    [anon_sym_ATx_COLON] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [anon_sym_PIPE_DOT] = ACTIONS(425),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(427),
    [anon_sym_GT_GT] = ACTIONS(425),
    [sym_html_redirect_operator] = ACTIONS(427),
    [sym_html_append_operator] = ACTIONS(425),
    [anon_sym_BQUOTE] = ACTIONS(425),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(425),
    [anon_sym_CR] = ACTIONS(425),
    [anon_sym_SEMI] = ACTIONS(425),
    [sym_file_descriptor] = ACTIONS(425),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(429),
    [anon_sym_TILDE] = ACTIONS(429),
    [anon_sym_PIPE] = ACTIONS(431),
    [anon_sym_PIPEH] = ACTIONS(429),
    [anon_sym_PIPET] = ACTIONS(429),
    [anon_sym_AT_AT] = ACTIONS(431),
    [anon_sym_AT_ATdbt] = ACTIONS(431),
    [anon_sym_AT_ATdbta] = ACTIONS(429),
    [anon_sym_AT_ATdbtb] = ACTIONS(429),
    [anon_sym_AT_ATdbts] = ACTIONS(429),
    [anon_sym_AT_AT_DOT] = ACTIONS(429),
    [anon_sym_AT_AT_EQ] = ACTIONS(429),
    [anon_sym_AT_ATk] = ACTIONS(429),
    [anon_sym_AT_ATt] = ACTIONS(429),
    [anon_sym_AT_ATb] = ACTIONS(429),
    [anon_sym_AT_ATi] = ACTIONS(431),
    [anon_sym_AT_ATiS] = ACTIONS(429),
    [anon_sym_AT_ATf] = ACTIONS(429),
    [anon_sym_AT_ATs_COLON] = ACTIONS(429),
    [anon_sym_AT_ATc_COLON] = ACTIONS(429),
    [anon_sym_AT] = ACTIONS(431),
    [anon_sym_AT_BANG] = ACTIONS(429),
    [anon_sym_AT_LPAREN] = ACTIONS(429),
    [anon_sym_ATa_COLON] = ACTIONS(429),
    [anon_sym_ATb_COLON] = ACTIONS(429),
    [anon_sym_ATB_COLON] = ACTIONS(429),
    [anon_sym_ATe_COLON] = ACTIONS(429),
    [anon_sym_ATF_COLON] = ACTIONS(429),
    [anon_sym_ATi_COLON] = ACTIONS(429),
    [anon_sym_ATk_COLON] = ACTIONS(429),
    [anon_sym_ATo_COLON] = ACTIONS(429),
    [anon_sym_ATr_COLON] = ACTIONS(429),
    [anon_sym_ATf_COLON] = ACTIONS(429),
    [anon_sym_ATs_COLON] = ACTIONS(429),
    [anon_sym_ATx_COLON] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_PIPE_DOT] = ACTIONS(429),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(431),
    [anon_sym_GT_GT] = ACTIONS(429),
    [sym_html_redirect_operator] = ACTIONS(431),
    [sym_html_append_operator] = ACTIONS(429),
    [anon_sym_BQUOTE] = ACTIONS(429),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(429),
    [anon_sym_CR] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(429),
    [sym_file_descriptor] = ACTIONS(429),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_TILDE] = ACTIONS(433),
    [anon_sym_PIPE] = ACTIONS(435),
    [anon_sym_PIPEH] = ACTIONS(433),
    [anon_sym_PIPET] = ACTIONS(433),
    [anon_sym_AT_AT] = ACTIONS(435),
    [anon_sym_AT_ATdbt] = ACTIONS(435),
    [anon_sym_AT_ATdbta] = ACTIONS(433),
    [anon_sym_AT_ATdbtb] = ACTIONS(433),
    [anon_sym_AT_ATdbts] = ACTIONS(433),
    [anon_sym_AT_AT_DOT] = ACTIONS(433),
    [anon_sym_AT_AT_EQ] = ACTIONS(433),
    [anon_sym_AT_ATk] = ACTIONS(433),
    [anon_sym_AT_ATt] = ACTIONS(433),
    [anon_sym_AT_ATb] = ACTIONS(433),
    [anon_sym_AT_ATi] = ACTIONS(435),
    [anon_sym_AT_ATiS] = ACTIONS(433),
    [anon_sym_AT_ATf] = ACTIONS(433),
    [anon_sym_AT_ATs_COLON] = ACTIONS(433),
    [anon_sym_AT_ATc_COLON] = ACTIONS(433),
    [anon_sym_AT] = ACTIONS(435),
    [anon_sym_AT_BANG] = ACTIONS(433),
    [anon_sym_AT_LPAREN] = ACTIONS(433),
    [anon_sym_ATa_COLON] = ACTIONS(433),
    [anon_sym_ATb_COLON] = ACTIONS(433),
    [anon_sym_ATB_COLON] = ACTIONS(433),
    [anon_sym_ATe_COLON] = ACTIONS(433),
    [anon_sym_ATF_COLON] = ACTIONS(433),
    [anon_sym_ATi_COLON] = ACTIONS(433),
    [anon_sym_ATk_COLON] = ACTIONS(433),
    [anon_sym_ATo_COLON] = ACTIONS(433),
    [anon_sym_ATr_COLON] = ACTIONS(433),
    [anon_sym_ATf_COLON] = ACTIONS(433),
    [anon_sym_ATs_COLON] = ACTIONS(433),
    [anon_sym_ATx_COLON] = ACTIONS(433),
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_PIPE_DOT] = ACTIONS(433),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(433),
    [sym_html_redirect_operator] = ACTIONS(435),
    [sym_html_append_operator] = ACTIONS(433),
    [anon_sym_BQUOTE] = ACTIONS(433),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(433),
    [anon_sym_CR] = ACTIONS(433),
    [anon_sym_SEMI] = ACTIONS(433),
    [sym_file_descriptor] = ACTIONS(433),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(437),
    [anon_sym_TILDE] = ACTIONS(437),
    [anon_sym_PIPE] = ACTIONS(439),
    [anon_sym_PIPEH] = ACTIONS(437),
    [anon_sym_PIPET] = ACTIONS(437),
    [anon_sym_AT_AT] = ACTIONS(439),
    [anon_sym_AT_ATdbt] = ACTIONS(439),
    [anon_sym_AT_ATdbta] = ACTIONS(437),
    [anon_sym_AT_ATdbtb] = ACTIONS(437),
    [anon_sym_AT_ATdbts] = ACTIONS(437),
    [anon_sym_AT_AT_DOT] = ACTIONS(437),
    [anon_sym_AT_AT_EQ] = ACTIONS(437),
    [anon_sym_AT_ATk] = ACTIONS(437),
    [anon_sym_AT_ATt] = ACTIONS(437),
    [anon_sym_AT_ATb] = ACTIONS(437),
    [anon_sym_AT_ATi] = ACTIONS(439),
    [anon_sym_AT_ATiS] = ACTIONS(437),
    [anon_sym_AT_ATf] = ACTIONS(437),
    [anon_sym_AT_ATs_COLON] = ACTIONS(437),
    [anon_sym_AT_ATc_COLON] = ACTIONS(437),
    [anon_sym_AT] = ACTIONS(439),
    [anon_sym_AT_BANG] = ACTIONS(437),
    [anon_sym_AT_LPAREN] = ACTIONS(437),
    [anon_sym_ATa_COLON] = ACTIONS(437),
    [anon_sym_ATb_COLON] = ACTIONS(437),
    [anon_sym_ATB_COLON] = ACTIONS(437),
    [anon_sym_ATe_COLON] = ACTIONS(437),
    [anon_sym_ATF_COLON] = ACTIONS(437),
    [anon_sym_ATi_COLON] = ACTIONS(437),
    [anon_sym_ATk_COLON] = ACTIONS(437),
    [anon_sym_ATo_COLON] = ACTIONS(437),
    [anon_sym_ATr_COLON] = ACTIONS(437),
    [anon_sym_ATf_COLON] = ACTIONS(437),
    [anon_sym_ATs_COLON] = ACTIONS(437),
    [anon_sym_ATx_COLON] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_PIPE_DOT] = ACTIONS(437),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_GT_GT] = ACTIONS(437),
    [sym_html_redirect_operator] = ACTIONS(439),
    [sym_html_append_operator] = ACTIONS(437),
    [anon_sym_BQUOTE] = ACTIONS(437),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(437),
    [anon_sym_CR] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [sym_file_descriptor] = ACTIONS(437),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_PIPEH] = ACTIONS(441),
    [anon_sym_PIPET] = ACTIONS(441),
    [anon_sym_AT_AT] = ACTIONS(443),
    [anon_sym_AT_ATdbt] = ACTIONS(443),
    [anon_sym_AT_ATdbta] = ACTIONS(441),
    [anon_sym_AT_ATdbtb] = ACTIONS(441),
    [anon_sym_AT_ATdbts] = ACTIONS(441),
    [anon_sym_AT_AT_DOT] = ACTIONS(441),
    [anon_sym_AT_AT_EQ] = ACTIONS(441),
    [anon_sym_AT_ATk] = ACTIONS(441),
    [anon_sym_AT_ATt] = ACTIONS(441),
    [anon_sym_AT_ATb] = ACTIONS(441),
    [anon_sym_AT_ATi] = ACTIONS(443),
    [anon_sym_AT_ATiS] = ACTIONS(441),
    [anon_sym_AT_ATf] = ACTIONS(441),
    [anon_sym_AT_ATs_COLON] = ACTIONS(441),
    [anon_sym_AT_ATc_COLON] = ACTIONS(441),
    [anon_sym_AT] = ACTIONS(443),
    [anon_sym_AT_BANG] = ACTIONS(441),
    [anon_sym_AT_LPAREN] = ACTIONS(441),
    [anon_sym_ATa_COLON] = ACTIONS(441),
    [anon_sym_ATb_COLON] = ACTIONS(441),
    [anon_sym_ATB_COLON] = ACTIONS(441),
    [anon_sym_ATe_COLON] = ACTIONS(441),
    [anon_sym_ATF_COLON] = ACTIONS(441),
    [anon_sym_ATi_COLON] = ACTIONS(441),
    [anon_sym_ATk_COLON] = ACTIONS(441),
    [anon_sym_ATo_COLON] = ACTIONS(441),
    [anon_sym_ATr_COLON] = ACTIONS(441),
    [anon_sym_ATf_COLON] = ACTIONS(441),
    [anon_sym_ATs_COLON] = ACTIONS(441),
    [anon_sym_ATx_COLON] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_PIPE_DOT] = ACTIONS(441),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(441),
    [sym_html_redirect_operator] = ACTIONS(443),
    [sym_html_append_operator] = ACTIONS(441),
    [anon_sym_BQUOTE] = ACTIONS(441),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(441),
    [anon_sym_CR] = ACTIONS(441),
    [anon_sym_SEMI] = ACTIONS(441),
    [sym_file_descriptor] = ACTIONS(441),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_TILDE] = ACTIONS(445),
    [anon_sym_PIPE] = ACTIONS(447),
    [anon_sym_PIPEH] = ACTIONS(445),
    [anon_sym_PIPET] = ACTIONS(445),
    [anon_sym_AT_AT] = ACTIONS(447),
    [anon_sym_AT_ATdbt] = ACTIONS(447),
    [anon_sym_AT_ATdbta] = ACTIONS(445),
    [anon_sym_AT_ATdbtb] = ACTIONS(445),
    [anon_sym_AT_ATdbts] = ACTIONS(445),
    [anon_sym_AT_AT_DOT] = ACTIONS(445),
    [anon_sym_AT_AT_EQ] = ACTIONS(445),
    [anon_sym_AT_ATk] = ACTIONS(445),
    [anon_sym_AT_ATt] = ACTIONS(445),
    [anon_sym_AT_ATb] = ACTIONS(445),
    [anon_sym_AT_ATi] = ACTIONS(447),
    [anon_sym_AT_ATiS] = ACTIONS(445),
    [anon_sym_AT_ATf] = ACTIONS(445),
    [anon_sym_AT_ATs_COLON] = ACTIONS(445),
    [anon_sym_AT_ATc_COLON] = ACTIONS(445),
    [anon_sym_AT] = ACTIONS(447),
    [anon_sym_AT_BANG] = ACTIONS(445),
    [anon_sym_AT_LPAREN] = ACTIONS(445),
    [anon_sym_ATa_COLON] = ACTIONS(445),
    [anon_sym_ATb_COLON] = ACTIONS(445),
    [anon_sym_ATB_COLON] = ACTIONS(445),
    [anon_sym_ATe_COLON] = ACTIONS(445),
    [anon_sym_ATF_COLON] = ACTIONS(445),
    [anon_sym_ATi_COLON] = ACTIONS(445),
    [anon_sym_ATk_COLON] = ACTIONS(445),
    [anon_sym_ATo_COLON] = ACTIONS(445),
    [anon_sym_ATr_COLON] = ACTIONS(445),
    [anon_sym_ATf_COLON] = ACTIONS(445),
    [anon_sym_ATs_COLON] = ACTIONS(445),
    [anon_sym_ATx_COLON] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PIPE_DOT] = ACTIONS(445),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(447),
    [anon_sym_GT_GT] = ACTIONS(445),
    [sym_html_redirect_operator] = ACTIONS(447),
    [sym_html_append_operator] = ACTIONS(445),
    [anon_sym_BQUOTE] = ACTIONS(445),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(445),
    [anon_sym_CR] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
    [sym_file_descriptor] = ACTIONS(445),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_PIPE] = ACTIONS(451),
    [anon_sym_PIPEH] = ACTIONS(449),
    [anon_sym_PIPET] = ACTIONS(449),
    [anon_sym_AT_AT] = ACTIONS(451),
    [anon_sym_AT_ATdbt] = ACTIONS(451),
    [anon_sym_AT_ATdbta] = ACTIONS(449),
    [anon_sym_AT_ATdbtb] = ACTIONS(449),
    [anon_sym_AT_ATdbts] = ACTIONS(449),
    [anon_sym_AT_AT_DOT] = ACTIONS(449),
    [anon_sym_AT_AT_EQ] = ACTIONS(449),
    [anon_sym_AT_ATk] = ACTIONS(449),
    [anon_sym_AT_ATt] = ACTIONS(449),
    [anon_sym_AT_ATb] = ACTIONS(449),
    [anon_sym_AT_ATi] = ACTIONS(451),
    [anon_sym_AT_ATiS] = ACTIONS(449),
    [anon_sym_AT_ATf] = ACTIONS(449),
    [anon_sym_AT_ATs_COLON] = ACTIONS(449),
    [anon_sym_AT_ATc_COLON] = ACTIONS(449),
    [anon_sym_AT] = ACTIONS(451),
    [anon_sym_AT_BANG] = ACTIONS(449),
    [anon_sym_AT_LPAREN] = ACTIONS(449),
    [anon_sym_ATa_COLON] = ACTIONS(449),
    [anon_sym_ATb_COLON] = ACTIONS(449),
    [anon_sym_ATB_COLON] = ACTIONS(449),
    [anon_sym_ATe_COLON] = ACTIONS(449),
    [anon_sym_ATF_COLON] = ACTIONS(449),
    [anon_sym_ATi_COLON] = ACTIONS(449),
    [anon_sym_ATk_COLON] = ACTIONS(449),
    [anon_sym_ATo_COLON] = ACTIONS(449),
    [anon_sym_ATr_COLON] = ACTIONS(449),
    [anon_sym_ATf_COLON] = ACTIONS(449),
    [anon_sym_ATs_COLON] = ACTIONS(449),
    [anon_sym_ATx_COLON] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_PIPE_DOT] = ACTIONS(449),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(451),
    [anon_sym_GT_GT] = ACTIONS(449),
    [sym_html_redirect_operator] = ACTIONS(451),
    [sym_html_append_operator] = ACTIONS(449),
    [anon_sym_BQUOTE] = ACTIONS(449),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(449),
    [anon_sym_CR] = ACTIONS(449),
    [anon_sym_SEMI] = ACTIONS(449),
    [sym_file_descriptor] = ACTIONS(449),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_PIPE] = ACTIONS(455),
    [anon_sym_PIPEH] = ACTIONS(453),
    [anon_sym_PIPET] = ACTIONS(453),
    [anon_sym_AT_AT] = ACTIONS(455),
    [anon_sym_AT_ATdbt] = ACTIONS(455),
    [anon_sym_AT_ATdbta] = ACTIONS(453),
    [anon_sym_AT_ATdbtb] = ACTIONS(453),
    [anon_sym_AT_ATdbts] = ACTIONS(453),
    [anon_sym_AT_AT_DOT] = ACTIONS(453),
    [anon_sym_AT_AT_EQ] = ACTIONS(453),
    [anon_sym_AT_ATk] = ACTIONS(453),
    [anon_sym_AT_ATt] = ACTIONS(453),
    [anon_sym_AT_ATb] = ACTIONS(453),
    [anon_sym_AT_ATi] = ACTIONS(455),
    [anon_sym_AT_ATiS] = ACTIONS(453),
    [anon_sym_AT_ATf] = ACTIONS(453),
    [anon_sym_AT_ATs_COLON] = ACTIONS(453),
    [anon_sym_AT_ATc_COLON] = ACTIONS(453),
    [anon_sym_AT] = ACTIONS(455),
    [anon_sym_AT_BANG] = ACTIONS(453),
    [anon_sym_AT_LPAREN] = ACTIONS(453),
    [anon_sym_ATa_COLON] = ACTIONS(453),
    [anon_sym_ATb_COLON] = ACTIONS(453),
    [anon_sym_ATB_COLON] = ACTIONS(453),
    [anon_sym_ATe_COLON] = ACTIONS(453),
    [anon_sym_ATF_COLON] = ACTIONS(453),
    [anon_sym_ATi_COLON] = ACTIONS(453),
    [anon_sym_ATk_COLON] = ACTIONS(453),
    [anon_sym_ATo_COLON] = ACTIONS(453),
    [anon_sym_ATr_COLON] = ACTIONS(453),
    [anon_sym_ATf_COLON] = ACTIONS(453),
    [anon_sym_ATs_COLON] = ACTIONS(453),
    [anon_sym_ATx_COLON] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_PIPE_DOT] = ACTIONS(453),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_GT_GT] = ACTIONS(453),
    [sym_html_redirect_operator] = ACTIONS(455),
    [sym_html_append_operator] = ACTIONS(453),
    [anon_sym_BQUOTE] = ACTIONS(453),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(453),
    [anon_sym_CR] = ACTIONS(453),
    [anon_sym_SEMI] = ACTIONS(453),
    [sym_file_descriptor] = ACTIONS(453),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_TILDE] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(150),
    [anon_sym_PIPEH] = ACTIONS(148),
    [anon_sym_PIPET] = ACTIONS(148),
    [anon_sym_AT_AT] = ACTIONS(150),
    [anon_sym_AT_ATdbt] = ACTIONS(150),
    [anon_sym_AT_ATdbta] = ACTIONS(148),
    [anon_sym_AT_ATdbtb] = ACTIONS(148),
    [anon_sym_AT_ATdbts] = ACTIONS(148),
    [anon_sym_AT_AT_DOT] = ACTIONS(148),
    [anon_sym_AT_AT_EQ] = ACTIONS(148),
    [anon_sym_AT_ATk] = ACTIONS(148),
    [anon_sym_AT_ATt] = ACTIONS(148),
    [anon_sym_AT_ATb] = ACTIONS(148),
    [anon_sym_AT_ATi] = ACTIONS(150),
    [anon_sym_AT_ATiS] = ACTIONS(148),
    [anon_sym_AT_ATf] = ACTIONS(148),
    [anon_sym_AT_ATs_COLON] = ACTIONS(148),
    [anon_sym_AT_ATc_COLON] = ACTIONS(148),
    [anon_sym_AT] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(150),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(150),
    [sym_html_append_operator] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_file_descriptor] = ACTIONS(148),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_PIPE] = ACTIONS(459),
    [anon_sym_PIPEH] = ACTIONS(457),
    [anon_sym_PIPET] = ACTIONS(457),
    [anon_sym_AT_AT] = ACTIONS(459),
    [anon_sym_AT_ATdbt] = ACTIONS(459),
    [anon_sym_AT_ATdbta] = ACTIONS(457),
    [anon_sym_AT_ATdbtb] = ACTIONS(457),
    [anon_sym_AT_ATdbts] = ACTIONS(457),
    [anon_sym_AT_AT_DOT] = ACTIONS(457),
    [anon_sym_AT_AT_EQ] = ACTIONS(457),
    [anon_sym_AT_ATk] = ACTIONS(457),
    [anon_sym_AT_ATt] = ACTIONS(457),
    [anon_sym_AT_ATb] = ACTIONS(457),
    [anon_sym_AT_ATi] = ACTIONS(459),
    [anon_sym_AT_ATiS] = ACTIONS(457),
    [anon_sym_AT_ATf] = ACTIONS(457),
    [anon_sym_AT_ATs_COLON] = ACTIONS(457),
    [anon_sym_AT_ATc_COLON] = ACTIONS(457),
    [anon_sym_AT] = ACTIONS(459),
    [anon_sym_AT_BANG] = ACTIONS(457),
    [anon_sym_AT_LPAREN] = ACTIONS(457),
    [anon_sym_ATa_COLON] = ACTIONS(457),
    [anon_sym_ATb_COLON] = ACTIONS(457),
    [anon_sym_ATB_COLON] = ACTIONS(457),
    [anon_sym_ATe_COLON] = ACTIONS(457),
    [anon_sym_ATF_COLON] = ACTIONS(457),
    [anon_sym_ATi_COLON] = ACTIONS(457),
    [anon_sym_ATk_COLON] = ACTIONS(457),
    [anon_sym_ATo_COLON] = ACTIONS(457),
    [anon_sym_ATr_COLON] = ACTIONS(457),
    [anon_sym_ATf_COLON] = ACTIONS(457),
    [anon_sym_ATs_COLON] = ACTIONS(457),
    [anon_sym_ATx_COLON] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_PIPE_DOT] = ACTIONS(457),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_GT_GT] = ACTIONS(457),
    [sym_html_redirect_operator] = ACTIONS(459),
    [sym_html_append_operator] = ACTIONS(457),
    [anon_sym_BQUOTE] = ACTIONS(457),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(457),
    [anon_sym_CR] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(457),
    [sym_file_descriptor] = ACTIONS(457),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(463),
    [anon_sym_PIPEH] = ACTIONS(461),
    [anon_sym_PIPET] = ACTIONS(461),
    [anon_sym_AT_AT] = ACTIONS(463),
    [anon_sym_AT_ATdbt] = ACTIONS(463),
    [anon_sym_AT_ATdbta] = ACTIONS(461),
    [anon_sym_AT_ATdbtb] = ACTIONS(461),
    [anon_sym_AT_ATdbts] = ACTIONS(461),
    [anon_sym_AT_AT_DOT] = ACTIONS(461),
    [anon_sym_AT_AT_EQ] = ACTIONS(461),
    [anon_sym_AT_ATk] = ACTIONS(461),
    [anon_sym_AT_ATt] = ACTIONS(461),
    [anon_sym_AT_ATb] = ACTIONS(461),
    [anon_sym_AT_ATi] = ACTIONS(463),
    [anon_sym_AT_ATiS] = ACTIONS(461),
    [anon_sym_AT_ATf] = ACTIONS(461),
    [anon_sym_AT_ATs_COLON] = ACTIONS(461),
    [anon_sym_AT_ATc_COLON] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(463),
    [anon_sym_AT_BANG] = ACTIONS(461),
    [anon_sym_AT_LPAREN] = ACTIONS(461),
    [anon_sym_ATa_COLON] = ACTIONS(461),
    [anon_sym_ATb_COLON] = ACTIONS(461),
    [anon_sym_ATB_COLON] = ACTIONS(461),
    [anon_sym_ATe_COLON] = ACTIONS(461),
    [anon_sym_ATF_COLON] = ACTIONS(461),
    [anon_sym_ATi_COLON] = ACTIONS(461),
    [anon_sym_ATk_COLON] = ACTIONS(461),
    [anon_sym_ATo_COLON] = ACTIONS(461),
    [anon_sym_ATr_COLON] = ACTIONS(461),
    [anon_sym_ATf_COLON] = ACTIONS(461),
    [anon_sym_ATs_COLON] = ACTIONS(461),
    [anon_sym_ATx_COLON] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(461),
    [anon_sym_PIPE_DOT] = ACTIONS(461),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_GT_GT] = ACTIONS(461),
    [sym_html_redirect_operator] = ACTIONS(463),
    [sym_html_append_operator] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(461),
    [anon_sym_CR] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
    [sym_file_descriptor] = ACTIONS(461),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(465),
    [anon_sym_PIPE] = ACTIONS(467),
    [anon_sym_PIPEH] = ACTIONS(465),
    [anon_sym_PIPET] = ACTIONS(465),
    [anon_sym_AT_AT] = ACTIONS(467),
    [anon_sym_AT_ATdbt] = ACTIONS(467),
    [anon_sym_AT_ATdbta] = ACTIONS(465),
    [anon_sym_AT_ATdbtb] = ACTIONS(465),
    [anon_sym_AT_ATdbts] = ACTIONS(465),
    [anon_sym_AT_AT_DOT] = ACTIONS(465),
    [anon_sym_AT_AT_EQ] = ACTIONS(465),
    [anon_sym_AT_ATk] = ACTIONS(465),
    [anon_sym_AT_ATt] = ACTIONS(465),
    [anon_sym_AT_ATb] = ACTIONS(465),
    [anon_sym_AT_ATi] = ACTIONS(467),
    [anon_sym_AT_ATiS] = ACTIONS(465),
    [anon_sym_AT_ATf] = ACTIONS(465),
    [anon_sym_AT_ATs_COLON] = ACTIONS(465),
    [anon_sym_AT_ATc_COLON] = ACTIONS(465),
    [anon_sym_AT] = ACTIONS(467),
    [anon_sym_AT_BANG] = ACTIONS(465),
    [anon_sym_AT_LPAREN] = ACTIONS(465),
    [anon_sym_ATa_COLON] = ACTIONS(465),
    [anon_sym_ATb_COLON] = ACTIONS(465),
    [anon_sym_ATB_COLON] = ACTIONS(465),
    [anon_sym_ATe_COLON] = ACTIONS(465),
    [anon_sym_ATF_COLON] = ACTIONS(465),
    [anon_sym_ATi_COLON] = ACTIONS(465),
    [anon_sym_ATk_COLON] = ACTIONS(465),
    [anon_sym_ATo_COLON] = ACTIONS(465),
    [anon_sym_ATr_COLON] = ACTIONS(465),
    [anon_sym_ATf_COLON] = ACTIONS(465),
    [anon_sym_ATs_COLON] = ACTIONS(465),
    [anon_sym_ATx_COLON] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_PIPE_DOT] = ACTIONS(465),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(465),
    [sym_html_redirect_operator] = ACTIONS(467),
    [sym_html_append_operator] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(465),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(465),
    [anon_sym_CR] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(465),
    [sym_file_descriptor] = ACTIONS(465),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_PIPEH] = ACTIONS(469),
    [anon_sym_PIPET] = ACTIONS(469),
    [anon_sym_AT_AT] = ACTIONS(471),
    [anon_sym_AT_ATdbt] = ACTIONS(471),
    [anon_sym_AT_ATdbta] = ACTIONS(469),
    [anon_sym_AT_ATdbtb] = ACTIONS(469),
    [anon_sym_AT_ATdbts] = ACTIONS(469),
    [anon_sym_AT_AT_DOT] = ACTIONS(469),
    [anon_sym_AT_AT_EQ] = ACTIONS(469),
    [anon_sym_AT_ATk] = ACTIONS(469),
    [anon_sym_AT_ATt] = ACTIONS(469),
    [anon_sym_AT_ATb] = ACTIONS(469),
    [anon_sym_AT_ATi] = ACTIONS(471),
    [anon_sym_AT_ATiS] = ACTIONS(469),
    [anon_sym_AT_ATf] = ACTIONS(469),
    [anon_sym_AT_ATs_COLON] = ACTIONS(469),
    [anon_sym_AT_ATc_COLON] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(471),
    [anon_sym_AT_BANG] = ACTIONS(469),
    [anon_sym_AT_LPAREN] = ACTIONS(469),
    [anon_sym_ATa_COLON] = ACTIONS(469),
    [anon_sym_ATb_COLON] = ACTIONS(469),
    [anon_sym_ATB_COLON] = ACTIONS(469),
    [anon_sym_ATe_COLON] = ACTIONS(469),
    [anon_sym_ATF_COLON] = ACTIONS(469),
    [anon_sym_ATi_COLON] = ACTIONS(469),
    [anon_sym_ATk_COLON] = ACTIONS(469),
    [anon_sym_ATo_COLON] = ACTIONS(469),
    [anon_sym_ATr_COLON] = ACTIONS(469),
    [anon_sym_ATf_COLON] = ACTIONS(469),
    [anon_sym_ATs_COLON] = ACTIONS(469),
    [anon_sym_ATx_COLON] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(469),
    [anon_sym_PIPE_DOT] = ACTIONS(469),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_GT_GT] = ACTIONS(469),
    [sym_html_redirect_operator] = ACTIONS(471),
    [sym_html_append_operator] = ACTIONS(469),
    [anon_sym_BQUOTE] = ACTIONS(469),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_CR] = ACTIONS(469),
    [anon_sym_SEMI] = ACTIONS(469),
    [sym_file_descriptor] = ACTIONS(469),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(473),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_PIPEH] = ACTIONS(473),
    [anon_sym_PIPET] = ACTIONS(473),
    [anon_sym_AT_AT] = ACTIONS(475),
    [anon_sym_AT_ATdbt] = ACTIONS(475),
    [anon_sym_AT_ATdbta] = ACTIONS(473),
    [anon_sym_AT_ATdbtb] = ACTIONS(473),
    [anon_sym_AT_ATdbts] = ACTIONS(473),
    [anon_sym_AT_AT_DOT] = ACTIONS(473),
    [anon_sym_AT_AT_EQ] = ACTIONS(473),
    [anon_sym_AT_ATk] = ACTIONS(473),
    [anon_sym_AT_ATt] = ACTIONS(473),
    [anon_sym_AT_ATb] = ACTIONS(473),
    [anon_sym_AT_ATi] = ACTIONS(475),
    [anon_sym_AT_ATiS] = ACTIONS(473),
    [anon_sym_AT_ATf] = ACTIONS(473),
    [anon_sym_AT_ATs_COLON] = ACTIONS(473),
    [anon_sym_AT_ATc_COLON] = ACTIONS(473),
    [anon_sym_AT] = ACTIONS(475),
    [anon_sym_AT_BANG] = ACTIONS(473),
    [anon_sym_AT_LPAREN] = ACTIONS(473),
    [anon_sym_ATa_COLON] = ACTIONS(473),
    [anon_sym_ATb_COLON] = ACTIONS(473),
    [anon_sym_ATB_COLON] = ACTIONS(473),
    [anon_sym_ATe_COLON] = ACTIONS(473),
    [anon_sym_ATF_COLON] = ACTIONS(473),
    [anon_sym_ATi_COLON] = ACTIONS(473),
    [anon_sym_ATk_COLON] = ACTIONS(473),
    [anon_sym_ATo_COLON] = ACTIONS(473),
    [anon_sym_ATr_COLON] = ACTIONS(473),
    [anon_sym_ATf_COLON] = ACTIONS(473),
    [anon_sym_ATs_COLON] = ACTIONS(473),
    [anon_sym_ATx_COLON] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [anon_sym_PIPE_DOT] = ACTIONS(473),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(475),
    [anon_sym_GT_GT] = ACTIONS(473),
    [sym_html_redirect_operator] = ACTIONS(475),
    [sym_html_append_operator] = ACTIONS(473),
    [anon_sym_BQUOTE] = ACTIONS(473),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(473),
    [anon_sym_CR] = ACTIONS(473),
    [anon_sym_SEMI] = ACTIONS(473),
    [sym_file_descriptor] = ACTIONS(473),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(479),
    [anon_sym_PIPEH] = ACTIONS(477),
    [anon_sym_PIPET] = ACTIONS(477),
    [anon_sym_AT_AT] = ACTIONS(479),
    [anon_sym_AT_ATdbt] = ACTIONS(479),
    [anon_sym_AT_ATdbta] = ACTIONS(477),
    [anon_sym_AT_ATdbtb] = ACTIONS(477),
    [anon_sym_AT_ATdbts] = ACTIONS(477),
    [anon_sym_AT_AT_DOT] = ACTIONS(477),
    [anon_sym_AT_AT_EQ] = ACTIONS(477),
    [anon_sym_AT_ATk] = ACTIONS(477),
    [anon_sym_AT_ATt] = ACTIONS(477),
    [anon_sym_AT_ATb] = ACTIONS(477),
    [anon_sym_AT_ATi] = ACTIONS(479),
    [anon_sym_AT_ATiS] = ACTIONS(477),
    [anon_sym_AT_ATf] = ACTIONS(477),
    [anon_sym_AT_ATs_COLON] = ACTIONS(477),
    [anon_sym_AT_ATc_COLON] = ACTIONS(477),
    [anon_sym_AT] = ACTIONS(479),
    [anon_sym_AT_BANG] = ACTIONS(477),
    [anon_sym_AT_LPAREN] = ACTIONS(477),
    [anon_sym_ATa_COLON] = ACTIONS(477),
    [anon_sym_ATb_COLON] = ACTIONS(477),
    [anon_sym_ATB_COLON] = ACTIONS(477),
    [anon_sym_ATe_COLON] = ACTIONS(477),
    [anon_sym_ATF_COLON] = ACTIONS(477),
    [anon_sym_ATi_COLON] = ACTIONS(477),
    [anon_sym_ATk_COLON] = ACTIONS(477),
    [anon_sym_ATo_COLON] = ACTIONS(477),
    [anon_sym_ATr_COLON] = ACTIONS(477),
    [anon_sym_ATf_COLON] = ACTIONS(477),
    [anon_sym_ATs_COLON] = ACTIONS(477),
    [anon_sym_ATx_COLON] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_PIPE_DOT] = ACTIONS(477),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_GT_GT] = ACTIONS(477),
    [sym_html_redirect_operator] = ACTIONS(479),
    [sym_html_append_operator] = ACTIONS(477),
    [anon_sym_BQUOTE] = ACTIONS(477),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(477),
    [anon_sym_CR] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(477),
    [sym_file_descriptor] = ACTIONS(477),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [anon_sym_TILDE] = ACTIONS(481),
    [anon_sym_PIPE] = ACTIONS(483),
    [anon_sym_PIPEH] = ACTIONS(481),
    [anon_sym_PIPET] = ACTIONS(481),
    [anon_sym_AT_AT] = ACTIONS(483),
    [anon_sym_AT_ATdbt] = ACTIONS(483),
    [anon_sym_AT_ATdbta] = ACTIONS(481),
    [anon_sym_AT_ATdbtb] = ACTIONS(481),
    [anon_sym_AT_ATdbts] = ACTIONS(481),
    [anon_sym_AT_AT_DOT] = ACTIONS(481),
    [anon_sym_AT_AT_EQ] = ACTIONS(481),
    [anon_sym_AT_ATk] = ACTIONS(481),
    [anon_sym_AT_ATt] = ACTIONS(481),
    [anon_sym_AT_ATb] = ACTIONS(481),
    [anon_sym_AT_ATi] = ACTIONS(483),
    [anon_sym_AT_ATiS] = ACTIONS(481),
    [anon_sym_AT_ATf] = ACTIONS(481),
    [anon_sym_AT_ATs_COLON] = ACTIONS(481),
    [anon_sym_AT_ATc_COLON] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(483),
    [anon_sym_AT_BANG] = ACTIONS(481),
    [anon_sym_AT_LPAREN] = ACTIONS(481),
    [anon_sym_ATa_COLON] = ACTIONS(481),
    [anon_sym_ATb_COLON] = ACTIONS(481),
    [anon_sym_ATB_COLON] = ACTIONS(481),
    [anon_sym_ATe_COLON] = ACTIONS(481),
    [anon_sym_ATF_COLON] = ACTIONS(481),
    [anon_sym_ATi_COLON] = ACTIONS(481),
    [anon_sym_ATk_COLON] = ACTIONS(481),
    [anon_sym_ATo_COLON] = ACTIONS(481),
    [anon_sym_ATr_COLON] = ACTIONS(481),
    [anon_sym_ATf_COLON] = ACTIONS(481),
    [anon_sym_ATs_COLON] = ACTIONS(481),
    [anon_sym_ATx_COLON] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_PIPE_DOT] = ACTIONS(481),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(481),
    [sym_html_redirect_operator] = ACTIONS(483),
    [sym_html_append_operator] = ACTIONS(481),
    [anon_sym_BQUOTE] = ACTIONS(481),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(481),
    [anon_sym_CR] = ACTIONS(481),
    [anon_sym_SEMI] = ACTIONS(481),
    [sym_file_descriptor] = ACTIONS(481),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_PIPE] = ACTIONS(487),
    [anon_sym_PIPEH] = ACTIONS(485),
    [anon_sym_PIPET] = ACTIONS(485),
    [anon_sym_AT_AT] = ACTIONS(487),
    [anon_sym_AT_ATdbt] = ACTIONS(487),
    [anon_sym_AT_ATdbta] = ACTIONS(485),
    [anon_sym_AT_ATdbtb] = ACTIONS(485),
    [anon_sym_AT_ATdbts] = ACTIONS(485),
    [anon_sym_AT_AT_DOT] = ACTIONS(485),
    [anon_sym_AT_AT_EQ] = ACTIONS(485),
    [anon_sym_AT_ATk] = ACTIONS(485),
    [anon_sym_AT_ATt] = ACTIONS(485),
    [anon_sym_AT_ATb] = ACTIONS(485),
    [anon_sym_AT_ATi] = ACTIONS(487),
    [anon_sym_AT_ATiS] = ACTIONS(485),
    [anon_sym_AT_ATf] = ACTIONS(485),
    [anon_sym_AT_ATs_COLON] = ACTIONS(485),
    [anon_sym_AT_ATc_COLON] = ACTIONS(485),
    [anon_sym_AT] = ACTIONS(487),
    [anon_sym_AT_BANG] = ACTIONS(485),
    [anon_sym_AT_LPAREN] = ACTIONS(485),
    [anon_sym_ATa_COLON] = ACTIONS(485),
    [anon_sym_ATb_COLON] = ACTIONS(485),
    [anon_sym_ATB_COLON] = ACTIONS(485),
    [anon_sym_ATe_COLON] = ACTIONS(485),
    [anon_sym_ATF_COLON] = ACTIONS(485),
    [anon_sym_ATi_COLON] = ACTIONS(485),
    [anon_sym_ATk_COLON] = ACTIONS(485),
    [anon_sym_ATo_COLON] = ACTIONS(485),
    [anon_sym_ATr_COLON] = ACTIONS(485),
    [anon_sym_ATf_COLON] = ACTIONS(485),
    [anon_sym_ATs_COLON] = ACTIONS(485),
    [anon_sym_ATx_COLON] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_PIPE_DOT] = ACTIONS(485),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(485),
    [sym_html_redirect_operator] = ACTIONS(487),
    [sym_html_append_operator] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_CR] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [sym_file_descriptor] = ACTIONS(485),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [anon_sym_TILDE] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_PIPEH] = ACTIONS(489),
    [anon_sym_PIPET] = ACTIONS(489),
    [anon_sym_AT_AT] = ACTIONS(491),
    [anon_sym_AT_ATdbt] = ACTIONS(491),
    [anon_sym_AT_ATdbta] = ACTIONS(489),
    [anon_sym_AT_ATdbtb] = ACTIONS(489),
    [anon_sym_AT_ATdbts] = ACTIONS(489),
    [anon_sym_AT_AT_DOT] = ACTIONS(489),
    [anon_sym_AT_AT_EQ] = ACTIONS(489),
    [anon_sym_AT_ATk] = ACTIONS(489),
    [anon_sym_AT_ATt] = ACTIONS(489),
    [anon_sym_AT_ATb] = ACTIONS(489),
    [anon_sym_AT_ATi] = ACTIONS(491),
    [anon_sym_AT_ATiS] = ACTIONS(489),
    [anon_sym_AT_ATf] = ACTIONS(489),
    [anon_sym_AT_ATs_COLON] = ACTIONS(489),
    [anon_sym_AT_ATc_COLON] = ACTIONS(489),
    [anon_sym_AT] = ACTIONS(491),
    [anon_sym_AT_BANG] = ACTIONS(489),
    [anon_sym_AT_LPAREN] = ACTIONS(489),
    [anon_sym_ATa_COLON] = ACTIONS(489),
    [anon_sym_ATb_COLON] = ACTIONS(489),
    [anon_sym_ATB_COLON] = ACTIONS(489),
    [anon_sym_ATe_COLON] = ACTIONS(489),
    [anon_sym_ATF_COLON] = ACTIONS(489),
    [anon_sym_ATi_COLON] = ACTIONS(489),
    [anon_sym_ATk_COLON] = ACTIONS(489),
    [anon_sym_ATo_COLON] = ACTIONS(489),
    [anon_sym_ATr_COLON] = ACTIONS(489),
    [anon_sym_ATf_COLON] = ACTIONS(489),
    [anon_sym_ATs_COLON] = ACTIONS(489),
    [anon_sym_ATx_COLON] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_PIPE_DOT] = ACTIONS(489),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_GT_GT] = ACTIONS(489),
    [sym_html_redirect_operator] = ACTIONS(491),
    [sym_html_append_operator] = ACTIONS(489),
    [anon_sym_BQUOTE] = ACTIONS(489),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(489),
    [anon_sym_CR] = ACTIONS(489),
    [anon_sym_SEMI] = ACTIONS(489),
    [sym_file_descriptor] = ACTIONS(489),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPEH] = ACTIONS(493),
    [anon_sym_PIPET] = ACTIONS(493),
    [anon_sym_AT_AT] = ACTIONS(495),
    [anon_sym_AT_ATdbt] = ACTIONS(495),
    [anon_sym_AT_ATdbta] = ACTIONS(493),
    [anon_sym_AT_ATdbtb] = ACTIONS(493),
    [anon_sym_AT_ATdbts] = ACTIONS(493),
    [anon_sym_AT_AT_DOT] = ACTIONS(493),
    [anon_sym_AT_AT_EQ] = ACTIONS(493),
    [anon_sym_AT_ATk] = ACTIONS(493),
    [anon_sym_AT_ATt] = ACTIONS(493),
    [anon_sym_AT_ATb] = ACTIONS(493),
    [anon_sym_AT_ATi] = ACTIONS(495),
    [anon_sym_AT_ATiS] = ACTIONS(493),
    [anon_sym_AT_ATf] = ACTIONS(493),
    [anon_sym_AT_ATs_COLON] = ACTIONS(493),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
    [anon_sym_AT] = ACTIONS(495),
    [anon_sym_AT_BANG] = ACTIONS(493),
    [anon_sym_AT_LPAREN] = ACTIONS(493),
    [anon_sym_ATa_COLON] = ACTIONS(493),
    [anon_sym_ATb_COLON] = ACTIONS(493),
    [anon_sym_ATB_COLON] = ACTIONS(493),
    [anon_sym_ATe_COLON] = ACTIONS(493),
    [anon_sym_ATF_COLON] = ACTIONS(493),
    [anon_sym_ATi_COLON] = ACTIONS(493),
    [anon_sym_ATk_COLON] = ACTIONS(493),
    [anon_sym_ATo_COLON] = ACTIONS(493),
    [anon_sym_ATr_COLON] = ACTIONS(493),
    [anon_sym_ATf_COLON] = ACTIONS(493),
    [anon_sym_ATs_COLON] = ACTIONS(493),
    [anon_sym_ATx_COLON] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_PIPE_DOT] = ACTIONS(493),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_GT_GT] = ACTIONS(493),
    [sym_html_redirect_operator] = ACTIONS(495),
    [sym_html_append_operator] = ACTIONS(493),
    [anon_sym_BQUOTE] = ACTIONS(493),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(493),
    [anon_sym_CR] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [sym_file_descriptor] = ACTIONS(493),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(497),
    [anon_sym_TILDE] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_PIPEH] = ACTIONS(497),
    [anon_sym_PIPET] = ACTIONS(497),
    [anon_sym_AT_AT] = ACTIONS(499),
    [anon_sym_AT_ATdbt] = ACTIONS(499),
    [anon_sym_AT_ATdbta] = ACTIONS(497),
    [anon_sym_AT_ATdbtb] = ACTIONS(497),
    [anon_sym_AT_ATdbts] = ACTIONS(497),
    [anon_sym_AT_AT_DOT] = ACTIONS(497),
    [anon_sym_AT_AT_EQ] = ACTIONS(497),
    [anon_sym_AT_ATk] = ACTIONS(497),
    [anon_sym_AT_ATt] = ACTIONS(497),
    [anon_sym_AT_ATb] = ACTIONS(497),
    [anon_sym_AT_ATi] = ACTIONS(499),
    [anon_sym_AT_ATiS] = ACTIONS(497),
    [anon_sym_AT_ATf] = ACTIONS(497),
    [anon_sym_AT_ATs_COLON] = ACTIONS(497),
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(499),
    [anon_sym_AT_BANG] = ACTIONS(497),
    [anon_sym_AT_LPAREN] = ACTIONS(497),
    [anon_sym_ATa_COLON] = ACTIONS(497),
    [anon_sym_ATb_COLON] = ACTIONS(497),
    [anon_sym_ATB_COLON] = ACTIONS(497),
    [anon_sym_ATe_COLON] = ACTIONS(497),
    [anon_sym_ATF_COLON] = ACTIONS(497),
    [anon_sym_ATi_COLON] = ACTIONS(497),
    [anon_sym_ATk_COLON] = ACTIONS(497),
    [anon_sym_ATo_COLON] = ACTIONS(497),
    [anon_sym_ATr_COLON] = ACTIONS(497),
    [anon_sym_ATf_COLON] = ACTIONS(497),
    [anon_sym_ATs_COLON] = ACTIONS(497),
    [anon_sym_ATx_COLON] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_PIPE_DOT] = ACTIONS(497),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(499),
    [anon_sym_GT_GT] = ACTIONS(497),
    [sym_html_redirect_operator] = ACTIONS(499),
    [sym_html_append_operator] = ACTIONS(497),
    [anon_sym_BQUOTE] = ACTIONS(497),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(497),
    [anon_sym_CR] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_file_descriptor] = ACTIONS(497),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_PIPE] = ACTIONS(503),
    [anon_sym_PIPEH] = ACTIONS(501),
    [anon_sym_PIPET] = ACTIONS(501),
    [anon_sym_AT_AT] = ACTIONS(503),
    [anon_sym_AT_ATdbt] = ACTIONS(503),
    [anon_sym_AT_ATdbta] = ACTIONS(501),
    [anon_sym_AT_ATdbtb] = ACTIONS(501),
    [anon_sym_AT_ATdbts] = ACTIONS(501),
    [anon_sym_AT_AT_DOT] = ACTIONS(501),
    [anon_sym_AT_AT_EQ] = ACTIONS(501),
    [anon_sym_AT_ATk] = ACTIONS(501),
    [anon_sym_AT_ATt] = ACTIONS(501),
    [anon_sym_AT_ATb] = ACTIONS(501),
    [anon_sym_AT_ATi] = ACTIONS(503),
    [anon_sym_AT_ATiS] = ACTIONS(501),
    [anon_sym_AT_ATf] = ACTIONS(501),
    [anon_sym_AT_ATs_COLON] = ACTIONS(501),
    [anon_sym_AT_ATc_COLON] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(503),
    [anon_sym_AT_BANG] = ACTIONS(501),
    [anon_sym_AT_LPAREN] = ACTIONS(501),
    [anon_sym_ATa_COLON] = ACTIONS(501),
    [anon_sym_ATb_COLON] = ACTIONS(501),
    [anon_sym_ATB_COLON] = ACTIONS(501),
    [anon_sym_ATe_COLON] = ACTIONS(501),
    [anon_sym_ATF_COLON] = ACTIONS(501),
    [anon_sym_ATi_COLON] = ACTIONS(501),
    [anon_sym_ATk_COLON] = ACTIONS(501),
    [anon_sym_ATo_COLON] = ACTIONS(501),
    [anon_sym_ATr_COLON] = ACTIONS(501),
    [anon_sym_ATf_COLON] = ACTIONS(501),
    [anon_sym_ATs_COLON] = ACTIONS(501),
    [anon_sym_ATx_COLON] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
    [anon_sym_PIPE_DOT] = ACTIONS(501),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(503),
    [anon_sym_GT_GT] = ACTIONS(501),
    [sym_html_redirect_operator] = ACTIONS(503),
    [sym_html_append_operator] = ACTIONS(501),
    [anon_sym_BQUOTE] = ACTIONS(501),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(501),
    [anon_sym_CR] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(501),
    [sym_file_descriptor] = ACTIONS(501),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(507),
    [anon_sym_PIPEH] = ACTIONS(505),
    [anon_sym_PIPET] = ACTIONS(505),
    [anon_sym_AT_AT] = ACTIONS(507),
    [anon_sym_AT_ATdbt] = ACTIONS(507),
    [anon_sym_AT_ATdbta] = ACTIONS(505),
    [anon_sym_AT_ATdbtb] = ACTIONS(505),
    [anon_sym_AT_ATdbts] = ACTIONS(505),
    [anon_sym_AT_AT_DOT] = ACTIONS(505),
    [anon_sym_AT_AT_EQ] = ACTIONS(505),
    [anon_sym_AT_ATk] = ACTIONS(505),
    [anon_sym_AT_ATt] = ACTIONS(505),
    [anon_sym_AT_ATb] = ACTIONS(505),
    [anon_sym_AT_ATi] = ACTIONS(507),
    [anon_sym_AT_ATiS] = ACTIONS(505),
    [anon_sym_AT_ATf] = ACTIONS(505),
    [anon_sym_AT_ATs_COLON] = ACTIONS(505),
    [anon_sym_AT_ATc_COLON] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(507),
    [anon_sym_AT_BANG] = ACTIONS(505),
    [anon_sym_AT_LPAREN] = ACTIONS(505),
    [anon_sym_ATa_COLON] = ACTIONS(505),
    [anon_sym_ATb_COLON] = ACTIONS(505),
    [anon_sym_ATB_COLON] = ACTIONS(505),
    [anon_sym_ATe_COLON] = ACTIONS(505),
    [anon_sym_ATF_COLON] = ACTIONS(505),
    [anon_sym_ATi_COLON] = ACTIONS(505),
    [anon_sym_ATk_COLON] = ACTIONS(505),
    [anon_sym_ATo_COLON] = ACTIONS(505),
    [anon_sym_ATr_COLON] = ACTIONS(505),
    [anon_sym_ATf_COLON] = ACTIONS(505),
    [anon_sym_ATs_COLON] = ACTIONS(505),
    [anon_sym_ATx_COLON] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
    [anon_sym_PIPE_DOT] = ACTIONS(505),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(507),
    [anon_sym_GT_GT] = ACTIONS(505),
    [sym_html_redirect_operator] = ACTIONS(507),
    [sym_html_append_operator] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_CR] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_file_descriptor] = ACTIONS(505),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PIPEH] = ACTIONS(509),
    [anon_sym_PIPET] = ACTIONS(509),
    [anon_sym_AT_AT] = ACTIONS(511),
    [anon_sym_AT_ATdbt] = ACTIONS(511),
    [anon_sym_AT_ATdbta] = ACTIONS(509),
    [anon_sym_AT_ATdbtb] = ACTIONS(509),
    [anon_sym_AT_ATdbts] = ACTIONS(509),
    [anon_sym_AT_AT_DOT] = ACTIONS(509),
    [anon_sym_AT_AT_EQ] = ACTIONS(509),
    [anon_sym_AT_ATk] = ACTIONS(509),
    [anon_sym_AT_ATt] = ACTIONS(509),
    [anon_sym_AT_ATb] = ACTIONS(509),
    [anon_sym_AT_ATi] = ACTIONS(511),
    [anon_sym_AT_ATiS] = ACTIONS(509),
    [anon_sym_AT_ATf] = ACTIONS(509),
    [anon_sym_AT_ATs_COLON] = ACTIONS(509),
    [anon_sym_AT_ATc_COLON] = ACTIONS(509),
    [anon_sym_AT] = ACTIONS(511),
    [anon_sym_AT_BANG] = ACTIONS(509),
    [anon_sym_AT_LPAREN] = ACTIONS(509),
    [anon_sym_ATa_COLON] = ACTIONS(509),
    [anon_sym_ATb_COLON] = ACTIONS(509),
    [anon_sym_ATB_COLON] = ACTIONS(509),
    [anon_sym_ATe_COLON] = ACTIONS(509),
    [anon_sym_ATF_COLON] = ACTIONS(509),
    [anon_sym_ATi_COLON] = ACTIONS(509),
    [anon_sym_ATk_COLON] = ACTIONS(509),
    [anon_sym_ATo_COLON] = ACTIONS(509),
    [anon_sym_ATr_COLON] = ACTIONS(509),
    [anon_sym_ATf_COLON] = ACTIONS(509),
    [anon_sym_ATs_COLON] = ACTIONS(509),
    [anon_sym_ATx_COLON] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
    [anon_sym_PIPE_DOT] = ACTIONS(509),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(509),
    [sym_html_redirect_operator] = ACTIONS(511),
    [sym_html_append_operator] = ACTIONS(509),
    [anon_sym_BQUOTE] = ACTIONS(509),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(509),
    [anon_sym_CR] = ACTIONS(509),
    [anon_sym_SEMI] = ACTIONS(509),
    [sym_file_descriptor] = ACTIONS(509),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PIPEH] = ACTIONS(515),
    [anon_sym_PIPET] = ACTIONS(515),
    [anon_sym_AT_AT] = ACTIONS(515),
    [anon_sym_AT_ATdbt] = ACTIONS(515),
    [anon_sym_AT_ATdbta] = ACTIONS(515),
    [anon_sym_AT_ATdbtb] = ACTIONS(515),
    [anon_sym_AT_ATdbts] = ACTIONS(515),
    [anon_sym_AT_AT_DOT] = ACTIONS(515),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(515),
    [anon_sym_AT_ATt] = ACTIONS(515),
    [anon_sym_AT_ATb] = ACTIONS(515),
    [anon_sym_AT_ATi] = ACTIONS(515),
    [anon_sym_AT_ATiS] = ACTIONS(515),
    [anon_sym_AT_ATf] = ACTIONS(515),
    [anon_sym_AT_ATs_COLON] = ACTIONS(515),
    [anon_sym_AT_ATc_COLON] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_AT_BANG] = ACTIONS(515),
    [anon_sym_AT_LPAREN] = ACTIONS(515),
    [anon_sym_ATa_COLON] = ACTIONS(515),
    [anon_sym_ATb_COLON] = ACTIONS(515),
    [anon_sym_ATB_COLON] = ACTIONS(515),
    [anon_sym_ATe_COLON] = ACTIONS(515),
    [anon_sym_ATF_COLON] = ACTIONS(515),
    [anon_sym_ATi_COLON] = ACTIONS(515),
    [anon_sym_ATk_COLON] = ACTIONS(515),
    [anon_sym_ATo_COLON] = ACTIONS(515),
    [anon_sym_ATr_COLON] = ACTIONS(515),
    [anon_sym_ATf_COLON] = ACTIONS(515),
    [anon_sym_ATs_COLON] = ACTIONS(515),
    [anon_sym_ATx_COLON] = ACTIONS(515),
    [anon_sym_PIPE_DOT] = ACTIONS(515),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(515),
    [sym_html_redirect_operator] = ACTIONS(515),
    [sym_html_append_operator] = ACTIONS(515),
    [sym_eq_sep_key] = ACTIONS(515),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_CR] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_file_descriptor] = ACTIONS(513),
  },
  [120] = {
    [sym__redirect_operator] = STATE(155),
    [sym_fdn_redirect_operator] = STATE(155),
    [sym_fdn_append_operator] = STATE(155),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(519),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_html_redirect_operator] = ACTIONS(279),
    [sym_html_append_operator] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(283),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_TILDE] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_PIPEH] = ACTIONS(525),
    [anon_sym_PIPET] = ACTIONS(525),
    [sym_pipe_second_command] = ACTIONS(527),
    [anon_sym_AT_AT] = ACTIONS(525),
    [anon_sym_AT_ATdbt] = ACTIONS(525),
    [anon_sym_AT_ATdbta] = ACTIONS(525),
    [anon_sym_AT_ATdbtb] = ACTIONS(525),
    [anon_sym_AT_ATdbts] = ACTIONS(525),
    [anon_sym_AT_AT_DOT] = ACTIONS(525),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(525),
    [anon_sym_AT_ATt] = ACTIONS(525),
    [anon_sym_AT_ATb] = ACTIONS(525),
    [anon_sym_AT_ATi] = ACTIONS(525),
    [anon_sym_AT_ATiS] = ACTIONS(525),
    [anon_sym_AT_ATf] = ACTIONS(525),
    [anon_sym_AT_ATs_COLON] = ACTIONS(525),
    [anon_sym_AT_ATc_COLON] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym_AT_BANG] = ACTIONS(525),
    [anon_sym_AT_LPAREN] = ACTIONS(525),
    [anon_sym_ATa_COLON] = ACTIONS(525),
    [anon_sym_ATb_COLON] = ACTIONS(525),
    [anon_sym_ATB_COLON] = ACTIONS(525),
    [anon_sym_ATe_COLON] = ACTIONS(525),
    [anon_sym_ATF_COLON] = ACTIONS(525),
    [anon_sym_ATi_COLON] = ACTIONS(525),
    [anon_sym_ATk_COLON] = ACTIONS(525),
    [anon_sym_ATo_COLON] = ACTIONS(525),
    [anon_sym_ATr_COLON] = ACTIONS(525),
    [anon_sym_ATf_COLON] = ACTIONS(525),
    [anon_sym_ATs_COLON] = ACTIONS(525),
    [anon_sym_ATx_COLON] = ACTIONS(525),
    [anon_sym_PIPE_DOT] = ACTIONS(525),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(525),
    [anon_sym_GT_GT] = ACTIONS(525),
    [sym_html_redirect_operator] = ACTIONS(525),
    [sym_html_append_operator] = ACTIONS(525),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(525),
    [anon_sym_CR] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(525),
    [sym_file_descriptor] = ACTIONS(523),
  },
  [122] = {
    [sym__redirect_operator] = STATE(155),
    [sym_fdn_redirect_operator] = STATE(155),
    [sym_fdn_append_operator] = STATE(155),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_html_redirect_operator] = ACTIONS(279),
    [sym_html_append_operator] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(283),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(533),
    [sym_html_redirect_operator] = ACTIONS(535),
    [sym_html_append_operator] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_CR] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(533),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(537),
    [sym_html_redirect_operator] = ACTIONS(539),
    [sym_html_append_operator] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(537),
    [anon_sym_CR] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_file_descriptor] = ACTIONS(537),
  },
  [125] = {
    [sym__eq_sep_args] = STATE(90),
    [anon_sym_TILDE] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_PIPEH] = ACTIONS(355),
    [anon_sym_PIPET] = ACTIONS(355),
    [anon_sym_AT_AT] = ACTIONS(355),
    [anon_sym_AT_ATdbt] = ACTIONS(355),
    [anon_sym_AT_ATdbta] = ACTIONS(355),
    [anon_sym_AT_ATdbtb] = ACTIONS(355),
    [anon_sym_AT_ATdbts] = ACTIONS(355),
    [anon_sym_AT_AT_DOT] = ACTIONS(355),
    [anon_sym_AT_AT_EQ] = ACTIONS(355),
    [anon_sym_AT_ATk] = ACTIONS(355),
    [anon_sym_AT_ATt] = ACTIONS(355),
    [anon_sym_AT_ATb] = ACTIONS(355),
    [anon_sym_AT_ATi] = ACTIONS(355),
    [anon_sym_AT_ATiS] = ACTIONS(355),
    [anon_sym_AT_ATf] = ACTIONS(355),
    [anon_sym_AT_ATs_COLON] = ACTIONS(355),
    [anon_sym_AT_ATc_COLON] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
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
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_eq_sep_key] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [126] = {
    [sym_system_arg] = STATE(93),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_PIPEH] = ACTIONS(321),
    [anon_sym_PIPET] = ACTIONS(321),
    [anon_sym_AT_AT] = ACTIONS(321),
    [anon_sym_AT_ATdbt] = ACTIONS(321),
    [anon_sym_AT_ATdbta] = ACTIONS(321),
    [anon_sym_AT_ATdbtb] = ACTIONS(321),
    [anon_sym_AT_ATdbts] = ACTIONS(321),
    [anon_sym_AT_AT_DOT] = ACTIONS(321),
    [anon_sym_AT_AT_EQ] = ACTIONS(321),
    [anon_sym_AT_ATk] = ACTIONS(321),
    [anon_sym_AT_ATt] = ACTIONS(321),
    [anon_sym_AT_ATb] = ACTIONS(321),
    [anon_sym_AT_ATi] = ACTIONS(321),
    [anon_sym_AT_ATiS] = ACTIONS(321),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(321),
    [anon_sym_AT_ATc_COLON] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_AT_BANG] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(321),
    [anon_sym_ATa_COLON] = ACTIONS(321),
    [anon_sym_ATb_COLON] = ACTIONS(321),
    [anon_sym_ATB_COLON] = ACTIONS(321),
    [anon_sym_ATe_COLON] = ACTIONS(321),
    [anon_sym_ATF_COLON] = ACTIONS(321),
    [anon_sym_ATi_COLON] = ACTIONS(321),
    [anon_sym_ATk_COLON] = ACTIONS(321),
    [anon_sym_ATo_COLON] = ACTIONS(321),
    [anon_sym_ATr_COLON] = ACTIONS(321),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(321),
    [anon_sym_ATx_COLON] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_PIPE_DOT] = ACTIONS(321),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [sym_html_redirect_operator] = ACTIONS(321),
    [sym_html_append_operator] = ACTIONS(321),
    [sym__any_command] = ACTIONS(323),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym_file_descriptor] = ACTIONS(319),
  },
  [127] = {
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPEH] = ACTIONS(343),
    [anon_sym_PIPET] = ACTIONS(343),
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
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_PIPE_DOT] = ACTIONS(343),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [sym_html_redirect_operator] = ACTIONS(343),
    [sym_html_append_operator] = ACTIONS(343),
    [sym_macro_content] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(343),
    [sym_file_descriptor] = ACTIONS(341),
  },
  [128] = {
    [sym_system_arg] = STATE(93),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_PIPEH] = ACTIONS(321),
    [anon_sym_PIPET] = ACTIONS(321),
    [anon_sym_AT_AT] = ACTIONS(321),
    [anon_sym_AT_ATdbt] = ACTIONS(321),
    [anon_sym_AT_ATdbta] = ACTIONS(321),
    [anon_sym_AT_ATdbtb] = ACTIONS(321),
    [anon_sym_AT_ATdbts] = ACTIONS(321),
    [anon_sym_AT_AT_DOT] = ACTIONS(321),
    [anon_sym_AT_AT_EQ] = ACTIONS(321),
    [anon_sym_AT_ATk] = ACTIONS(321),
    [anon_sym_AT_ATt] = ACTIONS(321),
    [anon_sym_AT_ATb] = ACTIONS(321),
    [anon_sym_AT_ATi] = ACTIONS(321),
    [anon_sym_AT_ATiS] = ACTIONS(321),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(321),
    [anon_sym_AT_ATc_COLON] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym_AT_BANG] = ACTIONS(321),
    [anon_sym_AT_LPAREN] = ACTIONS(321),
    [anon_sym_ATa_COLON] = ACTIONS(321),
    [anon_sym_ATb_COLON] = ACTIONS(321),
    [anon_sym_ATB_COLON] = ACTIONS(321),
    [anon_sym_ATe_COLON] = ACTIONS(321),
    [anon_sym_ATF_COLON] = ACTIONS(321),
    [anon_sym_ATi_COLON] = ACTIONS(321),
    [anon_sym_ATk_COLON] = ACTIONS(321),
    [anon_sym_ATo_COLON] = ACTIONS(321),
    [anon_sym_ATr_COLON] = ACTIONS(321),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(321),
    [anon_sym_ATx_COLON] = ACTIONS(321),
    [anon_sym_PIPE_DOT] = ACTIONS(321),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(321),
    [sym_html_redirect_operator] = ACTIONS(321),
    [sym_html_append_operator] = ACTIONS(321),
    [sym__any_command] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym_file_descriptor] = ACTIONS(319),
  },
  [129] = {
    [sym__eq_sep_args] = STATE(90),
    [anon_sym_TILDE] = ACTIONS(355),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_PIPEH] = ACTIONS(355),
    [anon_sym_PIPET] = ACTIONS(355),
    [anon_sym_AT_AT] = ACTIONS(355),
    [anon_sym_AT_ATdbt] = ACTIONS(355),
    [anon_sym_AT_ATdbta] = ACTIONS(355),
    [anon_sym_AT_ATdbtb] = ACTIONS(355),
    [anon_sym_AT_ATdbts] = ACTIONS(355),
    [anon_sym_AT_AT_DOT] = ACTIONS(355),
    [anon_sym_AT_AT_EQ] = ACTIONS(355),
    [anon_sym_AT_ATk] = ACTIONS(355),
    [anon_sym_AT_ATt] = ACTIONS(355),
    [anon_sym_AT_ATb] = ACTIONS(355),
    [anon_sym_AT_ATi] = ACTIONS(355),
    [anon_sym_AT_ATiS] = ACTIONS(355),
    [anon_sym_AT_ATf] = ACTIONS(355),
    [anon_sym_AT_ATs_COLON] = ACTIONS(355),
    [anon_sym_AT_ATc_COLON] = ACTIONS(355),
    [anon_sym_AT] = ACTIONS(355),
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
    [anon_sym_PIPE_DOT] = ACTIONS(355),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_eq_sep_key] = ACTIONS(357),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [130] = {
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PIPEH] = ACTIONS(515),
    [anon_sym_PIPET] = ACTIONS(515),
    [anon_sym_AT_AT] = ACTIONS(515),
    [anon_sym_AT_ATdbt] = ACTIONS(515),
    [anon_sym_AT_ATdbta] = ACTIONS(515),
    [anon_sym_AT_ATdbtb] = ACTIONS(515),
    [anon_sym_AT_ATdbts] = ACTIONS(515),
    [anon_sym_AT_AT_DOT] = ACTIONS(515),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(515),
    [anon_sym_AT_ATt] = ACTIONS(515),
    [anon_sym_AT_ATb] = ACTIONS(515),
    [anon_sym_AT_ATi] = ACTIONS(515),
    [anon_sym_AT_ATiS] = ACTIONS(515),
    [anon_sym_AT_ATf] = ACTIONS(515),
    [anon_sym_AT_ATs_COLON] = ACTIONS(515),
    [anon_sym_AT_ATc_COLON] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_AT_BANG] = ACTIONS(515),
    [anon_sym_AT_LPAREN] = ACTIONS(515),
    [anon_sym_ATa_COLON] = ACTIONS(515),
    [anon_sym_ATb_COLON] = ACTIONS(515),
    [anon_sym_ATB_COLON] = ACTIONS(515),
    [anon_sym_ATe_COLON] = ACTIONS(515),
    [anon_sym_ATF_COLON] = ACTIONS(515),
    [anon_sym_ATi_COLON] = ACTIONS(515),
    [anon_sym_ATk_COLON] = ACTIONS(515),
    [anon_sym_ATo_COLON] = ACTIONS(515),
    [anon_sym_ATr_COLON] = ACTIONS(515),
    [anon_sym_ATf_COLON] = ACTIONS(515),
    [anon_sym_ATs_COLON] = ACTIONS(515),
    [anon_sym_ATx_COLON] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_PIPE_DOT] = ACTIONS(515),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(515),
    [sym_html_redirect_operator] = ACTIONS(515),
    [sym_html_append_operator] = ACTIONS(515),
    [sym_eq_sep_key] = ACTIONS(515),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_file_descriptor] = ACTIONS(513),
  },
  [131] = {
    [anon_sym_TILDE] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_PIPEH] = ACTIONS(525),
    [anon_sym_PIPET] = ACTIONS(525),
    [sym_pipe_second_command] = ACTIONS(527),
    [anon_sym_AT_AT] = ACTIONS(525),
    [anon_sym_AT_ATdbt] = ACTIONS(525),
    [anon_sym_AT_ATdbta] = ACTIONS(525),
    [anon_sym_AT_ATdbtb] = ACTIONS(525),
    [anon_sym_AT_ATdbts] = ACTIONS(525),
    [anon_sym_AT_AT_DOT] = ACTIONS(525),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(525),
    [anon_sym_AT_ATt] = ACTIONS(525),
    [anon_sym_AT_ATb] = ACTIONS(525),
    [anon_sym_AT_ATi] = ACTIONS(525),
    [anon_sym_AT_ATiS] = ACTIONS(525),
    [anon_sym_AT_ATf] = ACTIONS(525),
    [anon_sym_AT_ATs_COLON] = ACTIONS(525),
    [anon_sym_AT_ATc_COLON] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym_AT_BANG] = ACTIONS(525),
    [anon_sym_AT_LPAREN] = ACTIONS(525),
    [anon_sym_ATa_COLON] = ACTIONS(525),
    [anon_sym_ATb_COLON] = ACTIONS(525),
    [anon_sym_ATB_COLON] = ACTIONS(525),
    [anon_sym_ATe_COLON] = ACTIONS(525),
    [anon_sym_ATF_COLON] = ACTIONS(525),
    [anon_sym_ATi_COLON] = ACTIONS(525),
    [anon_sym_ATk_COLON] = ACTIONS(525),
    [anon_sym_ATo_COLON] = ACTIONS(525),
    [anon_sym_ATr_COLON] = ACTIONS(525),
    [anon_sym_ATf_COLON] = ACTIONS(525),
    [anon_sym_ATs_COLON] = ACTIONS(525),
    [anon_sym_ATx_COLON] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
    [anon_sym_PIPE_DOT] = ACTIONS(525),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(525),
    [anon_sym_GT_GT] = ACTIONS(525),
    [sym_html_redirect_operator] = ACTIONS(525),
    [sym_html_append_operator] = ACTIONS(525),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(525),
    [sym_file_descriptor] = ACTIONS(523),
  },
  [132] = {
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PIPEH] = ACTIONS(515),
    [anon_sym_PIPET] = ACTIONS(515),
    [anon_sym_AT_AT] = ACTIONS(515),
    [anon_sym_AT_ATdbt] = ACTIONS(515),
    [anon_sym_AT_ATdbta] = ACTIONS(515),
    [anon_sym_AT_ATdbtb] = ACTIONS(515),
    [anon_sym_AT_ATdbts] = ACTIONS(515),
    [anon_sym_AT_AT_DOT] = ACTIONS(515),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(515),
    [anon_sym_AT_ATt] = ACTIONS(515),
    [anon_sym_AT_ATb] = ACTIONS(515),
    [anon_sym_AT_ATi] = ACTIONS(515),
    [anon_sym_AT_ATiS] = ACTIONS(515),
    [anon_sym_AT_ATf] = ACTIONS(515),
    [anon_sym_AT_ATs_COLON] = ACTIONS(515),
    [anon_sym_AT_ATc_COLON] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_AT_BANG] = ACTIONS(515),
    [anon_sym_AT_LPAREN] = ACTIONS(515),
    [anon_sym_ATa_COLON] = ACTIONS(515),
    [anon_sym_ATb_COLON] = ACTIONS(515),
    [anon_sym_ATB_COLON] = ACTIONS(515),
    [anon_sym_ATe_COLON] = ACTIONS(515),
    [anon_sym_ATF_COLON] = ACTIONS(515),
    [anon_sym_ATi_COLON] = ACTIONS(515),
    [anon_sym_ATk_COLON] = ACTIONS(515),
    [anon_sym_ATo_COLON] = ACTIONS(515),
    [anon_sym_ATr_COLON] = ACTIONS(515),
    [anon_sym_ATf_COLON] = ACTIONS(515),
    [anon_sym_ATs_COLON] = ACTIONS(515),
    [anon_sym_ATx_COLON] = ACTIONS(515),
    [anon_sym_PIPE_DOT] = ACTIONS(515),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(515),
    [sym_html_redirect_operator] = ACTIONS(515),
    [sym_html_append_operator] = ACTIONS(515),
    [sym_eq_sep_key] = ACTIONS(515),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_file_descriptor] = ACTIONS(513),
  },
  [133] = {
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPEH] = ACTIONS(343),
    [anon_sym_PIPET] = ACTIONS(343),
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
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_PIPE_DOT] = ACTIONS(343),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(343),
    [sym_html_redirect_operator] = ACTIONS(343),
    [sym_html_append_operator] = ACTIONS(343),
    [sym_macro_content] = ACTIONS(541),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(343),
    [sym_file_descriptor] = ACTIONS(341),
  },
  [134] = {
    [anon_sym_TILDE] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_PIPEH] = ACTIONS(525),
    [anon_sym_PIPET] = ACTIONS(525),
    [sym_pipe_second_command] = ACTIONS(527),
    [anon_sym_AT_AT] = ACTIONS(525),
    [anon_sym_AT_ATdbt] = ACTIONS(525),
    [anon_sym_AT_ATdbta] = ACTIONS(525),
    [anon_sym_AT_ATdbtb] = ACTIONS(525),
    [anon_sym_AT_ATdbts] = ACTIONS(525),
    [anon_sym_AT_AT_DOT] = ACTIONS(525),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(525),
    [anon_sym_AT_ATt] = ACTIONS(525),
    [anon_sym_AT_ATb] = ACTIONS(525),
    [anon_sym_AT_ATi] = ACTIONS(525),
    [anon_sym_AT_ATiS] = ACTIONS(525),
    [anon_sym_AT_ATf] = ACTIONS(525),
    [anon_sym_AT_ATs_COLON] = ACTIONS(525),
    [anon_sym_AT_ATc_COLON] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym_AT_BANG] = ACTIONS(525),
    [anon_sym_AT_LPAREN] = ACTIONS(525),
    [anon_sym_ATa_COLON] = ACTIONS(525),
    [anon_sym_ATb_COLON] = ACTIONS(525),
    [anon_sym_ATB_COLON] = ACTIONS(525),
    [anon_sym_ATe_COLON] = ACTIONS(525),
    [anon_sym_ATF_COLON] = ACTIONS(525),
    [anon_sym_ATi_COLON] = ACTIONS(525),
    [anon_sym_ATk_COLON] = ACTIONS(525),
    [anon_sym_ATo_COLON] = ACTIONS(525),
    [anon_sym_ATr_COLON] = ACTIONS(525),
    [anon_sym_ATf_COLON] = ACTIONS(525),
    [anon_sym_ATs_COLON] = ACTIONS(525),
    [anon_sym_ATx_COLON] = ACTIONS(525),
    [anon_sym_PIPE_DOT] = ACTIONS(525),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(525),
    [anon_sym_GT_GT] = ACTIONS(525),
    [sym_html_redirect_operator] = ACTIONS(525),
    [sym_html_append_operator] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(525),
    [sym_file_descriptor] = ACTIONS(523),
  },
  [135] = {
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(537),
    [sym_html_redirect_operator] = ACTIONS(539),
    [sym_html_append_operator] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_file_descriptor] = ACTIONS(537),
  },
  [136] = {
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(225),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(533),
    [sym_html_redirect_operator] = ACTIONS(535),
    [sym_html_append_operator] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(533),
  },
  [137] = {
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPEH] = ACTIONS(197),
    [anon_sym_PIPET] = ACTIONS(197),
    [anon_sym_AT_AT] = ACTIONS(199),
    [anon_sym_AT_ATdbt] = ACTIONS(199),
    [anon_sym_AT_ATdbta] = ACTIONS(197),
    [anon_sym_AT_ATdbtb] = ACTIONS(197),
    [anon_sym_AT_ATdbts] = ACTIONS(197),
    [anon_sym_AT_AT_DOT] = ACTIONS(197),
    [anon_sym_AT_AT_EQ] = ACTIONS(197),
    [anon_sym_AT_ATk] = ACTIONS(197),
    [anon_sym_AT_ATt] = ACTIONS(197),
    [anon_sym_AT_ATb] = ACTIONS(197),
    [anon_sym_AT_ATi] = ACTIONS(199),
    [anon_sym_AT_ATiS] = ACTIONS(197),
    [anon_sym_AT_ATf] = ACTIONS(197),
    [anon_sym_AT_ATs_COLON] = ACTIONS(197),
    [anon_sym_AT_ATc_COLON] = ACTIONS(197),
    [anon_sym_AT] = ACTIONS(199),
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
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_PIPE_DOT] = ACTIONS(197),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(197),
    [sym_html_redirect_operator] = ACTIONS(199),
    [sym_html_append_operator] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
  },
  [138] = {
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(519),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(533),
    [sym_html_redirect_operator] = ACTIONS(535),
    [sym_html_append_operator] = ACTIONS(533),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(533),
  },
  [139] = {
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(519),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(243),
    [anon_sym_AT_BANG] = ACTIONS(245),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(249),
    [anon_sym_ATb_COLON] = ACTIONS(251),
    [anon_sym_ATB_COLON] = ACTIONS(253),
    [anon_sym_ATe_COLON] = ACTIONS(255),
    [anon_sym_ATF_COLON] = ACTIONS(257),
    [anon_sym_ATi_COLON] = ACTIONS(259),
    [anon_sym_ATk_COLON] = ACTIONS(261),
    [anon_sym_ATo_COLON] = ACTIONS(263),
    [anon_sym_ATr_COLON] = ACTIONS(265),
    [anon_sym_ATf_COLON] = ACTIONS(267),
    [anon_sym_ATs_COLON] = ACTIONS(269),
    [anon_sym_ATx_COLON] = ACTIONS(271),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(537),
    [sym_html_redirect_operator] = ACTIONS(539),
    [sym_html_append_operator] = ACTIONS(537),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_file_descriptor] = ACTIONS(537),
  },
  [140] = {
    [aux_sym_commands_repeat1] = STATE(140),
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_DOT_BANG] = ACTIONS(543),
    [anon_sym_DOT_LPAREN] = ACTIONS(543),
    [anon_sym_DOT_SLASH] = ACTIONS(543),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_env] = ACTIONS(543),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(545),
    [aux_sym__interpret_identifier_token1] = ACTIONS(545),
    [aux_sym__interpret_identifier_token2] = ACTIONS(543),
    [sym_system_identifier] = ACTIONS(543),
    [sym_question_mark_identifier] = ACTIONS(543),
    [sym_pointer_identifier] = ACTIONS(543),
    [sym_macro_identifier] = ACTIONS(543),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(547),
    [anon_sym_CR] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(547),
    [sym_cmd_identifier] = ACTIONS(543),
    [sym__help_command] = ACTIONS(543),
    [sym_repeat_number] = ACTIONS(543),
    [sym_interpreter_identifier] = ACTIONS(543),
  },
  [141] = {
    [aux_sym__commands_singleline_repeat1] = STATE(141),
    [anon_sym_DQUOTE] = ACTIONS(550),
    [anon_sym_DOT] = ACTIONS(552),
    [anon_sym_DOT_BANG] = ACTIONS(550),
    [anon_sym_DOT_LPAREN] = ACTIONS(550),
    [anon_sym_DOT_SLASH] = ACTIONS(550),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(550),
    [anon_sym_env] = ACTIONS(550),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(552),
    [aux_sym__interpret_identifier_token1] = ACTIONS(552),
    [aux_sym__interpret_identifier_token2] = ACTIONS(550),
    [sym_system_identifier] = ACTIONS(550),
    [sym_question_mark_identifier] = ACTIONS(550),
    [sym_pointer_identifier] = ACTIONS(550),
    [sym_macro_identifier] = ACTIONS(550),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(554),
    [sym_cmd_identifier] = ACTIONS(550),
    [sym__help_command] = ACTIONS(550),
    [sym_repeat_number] = ACTIONS(550),
    [sym_interpreter_identifier] = ACTIONS(550),
  },
  [142] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(116),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [143] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(98),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [144] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(98),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [145] = {
    [sym_arg] = STATE(39),
    [sym_args] = STATE(116),
    [sym_double_quoted_arg] = STATE(44),
    [sym_single_quoted_arg] = STATE(44),
    [sym_cmd_substitution_arg] = STATE(44),
    [aux_sym_args_repeat1] = STATE(39),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [146] = {
    [sym_arg] = STATE(75),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [147] = {
    [sym_arg] = STATE(79),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [148] = {
    [sym_arg] = STATE(154),
    [sym_double_quoted_arg] = STATE(198),
    [sym_single_quoted_arg] = STATE(198),
    [sym_cmd_substitution_arg] = STATE(198),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [sym__comment] = ACTIONS(103),
  },
  [149] = {
    [sym_arg] = STATE(89),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [150] = {
    [sym_arg] = STATE(74),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [151] = {
    [sym_arg] = STATE(78),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [152] = {
    [sym_arg] = STATE(118),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [153] = {
    [sym_arg] = STATE(109),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [154] = {
    [sym_arg] = STATE(153),
    [sym_double_quoted_arg] = STATE(198),
    [sym_single_quoted_arg] = STATE(198),
    [sym_cmd_substitution_arg] = STATE(198),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [sym__comment] = ACTIONS(103),
  },
  [155] = {
    [sym_arg] = STATE(180),
    [sym_double_quoted_arg] = STATE(191),
    [sym_single_quoted_arg] = STATE(191),
    [sym_cmd_substitution_arg] = STATE(191),
    [anon_sym_DQUOTE] = ACTIONS(577),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(579),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [sym__comment] = ACTIONS(103),
  },
  [156] = {
    [sym_arg] = STATE(111),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [157] = {
    [sym_arg] = STATE(117),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [158] = {
    [sym_arg] = STATE(83),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [159] = {
    [sym_arg] = STATE(84),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [160] = {
    [sym_arg] = STATE(108),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [161] = {
    [sym_arg] = STATE(114),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [162] = {
    [sym_arg] = STATE(58),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [163] = {
    [sym_arg] = STATE(152),
    [sym_double_quoted_arg] = STATE(198),
    [sym_single_quoted_arg] = STATE(198),
    [sym_cmd_substitution_arg] = STATE(198),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [sym__comment] = ACTIONS(103),
  },
  [164] = {
    [sym_arg] = STATE(115),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [165] = {
    [sym_arg] = STATE(97),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [166] = {
    [sym_arg] = STATE(96),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [167] = {
    [sym_arg] = STATE(95),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [168] = {
    [sym_arg] = STATE(91),
    [sym_double_quoted_arg] = STATE(87),
    [sym_single_quoted_arg] = STATE(87),
    [sym_cmd_substitution_arg] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(557),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(559),
    [anon_sym_SQUOTE] = ACTIONS(561),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(563),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(103),
  },
  [169] = {
    [sym_cmd_substitution_arg] = STATE(177),
    [aux_sym_double_quoted_arg_repeat1] = STATE(177),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(589),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(589),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(589),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [170] = {
    [sym_cmd_substitution_arg] = STATE(172),
    [aux_sym_double_quoted_arg_repeat1] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(597),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(597),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(597),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [171] = {
    [sym_cmd_substitution_arg] = STATE(173),
    [aux_sym_double_quoted_arg_repeat1] = STATE(173),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(601),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(601),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [172] = {
    [sym_cmd_substitution_arg] = STATE(174),
    [aux_sym_double_quoted_arg_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(603),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(605),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [173] = {
    [sym_cmd_substitution_arg] = STATE(174),
    [aux_sym_double_quoted_arg_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(605),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [174] = {
    [sym_cmd_substitution_arg] = STATE(174),
    [aux_sym_double_quoted_arg_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(609),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(611),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(611),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(614),
    [anon_sym_BQUOTE] = ACTIONS(617),
    [sym__comment] = ACTIONS(103),
  },
  [175] = {
    [sym_cmd_substitution_arg] = STATE(176),
    [aux_sym_double_quoted_arg_repeat1] = STATE(176),
    [anon_sym_DQUOTE] = ACTIONS(620),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(622),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(622),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(622),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [176] = {
    [sym_cmd_substitution_arg] = STATE(174),
    [aux_sym_double_quoted_arg_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(605),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [177] = {
    [sym_cmd_substitution_arg] = STATE(174),
    [aux_sym_double_quoted_arg_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(626),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(605),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(605),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(103),
  },
  [178] = {
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(150),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(150),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(103),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(628),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(628),
    [anon_sym_CR] = ACTIONS(628),
    [anon_sym_SEMI] = ACTIONS(628),
  },
  [181] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_] = ACTIONS(632),
    [sym_arg_identifier] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(630),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(103),
  },
  [182] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(183),
    [anon_sym_DQUOTE] = ACTIONS(636),
    [anon_sym_] = ACTIONS(638),
    [sym_arg_identifier] = ACTIONS(640),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(636),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(103),
  },
  [183] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(183),
    [anon_sym_DQUOTE] = ACTIONS(642),
    [anon_sym_] = ACTIONS(644),
    [sym_arg_identifier] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(642),
    [anon_sym_BQUOTE] = ACTIONS(642),
    [sym__comment] = ACTIONS(103),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(649),
    [anon_sym_RPAREN] = ACTIONS(649),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(649),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(649),
    [anon_sym_CR] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(649),
  },
  [187] = {
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(150),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(150),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(103),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [192] = {
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(103),
  },
  [193] = {
    [anon_sym_DQUOTE] = ACTIONS(651),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(653),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(651),
    [anon_sym_BQUOTE] = ACTIONS(651),
    [sym__comment] = ACTIONS(103),
  },
  [194] = {
    [aux_sym_commands_repeat2] = STATE(197),
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_CR] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
  },
  [195] = {
    [anon_sym_DQUOTE] = ACTIONS(659),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(659),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(659),
    [anon_sym_BQUOTE] = ACTIONS(659),
    [sym__comment] = ACTIONS(103),
  },
  [196] = {
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(103),
  },
  [197] = {
    [aux_sym_commands_repeat2] = STATE(197),
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(665),
    [anon_sym_CR] = ACTIONS(665),
    [anon_sym_SEMI] = ACTIONS(665),
  },
  [198] = {
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(103),
  },
  [199] = {
    [anon_sym_DQUOTE] = ACTIONS(668),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(670),
    [anon_sym_SQUOTE] = ACTIONS(668),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(668),
    [anon_sym_BQUOTE] = ACTIONS(668),
    [sym__comment] = ACTIONS(103),
  },
  [200] = {
    [anon_sym_DQUOTE] = ACTIONS(672),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(674),
    [anon_sym_SQUOTE] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(672),
    [sym__comment] = ACTIONS(103),
  },
  [201] = {
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(103),
  },
  [202] = {
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(103),
  },
  [203] = {
    [aux_sym_commands_repeat2] = STATE(206),
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_CR] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
  },
  [204] = {
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(103),
  },
  [205] = {
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(103),
  },
  [206] = {
    [aux_sym_commands_repeat2] = STATE(197),
    [ts_builtin_sym_end] = ACTIONS(676),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_CR] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
  },
  [207] = {
    [aux_sym_commands_repeat2] = STATE(194),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(657),
    [anon_sym_CR] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
  },
  [208] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(209),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(680),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(680),
    [sym__comment] = ACTIONS(103),
  },
  [209] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(209),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(684),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(684),
    [sym__comment] = ACTIONS(103),
  },
  [210] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(211),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(687),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(689),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(689),
    [sym__comment] = ACTIONS(103),
  },
  [211] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(209),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(691),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(680),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(680),
    [sym__comment] = ACTIONS(103),
  },
  [212] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(214),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(693),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(695),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(695),
    [sym__comment] = ACTIONS(103),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(663),
    [anon_sym_CR] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(663),
  },
  [214] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(209),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(697),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(680),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(680),
    [sym__comment] = ACTIONS(103),
  },
  [215] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(209),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(699),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(680),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(680),
    [sym__comment] = ACTIONS(103),
  },
  [216] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(208),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(703),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(703),
    [sym__comment] = ACTIONS(103),
  },
  [217] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(215),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(705),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(707),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(707),
    [sym__comment] = ACTIONS(103),
  },
  [218] = {
    [aux_sym__commands_singleline_repeat2] = STATE(219),
    [anon_sym_RPAREN] = ACTIONS(709),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(711),
  },
  [219] = {
    [aux_sym__commands_singleline_repeat2] = STATE(227),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(711),
  },
  [220] = {
    [aux_sym__commands_singleline_repeat2] = STATE(222),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(711),
  },
  [221] = {
    [aux_sym__commands_singleline_repeat2] = STATE(225),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(713),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(715),
  },
  [222] = {
    [aux_sym__commands_singleline_repeat2] = STATE(227),
    [anon_sym_RPAREN] = ACTIONS(717),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(711),
  },
  [223] = {
    [aux_sym__commands_singleline_repeat2] = STATE(228),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(713),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(715),
  },
  [224] = {
    [aux_sym__commands_singleline_repeat2] = STATE(221),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(709),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(715),
  },
  [225] = {
    [aux_sym__commands_singleline_repeat2] = STATE(225),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(719),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(721),
  },
  [226] = {
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(719),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(719),
  },
  [227] = {
    [aux_sym__commands_singleline_repeat2] = STATE(227),
    [anon_sym_RPAREN] = ACTIONS(719),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(724),
  },
  [228] = {
    [aux_sym__commands_singleline_repeat2] = STATE(225),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(717),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(715),
  },
  [229] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(727),
    [anon_sym_GT_GT] = ACTIONS(729),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [sym__eq_sep_args] = STATE(85),
    [anon_sym_] = ACTIONS(103),
    [sym_eq_sep_key] = ACTIONS(357),
    [sym__comment] = ACTIONS(103),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_] = ACTIONS(103),
    [sym_macro_call_content] = ACTIONS(733),
    [sym__comment] = ACTIONS(103),
  },
  [232] = {
    [sym_interpret_arg] = STATE(98),
    [anon_sym_] = ACTIONS(103),
    [sym__any_command] = ACTIONS(735),
    [sym__comment] = ACTIONS(103),
  },
  [233] = {
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_] = ACTIONS(103),
    [sym_macro_call_content] = ACTIONS(739),
    [sym__comment] = ACTIONS(103),
  },
  [234] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(741),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [anon_sym_] = ACTIONS(103),
    [sym_tmp_eval_arg] = ACTIONS(743),
    [sym__comment] = ACTIONS(103),
  },
  [236] = {
    [anon_sym_DQUOTE] = ACTIONS(745),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(747),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [238] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(749),
    [sym__comment] = ACTIONS(3),
  },
  [239] = {
    [anon_sym_] = ACTIONS(103),
    [sym_tmp_eval_arg] = ACTIONS(751),
    [sym__comment] = ACTIONS(103),
  },
  [240] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(753),
    [sym__comment] = ACTIONS(3),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(757),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [243] = {
    [anon_sym_RPAREN] = ACTIONS(759),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [244] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(761),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_RPAREN] = ACTIONS(763),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [246] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(765),
    [sym__comment] = ACTIONS(3),
  },
  [247] = {
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [248] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(769),
    [anon_sym_] = ACTIONS(103),
    [sym__comment] = ACTIONS(103),
  },
  [249] = {
    [anon_sym_RPAREN] = ACTIONS(771),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(773),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [251] = {
    [anon_sym_] = ACTIONS(103),
    [sym_eq_sep_val] = ACTIONS(775),
    [sym__comment] = ACTIONS(103),
  },
  [252] = {
    [sym_grep_specifier] = ACTIONS(777),
    [anon_sym_] = ACTIONS(103),
    [sym__comment] = ACTIONS(103),
  },
  [253] = {
    [anon_sym_] = ACTIONS(103),
    [sym_macro_content] = ACTIONS(779),
    [sym__comment] = ACTIONS(103),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(781),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(248),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(232),
  [13] = {.count = 1, .reusable = true}, SHIFT(253),
  [15] = {.count = 1, .reusable = true}, SHIFT(181),
  [17] = {.count = 1, .reusable = true}, SHIFT(119),
  [19] = {.count = 1, .reusable = false}, SHIFT(59),
  [21] = {.count = 1, .reusable = false}, SHIFT(40),
  [23] = {.count = 1, .reusable = true}, SHIFT(40),
  [25] = {.count = 1, .reusable = true}, SHIFT(66),
  [27] = {.count = 1, .reusable = true}, SHIFT(27),
  [29] = {.count = 1, .reusable = true}, SHIFT(230),
  [31] = {.count = 1, .reusable = true}, SHIFT(71),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(29),
  [37] = {.count = 1, .reusable = true}, SHIFT(28),
  [39] = {.count = 1, .reusable = true}, SHIFT(26),
  [41] = {.count = 1, .reusable = true}, SHIFT(31),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, SHIFT(132),
  [51] = {.count = 1, .reusable = true}, SHIFT(128),
  [53] = {.count = 1, .reusable = true}, SHIFT(34),
  [55] = {.count = 1, .reusable = true}, SHIFT(127),
  [57] = {.count = 1, .reusable = true}, SHIFT(35),
  [59] = {.count = 1, .reusable = true}, SHIFT(36),
  [61] = {.count = 1, .reusable = true}, SHIFT(25),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = false}, SHIFT(4),
  [67] = {.count = 1, .reusable = true}, SHIFT(130),
  [69] = {.count = 1, .reusable = true}, SHIFT(126),
  [71] = {.count = 1, .reusable = true}, SHIFT(133),
  [73] = {.count = 1, .reusable = true}, SHIFT(22),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(140),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(19),
  [83] = {.count = 1, .reusable = true}, SHIFT(17),
  [85] = {.count = 1, .reusable = true}, SHIFT(141),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(171),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [95] = {.count = 1, .reusable = false}, SHIFT(44),
  [97] = {.count = 1, .reusable = true}, SHIFT(217),
  [99] = {.count = 1, .reusable = true}, SHIFT(7),
  [101] = {.count = 1, .reusable = true}, SHIFT(12),
  [103] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_args, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(171),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(44),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(217),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(7),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(12),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 2),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 2),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 2),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 3),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 3),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 3),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 3),
  [168] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [170] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(239),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [179] = {.count = 1, .reusable = true}, SHIFT(239),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [189] = {.count = 1, .reusable = true}, SHIFT(233),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(251),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [201] = {.count = 1, .reusable = true}, SHIFT(231),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(252),
  [207] = {.count = 1, .reusable = false}, SHIFT(121),
  [209] = {.count = 1, .reusable = true}, SHIFT(60),
  [211] = {.count = 1, .reusable = true}, SHIFT(61),
  [213] = {.count = 1, .reusable = false}, SHIFT(161),
  [215] = {.count = 1, .reusable = false}, SHIFT(63),
  [217] = {.count = 1, .reusable = true}, SHIFT(63),
  [219] = {.count = 1, .reusable = true}, SHIFT(64),
  [221] = {.count = 1, .reusable = true}, SHIFT(65),
  [223] = {.count = 1, .reusable = true}, SHIFT(164),
  [225] = {.count = 1, .reusable = true}, SHIFT(142),
  [227] = {.count = 1, .reusable = true}, SHIFT(157),
  [229] = {.count = 1, .reusable = true}, SHIFT(67),
  [231] = {.count = 1, .reusable = true}, SHIFT(68),
  [233] = {.count = 1, .reusable = false}, SHIFT(69),
  [235] = {.count = 1, .reusable = true}, SHIFT(70),
  [237] = {.count = 1, .reusable = true}, SHIFT(56),
  [239] = {.count = 1, .reusable = true}, SHIFT(148),
  [241] = {.count = 1, .reusable = true}, SHIFT(23),
  [243] = {.count = 1, .reusable = false}, SHIFT(160),
  [245] = {.count = 1, .reusable = true}, SHIFT(162),
  [247] = {.count = 1, .reusable = true}, SHIFT(163),
  [249] = {.count = 1, .reusable = true}, SHIFT(165),
  [251] = {.count = 1, .reusable = true}, SHIFT(166),
  [253] = {.count = 1, .reusable = true}, SHIFT(167),
  [255] = {.count = 1, .reusable = true}, SHIFT(235),
  [257] = {.count = 1, .reusable = true}, SHIFT(168),
  [259] = {.count = 1, .reusable = true}, SHIFT(149),
  [261] = {.count = 1, .reusable = true}, SHIFT(159),
  [263] = {.count = 1, .reusable = true}, SHIFT(158),
  [265] = {.count = 1, .reusable = true}, SHIFT(147),
  [267] = {.count = 1, .reusable = true}, SHIFT(151),
  [269] = {.count = 1, .reusable = true}, SHIFT(146),
  [271] = {.count = 1, .reusable = true}, SHIFT(150),
  [273] = {.count = 1, .reusable = true}, SHIFT(86),
  [275] = {.count = 1, .reusable = false}, SHIFT(195),
  [277] = {.count = 1, .reusable = true}, SHIFT(193),
  [279] = {.count = 1, .reusable = false}, SHIFT(155),
  [281] = {.count = 1, .reusable = true}, SHIFT(155),
  [283] = {.count = 1, .reusable = true}, SHIFT(229),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [289] = {.count = 1, .reusable = true}, SHIFT(156),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [323] = {.count = 1, .reusable = false}, SHIFT(94),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [345] = {.count = 1, .reusable = false}, SHIFT(53),
  [347] = {.count = 1, .reusable = false}, SHIFT(82),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [357] = {.count = 1, .reusable = false}, SHIFT(52),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [375] = {.count = 1, .reusable = true}, SHIFT(51),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_last_command, 1, .production_id = 1),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_last_command, 1, .production_id = 1),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 12),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 12),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 8),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 8),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [517] = {.count = 1, .reusable = false}, SHIFT(134),
  [519] = {.count = 1, .reusable = true}, SHIFT(145),
  [521] = {.count = 1, .reusable = true}, SHIFT(21),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [527] = {.count = 1, .reusable = false}, SHIFT(113),
  [529] = {.count = 1, .reusable = false}, SHIFT(131),
  [531] = {.count = 1, .reusable = true}, SHIFT(24),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [541] = {.count = 1, .reusable = false}, SHIFT(137),
  [543] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [545] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(140),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [552] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(141),
  [557] = {.count = 1, .reusable = true}, SHIFT(170),
  [559] = {.count = 1, .reusable = false}, SHIFT(87),
  [561] = {.count = 1, .reusable = true}, SHIFT(216),
  [563] = {.count = 1, .reusable = true}, SHIFT(15),
  [565] = {.count = 1, .reusable = true}, SHIFT(16),
  [567] = {.count = 1, .reusable = true}, SHIFT(175),
  [569] = {.count = 1, .reusable = false}, SHIFT(198),
  [571] = {.count = 1, .reusable = true}, SHIFT(210),
  [573] = {.count = 1, .reusable = true}, SHIFT(11),
  [575] = {.count = 1, .reusable = true}, SHIFT(10),
  [577] = {.count = 1, .reusable = true}, SHIFT(169),
  [579] = {.count = 1, .reusable = false}, SHIFT(191),
  [581] = {.count = 1, .reusable = true}, SHIFT(212),
  [583] = {.count = 1, .reusable = true}, SHIFT(9),
  [585] = {.count = 1, .reusable = true}, SHIFT(13),
  [587] = {.count = 1, .reusable = false}, SHIFT(188),
  [589] = {.count = 1, .reusable = false}, SHIFT(177),
  [591] = {.count = 1, .reusable = false}, SHIFT(14),
  [593] = {.count = 1, .reusable = false}, SHIFT(8),
  [595] = {.count = 1, .reusable = false}, SHIFT(81),
  [597] = {.count = 1, .reusable = false}, SHIFT(172),
  [599] = {.count = 1, .reusable = false}, SHIFT(43),
  [601] = {.count = 1, .reusable = false}, SHIFT(173),
  [603] = {.count = 1, .reusable = false}, SHIFT(77),
  [605] = {.count = 1, .reusable = false}, SHIFT(174),
  [607] = {.count = 1, .reusable = false}, SHIFT(45),
  [609] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(174),
  [614] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(14),
  [617] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(8),
  [620] = {.count = 1, .reusable = false}, SHIFT(201),
  [622] = {.count = 1, .reusable = false}, SHIFT(176),
  [624] = {.count = 1, .reusable = false}, SHIFT(204),
  [626] = {.count = 1, .reusable = false}, SHIFT(190),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 9),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 1),
  [632] = {.count = 1, .reusable = true}, SHIFT(182),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 2),
  [638] = {.count = 1, .reusable = true}, SHIFT(183),
  [640] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 2),
  [642] = {.count = 1, .reusable = true}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2), SHIFT_REPEAT(183),
  [647] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2),
  [649] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 6),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 1),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [657] = {.count = 1, .reusable = true}, SHIFT(6),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 1),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [663] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [665] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 2),
  [670] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 2),
  [674] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [678] = {.count = 1, .reusable = false}, SHIFT(76),
  [680] = {.count = 1, .reusable = false}, SHIFT(209),
  [682] = {.count = 1, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2),
  [684] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2), SHIFT_REPEAT(209),
  [687] = {.count = 1, .reusable = false}, SHIFT(202),
  [689] = {.count = 1, .reusable = false}, SHIFT(211),
  [691] = {.count = 1, .reusable = false}, SHIFT(205),
  [693] = {.count = 1, .reusable = false}, SHIFT(179),
  [695] = {.count = 1, .reusable = false}, SHIFT(214),
  [697] = {.count = 1, .reusable = false}, SHIFT(189),
  [699] = {.count = 1, .reusable = false}, SHIFT(46),
  [701] = {.count = 1, .reusable = false}, SHIFT(80),
  [703] = {.count = 1, .reusable = false}, SHIFT(208),
  [705] = {.count = 1, .reusable = false}, SHIFT(41),
  [707] = {.count = 1, .reusable = false}, SHIFT(215),
  [709] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [711] = {.count = 1, .reusable = true}, SHIFT(20),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [715] = {.count = 1, .reusable = true}, SHIFT(18),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [719] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [721] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(18),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(20),
  [727] = {.count = 1, .reusable = false}, SHIFT(199),
  [729] = {.count = 1, .reusable = true}, SHIFT(200),
  [731] = {.count = 1, .reusable = false}, SHIFT(101),
  [733] = {.count = 1, .reusable = false}, SHIFT(247),
  [735] = {.count = 1, .reusable = false}, SHIFT(99),
  [737] = {.count = 1, .reusable = false}, SHIFT(110),
  [739] = {.count = 1, .reusable = false}, SHIFT(242),
  [741] = {.count = 1, .reusable = true}, SHIFT(42),
  [743] = {.count = 1, .reusable = false}, SHIFT(50),
  [745] = {.count = 1, .reusable = true}, SHIFT(186),
  [747] = {.count = 1, .reusable = true}, SHIFT(62),
  [749] = {.count = 1, .reusable = true}, SHIFT(104),
  [751] = {.count = 1, .reusable = false}, SHIFT(54),
  [753] = {.count = 1, .reusable = true}, SHIFT(178),
  [755] = {.count = 1, .reusable = true}, SHIFT(187),
  [757] = {.count = 1, .reusable = true}, SHIFT(105),
  [759] = {.count = 1, .reusable = true}, SHIFT(192),
  [761] = {.count = 1, .reusable = true}, SHIFT(196),
  [763] = {.count = 1, .reusable = true}, SHIFT(184),
  [765] = {.count = 1, .reusable = true}, SHIFT(185),
  [767] = {.count = 1, .reusable = true}, SHIFT(110),
  [769] = {.count = 1, .reusable = false}, SHIFT(236),
  [771] = {.count = 1, .reusable = true}, SHIFT(103),
  [773] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [775] = {.count = 1, .reusable = false}, SHIFT(102),
  [777] = {.count = 1, .reusable = false}, SHIFT(112),
  [779] = {.count = 1, .reusable = false}, SHIFT(249),
  [781] = {.count = 1, .reusable = true}, SHIFT(47),
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
