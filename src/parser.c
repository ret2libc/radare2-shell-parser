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
#define STATE_COUNT 274
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 1
#define TOKEN_COUNT 86
#define EXTERNAL_TOKEN_COUNT 6
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
  anon_sym_PERCENT = 48,
  anon_sym_env = 49,
  anon_sym_DOT_DOT_DOT = 50,
  aux_sym__interpret_identifier_token1 = 51,
  aux_sym__interpret_identifier_token2 = 52,
  sym_system_identifier = 53,
  sym_question_mark_identifier = 54,
  sym_pointer_identifier = 55,
  anon_sym_EQ = 56,
  sym_macro_identifier = 57,
  sym_macro_call_content = 58,
  anon_sym_GT = 59,
  anon_sym_GT_GT = 60,
  sym_html_redirect_operator = 61,
  sym_html_append_operator = 62,
  sym_tmp_eval_arg = 63,
  sym__eq_sep_key_identifier = 64,
  sym_macro_content = 65,
  sym__any_command = 66,
  sym_arg_identifier = 67,
  aux_sym_double_quoted_arg_token1 = 68,
  aux_sym_double_quoted_arg_token2 = 69,
  aux_sym_double_quoted_arg_token3 = 70,
  anon_sym_SQUOTE = 71,
  aux_sym_single_quoted_arg_token1 = 72,
  aux_sym_single_quoted_arg_token2 = 73,
  anon_sym_DOLLAR_LPAREN = 74,
  anon_sym_BQUOTE = 75,
  sym__comment = 76,
  anon_sym_LF = 77,
  anon_sym_CR = 78,
  anon_sym_SEMI = 79,
  sym_cmd_identifier = 80,
  sym__help_command = 81,
  sym_file_descriptor = 82,
  sym_repeat_number = 83,
  sym_interpreter_identifier = 84,
  sym__eq_sep_concat = 85,
  sym_commands = 86,
  sym__commands_singleline = 87,
  sym__command = 88,
  sym_legacy_quoted_command = 89,
  sym__simple_command = 90,
  sym__tmp_command = 91,
  sym__iter_command = 92,
  sym__pipe_command = 93,
  sym_grep_command = 94,
  sym_html_disable_command = 95,
  sym_html_enable_command = 96,
  sym_scr_tts_command = 97,
  sym_pipe_command = 98,
  sym_iter_flags_command = 99,
  sym_iter_dbta_command = 100,
  sym_iter_dbtb_command = 101,
  sym_iter_dbts_command = 102,
  sym_iter_file_lines_command = 103,
  sym_iter_offsets_command = 104,
  sym_iter_sdbquery_command = 105,
  sym_iter_threads_command = 106,
  sym_iter_bbs_command = 107,
  sym_iter_instrs_command = 108,
  sym_iter_sections_command = 109,
  sym_iter_functions_command = 110,
  sym_iter_step_command = 111,
  sym_iter_interpret_command = 112,
  sym_tmp_seek_command = 113,
  sym_tmp_blksz_command = 114,
  sym_tmp_fromto_command = 115,
  sym_tmp_arch_command = 116,
  sym_tmp_bits_command = 117,
  sym_tmp_nthi_command = 118,
  sym_tmp_eval_command = 119,
  sym_tmp_fs_command = 120,
  sym_tmp_reli_command = 121,
  sym_tmp_kuery_command = 122,
  sym_tmp_fd_command = 123,
  sym_tmp_reg_command = 124,
  sym_tmp_file_command = 125,
  sym_tmp_string_command = 126,
  sym_tmp_hex_command = 127,
  sym__interpreter_command = 128,
  sym_help_command = 129,
  sym_arged_command = 130,
  sym__simple_arged_command = 131,
  sym__math_arged_command = 132,
  sym__pointer_arged_command = 133,
  sym__macro_arged_command = 134,
  sym__system_command = 135,
  sym__interpret_command = 136,
  sym__interpret_search_identifier = 137,
  sym__env_command = 138,
  sym__env_command_identifier = 139,
  sym_last_command = 140,
  sym_last_command_identifier = 141,
  sym__interpret_identifier = 142,
  sym_interpret_arg = 143,
  sym_repeat_command = 144,
  sym_eq_sep_args = 145,
  sym_redirect_command = 146,
  sym__redirect_operator = 147,
  sym_fdn_redirect_operator = 148,
  sym_fdn_append_operator = 149,
  sym_arg = 150,
  sym_args = 151,
  sym__eq_sep_key_single = 152,
  sym_eq_sep_key = 153,
  sym_eq_sep_val = 154,
  sym_double_quoted_arg = 155,
  sym_single_quoted_arg = 156,
  sym_cmd_substitution_arg = 157,
  aux_sym_commands_repeat1 = 158,
  aux_sym_commands_repeat2 = 159,
  aux_sym__commands_singleline_repeat1 = 160,
  aux_sym__commands_singleline_repeat2 = 161,
  aux_sym_tmp_eval_command_repeat1 = 162,
  aux_sym_args_repeat1 = 163,
  aux_sym_eq_sep_key_repeat1 = 164,
  aux_sym_eq_sep_val_repeat1 = 165,
  aux_sym_double_quoted_arg_repeat1 = 166,
  aux_sym_single_quoted_arg_repeat1 = 167,
  alias_sym_system_args = 168,
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
  [anon_sym_PERCENT] = "%",
  [anon_sym_env] = "env",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym__interpret_identifier_token1] = "_interpret_identifier_token1",
  [aux_sym__interpret_identifier_token2] = "_interpret_identifier_token2",
  [sym_system_identifier] = "system_identifier",
  [sym_question_mark_identifier] = "cmd_identifier",
  [sym_pointer_identifier] = "cmd_identifier",
  [anon_sym_EQ] = "arg_identifier",
  [sym_macro_identifier] = "cmd_identifier",
  [sym_macro_call_content] = "macro_call_content",
  [anon_sym_GT] = ">",
  [anon_sym_GT_GT] = ">>",
  [sym_html_redirect_operator] = "html_redirect_operator",
  [sym_html_append_operator] = "html_append_operator",
  [sym_tmp_eval_arg] = "tmp_eval_arg",
  [sym__eq_sep_key_identifier] = "arg_identifier",
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
  [sym__eq_sep_concat] = "_eq_sep_concat",
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
  [sym_repeat_command] = "repeat_command",
  [sym_eq_sep_args] = "args",
  [sym_redirect_command] = "redirect_command",
  [sym__redirect_operator] = "_redirect_operator",
  [sym_fdn_redirect_operator] = "fdn_redirect_operator",
  [sym_fdn_append_operator] = "fdn_append_operator",
  [sym_arg] = "arg",
  [sym_args] = "args",
  [sym__eq_sep_key_single] = "arg",
  [sym_eq_sep_key] = "args",
  [sym_eq_sep_val] = "args",
  [sym_double_quoted_arg] = "double_quoted_arg",
  [sym_single_quoted_arg] = "single_quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_eq_sep_key_repeat1] = "eq_sep_key_repeat1",
  [aux_sym_eq_sep_val_repeat1] = "eq_sep_val_repeat1",
  [aux_sym_double_quoted_arg_repeat1] = "double_quoted_arg_repeat1",
  [aux_sym_single_quoted_arg_repeat1] = "single_quoted_arg_repeat1",
  [alias_sym_system_args] = "system_args",
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
  [sym__eq_sep_key_identifier] = {
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
  [sym__eq_sep_concat] = {
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
  [sym_repeat_command] = {
    .visible = true,
    .named = true,
  },
  [sym_eq_sep_args] = {
    .visible = true,
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
  [sym__eq_sep_key_single] = {
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
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eq_sep_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_eq_sep_val_repeat1] = {
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
  [alias_sym_system_args] = {
    .visible = true,
    .named = true,
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
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 3},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 4},
  [13] = {.index = 22, .length = 5},
  [14] = {.index = 27, .length = 6},
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
    {field_arg, 0},
    {field_command, 1},
  [7] =
    {field_args, 0},
    {field_command, 1},
  [9] =
    {field_string, 1},
  [10] =
    {field_args, 1},
    {field_args, 2},
    {field_command, 0},
  [13] =
    {field_command, 0},
    {field_specifier, 2},
  [15] =
    {field_arg, 2},
    {field_command, 0},
    {field_redirect_operator, 1},
  [18] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_command, 0},
  [22] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_command, 0},
  [27] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_args, 5},
    {field_command, 0},
};

static TSSymbol ts_alias_sequences[15][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_cmd_identifier,
  },
  [6] = {
    [1] = alias_sym_system_args,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(309);
      if (lookahead == '!') ADVANCE(211);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(288);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(197);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == ',') ADVANCE(170);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '=') ADVANCE(214);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '?') ADVANCE(212);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(309);
      if (lookahead == '!') ADVANCE(211);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '%') ADVANCE(204);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '*') ADVANCE(213);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '?') ADVANCE(212);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(309);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(277);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(278);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(309);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '>') ADVANCE(223);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 'H') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '=') ADVANCE(242);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(309);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(311);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(59);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '\r') ADVANCE(309);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(239);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(278);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(307);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(242);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '$') ADVANCE(288);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(290);
      if (lookahead == '`') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == ')') ADVANCE(195);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(311);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(310);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(275);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(280);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(244);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '}') ADVANCE(280);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '}') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(25);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(164);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(171);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(158);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(161);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(186);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(174);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(177);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(229);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(205);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(278);
      END_STATE();
    case 52:
      if (lookahead == '{') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == '}') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(278);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(242);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(70);
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
          lookahead == '~') ADVANCE(71);
      END_STATE();
    case 71:
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
          lookahead == '~') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(201);
      if (lookahead == 'H') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(202);
      if (lookahead == 'H') ADVANCE(75);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ')') ADVANCE(196);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '`') ADVANCE(303);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '>') ADVANCE(225);
      if (lookahead == '@') ADVANCE(151);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(25);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(25);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '>') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'k') ADVANCE(124);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'k') ADVANCE(125);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(120);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'b') ADVANCE(113);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '@') ADVANCE(103);
      if (lookahead == 'B') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'k') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(153);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'B') ADVANCE(252);
      if (lookahead == 'F') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead == 'b') ADVANCE(255);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'k') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(154);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(84);
      if (lookahead == 'F') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'k') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'x') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(210);
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '(') ADVANCE(200);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(203);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(209);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(25);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(25);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(232);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(235);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(25);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(237);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(25);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 239:
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
          lookahead != '|') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '*') ADVANCE(244);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(25);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '*') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(25);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(311);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == '`') ADVANCE(302);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == ';') ADVANCE(311);
      if (lookahead == '>') ADVANCE(224);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(266);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(250);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(25);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(250);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(25);
      if (lookahead != 0) ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '>') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 'b') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '/') ADVANCE(275);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(25);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(272);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(25);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '*') ADVANCE(280);
      if (lookahead == '\\') ADVANCE(55);
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
          lookahead != '~') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '>') ADVANCE(229);
      if (lookahead == '\\') ADVANCE(55);
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
          lookahead != '~') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(55);
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
          lookahead != '~') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == '\\') ADVANCE(23);
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
          lookahead == '~') ADVANCE(25);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '*') ADVANCE(279);
      if (lookahead == '\\') ADVANCE(23);
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
          lookahead == '~') ADVANCE(25);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(286);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '#') ADVANCE(281);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(286);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(25);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(25);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token2);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token3);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token3);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(297);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '#') ADVANCE(292);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '/') ADVANCE(297);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(295);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token2);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(53);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(54);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 3},
  [3] = {.lex_state = 1, .external_lex_state = 3},
  [4] = {.lex_state = 1, .external_lex_state = 3},
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
  [27] = {.lex_state = 1, .external_lex_state = 2},
  [28] = {.lex_state = 1, .external_lex_state = 2},
  [29] = {.lex_state = 2, .external_lex_state = 4},
  [30] = {.lex_state = 3, .external_lex_state = 4},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 2, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 4},
  [38] = {.lex_state = 2, .external_lex_state = 4},
  [39] = {.lex_state = 2, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 4},
  [41] = {.lex_state = 2, .external_lex_state = 4},
  [42] = {.lex_state = 2, .external_lex_state = 4},
  [43] = {.lex_state = 2, .external_lex_state = 4},
  [44] = {.lex_state = 2, .external_lex_state = 4},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 2, .external_lex_state = 4},
  [47] = {.lex_state = 2, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 2, .external_lex_state = 4},
  [50] = {.lex_state = 2, .external_lex_state = 4},
  [51] = {.lex_state = 2, .external_lex_state = 4},
  [52] = {.lex_state = 3, .external_lex_state = 4},
  [53] = {.lex_state = 2, .external_lex_state = 4},
  [54] = {.lex_state = 2, .external_lex_state = 4},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 5},
  [58] = {.lex_state = 0, .external_lex_state = 5},
  [59] = {.lex_state = 0, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 5},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 5},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 5},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 4},
  [69] = {.lex_state = 0, .external_lex_state = 4},
  [70] = {.lex_state = 0, .external_lex_state = 5},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 4},
  [73] = {.lex_state = 0, .external_lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 4},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 5},
  [77] = {.lex_state = 0, .external_lex_state = 4},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 0, .external_lex_state = 5},
  [80] = {.lex_state = 0, .external_lex_state = 4},
  [81] = {.lex_state = 0, .external_lex_state = 4},
  [82] = {.lex_state = 0, .external_lex_state = 4},
  [83] = {.lex_state = 4, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 0, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 4},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 4},
  [91] = {.lex_state = 0, .external_lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 4},
  [93] = {.lex_state = 0, .external_lex_state = 4},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 4},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 4},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 4},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 0, .external_lex_state = 4},
  [109] = {.lex_state = 0, .external_lex_state = 4},
  [110] = {.lex_state = 0, .external_lex_state = 4},
  [111] = {.lex_state = 0, .external_lex_state = 4},
  [112] = {.lex_state = 0, .external_lex_state = 4},
  [113] = {.lex_state = 0, .external_lex_state = 4},
  [114] = {.lex_state = 0, .external_lex_state = 4},
  [115] = {.lex_state = 0, .external_lex_state = 4},
  [116] = {.lex_state = 0, .external_lex_state = 4},
  [117] = {.lex_state = 0, .external_lex_state = 4},
  [118] = {.lex_state = 0, .external_lex_state = 4},
  [119] = {.lex_state = 0, .external_lex_state = 4},
  [120] = {.lex_state = 0, .external_lex_state = 4},
  [121] = {.lex_state = 0, .external_lex_state = 4},
  [122] = {.lex_state = 0, .external_lex_state = 4},
  [123] = {.lex_state = 0, .external_lex_state = 4},
  [124] = {.lex_state = 0, .external_lex_state = 4},
  [125] = {.lex_state = 0, .external_lex_state = 4},
  [126] = {.lex_state = 0, .external_lex_state = 4},
  [127] = {.lex_state = 0, .external_lex_state = 4},
  [128] = {.lex_state = 0, .external_lex_state = 4},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 0, .external_lex_state = 4},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 0, .external_lex_state = 4},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 5, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 10, .external_lex_state = 4},
  [146] = {.lex_state = 12, .external_lex_state = 4},
  [147] = {.lex_state = 13, .external_lex_state = 4},
  [148] = {.lex_state = 4, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 1, .external_lex_state = 2},
  [155] = {.lex_state = 1, .external_lex_state = 2},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 9},
  [190] = {.lex_state = 9},
  [191] = {.lex_state = 9},
  [192] = {.lex_state = 9},
  [193] = {.lex_state = 9},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 9},
  [197] = {.lex_state = 9},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 7},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 7},
  [217] = {.lex_state = 7},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 14},
  [228] = {.lex_state = 14},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 14},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 14},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 14},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 217},
  [249] = {.lex_state = 15},
  [250] = {.lex_state = 217},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 6},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 70},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 11},
  [273] = {.lex_state = 0},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token_file_descriptor = 2,
  ts_external_token_repeat_number = 3,
  ts_external_token_interpreter_identifier = 4,
  ts_external_token__eq_sep_concat = 5,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token_repeat_number] = sym_repeat_number,
  [ts_external_token_interpreter_identifier] = sym_interpreter_identifier,
  [ts_external_token__eq_sep_concat] = sym__eq_sep_concat,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
    [ts_external_token_interpreter_identifier] = true,
    [ts_external_token__eq_sep_concat] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_repeat_number] = true,
    [ts_external_token_interpreter_identifier] = true,
  },
  [3] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
    [ts_external_token_interpreter_identifier] = true,
  },
  [4] = {
    [ts_external_token_file_descriptor] = true,
  },
  [5] = {
    [ts_external_token_file_descriptor] = true,
    [ts_external_token__eq_sep_concat] = true,
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
    [sym__eq_sep_concat] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(267),
    [sym__command] = STATE(220),
    [sym_legacy_quoted_command] = STATE(75),
    [sym__simple_command] = STATE(75),
    [sym__tmp_command] = STATE(75),
    [sym__iter_command] = STATE(75),
    [sym__pipe_command] = STATE(75),
    [sym_grep_command] = STATE(75),
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
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(75),
    [sym_arged_command] = STATE(75),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(75),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(75),
    [sym_redirect_command] = STATE(220),
    [aux_sym_commands_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
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
    [sym_legacy_quoted_command] = STATE(96),
    [sym__simple_command] = STATE(96),
    [sym__tmp_command] = STATE(96),
    [sym__iter_command] = STATE(96),
    [sym__pipe_command] = STATE(96),
    [sym_grep_command] = STATE(96),
    [sym_html_disable_command] = STATE(96),
    [sym_html_enable_command] = STATE(96),
    [sym_scr_tts_command] = STATE(96),
    [sym_pipe_command] = STATE(96),
    [sym_iter_flags_command] = STATE(96),
    [sym_iter_dbta_command] = STATE(96),
    [sym_iter_dbtb_command] = STATE(96),
    [sym_iter_dbts_command] = STATE(96),
    [sym_iter_file_lines_command] = STATE(96),
    [sym_iter_offsets_command] = STATE(96),
    [sym_iter_sdbquery_command] = STATE(96),
    [sym_iter_threads_command] = STATE(96),
    [sym_iter_bbs_command] = STATE(96),
    [sym_iter_instrs_command] = STATE(96),
    [sym_iter_sections_command] = STATE(96),
    [sym_iter_functions_command] = STATE(96),
    [sym_iter_step_command] = STATE(96),
    [sym_iter_interpret_command] = STATE(96),
    [sym_tmp_seek_command] = STATE(96),
    [sym_tmp_blksz_command] = STATE(96),
    [sym_tmp_fromto_command] = STATE(96),
    [sym_tmp_arch_command] = STATE(96),
    [sym_tmp_bits_command] = STATE(96),
    [sym_tmp_nthi_command] = STATE(96),
    [sym_tmp_eval_command] = STATE(96),
    [sym_tmp_fs_command] = STATE(96),
    [sym_tmp_reli_command] = STATE(96),
    [sym_tmp_kuery_command] = STATE(96),
    [sym_tmp_fd_command] = STATE(96),
    [sym_tmp_reg_command] = STATE(96),
    [sym_tmp_file_command] = STATE(96),
    [sym_tmp_string_command] = STATE(96),
    [sym_tmp_hex_command] = STATE(96),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(96),
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(96),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(7),
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
    [sym_legacy_quoted_command] = STATE(96),
    [sym__simple_command] = STATE(96),
    [sym__tmp_command] = STATE(96),
    [sym__iter_command] = STATE(96),
    [sym__pipe_command] = STATE(96),
    [sym_grep_command] = STATE(96),
    [sym_html_disable_command] = STATE(96),
    [sym_html_enable_command] = STATE(96),
    [sym_scr_tts_command] = STATE(96),
    [sym_pipe_command] = STATE(96),
    [sym_iter_flags_command] = STATE(96),
    [sym_iter_dbta_command] = STATE(96),
    [sym_iter_dbtb_command] = STATE(96),
    [sym_iter_dbts_command] = STATE(96),
    [sym_iter_file_lines_command] = STATE(96),
    [sym_iter_offsets_command] = STATE(96),
    [sym_iter_sdbquery_command] = STATE(96),
    [sym_iter_threads_command] = STATE(96),
    [sym_iter_bbs_command] = STATE(96),
    [sym_iter_instrs_command] = STATE(96),
    [sym_iter_sections_command] = STATE(96),
    [sym_iter_functions_command] = STATE(96),
    [sym_iter_step_command] = STATE(96),
    [sym_iter_interpret_command] = STATE(96),
    [sym_tmp_seek_command] = STATE(96),
    [sym_tmp_blksz_command] = STATE(96),
    [sym_tmp_fromto_command] = STATE(96),
    [sym_tmp_arch_command] = STATE(96),
    [sym_tmp_bits_command] = STATE(96),
    [sym_tmp_nthi_command] = STATE(96),
    [sym_tmp_eval_command] = STATE(96),
    [sym_tmp_fs_command] = STATE(96),
    [sym_tmp_reli_command] = STATE(96),
    [sym_tmp_kuery_command] = STATE(96),
    [sym_tmp_fd_command] = STATE(96),
    [sym_tmp_reg_command] = STATE(96),
    [sym_tmp_file_command] = STATE(96),
    [sym_tmp_string_command] = STATE(96),
    [sym_tmp_hex_command] = STATE(96),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(96),
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(96),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(7),
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
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [4] = {
    [sym_legacy_quoted_command] = STATE(96),
    [sym__simple_command] = STATE(96),
    [sym__tmp_command] = STATE(96),
    [sym__iter_command] = STATE(96),
    [sym__pipe_command] = STATE(96),
    [sym_grep_command] = STATE(96),
    [sym_html_disable_command] = STATE(96),
    [sym_html_enable_command] = STATE(96),
    [sym_scr_tts_command] = STATE(96),
    [sym_pipe_command] = STATE(96),
    [sym_iter_flags_command] = STATE(96),
    [sym_iter_dbta_command] = STATE(96),
    [sym_iter_dbtb_command] = STATE(96),
    [sym_iter_dbts_command] = STATE(96),
    [sym_iter_file_lines_command] = STATE(96),
    [sym_iter_offsets_command] = STATE(96),
    [sym_iter_sdbquery_command] = STATE(96),
    [sym_iter_threads_command] = STATE(96),
    [sym_iter_bbs_command] = STATE(96),
    [sym_iter_instrs_command] = STATE(96),
    [sym_iter_sections_command] = STATE(96),
    [sym_iter_functions_command] = STATE(96),
    [sym_iter_step_command] = STATE(96),
    [sym_iter_interpret_command] = STATE(96),
    [sym_tmp_seek_command] = STATE(96),
    [sym_tmp_blksz_command] = STATE(96),
    [sym_tmp_fromto_command] = STATE(96),
    [sym_tmp_arch_command] = STATE(96),
    [sym_tmp_bits_command] = STATE(96),
    [sym_tmp_nthi_command] = STATE(96),
    [sym_tmp_eval_command] = STATE(96),
    [sym_tmp_fs_command] = STATE(96),
    [sym_tmp_reli_command] = STATE(96),
    [sym_tmp_kuery_command] = STATE(96),
    [sym_tmp_fd_command] = STATE(96),
    [sym_tmp_reg_command] = STATE(96),
    [sym_tmp_file_command] = STATE(96),
    [sym_tmp_string_command] = STATE(96),
    [sym_tmp_hex_command] = STATE(96),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(96),
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(96),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(96),
    [anon_sym_DQUOTE] = ACTIONS(7),
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
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [5] = {
    [sym__command] = STATE(222),
    [sym_legacy_quoted_command] = STATE(75),
    [sym__simple_command] = STATE(75),
    [sym__tmp_command] = STATE(75),
    [sym__iter_command] = STATE(75),
    [sym__pipe_command] = STATE(75),
    [sym_grep_command] = STATE(75),
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
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(75),
    [sym_arged_command] = STATE(75),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(75),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(75),
    [sym_redirect_command] = STATE(222),
    [aux_sym_commands_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
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
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_CR] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [6] = {
    [sym__command] = STATE(235),
    [sym_legacy_quoted_command] = STATE(75),
    [sym__simple_command] = STATE(75),
    [sym__tmp_command] = STATE(75),
    [sym__iter_command] = STATE(75),
    [sym__pipe_command] = STATE(75),
    [sym_grep_command] = STATE(75),
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
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(75),
    [sym_arged_command] = STATE(75),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(75),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(75),
    [sym_redirect_command] = STATE(235),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
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
    [anon_sym_LF] = ACTIONS(73),
    [anon_sym_CR] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [7] = {
    [sym__commands_singleline] = STATE(273),
    [sym__command] = STATE(247),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(247),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__commands_singleline] = STATE(271),
    [sym__command] = STATE(237),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(237),
    [aux_sym__commands_singleline_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [9] = {
    [sym__commands_singleline] = STATE(261),
    [sym__command] = STATE(237),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(237),
    [aux_sym__commands_singleline_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [10] = {
    [sym__commands_singleline] = STATE(260),
    [sym__command] = STATE(247),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(247),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [11] = {
    [sym__commands_singleline] = STATE(252),
    [sym__command] = STATE(237),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(237),
    [aux_sym__commands_singleline_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [12] = {
    [sym__commands_singleline] = STATE(255),
    [sym__command] = STATE(237),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(237),
    [aux_sym__commands_singleline_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [13] = {
    [sym__commands_singleline] = STATE(262),
    [sym__command] = STATE(247),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(247),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [14] = {
    [sym__commands_singleline] = STATE(253),
    [sym__command] = STATE(237),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(237),
    [aux_sym__commands_singleline_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [15] = {
    [sym__commands_singleline] = STATE(263),
    [sym__command] = STATE(247),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(247),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [16] = {
    [sym__commands_singleline] = STATE(254),
    [sym__command] = STATE(247),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(247),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [17] = {
    [sym__commands_singleline] = STATE(266),
    [sym__command] = STATE(237),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(237),
    [aux_sym__commands_singleline_repeat1] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [18] = {
    [sym__commands_singleline] = STATE(269),
    [sym__command] = STATE(247),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(247),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [19] = {
    [sym__command] = STATE(242),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(242),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [20] = {
    [sym__command] = STATE(242),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(242),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [21] = {
    [sym__command] = STATE(244),
    [sym_legacy_quoted_command] = STATE(141),
    [sym__simple_command] = STATE(141),
    [sym__tmp_command] = STATE(141),
    [sym__iter_command] = STATE(141),
    [sym__pipe_command] = STATE(141),
    [sym_grep_command] = STATE(141),
    [sym_html_disable_command] = STATE(141),
    [sym_html_enable_command] = STATE(141),
    [sym_scr_tts_command] = STATE(141),
    [sym_pipe_command] = STATE(141),
    [sym_iter_flags_command] = STATE(141),
    [sym_iter_dbta_command] = STATE(141),
    [sym_iter_dbtb_command] = STATE(141),
    [sym_iter_dbts_command] = STATE(141),
    [sym_iter_file_lines_command] = STATE(141),
    [sym_iter_offsets_command] = STATE(141),
    [sym_iter_sdbquery_command] = STATE(141),
    [sym_iter_threads_command] = STATE(141),
    [sym_iter_bbs_command] = STATE(141),
    [sym_iter_instrs_command] = STATE(141),
    [sym_iter_sections_command] = STATE(141),
    [sym_iter_functions_command] = STATE(141),
    [sym_iter_step_command] = STATE(141),
    [sym_iter_interpret_command] = STATE(141),
    [sym_tmp_seek_command] = STATE(141),
    [sym_tmp_blksz_command] = STATE(141),
    [sym_tmp_fromto_command] = STATE(141),
    [sym_tmp_arch_command] = STATE(141),
    [sym_tmp_bits_command] = STATE(141),
    [sym_tmp_nthi_command] = STATE(141),
    [sym_tmp_eval_command] = STATE(141),
    [sym_tmp_fs_command] = STATE(141),
    [sym_tmp_reli_command] = STATE(141),
    [sym_tmp_kuery_command] = STATE(141),
    [sym_tmp_fd_command] = STATE(141),
    [sym_tmp_reg_command] = STATE(141),
    [sym_tmp_file_command] = STATE(141),
    [sym_tmp_string_command] = STATE(141),
    [sym_tmp_hex_command] = STATE(141),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(141),
    [sym_arged_command] = STATE(141),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(141),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(141),
    [sym_redirect_command] = STATE(244),
    [aux_sym__commands_singleline_repeat1] = STATE(155),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [22] = {
    [sym__command] = STATE(245),
    [sym_legacy_quoted_command] = STATE(142),
    [sym__simple_command] = STATE(142),
    [sym__tmp_command] = STATE(142),
    [sym__iter_command] = STATE(142),
    [sym__pipe_command] = STATE(142),
    [sym_grep_command] = STATE(142),
    [sym_html_disable_command] = STATE(142),
    [sym_html_enable_command] = STATE(142),
    [sym_scr_tts_command] = STATE(142),
    [sym_pipe_command] = STATE(142),
    [sym_iter_flags_command] = STATE(142),
    [sym_iter_dbta_command] = STATE(142),
    [sym_iter_dbtb_command] = STATE(142),
    [sym_iter_dbts_command] = STATE(142),
    [sym_iter_file_lines_command] = STATE(142),
    [sym_iter_offsets_command] = STATE(142),
    [sym_iter_sdbquery_command] = STATE(142),
    [sym_iter_threads_command] = STATE(142),
    [sym_iter_bbs_command] = STATE(142),
    [sym_iter_instrs_command] = STATE(142),
    [sym_iter_sections_command] = STATE(142),
    [sym_iter_functions_command] = STATE(142),
    [sym_iter_step_command] = STATE(142),
    [sym_iter_interpret_command] = STATE(142),
    [sym_tmp_seek_command] = STATE(142),
    [sym_tmp_blksz_command] = STATE(142),
    [sym_tmp_fromto_command] = STATE(142),
    [sym_tmp_arch_command] = STATE(142),
    [sym_tmp_bits_command] = STATE(142),
    [sym_tmp_nthi_command] = STATE(142),
    [sym_tmp_eval_command] = STATE(142),
    [sym_tmp_fs_command] = STATE(142),
    [sym_tmp_reli_command] = STATE(142),
    [sym_tmp_kuery_command] = STATE(142),
    [sym_tmp_fd_command] = STATE(142),
    [sym_tmp_reg_command] = STATE(142),
    [sym_tmp_file_command] = STATE(142),
    [sym_tmp_string_command] = STATE(142),
    [sym_tmp_hex_command] = STATE(142),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(142),
    [sym_redirect_command] = STATE(245),
    [aux_sym__commands_singleline_repeat1] = STATE(155),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [23] = {
    [sym_legacy_quoted_command] = STATE(151),
    [sym__simple_command] = STATE(151),
    [sym__tmp_command] = STATE(151),
    [sym__iter_command] = STATE(151),
    [sym__pipe_command] = STATE(151),
    [sym_grep_command] = STATE(151),
    [sym_html_disable_command] = STATE(151),
    [sym_html_enable_command] = STATE(151),
    [sym_scr_tts_command] = STATE(151),
    [sym_pipe_command] = STATE(151),
    [sym_iter_flags_command] = STATE(151),
    [sym_iter_dbta_command] = STATE(151),
    [sym_iter_dbtb_command] = STATE(151),
    [sym_iter_dbts_command] = STATE(151),
    [sym_iter_file_lines_command] = STATE(151),
    [sym_iter_offsets_command] = STATE(151),
    [sym_iter_sdbquery_command] = STATE(151),
    [sym_iter_threads_command] = STATE(151),
    [sym_iter_bbs_command] = STATE(151),
    [sym_iter_instrs_command] = STATE(151),
    [sym_iter_sections_command] = STATE(151),
    [sym_iter_functions_command] = STATE(151),
    [sym_iter_step_command] = STATE(151),
    [sym_iter_interpret_command] = STATE(151),
    [sym_tmp_seek_command] = STATE(151),
    [sym_tmp_blksz_command] = STATE(151),
    [sym_tmp_fromto_command] = STATE(151),
    [sym_tmp_arch_command] = STATE(151),
    [sym_tmp_bits_command] = STATE(151),
    [sym_tmp_nthi_command] = STATE(151),
    [sym_tmp_eval_command] = STATE(151),
    [sym_tmp_fs_command] = STATE(151),
    [sym_tmp_reli_command] = STATE(151),
    [sym_tmp_kuery_command] = STATE(151),
    [sym_tmp_fd_command] = STATE(151),
    [sym_tmp_reg_command] = STATE(151),
    [sym_tmp_file_command] = STATE(151),
    [sym_tmp_string_command] = STATE(151),
    [sym_tmp_hex_command] = STATE(151),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(151),
    [sym_arged_command] = STATE(151),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(151),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(151),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [24] = {
    [sym_legacy_quoted_command] = STATE(152),
    [sym__simple_command] = STATE(152),
    [sym__tmp_command] = STATE(152),
    [sym__iter_command] = STATE(152),
    [sym__pipe_command] = STATE(152),
    [sym_grep_command] = STATE(152),
    [sym_html_disable_command] = STATE(152),
    [sym_html_enable_command] = STATE(152),
    [sym_scr_tts_command] = STATE(152),
    [sym_pipe_command] = STATE(152),
    [sym_iter_flags_command] = STATE(152),
    [sym_iter_dbta_command] = STATE(152),
    [sym_iter_dbtb_command] = STATE(152),
    [sym_iter_dbts_command] = STATE(152),
    [sym_iter_file_lines_command] = STATE(152),
    [sym_iter_offsets_command] = STATE(152),
    [sym_iter_sdbquery_command] = STATE(152),
    [sym_iter_threads_command] = STATE(152),
    [sym_iter_bbs_command] = STATE(152),
    [sym_iter_instrs_command] = STATE(152),
    [sym_iter_sections_command] = STATE(152),
    [sym_iter_functions_command] = STATE(152),
    [sym_iter_step_command] = STATE(152),
    [sym_iter_interpret_command] = STATE(152),
    [sym_tmp_seek_command] = STATE(152),
    [sym_tmp_blksz_command] = STATE(152),
    [sym_tmp_fromto_command] = STATE(152),
    [sym_tmp_arch_command] = STATE(152),
    [sym_tmp_bits_command] = STATE(152),
    [sym_tmp_nthi_command] = STATE(152),
    [sym_tmp_eval_command] = STATE(152),
    [sym_tmp_fs_command] = STATE(152),
    [sym_tmp_reli_command] = STATE(152),
    [sym_tmp_kuery_command] = STATE(152),
    [sym_tmp_fd_command] = STATE(152),
    [sym_tmp_reg_command] = STATE(152),
    [sym_tmp_file_command] = STATE(152),
    [sym_tmp_string_command] = STATE(152),
    [sym_tmp_hex_command] = STATE(152),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(152),
    [sym_arged_command] = STATE(152),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(152),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(152),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [25] = {
    [sym_legacy_quoted_command] = STATE(149),
    [sym__simple_command] = STATE(149),
    [sym__tmp_command] = STATE(149),
    [sym__iter_command] = STATE(149),
    [sym__pipe_command] = STATE(149),
    [sym_grep_command] = STATE(149),
    [sym_html_disable_command] = STATE(149),
    [sym_html_enable_command] = STATE(149),
    [sym_scr_tts_command] = STATE(149),
    [sym_pipe_command] = STATE(149),
    [sym_iter_flags_command] = STATE(149),
    [sym_iter_dbta_command] = STATE(149),
    [sym_iter_dbtb_command] = STATE(149),
    [sym_iter_dbts_command] = STATE(149),
    [sym_iter_file_lines_command] = STATE(149),
    [sym_iter_offsets_command] = STATE(149),
    [sym_iter_sdbquery_command] = STATE(149),
    [sym_iter_threads_command] = STATE(149),
    [sym_iter_bbs_command] = STATE(149),
    [sym_iter_instrs_command] = STATE(149),
    [sym_iter_sections_command] = STATE(149),
    [sym_iter_functions_command] = STATE(149),
    [sym_iter_step_command] = STATE(149),
    [sym_iter_interpret_command] = STATE(149),
    [sym_tmp_seek_command] = STATE(149),
    [sym_tmp_blksz_command] = STATE(149),
    [sym_tmp_fromto_command] = STATE(149),
    [sym_tmp_arch_command] = STATE(149),
    [sym_tmp_bits_command] = STATE(149),
    [sym_tmp_nthi_command] = STATE(149),
    [sym_tmp_eval_command] = STATE(149),
    [sym_tmp_fs_command] = STATE(149),
    [sym_tmp_reli_command] = STATE(149),
    [sym_tmp_kuery_command] = STATE(149),
    [sym_tmp_fd_command] = STATE(149),
    [sym_tmp_reg_command] = STATE(149),
    [sym_tmp_file_command] = STATE(149),
    [sym_tmp_string_command] = STATE(149),
    [sym_tmp_hex_command] = STATE(149),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(149),
    [sym_arged_command] = STATE(149),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(156),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(40),
    [sym_last_command] = STATE(149),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(39),
    [sym_repeat_command] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(47),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(49),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(53),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(55),
    [sym__help_command] = ACTIONS(57),
    [sym_repeat_number] = ACTIONS(59),
    [sym_interpreter_identifier] = ACTIONS(61),
  },
  [26] = {
    [sym_legacy_quoted_command] = STATE(143),
    [sym__simple_command] = STATE(143),
    [sym__tmp_command] = STATE(143),
    [sym__iter_command] = STATE(143),
    [sym__pipe_command] = STATE(143),
    [sym_grep_command] = STATE(143),
    [sym_html_disable_command] = STATE(143),
    [sym_html_enable_command] = STATE(143),
    [sym_scr_tts_command] = STATE(143),
    [sym_pipe_command] = STATE(143),
    [sym_iter_flags_command] = STATE(143),
    [sym_iter_dbta_command] = STATE(143),
    [sym_iter_dbtb_command] = STATE(143),
    [sym_iter_dbts_command] = STATE(143),
    [sym_iter_file_lines_command] = STATE(143),
    [sym_iter_offsets_command] = STATE(143),
    [sym_iter_sdbquery_command] = STATE(143),
    [sym_iter_threads_command] = STATE(143),
    [sym_iter_bbs_command] = STATE(143),
    [sym_iter_instrs_command] = STATE(143),
    [sym_iter_sections_command] = STATE(143),
    [sym_iter_functions_command] = STATE(143),
    [sym_iter_step_command] = STATE(143),
    [sym_iter_interpret_command] = STATE(143),
    [sym_tmp_seek_command] = STATE(143),
    [sym_tmp_blksz_command] = STATE(143),
    [sym_tmp_fromto_command] = STATE(143),
    [sym_tmp_arch_command] = STATE(143),
    [sym_tmp_bits_command] = STATE(143),
    [sym_tmp_nthi_command] = STATE(143),
    [sym_tmp_eval_command] = STATE(143),
    [sym_tmp_fs_command] = STATE(143),
    [sym_tmp_reli_command] = STATE(143),
    [sym_tmp_kuery_command] = STATE(143),
    [sym_tmp_fd_command] = STATE(143),
    [sym_tmp_reg_command] = STATE(143),
    [sym_tmp_file_command] = STATE(143),
    [sym_tmp_string_command] = STATE(143),
    [sym_tmp_hex_command] = STATE(143),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(143),
    [sym_arged_command] = STATE(143),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(143),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
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
    [sym_legacy_quoted_command] = STATE(144),
    [sym__simple_command] = STATE(144),
    [sym__tmp_command] = STATE(144),
    [sym__iter_command] = STATE(144),
    [sym__pipe_command] = STATE(144),
    [sym_grep_command] = STATE(144),
    [sym_html_disable_command] = STATE(144),
    [sym_html_enable_command] = STATE(144),
    [sym_scr_tts_command] = STATE(144),
    [sym_pipe_command] = STATE(144),
    [sym_iter_flags_command] = STATE(144),
    [sym_iter_dbta_command] = STATE(144),
    [sym_iter_dbtb_command] = STATE(144),
    [sym_iter_dbts_command] = STATE(144),
    [sym_iter_file_lines_command] = STATE(144),
    [sym_iter_offsets_command] = STATE(144),
    [sym_iter_sdbquery_command] = STATE(144),
    [sym_iter_threads_command] = STATE(144),
    [sym_iter_bbs_command] = STATE(144),
    [sym_iter_instrs_command] = STATE(144),
    [sym_iter_sections_command] = STATE(144),
    [sym_iter_functions_command] = STATE(144),
    [sym_iter_step_command] = STATE(144),
    [sym_iter_interpret_command] = STATE(144),
    [sym_tmp_seek_command] = STATE(144),
    [sym_tmp_blksz_command] = STATE(144),
    [sym_tmp_fromto_command] = STATE(144),
    [sym_tmp_arch_command] = STATE(144),
    [sym_tmp_bits_command] = STATE(144),
    [sym_tmp_nthi_command] = STATE(144),
    [sym_tmp_eval_command] = STATE(144),
    [sym_tmp_fs_command] = STATE(144),
    [sym_tmp_reli_command] = STATE(144),
    [sym_tmp_kuery_command] = STATE(144),
    [sym_tmp_fd_command] = STATE(144),
    [sym_tmp_reg_command] = STATE(144),
    [sym_tmp_file_command] = STATE(144),
    [sym_tmp_string_command] = STATE(144),
    [sym_tmp_hex_command] = STATE(144),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(144),
    [sym_arged_command] = STATE(144),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(144),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(144),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
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
  [28] = {
    [sym_legacy_quoted_command] = STATE(150),
    [sym__simple_command] = STATE(150),
    [sym__tmp_command] = STATE(150),
    [sym__iter_command] = STATE(150),
    [sym__pipe_command] = STATE(150),
    [sym_grep_command] = STATE(150),
    [sym_html_disable_command] = STATE(150),
    [sym_html_enable_command] = STATE(150),
    [sym_scr_tts_command] = STATE(150),
    [sym_pipe_command] = STATE(150),
    [sym_iter_flags_command] = STATE(150),
    [sym_iter_dbta_command] = STATE(150),
    [sym_iter_dbtb_command] = STATE(150),
    [sym_iter_dbts_command] = STATE(150),
    [sym_iter_file_lines_command] = STATE(150),
    [sym_iter_offsets_command] = STATE(150),
    [sym_iter_sdbquery_command] = STATE(150),
    [sym_iter_threads_command] = STATE(150),
    [sym_iter_bbs_command] = STATE(150),
    [sym_iter_instrs_command] = STATE(150),
    [sym_iter_sections_command] = STATE(150),
    [sym_iter_functions_command] = STATE(150),
    [sym_iter_step_command] = STATE(150),
    [sym_iter_interpret_command] = STATE(150),
    [sym_tmp_seek_command] = STATE(150),
    [sym_tmp_blksz_command] = STATE(150),
    [sym_tmp_fromto_command] = STATE(150),
    [sym_tmp_arch_command] = STATE(150),
    [sym_tmp_bits_command] = STATE(150),
    [sym_tmp_nthi_command] = STATE(150),
    [sym_tmp_eval_command] = STATE(150),
    [sym_tmp_fs_command] = STATE(150),
    [sym_tmp_reli_command] = STATE(150),
    [sym_tmp_kuery_command] = STATE(150),
    [sym_tmp_fd_command] = STATE(150),
    [sym_tmp_reg_command] = STATE(150),
    [sym_tmp_file_command] = STATE(150),
    [sym_tmp_string_command] = STATE(150),
    [sym_tmp_hex_command] = STATE(150),
    [sym__interpreter_command] = STATE(84),
    [sym_help_command] = STATE(150),
    [sym_arged_command] = STATE(150),
    [sym__simple_arged_command] = STATE(84),
    [sym__math_arged_command] = STATE(84),
    [sym__pointer_arged_command] = STATE(84),
    [sym__macro_arged_command] = STATE(84),
    [sym__system_command] = STATE(84),
    [sym__interpret_command] = STATE(84),
    [sym__interpret_search_identifier] = STATE(160),
    [sym__env_command] = STATE(84),
    [sym__env_command_identifier] = STATE(30),
    [sym_last_command] = STATE(150),
    [sym_last_command_identifier] = STATE(85),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(150),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(65),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(67),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [29] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(101),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PIPEH] = ACTIONS(83),
    [anon_sym_PIPET] = ACTIONS(83),
    [anon_sym_AT_AT] = ACTIONS(87),
    [anon_sym_AT_ATdbt] = ACTIONS(87),
    [anon_sym_AT_ATdbta] = ACTIONS(83),
    [anon_sym_AT_ATdbtb] = ACTIONS(83),
    [anon_sym_AT_ATdbts] = ACTIONS(83),
    [anon_sym_AT_AT_DOT] = ACTIONS(83),
    [anon_sym_AT_AT_EQ] = ACTIONS(83),
    [anon_sym_AT_ATk] = ACTIONS(83),
    [anon_sym_AT_ATt] = ACTIONS(83),
    [anon_sym_AT_ATb] = ACTIONS(83),
    [anon_sym_AT_ATi] = ACTIONS(87),
    [anon_sym_AT_ATiS] = ACTIONS(83),
    [anon_sym_AT_ATf] = ACTIONS(83),
    [anon_sym_AT_ATs_COLON] = ACTIONS(83),
    [anon_sym_AT_ATc_COLON] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(87),
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
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_PIPE_DOT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(83),
    [sym_html_redirect_operator] = ACTIONS(87),
    [sym_html_append_operator] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_CR] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_file_descriptor] = ACTIONS(83),
  },
  [30] = {
    [sym_eq_sep_args] = STATE(97),
    [sym__eq_sep_key_single] = STATE(56),
    [sym_eq_sep_key] = STATE(72),
    [sym_double_quoted_arg] = STATE(71),
    [sym_single_quoted_arg] = STATE(71),
    [sym_cmd_substitution_arg] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_PIPET] = ACTIONS(99),
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(103),
    [anon_sym_AT_ATdbta] = ACTIONS(99),
    [anon_sym_AT_ATdbtb] = ACTIONS(99),
    [anon_sym_AT_ATdbts] = ACTIONS(99),
    [anon_sym_AT_AT_DOT] = ACTIONS(99),
    [anon_sym_AT_AT_EQ] = ACTIONS(99),
    [anon_sym_AT_ATk] = ACTIONS(99),
    [anon_sym_AT_ATt] = ACTIONS(99),
    [anon_sym_AT_ATb] = ACTIONS(99),
    [anon_sym_AT_ATi] = ACTIONS(103),
    [anon_sym_AT_ATiS] = ACTIONS(99),
    [anon_sym_AT_ATf] = ACTIONS(99),
    [anon_sym_AT_ATs_COLON] = ACTIONS(99),
    [anon_sym_AT_ATc_COLON] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(103),
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
    [anon_sym_PIPE_DOT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(99),
    [sym_html_redirect_operator] = ACTIONS(103),
    [sym_html_append_operator] = ACTIONS(99),
    [sym__eq_sep_key_identifier] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_CR] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_file_descriptor] = ACTIONS(99),
  },
  [31] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(86),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(85),
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
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(113),
    [sym_html_redirect_operator] = ACTIONS(115),
    [sym_html_append_operator] = ACTIONS(113),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_CR] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [32] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(99),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(85),
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
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(117),
    [sym_html_redirect_operator] = ACTIONS(119),
    [sym_html_append_operator] = ACTIONS(117),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_CR] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
  },
  [33] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(94),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PIPEH] = ACTIONS(83),
    [anon_sym_PIPET] = ACTIONS(83),
    [anon_sym_AT_AT] = ACTIONS(87),
    [anon_sym_AT_ATdbt] = ACTIONS(87),
    [anon_sym_AT_ATdbta] = ACTIONS(83),
    [anon_sym_AT_ATdbtb] = ACTIONS(83),
    [anon_sym_AT_ATdbts] = ACTIONS(83),
    [anon_sym_AT_AT_DOT] = ACTIONS(83),
    [anon_sym_AT_AT_EQ] = ACTIONS(83),
    [anon_sym_AT_ATk] = ACTIONS(83),
    [anon_sym_AT_ATt] = ACTIONS(83),
    [anon_sym_AT_ATb] = ACTIONS(83),
    [anon_sym_AT_ATi] = ACTIONS(87),
    [anon_sym_AT_ATiS] = ACTIONS(83),
    [anon_sym_AT_ATf] = ACTIONS(83),
    [anon_sym_AT_ATs_COLON] = ACTIONS(83),
    [anon_sym_AT_ATc_COLON] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(87),
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
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_PIPE_DOT] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(83),
    [sym_html_redirect_operator] = ACTIONS(87),
    [sym_html_append_operator] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_CR] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_file_descriptor] = ACTIONS(83),
  },
  [34] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(95),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(121),
    [anon_sym_PIPET] = ACTIONS(121),
    [anon_sym_AT_AT] = ACTIONS(123),
    [anon_sym_AT_ATdbt] = ACTIONS(123),
    [anon_sym_AT_ATdbta] = ACTIONS(121),
    [anon_sym_AT_ATdbtb] = ACTIONS(121),
    [anon_sym_AT_ATdbts] = ACTIONS(121),
    [anon_sym_AT_AT_DOT] = ACTIONS(121),
    [anon_sym_AT_AT_EQ] = ACTIONS(121),
    [anon_sym_AT_ATk] = ACTIONS(121),
    [anon_sym_AT_ATt] = ACTIONS(121),
    [anon_sym_AT_ATb] = ACTIONS(121),
    [anon_sym_AT_ATi] = ACTIONS(123),
    [anon_sym_AT_ATiS] = ACTIONS(121),
    [anon_sym_AT_ATf] = ACTIONS(121),
    [anon_sym_AT_ATs_COLON] = ACTIONS(121),
    [anon_sym_AT_ATc_COLON] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
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
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(121),
    [sym_html_redirect_operator] = ACTIONS(123),
    [sym_html_append_operator] = ACTIONS(121),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_CR] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
  },
  [35] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(100),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_PIPET] = ACTIONS(125),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(125),
    [anon_sym_AT_ATdbtb] = ACTIONS(125),
    [anon_sym_AT_ATdbts] = ACTIONS(125),
    [anon_sym_AT_AT_DOT] = ACTIONS(125),
    [anon_sym_AT_AT_EQ] = ACTIONS(125),
    [anon_sym_AT_ATk] = ACTIONS(125),
    [anon_sym_AT_ATt] = ACTIONS(125),
    [anon_sym_AT_ATb] = ACTIONS(125),
    [anon_sym_AT_ATi] = ACTIONS(127),
    [anon_sym_AT_ATiS] = ACTIONS(125),
    [anon_sym_AT_ATf] = ACTIONS(125),
    [anon_sym_AT_ATs_COLON] = ACTIONS(125),
    [anon_sym_AT_ATc_COLON] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(127),
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
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_PIPE_DOT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(125),
    [sym_html_redirect_operator] = ACTIONS(127),
    [sym_html_append_operator] = ACTIONS(125),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym_file_descriptor] = ACTIONS(125),
  },
  [36] = {
    [sym_arg] = STATE(37),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(129),
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
    [anon_sym_RPAREN] = ACTIONS(129),
    [anon_sym_PIPE_DOT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(129),
    [sym_html_redirect_operator] = ACTIONS(131),
    [sym_html_append_operator] = ACTIONS(129),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_CR] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(129),
  },
  [37] = {
    [sym_arg] = STATE(37),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(138),
    [anon_sym_PIPEH] = ACTIONS(133),
    [anon_sym_PIPET] = ACTIONS(133),
    [anon_sym_AT_AT] = ACTIONS(138),
    [anon_sym_AT_ATdbt] = ACTIONS(138),
    [anon_sym_AT_ATdbta] = ACTIONS(133),
    [anon_sym_AT_ATdbtb] = ACTIONS(133),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT_AT_DOT] = ACTIONS(133),
    [anon_sym_AT_AT_EQ] = ACTIONS(133),
    [anon_sym_AT_ATk] = ACTIONS(133),
    [anon_sym_AT_ATt] = ACTIONS(133),
    [anon_sym_AT_ATb] = ACTIONS(133),
    [anon_sym_AT_ATi] = ACTIONS(138),
    [anon_sym_AT_ATiS] = ACTIONS(133),
    [anon_sym_AT_ATf] = ACTIONS(133),
    [anon_sym_AT_ATs_COLON] = ACTIONS(133),
    [anon_sym_AT_ATc_COLON] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(138),
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
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_PIPE_DOT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(138),
    [anon_sym_GT_GT] = ACTIONS(133),
    [sym_html_redirect_operator] = ACTIONS(138),
    [sym_html_append_operator] = ACTIONS(133),
    [sym_arg_identifier] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(143),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(149),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_CR] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(133),
  },
  [38] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(101),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PIPEH] = ACTIONS(83),
    [anon_sym_PIPET] = ACTIONS(83),
    [anon_sym_AT_AT] = ACTIONS(87),
    [anon_sym_AT_ATdbt] = ACTIONS(87),
    [anon_sym_AT_ATdbta] = ACTIONS(83),
    [anon_sym_AT_ATdbtb] = ACTIONS(83),
    [anon_sym_AT_ATdbts] = ACTIONS(83),
    [anon_sym_AT_AT_DOT] = ACTIONS(83),
    [anon_sym_AT_AT_EQ] = ACTIONS(83),
    [anon_sym_AT_ATk] = ACTIONS(83),
    [anon_sym_AT_ATt] = ACTIONS(83),
    [anon_sym_AT_ATb] = ACTIONS(83),
    [anon_sym_AT_ATi] = ACTIONS(87),
    [anon_sym_AT_ATiS] = ACTIONS(83),
    [anon_sym_AT_ATf] = ACTIONS(83),
    [anon_sym_AT_ATs_COLON] = ACTIONS(83),
    [anon_sym_AT_ATc_COLON] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(87),
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
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(83),
    [sym_html_redirect_operator] = ACTIONS(87),
    [sym_html_append_operator] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_file_descriptor] = ACTIONS(83),
  },
  [39] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(99),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
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
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(117),
    [sym_html_redirect_operator] = ACTIONS(119),
    [sym_html_append_operator] = ACTIONS(117),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
  },
  [40] = {
    [sym_eq_sep_args] = STATE(97),
    [sym__eq_sep_key_single] = STATE(56),
    [sym_eq_sep_key] = STATE(72),
    [sym_double_quoted_arg] = STATE(71),
    [sym_single_quoted_arg] = STATE(71),
    [sym_cmd_substitution_arg] = STATE(71),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_PIPET] = ACTIONS(99),
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(103),
    [anon_sym_AT_ATdbta] = ACTIONS(99),
    [anon_sym_AT_ATdbtb] = ACTIONS(99),
    [anon_sym_AT_ATdbts] = ACTIONS(99),
    [anon_sym_AT_AT_DOT] = ACTIONS(99),
    [anon_sym_AT_AT_EQ] = ACTIONS(99),
    [anon_sym_AT_ATk] = ACTIONS(99),
    [anon_sym_AT_ATt] = ACTIONS(99),
    [anon_sym_AT_ATb] = ACTIONS(99),
    [anon_sym_AT_ATi] = ACTIONS(103),
    [anon_sym_AT_ATiS] = ACTIONS(99),
    [anon_sym_AT_ATf] = ACTIONS(99),
    [anon_sym_AT_ATs_COLON] = ACTIONS(99),
    [anon_sym_AT_ATc_COLON] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(103),
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
    [anon_sym_PIPE_DOT] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(99),
    [sym_html_redirect_operator] = ACTIONS(103),
    [sym_html_append_operator] = ACTIONS(99),
    [sym__eq_sep_key_identifier] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(99),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_file_descriptor] = ACTIONS(99),
  },
  [41] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(100),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPEH] = ACTIONS(125),
    [anon_sym_PIPET] = ACTIONS(125),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(125),
    [anon_sym_AT_ATdbtb] = ACTIONS(125),
    [anon_sym_AT_ATdbts] = ACTIONS(125),
    [anon_sym_AT_AT_DOT] = ACTIONS(125),
    [anon_sym_AT_AT_EQ] = ACTIONS(125),
    [anon_sym_AT_ATk] = ACTIONS(125),
    [anon_sym_AT_ATt] = ACTIONS(125),
    [anon_sym_AT_ATb] = ACTIONS(125),
    [anon_sym_AT_ATi] = ACTIONS(127),
    [anon_sym_AT_ATiS] = ACTIONS(125),
    [anon_sym_AT_ATf] = ACTIONS(125),
    [anon_sym_AT_ATs_COLON] = ACTIONS(125),
    [anon_sym_AT_ATc_COLON] = ACTIONS(125),
    [anon_sym_AT] = ACTIONS(127),
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
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(125),
    [sym_html_redirect_operator] = ACTIONS(127),
    [sym_html_append_operator] = ACTIONS(125),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym_file_descriptor] = ACTIONS(125),
  },
  [42] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(95),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(121),
    [anon_sym_PIPET] = ACTIONS(121),
    [anon_sym_AT_AT] = ACTIONS(123),
    [anon_sym_AT_ATdbt] = ACTIONS(123),
    [anon_sym_AT_ATdbta] = ACTIONS(121),
    [anon_sym_AT_ATdbtb] = ACTIONS(121),
    [anon_sym_AT_ATdbts] = ACTIONS(121),
    [anon_sym_AT_AT_DOT] = ACTIONS(121),
    [anon_sym_AT_AT_EQ] = ACTIONS(121),
    [anon_sym_AT_ATk] = ACTIONS(121),
    [anon_sym_AT_ATt] = ACTIONS(121),
    [anon_sym_AT_ATb] = ACTIONS(121),
    [anon_sym_AT_ATi] = ACTIONS(123),
    [anon_sym_AT_ATiS] = ACTIONS(121),
    [anon_sym_AT_ATf] = ACTIONS(121),
    [anon_sym_AT_ATs_COLON] = ACTIONS(121),
    [anon_sym_AT_ATc_COLON] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(123),
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
    [anon_sym_PIPE_DOT] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(121),
    [sym_html_redirect_operator] = ACTIONS(123),
    [sym_html_append_operator] = ACTIONS(121),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(121),
  },
  [43] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(94),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(83),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_PIPEH] = ACTIONS(83),
    [anon_sym_PIPET] = ACTIONS(83),
    [anon_sym_AT_AT] = ACTIONS(87),
    [anon_sym_AT_ATdbt] = ACTIONS(87),
    [anon_sym_AT_ATdbta] = ACTIONS(83),
    [anon_sym_AT_ATdbtb] = ACTIONS(83),
    [anon_sym_AT_ATdbts] = ACTIONS(83),
    [anon_sym_AT_AT_DOT] = ACTIONS(83),
    [anon_sym_AT_AT_EQ] = ACTIONS(83),
    [anon_sym_AT_ATk] = ACTIONS(83),
    [anon_sym_AT_ATt] = ACTIONS(83),
    [anon_sym_AT_ATb] = ACTIONS(83),
    [anon_sym_AT_ATi] = ACTIONS(87),
    [anon_sym_AT_ATiS] = ACTIONS(83),
    [anon_sym_AT_ATf] = ACTIONS(83),
    [anon_sym_AT_ATs_COLON] = ACTIONS(83),
    [anon_sym_AT_ATc_COLON] = ACTIONS(83),
    [anon_sym_AT] = ACTIONS(87),
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
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(83),
    [sym_html_redirect_operator] = ACTIONS(87),
    [sym_html_append_operator] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_file_descriptor] = ACTIONS(83),
  },
  [44] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(86),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
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
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(113),
    [sym_html_redirect_operator] = ACTIONS(115),
    [sym_html_append_operator] = ACTIONS(113),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [45] = {
    [sym_arg] = STATE(37),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(129),
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
    [anon_sym_PIPE_DOT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(129),
    [sym_html_redirect_operator] = ACTIONS(131),
    [sym_html_append_operator] = ACTIONS(129),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(129),
  },
  [46] = {
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
    [anon_sym_GT] = ACTIONS(154),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(154),
    [sym_html_append_operator] = ACTIONS(152),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_file_descriptor] = ACTIONS(152),
  },
  [47] = {
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
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
  },
  [48] = {
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
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(160),
    [sym_html_redirect_operator] = ACTIONS(162),
    [sym_html_append_operator] = ACTIONS(160),
    [sym_arg_identifier] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_file_descriptor] = ACTIONS(160),
  },
  [49] = {
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
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(166),
    [sym_html_append_operator] = ACTIONS(164),
    [sym_arg_identifier] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_file_descriptor] = ACTIONS(164),
  },
  [50] = {
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
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(166),
    [sym_html_append_operator] = ACTIONS(164),
    [sym_arg_identifier] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_file_descriptor] = ACTIONS(164),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(168),
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
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_GT] = ACTIONS(168),
    [sym_html_redirect_operator] = ACTIONS(170),
    [sym_html_append_operator] = ACTIONS(168),
    [sym_arg_identifier] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_file_descriptor] = ACTIONS(168),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
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
    [anon_sym_ATF_COLON] = ACTIONS(172),
    [anon_sym_ATi_COLON] = ACTIONS(172),
    [anon_sym_ATk_COLON] = ACTIONS(172),
    [anon_sym_ATo_COLON] = ACTIONS(172),
    [anon_sym_ATr_COLON] = ACTIONS(172),
    [anon_sym_ATf_COLON] = ACTIONS(172),
    [anon_sym_ATs_COLON] = ACTIONS(172),
    [anon_sym_ATx_COLON] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_PIPE_DOT] = ACTIONS(172),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_GT_GT] = ACTIONS(172),
    [sym_html_redirect_operator] = ACTIONS(174),
    [sym_html_append_operator] = ACTIONS(172),
    [sym__eq_sep_key_identifier] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_file_descriptor] = ACTIONS(172),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
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
    [anon_sym_ATF_COLON] = ACTIONS(176),
    [anon_sym_ATi_COLON] = ACTIONS(176),
    [anon_sym_ATk_COLON] = ACTIONS(176),
    [anon_sym_ATo_COLON] = ACTIONS(176),
    [anon_sym_ATr_COLON] = ACTIONS(176),
    [anon_sym_ATf_COLON] = ACTIONS(176),
    [anon_sym_ATs_COLON] = ACTIONS(176),
    [anon_sym_ATx_COLON] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_PIPE_DOT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(176),
    [sym_html_redirect_operator] = ACTIONS(178),
    [sym_html_append_operator] = ACTIONS(176),
    [sym_arg_identifier] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_file_descriptor] = ACTIONS(176),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_PIPEH] = ACTIONS(180),
    [anon_sym_PIPET] = ACTIONS(180),
    [anon_sym_AT_AT] = ACTIONS(182),
    [anon_sym_AT_ATdbt] = ACTIONS(182),
    [anon_sym_AT_ATdbta] = ACTIONS(180),
    [anon_sym_AT_ATdbtb] = ACTIONS(180),
    [anon_sym_AT_ATdbts] = ACTIONS(180),
    [anon_sym_AT_AT_DOT] = ACTIONS(180),
    [anon_sym_AT_AT_EQ] = ACTIONS(180),
    [anon_sym_AT_ATk] = ACTIONS(180),
    [anon_sym_AT_ATt] = ACTIONS(180),
    [anon_sym_AT_ATb] = ACTIONS(180),
    [anon_sym_AT_ATi] = ACTIONS(182),
    [anon_sym_AT_ATiS] = ACTIONS(180),
    [anon_sym_AT_ATf] = ACTIONS(180),
    [anon_sym_AT_ATs_COLON] = ACTIONS(180),
    [anon_sym_AT_ATc_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_AT_BANG] = ACTIONS(180),
    [anon_sym_AT_LPAREN] = ACTIONS(180),
    [anon_sym_ATa_COLON] = ACTIONS(180),
    [anon_sym_ATb_COLON] = ACTIONS(180),
    [anon_sym_ATB_COLON] = ACTIONS(180),
    [anon_sym_ATe_COLON] = ACTIONS(180),
    [anon_sym_ATF_COLON] = ACTIONS(180),
    [anon_sym_ATi_COLON] = ACTIONS(180),
    [anon_sym_ATk_COLON] = ACTIONS(180),
    [anon_sym_ATo_COLON] = ACTIONS(180),
    [anon_sym_ATr_COLON] = ACTIONS(180),
    [anon_sym_ATf_COLON] = ACTIONS(180),
    [anon_sym_ATs_COLON] = ACTIONS(180),
    [anon_sym_ATx_COLON] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PIPE_DOT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(180),
    [sym_html_redirect_operator] = ACTIONS(182),
    [sym_html_append_operator] = ACTIONS(180),
    [sym_arg_identifier] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_file_descriptor] = ACTIONS(180),
  },
  [55] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(184),
    [anon_sym_TILDE] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(186),
    [anon_sym_PIPEH] = ACTIONS(184),
    [anon_sym_PIPET] = ACTIONS(184),
    [anon_sym_AT_AT] = ACTIONS(186),
    [anon_sym_AT_ATdbt] = ACTIONS(186),
    [anon_sym_AT_ATdbta] = ACTIONS(184),
    [anon_sym_AT_ATdbtb] = ACTIONS(184),
    [anon_sym_AT_ATdbts] = ACTIONS(184),
    [anon_sym_AT_AT_DOT] = ACTIONS(184),
    [anon_sym_AT_AT_EQ] = ACTIONS(184),
    [anon_sym_AT_ATk] = ACTIONS(184),
    [anon_sym_AT_ATt] = ACTIONS(184),
    [anon_sym_AT_ATb] = ACTIONS(184),
    [anon_sym_AT_ATi] = ACTIONS(186),
    [anon_sym_AT_ATiS] = ACTIONS(184),
    [anon_sym_AT_ATf] = ACTIONS(184),
    [anon_sym_AT_ATs_COLON] = ACTIONS(184),
    [anon_sym_AT_ATc_COLON] = ACTIONS(184),
    [anon_sym_AT] = ACTIONS(186),
    [anon_sym_AT_BANG] = ACTIONS(184),
    [anon_sym_AT_LPAREN] = ACTIONS(184),
    [anon_sym_ATa_COLON] = ACTIONS(184),
    [anon_sym_ATb_COLON] = ACTIONS(184),
    [anon_sym_ATB_COLON] = ACTIONS(184),
    [anon_sym_ATe_COLON] = ACTIONS(184),
    [anon_sym_ATF_COLON] = ACTIONS(184),
    [anon_sym_ATi_COLON] = ACTIONS(184),
    [anon_sym_ATk_COLON] = ACTIONS(184),
    [anon_sym_ATo_COLON] = ACTIONS(184),
    [anon_sym_ATr_COLON] = ACTIONS(184),
    [anon_sym_ATf_COLON] = ACTIONS(184),
    [anon_sym_ATs_COLON] = ACTIONS(184),
    [anon_sym_ATx_COLON] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_PIPE_DOT] = ACTIONS(184),
    [anon_sym_EQ] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(184),
    [sym_html_redirect_operator] = ACTIONS(186),
    [sym_html_append_operator] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [sym_file_descriptor] = ACTIONS(184),
    [sym__eq_sep_concat] = ACTIONS(188),
  },
  [56] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_PIPEH] = ACTIONS(190),
    [anon_sym_PIPET] = ACTIONS(190),
    [anon_sym_AT_AT] = ACTIONS(192),
    [anon_sym_AT_ATdbt] = ACTIONS(192),
    [anon_sym_AT_ATdbta] = ACTIONS(190),
    [anon_sym_AT_ATdbtb] = ACTIONS(190),
    [anon_sym_AT_ATdbts] = ACTIONS(190),
    [anon_sym_AT_AT_DOT] = ACTIONS(190),
    [anon_sym_AT_AT_EQ] = ACTIONS(190),
    [anon_sym_AT_ATk] = ACTIONS(190),
    [anon_sym_AT_ATt] = ACTIONS(190),
    [anon_sym_AT_ATb] = ACTIONS(190),
    [anon_sym_AT_ATi] = ACTIONS(192),
    [anon_sym_AT_ATiS] = ACTIONS(190),
    [anon_sym_AT_ATf] = ACTIONS(190),
    [anon_sym_AT_ATs_COLON] = ACTIONS(190),
    [anon_sym_AT_ATc_COLON] = ACTIONS(190),
    [anon_sym_AT] = ACTIONS(192),
    [anon_sym_AT_BANG] = ACTIONS(190),
    [anon_sym_AT_LPAREN] = ACTIONS(190),
    [anon_sym_ATa_COLON] = ACTIONS(190),
    [anon_sym_ATb_COLON] = ACTIONS(190),
    [anon_sym_ATB_COLON] = ACTIONS(190),
    [anon_sym_ATe_COLON] = ACTIONS(190),
    [anon_sym_ATF_COLON] = ACTIONS(190),
    [anon_sym_ATi_COLON] = ACTIONS(190),
    [anon_sym_ATk_COLON] = ACTIONS(190),
    [anon_sym_ATo_COLON] = ACTIONS(190),
    [anon_sym_ATr_COLON] = ACTIONS(190),
    [anon_sym_ATf_COLON] = ACTIONS(190),
    [anon_sym_ATs_COLON] = ACTIONS(190),
    [anon_sym_ATx_COLON] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(190),
    [anon_sym_PIPE_DOT] = ACTIONS(190),
    [anon_sym_EQ] = ACTIONS(190),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_GT_GT] = ACTIONS(190),
    [sym_html_redirect_operator] = ACTIONS(192),
    [sym_html_append_operator] = ACTIONS(190),
    [anon_sym_BQUOTE] = ACTIONS(190),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(190),
    [anon_sym_CR] = ACTIONS(190),
    [anon_sym_SEMI] = ACTIONS(190),
    [sym_file_descriptor] = ACTIONS(190),
    [sym__eq_sep_concat] = ACTIONS(188),
  },
  [57] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_PIPEH] = ACTIONS(194),
    [anon_sym_PIPET] = ACTIONS(194),
    [anon_sym_AT_AT] = ACTIONS(196),
    [anon_sym_AT_ATdbt] = ACTIONS(196),
    [anon_sym_AT_ATdbta] = ACTIONS(194),
    [anon_sym_AT_ATdbtb] = ACTIONS(194),
    [anon_sym_AT_ATdbts] = ACTIONS(194),
    [anon_sym_AT_AT_DOT] = ACTIONS(194),
    [anon_sym_AT_AT_EQ] = ACTIONS(194),
    [anon_sym_AT_ATk] = ACTIONS(194),
    [anon_sym_AT_ATt] = ACTIONS(194),
    [anon_sym_AT_ATb] = ACTIONS(194),
    [anon_sym_AT_ATi] = ACTIONS(196),
    [anon_sym_AT_ATiS] = ACTIONS(194),
    [anon_sym_AT_ATf] = ACTIONS(194),
    [anon_sym_AT_ATs_COLON] = ACTIONS(194),
    [anon_sym_AT_ATc_COLON] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_AT_BANG] = ACTIONS(194),
    [anon_sym_AT_LPAREN] = ACTIONS(194),
    [anon_sym_ATa_COLON] = ACTIONS(194),
    [anon_sym_ATb_COLON] = ACTIONS(194),
    [anon_sym_ATB_COLON] = ACTIONS(194),
    [anon_sym_ATe_COLON] = ACTIONS(194),
    [anon_sym_ATF_COLON] = ACTIONS(194),
    [anon_sym_ATi_COLON] = ACTIONS(194),
    [anon_sym_ATk_COLON] = ACTIONS(194),
    [anon_sym_ATo_COLON] = ACTIONS(194),
    [anon_sym_ATr_COLON] = ACTIONS(194),
    [anon_sym_ATf_COLON] = ACTIONS(194),
    [anon_sym_ATs_COLON] = ACTIONS(194),
    [anon_sym_ATx_COLON] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_PIPE_DOT] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_GT_GT] = ACTIONS(194),
    [sym_html_redirect_operator] = ACTIONS(196),
    [sym_html_append_operator] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(194),
    [anon_sym_CR] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [sym_file_descriptor] = ACTIONS(194),
    [sym__eq_sep_concat] = ACTIONS(198),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_PIPEH] = ACTIONS(180),
    [anon_sym_PIPET] = ACTIONS(180),
    [anon_sym_AT_AT] = ACTIONS(182),
    [anon_sym_AT_ATdbt] = ACTIONS(182),
    [anon_sym_AT_ATdbta] = ACTIONS(180),
    [anon_sym_AT_ATdbtb] = ACTIONS(180),
    [anon_sym_AT_ATdbts] = ACTIONS(180),
    [anon_sym_AT_AT_DOT] = ACTIONS(180),
    [anon_sym_AT_AT_EQ] = ACTIONS(180),
    [anon_sym_AT_ATk] = ACTIONS(180),
    [anon_sym_AT_ATt] = ACTIONS(180),
    [anon_sym_AT_ATb] = ACTIONS(180),
    [anon_sym_AT_ATi] = ACTIONS(182),
    [anon_sym_AT_ATiS] = ACTIONS(180),
    [anon_sym_AT_ATf] = ACTIONS(180),
    [anon_sym_AT_ATs_COLON] = ACTIONS(180),
    [anon_sym_AT_ATc_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_AT_BANG] = ACTIONS(180),
    [anon_sym_AT_LPAREN] = ACTIONS(180),
    [anon_sym_ATa_COLON] = ACTIONS(180),
    [anon_sym_ATb_COLON] = ACTIONS(180),
    [anon_sym_ATB_COLON] = ACTIONS(180),
    [anon_sym_ATe_COLON] = ACTIONS(180),
    [anon_sym_ATF_COLON] = ACTIONS(180),
    [anon_sym_ATi_COLON] = ACTIONS(180),
    [anon_sym_ATk_COLON] = ACTIONS(180),
    [anon_sym_ATo_COLON] = ACTIONS(180),
    [anon_sym_ATr_COLON] = ACTIONS(180),
    [anon_sym_ATf_COLON] = ACTIONS(180),
    [anon_sym_ATs_COLON] = ACTIONS(180),
    [anon_sym_ATx_COLON] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PIPE_DOT] = ACTIONS(180),
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(180),
    [sym_html_redirect_operator] = ACTIONS(182),
    [sym_html_append_operator] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_file_descriptor] = ACTIONS(180),
    [sym__eq_sep_concat] = ACTIONS(180),
  },
  [59] = {
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
    [anon_sym_EQ] = ACTIONS(156),
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
    [sym__eq_sep_concat] = ACTIONS(156),
  },
  [60] = {
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
    [anon_sym_EQ] = ACTIONS(164),
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
    [sym__eq_sep_concat] = ACTIONS(164),
  },
  [61] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(201),
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
    [anon_sym_PIPE_DOT] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_GT_GT] = ACTIONS(201),
    [sym_html_redirect_operator] = ACTIONS(203),
    [sym_html_append_operator] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(201),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(201),
    [anon_sym_CR] = ACTIONS(201),
    [anon_sym_SEMI] = ACTIONS(201),
    [sym_file_descriptor] = ACTIONS(201),
    [sym__eq_sep_concat] = ACTIONS(205),
  },
  [62] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_TILDE] = ACTIONS(207),
    [anon_sym_PIPE] = ACTIONS(209),
    [anon_sym_PIPEH] = ACTIONS(207),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(207),
    [anon_sym_AT_ATdbtb] = ACTIONS(207),
    [anon_sym_AT_ATdbts] = ACTIONS(207),
    [anon_sym_AT_AT_DOT] = ACTIONS(207),
    [anon_sym_AT_AT_EQ] = ACTIONS(207),
    [anon_sym_AT_ATk] = ACTIONS(207),
    [anon_sym_AT_ATt] = ACTIONS(207),
    [anon_sym_AT_ATb] = ACTIONS(207),
    [anon_sym_AT_ATi] = ACTIONS(209),
    [anon_sym_AT_ATiS] = ACTIONS(207),
    [anon_sym_AT_ATf] = ACTIONS(207),
    [anon_sym_AT_ATs_COLON] = ACTIONS(207),
    [anon_sym_AT_ATc_COLON] = ACTIONS(207),
    [anon_sym_AT] = ACTIONS(209),
    [anon_sym_AT_BANG] = ACTIONS(207),
    [anon_sym_AT_LPAREN] = ACTIONS(207),
    [anon_sym_ATa_COLON] = ACTIONS(207),
    [anon_sym_ATb_COLON] = ACTIONS(207),
    [anon_sym_ATB_COLON] = ACTIONS(207),
    [anon_sym_ATe_COLON] = ACTIONS(207),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_ATF_COLON] = ACTIONS(207),
    [anon_sym_ATi_COLON] = ACTIONS(207),
    [anon_sym_ATk_COLON] = ACTIONS(207),
    [anon_sym_ATo_COLON] = ACTIONS(207),
    [anon_sym_ATr_COLON] = ACTIONS(207),
    [anon_sym_ATf_COLON] = ACTIONS(207),
    [anon_sym_ATs_COLON] = ACTIONS(207),
    [anon_sym_ATx_COLON] = ACTIONS(207),
    [anon_sym_RPAREN] = ACTIONS(207),
    [anon_sym_PIPE_DOT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(209),
    [anon_sym_GT_GT] = ACTIONS(207),
    [sym_html_redirect_operator] = ACTIONS(209),
    [sym_html_append_operator] = ACTIONS(207),
    [anon_sym_BQUOTE] = ACTIONS(207),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(207),
    [anon_sym_CR] = ACTIONS(207),
    [anon_sym_SEMI] = ACTIONS(207),
    [sym_file_descriptor] = ACTIONS(207),
  },
  [63] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_TILDE] = ACTIONS(213),
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
    [anon_sym_PIPE_DOT] = ACTIONS(213),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_GT_GT] = ACTIONS(213),
    [sym_html_redirect_operator] = ACTIONS(215),
    [sym_html_append_operator] = ACTIONS(213),
    [anon_sym_BQUOTE] = ACTIONS(213),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(213),
    [anon_sym_CR] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(213),
    [sym_file_descriptor] = ACTIONS(213),
    [sym__eq_sep_concat] = ACTIONS(205),
  },
  [64] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
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
    [anon_sym_PIPE_DOT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_GT] = ACTIONS(217),
    [sym_html_redirect_operator] = ACTIONS(219),
    [sym_html_append_operator] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_CR] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [sym_file_descriptor] = ACTIONS(217),
    [sym__eq_sep_concat] = ACTIONS(221),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_PIPEH] = ACTIONS(194),
    [anon_sym_PIPET] = ACTIONS(194),
    [anon_sym_AT_AT] = ACTIONS(196),
    [anon_sym_AT_ATdbt] = ACTIONS(196),
    [anon_sym_AT_ATdbta] = ACTIONS(194),
    [anon_sym_AT_ATdbtb] = ACTIONS(194),
    [anon_sym_AT_ATdbts] = ACTIONS(194),
    [anon_sym_AT_AT_DOT] = ACTIONS(194),
    [anon_sym_AT_AT_EQ] = ACTIONS(194),
    [anon_sym_AT_ATk] = ACTIONS(194),
    [anon_sym_AT_ATt] = ACTIONS(194),
    [anon_sym_AT_ATb] = ACTIONS(194),
    [anon_sym_AT_ATi] = ACTIONS(196),
    [anon_sym_AT_ATiS] = ACTIONS(194),
    [anon_sym_AT_ATf] = ACTIONS(194),
    [anon_sym_AT_ATs_COLON] = ACTIONS(194),
    [anon_sym_AT_ATc_COLON] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_AT_BANG] = ACTIONS(194),
    [anon_sym_AT_LPAREN] = ACTIONS(194),
    [anon_sym_ATa_COLON] = ACTIONS(194),
    [anon_sym_ATb_COLON] = ACTIONS(194),
    [anon_sym_ATB_COLON] = ACTIONS(194),
    [anon_sym_ATe_COLON] = ACTIONS(194),
    [anon_sym_ATF_COLON] = ACTIONS(194),
    [anon_sym_ATi_COLON] = ACTIONS(194),
    [anon_sym_ATk_COLON] = ACTIONS(194),
    [anon_sym_ATo_COLON] = ACTIONS(194),
    [anon_sym_ATr_COLON] = ACTIONS(194),
    [anon_sym_ATf_COLON] = ACTIONS(194),
    [anon_sym_ATs_COLON] = ACTIONS(194),
    [anon_sym_ATx_COLON] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_PIPE_DOT] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_GT_GT] = ACTIONS(194),
    [sym_html_redirect_operator] = ACTIONS(196),
    [sym_html_append_operator] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(194),
    [anon_sym_CR] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [sym_file_descriptor] = ACTIONS(194),
    [sym__eq_sep_concat] = ACTIONS(194),
  },
  [66] = {
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
    [anon_sym_EQ] = ACTIONS(164),
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
    [sym__eq_sep_concat] = ACTIONS(164),
  },
  [67] = {
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
    [anon_sym_EQ] = ACTIONS(160),
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
    [sym__eq_sep_concat] = ACTIONS(160),
  },
  [68] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_PIPEH] = ACTIONS(224),
    [anon_sym_PIPET] = ACTIONS(224),
    [anon_sym_AT_AT] = ACTIONS(226),
    [anon_sym_AT_ATdbt] = ACTIONS(226),
    [anon_sym_AT_ATdbta] = ACTIONS(224),
    [anon_sym_AT_ATdbtb] = ACTIONS(224),
    [anon_sym_AT_ATdbts] = ACTIONS(224),
    [anon_sym_AT_AT_DOT] = ACTIONS(224),
    [anon_sym_AT_AT_EQ] = ACTIONS(224),
    [anon_sym_AT_ATk] = ACTIONS(224),
    [anon_sym_AT_ATt] = ACTIONS(224),
    [anon_sym_AT_ATb] = ACTIONS(224),
    [anon_sym_AT_ATi] = ACTIONS(226),
    [anon_sym_AT_ATiS] = ACTIONS(224),
    [anon_sym_AT_ATf] = ACTIONS(224),
    [anon_sym_AT_ATs_COLON] = ACTIONS(224),
    [anon_sym_AT_ATc_COLON] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(226),
    [anon_sym_AT_BANG] = ACTIONS(224),
    [anon_sym_AT_LPAREN] = ACTIONS(224),
    [anon_sym_ATa_COLON] = ACTIONS(224),
    [anon_sym_ATb_COLON] = ACTIONS(224),
    [anon_sym_ATB_COLON] = ACTIONS(224),
    [anon_sym_ATe_COLON] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(228),
    [anon_sym_ATF_COLON] = ACTIONS(224),
    [anon_sym_ATi_COLON] = ACTIONS(224),
    [anon_sym_ATk_COLON] = ACTIONS(224),
    [anon_sym_ATo_COLON] = ACTIONS(224),
    [anon_sym_ATr_COLON] = ACTIONS(224),
    [anon_sym_ATf_COLON] = ACTIONS(224),
    [anon_sym_ATs_COLON] = ACTIONS(224),
    [anon_sym_ATx_COLON] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_PIPE_DOT] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_GT] = ACTIONS(224),
    [sym_html_redirect_operator] = ACTIONS(226),
    [sym_html_append_operator] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(224),
    [anon_sym_CR] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [sym_file_descriptor] = ACTIONS(224),
  },
  [69] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_PIPE] = ACTIONS(233),
    [anon_sym_PIPEH] = ACTIONS(231),
    [anon_sym_PIPET] = ACTIONS(231),
    [anon_sym_AT_AT] = ACTIONS(233),
    [anon_sym_AT_ATdbt] = ACTIONS(233),
    [anon_sym_AT_ATdbta] = ACTIONS(231),
    [anon_sym_AT_ATdbtb] = ACTIONS(231),
    [anon_sym_AT_ATdbts] = ACTIONS(231),
    [anon_sym_AT_AT_DOT] = ACTIONS(231),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(231),
    [anon_sym_AT_ATt] = ACTIONS(231),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(231),
    [anon_sym_AT] = ACTIONS(233),
    [anon_sym_AT_BANG] = ACTIONS(231),
    [anon_sym_AT_LPAREN] = ACTIONS(231),
    [anon_sym_ATa_COLON] = ACTIONS(231),
    [anon_sym_ATb_COLON] = ACTIONS(231),
    [anon_sym_ATB_COLON] = ACTIONS(231),
    [anon_sym_ATe_COLON] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_ATF_COLON] = ACTIONS(231),
    [anon_sym_ATi_COLON] = ACTIONS(231),
    [anon_sym_ATk_COLON] = ACTIONS(231),
    [anon_sym_ATo_COLON] = ACTIONS(231),
    [anon_sym_ATr_COLON] = ACTIONS(231),
    [anon_sym_ATf_COLON] = ACTIONS(231),
    [anon_sym_ATs_COLON] = ACTIONS(231),
    [anon_sym_ATx_COLON] = ACTIONS(231),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_PIPE_DOT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(233),
    [anon_sym_GT_GT] = ACTIONS(231),
    [sym_html_redirect_operator] = ACTIONS(233),
    [sym_html_append_operator] = ACTIONS(231),
    [anon_sym_BQUOTE] = ACTIONS(231),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(231),
    [anon_sym_CR] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(231),
    [sym_file_descriptor] = ACTIONS(231),
  },
  [70] = {
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
    [anon_sym_EQ] = ACTIONS(152),
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
    [sym__eq_sep_concat] = ACTIONS(152),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_PIPE] = ACTIONS(237),
    [anon_sym_PIPEH] = ACTIONS(235),
    [anon_sym_PIPET] = ACTIONS(235),
    [anon_sym_AT_AT] = ACTIONS(237),
    [anon_sym_AT_ATdbt] = ACTIONS(237),
    [anon_sym_AT_ATdbta] = ACTIONS(235),
    [anon_sym_AT_ATdbtb] = ACTIONS(235),
    [anon_sym_AT_ATdbts] = ACTIONS(235),
    [anon_sym_AT_AT_DOT] = ACTIONS(235),
    [anon_sym_AT_AT_EQ] = ACTIONS(235),
    [anon_sym_AT_ATk] = ACTIONS(235),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(235),
    [anon_sym_AT_ATi] = ACTIONS(237),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(235),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(235),
    [anon_sym_AT] = ACTIONS(237),
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
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_PIPE_DOT] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(235),
    [sym_html_redirect_operator] = ACTIONS(237),
    [sym_html_append_operator] = ACTIONS(235),
    [anon_sym_BQUOTE] = ACTIONS(235),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(235),
    [anon_sym_CR] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(235),
    [sym_file_descriptor] = ACTIONS(235),
    [sym__eq_sep_concat] = ACTIONS(235),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(239),
    [anon_sym_PIPE] = ACTIONS(241),
    [anon_sym_PIPEH] = ACTIONS(239),
    [anon_sym_PIPET] = ACTIONS(239),
    [anon_sym_AT_AT] = ACTIONS(241),
    [anon_sym_AT_ATdbt] = ACTIONS(241),
    [anon_sym_AT_ATdbta] = ACTIONS(239),
    [anon_sym_AT_ATdbtb] = ACTIONS(239),
    [anon_sym_AT_ATdbts] = ACTIONS(239),
    [anon_sym_AT_AT_DOT] = ACTIONS(239),
    [anon_sym_AT_AT_EQ] = ACTIONS(239),
    [anon_sym_AT_ATk] = ACTIONS(239),
    [anon_sym_AT_ATt] = ACTIONS(239),
    [anon_sym_AT_ATb] = ACTIONS(239),
    [anon_sym_AT_ATi] = ACTIONS(241),
    [anon_sym_AT_ATiS] = ACTIONS(239),
    [anon_sym_AT_ATf] = ACTIONS(239),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(239),
    [anon_sym_AT] = ACTIONS(241),
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
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_PIPE_DOT] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(241),
    [anon_sym_GT_GT] = ACTIONS(239),
    [sym_html_redirect_operator] = ACTIONS(241),
    [sym_html_append_operator] = ACTIONS(239),
    [anon_sym_BQUOTE] = ACTIONS(239),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(239),
    [anon_sym_CR] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(239),
    [sym_file_descriptor] = ACTIONS(239),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
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
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_PIPE_DOT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(245),
    [sym_html_redirect_operator] = ACTIONS(247),
    [sym_html_append_operator] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_CR] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_file_descriptor] = ACTIONS(245),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [anon_sym_TILDE] = ACTIONS(251),
    [anon_sym_PIPE] = ACTIONS(253),
    [anon_sym_PIPEH] = ACTIONS(251),
    [anon_sym_PIPET] = ACTIONS(251),
    [anon_sym_AT_AT] = ACTIONS(253),
    [anon_sym_AT_ATdbt] = ACTIONS(253),
    [anon_sym_AT_ATdbta] = ACTIONS(251),
    [anon_sym_AT_ATdbtb] = ACTIONS(251),
    [anon_sym_AT_ATdbts] = ACTIONS(251),
    [anon_sym_AT_AT_DOT] = ACTIONS(251),
    [anon_sym_AT_AT_EQ] = ACTIONS(251),
    [anon_sym_AT_ATk] = ACTIONS(251),
    [anon_sym_AT_ATt] = ACTIONS(251),
    [anon_sym_AT_ATb] = ACTIONS(251),
    [anon_sym_AT_ATi] = ACTIONS(253),
    [anon_sym_AT_ATiS] = ACTIONS(251),
    [anon_sym_AT_ATf] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(255),
    [anon_sym_AT_ATs_COLON] = ACTIONS(251),
    [anon_sym_AT_ATc_COLON] = ACTIONS(251),
    [anon_sym_AT] = ACTIONS(253),
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
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_PIPE_DOT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_GT_GT] = ACTIONS(251),
    [sym_html_redirect_operator] = ACTIONS(253),
    [sym_html_append_operator] = ACTIONS(251),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(251),
    [anon_sym_CR] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(251),
    [sym_file_descriptor] = ACTIONS(251),
  },
  [75] = {
    [sym__redirect_operator] = STATE(173),
    [sym_fdn_redirect_operator] = STATE(173),
    [sym_fdn_append_operator] = STATE(173),
    [ts_builtin_sym_end] = ACTIONS(257),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(261),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(333),
    [sym_html_append_operator] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(257),
    [anon_sym_CR] = ACTIONS(257),
    [anon_sym_SEMI] = ACTIONS(257),
    [sym_file_descriptor] = ACTIONS(337),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
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
    [anon_sym_PIPE_DOT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_GT_GT] = ACTIONS(217),
    [sym_html_redirect_operator] = ACTIONS(219),
    [sym_html_append_operator] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(217),
    [anon_sym_CR] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(217),
    [sym_file_descriptor] = ACTIONS(217),
    [sym__eq_sep_concat] = ACTIONS(217),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_TILDE] = ACTIONS(339),
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
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_PIPE_DOT] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(341),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_html_redirect_operator] = ACTIONS(341),
    [sym_html_append_operator] = ACTIONS(339),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
    [sym_file_descriptor] = ACTIONS(339),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_PIPE] = ACTIONS(226),
    [anon_sym_PIPEH] = ACTIONS(224),
    [anon_sym_PIPET] = ACTIONS(224),
    [anon_sym_AT_AT] = ACTIONS(226),
    [anon_sym_AT_ATdbt] = ACTIONS(226),
    [anon_sym_AT_ATdbta] = ACTIONS(224),
    [anon_sym_AT_ATdbtb] = ACTIONS(224),
    [anon_sym_AT_ATdbts] = ACTIONS(224),
    [anon_sym_AT_AT_DOT] = ACTIONS(224),
    [anon_sym_AT_AT_EQ] = ACTIONS(224),
    [anon_sym_AT_ATk] = ACTIONS(224),
    [anon_sym_AT_ATt] = ACTIONS(224),
    [anon_sym_AT_ATb] = ACTIONS(224),
    [anon_sym_AT_ATi] = ACTIONS(226),
    [anon_sym_AT_ATiS] = ACTIONS(224),
    [anon_sym_AT_ATf] = ACTIONS(224),
    [anon_sym_AT_ATs_COLON] = ACTIONS(224),
    [anon_sym_AT_ATc_COLON] = ACTIONS(224),
    [anon_sym_AT] = ACTIONS(226),
    [anon_sym_AT_BANG] = ACTIONS(224),
    [anon_sym_AT_LPAREN] = ACTIONS(224),
    [anon_sym_ATa_COLON] = ACTIONS(224),
    [anon_sym_ATb_COLON] = ACTIONS(224),
    [anon_sym_ATB_COLON] = ACTIONS(224),
    [anon_sym_ATe_COLON] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_ATF_COLON] = ACTIONS(224),
    [anon_sym_ATi_COLON] = ACTIONS(224),
    [anon_sym_ATk_COLON] = ACTIONS(224),
    [anon_sym_ATo_COLON] = ACTIONS(224),
    [anon_sym_ATr_COLON] = ACTIONS(224),
    [anon_sym_ATf_COLON] = ACTIONS(224),
    [anon_sym_ATs_COLON] = ACTIONS(224),
    [anon_sym_ATx_COLON] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
    [anon_sym_PIPE_DOT] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(226),
    [anon_sym_GT_GT] = ACTIONS(224),
    [sym_html_redirect_operator] = ACTIONS(226),
    [sym_html_append_operator] = ACTIONS(224),
    [anon_sym_BQUOTE] = ACTIONS(224),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(224),
    [anon_sym_CR] = ACTIONS(224),
    [anon_sym_SEMI] = ACTIONS(224),
    [sym_file_descriptor] = ACTIONS(224),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
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
    [anon_sym_ATF_COLON] = ACTIONS(176),
    [anon_sym_ATi_COLON] = ACTIONS(176),
    [anon_sym_ATk_COLON] = ACTIONS(176),
    [anon_sym_ATo_COLON] = ACTIONS(176),
    [anon_sym_ATr_COLON] = ACTIONS(176),
    [anon_sym_ATf_COLON] = ACTIONS(176),
    [anon_sym_ATs_COLON] = ACTIONS(176),
    [anon_sym_ATx_COLON] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_PIPE_DOT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(176),
    [sym_html_redirect_operator] = ACTIONS(178),
    [sym_html_append_operator] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_file_descriptor] = ACTIONS(176),
    [sym__eq_sep_concat] = ACTIONS(176),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_PIPEH] = ACTIONS(345),
    [anon_sym_PIPET] = ACTIONS(345),
    [anon_sym_AT_AT] = ACTIONS(347),
    [anon_sym_AT_ATdbt] = ACTIONS(347),
    [anon_sym_AT_ATdbta] = ACTIONS(345),
    [anon_sym_AT_ATdbtb] = ACTIONS(345),
    [anon_sym_AT_ATdbts] = ACTIONS(345),
    [anon_sym_AT_AT_DOT] = ACTIONS(345),
    [anon_sym_AT_AT_EQ] = ACTIONS(345),
    [anon_sym_AT_ATk] = ACTIONS(345),
    [anon_sym_AT_ATt] = ACTIONS(345),
    [anon_sym_AT_ATb] = ACTIONS(345),
    [anon_sym_AT_ATi] = ACTIONS(347),
    [anon_sym_AT_ATiS] = ACTIONS(345),
    [anon_sym_AT_ATf] = ACTIONS(345),
    [anon_sym_AT_ATs_COLON] = ACTIONS(345),
    [anon_sym_AT_ATc_COLON] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym_AT_BANG] = ACTIONS(345),
    [anon_sym_AT_LPAREN] = ACTIONS(345),
    [anon_sym_ATa_COLON] = ACTIONS(345),
    [anon_sym_ATb_COLON] = ACTIONS(345),
    [anon_sym_ATB_COLON] = ACTIONS(345),
    [anon_sym_ATe_COLON] = ACTIONS(345),
    [anon_sym_ATF_COLON] = ACTIONS(345),
    [anon_sym_ATi_COLON] = ACTIONS(345),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(345),
    [anon_sym_ATr_COLON] = ACTIONS(345),
    [anon_sym_ATf_COLON] = ACTIONS(345),
    [anon_sym_ATs_COLON] = ACTIONS(345),
    [anon_sym_ATx_COLON] = ACTIONS(345),
    [anon_sym_RPAREN] = ACTIONS(345),
    [anon_sym_PIPE_DOT] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_html_redirect_operator] = ACTIONS(347),
    [sym_html_append_operator] = ACTIONS(345),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_CR] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_file_descriptor] = ACTIONS(345),
  },
  [81] = {
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
  [82] = {
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
  [83] = {
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
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_PIPE_DOT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_macro_content] = ACTIONS(359),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_TILDE] = ACTIONS(361),
    [anon_sym_PIPE] = ACTIONS(363),
    [anon_sym_PIPEH] = ACTIONS(361),
    [anon_sym_PIPET] = ACTIONS(361),
    [anon_sym_AT_AT] = ACTIONS(363),
    [anon_sym_AT_ATdbt] = ACTIONS(363),
    [anon_sym_AT_ATdbta] = ACTIONS(361),
    [anon_sym_AT_ATdbtb] = ACTIONS(361),
    [anon_sym_AT_ATdbts] = ACTIONS(361),
    [anon_sym_AT_AT_DOT] = ACTIONS(361),
    [anon_sym_AT_AT_EQ] = ACTIONS(361),
    [anon_sym_AT_ATk] = ACTIONS(361),
    [anon_sym_AT_ATt] = ACTIONS(361),
    [anon_sym_AT_ATb] = ACTIONS(361),
    [anon_sym_AT_ATi] = ACTIONS(363),
    [anon_sym_AT_ATiS] = ACTIONS(361),
    [anon_sym_AT_ATf] = ACTIONS(361),
    [anon_sym_AT_ATs_COLON] = ACTIONS(361),
    [anon_sym_AT_ATc_COLON] = ACTIONS(361),
    [anon_sym_AT] = ACTIONS(363),
    [anon_sym_AT_BANG] = ACTIONS(361),
    [anon_sym_AT_LPAREN] = ACTIONS(361),
    [anon_sym_ATa_COLON] = ACTIONS(361),
    [anon_sym_ATb_COLON] = ACTIONS(361),
    [anon_sym_ATB_COLON] = ACTIONS(361),
    [anon_sym_ATe_COLON] = ACTIONS(361),
    [anon_sym_ATF_COLON] = ACTIONS(361),
    [anon_sym_ATi_COLON] = ACTIONS(361),
    [anon_sym_ATk_COLON] = ACTIONS(361),
    [anon_sym_ATo_COLON] = ACTIONS(361),
    [anon_sym_ATr_COLON] = ACTIONS(361),
    [anon_sym_ATf_COLON] = ACTIONS(361),
    [anon_sym_ATs_COLON] = ACTIONS(361),
    [anon_sym_ATx_COLON] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_PIPE_DOT] = ACTIONS(361),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_GT_GT] = ACTIONS(361),
    [sym_html_redirect_operator] = ACTIONS(363),
    [sym_html_append_operator] = ACTIONS(361),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(361),
    [anon_sym_CR] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [sym_file_descriptor] = ACTIONS(361),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_TILDE] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(367),
    [anon_sym_PIPEH] = ACTIONS(365),
    [anon_sym_PIPET] = ACTIONS(365),
    [anon_sym_AT_AT] = ACTIONS(367),
    [anon_sym_AT_ATdbt] = ACTIONS(367),
    [anon_sym_AT_ATdbta] = ACTIONS(365),
    [anon_sym_AT_ATdbtb] = ACTIONS(365),
    [anon_sym_AT_ATdbts] = ACTIONS(365),
    [anon_sym_AT_AT_DOT] = ACTIONS(365),
    [anon_sym_AT_AT_EQ] = ACTIONS(365),
    [anon_sym_AT_ATk] = ACTIONS(365),
    [anon_sym_AT_ATt] = ACTIONS(365),
    [anon_sym_AT_ATb] = ACTIONS(365),
    [anon_sym_AT_ATi] = ACTIONS(367),
    [anon_sym_AT_ATiS] = ACTIONS(365),
    [anon_sym_AT_ATf] = ACTIONS(365),
    [anon_sym_AT_ATs_COLON] = ACTIONS(365),
    [anon_sym_AT_ATc_COLON] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(367),
    [anon_sym_AT_BANG] = ACTIONS(365),
    [anon_sym_AT_LPAREN] = ACTIONS(365),
    [anon_sym_ATa_COLON] = ACTIONS(365),
    [anon_sym_ATb_COLON] = ACTIONS(365),
    [anon_sym_ATB_COLON] = ACTIONS(365),
    [anon_sym_ATe_COLON] = ACTIONS(365),
    [anon_sym_ATF_COLON] = ACTIONS(365),
    [anon_sym_ATi_COLON] = ACTIONS(365),
    [anon_sym_ATk_COLON] = ACTIONS(365),
    [anon_sym_ATo_COLON] = ACTIONS(365),
    [anon_sym_ATr_COLON] = ACTIONS(365),
    [anon_sym_ATf_COLON] = ACTIONS(365),
    [anon_sym_ATs_COLON] = ACTIONS(365),
    [anon_sym_ATx_COLON] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_PIPE_DOT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_GT_GT] = ACTIONS(365),
    [sym_html_redirect_operator] = ACTIONS(367),
    [sym_html_append_operator] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(365),
    [anon_sym_CR] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_file_descriptor] = ACTIONS(365),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_TILDE] = ACTIONS(369),
    [anon_sym_PIPE] = ACTIONS(371),
    [anon_sym_PIPEH] = ACTIONS(369),
    [anon_sym_PIPET] = ACTIONS(369),
    [anon_sym_AT_AT] = ACTIONS(371),
    [anon_sym_AT_ATdbt] = ACTIONS(371),
    [anon_sym_AT_ATdbta] = ACTIONS(369),
    [anon_sym_AT_ATdbtb] = ACTIONS(369),
    [anon_sym_AT_ATdbts] = ACTIONS(369),
    [anon_sym_AT_AT_DOT] = ACTIONS(369),
    [anon_sym_AT_AT_EQ] = ACTIONS(369),
    [anon_sym_AT_ATk] = ACTIONS(369),
    [anon_sym_AT_ATt] = ACTIONS(369),
    [anon_sym_AT_ATb] = ACTIONS(369),
    [anon_sym_AT_ATi] = ACTIONS(371),
    [anon_sym_AT_ATiS] = ACTIONS(369),
    [anon_sym_AT_ATf] = ACTIONS(369),
    [anon_sym_AT_ATs_COLON] = ACTIONS(369),
    [anon_sym_AT_ATc_COLON] = ACTIONS(369),
    [anon_sym_AT] = ACTIONS(371),
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
    [anon_sym_PIPE_DOT] = ACTIONS(369),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_GT_GT] = ACTIONS(369),
    [sym_html_redirect_operator] = ACTIONS(371),
    [sym_html_append_operator] = ACTIONS(369),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(369),
    [anon_sym_CR] = ACTIONS(369),
    [anon_sym_SEMI] = ACTIONS(369),
    [sym_file_descriptor] = ACTIONS(369),
  },
  [87] = {
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
  [88] = {
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
  [89] = {
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
  [90] = {
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
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(180),
    [anon_sym_PIPE] = ACTIONS(182),
    [anon_sym_PIPEH] = ACTIONS(180),
    [anon_sym_PIPET] = ACTIONS(180),
    [anon_sym_AT_AT] = ACTIONS(182),
    [anon_sym_AT_ATdbt] = ACTIONS(182),
    [anon_sym_AT_ATdbta] = ACTIONS(180),
    [anon_sym_AT_ATdbtb] = ACTIONS(180),
    [anon_sym_AT_ATdbts] = ACTIONS(180),
    [anon_sym_AT_AT_DOT] = ACTIONS(180),
    [anon_sym_AT_AT_EQ] = ACTIONS(180),
    [anon_sym_AT_ATk] = ACTIONS(180),
    [anon_sym_AT_ATt] = ACTIONS(180),
    [anon_sym_AT_ATb] = ACTIONS(180),
    [anon_sym_AT_ATi] = ACTIONS(182),
    [anon_sym_AT_ATiS] = ACTIONS(180),
    [anon_sym_AT_ATf] = ACTIONS(180),
    [anon_sym_AT_ATs_COLON] = ACTIONS(180),
    [anon_sym_AT_ATc_COLON] = ACTIONS(180),
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_AT_BANG] = ACTIONS(180),
    [anon_sym_AT_LPAREN] = ACTIONS(180),
    [anon_sym_ATa_COLON] = ACTIONS(180),
    [anon_sym_ATb_COLON] = ACTIONS(180),
    [anon_sym_ATB_COLON] = ACTIONS(180),
    [anon_sym_ATe_COLON] = ACTIONS(180),
    [anon_sym_ATF_COLON] = ACTIONS(180),
    [anon_sym_ATi_COLON] = ACTIONS(180),
    [anon_sym_ATk_COLON] = ACTIONS(180),
    [anon_sym_ATo_COLON] = ACTIONS(180),
    [anon_sym_ATr_COLON] = ACTIONS(180),
    [anon_sym_ATf_COLON] = ACTIONS(180),
    [anon_sym_ATs_COLON] = ACTIONS(180),
    [anon_sym_ATx_COLON] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_PIPE_DOT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(180),
    [sym_html_redirect_operator] = ACTIONS(182),
    [sym_html_append_operator] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
    [sym_file_descriptor] = ACTIONS(180),
  },
  [92] = {
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
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_TILDE] = ACTIONS(373),
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
    [anon_sym_PIPE_DOT] = ACTIONS(373),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_GT_GT] = ACTIONS(373),
    [sym_html_redirect_operator] = ACTIONS(375),
    [sym_html_append_operator] = ACTIONS(373),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(373),
    [anon_sym_CR] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(373),
    [sym_file_descriptor] = ACTIONS(373),
  },
  [94] = {
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
  [95] = {
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
  [96] = {
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
  [97] = {
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
  [98] = {
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
  [99] = {
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
  [100] = {
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
  [101] = {
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
  [102] = {
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
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
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
    [anon_sym_ATF_COLON] = ACTIONS(176),
    [anon_sym_ATi_COLON] = ACTIONS(176),
    [anon_sym_ATk_COLON] = ACTIONS(176),
    [anon_sym_ATo_COLON] = ACTIONS(176),
    [anon_sym_ATr_COLON] = ACTIONS(176),
    [anon_sym_ATf_COLON] = ACTIONS(176),
    [anon_sym_ATs_COLON] = ACTIONS(176),
    [anon_sym_ATx_COLON] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_PIPE_DOT] = ACTIONS(176),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(176),
    [sym_html_redirect_operator] = ACTIONS(178),
    [sym_html_append_operator] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_file_descriptor] = ACTIONS(176),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
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
    [anon_sym_RPAREN] = ACTIONS(413),
    [anon_sym_PIPE_DOT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(245),
    [sym_html_redirect_operator] = ACTIONS(247),
    [sym_html_append_operator] = ACTIONS(245),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(245),
    [anon_sym_CR] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_file_descriptor] = ACTIONS(245),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(415),
    [anon_sym_TILDE] = ACTIONS(415),
    [anon_sym_PIPE] = ACTIONS(417),
    [anon_sym_PIPEH] = ACTIONS(415),
    [anon_sym_PIPET] = ACTIONS(415),
    [anon_sym_AT_AT] = ACTIONS(417),
    [anon_sym_AT_ATdbt] = ACTIONS(417),
    [anon_sym_AT_ATdbta] = ACTIONS(415),
    [anon_sym_AT_ATdbtb] = ACTIONS(415),
    [anon_sym_AT_ATdbts] = ACTIONS(415),
    [anon_sym_AT_AT_DOT] = ACTIONS(415),
    [anon_sym_AT_AT_EQ] = ACTIONS(415),
    [anon_sym_AT_ATk] = ACTIONS(415),
    [anon_sym_AT_ATt] = ACTIONS(415),
    [anon_sym_AT_ATb] = ACTIONS(415),
    [anon_sym_AT_ATi] = ACTIONS(417),
    [anon_sym_AT_ATiS] = ACTIONS(415),
    [anon_sym_AT_ATf] = ACTIONS(415),
    [anon_sym_AT_ATs_COLON] = ACTIONS(415),
    [anon_sym_AT_ATc_COLON] = ACTIONS(415),
    [anon_sym_AT] = ACTIONS(417),
    [anon_sym_AT_BANG] = ACTIONS(415),
    [anon_sym_AT_LPAREN] = ACTIONS(415),
    [anon_sym_ATa_COLON] = ACTIONS(415),
    [anon_sym_ATb_COLON] = ACTIONS(415),
    [anon_sym_ATB_COLON] = ACTIONS(415),
    [anon_sym_ATe_COLON] = ACTIONS(415),
    [anon_sym_ATF_COLON] = ACTIONS(415),
    [anon_sym_ATi_COLON] = ACTIONS(415),
    [anon_sym_ATk_COLON] = ACTIONS(415),
    [anon_sym_ATo_COLON] = ACTIONS(415),
    [anon_sym_ATr_COLON] = ACTIONS(415),
    [anon_sym_ATf_COLON] = ACTIONS(415),
    [anon_sym_ATs_COLON] = ACTIONS(415),
    [anon_sym_ATx_COLON] = ACTIONS(415),
    [anon_sym_RPAREN] = ACTIONS(415),
    [anon_sym_PIPE_DOT] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_GT_GT] = ACTIONS(415),
    [sym_html_redirect_operator] = ACTIONS(417),
    [sym_html_append_operator] = ACTIONS(415),
    [anon_sym_BQUOTE] = ACTIONS(415),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_CR] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(415),
    [sym_file_descriptor] = ACTIONS(415),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(421),
    [anon_sym_PIPEH] = ACTIONS(419),
    [anon_sym_PIPET] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(421),
    [anon_sym_AT_ATdbt] = ACTIONS(421),
    [anon_sym_AT_ATdbta] = ACTIONS(419),
    [anon_sym_AT_ATdbtb] = ACTIONS(419),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(419),
    [anon_sym_AT_AT_EQ] = ACTIONS(419),
    [anon_sym_AT_ATk] = ACTIONS(419),
    [anon_sym_AT_ATt] = ACTIONS(419),
    [anon_sym_AT_ATb] = ACTIONS(419),
    [anon_sym_AT_ATi] = ACTIONS(421),
    [anon_sym_AT_ATiS] = ACTIONS(419),
    [anon_sym_AT_ATf] = ACTIONS(419),
    [anon_sym_AT_ATs_COLON] = ACTIONS(419),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(421),
    [anon_sym_AT_BANG] = ACTIONS(419),
    [anon_sym_AT_LPAREN] = ACTIONS(419),
    [anon_sym_ATa_COLON] = ACTIONS(419),
    [anon_sym_ATb_COLON] = ACTIONS(419),
    [anon_sym_ATB_COLON] = ACTIONS(419),
    [anon_sym_ATe_COLON] = ACTIONS(419),
    [anon_sym_ATF_COLON] = ACTIONS(419),
    [anon_sym_ATi_COLON] = ACTIONS(419),
    [anon_sym_ATk_COLON] = ACTIONS(419),
    [anon_sym_ATo_COLON] = ACTIONS(419),
    [anon_sym_ATr_COLON] = ACTIONS(419),
    [anon_sym_ATf_COLON] = ACTIONS(419),
    [anon_sym_ATs_COLON] = ACTIONS(419),
    [anon_sym_ATx_COLON] = ACTIONS(419),
    [anon_sym_RPAREN] = ACTIONS(419),
    [anon_sym_PIPE_DOT] = ACTIONS(419),
    [anon_sym_GT] = ACTIONS(421),
    [anon_sym_GT_GT] = ACTIONS(419),
    [sym_html_redirect_operator] = ACTIONS(421),
    [sym_html_append_operator] = ACTIONS(419),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_CR] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [sym_file_descriptor] = ACTIONS(419),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_TILDE] = ACTIONS(423),
    [anon_sym_PIPE] = ACTIONS(425),
    [anon_sym_PIPEH] = ACTIONS(423),
    [anon_sym_PIPET] = ACTIONS(423),
    [anon_sym_AT_AT] = ACTIONS(425),
    [anon_sym_AT_ATdbt] = ACTIONS(425),
    [anon_sym_AT_ATdbta] = ACTIONS(423),
    [anon_sym_AT_ATdbtb] = ACTIONS(423),
    [anon_sym_AT_ATdbts] = ACTIONS(423),
    [anon_sym_AT_AT_DOT] = ACTIONS(423),
    [anon_sym_AT_AT_EQ] = ACTIONS(423),
    [anon_sym_AT_ATk] = ACTIONS(423),
    [anon_sym_AT_ATt] = ACTIONS(423),
    [anon_sym_AT_ATb] = ACTIONS(423),
    [anon_sym_AT_ATi] = ACTIONS(425),
    [anon_sym_AT_ATiS] = ACTIONS(423),
    [anon_sym_AT_ATf] = ACTIONS(423),
    [anon_sym_AT_ATs_COLON] = ACTIONS(423),
    [anon_sym_AT_ATc_COLON] = ACTIONS(423),
    [anon_sym_AT] = ACTIONS(425),
    [anon_sym_AT_BANG] = ACTIONS(423),
    [anon_sym_AT_LPAREN] = ACTIONS(423),
    [anon_sym_ATa_COLON] = ACTIONS(423),
    [anon_sym_ATb_COLON] = ACTIONS(423),
    [anon_sym_ATB_COLON] = ACTIONS(423),
    [anon_sym_ATe_COLON] = ACTIONS(423),
    [anon_sym_ATF_COLON] = ACTIONS(423),
    [anon_sym_ATi_COLON] = ACTIONS(423),
    [anon_sym_ATk_COLON] = ACTIONS(423),
    [anon_sym_ATo_COLON] = ACTIONS(423),
    [anon_sym_ATr_COLON] = ACTIONS(423),
    [anon_sym_ATf_COLON] = ACTIONS(423),
    [anon_sym_ATs_COLON] = ACTIONS(423),
    [anon_sym_ATx_COLON] = ACTIONS(423),
    [anon_sym_RPAREN] = ACTIONS(423),
    [anon_sym_PIPE_DOT] = ACTIONS(423),
    [anon_sym_GT] = ACTIONS(425),
    [anon_sym_GT_GT] = ACTIONS(423),
    [sym_html_redirect_operator] = ACTIONS(425),
    [sym_html_append_operator] = ACTIONS(423),
    [anon_sym_BQUOTE] = ACTIONS(423),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_CR] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(423),
    [sym_file_descriptor] = ACTIONS(423),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_TILDE] = ACTIONS(427),
    [anon_sym_PIPE] = ACTIONS(429),
    [anon_sym_PIPEH] = ACTIONS(427),
    [anon_sym_PIPET] = ACTIONS(427),
    [anon_sym_AT_AT] = ACTIONS(429),
    [anon_sym_AT_ATdbt] = ACTIONS(429),
    [anon_sym_AT_ATdbta] = ACTIONS(427),
    [anon_sym_AT_ATdbtb] = ACTIONS(427),
    [anon_sym_AT_ATdbts] = ACTIONS(427),
    [anon_sym_AT_AT_DOT] = ACTIONS(427),
    [anon_sym_AT_AT_EQ] = ACTIONS(427),
    [anon_sym_AT_ATk] = ACTIONS(427),
    [anon_sym_AT_ATt] = ACTIONS(427),
    [anon_sym_AT_ATb] = ACTIONS(427),
    [anon_sym_AT_ATi] = ACTIONS(429),
    [anon_sym_AT_ATiS] = ACTIONS(427),
    [anon_sym_AT_ATf] = ACTIONS(427),
    [anon_sym_AT_ATs_COLON] = ACTIONS(427),
    [anon_sym_AT_ATc_COLON] = ACTIONS(427),
    [anon_sym_AT] = ACTIONS(429),
    [anon_sym_AT_BANG] = ACTIONS(427),
    [anon_sym_AT_LPAREN] = ACTIONS(427),
    [anon_sym_ATa_COLON] = ACTIONS(427),
    [anon_sym_ATb_COLON] = ACTIONS(427),
    [anon_sym_ATB_COLON] = ACTIONS(427),
    [anon_sym_ATe_COLON] = ACTIONS(427),
    [anon_sym_ATF_COLON] = ACTIONS(427),
    [anon_sym_ATi_COLON] = ACTIONS(427),
    [anon_sym_ATk_COLON] = ACTIONS(427),
    [anon_sym_ATo_COLON] = ACTIONS(427),
    [anon_sym_ATr_COLON] = ACTIONS(427),
    [anon_sym_ATf_COLON] = ACTIONS(427),
    [anon_sym_ATs_COLON] = ACTIONS(427),
    [anon_sym_ATx_COLON] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_PIPE_DOT] = ACTIONS(427),
    [anon_sym_GT] = ACTIONS(429),
    [anon_sym_GT_GT] = ACTIONS(427),
    [sym_html_redirect_operator] = ACTIONS(429),
    [sym_html_append_operator] = ACTIONS(427),
    [anon_sym_BQUOTE] = ACTIONS(427),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(427),
    [anon_sym_CR] = ACTIONS(427),
    [anon_sym_SEMI] = ACTIONS(427),
    [sym_file_descriptor] = ACTIONS(427),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_TILDE] = ACTIONS(431),
    [anon_sym_PIPE] = ACTIONS(433),
    [anon_sym_PIPEH] = ACTIONS(431),
    [anon_sym_PIPET] = ACTIONS(431),
    [anon_sym_AT_AT] = ACTIONS(433),
    [anon_sym_AT_ATdbt] = ACTIONS(433),
    [anon_sym_AT_ATdbta] = ACTIONS(431),
    [anon_sym_AT_ATdbtb] = ACTIONS(431),
    [anon_sym_AT_ATdbts] = ACTIONS(431),
    [anon_sym_AT_AT_DOT] = ACTIONS(431),
    [anon_sym_AT_AT_EQ] = ACTIONS(431),
    [anon_sym_AT_ATk] = ACTIONS(431),
    [anon_sym_AT_ATt] = ACTIONS(431),
    [anon_sym_AT_ATb] = ACTIONS(431),
    [anon_sym_AT_ATi] = ACTIONS(433),
    [anon_sym_AT_ATiS] = ACTIONS(431),
    [anon_sym_AT_ATf] = ACTIONS(431),
    [anon_sym_AT_ATs_COLON] = ACTIONS(431),
    [anon_sym_AT_ATc_COLON] = ACTIONS(431),
    [anon_sym_AT] = ACTIONS(433),
    [anon_sym_AT_BANG] = ACTIONS(431),
    [anon_sym_AT_LPAREN] = ACTIONS(431),
    [anon_sym_ATa_COLON] = ACTIONS(431),
    [anon_sym_ATb_COLON] = ACTIONS(431),
    [anon_sym_ATB_COLON] = ACTIONS(431),
    [anon_sym_ATe_COLON] = ACTIONS(431),
    [anon_sym_ATF_COLON] = ACTIONS(431),
    [anon_sym_ATi_COLON] = ACTIONS(431),
    [anon_sym_ATk_COLON] = ACTIONS(431),
    [anon_sym_ATo_COLON] = ACTIONS(431),
    [anon_sym_ATr_COLON] = ACTIONS(431),
    [anon_sym_ATf_COLON] = ACTIONS(431),
    [anon_sym_ATs_COLON] = ACTIONS(431),
    [anon_sym_ATx_COLON] = ACTIONS(431),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_PIPE_DOT] = ACTIONS(431),
    [anon_sym_GT] = ACTIONS(433),
    [anon_sym_GT_GT] = ACTIONS(431),
    [sym_html_redirect_operator] = ACTIONS(433),
    [sym_html_append_operator] = ACTIONS(431),
    [anon_sym_BQUOTE] = ACTIONS(431),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(431),
    [anon_sym_CR] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(431),
    [sym_file_descriptor] = ACTIONS(431),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_PIPE] = ACTIONS(437),
    [anon_sym_PIPEH] = ACTIONS(435),
    [anon_sym_PIPET] = ACTIONS(435),
    [anon_sym_AT_AT] = ACTIONS(437),
    [anon_sym_AT_ATdbt] = ACTIONS(437),
    [anon_sym_AT_ATdbta] = ACTIONS(435),
    [anon_sym_AT_ATdbtb] = ACTIONS(435),
    [anon_sym_AT_ATdbts] = ACTIONS(435),
    [anon_sym_AT_AT_DOT] = ACTIONS(435),
    [anon_sym_AT_AT_EQ] = ACTIONS(435),
    [anon_sym_AT_ATk] = ACTIONS(435),
    [anon_sym_AT_ATt] = ACTIONS(435),
    [anon_sym_AT_ATb] = ACTIONS(435),
    [anon_sym_AT_ATi] = ACTIONS(437),
    [anon_sym_AT_ATiS] = ACTIONS(435),
    [anon_sym_AT_ATf] = ACTIONS(435),
    [anon_sym_AT_ATs_COLON] = ACTIONS(435),
    [anon_sym_AT_ATc_COLON] = ACTIONS(435),
    [anon_sym_AT] = ACTIONS(437),
    [anon_sym_AT_BANG] = ACTIONS(435),
    [anon_sym_AT_LPAREN] = ACTIONS(435),
    [anon_sym_ATa_COLON] = ACTIONS(435),
    [anon_sym_ATb_COLON] = ACTIONS(435),
    [anon_sym_ATB_COLON] = ACTIONS(435),
    [anon_sym_ATe_COLON] = ACTIONS(435),
    [anon_sym_ATF_COLON] = ACTIONS(435),
    [anon_sym_ATi_COLON] = ACTIONS(435),
    [anon_sym_ATk_COLON] = ACTIONS(435),
    [anon_sym_ATo_COLON] = ACTIONS(435),
    [anon_sym_ATr_COLON] = ACTIONS(435),
    [anon_sym_ATf_COLON] = ACTIONS(435),
    [anon_sym_ATs_COLON] = ACTIONS(435),
    [anon_sym_ATx_COLON] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_PIPE_DOT] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(437),
    [anon_sym_GT_GT] = ACTIONS(435),
    [sym_html_redirect_operator] = ACTIONS(437),
    [sym_html_append_operator] = ACTIONS(435),
    [anon_sym_BQUOTE] = ACTIONS(435),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_CR] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [sym_file_descriptor] = ACTIONS(435),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_PIPE] = ACTIONS(441),
    [anon_sym_PIPEH] = ACTIONS(439),
    [anon_sym_PIPET] = ACTIONS(439),
    [anon_sym_AT_AT] = ACTIONS(441),
    [anon_sym_AT_ATdbt] = ACTIONS(441),
    [anon_sym_AT_ATdbta] = ACTIONS(439),
    [anon_sym_AT_ATdbtb] = ACTIONS(439),
    [anon_sym_AT_ATdbts] = ACTIONS(439),
    [anon_sym_AT_AT_DOT] = ACTIONS(439),
    [anon_sym_AT_AT_EQ] = ACTIONS(439),
    [anon_sym_AT_ATk] = ACTIONS(439),
    [anon_sym_AT_ATt] = ACTIONS(439),
    [anon_sym_AT_ATb] = ACTIONS(439),
    [anon_sym_AT_ATi] = ACTIONS(441),
    [anon_sym_AT_ATiS] = ACTIONS(439),
    [anon_sym_AT_ATf] = ACTIONS(439),
    [anon_sym_AT_ATs_COLON] = ACTIONS(439),
    [anon_sym_AT_ATc_COLON] = ACTIONS(439),
    [anon_sym_AT] = ACTIONS(441),
    [anon_sym_AT_BANG] = ACTIONS(439),
    [anon_sym_AT_LPAREN] = ACTIONS(439),
    [anon_sym_ATa_COLON] = ACTIONS(439),
    [anon_sym_ATb_COLON] = ACTIONS(439),
    [anon_sym_ATB_COLON] = ACTIONS(439),
    [anon_sym_ATe_COLON] = ACTIONS(439),
    [anon_sym_ATF_COLON] = ACTIONS(439),
    [anon_sym_ATi_COLON] = ACTIONS(439),
    [anon_sym_ATk_COLON] = ACTIONS(439),
    [anon_sym_ATo_COLON] = ACTIONS(439),
    [anon_sym_ATr_COLON] = ACTIONS(439),
    [anon_sym_ATf_COLON] = ACTIONS(439),
    [anon_sym_ATs_COLON] = ACTIONS(439),
    [anon_sym_ATx_COLON] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
    [anon_sym_PIPE_DOT] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_GT_GT] = ACTIONS(439),
    [sym_html_redirect_operator] = ACTIONS(441),
    [sym_html_append_operator] = ACTIONS(439),
    [anon_sym_BQUOTE] = ACTIONS(439),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(439),
    [anon_sym_CR] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
    [sym_file_descriptor] = ACTIONS(439),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(445),
    [anon_sym_PIPEH] = ACTIONS(443),
    [anon_sym_PIPET] = ACTIONS(443),
    [anon_sym_AT_AT] = ACTIONS(445),
    [anon_sym_AT_ATdbt] = ACTIONS(445),
    [anon_sym_AT_ATdbta] = ACTIONS(443),
    [anon_sym_AT_ATdbtb] = ACTIONS(443),
    [anon_sym_AT_ATdbts] = ACTIONS(443),
    [anon_sym_AT_AT_DOT] = ACTIONS(443),
    [anon_sym_AT_AT_EQ] = ACTIONS(443),
    [anon_sym_AT_ATk] = ACTIONS(443),
    [anon_sym_AT_ATt] = ACTIONS(443),
    [anon_sym_AT_ATb] = ACTIONS(443),
    [anon_sym_AT_ATi] = ACTIONS(445),
    [anon_sym_AT_ATiS] = ACTIONS(443),
    [anon_sym_AT_ATf] = ACTIONS(443),
    [anon_sym_AT_ATs_COLON] = ACTIONS(443),
    [anon_sym_AT_ATc_COLON] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(445),
    [anon_sym_AT_BANG] = ACTIONS(443),
    [anon_sym_AT_LPAREN] = ACTIONS(443),
    [anon_sym_ATa_COLON] = ACTIONS(443),
    [anon_sym_ATb_COLON] = ACTIONS(443),
    [anon_sym_ATB_COLON] = ACTIONS(443),
    [anon_sym_ATe_COLON] = ACTIONS(443),
    [anon_sym_ATF_COLON] = ACTIONS(443),
    [anon_sym_ATi_COLON] = ACTIONS(443),
    [anon_sym_ATk_COLON] = ACTIONS(443),
    [anon_sym_ATo_COLON] = ACTIONS(443),
    [anon_sym_ATr_COLON] = ACTIONS(443),
    [anon_sym_ATf_COLON] = ACTIONS(443),
    [anon_sym_ATs_COLON] = ACTIONS(443),
    [anon_sym_ATx_COLON] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_PIPE_DOT] = ACTIONS(443),
    [anon_sym_GT] = ACTIONS(445),
    [anon_sym_GT_GT] = ACTIONS(443),
    [sym_html_redirect_operator] = ACTIONS(445),
    [sym_html_append_operator] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(443),
    [anon_sym_CR] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
    [sym_file_descriptor] = ACTIONS(443),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(447),
    [anon_sym_TILDE] = ACTIONS(447),
    [anon_sym_PIPE] = ACTIONS(449),
    [anon_sym_PIPEH] = ACTIONS(447),
    [anon_sym_PIPET] = ACTIONS(447),
    [anon_sym_AT_AT] = ACTIONS(449),
    [anon_sym_AT_ATdbt] = ACTIONS(449),
    [anon_sym_AT_ATdbta] = ACTIONS(447),
    [anon_sym_AT_ATdbtb] = ACTIONS(447),
    [anon_sym_AT_ATdbts] = ACTIONS(447),
    [anon_sym_AT_AT_DOT] = ACTIONS(447),
    [anon_sym_AT_AT_EQ] = ACTIONS(447),
    [anon_sym_AT_ATk] = ACTIONS(447),
    [anon_sym_AT_ATt] = ACTIONS(447),
    [anon_sym_AT_ATb] = ACTIONS(447),
    [anon_sym_AT_ATi] = ACTIONS(449),
    [anon_sym_AT_ATiS] = ACTIONS(447),
    [anon_sym_AT_ATf] = ACTIONS(447),
    [anon_sym_AT_ATs_COLON] = ACTIONS(447),
    [anon_sym_AT_ATc_COLON] = ACTIONS(447),
    [anon_sym_AT] = ACTIONS(449),
    [anon_sym_AT_BANG] = ACTIONS(447),
    [anon_sym_AT_LPAREN] = ACTIONS(447),
    [anon_sym_ATa_COLON] = ACTIONS(447),
    [anon_sym_ATb_COLON] = ACTIONS(447),
    [anon_sym_ATB_COLON] = ACTIONS(447),
    [anon_sym_ATe_COLON] = ACTIONS(447),
    [anon_sym_ATF_COLON] = ACTIONS(447),
    [anon_sym_ATi_COLON] = ACTIONS(447),
    [anon_sym_ATk_COLON] = ACTIONS(447),
    [anon_sym_ATo_COLON] = ACTIONS(447),
    [anon_sym_ATr_COLON] = ACTIONS(447),
    [anon_sym_ATf_COLON] = ACTIONS(447),
    [anon_sym_ATs_COLON] = ACTIONS(447),
    [anon_sym_ATx_COLON] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PIPE_DOT] = ACTIONS(447),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_GT_GT] = ACTIONS(447),
    [sym_html_redirect_operator] = ACTIONS(449),
    [sym_html_append_operator] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(447),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_CR] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(447),
    [sym_file_descriptor] = ACTIONS(447),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_TILDE] = ACTIONS(451),
    [anon_sym_PIPE] = ACTIONS(453),
    [anon_sym_PIPEH] = ACTIONS(451),
    [anon_sym_PIPET] = ACTIONS(451),
    [anon_sym_AT_AT] = ACTIONS(453),
    [anon_sym_AT_ATdbt] = ACTIONS(453),
    [anon_sym_AT_ATdbta] = ACTIONS(451),
    [anon_sym_AT_ATdbtb] = ACTIONS(451),
    [anon_sym_AT_ATdbts] = ACTIONS(451),
    [anon_sym_AT_AT_DOT] = ACTIONS(451),
    [anon_sym_AT_AT_EQ] = ACTIONS(451),
    [anon_sym_AT_ATk] = ACTIONS(451),
    [anon_sym_AT_ATt] = ACTIONS(451),
    [anon_sym_AT_ATb] = ACTIONS(451),
    [anon_sym_AT_ATi] = ACTIONS(453),
    [anon_sym_AT_ATiS] = ACTIONS(451),
    [anon_sym_AT_ATf] = ACTIONS(451),
    [anon_sym_AT_ATs_COLON] = ACTIONS(451),
    [anon_sym_AT_ATc_COLON] = ACTIONS(451),
    [anon_sym_AT] = ACTIONS(453),
    [anon_sym_AT_BANG] = ACTIONS(451),
    [anon_sym_AT_LPAREN] = ACTIONS(451),
    [anon_sym_ATa_COLON] = ACTIONS(451),
    [anon_sym_ATb_COLON] = ACTIONS(451),
    [anon_sym_ATB_COLON] = ACTIONS(451),
    [anon_sym_ATe_COLON] = ACTIONS(451),
    [anon_sym_ATF_COLON] = ACTIONS(451),
    [anon_sym_ATi_COLON] = ACTIONS(451),
    [anon_sym_ATk_COLON] = ACTIONS(451),
    [anon_sym_ATo_COLON] = ACTIONS(451),
    [anon_sym_ATr_COLON] = ACTIONS(451),
    [anon_sym_ATf_COLON] = ACTIONS(451),
    [anon_sym_ATs_COLON] = ACTIONS(451),
    [anon_sym_ATx_COLON] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(451),
    [anon_sym_PIPE_DOT] = ACTIONS(451),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(451),
    [sym_html_redirect_operator] = ACTIONS(453),
    [sym_html_append_operator] = ACTIONS(451),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_CR] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(451),
    [sym_file_descriptor] = ACTIONS(451),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_PIPE] = ACTIONS(457),
    [anon_sym_PIPEH] = ACTIONS(455),
    [anon_sym_PIPET] = ACTIONS(455),
    [anon_sym_AT_AT] = ACTIONS(457),
    [anon_sym_AT_ATdbt] = ACTIONS(457),
    [anon_sym_AT_ATdbta] = ACTIONS(455),
    [anon_sym_AT_ATdbtb] = ACTIONS(455),
    [anon_sym_AT_ATdbts] = ACTIONS(455),
    [anon_sym_AT_AT_DOT] = ACTIONS(455),
    [anon_sym_AT_AT_EQ] = ACTIONS(455),
    [anon_sym_AT_ATk] = ACTIONS(455),
    [anon_sym_AT_ATt] = ACTIONS(455),
    [anon_sym_AT_ATb] = ACTIONS(455),
    [anon_sym_AT_ATi] = ACTIONS(457),
    [anon_sym_AT_ATiS] = ACTIONS(455),
    [anon_sym_AT_ATf] = ACTIONS(455),
    [anon_sym_AT_ATs_COLON] = ACTIONS(455),
    [anon_sym_AT_ATc_COLON] = ACTIONS(455),
    [anon_sym_AT] = ACTIONS(457),
    [anon_sym_AT_BANG] = ACTIONS(455),
    [anon_sym_AT_LPAREN] = ACTIONS(455),
    [anon_sym_ATa_COLON] = ACTIONS(455),
    [anon_sym_ATb_COLON] = ACTIONS(455),
    [anon_sym_ATB_COLON] = ACTIONS(455),
    [anon_sym_ATe_COLON] = ACTIONS(455),
    [anon_sym_ATF_COLON] = ACTIONS(455),
    [anon_sym_ATi_COLON] = ACTIONS(455),
    [anon_sym_ATk_COLON] = ACTIONS(455),
    [anon_sym_ATo_COLON] = ACTIONS(455),
    [anon_sym_ATr_COLON] = ACTIONS(455),
    [anon_sym_ATf_COLON] = ACTIONS(455),
    [anon_sym_ATs_COLON] = ACTIONS(455),
    [anon_sym_ATx_COLON] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_PIPE_DOT] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_GT_GT] = ACTIONS(455),
    [sym_html_redirect_operator] = ACTIONS(457),
    [sym_html_append_operator] = ACTIONS(455),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_CR] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(455),
    [sym_file_descriptor] = ACTIONS(455),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_PIPEH] = ACTIONS(459),
    [anon_sym_PIPET] = ACTIONS(459),
    [anon_sym_AT_AT] = ACTIONS(461),
    [anon_sym_AT_ATdbt] = ACTIONS(461),
    [anon_sym_AT_ATdbta] = ACTIONS(459),
    [anon_sym_AT_ATdbtb] = ACTIONS(459),
    [anon_sym_AT_ATdbts] = ACTIONS(459),
    [anon_sym_AT_AT_DOT] = ACTIONS(459),
    [anon_sym_AT_AT_EQ] = ACTIONS(459),
    [anon_sym_AT_ATk] = ACTIONS(459),
    [anon_sym_AT_ATt] = ACTIONS(459),
    [anon_sym_AT_ATb] = ACTIONS(459),
    [anon_sym_AT_ATi] = ACTIONS(461),
    [anon_sym_AT_ATiS] = ACTIONS(459),
    [anon_sym_AT_ATf] = ACTIONS(459),
    [anon_sym_AT_ATs_COLON] = ACTIONS(459),
    [anon_sym_AT_ATc_COLON] = ACTIONS(459),
    [anon_sym_AT] = ACTIONS(461),
    [anon_sym_AT_BANG] = ACTIONS(459),
    [anon_sym_AT_LPAREN] = ACTIONS(459),
    [anon_sym_ATa_COLON] = ACTIONS(459),
    [anon_sym_ATb_COLON] = ACTIONS(459),
    [anon_sym_ATB_COLON] = ACTIONS(459),
    [anon_sym_ATe_COLON] = ACTIONS(459),
    [anon_sym_ATF_COLON] = ACTIONS(459),
    [anon_sym_ATi_COLON] = ACTIONS(459),
    [anon_sym_ATk_COLON] = ACTIONS(459),
    [anon_sym_ATo_COLON] = ACTIONS(459),
    [anon_sym_ATr_COLON] = ACTIONS(459),
    [anon_sym_ATf_COLON] = ACTIONS(459),
    [anon_sym_ATs_COLON] = ACTIONS(459),
    [anon_sym_ATx_COLON] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [anon_sym_PIPE_DOT] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(459),
    [sym_html_redirect_operator] = ACTIONS(461),
    [sym_html_append_operator] = ACTIONS(459),
    [anon_sym_BQUOTE] = ACTIONS(459),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(459),
    [anon_sym_CR] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(459),
    [sym_file_descriptor] = ACTIONS(459),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_PIPE] = ACTIONS(465),
    [anon_sym_PIPEH] = ACTIONS(463),
    [anon_sym_PIPET] = ACTIONS(463),
    [anon_sym_AT_AT] = ACTIONS(465),
    [anon_sym_AT_ATdbt] = ACTIONS(465),
    [anon_sym_AT_ATdbta] = ACTIONS(463),
    [anon_sym_AT_ATdbtb] = ACTIONS(463),
    [anon_sym_AT_ATdbts] = ACTIONS(463),
    [anon_sym_AT_AT_DOT] = ACTIONS(463),
    [anon_sym_AT_AT_EQ] = ACTIONS(463),
    [anon_sym_AT_ATk] = ACTIONS(463),
    [anon_sym_AT_ATt] = ACTIONS(463),
    [anon_sym_AT_ATb] = ACTIONS(463),
    [anon_sym_AT_ATi] = ACTIONS(465),
    [anon_sym_AT_ATiS] = ACTIONS(463),
    [anon_sym_AT_ATf] = ACTIONS(463),
    [anon_sym_AT_ATs_COLON] = ACTIONS(463),
    [anon_sym_AT_ATc_COLON] = ACTIONS(463),
    [anon_sym_AT] = ACTIONS(465),
    [anon_sym_AT_BANG] = ACTIONS(463),
    [anon_sym_AT_LPAREN] = ACTIONS(463),
    [anon_sym_ATa_COLON] = ACTIONS(463),
    [anon_sym_ATb_COLON] = ACTIONS(463),
    [anon_sym_ATB_COLON] = ACTIONS(463),
    [anon_sym_ATe_COLON] = ACTIONS(463),
    [anon_sym_ATF_COLON] = ACTIONS(463),
    [anon_sym_ATi_COLON] = ACTIONS(463),
    [anon_sym_ATk_COLON] = ACTIONS(463),
    [anon_sym_ATo_COLON] = ACTIONS(463),
    [anon_sym_ATr_COLON] = ACTIONS(463),
    [anon_sym_ATf_COLON] = ACTIONS(463),
    [anon_sym_ATs_COLON] = ACTIONS(463),
    [anon_sym_ATx_COLON] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_PIPE_DOT] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_GT_GT] = ACTIONS(463),
    [sym_html_redirect_operator] = ACTIONS(465),
    [sym_html_append_operator] = ACTIONS(463),
    [anon_sym_BQUOTE] = ACTIONS(463),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(463),
    [anon_sym_CR] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(463),
    [sym_file_descriptor] = ACTIONS(463),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(467),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(467),
    [anon_sym_PIPET] = ACTIONS(467),
    [anon_sym_AT_AT] = ACTIONS(469),
    [anon_sym_AT_ATdbt] = ACTIONS(469),
    [anon_sym_AT_ATdbta] = ACTIONS(467),
    [anon_sym_AT_ATdbtb] = ACTIONS(467),
    [anon_sym_AT_ATdbts] = ACTIONS(467),
    [anon_sym_AT_AT_DOT] = ACTIONS(467),
    [anon_sym_AT_AT_EQ] = ACTIONS(467),
    [anon_sym_AT_ATk] = ACTIONS(467),
    [anon_sym_AT_ATt] = ACTIONS(467),
    [anon_sym_AT_ATb] = ACTIONS(467),
    [anon_sym_AT_ATi] = ACTIONS(469),
    [anon_sym_AT_ATiS] = ACTIONS(467),
    [anon_sym_AT_ATf] = ACTIONS(467),
    [anon_sym_AT_ATs_COLON] = ACTIONS(467),
    [anon_sym_AT_ATc_COLON] = ACTIONS(467),
    [anon_sym_AT] = ACTIONS(469),
    [anon_sym_AT_BANG] = ACTIONS(467),
    [anon_sym_AT_LPAREN] = ACTIONS(467),
    [anon_sym_ATa_COLON] = ACTIONS(467),
    [anon_sym_ATb_COLON] = ACTIONS(467),
    [anon_sym_ATB_COLON] = ACTIONS(467),
    [anon_sym_ATe_COLON] = ACTIONS(467),
    [anon_sym_ATF_COLON] = ACTIONS(467),
    [anon_sym_ATi_COLON] = ACTIONS(467),
    [anon_sym_ATk_COLON] = ACTIONS(467),
    [anon_sym_ATo_COLON] = ACTIONS(467),
    [anon_sym_ATr_COLON] = ACTIONS(467),
    [anon_sym_ATf_COLON] = ACTIONS(467),
    [anon_sym_ATs_COLON] = ACTIONS(467),
    [anon_sym_ATx_COLON] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_PIPE_DOT] = ACTIONS(467),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(467),
    [sym_html_redirect_operator] = ACTIONS(469),
    [sym_html_append_operator] = ACTIONS(467),
    [anon_sym_BQUOTE] = ACTIONS(467),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(467),
    [anon_sym_CR] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(467),
    [sym_file_descriptor] = ACTIONS(467),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_PIPE] = ACTIONS(473),
    [anon_sym_PIPEH] = ACTIONS(471),
    [anon_sym_PIPET] = ACTIONS(471),
    [anon_sym_AT_AT] = ACTIONS(473),
    [anon_sym_AT_ATdbt] = ACTIONS(473),
    [anon_sym_AT_ATdbta] = ACTIONS(471),
    [anon_sym_AT_ATdbtb] = ACTIONS(471),
    [anon_sym_AT_ATdbts] = ACTIONS(471),
    [anon_sym_AT_AT_DOT] = ACTIONS(471),
    [anon_sym_AT_AT_EQ] = ACTIONS(471),
    [anon_sym_AT_ATk] = ACTIONS(471),
    [anon_sym_AT_ATt] = ACTIONS(471),
    [anon_sym_AT_ATb] = ACTIONS(471),
    [anon_sym_AT_ATi] = ACTIONS(473),
    [anon_sym_AT_ATiS] = ACTIONS(471),
    [anon_sym_AT_ATf] = ACTIONS(471),
    [anon_sym_AT_ATs_COLON] = ACTIONS(471),
    [anon_sym_AT_ATc_COLON] = ACTIONS(471),
    [anon_sym_AT] = ACTIONS(473),
    [anon_sym_AT_BANG] = ACTIONS(471),
    [anon_sym_AT_LPAREN] = ACTIONS(471),
    [anon_sym_ATa_COLON] = ACTIONS(471),
    [anon_sym_ATb_COLON] = ACTIONS(471),
    [anon_sym_ATB_COLON] = ACTIONS(471),
    [anon_sym_ATe_COLON] = ACTIONS(471),
    [anon_sym_ATF_COLON] = ACTIONS(471),
    [anon_sym_ATi_COLON] = ACTIONS(471),
    [anon_sym_ATk_COLON] = ACTIONS(471),
    [anon_sym_ATo_COLON] = ACTIONS(471),
    [anon_sym_ATr_COLON] = ACTIONS(471),
    [anon_sym_ATf_COLON] = ACTIONS(471),
    [anon_sym_ATs_COLON] = ACTIONS(471),
    [anon_sym_ATx_COLON] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_PIPE_DOT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_GT_GT] = ACTIONS(471),
    [sym_html_redirect_operator] = ACTIONS(473),
    [sym_html_append_operator] = ACTIONS(471),
    [anon_sym_BQUOTE] = ACTIONS(471),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(471),
    [anon_sym_CR] = ACTIONS(471),
    [anon_sym_SEMI] = ACTIONS(471),
    [sym_file_descriptor] = ACTIONS(471),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_PIPEH] = ACTIONS(475),
    [anon_sym_PIPET] = ACTIONS(475),
    [anon_sym_AT_AT] = ACTIONS(477),
    [anon_sym_AT_ATdbt] = ACTIONS(477),
    [anon_sym_AT_ATdbta] = ACTIONS(475),
    [anon_sym_AT_ATdbtb] = ACTIONS(475),
    [anon_sym_AT_ATdbts] = ACTIONS(475),
    [anon_sym_AT_AT_DOT] = ACTIONS(475),
    [anon_sym_AT_AT_EQ] = ACTIONS(475),
    [anon_sym_AT_ATk] = ACTIONS(475),
    [anon_sym_AT_ATt] = ACTIONS(475),
    [anon_sym_AT_ATb] = ACTIONS(475),
    [anon_sym_AT_ATi] = ACTIONS(477),
    [anon_sym_AT_ATiS] = ACTIONS(475),
    [anon_sym_AT_ATf] = ACTIONS(475),
    [anon_sym_AT_ATs_COLON] = ACTIONS(475),
    [anon_sym_AT_ATc_COLON] = ACTIONS(475),
    [anon_sym_AT] = ACTIONS(477),
    [anon_sym_AT_BANG] = ACTIONS(475),
    [anon_sym_AT_LPAREN] = ACTIONS(475),
    [anon_sym_ATa_COLON] = ACTIONS(475),
    [anon_sym_ATb_COLON] = ACTIONS(475),
    [anon_sym_ATB_COLON] = ACTIONS(475),
    [anon_sym_ATe_COLON] = ACTIONS(475),
    [anon_sym_ATF_COLON] = ACTIONS(475),
    [anon_sym_ATi_COLON] = ACTIONS(475),
    [anon_sym_ATk_COLON] = ACTIONS(475),
    [anon_sym_ATo_COLON] = ACTIONS(475),
    [anon_sym_ATr_COLON] = ACTIONS(475),
    [anon_sym_ATf_COLON] = ACTIONS(475),
    [anon_sym_ATs_COLON] = ACTIONS(475),
    [anon_sym_ATx_COLON] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_PIPE_DOT] = ACTIONS(475),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_GT_GT] = ACTIONS(475),
    [sym_html_redirect_operator] = ACTIONS(477),
    [sym_html_append_operator] = ACTIONS(475),
    [anon_sym_BQUOTE] = ACTIONS(475),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(475),
    [anon_sym_CR] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [sym_file_descriptor] = ACTIONS(475),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [anon_sym_TILDE] = ACTIONS(479),
    [anon_sym_PIPE] = ACTIONS(481),
    [anon_sym_PIPEH] = ACTIONS(479),
    [anon_sym_PIPET] = ACTIONS(479),
    [anon_sym_AT_AT] = ACTIONS(481),
    [anon_sym_AT_ATdbt] = ACTIONS(481),
    [anon_sym_AT_ATdbta] = ACTIONS(479),
    [anon_sym_AT_ATdbtb] = ACTIONS(479),
    [anon_sym_AT_ATdbts] = ACTIONS(479),
    [anon_sym_AT_AT_DOT] = ACTIONS(479),
    [anon_sym_AT_AT_EQ] = ACTIONS(479),
    [anon_sym_AT_ATk] = ACTIONS(479),
    [anon_sym_AT_ATt] = ACTIONS(479),
    [anon_sym_AT_ATb] = ACTIONS(479),
    [anon_sym_AT_ATi] = ACTIONS(481),
    [anon_sym_AT_ATiS] = ACTIONS(479),
    [anon_sym_AT_ATf] = ACTIONS(479),
    [anon_sym_AT_ATs_COLON] = ACTIONS(479),
    [anon_sym_AT_ATc_COLON] = ACTIONS(479),
    [anon_sym_AT] = ACTIONS(481),
    [anon_sym_AT_BANG] = ACTIONS(479),
    [anon_sym_AT_LPAREN] = ACTIONS(479),
    [anon_sym_ATa_COLON] = ACTIONS(479),
    [anon_sym_ATb_COLON] = ACTIONS(479),
    [anon_sym_ATB_COLON] = ACTIONS(479),
    [anon_sym_ATe_COLON] = ACTIONS(479),
    [anon_sym_ATF_COLON] = ACTIONS(479),
    [anon_sym_ATi_COLON] = ACTIONS(479),
    [anon_sym_ATk_COLON] = ACTIONS(479),
    [anon_sym_ATo_COLON] = ACTIONS(479),
    [anon_sym_ATr_COLON] = ACTIONS(479),
    [anon_sym_ATf_COLON] = ACTIONS(479),
    [anon_sym_ATs_COLON] = ACTIONS(479),
    [anon_sym_ATx_COLON] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_PIPE_DOT] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(481),
    [anon_sym_GT_GT] = ACTIONS(479),
    [sym_html_redirect_operator] = ACTIONS(481),
    [sym_html_append_operator] = ACTIONS(479),
    [anon_sym_BQUOTE] = ACTIONS(479),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(479),
    [anon_sym_CR] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(479),
    [sym_file_descriptor] = ACTIONS(479),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_TILDE] = ACTIONS(483),
    [anon_sym_PIPE] = ACTIONS(485),
    [anon_sym_PIPEH] = ACTIONS(483),
    [anon_sym_PIPET] = ACTIONS(483),
    [anon_sym_AT_AT] = ACTIONS(485),
    [anon_sym_AT_ATdbt] = ACTIONS(485),
    [anon_sym_AT_ATdbta] = ACTIONS(483),
    [anon_sym_AT_ATdbtb] = ACTIONS(483),
    [anon_sym_AT_ATdbts] = ACTIONS(483),
    [anon_sym_AT_AT_DOT] = ACTIONS(483),
    [anon_sym_AT_AT_EQ] = ACTIONS(483),
    [anon_sym_AT_ATk] = ACTIONS(483),
    [anon_sym_AT_ATt] = ACTIONS(483),
    [anon_sym_AT_ATb] = ACTIONS(483),
    [anon_sym_AT_ATi] = ACTIONS(485),
    [anon_sym_AT_ATiS] = ACTIONS(483),
    [anon_sym_AT_ATf] = ACTIONS(483),
    [anon_sym_AT_ATs_COLON] = ACTIONS(483),
    [anon_sym_AT_ATc_COLON] = ACTIONS(483),
    [anon_sym_AT] = ACTIONS(485),
    [anon_sym_AT_BANG] = ACTIONS(483),
    [anon_sym_AT_LPAREN] = ACTIONS(483),
    [anon_sym_ATa_COLON] = ACTIONS(483),
    [anon_sym_ATb_COLON] = ACTIONS(483),
    [anon_sym_ATB_COLON] = ACTIONS(483),
    [anon_sym_ATe_COLON] = ACTIONS(483),
    [anon_sym_ATF_COLON] = ACTIONS(483),
    [anon_sym_ATi_COLON] = ACTIONS(483),
    [anon_sym_ATk_COLON] = ACTIONS(483),
    [anon_sym_ATo_COLON] = ACTIONS(483),
    [anon_sym_ATr_COLON] = ACTIONS(483),
    [anon_sym_ATf_COLON] = ACTIONS(483),
    [anon_sym_ATs_COLON] = ACTIONS(483),
    [anon_sym_ATx_COLON] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(483),
    [anon_sym_PIPE_DOT] = ACTIONS(483),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_GT_GT] = ACTIONS(483),
    [sym_html_redirect_operator] = ACTIONS(485),
    [sym_html_append_operator] = ACTIONS(483),
    [anon_sym_BQUOTE] = ACTIONS(483),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(483),
    [anon_sym_CR] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(483),
    [sym_file_descriptor] = ACTIONS(483),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(487),
    [anon_sym_TILDE] = ACTIONS(487),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_PIPEH] = ACTIONS(487),
    [anon_sym_PIPET] = ACTIONS(487),
    [anon_sym_AT_AT] = ACTIONS(489),
    [anon_sym_AT_ATdbt] = ACTIONS(489),
    [anon_sym_AT_ATdbta] = ACTIONS(487),
    [anon_sym_AT_ATdbtb] = ACTIONS(487),
    [anon_sym_AT_ATdbts] = ACTIONS(487),
    [anon_sym_AT_AT_DOT] = ACTIONS(487),
    [anon_sym_AT_AT_EQ] = ACTIONS(487),
    [anon_sym_AT_ATk] = ACTIONS(487),
    [anon_sym_AT_ATt] = ACTIONS(487),
    [anon_sym_AT_ATb] = ACTIONS(487),
    [anon_sym_AT_ATi] = ACTIONS(489),
    [anon_sym_AT_ATiS] = ACTIONS(487),
    [anon_sym_AT_ATf] = ACTIONS(487),
    [anon_sym_AT_ATs_COLON] = ACTIONS(487),
    [anon_sym_AT_ATc_COLON] = ACTIONS(487),
    [anon_sym_AT] = ACTIONS(489),
    [anon_sym_AT_BANG] = ACTIONS(487),
    [anon_sym_AT_LPAREN] = ACTIONS(487),
    [anon_sym_ATa_COLON] = ACTIONS(487),
    [anon_sym_ATb_COLON] = ACTIONS(487),
    [anon_sym_ATB_COLON] = ACTIONS(487),
    [anon_sym_ATe_COLON] = ACTIONS(487),
    [anon_sym_ATF_COLON] = ACTIONS(487),
    [anon_sym_ATi_COLON] = ACTIONS(487),
    [anon_sym_ATk_COLON] = ACTIONS(487),
    [anon_sym_ATo_COLON] = ACTIONS(487),
    [anon_sym_ATr_COLON] = ACTIONS(487),
    [anon_sym_ATf_COLON] = ACTIONS(487),
    [anon_sym_ATs_COLON] = ACTIONS(487),
    [anon_sym_ATx_COLON] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_PIPE_DOT] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_GT_GT] = ACTIONS(487),
    [sym_html_redirect_operator] = ACTIONS(489),
    [sym_html_append_operator] = ACTIONS(487),
    [anon_sym_BQUOTE] = ACTIONS(487),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(487),
    [anon_sym_CR] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_file_descriptor] = ACTIONS(487),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(491),
    [anon_sym_TILDE] = ACTIONS(491),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PIPEH] = ACTIONS(491),
    [anon_sym_PIPET] = ACTIONS(491),
    [anon_sym_AT_AT] = ACTIONS(493),
    [anon_sym_AT_ATdbt] = ACTIONS(493),
    [anon_sym_AT_ATdbta] = ACTIONS(491),
    [anon_sym_AT_ATdbtb] = ACTIONS(491),
    [anon_sym_AT_ATdbts] = ACTIONS(491),
    [anon_sym_AT_AT_DOT] = ACTIONS(491),
    [anon_sym_AT_AT_EQ] = ACTIONS(491),
    [anon_sym_AT_ATk] = ACTIONS(491),
    [anon_sym_AT_ATt] = ACTIONS(491),
    [anon_sym_AT_ATb] = ACTIONS(491),
    [anon_sym_AT_ATi] = ACTIONS(493),
    [anon_sym_AT_ATiS] = ACTIONS(491),
    [anon_sym_AT_ATf] = ACTIONS(491),
    [anon_sym_AT_ATs_COLON] = ACTIONS(491),
    [anon_sym_AT_ATc_COLON] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(493),
    [anon_sym_AT_BANG] = ACTIONS(491),
    [anon_sym_AT_LPAREN] = ACTIONS(491),
    [anon_sym_ATa_COLON] = ACTIONS(491),
    [anon_sym_ATb_COLON] = ACTIONS(491),
    [anon_sym_ATB_COLON] = ACTIONS(491),
    [anon_sym_ATe_COLON] = ACTIONS(491),
    [anon_sym_ATF_COLON] = ACTIONS(491),
    [anon_sym_ATi_COLON] = ACTIONS(491),
    [anon_sym_ATk_COLON] = ACTIONS(491),
    [anon_sym_ATo_COLON] = ACTIONS(491),
    [anon_sym_ATr_COLON] = ACTIONS(491),
    [anon_sym_ATf_COLON] = ACTIONS(491),
    [anon_sym_ATs_COLON] = ACTIONS(491),
    [anon_sym_ATx_COLON] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
    [anon_sym_PIPE_DOT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_GT_GT] = ACTIONS(491),
    [sym_html_redirect_operator] = ACTIONS(493),
    [sym_html_append_operator] = ACTIONS(491),
    [anon_sym_BQUOTE] = ACTIONS(491),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(491),
    [anon_sym_CR] = ACTIONS(491),
    [anon_sym_SEMI] = ACTIONS(491),
    [sym_file_descriptor] = ACTIONS(491),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(495),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_PIPEH] = ACTIONS(495),
    [anon_sym_PIPET] = ACTIONS(495),
    [anon_sym_AT_AT] = ACTIONS(497),
    [anon_sym_AT_ATdbt] = ACTIONS(497),
    [anon_sym_AT_ATdbta] = ACTIONS(495),
    [anon_sym_AT_ATdbtb] = ACTIONS(495),
    [anon_sym_AT_ATdbts] = ACTIONS(495),
    [anon_sym_AT_AT_DOT] = ACTIONS(495),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(495),
    [anon_sym_AT_ATt] = ACTIONS(495),
    [anon_sym_AT_ATb] = ACTIONS(495),
    [anon_sym_AT_ATi] = ACTIONS(497),
    [anon_sym_AT_ATiS] = ACTIONS(495),
    [anon_sym_AT_ATf] = ACTIONS(495),
    [anon_sym_AT_ATs_COLON] = ACTIONS(495),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(497),
    [anon_sym_AT_BANG] = ACTIONS(495),
    [anon_sym_AT_LPAREN] = ACTIONS(495),
    [anon_sym_ATa_COLON] = ACTIONS(495),
    [anon_sym_ATb_COLON] = ACTIONS(495),
    [anon_sym_ATB_COLON] = ACTIONS(495),
    [anon_sym_ATe_COLON] = ACTIONS(495),
    [anon_sym_ATF_COLON] = ACTIONS(495),
    [anon_sym_ATi_COLON] = ACTIONS(495),
    [anon_sym_ATk_COLON] = ACTIONS(495),
    [anon_sym_ATo_COLON] = ACTIONS(495),
    [anon_sym_ATr_COLON] = ACTIONS(495),
    [anon_sym_ATf_COLON] = ACTIONS(495),
    [anon_sym_ATs_COLON] = ACTIONS(495),
    [anon_sym_ATx_COLON] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_PIPE_DOT] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(497),
    [anon_sym_GT_GT] = ACTIONS(495),
    [sym_html_redirect_operator] = ACTIONS(497),
    [sym_html_append_operator] = ACTIONS(495),
    [anon_sym_BQUOTE] = ACTIONS(495),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(495),
    [anon_sym_CR] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(495),
    [sym_file_descriptor] = ACTIONS(495),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPEH] = ACTIONS(499),
    [anon_sym_PIPET] = ACTIONS(499),
    [anon_sym_AT_AT] = ACTIONS(501),
    [anon_sym_AT_ATdbt] = ACTIONS(501),
    [anon_sym_AT_ATdbta] = ACTIONS(499),
    [anon_sym_AT_ATdbtb] = ACTIONS(499),
    [anon_sym_AT_ATdbts] = ACTIONS(499),
    [anon_sym_AT_AT_DOT] = ACTIONS(499),
    [anon_sym_AT_AT_EQ] = ACTIONS(499),
    [anon_sym_AT_ATk] = ACTIONS(499),
    [anon_sym_AT_ATt] = ACTIONS(499),
    [anon_sym_AT_ATb] = ACTIONS(499),
    [anon_sym_AT_ATi] = ACTIONS(501),
    [anon_sym_AT_ATiS] = ACTIONS(499),
    [anon_sym_AT_ATf] = ACTIONS(499),
    [anon_sym_AT_ATs_COLON] = ACTIONS(499),
    [anon_sym_AT_ATc_COLON] = ACTIONS(499),
    [anon_sym_AT] = ACTIONS(501),
    [anon_sym_AT_BANG] = ACTIONS(499),
    [anon_sym_AT_LPAREN] = ACTIONS(499),
    [anon_sym_ATa_COLON] = ACTIONS(499),
    [anon_sym_ATb_COLON] = ACTIONS(499),
    [anon_sym_ATB_COLON] = ACTIONS(499),
    [anon_sym_ATe_COLON] = ACTIONS(499),
    [anon_sym_ATF_COLON] = ACTIONS(499),
    [anon_sym_ATi_COLON] = ACTIONS(499),
    [anon_sym_ATk_COLON] = ACTIONS(499),
    [anon_sym_ATo_COLON] = ACTIONS(499),
    [anon_sym_ATr_COLON] = ACTIONS(499),
    [anon_sym_ATf_COLON] = ACTIONS(499),
    [anon_sym_ATs_COLON] = ACTIONS(499),
    [anon_sym_ATx_COLON] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_PIPE_DOT] = ACTIONS(499),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [anon_sym_BQUOTE] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_CR] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_file_descriptor] = ACTIONS(499),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(503),
    [anon_sym_PIPET] = ACTIONS(503),
    [anon_sym_AT_AT] = ACTIONS(505),
    [anon_sym_AT_ATdbt] = ACTIONS(505),
    [anon_sym_AT_ATdbta] = ACTIONS(503),
    [anon_sym_AT_ATdbtb] = ACTIONS(503),
    [anon_sym_AT_ATdbts] = ACTIONS(503),
    [anon_sym_AT_AT_DOT] = ACTIONS(503),
    [anon_sym_AT_AT_EQ] = ACTIONS(503),
    [anon_sym_AT_ATk] = ACTIONS(503),
    [anon_sym_AT_ATt] = ACTIONS(503),
    [anon_sym_AT_ATb] = ACTIONS(503),
    [anon_sym_AT_ATi] = ACTIONS(505),
    [anon_sym_AT_ATiS] = ACTIONS(503),
    [anon_sym_AT_ATf] = ACTIONS(503),
    [anon_sym_AT_ATs_COLON] = ACTIONS(503),
    [anon_sym_AT_ATc_COLON] = ACTIONS(503),
    [anon_sym_AT] = ACTIONS(505),
    [anon_sym_AT_BANG] = ACTIONS(503),
    [anon_sym_AT_LPAREN] = ACTIONS(503),
    [anon_sym_ATa_COLON] = ACTIONS(503),
    [anon_sym_ATb_COLON] = ACTIONS(503),
    [anon_sym_ATB_COLON] = ACTIONS(503),
    [anon_sym_ATe_COLON] = ACTIONS(503),
    [anon_sym_ATF_COLON] = ACTIONS(503),
    [anon_sym_ATi_COLON] = ACTIONS(503),
    [anon_sym_ATk_COLON] = ACTIONS(503),
    [anon_sym_ATo_COLON] = ACTIONS(503),
    [anon_sym_ATr_COLON] = ACTIONS(503),
    [anon_sym_ATf_COLON] = ACTIONS(503),
    [anon_sym_ATs_COLON] = ACTIONS(503),
    [anon_sym_ATx_COLON] = ACTIONS(503),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_PIPE_DOT] = ACTIONS(503),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(503),
    [anon_sym_CR] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PIPEH] = ACTIONS(507),
    [anon_sym_PIPET] = ACTIONS(507),
    [anon_sym_AT_AT] = ACTIONS(509),
    [anon_sym_AT_ATdbt] = ACTIONS(509),
    [anon_sym_AT_ATdbta] = ACTIONS(507),
    [anon_sym_AT_ATdbtb] = ACTIONS(507),
    [anon_sym_AT_ATdbts] = ACTIONS(507),
    [anon_sym_AT_AT_DOT] = ACTIONS(507),
    [anon_sym_AT_AT_EQ] = ACTIONS(507),
    [anon_sym_AT_ATk] = ACTIONS(507),
    [anon_sym_AT_ATt] = ACTIONS(507),
    [anon_sym_AT_ATb] = ACTIONS(507),
    [anon_sym_AT_ATi] = ACTIONS(509),
    [anon_sym_AT_ATiS] = ACTIONS(507),
    [anon_sym_AT_ATf] = ACTIONS(507),
    [anon_sym_AT_ATs_COLON] = ACTIONS(507),
    [anon_sym_AT_ATc_COLON] = ACTIONS(507),
    [anon_sym_AT] = ACTIONS(509),
    [anon_sym_AT_BANG] = ACTIONS(507),
    [anon_sym_AT_LPAREN] = ACTIONS(507),
    [anon_sym_ATa_COLON] = ACTIONS(507),
    [anon_sym_ATb_COLON] = ACTIONS(507),
    [anon_sym_ATB_COLON] = ACTIONS(507),
    [anon_sym_ATe_COLON] = ACTIONS(507),
    [anon_sym_ATF_COLON] = ACTIONS(507),
    [anon_sym_ATi_COLON] = ACTIONS(507),
    [anon_sym_ATk_COLON] = ACTIONS(507),
    [anon_sym_ATo_COLON] = ACTIONS(507),
    [anon_sym_ATr_COLON] = ACTIONS(507),
    [anon_sym_ATf_COLON] = ACTIONS(507),
    [anon_sym_ATs_COLON] = ACTIONS(507),
    [anon_sym_ATx_COLON] = ACTIONS(507),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_PIPE_DOT] = ACTIONS(507),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_GT_GT] = ACTIONS(507),
    [sym_html_redirect_operator] = ACTIONS(509),
    [sym_html_append_operator] = ACTIONS(507),
    [anon_sym_BQUOTE] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(507),
    [anon_sym_CR] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_file_descriptor] = ACTIONS(507),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPEH] = ACTIONS(511),
    [anon_sym_PIPET] = ACTIONS(511),
    [anon_sym_AT_AT] = ACTIONS(513),
    [anon_sym_AT_ATdbt] = ACTIONS(513),
    [anon_sym_AT_ATdbta] = ACTIONS(511),
    [anon_sym_AT_ATdbtb] = ACTIONS(511),
    [anon_sym_AT_ATdbts] = ACTIONS(511),
    [anon_sym_AT_AT_DOT] = ACTIONS(511),
    [anon_sym_AT_AT_EQ] = ACTIONS(511),
    [anon_sym_AT_ATk] = ACTIONS(511),
    [anon_sym_AT_ATt] = ACTIONS(511),
    [anon_sym_AT_ATb] = ACTIONS(511),
    [anon_sym_AT_ATi] = ACTIONS(513),
    [anon_sym_AT_ATiS] = ACTIONS(511),
    [anon_sym_AT_ATf] = ACTIONS(511),
    [anon_sym_AT_ATs_COLON] = ACTIONS(511),
    [anon_sym_AT_ATc_COLON] = ACTIONS(511),
    [anon_sym_AT] = ACTIONS(513),
    [anon_sym_AT_BANG] = ACTIONS(511),
    [anon_sym_AT_LPAREN] = ACTIONS(511),
    [anon_sym_ATa_COLON] = ACTIONS(511),
    [anon_sym_ATb_COLON] = ACTIONS(511),
    [anon_sym_ATB_COLON] = ACTIONS(511),
    [anon_sym_ATe_COLON] = ACTIONS(511),
    [anon_sym_ATF_COLON] = ACTIONS(511),
    [anon_sym_ATi_COLON] = ACTIONS(511),
    [anon_sym_ATk_COLON] = ACTIONS(511),
    [anon_sym_ATo_COLON] = ACTIONS(511),
    [anon_sym_ATr_COLON] = ACTIONS(511),
    [anon_sym_ATf_COLON] = ACTIONS(511),
    [anon_sym_ATs_COLON] = ACTIONS(511),
    [anon_sym_ATx_COLON] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_PIPE_DOT] = ACTIONS(511),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(513),
    [sym_html_append_operator] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(511),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_CR] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(511),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_TILDE] = ACTIONS(515),
    [anon_sym_PIPE] = ACTIONS(517),
    [anon_sym_PIPEH] = ACTIONS(515),
    [anon_sym_PIPET] = ACTIONS(515),
    [anon_sym_AT_AT] = ACTIONS(517),
    [anon_sym_AT_ATdbt] = ACTIONS(517),
    [anon_sym_AT_ATdbta] = ACTIONS(515),
    [anon_sym_AT_ATdbtb] = ACTIONS(515),
    [anon_sym_AT_ATdbts] = ACTIONS(515),
    [anon_sym_AT_AT_DOT] = ACTIONS(515),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(515),
    [anon_sym_AT_ATt] = ACTIONS(515),
    [anon_sym_AT_ATb] = ACTIONS(515),
    [anon_sym_AT_ATi] = ACTIONS(517),
    [anon_sym_AT_ATiS] = ACTIONS(515),
    [anon_sym_AT_ATf] = ACTIONS(515),
    [anon_sym_AT_ATs_COLON] = ACTIONS(515),
    [anon_sym_AT_ATc_COLON] = ACTIONS(515),
    [anon_sym_AT] = ACTIONS(517),
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
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_GT_GT] = ACTIONS(515),
    [sym_html_redirect_operator] = ACTIONS(517),
    [sym_html_append_operator] = ACTIONS(515),
    [anon_sym_BQUOTE] = ACTIONS(515),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(515),
    [anon_sym_CR] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_file_descriptor] = ACTIONS(515),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_TILDE] = ACTIONS(519),
    [anon_sym_PIPE] = ACTIONS(521),
    [anon_sym_PIPEH] = ACTIONS(519),
    [anon_sym_PIPET] = ACTIONS(519),
    [anon_sym_AT_AT] = ACTIONS(521),
    [anon_sym_AT_ATdbt] = ACTIONS(521),
    [anon_sym_AT_ATdbta] = ACTIONS(519),
    [anon_sym_AT_ATdbtb] = ACTIONS(519),
    [anon_sym_AT_ATdbts] = ACTIONS(519),
    [anon_sym_AT_AT_DOT] = ACTIONS(519),
    [anon_sym_AT_AT_EQ] = ACTIONS(519),
    [anon_sym_AT_ATk] = ACTIONS(519),
    [anon_sym_AT_ATt] = ACTIONS(519),
    [anon_sym_AT_ATb] = ACTIONS(519),
    [anon_sym_AT_ATi] = ACTIONS(521),
    [anon_sym_AT_ATiS] = ACTIONS(519),
    [anon_sym_AT_ATf] = ACTIONS(519),
    [anon_sym_AT_ATs_COLON] = ACTIONS(519),
    [anon_sym_AT_ATc_COLON] = ACTIONS(519),
    [anon_sym_AT] = ACTIONS(521),
    [anon_sym_AT_BANG] = ACTIONS(519),
    [anon_sym_AT_LPAREN] = ACTIONS(519),
    [anon_sym_ATa_COLON] = ACTIONS(519),
    [anon_sym_ATb_COLON] = ACTIONS(519),
    [anon_sym_ATB_COLON] = ACTIONS(519),
    [anon_sym_ATe_COLON] = ACTIONS(519),
    [anon_sym_ATF_COLON] = ACTIONS(519),
    [anon_sym_ATi_COLON] = ACTIONS(519),
    [anon_sym_ATk_COLON] = ACTIONS(519),
    [anon_sym_ATo_COLON] = ACTIONS(519),
    [anon_sym_ATr_COLON] = ACTIONS(519),
    [anon_sym_ATf_COLON] = ACTIONS(519),
    [anon_sym_ATs_COLON] = ACTIONS(519),
    [anon_sym_ATx_COLON] = ACTIONS(519),
    [anon_sym_RPAREN] = ACTIONS(519),
    [anon_sym_PIPE_DOT] = ACTIONS(519),
    [anon_sym_GT] = ACTIONS(521),
    [anon_sym_GT_GT] = ACTIONS(519),
    [sym_html_redirect_operator] = ACTIONS(521),
    [sym_html_append_operator] = ACTIONS(519),
    [anon_sym_BQUOTE] = ACTIONS(519),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_CR] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(519),
    [sym_file_descriptor] = ACTIONS(519),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(523),
    [anon_sym_TILDE] = ACTIONS(523),
    [anon_sym_PIPE] = ACTIONS(525),
    [anon_sym_PIPEH] = ACTIONS(523),
    [anon_sym_PIPET] = ACTIONS(523),
    [anon_sym_AT_AT] = ACTIONS(525),
    [anon_sym_AT_ATdbt] = ACTIONS(525),
    [anon_sym_AT_ATdbta] = ACTIONS(523),
    [anon_sym_AT_ATdbtb] = ACTIONS(523),
    [anon_sym_AT_ATdbts] = ACTIONS(523),
    [anon_sym_AT_AT_DOT] = ACTIONS(523),
    [anon_sym_AT_AT_EQ] = ACTIONS(523),
    [anon_sym_AT_ATk] = ACTIONS(523),
    [anon_sym_AT_ATt] = ACTIONS(523),
    [anon_sym_AT_ATb] = ACTIONS(523),
    [anon_sym_AT_ATi] = ACTIONS(525),
    [anon_sym_AT_ATiS] = ACTIONS(523),
    [anon_sym_AT_ATf] = ACTIONS(523),
    [anon_sym_AT_ATs_COLON] = ACTIONS(523),
    [anon_sym_AT_ATc_COLON] = ACTIONS(523),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym_AT_BANG] = ACTIONS(523),
    [anon_sym_AT_LPAREN] = ACTIONS(523),
    [anon_sym_ATa_COLON] = ACTIONS(523),
    [anon_sym_ATb_COLON] = ACTIONS(523),
    [anon_sym_ATB_COLON] = ACTIONS(523),
    [anon_sym_ATe_COLON] = ACTIONS(523),
    [anon_sym_ATF_COLON] = ACTIONS(523),
    [anon_sym_ATi_COLON] = ACTIONS(523),
    [anon_sym_ATk_COLON] = ACTIONS(523),
    [anon_sym_ATo_COLON] = ACTIONS(523),
    [anon_sym_ATr_COLON] = ACTIONS(523),
    [anon_sym_ATf_COLON] = ACTIONS(523),
    [anon_sym_ATs_COLON] = ACTIONS(523),
    [anon_sym_ATx_COLON] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(523),
    [anon_sym_PIPE_DOT] = ACTIONS(523),
    [anon_sym_GT] = ACTIONS(525),
    [anon_sym_GT_GT] = ACTIONS(523),
    [sym_html_redirect_operator] = ACTIONS(525),
    [sym_html_append_operator] = ACTIONS(523),
    [anon_sym_BQUOTE] = ACTIONS(523),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(523),
    [anon_sym_CR] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_file_descriptor] = ACTIONS(523),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(527),
    [anon_sym_TILDE] = ACTIONS(527),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_PIPEH] = ACTIONS(527),
    [anon_sym_PIPET] = ACTIONS(527),
    [anon_sym_AT_AT] = ACTIONS(529),
    [anon_sym_AT_ATdbt] = ACTIONS(529),
    [anon_sym_AT_ATdbta] = ACTIONS(527),
    [anon_sym_AT_ATdbtb] = ACTIONS(527),
    [anon_sym_AT_ATdbts] = ACTIONS(527),
    [anon_sym_AT_AT_DOT] = ACTIONS(527),
    [anon_sym_AT_AT_EQ] = ACTIONS(527),
    [anon_sym_AT_ATk] = ACTIONS(527),
    [anon_sym_AT_ATt] = ACTIONS(527),
    [anon_sym_AT_ATb] = ACTIONS(527),
    [anon_sym_AT_ATi] = ACTIONS(529),
    [anon_sym_AT_ATiS] = ACTIONS(527),
    [anon_sym_AT_ATf] = ACTIONS(527),
    [anon_sym_AT_ATs_COLON] = ACTIONS(527),
    [anon_sym_AT_ATc_COLON] = ACTIONS(527),
    [anon_sym_AT] = ACTIONS(529),
    [anon_sym_AT_BANG] = ACTIONS(527),
    [anon_sym_AT_LPAREN] = ACTIONS(527),
    [anon_sym_ATa_COLON] = ACTIONS(527),
    [anon_sym_ATb_COLON] = ACTIONS(527),
    [anon_sym_ATB_COLON] = ACTIONS(527),
    [anon_sym_ATe_COLON] = ACTIONS(527),
    [anon_sym_ATF_COLON] = ACTIONS(527),
    [anon_sym_ATi_COLON] = ACTIONS(527),
    [anon_sym_ATk_COLON] = ACTIONS(527),
    [anon_sym_ATo_COLON] = ACTIONS(527),
    [anon_sym_ATr_COLON] = ACTIONS(527),
    [anon_sym_ATf_COLON] = ACTIONS(527),
    [anon_sym_ATs_COLON] = ACTIONS(527),
    [anon_sym_ATx_COLON] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_PIPE_DOT] = ACTIONS(527),
    [anon_sym_GT] = ACTIONS(529),
    [anon_sym_GT_GT] = ACTIONS(527),
    [sym_html_redirect_operator] = ACTIONS(529),
    [sym_html_append_operator] = ACTIONS(527),
    [anon_sym_BQUOTE] = ACTIONS(527),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(527),
    [anon_sym_CR] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(527),
    [sym_file_descriptor] = ACTIONS(527),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(531),
    [anon_sym_TILDE] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(533),
    [anon_sym_PIPEH] = ACTIONS(531),
    [anon_sym_PIPET] = ACTIONS(531),
    [anon_sym_AT_AT] = ACTIONS(533),
    [anon_sym_AT_ATdbt] = ACTIONS(533),
    [anon_sym_AT_ATdbta] = ACTIONS(531),
    [anon_sym_AT_ATdbtb] = ACTIONS(531),
    [anon_sym_AT_ATdbts] = ACTIONS(531),
    [anon_sym_AT_AT_DOT] = ACTIONS(531),
    [anon_sym_AT_AT_EQ] = ACTIONS(531),
    [anon_sym_AT_ATk] = ACTIONS(531),
    [anon_sym_AT_ATt] = ACTIONS(531),
    [anon_sym_AT_ATb] = ACTIONS(531),
    [anon_sym_AT_ATi] = ACTIONS(533),
    [anon_sym_AT_ATiS] = ACTIONS(531),
    [anon_sym_AT_ATf] = ACTIONS(531),
    [anon_sym_AT_ATs_COLON] = ACTIONS(531),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(533),
    [anon_sym_AT_BANG] = ACTIONS(531),
    [anon_sym_AT_LPAREN] = ACTIONS(531),
    [anon_sym_ATa_COLON] = ACTIONS(531),
    [anon_sym_ATb_COLON] = ACTIONS(531),
    [anon_sym_ATB_COLON] = ACTIONS(531),
    [anon_sym_ATe_COLON] = ACTIONS(531),
    [anon_sym_ATF_COLON] = ACTIONS(531),
    [anon_sym_ATi_COLON] = ACTIONS(531),
    [anon_sym_ATk_COLON] = ACTIONS(531),
    [anon_sym_ATo_COLON] = ACTIONS(531),
    [anon_sym_ATr_COLON] = ACTIONS(531),
    [anon_sym_ATf_COLON] = ACTIONS(531),
    [anon_sym_ATs_COLON] = ACTIONS(531),
    [anon_sym_ATx_COLON] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_PIPE_DOT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(533),
    [anon_sym_GT_GT] = ACTIONS(531),
    [sym_html_redirect_operator] = ACTIONS(533),
    [sym_html_append_operator] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(531),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(531),
    [anon_sym_CR] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_file_descriptor] = ACTIONS(531),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(537),
    [anon_sym_PIPEH] = ACTIONS(535),
    [anon_sym_PIPET] = ACTIONS(535),
    [anon_sym_AT_AT] = ACTIONS(537),
    [anon_sym_AT_ATdbt] = ACTIONS(537),
    [anon_sym_AT_ATdbta] = ACTIONS(535),
    [anon_sym_AT_ATdbtb] = ACTIONS(535),
    [anon_sym_AT_ATdbts] = ACTIONS(535),
    [anon_sym_AT_AT_DOT] = ACTIONS(535),
    [anon_sym_AT_AT_EQ] = ACTIONS(535),
    [anon_sym_AT_ATk] = ACTIONS(535),
    [anon_sym_AT_ATt] = ACTIONS(535),
    [anon_sym_AT_ATb] = ACTIONS(535),
    [anon_sym_AT_ATi] = ACTIONS(537),
    [anon_sym_AT_ATiS] = ACTIONS(535),
    [anon_sym_AT_ATf] = ACTIONS(535),
    [anon_sym_AT_ATs_COLON] = ACTIONS(535),
    [anon_sym_AT_ATc_COLON] = ACTIONS(535),
    [anon_sym_AT] = ACTIONS(537),
    [anon_sym_AT_BANG] = ACTIONS(535),
    [anon_sym_AT_LPAREN] = ACTIONS(535),
    [anon_sym_ATa_COLON] = ACTIONS(535),
    [anon_sym_ATb_COLON] = ACTIONS(535),
    [anon_sym_ATB_COLON] = ACTIONS(535),
    [anon_sym_ATe_COLON] = ACTIONS(535),
    [anon_sym_ATF_COLON] = ACTIONS(535),
    [anon_sym_ATi_COLON] = ACTIONS(535),
    [anon_sym_ATk_COLON] = ACTIONS(535),
    [anon_sym_ATo_COLON] = ACTIONS(535),
    [anon_sym_ATr_COLON] = ACTIONS(535),
    [anon_sym_ATf_COLON] = ACTIONS(535),
    [anon_sym_ATs_COLON] = ACTIONS(535),
    [anon_sym_ATx_COLON] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_PIPE_DOT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(537),
    [anon_sym_GT_GT] = ACTIONS(535),
    [sym_html_redirect_operator] = ACTIONS(537),
    [sym_html_append_operator] = ACTIONS(535),
    [anon_sym_BQUOTE] = ACTIONS(535),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(535),
    [anon_sym_CR] = ACTIONS(535),
    [anon_sym_SEMI] = ACTIONS(535),
    [sym_file_descriptor] = ACTIONS(535),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_TILDE] = ACTIONS(539),
    [anon_sym_PIPE] = ACTIONS(541),
    [anon_sym_PIPEH] = ACTIONS(539),
    [anon_sym_PIPET] = ACTIONS(539),
    [anon_sym_AT_AT] = ACTIONS(541),
    [anon_sym_AT_ATdbt] = ACTIONS(541),
    [anon_sym_AT_ATdbta] = ACTIONS(539),
    [anon_sym_AT_ATdbtb] = ACTIONS(539),
    [anon_sym_AT_ATdbts] = ACTIONS(539),
    [anon_sym_AT_AT_DOT] = ACTIONS(539),
    [anon_sym_AT_AT_EQ] = ACTIONS(539),
    [anon_sym_AT_ATk] = ACTIONS(539),
    [anon_sym_AT_ATt] = ACTIONS(539),
    [anon_sym_AT_ATb] = ACTIONS(539),
    [anon_sym_AT_ATi] = ACTIONS(541),
    [anon_sym_AT_ATiS] = ACTIONS(539),
    [anon_sym_AT_ATf] = ACTIONS(539),
    [anon_sym_AT_ATs_COLON] = ACTIONS(539),
    [anon_sym_AT_ATc_COLON] = ACTIONS(539),
    [anon_sym_AT] = ACTIONS(541),
    [anon_sym_AT_BANG] = ACTIONS(539),
    [anon_sym_AT_LPAREN] = ACTIONS(539),
    [anon_sym_ATa_COLON] = ACTIONS(539),
    [anon_sym_ATb_COLON] = ACTIONS(539),
    [anon_sym_ATB_COLON] = ACTIONS(539),
    [anon_sym_ATe_COLON] = ACTIONS(539),
    [anon_sym_ATF_COLON] = ACTIONS(539),
    [anon_sym_ATi_COLON] = ACTIONS(539),
    [anon_sym_ATk_COLON] = ACTIONS(539),
    [anon_sym_ATo_COLON] = ACTIONS(539),
    [anon_sym_ATr_COLON] = ACTIONS(539),
    [anon_sym_ATf_COLON] = ACTIONS(539),
    [anon_sym_ATs_COLON] = ACTIONS(539),
    [anon_sym_ATx_COLON] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_PIPE_DOT] = ACTIONS(539),
    [anon_sym_GT] = ACTIONS(541),
    [anon_sym_GT_GT] = ACTIONS(539),
    [sym_html_redirect_operator] = ACTIONS(541),
    [sym_html_append_operator] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(539),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(539),
    [anon_sym_CR] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(539),
    [sym_file_descriptor] = ACTIONS(539),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_TILDE] = ACTIONS(543),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_PIPEH] = ACTIONS(543),
    [anon_sym_PIPET] = ACTIONS(543),
    [anon_sym_AT_AT] = ACTIONS(545),
    [anon_sym_AT_ATdbt] = ACTIONS(545),
    [anon_sym_AT_ATdbta] = ACTIONS(543),
    [anon_sym_AT_ATdbtb] = ACTIONS(543),
    [anon_sym_AT_ATdbts] = ACTIONS(543),
    [anon_sym_AT_AT_DOT] = ACTIONS(543),
    [anon_sym_AT_AT_EQ] = ACTIONS(543),
    [anon_sym_AT_ATk] = ACTIONS(543),
    [anon_sym_AT_ATt] = ACTIONS(543),
    [anon_sym_AT_ATb] = ACTIONS(543),
    [anon_sym_AT_ATi] = ACTIONS(545),
    [anon_sym_AT_ATiS] = ACTIONS(543),
    [anon_sym_AT_ATf] = ACTIONS(543),
    [anon_sym_AT_ATs_COLON] = ACTIONS(543),
    [anon_sym_AT_ATc_COLON] = ACTIONS(543),
    [anon_sym_AT] = ACTIONS(545),
    [anon_sym_AT_BANG] = ACTIONS(543),
    [anon_sym_AT_LPAREN] = ACTIONS(543),
    [anon_sym_ATa_COLON] = ACTIONS(543),
    [anon_sym_ATb_COLON] = ACTIONS(543),
    [anon_sym_ATB_COLON] = ACTIONS(543),
    [anon_sym_ATe_COLON] = ACTIONS(543),
    [anon_sym_ATF_COLON] = ACTIONS(543),
    [anon_sym_ATi_COLON] = ACTIONS(543),
    [anon_sym_ATk_COLON] = ACTIONS(543),
    [anon_sym_ATo_COLON] = ACTIONS(543),
    [anon_sym_ATr_COLON] = ACTIONS(543),
    [anon_sym_ATf_COLON] = ACTIONS(543),
    [anon_sym_ATs_COLON] = ACTIONS(543),
    [anon_sym_ATx_COLON] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_PIPE_DOT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_GT_GT] = ACTIONS(543),
    [sym_html_redirect_operator] = ACTIONS(545),
    [sym_html_append_operator] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(543),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(543),
    [anon_sym_CR] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(543),
    [sym_file_descriptor] = ACTIONS(543),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(547),
    [anon_sym_TILDE] = ACTIONS(547),
    [anon_sym_PIPE] = ACTIONS(549),
    [anon_sym_PIPEH] = ACTIONS(547),
    [anon_sym_PIPET] = ACTIONS(547),
    [anon_sym_AT_AT] = ACTIONS(549),
    [anon_sym_AT_ATdbt] = ACTIONS(549),
    [anon_sym_AT_ATdbta] = ACTIONS(547),
    [anon_sym_AT_ATdbtb] = ACTIONS(547),
    [anon_sym_AT_ATdbts] = ACTIONS(547),
    [anon_sym_AT_AT_DOT] = ACTIONS(547),
    [anon_sym_AT_AT_EQ] = ACTIONS(547),
    [anon_sym_AT_ATk] = ACTIONS(547),
    [anon_sym_AT_ATt] = ACTIONS(547),
    [anon_sym_AT_ATb] = ACTIONS(547),
    [anon_sym_AT_ATi] = ACTIONS(549),
    [anon_sym_AT_ATiS] = ACTIONS(547),
    [anon_sym_AT_ATf] = ACTIONS(547),
    [anon_sym_AT_ATs_COLON] = ACTIONS(547),
    [anon_sym_AT_ATc_COLON] = ACTIONS(547),
    [anon_sym_AT] = ACTIONS(549),
    [anon_sym_AT_BANG] = ACTIONS(547),
    [anon_sym_AT_LPAREN] = ACTIONS(547),
    [anon_sym_ATa_COLON] = ACTIONS(547),
    [anon_sym_ATb_COLON] = ACTIONS(547),
    [anon_sym_ATB_COLON] = ACTIONS(547),
    [anon_sym_ATe_COLON] = ACTIONS(547),
    [anon_sym_ATF_COLON] = ACTIONS(547),
    [anon_sym_ATi_COLON] = ACTIONS(547),
    [anon_sym_ATk_COLON] = ACTIONS(547),
    [anon_sym_ATo_COLON] = ACTIONS(547),
    [anon_sym_ATr_COLON] = ACTIONS(547),
    [anon_sym_ATf_COLON] = ACTIONS(547),
    [anon_sym_ATs_COLON] = ACTIONS(547),
    [anon_sym_ATx_COLON] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(547),
    [anon_sym_PIPE_DOT] = ACTIONS(547),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_GT_GT] = ACTIONS(547),
    [sym_html_redirect_operator] = ACTIONS(549),
    [sym_html_append_operator] = ACTIONS(547),
    [anon_sym_BQUOTE] = ACTIONS(547),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(547),
    [anon_sym_CR] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(547),
    [sym_file_descriptor] = ACTIONS(547),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(551),
    [anon_sym_TILDE] = ACTIONS(551),
    [anon_sym_PIPE] = ACTIONS(553),
    [anon_sym_PIPEH] = ACTIONS(551),
    [anon_sym_PIPET] = ACTIONS(551),
    [anon_sym_AT_AT] = ACTIONS(553),
    [anon_sym_AT_ATdbt] = ACTIONS(553),
    [anon_sym_AT_ATdbta] = ACTIONS(551),
    [anon_sym_AT_ATdbtb] = ACTIONS(551),
    [anon_sym_AT_ATdbts] = ACTIONS(551),
    [anon_sym_AT_AT_DOT] = ACTIONS(551),
    [anon_sym_AT_AT_EQ] = ACTIONS(551),
    [anon_sym_AT_ATk] = ACTIONS(551),
    [anon_sym_AT_ATt] = ACTIONS(551),
    [anon_sym_AT_ATb] = ACTIONS(551),
    [anon_sym_AT_ATi] = ACTIONS(553),
    [anon_sym_AT_ATiS] = ACTIONS(551),
    [anon_sym_AT_ATf] = ACTIONS(551),
    [anon_sym_AT_ATs_COLON] = ACTIONS(551),
    [anon_sym_AT_ATc_COLON] = ACTIONS(551),
    [anon_sym_AT] = ACTIONS(553),
    [anon_sym_AT_BANG] = ACTIONS(551),
    [anon_sym_AT_LPAREN] = ACTIONS(551),
    [anon_sym_ATa_COLON] = ACTIONS(551),
    [anon_sym_ATb_COLON] = ACTIONS(551),
    [anon_sym_ATB_COLON] = ACTIONS(551),
    [anon_sym_ATe_COLON] = ACTIONS(551),
    [anon_sym_ATF_COLON] = ACTIONS(551),
    [anon_sym_ATi_COLON] = ACTIONS(551),
    [anon_sym_ATk_COLON] = ACTIONS(551),
    [anon_sym_ATo_COLON] = ACTIONS(551),
    [anon_sym_ATr_COLON] = ACTIONS(551),
    [anon_sym_ATf_COLON] = ACTIONS(551),
    [anon_sym_ATs_COLON] = ACTIONS(551),
    [anon_sym_ATx_COLON] = ACTIONS(551),
    [anon_sym_RPAREN] = ACTIONS(551),
    [anon_sym_PIPE_DOT] = ACTIONS(551),
    [anon_sym_GT] = ACTIONS(553),
    [anon_sym_GT_GT] = ACTIONS(551),
    [sym_html_redirect_operator] = ACTIONS(553),
    [sym_html_append_operator] = ACTIONS(551),
    [anon_sym_BQUOTE] = ACTIONS(551),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(551),
    [anon_sym_CR] = ACTIONS(551),
    [anon_sym_SEMI] = ACTIONS(551),
    [sym_file_descriptor] = ACTIONS(551),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [anon_sym_TILDE] = ACTIONS(557),
    [anon_sym_PIPE] = ACTIONS(557),
    [anon_sym_PIPEH] = ACTIONS(557),
    [anon_sym_PIPET] = ACTIONS(557),
    [sym_pipe_second_command] = ACTIONS(559),
    [anon_sym_AT_AT] = ACTIONS(557),
    [anon_sym_AT_ATdbt] = ACTIONS(557),
    [anon_sym_AT_ATdbta] = ACTIONS(557),
    [anon_sym_AT_ATdbtb] = ACTIONS(557),
    [anon_sym_AT_ATdbts] = ACTIONS(557),
    [anon_sym_AT_AT_DOT] = ACTIONS(557),
    [anon_sym_AT_AT_EQ] = ACTIONS(557),
    [anon_sym_AT_ATk] = ACTIONS(557),
    [anon_sym_AT_ATt] = ACTIONS(557),
    [anon_sym_AT_ATb] = ACTIONS(557),
    [anon_sym_AT_ATi] = ACTIONS(557),
    [anon_sym_AT_ATiS] = ACTIONS(557),
    [anon_sym_AT_ATf] = ACTIONS(557),
    [anon_sym_AT_ATs_COLON] = ACTIONS(557),
    [anon_sym_AT_ATc_COLON] = ACTIONS(557),
    [anon_sym_AT] = ACTIONS(557),
    [anon_sym_AT_BANG] = ACTIONS(557),
    [anon_sym_AT_LPAREN] = ACTIONS(557),
    [anon_sym_ATa_COLON] = ACTIONS(557),
    [anon_sym_ATb_COLON] = ACTIONS(557),
    [anon_sym_ATB_COLON] = ACTIONS(557),
    [anon_sym_ATe_COLON] = ACTIONS(557),
    [anon_sym_ATF_COLON] = ACTIONS(557),
    [anon_sym_ATi_COLON] = ACTIONS(557),
    [anon_sym_ATk_COLON] = ACTIONS(557),
    [anon_sym_ATo_COLON] = ACTIONS(557),
    [anon_sym_ATr_COLON] = ACTIONS(557),
    [anon_sym_ATf_COLON] = ACTIONS(557),
    [anon_sym_ATs_COLON] = ACTIONS(557),
    [anon_sym_ATx_COLON] = ACTIONS(557),
    [anon_sym_PIPE_DOT] = ACTIONS(557),
    [anon_sym_GT] = ACTIONS(557),
    [anon_sym_GT_GT] = ACTIONS(557),
    [sym_html_redirect_operator] = ACTIONS(557),
    [sym_html_append_operator] = ACTIONS(557),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(557),
    [anon_sym_CR] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(557),
    [sym_file_descriptor] = ACTIONS(555),
  },
  [141] = {
    [sym__redirect_operator] = STATE(173),
    [sym_fdn_redirect_operator] = STATE(173),
    [sym_fdn_append_operator] = STATE(173),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(561),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(563),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(333),
    [sym_html_append_operator] = ACTIONS(335),
    [anon_sym_BQUOTE] = ACTIONS(257),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(257),
    [sym_file_descriptor] = ACTIONS(337),
  },
  [142] = {
    [sym__redirect_operator] = STATE(173),
    [sym_fdn_redirect_operator] = STATE(173),
    [sym_fdn_append_operator] = STATE(173),
    [anon_sym_TILDE] = ACTIONS(259),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(333),
    [sym_html_append_operator] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(257),
    [sym_file_descriptor] = ACTIONS(337),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(571),
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_GT_GT] = ACTIONS(571),
    [sym_html_redirect_operator] = ACTIONS(573),
    [sym_html_append_operator] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(571),
    [anon_sym_CR] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(571),
    [sym_file_descriptor] = ACTIONS(571),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_GT_GT] = ACTIONS(575),
    [sym_html_redirect_operator] = ACTIONS(577),
    [sym_html_append_operator] = ACTIONS(575),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(575),
    [anon_sym_CR] = ACTIONS(575),
    [anon_sym_SEMI] = ACTIONS(575),
    [sym_file_descriptor] = ACTIONS(575),
  },
  [145] = {
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
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_PIPE_DOT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_macro_content] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [146] = {
    [anon_sym_TILDE] = ACTIONS(557),
    [anon_sym_PIPE] = ACTIONS(557),
    [anon_sym_PIPEH] = ACTIONS(557),
    [anon_sym_PIPET] = ACTIONS(557),
    [sym_pipe_second_command] = ACTIONS(559),
    [anon_sym_AT_AT] = ACTIONS(557),
    [anon_sym_AT_ATdbt] = ACTIONS(557),
    [anon_sym_AT_ATdbta] = ACTIONS(557),
    [anon_sym_AT_ATdbtb] = ACTIONS(557),
    [anon_sym_AT_ATdbts] = ACTIONS(557),
    [anon_sym_AT_AT_DOT] = ACTIONS(557),
    [anon_sym_AT_AT_EQ] = ACTIONS(557),
    [anon_sym_AT_ATk] = ACTIONS(557),
    [anon_sym_AT_ATt] = ACTIONS(557),
    [anon_sym_AT_ATb] = ACTIONS(557),
    [anon_sym_AT_ATi] = ACTIONS(557),
    [anon_sym_AT_ATiS] = ACTIONS(557),
    [anon_sym_AT_ATf] = ACTIONS(557),
    [anon_sym_AT_ATs_COLON] = ACTIONS(557),
    [anon_sym_AT_ATc_COLON] = ACTIONS(557),
    [anon_sym_AT] = ACTIONS(557),
    [anon_sym_AT_BANG] = ACTIONS(557),
    [anon_sym_AT_LPAREN] = ACTIONS(557),
    [anon_sym_ATa_COLON] = ACTIONS(557),
    [anon_sym_ATb_COLON] = ACTIONS(557),
    [anon_sym_ATB_COLON] = ACTIONS(557),
    [anon_sym_ATe_COLON] = ACTIONS(557),
    [anon_sym_ATF_COLON] = ACTIONS(557),
    [anon_sym_ATi_COLON] = ACTIONS(557),
    [anon_sym_ATk_COLON] = ACTIONS(557),
    [anon_sym_ATo_COLON] = ACTIONS(557),
    [anon_sym_ATr_COLON] = ACTIONS(557),
    [anon_sym_ATf_COLON] = ACTIONS(557),
    [anon_sym_ATs_COLON] = ACTIONS(557),
    [anon_sym_ATx_COLON] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [anon_sym_PIPE_DOT] = ACTIONS(557),
    [anon_sym_GT] = ACTIONS(557),
    [anon_sym_GT_GT] = ACTIONS(557),
    [sym_html_redirect_operator] = ACTIONS(557),
    [sym_html_append_operator] = ACTIONS(557),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(557),
    [sym_file_descriptor] = ACTIONS(555),
  },
  [147] = {
    [anon_sym_TILDE] = ACTIONS(557),
    [anon_sym_PIPE] = ACTIONS(557),
    [anon_sym_PIPEH] = ACTIONS(557),
    [anon_sym_PIPET] = ACTIONS(557),
    [sym_pipe_second_command] = ACTIONS(559),
    [anon_sym_AT_AT] = ACTIONS(557),
    [anon_sym_AT_ATdbt] = ACTIONS(557),
    [anon_sym_AT_ATdbta] = ACTIONS(557),
    [anon_sym_AT_ATdbtb] = ACTIONS(557),
    [anon_sym_AT_ATdbts] = ACTIONS(557),
    [anon_sym_AT_AT_DOT] = ACTIONS(557),
    [anon_sym_AT_AT_EQ] = ACTIONS(557),
    [anon_sym_AT_ATk] = ACTIONS(557),
    [anon_sym_AT_ATt] = ACTIONS(557),
    [anon_sym_AT_ATb] = ACTIONS(557),
    [anon_sym_AT_ATi] = ACTIONS(557),
    [anon_sym_AT_ATiS] = ACTIONS(557),
    [anon_sym_AT_ATf] = ACTIONS(557),
    [anon_sym_AT_ATs_COLON] = ACTIONS(557),
    [anon_sym_AT_ATc_COLON] = ACTIONS(557),
    [anon_sym_AT] = ACTIONS(557),
    [anon_sym_AT_BANG] = ACTIONS(557),
    [anon_sym_AT_LPAREN] = ACTIONS(557),
    [anon_sym_ATa_COLON] = ACTIONS(557),
    [anon_sym_ATb_COLON] = ACTIONS(557),
    [anon_sym_ATB_COLON] = ACTIONS(557),
    [anon_sym_ATe_COLON] = ACTIONS(557),
    [anon_sym_ATF_COLON] = ACTIONS(557),
    [anon_sym_ATi_COLON] = ACTIONS(557),
    [anon_sym_ATk_COLON] = ACTIONS(557),
    [anon_sym_ATo_COLON] = ACTIONS(557),
    [anon_sym_ATr_COLON] = ACTIONS(557),
    [anon_sym_ATf_COLON] = ACTIONS(557),
    [anon_sym_ATs_COLON] = ACTIONS(557),
    [anon_sym_ATx_COLON] = ACTIONS(557),
    [anon_sym_PIPE_DOT] = ACTIONS(557),
    [anon_sym_GT] = ACTIONS(557),
    [anon_sym_GT_GT] = ACTIONS(557),
    [sym_html_redirect_operator] = ACTIONS(557),
    [sym_html_append_operator] = ACTIONS(557),
    [anon_sym_BQUOTE] = ACTIONS(557),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(557),
    [sym_file_descriptor] = ACTIONS(555),
  },
  [148] = {
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
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_macro_content] = ACTIONS(579),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [149] = {
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(563),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_GT_GT] = ACTIONS(571),
    [sym_html_redirect_operator] = ACTIONS(573),
    [sym_html_append_operator] = ACTIONS(571),
    [anon_sym_BQUOTE] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(571),
    [sym_file_descriptor] = ACTIONS(571),
  },
  [150] = {
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_GT_GT] = ACTIONS(575),
    [sym_html_redirect_operator] = ACTIONS(577),
    [sym_html_append_operator] = ACTIONS(575),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(575),
    [sym_file_descriptor] = ACTIONS(575),
  },
  [151] = {
    [anon_sym_TILDE] = ACTIONS(575),
    [anon_sym_PIPE] = ACTIONS(577),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(563),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(577),
    [anon_sym_GT_GT] = ACTIONS(575),
    [sym_html_redirect_operator] = ACTIONS(577),
    [sym_html_append_operator] = ACTIONS(575),
    [anon_sym_BQUOTE] = ACTIONS(575),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(575),
    [sym_file_descriptor] = ACTIONS(575),
  },
  [152] = {
    [anon_sym_TILDE] = ACTIONS(571),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_PIPEH] = ACTIONS(263),
    [anon_sym_PIPET] = ACTIONS(265),
    [anon_sym_AT_AT] = ACTIONS(267),
    [anon_sym_AT_ATdbt] = ACTIONS(269),
    [anon_sym_AT_ATdbta] = ACTIONS(271),
    [anon_sym_AT_ATdbtb] = ACTIONS(273),
    [anon_sym_AT_ATdbts] = ACTIONS(275),
    [anon_sym_AT_AT_DOT] = ACTIONS(277),
    [anon_sym_AT_AT_EQ] = ACTIONS(279),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(283),
    [anon_sym_AT_ATb] = ACTIONS(285),
    [anon_sym_AT_ATi] = ACTIONS(287),
    [anon_sym_AT_ATiS] = ACTIONS(289),
    [anon_sym_AT_ATf] = ACTIONS(291),
    [anon_sym_AT_ATs_COLON] = ACTIONS(293),
    [anon_sym_AT_ATc_COLON] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym_AT_BANG] = ACTIONS(299),
    [anon_sym_AT_LPAREN] = ACTIONS(301),
    [anon_sym_ATa_COLON] = ACTIONS(303),
    [anon_sym_ATb_COLON] = ACTIONS(305),
    [anon_sym_ATB_COLON] = ACTIONS(307),
    [anon_sym_ATe_COLON] = ACTIONS(309),
    [anon_sym_ATF_COLON] = ACTIONS(311),
    [anon_sym_ATi_COLON] = ACTIONS(313),
    [anon_sym_ATk_COLON] = ACTIONS(315),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(319),
    [anon_sym_ATf_COLON] = ACTIONS(321),
    [anon_sym_ATs_COLON] = ACTIONS(323),
    [anon_sym_ATx_COLON] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_GT_GT] = ACTIONS(571),
    [sym_html_redirect_operator] = ACTIONS(573),
    [sym_html_append_operator] = ACTIONS(571),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(571),
    [sym_file_descriptor] = ACTIONS(571),
  },
  [153] = {
    [anon_sym_TILDE] = ACTIONS(245),
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
    [anon_sym_PIPE_DOT] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_GT] = ACTIONS(245),
    [sym_html_redirect_operator] = ACTIONS(247),
    [sym_html_append_operator] = ACTIONS(245),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(245),
    [sym_file_descriptor] = ACTIONS(245),
  },
  [154] = {
    [aux_sym_commands_repeat1] = STATE(154),
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_DQUOTE] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_DOT_BANG] = ACTIONS(581),
    [anon_sym_DOT_LPAREN] = ACTIONS(581),
    [anon_sym_DOT_SLASH] = ACTIONS(581),
    [anon_sym_PERCENT] = ACTIONS(581),
    [anon_sym_env] = ACTIONS(581),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(583),
    [aux_sym__interpret_identifier_token1] = ACTIONS(583),
    [aux_sym__interpret_identifier_token2] = ACTIONS(581),
    [sym_system_identifier] = ACTIONS(581),
    [sym_question_mark_identifier] = ACTIONS(581),
    [sym_pointer_identifier] = ACTIONS(581),
    [sym_macro_identifier] = ACTIONS(581),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_CR] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(585),
    [sym_cmd_identifier] = ACTIONS(581),
    [sym__help_command] = ACTIONS(581),
    [sym_repeat_number] = ACTIONS(581),
    [sym_interpreter_identifier] = ACTIONS(581),
  },
  [155] = {
    [aux_sym__commands_singleline_repeat1] = STATE(155),
    [anon_sym_DQUOTE] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(590),
    [anon_sym_DOT_BANG] = ACTIONS(588),
    [anon_sym_DOT_LPAREN] = ACTIONS(588),
    [anon_sym_DOT_SLASH] = ACTIONS(588),
    [anon_sym_PERCENT] = ACTIONS(588),
    [anon_sym_env] = ACTIONS(588),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(590),
    [aux_sym__interpret_identifier_token1] = ACTIONS(590),
    [aux_sym__interpret_identifier_token2] = ACTIONS(588),
    [sym_system_identifier] = ACTIONS(588),
    [sym_question_mark_identifier] = ACTIONS(588),
    [sym_pointer_identifier] = ACTIONS(588),
    [sym_macro_identifier] = ACTIONS(588),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(592),
    [sym_cmd_identifier] = ACTIONS(588),
    [sym__help_command] = ACTIONS(588),
    [sym_repeat_number] = ACTIONS(588),
    [sym_interpreter_identifier] = ACTIONS(588),
  },
  [156] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(99),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [157] = {
    [sym_eq_sep_args] = STATE(102),
    [sym__eq_sep_key_single] = STATE(56),
    [sym_eq_sep_key] = STATE(72),
    [sym_double_quoted_arg] = STATE(71),
    [sym_single_quoted_arg] = STATE(71),
    [sym_cmd_substitution_arg] = STATE(71),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym__eq_sep_key_identifier] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(97),
  },
  [158] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(118),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [159] = {
    [sym_arg] = STATE(45),
    [sym_args] = STATE(118),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(45),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [160] = {
    [sym_arg] = STATE(36),
    [sym_args] = STATE(99),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [aux_sym_args_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [161] = {
    [sym_arg] = STATE(63),
    [sym_eq_sep_val] = STATE(138),
    [sym_double_quoted_arg] = STATE(79),
    [sym_single_quoted_arg] = STATE(79),
    [sym_cmd_substitution_arg] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_arg_identifier] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(97),
  },
  [162] = {
    [sym_arg] = STATE(80),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [163] = {
    [sym_arg] = STATE(126),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [164] = {
    [sym_arg] = STATE(133),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [165] = {
    [sym_arg] = STATE(124),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [166] = {
    [sym_arg] = STATE(128),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [167] = {
    [sym_arg] = STATE(123),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [168] = {
    [sym_arg] = STATE(186),
    [sym_double_quoted_arg] = STATE(223),
    [sym_single_quoted_arg] = STATE(223),
    [sym_cmd_substitution_arg] = STATE(223),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [sym_arg_identifier] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [sym__comment] = ACTIONS(97),
  },
  [169] = {
    [sym_arg] = STATE(129),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [170] = {
    [sym_arg] = STATE(134),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [171] = {
    [sym_arg] = STATE(132),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [172] = {
    [sym_arg] = STATE(131),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [173] = {
    [sym_arg] = STATE(198),
    [sym_double_quoted_arg] = STATE(207),
    [sym_single_quoted_arg] = STATE(207),
    [sym_cmd_substitution_arg] = STATE(207),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [sym_arg_identifier] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(621),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(623),
    [anon_sym_BQUOTE] = ACTIONS(625),
    [sym__comment] = ACTIONS(97),
  },
  [174] = {
    [sym_arg] = STATE(120),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [175] = {
    [sym_arg] = STATE(130),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [176] = {
    [sym_arg] = STATE(119),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [177] = {
    [sym_arg] = STATE(179),
    [sym_double_quoted_arg] = STATE(223),
    [sym_single_quoted_arg] = STATE(223),
    [sym_cmd_substitution_arg] = STATE(223),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [sym_arg_identifier] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [sym__comment] = ACTIONS(97),
  },
  [178] = {
    [sym__eq_sep_key_single] = STATE(65),
    [sym_double_quoted_arg] = STATE(71),
    [sym_single_quoted_arg] = STATE(71),
    [sym_cmd_substitution_arg] = STATE(71),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym__eq_sep_key_identifier] = ACTIONS(105),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(97),
  },
  [179] = {
    [sym_arg] = STATE(111),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [180] = {
    [sym_arg] = STATE(76),
    [sym_double_quoted_arg] = STATE(79),
    [sym_single_quoted_arg] = STATE(79),
    [sym_cmd_substitution_arg] = STATE(79),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [sym_arg_identifier] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(97),
  },
  [181] = {
    [sym_arg] = STATE(109),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [182] = {
    [sym_arg] = STATE(117),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [183] = {
    [sym_arg] = STATE(116),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [184] = {
    [sym_arg] = STATE(127),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [185] = {
    [sym_arg] = STATE(135),
    [sym_double_quoted_arg] = STATE(103),
    [sym_single_quoted_arg] = STATE(103),
    [sym_cmd_substitution_arg] = STATE(103),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [sym_arg_identifier] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(603),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(97),
  },
  [186] = {
    [sym_arg] = STATE(174),
    [sym_double_quoted_arg] = STATE(223),
    [sym_single_quoted_arg] = STATE(223),
    [sym_cmd_substitution_arg] = STATE(223),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [sym_arg_identifier] = ACTIONS(609),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(613),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [sym__comment] = ACTIONS(97),
  },
  [187] = {
    [sym_cmd_substitution_arg] = STATE(196),
    [aux_sym_double_quoted_arg_repeat1] = STATE(196),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(629),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(629),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(629),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [188] = {
    [sym_cmd_substitution_arg] = STATE(197),
    [aux_sym_double_quoted_arg_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(635),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(637),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [189] = {
    [sym_cmd_substitution_arg] = STATE(190),
    [aux_sym_double_quoted_arg_repeat1] = STATE(190),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(641),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(641),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(641),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [190] = {
    [sym_cmd_substitution_arg] = STATE(197),
    [aux_sym_double_quoted_arg_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(643),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(637),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [191] = {
    [sym_cmd_substitution_arg] = STATE(192),
    [aux_sym_double_quoted_arg_repeat1] = STATE(192),
    [anon_sym_DQUOTE] = ACTIONS(645),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(647),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(647),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(647),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [192] = {
    [sym_cmd_substitution_arg] = STATE(197),
    [aux_sym_double_quoted_arg_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(637),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [193] = {
    [sym_cmd_substitution_arg] = STATE(194),
    [aux_sym_double_quoted_arg_repeat1] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(653),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(653),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [194] = {
    [sym_cmd_substitution_arg] = STATE(197),
    [aux_sym_double_quoted_arg_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(655),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(637),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [195] = {
    [sym_cmd_substitution_arg] = STATE(188),
    [aux_sym_double_quoted_arg_repeat1] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(657),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(659),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(659),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(659),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [196] = {
    [sym_cmd_substitution_arg] = STATE(197),
    [aux_sym_double_quoted_arg_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(661),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(637),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(637),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(97),
  },
  [197] = {
    [sym_cmd_substitution_arg] = STATE(197),
    [aux_sym_double_quoted_arg_repeat1] = STATE(197),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(665),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(665),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(665),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(668),
    [anon_sym_BQUOTE] = ACTIONS(671),
    [sym__comment] = ACTIONS(97),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(674),
    [anon_sym_CR] = ACTIONS(674),
    [anon_sym_SEMI] = ACTIONS(674),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [201] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [203] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [205] = {
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(166),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(166),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(166),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(97),
  },
  [206] = {
    [anon_sym_DQUOTE] = ACTIONS(166),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(166),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(166),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(166),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(97),
  },
  [207] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
  },
  [208] = {
    [anon_sym_DQUOTE] = ACTIONS(676),
    [sym_arg_identifier] = ACTIONS(678),
    [anon_sym_SQUOTE] = ACTIONS(676),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(676),
    [anon_sym_BQUOTE] = ACTIONS(676),
    [sym__comment] = ACTIONS(97),
  },
  [209] = {
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_arg_identifier] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(97),
  },
  [210] = {
    [anon_sym_DQUOTE] = ACTIONS(680),
    [sym_arg_identifier] = ACTIONS(682),
    [anon_sym_SQUOTE] = ACTIONS(680),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(680),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [sym__comment] = ACTIONS(97),
  },
  [211] = {
    [anon_sym_DQUOTE] = ACTIONS(684),
    [sym_arg_identifier] = ACTIONS(686),
    [anon_sym_SQUOTE] = ACTIONS(684),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(684),
    [anon_sym_BQUOTE] = ACTIONS(684),
    [sym__comment] = ACTIONS(97),
  },
  [212] = {
    [anon_sym_DQUOTE] = ACTIONS(688),
    [sym_arg_identifier] = ACTIONS(690),
    [anon_sym_SQUOTE] = ACTIONS(688),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(688),
    [anon_sym_BQUOTE] = ACTIONS(688),
    [sym__comment] = ACTIONS(97),
  },
  [213] = {
    [aux_sym_commands_repeat2] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(692),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(694),
    [anon_sym_CR] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(694),
  },
  [214] = {
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(97),
  },
  [215] = {
    [anon_sym_DQUOTE] = ACTIONS(180),
    [sym_arg_identifier] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(97),
  },
  [216] = {
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(97),
  },
  [217] = {
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym_arg_identifier] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(97),
  },
  [218] = {
    [anon_sym_DQUOTE] = ACTIONS(696),
    [sym_arg_identifier] = ACTIONS(698),
    [anon_sym_SQUOTE] = ACTIONS(696),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(696),
    [anon_sym_BQUOTE] = ACTIONS(696),
    [sym__comment] = ACTIONS(97),
  },
  [219] = {
    [aux_sym_commands_repeat2] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(694),
    [anon_sym_CR] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(694),
  },
  [220] = {
    [aux_sym_commands_repeat2] = STATE(219),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(694),
    [anon_sym_CR] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(694),
  },
  [221] = {
    [aux_sym_commands_repeat2] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(702),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(704),
    [anon_sym_CR] = ACTIONS(704),
    [anon_sym_SEMI] = ACTIONS(704),
  },
  [222] = {
    [aux_sym_commands_repeat2] = STATE(213),
    [ts_builtin_sym_end] = ACTIONS(700),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(694),
    [anon_sym_CR] = ACTIONS(694),
    [anon_sym_SEMI] = ACTIONS(694),
  },
  [223] = {
    [anon_sym_DQUOTE] = ACTIONS(176),
    [sym_arg_identifier] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(97),
  },
  [224] = {
    [anon_sym_DQUOTE] = ACTIONS(164),
    [sym_arg_identifier] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(97),
  },
  [225] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(226),
    [anon_sym_SQUOTE] = ACTIONS(707),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(709),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(709),
    [sym__comment] = ACTIONS(97),
  },
  [226] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(711),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(713),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(713),
    [sym__comment] = ACTIONS(97),
  },
  [227] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(715),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(713),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(713),
    [sym__comment] = ACTIONS(97),
  },
  [228] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(229),
    [anon_sym_SQUOTE] = ACTIONS(717),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(719),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(719),
    [sym__comment] = ACTIONS(97),
  },
  [229] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(721),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(713),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(713),
    [sym__comment] = ACTIONS(97),
  },
  [230] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(227),
    [anon_sym_SQUOTE] = ACTIONS(723),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(725),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(725),
    [sym__comment] = ACTIONS(97),
  },
  [231] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(727),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(713),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(713),
    [sym__comment] = ACTIONS(97),
  },
  [232] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(231),
    [anon_sym_SQUOTE] = ACTIONS(729),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(731),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(731),
    [sym__comment] = ACTIONS(97),
  },
  [233] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(733),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(735),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(735),
    [sym__comment] = ACTIONS(97),
  },
  [234] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(236),
    [anon_sym_SQUOTE] = ACTIONS(738),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(740),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(740),
    [sym__comment] = ACTIONS(97),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(702),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(702),
    [anon_sym_CR] = ACTIONS(702),
    [anon_sym_SEMI] = ACTIONS(702),
  },
  [236] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(233),
    [anon_sym_SQUOTE] = ACTIONS(742),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(713),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(713),
    [sym__comment] = ACTIONS(97),
  },
  [237] = {
    [aux_sym__commands_singleline_repeat2] = STATE(246),
    [anon_sym_BQUOTE] = ACTIONS(744),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(746),
  },
  [238] = {
    [aux_sym__commands_singleline_repeat2] = STATE(243),
    [anon_sym_BQUOTE] = ACTIONS(748),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(746),
  },
  [239] = {
    [aux_sym__commands_singleline_repeat2] = STATE(241),
    [anon_sym_RPAREN] = ACTIONS(750),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(752),
  },
  [240] = {
    [aux_sym__commands_singleline_repeat2] = STATE(241),
    [anon_sym_RPAREN] = ACTIONS(748),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(752),
  },
  [241] = {
    [aux_sym__commands_singleline_repeat2] = STATE(241),
    [anon_sym_RPAREN] = ACTIONS(754),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(756),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_BQUOTE] = ACTIONS(754),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(754),
  },
  [243] = {
    [aux_sym__commands_singleline_repeat2] = STATE(243),
    [anon_sym_BQUOTE] = ACTIONS(754),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(759),
  },
  [244] = {
    [aux_sym__commands_singleline_repeat2] = STATE(238),
    [anon_sym_BQUOTE] = ACTIONS(750),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(746),
  },
  [245] = {
    [aux_sym__commands_singleline_repeat2] = STATE(240),
    [anon_sym_RPAREN] = ACTIONS(750),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(752),
  },
  [246] = {
    [aux_sym__commands_singleline_repeat2] = STATE(243),
    [anon_sym_BQUOTE] = ACTIONS(750),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(746),
  },
  [247] = {
    [aux_sym__commands_singleline_repeat2] = STATE(239),
    [anon_sym_RPAREN] = ACTIONS(744),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(752),
  },
  [248] = {
    [anon_sym_RPAREN] = ACTIONS(762),
    [sym_macro_call_content] = ACTIONS(764),
    [sym__comment] = ACTIONS(97),
  },
  [249] = {
    [sym_interpret_arg] = STATE(99),
    [sym__any_command] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [250] = {
    [anon_sym_RPAREN] = ACTIONS(768),
    [sym_macro_call_content] = ACTIONS(770),
    [sym__comment] = ACTIONS(97),
  },
  [251] = {
    [anon_sym_GT] = ACTIONS(772),
    [anon_sym_GT_GT] = ACTIONS(774),
    [sym__comment] = ACTIONS(3),
  },
  [252] = {
    [anon_sym_BQUOTE] = ACTIONS(776),
    [sym__comment] = ACTIONS(3),
  },
  [253] = {
    [anon_sym_BQUOTE] = ACTIONS(778),
    [sym__comment] = ACTIONS(3),
  },
  [254] = {
    [anon_sym_RPAREN] = ACTIONS(780),
    [sym__comment] = ACTIONS(3),
  },
  [255] = {
    [anon_sym_BQUOTE] = ACTIONS(782),
    [sym__comment] = ACTIONS(3),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(784),
    [sym__comment] = ACTIONS(3),
  },
  [257] = {
    [anon_sym_RPAREN] = ACTIONS(786),
    [sym__comment] = ACTIONS(3),
  },
  [258] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(788),
    [sym__comment] = ACTIONS(97),
  },
  [259] = {
    [anon_sym_DQUOTE] = ACTIONS(790),
    [sym__comment] = ACTIONS(3),
  },
  [260] = {
    [anon_sym_RPAREN] = ACTIONS(792),
    [sym__comment] = ACTIONS(3),
  },
  [261] = {
    [anon_sym_BQUOTE] = ACTIONS(794),
    [sym__comment] = ACTIONS(3),
  },
  [262] = {
    [anon_sym_RPAREN] = ACTIONS(796),
    [sym__comment] = ACTIONS(3),
  },
  [263] = {
    [anon_sym_RPAREN] = ACTIONS(798),
    [sym__comment] = ACTIONS(3),
  },
  [264] = {
    [anon_sym_RPAREN] = ACTIONS(800),
    [sym__comment] = ACTIONS(3),
  },
  [265] = {
    [sym_tmp_eval_arg] = ACTIONS(802),
    [sym__comment] = ACTIONS(97),
  },
  [266] = {
    [anon_sym_BQUOTE] = ACTIONS(804),
    [sym__comment] = ACTIONS(3),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(806),
    [sym__comment] = ACTIONS(3),
  },
  [268] = {
    [sym_tmp_eval_arg] = ACTIONS(808),
    [sym__comment] = ACTIONS(97),
  },
  [269] = {
    [anon_sym_RPAREN] = ACTIONS(810),
    [sym__comment] = ACTIONS(3),
  },
  [270] = {
    [sym_grep_specifier] = ACTIONS(812),
    [sym__comment] = ACTIONS(97),
  },
  [271] = {
    [anon_sym_BQUOTE] = ACTIONS(814),
    [sym__comment] = ACTIONS(3),
  },
  [272] = {
    [sym_macro_content] = ACTIONS(816),
    [sym__comment] = ACTIONS(97),
  },
  [273] = {
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(258),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(249),
  [13] = {.count = 1, .reusable = true}, SHIFT(272),
  [15] = {.count = 1, .reusable = true}, SHIFT(212),
  [17] = {.count = 1, .reusable = true}, SHIFT(52),
  [19] = {.count = 1, .reusable = false}, SHIFT(82),
  [21] = {.count = 1, .reusable = false}, SHIFT(51),
  [23] = {.count = 1, .reusable = true}, SHIFT(51),
  [25] = {.count = 1, .reusable = true}, SHIFT(35),
  [27] = {.count = 1, .reusable = true}, SHIFT(29),
  [29] = {.count = 1, .reusable = true}, SHIFT(157),
  [31] = {.count = 1, .reusable = true}, SHIFT(83),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(31),
  [37] = {.count = 1, .reusable = true}, SHIFT(33),
  [39] = {.count = 1, .reusable = true}, SHIFT(27),
  [41] = {.count = 1, .reusable = true}, SHIFT(34),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, SHIFT(41),
  [51] = {.count = 1, .reusable = true}, SHIFT(38),
  [53] = {.count = 1, .reusable = true}, SHIFT(145),
  [55] = {.count = 1, .reusable = true}, SHIFT(44),
  [57] = {.count = 1, .reusable = true}, SHIFT(43),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = true}, SHIFT(42),
  [63] = {.count = 1, .reusable = false}, SHIFT(4),
  [65] = {.count = 1, .reusable = true}, SHIFT(148),
  [67] = {.count = 1, .reusable = true}, SHIFT(28),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(154),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(22),
  [77] = {.count = 1, .reusable = true}, SHIFT(21),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(155),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(191),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(53),
  [91] = {.count = 1, .reusable = true}, SHIFT(228),
  [93] = {.count = 1, .reusable = true}, SHIFT(15),
  [95] = {.count = 1, .reusable = true}, SHIFT(11),
  [97] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(195),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(71),
  [107] = {.count = 1, .reusable = true}, SHIFT(234),
  [109] = {.count = 1, .reusable = true}, SHIFT(7),
  [111] = {.count = 1, .reusable = true}, SHIFT(8),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_args, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(191),
  [138] = {.count = 1, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(53),
  [143] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(228),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(15),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(11),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 2),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 2),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 3),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 3),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 3),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 2),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 2),
  [188] = {.count = 1, .reusable = true}, SHIFT(178),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 1),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 1),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [196] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2), SHIFT_REPEAT(178),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(180),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [211] = {.count = 1, .reusable = true}, SHIFT(265),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2), SHIFT_REPEAT(180),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [226] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(265),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_key_single, 1),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_key_single, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 1),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 1),
  [243] = {.count = 1, .reusable = true}, SHIFT(161),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [249] = {.count = 1, .reusable = true}, SHIFT(250),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(181),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [259] = {.count = 1, .reusable = true}, SHIFT(270),
  [261] = {.count = 1, .reusable = false}, SHIFT(140),
  [263] = {.count = 1, .reusable = true}, SHIFT(107),
  [265] = {.count = 1, .reusable = true}, SHIFT(121),
  [267] = {.count = 1, .reusable = false}, SHIFT(183),
  [269] = {.count = 1, .reusable = false}, SHIFT(110),
  [271] = {.count = 1, .reusable = true}, SHIFT(110),
  [273] = {.count = 1, .reusable = true}, SHIFT(108),
  [275] = {.count = 1, .reusable = true}, SHIFT(81),
  [277] = {.count = 1, .reusable = true}, SHIFT(182),
  [279] = {.count = 1, .reusable = true}, SHIFT(158),
  [281] = {.count = 1, .reusable = true}, SHIFT(176),
  [283] = {.count = 1, .reusable = true}, SHIFT(137),
  [285] = {.count = 1, .reusable = true}, SHIFT(125),
  [287] = {.count = 1, .reusable = false}, SHIFT(122),
  [289] = {.count = 1, .reusable = true}, SHIFT(136),
  [291] = {.count = 1, .reusable = true}, SHIFT(74),
  [293] = {.count = 1, .reusable = true}, SHIFT(168),
  [295] = {.count = 1, .reusable = true}, SHIFT(26),
  [297] = {.count = 1, .reusable = false}, SHIFT(167),
  [299] = {.count = 1, .reusable = true}, SHIFT(165),
  [301] = {.count = 1, .reusable = true}, SHIFT(177),
  [303] = {.count = 1, .reusable = true}, SHIFT(163),
  [305] = {.count = 1, .reusable = true}, SHIFT(184),
  [307] = {.count = 1, .reusable = true}, SHIFT(166),
  [309] = {.count = 1, .reusable = true}, SHIFT(268),
  [311] = {.count = 1, .reusable = true}, SHIFT(169),
  [313] = {.count = 1, .reusable = true}, SHIFT(175),
  [315] = {.count = 1, .reusable = true}, SHIFT(172),
  [317] = {.count = 1, .reusable = true}, SHIFT(171),
  [319] = {.count = 1, .reusable = true}, SHIFT(164),
  [321] = {.count = 1, .reusable = true}, SHIFT(170),
  [323] = {.count = 1, .reusable = true}, SHIFT(185),
  [325] = {.count = 1, .reusable = true}, SHIFT(162),
  [327] = {.count = 1, .reusable = true}, SHIFT(93),
  [329] = {.count = 1, .reusable = false}, SHIFT(211),
  [331] = {.count = 1, .reusable = true}, SHIFT(210),
  [333] = {.count = 1, .reusable = false}, SHIFT(173),
  [335] = {.count = 1, .reusable = true}, SHIFT(173),
  [337] = {.count = 1, .reusable = true}, SHIFT(251),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 9),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 9),
  [343] = {.count = 1, .reusable = true}, SHIFT(248),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [357] = {.count = 1, .reusable = false}, SHIFT(73),
  [359] = {.count = 1, .reusable = false}, SHIFT(104),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_last_command, 1, .production_id = 1),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_last_command, 1, .production_id = 1),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 7),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 7),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 6),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 6),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [413] = {.count = 1, .reusable = true}, SHIFT(77),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 8),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 8),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 13),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 13),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 14),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 14),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 10),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 10),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 3),
  [549] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 3),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 12),
  [553] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 12),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [559] = {.count = 1, .reusable = false}, SHIFT(115),
  [561] = {.count = 1, .reusable = false}, SHIFT(147),
  [563] = {.count = 1, .reusable = true}, SHIFT(159),
  [565] = {.count = 1, .reusable = true}, SHIFT(25),
  [567] = {.count = 1, .reusable = false}, SHIFT(146),
  [569] = {.count = 1, .reusable = true}, SHIFT(24),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [573] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [577] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [579] = {.count = 1, .reusable = false}, SHIFT(153),
  [581] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [583] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(154),
  [588] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [590] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(155),
  [595] = {.count = 1, .reusable = false}, SHIFT(79),
  [597] = {.count = 1, .reusable = true}, SHIFT(189),
  [599] = {.count = 1, .reusable = false}, SHIFT(103),
  [601] = {.count = 1, .reusable = true}, SHIFT(232),
  [603] = {.count = 1, .reusable = true}, SHIFT(16),
  [605] = {.count = 1, .reusable = true}, SHIFT(12),
  [607] = {.count = 1, .reusable = true}, SHIFT(193),
  [609] = {.count = 1, .reusable = false}, SHIFT(223),
  [611] = {.count = 1, .reusable = true}, SHIFT(230),
  [613] = {.count = 1, .reusable = true}, SHIFT(10),
  [615] = {.count = 1, .reusable = true}, SHIFT(9),
  [617] = {.count = 1, .reusable = true}, SHIFT(187),
  [619] = {.count = 1, .reusable = false}, SHIFT(207),
  [621] = {.count = 1, .reusable = true}, SHIFT(225),
  [623] = {.count = 1, .reusable = true}, SHIFT(13),
  [625] = {.count = 1, .reusable = true}, SHIFT(14),
  [627] = {.count = 1, .reusable = false}, SHIFT(204),
  [629] = {.count = 1, .reusable = false}, SHIFT(196),
  [631] = {.count = 1, .reusable = false}, SHIFT(18),
  [633] = {.count = 1, .reusable = false}, SHIFT(17),
  [635] = {.count = 1, .reusable = false}, SHIFT(59),
  [637] = {.count = 1, .reusable = false}, SHIFT(197),
  [639] = {.count = 1, .reusable = false}, SHIFT(92),
  [641] = {.count = 1, .reusable = false}, SHIFT(190),
  [643] = {.count = 1, .reusable = false}, SHIFT(90),
  [645] = {.count = 1, .reusable = false}, SHIFT(46),
  [647] = {.count = 1, .reusable = false}, SHIFT(192),
  [649] = {.count = 1, .reusable = false}, SHIFT(47),
  [651] = {.count = 1, .reusable = false}, SHIFT(214),
  [653] = {.count = 1, .reusable = false}, SHIFT(194),
  [655] = {.count = 1, .reusable = false}, SHIFT(216),
  [657] = {.count = 1, .reusable = false}, SHIFT(70),
  [659] = {.count = 1, .reusable = false}, SHIFT(188),
  [661] = {.count = 1, .reusable = false}, SHIFT(202),
  [663] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(197),
  [668] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(18),
  [671] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(17),
  [674] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 11),
  [676] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 2),
  [678] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 1),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 1),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 1),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [694] = {.count = 1, .reusable = true}, SHIFT(6),
  [696] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 2),
  [698] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [700] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [702] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [704] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [707] = {.count = 1, .reusable = false}, SHIFT(203),
  [709] = {.count = 1, .reusable = false}, SHIFT(226),
  [711] = {.count = 1, .reusable = false}, SHIFT(201),
  [713] = {.count = 1, .reusable = false}, SHIFT(233),
  [715] = {.count = 1, .reusable = false}, SHIFT(217),
  [717] = {.count = 1, .reusable = false}, SHIFT(54),
  [719] = {.count = 1, .reusable = false}, SHIFT(229),
  [721] = {.count = 1, .reusable = false}, SHIFT(48),
  [723] = {.count = 1, .reusable = false}, SHIFT(215),
  [725] = {.count = 1, .reusable = false}, SHIFT(227),
  [727] = {.count = 1, .reusable = false}, SHIFT(89),
  [729] = {.count = 1, .reusable = false}, SHIFT(91),
  [731] = {.count = 1, .reusable = false}, SHIFT(231),
  [733] = {.count = 1, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2),
  [735] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2), SHIFT_REPEAT(233),
  [738] = {.count = 1, .reusable = false}, SHIFT(58),
  [740] = {.count = 1, .reusable = false}, SHIFT(236),
  [742] = {.count = 1, .reusable = false}, SHIFT(67),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [746] = {.count = 1, .reusable = true}, SHIFT(19),
  [748] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [752] = {.count = 1, .reusable = true}, SHIFT(20),
  [754] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(20),
  [759] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(19),
  [762] = {.count = 1, .reusable = false}, SHIFT(112),
  [764] = {.count = 1, .reusable = false}, SHIFT(264),
  [766] = {.count = 1, .reusable = false}, SHIFT(98),
  [768] = {.count = 1, .reusable = false}, SHIFT(139),
  [770] = {.count = 1, .reusable = false}, SHIFT(256),
  [772] = {.count = 1, .reusable = false}, SHIFT(208),
  [774] = {.count = 1, .reusable = true}, SHIFT(218),
  [776] = {.count = 1, .reusable = true}, SHIFT(49),
  [778] = {.count = 1, .reusable = true}, SHIFT(199),
  [780] = {.count = 1, .reusable = true}, SHIFT(88),
  [782] = {.count = 1, .reusable = true}, SHIFT(87),
  [784] = {.count = 1, .reusable = true}, SHIFT(112),
  [786] = {.count = 1, .reusable = true}, SHIFT(106),
  [788] = {.count = 1, .reusable = false}, SHIFT(259),
  [790] = {.count = 1, .reusable = true}, SHIFT(105),
  [792] = {.count = 1, .reusable = true}, SHIFT(224),
  [794] = {.count = 1, .reusable = true}, SHIFT(209),
  [796] = {.count = 1, .reusable = true}, SHIFT(200),
  [798] = {.count = 1, .reusable = true}, SHIFT(50),
  [800] = {.count = 1, .reusable = true}, SHIFT(113),
  [802] = {.count = 1, .reusable = false}, SHIFT(78),
  [804] = {.count = 1, .reusable = true}, SHIFT(206),
  [806] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [808] = {.count = 1, .reusable = false}, SHIFT(69),
  [810] = {.count = 1, .reusable = true}, SHIFT(205),
  [812] = {.count = 1, .reusable = true}, SHIFT(114),
  [814] = {.count = 1, .reusable = true}, SHIFT(60),
  [816] = {.count = 1, .reusable = false}, SHIFT(257),
  [818] = {.count = 1, .reusable = true}, SHIFT(66),
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
