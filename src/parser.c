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
#define STATE_COUNT 311
#define SYMBOL_COUNT 175
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5

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
  anon_sym_RPAREN = 28,
  anon_sym_ATa_COLON = 29,
  anon_sym_ATb_COLON = 30,
  anon_sym_ATB_COLON = 31,
  anon_sym_ATe_COLON = 32,
  anon_sym_ATF_COLON = 33,
  anon_sym_ATi_COLON = 34,
  anon_sym_ATk_COLON = 35,
  anon_sym_ATo_COLON = 36,
  anon_sym_ATr_COLON = 37,
  anon_sym_ATf_COLON = 38,
  anon_sym_ATs_COLON = 39,
  anon_sym_ATx_COLON = 40,
  anon_sym_LPAREN = 41,
  anon_sym_DOT = 42,
  anon_sym_DOT_BANG = 43,
  anon_sym_DOT_LPAREN = 44,
  anon_sym_PIPE_DOT = 45,
  anon_sym_DOT_SLASH = 46,
  anon_sym_PERCENT = 47,
  anon_sym_env = 48,
  anon_sym_DOT_DOT_DOT = 49,
  aux_sym__interpret_identifier_token1 = 50,
  aux_sym__interpret_identifier_token2 = 51,
  sym_system_identifier = 52,
  sym_question_mark_identifier = 53,
  sym_pointer_identifier = 54,
  anon_sym_EQ = 55,
  sym_macro_identifier = 56,
  sym_macro_call_content = 57,
  anon_sym_GT = 58,
  anon_sym_GT_GT = 59,
  sym_html_redirect_operator = 60,
  sym_html_append_operator = 61,
  anon_sym_COMMA = 62,
  aux_sym_tmp_eval_arg_token1 = 63,
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
  sym__concat = 86,
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
  sym_repeat_command = 145,
  sym_eq_sep_args = 146,
  sym_redirect_command = 147,
  sym__redirect_operator = 148,
  sym_fdn_redirect_operator = 149,
  sym_fdn_append_operator = 150,
  sym__arg = 151,
  sym_arg = 152,
  sym_args = 153,
  sym_tmp_eval_args = 154,
  sym_tmp_eval_arg = 155,
  sym__eq_sep_key_single = 156,
  sym_eq_sep_key = 157,
  sym_eq_sep_val = 158,
  sym_double_quoted_arg = 159,
  sym_single_quoted_arg = 160,
  sym_cmd_substitution_arg = 161,
  sym_concatenation = 162,
  aux_sym_commands_repeat1 = 163,
  aux_sym_commands_repeat2 = 164,
  aux_sym__commands_singleline_repeat1 = 165,
  aux_sym__commands_singleline_repeat2 = 166,
  aux_sym_args_repeat1 = 167,
  aux_sym_tmp_eval_args_repeat1 = 168,
  aux_sym_tmp_eval_arg_repeat1 = 169,
  aux_sym_eq_sep_key_repeat1 = 170,
  aux_sym_eq_sep_val_repeat1 = 171,
  aux_sym_double_quoted_arg_repeat1 = 172,
  aux_sym_single_quoted_arg_repeat1 = 173,
  aux_sym_concatenation_repeat1 = 174,
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
  [anon_sym_RPAREN] = ")",
  [anon_sym_ATa_COLON] = "@a:",
  [anon_sym_ATb_COLON] = "@b:",
  [anon_sym_ATB_COLON] = "@B:",
  [anon_sym_ATe_COLON] = "@e:",
  [anon_sym_ATF_COLON] = "@F:",
  [anon_sym_ATi_COLON] = "@i:",
  [anon_sym_ATk_COLON] = "@k:",
  [anon_sym_ATo_COLON] = "@o:",
  [anon_sym_ATr_COLON] = "@r:",
  [anon_sym_ATf_COLON] = "@f:",
  [anon_sym_ATs_COLON] = "@s:",
  [anon_sym_ATx_COLON] = "@x:",
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
  [anon_sym_COMMA] = ",",
  [aux_sym_tmp_eval_arg_token1] = "tmp_eval_arg_token1",
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
  [sym__concat] = "_concat",
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
  [sym__arg] = "_arg",
  [sym_arg] = "arg",
  [sym_args] = "args",
  [sym_tmp_eval_args] = "tmp_eval_args",
  [sym_tmp_eval_arg] = "tmp_eval_arg",
  [sym__eq_sep_key_single] = "arg",
  [sym_eq_sep_key] = "args",
  [sym_eq_sep_val] = "args",
  [sym_double_quoted_arg] = "double_quoted_arg",
  [sym_single_quoted_arg] = "single_quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [sym_concatenation] = "concatenation",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_tmp_eval_args_repeat1] = "tmp_eval_args_repeat1",
  [aux_sym_tmp_eval_arg_repeat1] = "tmp_eval_arg_repeat1",
  [aux_sym_eq_sep_key_repeat1] = "eq_sep_key_repeat1",
  [aux_sym_eq_sep_val_repeat1] = "eq_sep_val_repeat1",
  [aux_sym_double_quoted_arg_repeat1] = "double_quoted_arg_repeat1",
  [aux_sym_single_quoted_arg_repeat1] = "single_quoted_arg_repeat1",
  [aux_sym_concatenation_repeat1] = "concatenation_repeat1",
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
  [anon_sym_RPAREN] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tmp_eval_arg_token1] = {
    .visible = false,
    .named = false,
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
  [sym__concat] = {
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
  [sym__arg] = {
    .visible = false,
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
  [sym_tmp_eval_args] = {
    .visible = true,
    .named = true,
  },
  [sym_tmp_eval_arg] = {
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
  [sym_concatenation] = {
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
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tmp_eval_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tmp_eval_arg_repeat1] = {
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
  [aux_sym_concatenation_repeat1] = {
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
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args] = "args",
  [field_command] = "command",
  [field_redirect_operator] = "redirect_operator",
  [field_specifier] = "specifier",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 3},
  [10] = {.index = 17, .length = 4},
  [11] = {.index = 21, .length = 5},
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
    {field_args, 1},
    {field_args, 2},
    {field_command, 0},
  [12] =
    {field_command, 0},
    {field_specifier, 2},
  [14] =
    {field_arg, 2},
    {field_command, 0},
    {field_redirect_operator, 1},
  [17] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_command, 0},
  [21] =
    {field_args, 1},
    {field_args, 2},
    {field_args, 3},
    {field_args, 4},
    {field_command, 0},
};

static TSSymbol ts_alias_sequences[12][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_cmd_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == ',') ADVANCE(257);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '=') ADVANCE(236);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(67);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '=' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == ',') ADVANCE(257);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(260);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '(' &&
          lookahead != '\\') ADVANCE(258);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(320);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(81);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(320);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(283);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(291);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(258);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '(') ADVANCE(218);
      if (lookahead == ')') ADVANCE(179);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ';') ADVANCE(320);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(280);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '>') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(46);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(46);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == '}') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(46);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '}') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(46);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(46);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(181);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(190);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(196);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(199);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(205);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(211);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(214);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(167);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(164);
      END_STATE();
    case 67:
      if (lookahead == '>') ADVANCE(252);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 71:
      if (lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(283);
      END_STATE();
    case 73:
      if (lookahead == '{') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(266);
      END_STATE();
    case 74:
      if (lookahead == '}') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == '}') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(75);
      END_STATE();
    case 76:
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(86);
      if (lookahead == '*') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(74);
      END_STATE();
    case 80:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(75);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '(' ||
          lookahead == ')' ||
          ('+' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(92);
      END_STATE();
    case 92:
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
          lookahead == '=' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          (']' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == ')') ADVANCE(180);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '>') ADVANCE(247);
      if (lookahead == '@') ADVANCE(172);
      if (lookahead == 'H') ADVANCE(119);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(46);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(46);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '>') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(146);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == '@') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'k') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '@') ADVANCE(124);
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
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(175);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == '@') ADVANCE(126);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'k') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == '!') ADVANCE(221);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(231);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '(') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == '.') ADVANCE(228);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(229);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '/') ADVANCE(244);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(46);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(46);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '>') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(248);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '>') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_tmp_eval_arg_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_tmp_eval_arg_token1);
      if (lookahead == '*') ADVANCE(46);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_tmp_eval_arg_token1);
      if (lookahead == '>') ADVANCE(252);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '*') ADVANCE(271);
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
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '5') ADVANCE(264);
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
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '>') ADVANCE(252);
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
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == 'C') ADVANCE(265);
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
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == 's') ADVANCE(266);
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
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '%') ADVANCE(262);
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
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(268);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '/') ADVANCE(266);
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
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(268);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '5') ADVANCE(269);
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
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(268);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == 'C') ADVANCE(270);
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
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(268);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == 's') ADVANCE(271);
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
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(268);
      if (lookahead == '*') ADVANCE(267);
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
          lookahead == '\\' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_macro_content);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(315);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '/') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(277);
      if (lookahead == '/') ADVANCE(280);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(277);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(77);
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
          lookahead != '~') ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead == '\\') ADVANCE(77);
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
          lookahead != '~') ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(77);
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
          lookahead != '~') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(8);
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
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '\\') ADVANCE(8);
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
          lookahead == '~') ADVANCE(46);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(291);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '/') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(291);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(291);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(289);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(289);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(46);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token2);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token2);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token3);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token3);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(302);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token2);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token2);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(123);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == ')') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '}') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(74);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(75);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(312);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
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
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 1, .external_lex_state = 2},
  [31] = {.lex_state = 2, .external_lex_state = 4},
  [32] = {.lex_state = 2, .external_lex_state = 4},
  [33] = {.lex_state = 2, .external_lex_state = 4},
  [34] = {.lex_state = 2, .external_lex_state = 4},
  [35] = {.lex_state = 2, .external_lex_state = 4},
  [36] = {.lex_state = 2, .external_lex_state = 4},
  [37] = {.lex_state = 2, .external_lex_state = 4},
  [38] = {.lex_state = 2, .external_lex_state = 4},
  [39] = {.lex_state = 3, .external_lex_state = 4},
  [40] = {.lex_state = 2, .external_lex_state = 4},
  [41] = {.lex_state = 2, .external_lex_state = 4},
  [42] = {.lex_state = 2, .external_lex_state = 4},
  [43] = {.lex_state = 2, .external_lex_state = 4},
  [44] = {.lex_state = 2, .external_lex_state = 4},
  [45] = {.lex_state = 2, .external_lex_state = 4},
  [46] = {.lex_state = 2, .external_lex_state = 4},
  [47] = {.lex_state = 2, .external_lex_state = 5},
  [48] = {.lex_state = 3, .external_lex_state = 4},
  [49] = {.lex_state = 2, .external_lex_state = 5},
  [50] = {.lex_state = 2, .external_lex_state = 5},
  [51] = {.lex_state = 2, .external_lex_state = 5},
  [52] = {.lex_state = 2, .external_lex_state = 5},
  [53] = {.lex_state = 2, .external_lex_state = 5},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 2, .external_lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 3, .external_lex_state = 4},
  [59] = {.lex_state = 2, .external_lex_state = 4},
  [60] = {.lex_state = 2, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 4, .external_lex_state = 4},
  [63] = {.lex_state = 1, .external_lex_state = 7},
  [64] = {.lex_state = 4, .external_lex_state = 4},
  [65] = {.lex_state = 0, .external_lex_state = 6},
  [66] = {.lex_state = 0, .external_lex_state = 6},
  [67] = {.lex_state = 1, .external_lex_state = 7},
  [68] = {.lex_state = 1, .external_lex_state = 7},
  [69] = {.lex_state = 1, .external_lex_state = 7},
  [70] = {.lex_state = 1, .external_lex_state = 7},
  [71] = {.lex_state = 0, .external_lex_state = 7},
  [72] = {.lex_state = 1, .external_lex_state = 7},
  [73] = {.lex_state = 1, .external_lex_state = 7},
  [74] = {.lex_state = 0, .external_lex_state = 6},
  [75] = {.lex_state = 0, .external_lex_state = 6},
  [76] = {.lex_state = 0, .external_lex_state = 6},
  [77] = {.lex_state = 0, .external_lex_state = 6},
  [78] = {.lex_state = 0, .external_lex_state = 7},
  [79] = {.lex_state = 0, .external_lex_state = 6},
  [80] = {.lex_state = 0, .external_lex_state = 6},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 6},
  [83] = {.lex_state = 1, .external_lex_state = 7},
  [84] = {.lex_state = 0, .external_lex_state = 4},
  [85] = {.lex_state = 1, .external_lex_state = 7},
  [86] = {.lex_state = 0, .external_lex_state = 4},
  [87] = {.lex_state = 0, .external_lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 5},
  [89] = {.lex_state = 0, .external_lex_state = 5},
  [90] = {.lex_state = 1, .external_lex_state = 7},
  [91] = {.lex_state = 0, .external_lex_state = 7},
  [92] = {.lex_state = 1, .external_lex_state = 7},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 1, .external_lex_state = 4},
  [95] = {.lex_state = 5, .external_lex_state = 4},
  [96] = {.lex_state = 0, .external_lex_state = 5},
  [97] = {.lex_state = 0, .external_lex_state = 5},
  [98] = {.lex_state = 0, .external_lex_state = 7},
  [99] = {.lex_state = 0, .external_lex_state = 5},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 5},
  [103] = {.lex_state = 0, .external_lex_state = 5},
  [104] = {.lex_state = 1, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 7},
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
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 0, .external_lex_state = 4},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0, .external_lex_state = 4},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0, .external_lex_state = 4},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0, .external_lex_state = 4},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 6, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 13, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 14, .external_lex_state = 4},
  [167] = {.lex_state = 15, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 1, .external_lex_state = 2},
  [173] = {.lex_state = 1, .external_lex_state = 2},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 9},
  [186] = {.lex_state = 9},
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
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 11},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 0, .external_lex_state = 8},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 11},
  [224] = {.lex_state = 0, .external_lex_state = 8},
  [225] = {.lex_state = 0, .external_lex_state = 8},
  [226] = {.lex_state = 0, .external_lex_state = 8},
  [227] = {.lex_state = 9, .external_lex_state = 8},
  [228] = {.lex_state = 9, .external_lex_state = 8},
  [229] = {.lex_state = 0, .external_lex_state = 8},
  [230] = {.lex_state = 9, .external_lex_state = 8},
  [231] = {.lex_state = 0, .external_lex_state = 8},
  [232] = {.lex_state = 0, .external_lex_state = 8},
  [233] = {.lex_state = 0, .external_lex_state = 8},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 0, .external_lex_state = 8},
  [236] = {.lex_state = 9, .external_lex_state = 8},
  [237] = {.lex_state = 9, .external_lex_state = 8},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 9, .external_lex_state = 8},
  [240] = {.lex_state = 9, .external_lex_state = 8},
  [241] = {.lex_state = 9, .external_lex_state = 8},
  [242] = {.lex_state = 11},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 9, .external_lex_state = 8},
  [246] = {.lex_state = 9, .external_lex_state = 8},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 16},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 12},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 239},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 239},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 18},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 91},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token_file_descriptor = 2,
  ts_external_token_repeat_number = 3,
  ts_external_token_interpreter_identifier = 4,
  ts_external_token__eq_sep_concat = 5,
  ts_external_token__concat = 6,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token_repeat_number] = sym_repeat_number,
  [ts_external_token_interpreter_identifier] = sym_interpreter_identifier,
  [ts_external_token__eq_sep_concat] = sym__eq_sep_concat,
  [ts_external_token__concat] = sym__concat,
};

static bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
    [ts_external_token_interpreter_identifier] = true,
    [ts_external_token__eq_sep_concat] = true,
    [ts_external_token__concat] = true,
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
    [ts_external_token__concat] = true,
  },
  [6] = {
    [ts_external_token_file_descriptor] = true,
    [ts_external_token__eq_sep_concat] = true,
    [ts_external_token__concat] = true,
  },
  [7] = {
    [ts_external_token_file_descriptor] = true,
    [ts_external_token__eq_sep_concat] = true,
  },
  [8] = {
    [ts_external_token__concat] = true,
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_ATa_COLON] = ACTIONS(1),
    [anon_sym_ATb_COLON] = ACTIONS(1),
    [anon_sym_ATB_COLON] = ACTIONS(1),
    [anon_sym_ATe_COLON] = ACTIONS(1),
    [anon_sym_ATF_COLON] = ACTIONS(1),
    [anon_sym_ATi_COLON] = ACTIONS(1),
    [anon_sym_ATk_COLON] = ACTIONS(1),
    [anon_sym_ATo_COLON] = ACTIONS(1),
    [anon_sym_ATr_COLON] = ACTIONS(1),
    [anon_sym_ATf_COLON] = ACTIONS(1),
    [anon_sym_ATs_COLON] = ACTIONS(1),
    [anon_sym_ATx_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_system_identifier] = ACTIONS(1),
    [sym_question_mark_identifier] = ACTIONS(1),
    [sym_pointer_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [sym_html_redirect_operator] = ACTIONS(1),
    [sym_html_append_operator] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_tmp_eval_arg_token1] = ACTIONS(1),
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
    [sym__concat] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(306),
    [sym__command] = STATE(255),
    [sym_legacy_quoted_command] = STATE(100),
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
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(100),
    [sym_arged_command] = STATE(100),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(100),
    [sym_redirect_command] = STATE(255),
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
    [sym_legacy_quoted_command] = STATE(148),
    [sym__simple_command] = STATE(148),
    [sym__tmp_command] = STATE(148),
    [sym__iter_command] = STATE(148),
    [sym__pipe_command] = STATE(148),
    [sym_grep_command] = STATE(148),
    [sym_html_disable_command] = STATE(148),
    [sym_html_enable_command] = STATE(148),
    [sym_scr_tts_command] = STATE(148),
    [sym_pipe_command] = STATE(148),
    [sym_iter_flags_command] = STATE(148),
    [sym_iter_dbta_command] = STATE(148),
    [sym_iter_dbtb_command] = STATE(148),
    [sym_iter_dbts_command] = STATE(148),
    [sym_iter_file_lines_command] = STATE(148),
    [sym_iter_offsets_command] = STATE(148),
    [sym_iter_sdbquery_command] = STATE(148),
    [sym_iter_threads_command] = STATE(148),
    [sym_iter_bbs_command] = STATE(148),
    [sym_iter_instrs_command] = STATE(148),
    [sym_iter_sections_command] = STATE(148),
    [sym_iter_functions_command] = STATE(148),
    [sym_iter_step_command] = STATE(148),
    [sym_iter_interpret_command] = STATE(148),
    [sym_tmp_seek_command] = STATE(148),
    [sym_tmp_blksz_command] = STATE(148),
    [sym_tmp_fromto_command] = STATE(148),
    [sym_tmp_arch_command] = STATE(148),
    [sym_tmp_bits_command] = STATE(148),
    [sym_tmp_nthi_command] = STATE(148),
    [sym_tmp_eval_command] = STATE(148),
    [sym_tmp_fs_command] = STATE(148),
    [sym_tmp_reli_command] = STATE(148),
    [sym_tmp_kuery_command] = STATE(148),
    [sym_tmp_fd_command] = STATE(148),
    [sym_tmp_reg_command] = STATE(148),
    [sym_tmp_file_command] = STATE(148),
    [sym_tmp_string_command] = STATE(148),
    [sym_tmp_hex_command] = STATE(148),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(148),
    [sym_arged_command] = STATE(148),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(148),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(148),
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
    [sym_legacy_quoted_command] = STATE(148),
    [sym__simple_command] = STATE(148),
    [sym__tmp_command] = STATE(148),
    [sym__iter_command] = STATE(148),
    [sym__pipe_command] = STATE(148),
    [sym_grep_command] = STATE(148),
    [sym_html_disable_command] = STATE(148),
    [sym_html_enable_command] = STATE(148),
    [sym_scr_tts_command] = STATE(148),
    [sym_pipe_command] = STATE(148),
    [sym_iter_flags_command] = STATE(148),
    [sym_iter_dbta_command] = STATE(148),
    [sym_iter_dbtb_command] = STATE(148),
    [sym_iter_dbts_command] = STATE(148),
    [sym_iter_file_lines_command] = STATE(148),
    [sym_iter_offsets_command] = STATE(148),
    [sym_iter_sdbquery_command] = STATE(148),
    [sym_iter_threads_command] = STATE(148),
    [sym_iter_bbs_command] = STATE(148),
    [sym_iter_instrs_command] = STATE(148),
    [sym_iter_sections_command] = STATE(148),
    [sym_iter_functions_command] = STATE(148),
    [sym_iter_step_command] = STATE(148),
    [sym_iter_interpret_command] = STATE(148),
    [sym_tmp_seek_command] = STATE(148),
    [sym_tmp_blksz_command] = STATE(148),
    [sym_tmp_fromto_command] = STATE(148),
    [sym_tmp_arch_command] = STATE(148),
    [sym_tmp_bits_command] = STATE(148),
    [sym_tmp_nthi_command] = STATE(148),
    [sym_tmp_eval_command] = STATE(148),
    [sym_tmp_fs_command] = STATE(148),
    [sym_tmp_reli_command] = STATE(148),
    [sym_tmp_kuery_command] = STATE(148),
    [sym_tmp_fd_command] = STATE(148),
    [sym_tmp_reg_command] = STATE(148),
    [sym_tmp_file_command] = STATE(148),
    [sym_tmp_string_command] = STATE(148),
    [sym_tmp_hex_command] = STATE(148),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(148),
    [sym_arged_command] = STATE(148),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(148),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(148),
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
    [anon_sym_RPAREN] = ACTIONS(43),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [4] = {
    [sym_legacy_quoted_command] = STATE(148),
    [sym__simple_command] = STATE(148),
    [sym__tmp_command] = STATE(148),
    [sym__iter_command] = STATE(148),
    [sym__pipe_command] = STATE(148),
    [sym_grep_command] = STATE(148),
    [sym_html_disable_command] = STATE(148),
    [sym_html_enable_command] = STATE(148),
    [sym_scr_tts_command] = STATE(148),
    [sym_pipe_command] = STATE(148),
    [sym_iter_flags_command] = STATE(148),
    [sym_iter_dbta_command] = STATE(148),
    [sym_iter_dbtb_command] = STATE(148),
    [sym_iter_dbts_command] = STATE(148),
    [sym_iter_file_lines_command] = STATE(148),
    [sym_iter_offsets_command] = STATE(148),
    [sym_iter_sdbquery_command] = STATE(148),
    [sym_iter_threads_command] = STATE(148),
    [sym_iter_bbs_command] = STATE(148),
    [sym_iter_instrs_command] = STATE(148),
    [sym_iter_sections_command] = STATE(148),
    [sym_iter_functions_command] = STATE(148),
    [sym_iter_step_command] = STATE(148),
    [sym_iter_interpret_command] = STATE(148),
    [sym_tmp_seek_command] = STATE(148),
    [sym_tmp_blksz_command] = STATE(148),
    [sym_tmp_fromto_command] = STATE(148),
    [sym_tmp_arch_command] = STATE(148),
    [sym_tmp_bits_command] = STATE(148),
    [sym_tmp_nthi_command] = STATE(148),
    [sym_tmp_eval_command] = STATE(148),
    [sym_tmp_fs_command] = STATE(148),
    [sym_tmp_reli_command] = STATE(148),
    [sym_tmp_kuery_command] = STATE(148),
    [sym_tmp_fd_command] = STATE(148),
    [sym_tmp_reg_command] = STATE(148),
    [sym_tmp_file_command] = STATE(148),
    [sym_tmp_string_command] = STATE(148),
    [sym_tmp_hex_command] = STATE(148),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(148),
    [sym_arged_command] = STATE(148),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(148),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(148),
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
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_PIPE_DOT] = ACTIONS(43),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [5] = {
    [sym__command] = STATE(251),
    [sym_legacy_quoted_command] = STATE(100),
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
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(100),
    [sym_arged_command] = STATE(100),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(100),
    [sym_redirect_command] = STATE(251),
    [aux_sym_commands_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(67),
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
    [anon_sym_LF] = ACTIONS(69),
    [anon_sym_CR] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(39),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [6] = {
    [sym__command] = STATE(265),
    [sym_legacy_quoted_command] = STATE(100),
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
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(100),
    [sym_arged_command] = STATE(100),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(100),
    [sym_redirect_command] = STATE(265),
    [ts_builtin_sym_end] = ACTIONS(71),
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
  [7] = {
    [sym__commands_singleline] = STATE(299),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__commands_singleline] = STATE(289),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [9] = {
    [sym__commands_singleline] = STATE(296),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [10] = {
    [sym__commands_singleline] = STATE(295),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [11] = {
    [sym__commands_singleline] = STATE(307),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [12] = {
    [sym__commands_singleline] = STATE(294),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [13] = {
    [sym__commands_singleline] = STATE(301),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [14] = {
    [sym__commands_singleline] = STATE(300),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [15] = {
    [sym__commands_singleline] = STATE(298),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [16] = {
    [sym__commands_singleline] = STATE(290),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [17] = {
    [sym__commands_singleline] = STATE(305),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [18] = {
    [sym__commands_singleline] = STATE(297),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [19] = {
    [sym__commands_singleline] = STATE(303),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(276),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [20] = {
    [sym__commands_singleline] = STATE(304),
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [21] = {
    [sym__command] = STATE(284),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(284),
    [aux_sym__commands_singleline_repeat1] = STATE(173),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [22] = {
    [sym__command] = STATE(277),
    [sym_legacy_quoted_command] = STATE(162),
    [sym__simple_command] = STATE(162),
    [sym__tmp_command] = STATE(162),
    [sym__iter_command] = STATE(162),
    [sym__pipe_command] = STATE(162),
    [sym_grep_command] = STATE(162),
    [sym_html_disable_command] = STATE(162),
    [sym_html_enable_command] = STATE(162),
    [sym_scr_tts_command] = STATE(162),
    [sym_pipe_command] = STATE(162),
    [sym_iter_flags_command] = STATE(162),
    [sym_iter_dbta_command] = STATE(162),
    [sym_iter_dbtb_command] = STATE(162),
    [sym_iter_dbts_command] = STATE(162),
    [sym_iter_file_lines_command] = STATE(162),
    [sym_iter_offsets_command] = STATE(162),
    [sym_iter_sdbquery_command] = STATE(162),
    [sym_iter_threads_command] = STATE(162),
    [sym_iter_bbs_command] = STATE(162),
    [sym_iter_instrs_command] = STATE(162),
    [sym_iter_sections_command] = STATE(162),
    [sym_iter_functions_command] = STATE(162),
    [sym_iter_step_command] = STATE(162),
    [sym_iter_interpret_command] = STATE(162),
    [sym_tmp_seek_command] = STATE(162),
    [sym_tmp_blksz_command] = STATE(162),
    [sym_tmp_fromto_command] = STATE(162),
    [sym_tmp_arch_command] = STATE(162),
    [sym_tmp_bits_command] = STATE(162),
    [sym_tmp_nthi_command] = STATE(162),
    [sym_tmp_eval_command] = STATE(162),
    [sym_tmp_fs_command] = STATE(162),
    [sym_tmp_reli_command] = STATE(162),
    [sym_tmp_kuery_command] = STATE(162),
    [sym_tmp_fd_command] = STATE(162),
    [sym_tmp_reg_command] = STATE(162),
    [sym_tmp_file_command] = STATE(162),
    [sym_tmp_string_command] = STATE(162),
    [sym_tmp_hex_command] = STATE(162),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(277),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(47),
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
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [23] = {
    [sym__command] = STATE(273),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(273),
    [aux_sym__commands_singleline_repeat1] = STATE(173),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [24] = {
    [sym__command] = STATE(277),
    [sym_legacy_quoted_command] = STATE(160),
    [sym__simple_command] = STATE(160),
    [sym__tmp_command] = STATE(160),
    [sym__iter_command] = STATE(160),
    [sym__pipe_command] = STATE(160),
    [sym_grep_command] = STATE(160),
    [sym_html_disable_command] = STATE(160),
    [sym_html_enable_command] = STATE(160),
    [sym_scr_tts_command] = STATE(160),
    [sym_pipe_command] = STATE(160),
    [sym_iter_flags_command] = STATE(160),
    [sym_iter_dbta_command] = STATE(160),
    [sym_iter_dbtb_command] = STATE(160),
    [sym_iter_dbts_command] = STATE(160),
    [sym_iter_file_lines_command] = STATE(160),
    [sym_iter_offsets_command] = STATE(160),
    [sym_iter_sdbquery_command] = STATE(160),
    [sym_iter_threads_command] = STATE(160),
    [sym_iter_bbs_command] = STATE(160),
    [sym_iter_instrs_command] = STATE(160),
    [sym_iter_sections_command] = STATE(160),
    [sym_iter_functions_command] = STATE(160),
    [sym_iter_step_command] = STATE(160),
    [sym_iter_interpret_command] = STATE(160),
    [sym_tmp_seek_command] = STATE(160),
    [sym_tmp_blksz_command] = STATE(160),
    [sym_tmp_fromto_command] = STATE(160),
    [sym_tmp_arch_command] = STATE(160),
    [sym_tmp_bits_command] = STATE(160),
    [sym_tmp_nthi_command] = STATE(160),
    [sym_tmp_eval_command] = STATE(160),
    [sym_tmp_fs_command] = STATE(160),
    [sym_tmp_reli_command] = STATE(160),
    [sym_tmp_kuery_command] = STATE(160),
    [sym_tmp_fd_command] = STATE(160),
    [sym_tmp_reg_command] = STATE(160),
    [sym_tmp_file_command] = STATE(160),
    [sym_tmp_string_command] = STATE(160),
    [sym_tmp_hex_command] = STATE(160),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(277),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [25] = {
    [sym_legacy_quoted_command] = STATE(168),
    [sym__simple_command] = STATE(168),
    [sym__tmp_command] = STATE(168),
    [sym__iter_command] = STATE(168),
    [sym__pipe_command] = STATE(168),
    [sym_grep_command] = STATE(168),
    [sym_html_disable_command] = STATE(168),
    [sym_html_enable_command] = STATE(168),
    [sym_scr_tts_command] = STATE(168),
    [sym_pipe_command] = STATE(168),
    [sym_iter_flags_command] = STATE(168),
    [sym_iter_dbta_command] = STATE(168),
    [sym_iter_dbtb_command] = STATE(168),
    [sym_iter_dbts_command] = STATE(168),
    [sym_iter_file_lines_command] = STATE(168),
    [sym_iter_offsets_command] = STATE(168),
    [sym_iter_sdbquery_command] = STATE(168),
    [sym_iter_threads_command] = STATE(168),
    [sym_iter_bbs_command] = STATE(168),
    [sym_iter_instrs_command] = STATE(168),
    [sym_iter_sections_command] = STATE(168),
    [sym_iter_functions_command] = STATE(168),
    [sym_iter_step_command] = STATE(168),
    [sym_iter_interpret_command] = STATE(168),
    [sym_tmp_seek_command] = STATE(168),
    [sym_tmp_blksz_command] = STATE(168),
    [sym_tmp_fromto_command] = STATE(168),
    [sym_tmp_arch_command] = STATE(168),
    [sym_tmp_bits_command] = STATE(168),
    [sym_tmp_nthi_command] = STATE(168),
    [sym_tmp_eval_command] = STATE(168),
    [sym_tmp_fs_command] = STATE(168),
    [sym_tmp_reli_command] = STATE(168),
    [sym_tmp_kuery_command] = STATE(168),
    [sym_tmp_fd_command] = STATE(168),
    [sym_tmp_reg_command] = STATE(168),
    [sym_tmp_file_command] = STATE(168),
    [sym_tmp_string_command] = STATE(168),
    [sym_tmp_hex_command] = STATE(168),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(168),
    [sym_arged_command] = STATE(168),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(168),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [26] = {
    [sym_legacy_quoted_command] = STATE(169),
    [sym__simple_command] = STATE(169),
    [sym__tmp_command] = STATE(169),
    [sym__iter_command] = STATE(169),
    [sym__pipe_command] = STATE(169),
    [sym_grep_command] = STATE(169),
    [sym_html_disable_command] = STATE(169),
    [sym_html_enable_command] = STATE(169),
    [sym_scr_tts_command] = STATE(169),
    [sym_pipe_command] = STATE(169),
    [sym_iter_flags_command] = STATE(169),
    [sym_iter_dbta_command] = STATE(169),
    [sym_iter_dbtb_command] = STATE(169),
    [sym_iter_dbts_command] = STATE(169),
    [sym_iter_file_lines_command] = STATE(169),
    [sym_iter_offsets_command] = STATE(169),
    [sym_iter_sdbquery_command] = STATE(169),
    [sym_iter_threads_command] = STATE(169),
    [sym_iter_bbs_command] = STATE(169),
    [sym_iter_instrs_command] = STATE(169),
    [sym_iter_sections_command] = STATE(169),
    [sym_iter_functions_command] = STATE(169),
    [sym_iter_step_command] = STATE(169),
    [sym_iter_interpret_command] = STATE(169),
    [sym_tmp_seek_command] = STATE(169),
    [sym_tmp_blksz_command] = STATE(169),
    [sym_tmp_fromto_command] = STATE(169),
    [sym_tmp_arch_command] = STATE(169),
    [sym_tmp_bits_command] = STATE(169),
    [sym_tmp_nthi_command] = STATE(169),
    [sym_tmp_eval_command] = STATE(169),
    [sym_tmp_fs_command] = STATE(169),
    [sym_tmp_reli_command] = STATE(169),
    [sym_tmp_kuery_command] = STATE(169),
    [sym_tmp_fd_command] = STATE(169),
    [sym_tmp_reg_command] = STATE(169),
    [sym_tmp_file_command] = STATE(169),
    [sym_tmp_string_command] = STATE(169),
    [sym_tmp_hex_command] = STATE(169),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(169),
    [sym_arged_command] = STATE(169),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(169),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(40),
    [sym_repeat_command] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(11),
    [anon_sym_DOT_LPAREN] = ACTIONS(13),
    [anon_sym_DOT_SLASH] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_env] = ACTIONS(17),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(19),
    [aux_sym__interpret_identifier_token1] = ACTIONS(21),
    [aux_sym__interpret_identifier_token2] = ACTIONS(23),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(57),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(59),
    [sym__help_command] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(63),
    [sym_interpreter_identifier] = ACTIONS(65),
  },
  [27] = {
    [sym_legacy_quoted_command] = STATE(165),
    [sym__simple_command] = STATE(165),
    [sym__tmp_command] = STATE(165),
    [sym__iter_command] = STATE(165),
    [sym__pipe_command] = STATE(165),
    [sym_grep_command] = STATE(165),
    [sym_html_disable_command] = STATE(165),
    [sym_html_enable_command] = STATE(165),
    [sym_scr_tts_command] = STATE(165),
    [sym_pipe_command] = STATE(165),
    [sym_iter_flags_command] = STATE(165),
    [sym_iter_dbta_command] = STATE(165),
    [sym_iter_dbtb_command] = STATE(165),
    [sym_iter_dbts_command] = STATE(165),
    [sym_iter_file_lines_command] = STATE(165),
    [sym_iter_offsets_command] = STATE(165),
    [sym_iter_sdbquery_command] = STATE(165),
    [sym_iter_threads_command] = STATE(165),
    [sym_iter_bbs_command] = STATE(165),
    [sym_iter_instrs_command] = STATE(165),
    [sym_iter_sections_command] = STATE(165),
    [sym_iter_functions_command] = STATE(165),
    [sym_iter_step_command] = STATE(165),
    [sym_iter_interpret_command] = STATE(165),
    [sym_tmp_seek_command] = STATE(165),
    [sym_tmp_blksz_command] = STATE(165),
    [sym_tmp_fromto_command] = STATE(165),
    [sym_tmp_arch_command] = STATE(165),
    [sym_tmp_bits_command] = STATE(165),
    [sym_tmp_nthi_command] = STATE(165),
    [sym_tmp_eval_command] = STATE(165),
    [sym_tmp_fs_command] = STATE(165),
    [sym_tmp_reli_command] = STATE(165),
    [sym_tmp_kuery_command] = STATE(165),
    [sym_tmp_fd_command] = STATE(165),
    [sym_tmp_reg_command] = STATE(165),
    [sym_tmp_file_command] = STATE(165),
    [sym_tmp_string_command] = STATE(165),
    [sym_tmp_hex_command] = STATE(165),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(165),
    [sym_arged_command] = STATE(165),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(165),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(165),
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
    [sym_legacy_quoted_command] = STATE(164),
    [sym__simple_command] = STATE(164),
    [sym__tmp_command] = STATE(164),
    [sym__iter_command] = STATE(164),
    [sym__pipe_command] = STATE(164),
    [sym_grep_command] = STATE(164),
    [sym_html_disable_command] = STATE(164),
    [sym_html_enable_command] = STATE(164),
    [sym_scr_tts_command] = STATE(164),
    [sym_pipe_command] = STATE(164),
    [sym_iter_flags_command] = STATE(164),
    [sym_iter_dbta_command] = STATE(164),
    [sym_iter_dbtb_command] = STATE(164),
    [sym_iter_dbts_command] = STATE(164),
    [sym_iter_file_lines_command] = STATE(164),
    [sym_iter_offsets_command] = STATE(164),
    [sym_iter_sdbquery_command] = STATE(164),
    [sym_iter_threads_command] = STATE(164),
    [sym_iter_bbs_command] = STATE(164),
    [sym_iter_instrs_command] = STATE(164),
    [sym_iter_sections_command] = STATE(164),
    [sym_iter_functions_command] = STATE(164),
    [sym_iter_step_command] = STATE(164),
    [sym_iter_interpret_command] = STATE(164),
    [sym_tmp_seek_command] = STATE(164),
    [sym_tmp_blksz_command] = STATE(164),
    [sym_tmp_fromto_command] = STATE(164),
    [sym_tmp_arch_command] = STATE(164),
    [sym_tmp_bits_command] = STATE(164),
    [sym_tmp_nthi_command] = STATE(164),
    [sym_tmp_eval_command] = STATE(164),
    [sym_tmp_fs_command] = STATE(164),
    [sym_tmp_reli_command] = STATE(164),
    [sym_tmp_kuery_command] = STATE(164),
    [sym_tmp_fd_command] = STATE(164),
    [sym_tmp_reg_command] = STATE(164),
    [sym_tmp_file_command] = STATE(164),
    [sym_tmp_string_command] = STATE(164),
    [sym_tmp_hex_command] = STATE(164),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(164),
    [sym_arged_command] = STATE(164),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(164),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(164),
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
  [29] = {
    [sym_legacy_quoted_command] = STATE(170),
    [sym__simple_command] = STATE(170),
    [sym__tmp_command] = STATE(170),
    [sym__iter_command] = STATE(170),
    [sym__pipe_command] = STATE(170),
    [sym_grep_command] = STATE(170),
    [sym_html_disable_command] = STATE(170),
    [sym_html_enable_command] = STATE(170),
    [sym_scr_tts_command] = STATE(170),
    [sym_pipe_command] = STATE(170),
    [sym_iter_flags_command] = STATE(170),
    [sym_iter_dbta_command] = STATE(170),
    [sym_iter_dbtb_command] = STATE(170),
    [sym_iter_dbts_command] = STATE(170),
    [sym_iter_file_lines_command] = STATE(170),
    [sym_iter_offsets_command] = STATE(170),
    [sym_iter_sdbquery_command] = STATE(170),
    [sym_iter_threads_command] = STATE(170),
    [sym_iter_bbs_command] = STATE(170),
    [sym_iter_instrs_command] = STATE(170),
    [sym_iter_sections_command] = STATE(170),
    [sym_iter_functions_command] = STATE(170),
    [sym_iter_step_command] = STATE(170),
    [sym_iter_interpret_command] = STATE(170),
    [sym_tmp_seek_command] = STATE(170),
    [sym_tmp_blksz_command] = STATE(170),
    [sym_tmp_fromto_command] = STATE(170),
    [sym_tmp_arch_command] = STATE(170),
    [sym_tmp_bits_command] = STATE(170),
    [sym_tmp_nthi_command] = STATE(170),
    [sym_tmp_eval_command] = STATE(170),
    [sym_tmp_fs_command] = STATE(170),
    [sym_tmp_reli_command] = STATE(170),
    [sym_tmp_kuery_command] = STATE(170),
    [sym_tmp_fd_command] = STATE(170),
    [sym_tmp_reg_command] = STATE(170),
    [sym_tmp_file_command] = STATE(170),
    [sym_tmp_string_command] = STATE(170),
    [sym_tmp_hex_command] = STATE(170),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(170),
    [sym_arged_command] = STATE(170),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(170),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(170),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [30] = {
    [sym_legacy_quoted_command] = STATE(171),
    [sym__simple_command] = STATE(171),
    [sym__tmp_command] = STATE(171),
    [sym__iter_command] = STATE(171),
    [sym__pipe_command] = STATE(171),
    [sym_grep_command] = STATE(171),
    [sym_html_disable_command] = STATE(171),
    [sym_html_enable_command] = STATE(171),
    [sym_scr_tts_command] = STATE(171),
    [sym_pipe_command] = STATE(171),
    [sym_iter_flags_command] = STATE(171),
    [sym_iter_dbta_command] = STATE(171),
    [sym_iter_dbtb_command] = STATE(171),
    [sym_iter_dbts_command] = STATE(171),
    [sym_iter_file_lines_command] = STATE(171),
    [sym_iter_offsets_command] = STATE(171),
    [sym_iter_sdbquery_command] = STATE(171),
    [sym_iter_threads_command] = STATE(171),
    [sym_iter_bbs_command] = STATE(171),
    [sym_iter_instrs_command] = STATE(171),
    [sym_iter_sections_command] = STATE(171),
    [sym_iter_functions_command] = STATE(171),
    [sym_iter_step_command] = STATE(171),
    [sym_iter_interpret_command] = STATE(171),
    [sym_tmp_seek_command] = STATE(171),
    [sym_tmp_blksz_command] = STATE(171),
    [sym_tmp_fromto_command] = STATE(171),
    [sym_tmp_arch_command] = STATE(171),
    [sym_tmp_bits_command] = STATE(171),
    [sym_tmp_nthi_command] = STATE(171),
    [sym_tmp_eval_command] = STATE(171),
    [sym_tmp_fs_command] = STATE(171),
    [sym_tmp_reli_command] = STATE(171),
    [sym_tmp_kuery_command] = STATE(171),
    [sym_tmp_fd_command] = STATE(171),
    [sym_tmp_reg_command] = STATE(171),
    [sym_tmp_file_command] = STATE(171),
    [sym_tmp_string_command] = STATE(171),
    [sym_tmp_hex_command] = STATE(171),
    [sym__interpreter_command] = STATE(132),
    [sym_help_command] = STATE(171),
    [sym_arged_command] = STATE(171),
    [sym__simple_arged_command] = STATE(132),
    [sym__math_arged_command] = STATE(132),
    [sym__pointer_arged_command] = STATE(132),
    [sym__macro_arged_command] = STATE(132),
    [sym__system_command] = STATE(132),
    [sym__interpret_command] = STATE(132),
    [sym__interpret_search_identifier] = STATE(175),
    [sym__env_command] = STATE(132),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(171),
    [sym_last_command_identifier] = STATE(136),
    [sym__interpret_identifier] = STATE(32),
    [sym_repeat_command] = STATE(171),
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
    [sym_system_identifier] = ACTIONS(25),
    [sym_question_mark_identifier] = ACTIONS(27),
    [sym_pointer_identifier] = ACTIONS(29),
    [sym_macro_identifier] = ACTIONS(49),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [31] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(81),
    [anon_sym_PIPET] = ACTIONS(81),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(81),
    [anon_sym_AT_ATdbtb] = ACTIONS(81),
    [anon_sym_AT_ATdbts] = ACTIONS(81),
    [anon_sym_AT_AT_DOT] = ACTIONS(81),
    [anon_sym_AT_AT_EQ] = ACTIONS(81),
    [anon_sym_AT_ATk] = ACTIONS(81),
    [anon_sym_AT_ATt] = ACTIONS(81),
    [anon_sym_AT_ATb] = ACTIONS(81),
    [anon_sym_AT_ATi] = ACTIONS(85),
    [anon_sym_AT_ATiS] = ACTIONS(81),
    [anon_sym_AT_ATf] = ACTIONS(81),
    [anon_sym_AT_ATs_COLON] = ACTIONS(81),
    [anon_sym_AT_ATc_COLON] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(81),
    [anon_sym_AT_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_ATa_COLON] = ACTIONS(81),
    [anon_sym_ATb_COLON] = ACTIONS(81),
    [anon_sym_ATB_COLON] = ACTIONS(81),
    [anon_sym_ATe_COLON] = ACTIONS(81),
    [anon_sym_ATF_COLON] = ACTIONS(81),
    [anon_sym_ATi_COLON] = ACTIONS(81),
    [anon_sym_ATk_COLON] = ACTIONS(81),
    [anon_sym_ATo_COLON] = ACTIONS(81),
    [anon_sym_ATr_COLON] = ACTIONS(81),
    [anon_sym_ATf_COLON] = ACTIONS(81),
    [anon_sym_ATs_COLON] = ACTIONS(81),
    [anon_sym_ATx_COLON] = ACTIONS(81),
    [anon_sym_PIPE_DOT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(81),
    [sym_html_redirect_operator] = ACTIONS(85),
    [sym_html_append_operator] = ACTIONS(81),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_CR] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_file_descriptor] = ACTIONS(81),
  },
  [32] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(152),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(97),
    [anon_sym_PIPET] = ACTIONS(97),
    [anon_sym_AT_AT] = ACTIONS(99),
    [anon_sym_AT_ATdbt] = ACTIONS(99),
    [anon_sym_AT_ATdbta] = ACTIONS(97),
    [anon_sym_AT_ATdbtb] = ACTIONS(97),
    [anon_sym_AT_ATdbts] = ACTIONS(97),
    [anon_sym_AT_AT_DOT] = ACTIONS(97),
    [anon_sym_AT_AT_EQ] = ACTIONS(97),
    [anon_sym_AT_ATk] = ACTIONS(97),
    [anon_sym_AT_ATt] = ACTIONS(97),
    [anon_sym_AT_ATb] = ACTIONS(97),
    [anon_sym_AT_ATi] = ACTIONS(99),
    [anon_sym_AT_ATiS] = ACTIONS(97),
    [anon_sym_AT_ATf] = ACTIONS(97),
    [anon_sym_AT_ATs_COLON] = ACTIONS(97),
    [anon_sym_AT_ATc_COLON] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(99),
    [anon_sym_AT_BANG] = ACTIONS(97),
    [anon_sym_AT_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
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
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(97),
    [sym_html_redirect_operator] = ACTIONS(99),
    [sym_html_append_operator] = ACTIONS(97),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(97),
  },
  [33] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(145),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPEH] = ACTIONS(101),
    [anon_sym_PIPET] = ACTIONS(101),
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(103),
    [anon_sym_AT_ATdbta] = ACTIONS(101),
    [anon_sym_AT_ATdbtb] = ACTIONS(101),
    [anon_sym_AT_ATdbts] = ACTIONS(101),
    [anon_sym_AT_AT_DOT] = ACTIONS(101),
    [anon_sym_AT_AT_EQ] = ACTIONS(101),
    [anon_sym_AT_ATk] = ACTIONS(101),
    [anon_sym_AT_ATt] = ACTIONS(101),
    [anon_sym_AT_ATb] = ACTIONS(101),
    [anon_sym_AT_ATi] = ACTIONS(103),
    [anon_sym_AT_ATiS] = ACTIONS(101),
    [anon_sym_AT_ATf] = ACTIONS(101),
    [anon_sym_AT_ATs_COLON] = ACTIONS(101),
    [anon_sym_AT_ATc_COLON] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_AT_BANG] = ACTIONS(101),
    [anon_sym_AT_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_ATa_COLON] = ACTIONS(101),
    [anon_sym_ATb_COLON] = ACTIONS(101),
    [anon_sym_ATB_COLON] = ACTIONS(101),
    [anon_sym_ATe_COLON] = ACTIONS(101),
    [anon_sym_ATF_COLON] = ACTIONS(101),
    [anon_sym_ATi_COLON] = ACTIONS(101),
    [anon_sym_ATk_COLON] = ACTIONS(101),
    [anon_sym_ATo_COLON] = ACTIONS(101),
    [anon_sym_ATr_COLON] = ACTIONS(101),
    [anon_sym_ATf_COLON] = ACTIONS(101),
    [anon_sym_ATs_COLON] = ACTIONS(101),
    [anon_sym_ATx_COLON] = ACTIONS(101),
    [anon_sym_PIPE_DOT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(101),
    [sym_html_redirect_operator] = ACTIONS(103),
    [sym_html_append_operator] = ACTIONS(101),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_CR] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_file_descriptor] = ACTIONS(101),
  },
  [34] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(143),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(83),
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
    [anon_sym_RPAREN] = ACTIONS(105),
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
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(105),
    [sym_html_redirect_operator] = ACTIONS(107),
    [sym_html_append_operator] = ACTIONS(105),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_CR] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [35] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(156),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(81),
    [anon_sym_PIPET] = ACTIONS(81),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(81),
    [anon_sym_AT_ATdbtb] = ACTIONS(81),
    [anon_sym_AT_ATdbts] = ACTIONS(81),
    [anon_sym_AT_AT_DOT] = ACTIONS(81),
    [anon_sym_AT_AT_EQ] = ACTIONS(81),
    [anon_sym_AT_ATk] = ACTIONS(81),
    [anon_sym_AT_ATt] = ACTIONS(81),
    [anon_sym_AT_ATb] = ACTIONS(81),
    [anon_sym_AT_ATi] = ACTIONS(85),
    [anon_sym_AT_ATiS] = ACTIONS(81),
    [anon_sym_AT_ATf] = ACTIONS(81),
    [anon_sym_AT_ATs_COLON] = ACTIONS(81),
    [anon_sym_AT_ATc_COLON] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(81),
    [anon_sym_AT_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_ATa_COLON] = ACTIONS(81),
    [anon_sym_ATb_COLON] = ACTIONS(81),
    [anon_sym_ATB_COLON] = ACTIONS(81),
    [anon_sym_ATe_COLON] = ACTIONS(81),
    [anon_sym_ATF_COLON] = ACTIONS(81),
    [anon_sym_ATi_COLON] = ACTIONS(81),
    [anon_sym_ATk_COLON] = ACTIONS(81),
    [anon_sym_ATo_COLON] = ACTIONS(81),
    [anon_sym_ATr_COLON] = ACTIONS(81),
    [anon_sym_ATf_COLON] = ACTIONS(81),
    [anon_sym_ATs_COLON] = ACTIONS(81),
    [anon_sym_ATx_COLON] = ACTIONS(81),
    [anon_sym_PIPE_DOT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(81),
    [sym_html_redirect_operator] = ACTIONS(85),
    [sym_html_append_operator] = ACTIONS(81),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_CR] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_file_descriptor] = ACTIONS(81),
  },
  [36] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(157),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(83),
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
    [anon_sym_RPAREN] = ACTIONS(109),
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
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(109),
    [sym_html_redirect_operator] = ACTIONS(111),
    [sym_html_append_operator] = ACTIONS(109),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(109),
  },
  [37] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(83),
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
    [anon_sym_RPAREN] = ACTIONS(113),
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
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(113),
    [anon_sym_CR] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [38] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_PIPEH] = ACTIONS(117),
    [anon_sym_PIPET] = ACTIONS(117),
    [anon_sym_AT_AT] = ACTIONS(122),
    [anon_sym_AT_ATdbt] = ACTIONS(122),
    [anon_sym_AT_ATdbta] = ACTIONS(117),
    [anon_sym_AT_ATdbtb] = ACTIONS(117),
    [anon_sym_AT_ATdbts] = ACTIONS(117),
    [anon_sym_AT_AT_DOT] = ACTIONS(117),
    [anon_sym_AT_AT_EQ] = ACTIONS(117),
    [anon_sym_AT_ATk] = ACTIONS(117),
    [anon_sym_AT_ATt] = ACTIONS(117),
    [anon_sym_AT_ATb] = ACTIONS(117),
    [anon_sym_AT_ATi] = ACTIONS(122),
    [anon_sym_AT_ATiS] = ACTIONS(117),
    [anon_sym_AT_ATf] = ACTIONS(117),
    [anon_sym_AT_ATs_COLON] = ACTIONS(117),
    [anon_sym_AT_ATc_COLON] = ACTIONS(117),
    [anon_sym_AT] = ACTIONS(122),
    [anon_sym_AT_BANG] = ACTIONS(117),
    [anon_sym_AT_LPAREN] = ACTIONS(117),
    [anon_sym_RPAREN] = ACTIONS(117),
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
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(117),
    [sym_html_redirect_operator] = ACTIONS(122),
    [sym_html_append_operator] = ACTIONS(117),
    [sym_arg_identifier] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(130),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_CR] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [sym_file_descriptor] = ACTIONS(117),
  },
  [39] = {
    [sym_eq_sep_args] = STATE(111),
    [sym__eq_sep_key_single] = STATE(67),
    [sym_eq_sep_key] = STATE(104),
    [sym_double_quoted_arg] = STATE(90),
    [sym_single_quoted_arg] = STATE(90),
    [sym_cmd_substitution_arg] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(136),
    [anon_sym_PIPET] = ACTIONS(136),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(136),
    [anon_sym_AT_ATdbtb] = ACTIONS(136),
    [anon_sym_AT_ATdbts] = ACTIONS(136),
    [anon_sym_AT_AT_DOT] = ACTIONS(136),
    [anon_sym_AT_AT_EQ] = ACTIONS(136),
    [anon_sym_AT_ATk] = ACTIONS(136),
    [anon_sym_AT_ATt] = ACTIONS(136),
    [anon_sym_AT_ATb] = ACTIONS(136),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(136),
    [anon_sym_AT_ATf] = ACTIONS(136),
    [anon_sym_AT_ATs_COLON] = ACTIONS(136),
    [anon_sym_AT_ATc_COLON] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(140),
    [anon_sym_AT_BANG] = ACTIONS(136),
    [anon_sym_AT_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
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
    [anon_sym_PIPE_DOT] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(136),
    [sym_html_redirect_operator] = ACTIONS(140),
    [sym_html_append_operator] = ACTIONS(136),
    [sym__eq_sep_key_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(136),
    [anon_sym_CR] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_file_descriptor] = ACTIONS(136),
  },
  [40] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(152),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(99),
    [anon_sym_PIPEH] = ACTIONS(97),
    [anon_sym_PIPET] = ACTIONS(97),
    [anon_sym_AT_AT] = ACTIONS(99),
    [anon_sym_AT_ATdbt] = ACTIONS(99),
    [anon_sym_AT_ATdbta] = ACTIONS(97),
    [anon_sym_AT_ATdbtb] = ACTIONS(97),
    [anon_sym_AT_ATdbts] = ACTIONS(97),
    [anon_sym_AT_AT_DOT] = ACTIONS(97),
    [anon_sym_AT_AT_EQ] = ACTIONS(97),
    [anon_sym_AT_ATk] = ACTIONS(97),
    [anon_sym_AT_ATt] = ACTIONS(97),
    [anon_sym_AT_ATb] = ACTIONS(97),
    [anon_sym_AT_ATi] = ACTIONS(99),
    [anon_sym_AT_ATiS] = ACTIONS(97),
    [anon_sym_AT_ATf] = ACTIONS(97),
    [anon_sym_AT_ATs_COLON] = ACTIONS(97),
    [anon_sym_AT_ATc_COLON] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(99),
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
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(97),
    [sym_html_redirect_operator] = ACTIONS(99),
    [sym_html_append_operator] = ACTIONS(97),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(97),
  },
  [41] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(157),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
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
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(109),
    [sym_html_redirect_operator] = ACTIONS(111),
    [sym_html_append_operator] = ACTIONS(109),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(109),
  },
  [42] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(81),
    [anon_sym_PIPET] = ACTIONS(81),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(81),
    [anon_sym_AT_ATdbtb] = ACTIONS(81),
    [anon_sym_AT_ATdbts] = ACTIONS(81),
    [anon_sym_AT_AT_DOT] = ACTIONS(81),
    [anon_sym_AT_AT_EQ] = ACTIONS(81),
    [anon_sym_AT_ATk] = ACTIONS(81),
    [anon_sym_AT_ATt] = ACTIONS(81),
    [anon_sym_AT_ATb] = ACTIONS(81),
    [anon_sym_AT_ATi] = ACTIONS(85),
    [anon_sym_AT_ATiS] = ACTIONS(81),
    [anon_sym_AT_ATf] = ACTIONS(81),
    [anon_sym_AT_ATs_COLON] = ACTIONS(81),
    [anon_sym_AT_ATc_COLON] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(81),
    [anon_sym_AT_LPAREN] = ACTIONS(81),
    [anon_sym_ATa_COLON] = ACTIONS(81),
    [anon_sym_ATb_COLON] = ACTIONS(81),
    [anon_sym_ATB_COLON] = ACTIONS(81),
    [anon_sym_ATe_COLON] = ACTIONS(81),
    [anon_sym_ATF_COLON] = ACTIONS(81),
    [anon_sym_ATi_COLON] = ACTIONS(81),
    [anon_sym_ATk_COLON] = ACTIONS(81),
    [anon_sym_ATo_COLON] = ACTIONS(81),
    [anon_sym_ATr_COLON] = ACTIONS(81),
    [anon_sym_ATf_COLON] = ACTIONS(81),
    [anon_sym_ATs_COLON] = ACTIONS(81),
    [anon_sym_ATx_COLON] = ACTIONS(81),
    [anon_sym_PIPE_DOT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(81),
    [sym_html_redirect_operator] = ACTIONS(85),
    [sym_html_append_operator] = ACTIONS(81),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_file_descriptor] = ACTIONS(81),
  },
  [43] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(156),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(85),
    [anon_sym_PIPEH] = ACTIONS(81),
    [anon_sym_PIPET] = ACTIONS(81),
    [anon_sym_AT_AT] = ACTIONS(85),
    [anon_sym_AT_ATdbt] = ACTIONS(85),
    [anon_sym_AT_ATdbta] = ACTIONS(81),
    [anon_sym_AT_ATdbtb] = ACTIONS(81),
    [anon_sym_AT_ATdbts] = ACTIONS(81),
    [anon_sym_AT_AT_DOT] = ACTIONS(81),
    [anon_sym_AT_AT_EQ] = ACTIONS(81),
    [anon_sym_AT_ATk] = ACTIONS(81),
    [anon_sym_AT_ATt] = ACTIONS(81),
    [anon_sym_AT_ATb] = ACTIONS(81),
    [anon_sym_AT_ATi] = ACTIONS(85),
    [anon_sym_AT_ATiS] = ACTIONS(81),
    [anon_sym_AT_ATf] = ACTIONS(81),
    [anon_sym_AT_ATs_COLON] = ACTIONS(81),
    [anon_sym_AT_ATc_COLON] = ACTIONS(81),
    [anon_sym_AT] = ACTIONS(85),
    [anon_sym_AT_BANG] = ACTIONS(81),
    [anon_sym_AT_LPAREN] = ACTIONS(81),
    [anon_sym_ATa_COLON] = ACTIONS(81),
    [anon_sym_ATb_COLON] = ACTIONS(81),
    [anon_sym_ATB_COLON] = ACTIONS(81),
    [anon_sym_ATe_COLON] = ACTIONS(81),
    [anon_sym_ATF_COLON] = ACTIONS(81),
    [anon_sym_ATi_COLON] = ACTIONS(81),
    [anon_sym_ATk_COLON] = ACTIONS(81),
    [anon_sym_ATo_COLON] = ACTIONS(81),
    [anon_sym_ATr_COLON] = ACTIONS(81),
    [anon_sym_ATf_COLON] = ACTIONS(81),
    [anon_sym_ATs_COLON] = ACTIONS(81),
    [anon_sym_ATx_COLON] = ACTIONS(81),
    [anon_sym_PIPE_DOT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_GT_GT] = ACTIONS(81),
    [sym_html_redirect_operator] = ACTIONS(85),
    [sym_html_append_operator] = ACTIONS(81),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_file_descriptor] = ACTIONS(81),
  },
  [44] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(143),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
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
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_GT_GT] = ACTIONS(105),
    [sym_html_redirect_operator] = ACTIONS(107),
    [sym_html_append_operator] = ACTIONS(105),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [45] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(145),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_TILDE] = ACTIONS(101),
    [anon_sym_PIPE] = ACTIONS(103),
    [anon_sym_PIPEH] = ACTIONS(101),
    [anon_sym_PIPET] = ACTIONS(101),
    [anon_sym_AT_AT] = ACTIONS(103),
    [anon_sym_AT_ATdbt] = ACTIONS(103),
    [anon_sym_AT_ATdbta] = ACTIONS(101),
    [anon_sym_AT_ATdbtb] = ACTIONS(101),
    [anon_sym_AT_ATdbts] = ACTIONS(101),
    [anon_sym_AT_AT_DOT] = ACTIONS(101),
    [anon_sym_AT_AT_EQ] = ACTIONS(101),
    [anon_sym_AT_ATk] = ACTIONS(101),
    [anon_sym_AT_ATt] = ACTIONS(101),
    [anon_sym_AT_ATb] = ACTIONS(101),
    [anon_sym_AT_ATi] = ACTIONS(103),
    [anon_sym_AT_ATiS] = ACTIONS(101),
    [anon_sym_AT_ATf] = ACTIONS(101),
    [anon_sym_AT_ATs_COLON] = ACTIONS(101),
    [anon_sym_AT_ATc_COLON] = ACTIONS(101),
    [anon_sym_AT] = ACTIONS(103),
    [anon_sym_AT_BANG] = ACTIONS(101),
    [anon_sym_AT_LPAREN] = ACTIONS(101),
    [anon_sym_ATa_COLON] = ACTIONS(101),
    [anon_sym_ATb_COLON] = ACTIONS(101),
    [anon_sym_ATB_COLON] = ACTIONS(101),
    [anon_sym_ATe_COLON] = ACTIONS(101),
    [anon_sym_ATF_COLON] = ACTIONS(101),
    [anon_sym_ATi_COLON] = ACTIONS(101),
    [anon_sym_ATk_COLON] = ACTIONS(101),
    [anon_sym_ATo_COLON] = ACTIONS(101),
    [anon_sym_ATr_COLON] = ACTIONS(101),
    [anon_sym_ATf_COLON] = ACTIONS(101),
    [anon_sym_ATs_COLON] = ACTIONS(101),
    [anon_sym_ATx_COLON] = ACTIONS(101),
    [anon_sym_PIPE_DOT] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(101),
    [sym_html_redirect_operator] = ACTIONS(103),
    [sym_html_append_operator] = ACTIONS(101),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_file_descriptor] = ACTIONS(101),
  },
  [46] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(83),
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
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [47] = {
    [aux_sym_concatenation_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
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
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(150),
    [sym_arg_identifier] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_file_descriptor] = ACTIONS(150),
    [sym__concat] = ACTIONS(154),
  },
  [48] = {
    [sym_eq_sep_args] = STATE(111),
    [sym__eq_sep_key_single] = STATE(67),
    [sym_eq_sep_key] = STATE(104),
    [sym_double_quoted_arg] = STATE(90),
    [sym_single_quoted_arg] = STATE(90),
    [sym_cmd_substitution_arg] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(136),
    [anon_sym_PIPET] = ACTIONS(136),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(136),
    [anon_sym_AT_ATdbtb] = ACTIONS(136),
    [anon_sym_AT_ATdbts] = ACTIONS(136),
    [anon_sym_AT_AT_DOT] = ACTIONS(136),
    [anon_sym_AT_AT_EQ] = ACTIONS(136),
    [anon_sym_AT_ATk] = ACTIONS(136),
    [anon_sym_AT_ATt] = ACTIONS(136),
    [anon_sym_AT_ATb] = ACTIONS(136),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(136),
    [anon_sym_AT_ATf] = ACTIONS(136),
    [anon_sym_AT_ATs_COLON] = ACTIONS(136),
    [anon_sym_AT_ATc_COLON] = ACTIONS(136),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_PIPE_DOT] = ACTIONS(136),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(136),
    [sym_html_redirect_operator] = ACTIONS(140),
    [sym_html_append_operator] = ACTIONS(136),
    [sym__eq_sep_key_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(136),
    [sym_file_descriptor] = ACTIONS(136),
  },
  [49] = {
    [aux_sym_concatenation_repeat1] = STATE(49),
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
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
    [sym__concat] = ACTIONS(160),
  },
  [50] = {
    [aux_sym_concatenation_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
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
    [anon_sym_RPAREN] = ACTIONS(163),
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
    [anon_sym_GT_GT] = ACTIONS(163),
    [sym_html_redirect_operator] = ACTIONS(165),
    [sym_html_append_operator] = ACTIONS(163),
    [sym_arg_identifier] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_CR] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [sym_file_descriptor] = ACTIONS(163),
    [sym__concat] = ACTIONS(154),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [sym_arg_identifier] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [52] = {
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
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
    [sym__concat] = ACTIONS(156),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [sym_arg_identifier] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
    [anon_sym_GT_GT] = ACTIONS(171),
    [sym_html_redirect_operator] = ACTIONS(173),
    [sym_html_append_operator] = ACTIONS(171),
    [sym_arg_identifier] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym__concat] = ACTIONS(171),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(175),
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
    [anon_sym_RPAREN] = ACTIONS(175),
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
    [anon_sym_GT_GT] = ACTIONS(175),
    [sym_html_redirect_operator] = ACTIONS(177),
    [sym_html_append_operator] = ACTIONS(175),
    [sym_arg_identifier] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_file_descriptor] = ACTIONS(175),
    [sym__concat] = ACTIONS(175),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
    [anon_sym_GT_GT] = ACTIONS(179),
    [sym_html_redirect_operator] = ACTIONS(181),
    [sym_html_append_operator] = ACTIONS(179),
    [sym_arg_identifier] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym__concat] = ACTIONS(179),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
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
    [anon_sym_RPAREN] = ACTIONS(183),
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
    [anon_sym_GT_GT] = ACTIONS(183),
    [sym_html_redirect_operator] = ACTIONS(185),
    [sym_html_append_operator] = ACTIONS(183),
    [sym_arg_identifier] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_file_descriptor] = ACTIONS(183),
    [sym__concat] = ACTIONS(183),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(187),
    [anon_sym_TILDE] = ACTIONS(187),
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
    [anon_sym_RPAREN] = ACTIONS(187),
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
    [anon_sym_GT_GT] = ACTIONS(187),
    [sym_html_redirect_operator] = ACTIONS(189),
    [sym_html_append_operator] = ACTIONS(187),
    [sym__eq_sep_key_identifier] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
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
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(150),
    [sym_arg_identifier] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_file_descriptor] = ACTIONS(150),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(191),
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
    [anon_sym_RPAREN] = ACTIONS(191),
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
    [anon_sym_GT_GT] = ACTIONS(191),
    [sym_html_redirect_operator] = ACTIONS(193),
    [sym_html_append_operator] = ACTIONS(191),
    [sym_arg_identifier] = ACTIONS(193),
    [anon_sym_SQUOTE] = ACTIONS(191),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
    [sym_file_descriptor] = ACTIONS(191),
  },
  [61] = {
    [aux_sym_concatenation_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
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
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_file_descriptor] = ACTIONS(150),
    [sym__eq_sep_concat] = ACTIONS(150),
    [sym__concat] = ACTIONS(195),
  },
  [62] = {
    [aux_sym_tmp_eval_arg_repeat1] = STATE(62),
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
    [anon_sym_RPAREN] = ACTIONS(197),
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
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(197),
    [sym_html_redirect_operator] = ACTIONS(199),
    [sym_html_append_operator] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [aux_sym_tmp_eval_arg_token1] = ACTIONS(201),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(197),
  },
  [63] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_PIPEH] = ACTIONS(204),
    [anon_sym_PIPET] = ACTIONS(204),
    [anon_sym_AT_AT] = ACTIONS(206),
    [anon_sym_AT_ATdbt] = ACTIONS(206),
    [anon_sym_AT_ATdbta] = ACTIONS(204),
    [anon_sym_AT_ATdbtb] = ACTIONS(204),
    [anon_sym_AT_ATdbts] = ACTIONS(204),
    [anon_sym_AT_AT_DOT] = ACTIONS(204),
    [anon_sym_AT_AT_EQ] = ACTIONS(204),
    [anon_sym_AT_ATk] = ACTIONS(204),
    [anon_sym_AT_ATt] = ACTIONS(204),
    [anon_sym_AT_ATb] = ACTIONS(204),
    [anon_sym_AT_ATi] = ACTIONS(206),
    [anon_sym_AT_ATiS] = ACTIONS(204),
    [anon_sym_AT_ATf] = ACTIONS(204),
    [anon_sym_AT_ATs_COLON] = ACTIONS(204),
    [anon_sym_AT_ATc_COLON] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_AT_BANG] = ACTIONS(204),
    [anon_sym_AT_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_ATa_COLON] = ACTIONS(204),
    [anon_sym_ATb_COLON] = ACTIONS(204),
    [anon_sym_ATB_COLON] = ACTIONS(204),
    [anon_sym_ATe_COLON] = ACTIONS(204),
    [anon_sym_ATF_COLON] = ACTIONS(204),
    [anon_sym_ATi_COLON] = ACTIONS(204),
    [anon_sym_ATk_COLON] = ACTIONS(204),
    [anon_sym_ATo_COLON] = ACTIONS(204),
    [anon_sym_ATr_COLON] = ACTIONS(204),
    [anon_sym_ATf_COLON] = ACTIONS(204),
    [anon_sym_ATs_COLON] = ACTIONS(204),
    [anon_sym_ATx_COLON] = ACTIONS(204),
    [anon_sym_PIPE_DOT] = ACTIONS(204),
    [anon_sym_EQ] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_GT_GT] = ACTIONS(204),
    [sym_html_redirect_operator] = ACTIONS(206),
    [sym_html_append_operator] = ACTIONS(204),
    [anon_sym_BQUOTE] = ACTIONS(204),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(204),
    [anon_sym_CR] = ACTIONS(204),
    [anon_sym_SEMI] = ACTIONS(204),
    [sym_file_descriptor] = ACTIONS(204),
    [sym__eq_sep_concat] = ACTIONS(208),
  },
  [64] = {
    [aux_sym_tmp_eval_arg_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(210),
    [anon_sym_TILDE] = ACTIONS(210),
    [anon_sym_PIPE] = ACTIONS(212),
    [anon_sym_PIPEH] = ACTIONS(210),
    [anon_sym_PIPET] = ACTIONS(210),
    [anon_sym_AT_AT] = ACTIONS(212),
    [anon_sym_AT_ATdbt] = ACTIONS(212),
    [anon_sym_AT_ATdbta] = ACTIONS(210),
    [anon_sym_AT_ATdbtb] = ACTIONS(210),
    [anon_sym_AT_ATdbts] = ACTIONS(210),
    [anon_sym_AT_AT_DOT] = ACTIONS(210),
    [anon_sym_AT_AT_EQ] = ACTIONS(210),
    [anon_sym_AT_ATk] = ACTIONS(210),
    [anon_sym_AT_ATt] = ACTIONS(210),
    [anon_sym_AT_ATb] = ACTIONS(210),
    [anon_sym_AT_ATi] = ACTIONS(212),
    [anon_sym_AT_ATiS] = ACTIONS(210),
    [anon_sym_AT_ATf] = ACTIONS(210),
    [anon_sym_AT_ATs_COLON] = ACTIONS(210),
    [anon_sym_AT_ATc_COLON] = ACTIONS(210),
    [anon_sym_AT] = ACTIONS(212),
    [anon_sym_AT_BANG] = ACTIONS(210),
    [anon_sym_AT_LPAREN] = ACTIONS(210),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_ATa_COLON] = ACTIONS(210),
    [anon_sym_ATb_COLON] = ACTIONS(210),
    [anon_sym_ATB_COLON] = ACTIONS(210),
    [anon_sym_ATe_COLON] = ACTIONS(210),
    [anon_sym_ATF_COLON] = ACTIONS(210),
    [anon_sym_ATi_COLON] = ACTIONS(210),
    [anon_sym_ATk_COLON] = ACTIONS(210),
    [anon_sym_ATo_COLON] = ACTIONS(210),
    [anon_sym_ATr_COLON] = ACTIONS(210),
    [anon_sym_ATf_COLON] = ACTIONS(210),
    [anon_sym_ATs_COLON] = ACTIONS(210),
    [anon_sym_ATx_COLON] = ACTIONS(210),
    [anon_sym_PIPE_DOT] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(212),
    [anon_sym_GT_GT] = ACTIONS(210),
    [sym_html_redirect_operator] = ACTIONS(212),
    [sym_html_append_operator] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [aux_sym_tmp_eval_arg_token1] = ACTIONS(214),
    [anon_sym_BQUOTE] = ACTIONS(210),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(210),
    [anon_sym_CR] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [sym_file_descriptor] = ACTIONS(210),
  },
  [65] = {
    [aux_sym_concatenation_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
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
    [anon_sym_RPAREN] = ACTIONS(163),
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
    [anon_sym_GT_GT] = ACTIONS(163),
    [sym_html_redirect_operator] = ACTIONS(165),
    [sym_html_append_operator] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_CR] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [sym_file_descriptor] = ACTIONS(163),
    [sym__eq_sep_concat] = ACTIONS(163),
    [sym__concat] = ACTIONS(195),
  },
  [66] = {
    [aux_sym_concatenation_repeat1] = STATE(66),
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
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [sym__eq_sep_concat] = ACTIONS(156),
    [sym__concat] = ACTIONS(216),
  },
  [67] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(221),
    [anon_sym_PIPEH] = ACTIONS(219),
    [anon_sym_PIPET] = ACTIONS(219),
    [anon_sym_AT_AT] = ACTIONS(221),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(219),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(219),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(219),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(219),
    [anon_sym_AT_ATb] = ACTIONS(219),
    [anon_sym_AT_ATi] = ACTIONS(221),
    [anon_sym_AT_ATiS] = ACTIONS(219),
    [anon_sym_AT_ATf] = ACTIONS(219),
    [anon_sym_AT_ATs_COLON] = ACTIONS(219),
    [anon_sym_AT_ATc_COLON] = ACTIONS(219),
    [anon_sym_AT] = ACTIONS(221),
    [anon_sym_AT_BANG] = ACTIONS(219),
    [anon_sym_AT_LPAREN] = ACTIONS(219),
    [anon_sym_RPAREN] = ACTIONS(219),
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
    [anon_sym_EQ] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(219),
    [sym_html_redirect_operator] = ACTIONS(221),
    [sym_html_append_operator] = ACTIONS(219),
    [anon_sym_BQUOTE] = ACTIONS(219),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(219),
    [anon_sym_CR] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [sym_file_descriptor] = ACTIONS(219),
    [sym__eq_sep_concat] = ACTIONS(208),
  },
  [68] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_PIPEH] = ACTIONS(223),
    [anon_sym_PIPET] = ACTIONS(223),
    [anon_sym_AT_AT] = ACTIONS(225),
    [anon_sym_AT_ATdbt] = ACTIONS(225),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(223),
    [anon_sym_AT_ATdbts] = ACTIONS(223),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(223),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(223),
    [anon_sym_AT_ATf] = ACTIONS(223),
    [anon_sym_AT_ATs_COLON] = ACTIONS(223),
    [anon_sym_AT_ATc_COLON] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_AT_BANG] = ACTIONS(223),
    [anon_sym_AT_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
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
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(223),
    [sym_html_redirect_operator] = ACTIONS(225),
    [sym_html_append_operator] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(223),
    [anon_sym_CR] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [sym_file_descriptor] = ACTIONS(223),
    [sym__eq_sep_concat] = ACTIONS(227),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_GT_GT] = ACTIONS(171),
    [sym_html_redirect_operator] = ACTIONS(173),
    [sym_html_append_operator] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym__eq_sep_concat] = ACTIONS(171),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__eq_sep_concat] = ACTIONS(167),
  },
  [71] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(78),
    [ts_builtin_sym_end] = ACTIONS(230),
    [anon_sym_TILDE] = ACTIONS(230),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_PIPEH] = ACTIONS(230),
    [anon_sym_PIPET] = ACTIONS(230),
    [anon_sym_AT_AT] = ACTIONS(232),
    [anon_sym_AT_ATdbt] = ACTIONS(232),
    [anon_sym_AT_ATdbta] = ACTIONS(230),
    [anon_sym_AT_ATdbtb] = ACTIONS(230),
    [anon_sym_AT_ATdbts] = ACTIONS(230),
    [anon_sym_AT_AT_DOT] = ACTIONS(230),
    [anon_sym_AT_AT_EQ] = ACTIONS(230),
    [anon_sym_AT_ATk] = ACTIONS(230),
    [anon_sym_AT_ATt] = ACTIONS(230),
    [anon_sym_AT_ATb] = ACTIONS(230),
    [anon_sym_AT_ATi] = ACTIONS(232),
    [anon_sym_AT_ATiS] = ACTIONS(230),
    [anon_sym_AT_ATf] = ACTIONS(230),
    [anon_sym_AT_ATs_COLON] = ACTIONS(230),
    [anon_sym_AT_ATc_COLON] = ACTIONS(230),
    [anon_sym_AT] = ACTIONS(232),
    [anon_sym_AT_BANG] = ACTIONS(230),
    [anon_sym_AT_LPAREN] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_ATa_COLON] = ACTIONS(230),
    [anon_sym_ATb_COLON] = ACTIONS(230),
    [anon_sym_ATB_COLON] = ACTIONS(230),
    [anon_sym_ATe_COLON] = ACTIONS(230),
    [anon_sym_ATF_COLON] = ACTIONS(230),
    [anon_sym_ATi_COLON] = ACTIONS(230),
    [anon_sym_ATk_COLON] = ACTIONS(230),
    [anon_sym_ATo_COLON] = ACTIONS(230),
    [anon_sym_ATr_COLON] = ACTIONS(230),
    [anon_sym_ATf_COLON] = ACTIONS(230),
    [anon_sym_ATs_COLON] = ACTIONS(230),
    [anon_sym_ATx_COLON] = ACTIONS(230),
    [anon_sym_PIPE_DOT] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_GT_GT] = ACTIONS(230),
    [sym_html_redirect_operator] = ACTIONS(232),
    [sym_html_append_operator] = ACTIONS(230),
    [anon_sym_BQUOTE] = ACTIONS(230),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(230),
    [anon_sym_CR] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(230),
    [sym_file_descriptor] = ACTIONS(230),
    [sym__eq_sep_concat] = ACTIONS(234),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_EQ] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(169),
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__eq_sep_concat] = ACTIONS(167),
  },
  [73] = {
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
    [anon_sym_RPAREN] = ACTIONS(175),
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
    [anon_sym_EQ] = ACTIONS(175),
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
    [sym__eq_sep_concat] = ACTIONS(175),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__eq_sep_concat] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__eq_sep_concat] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
    [anon_sym_GT_GT] = ACTIONS(171),
    [sym_html_redirect_operator] = ACTIONS(173),
    [sym_html_append_operator] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym__eq_sep_concat] = ACTIONS(171),
    [sym__concat] = ACTIONS(171),
  },
  [77] = {
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
    [anon_sym_RPAREN] = ACTIONS(175),
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
    [anon_sym_GT_GT] = ACTIONS(175),
    [sym_html_redirect_operator] = ACTIONS(177),
    [sym_html_append_operator] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_file_descriptor] = ACTIONS(175),
    [sym__eq_sep_concat] = ACTIONS(175),
    [sym__concat] = ACTIONS(175),
  },
  [78] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(236),
    [anon_sym_TILDE] = ACTIONS(236),
    [anon_sym_PIPE] = ACTIONS(238),
    [anon_sym_PIPEH] = ACTIONS(236),
    [anon_sym_PIPET] = ACTIONS(236),
    [anon_sym_AT_AT] = ACTIONS(238),
    [anon_sym_AT_ATdbt] = ACTIONS(238),
    [anon_sym_AT_ATdbta] = ACTIONS(236),
    [anon_sym_AT_ATdbtb] = ACTIONS(236),
    [anon_sym_AT_ATdbts] = ACTIONS(236),
    [anon_sym_AT_AT_DOT] = ACTIONS(236),
    [anon_sym_AT_AT_EQ] = ACTIONS(236),
    [anon_sym_AT_ATk] = ACTIONS(236),
    [anon_sym_AT_ATt] = ACTIONS(236),
    [anon_sym_AT_ATb] = ACTIONS(236),
    [anon_sym_AT_ATi] = ACTIONS(238),
    [anon_sym_AT_ATiS] = ACTIONS(236),
    [anon_sym_AT_ATf] = ACTIONS(236),
    [anon_sym_AT_ATs_COLON] = ACTIONS(236),
    [anon_sym_AT_ATc_COLON] = ACTIONS(236),
    [anon_sym_AT] = ACTIONS(238),
    [anon_sym_AT_BANG] = ACTIONS(236),
    [anon_sym_AT_LPAREN] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_ATa_COLON] = ACTIONS(236),
    [anon_sym_ATb_COLON] = ACTIONS(236),
    [anon_sym_ATB_COLON] = ACTIONS(236),
    [anon_sym_ATe_COLON] = ACTIONS(236),
    [anon_sym_ATF_COLON] = ACTIONS(236),
    [anon_sym_ATi_COLON] = ACTIONS(236),
    [anon_sym_ATk_COLON] = ACTIONS(236),
    [anon_sym_ATo_COLON] = ACTIONS(236),
    [anon_sym_ATr_COLON] = ACTIONS(236),
    [anon_sym_ATf_COLON] = ACTIONS(236),
    [anon_sym_ATs_COLON] = ACTIONS(236),
    [anon_sym_ATx_COLON] = ACTIONS(236),
    [anon_sym_PIPE_DOT] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_GT_GT] = ACTIONS(236),
    [sym_html_redirect_operator] = ACTIONS(238),
    [sym_html_append_operator] = ACTIONS(236),
    [anon_sym_BQUOTE] = ACTIONS(236),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(236),
    [anon_sym_CR] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [sym_file_descriptor] = ACTIONS(236),
    [sym__eq_sep_concat] = ACTIONS(234),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
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
    [anon_sym_RPAREN] = ACTIONS(183),
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
    [anon_sym_GT_GT] = ACTIONS(183),
    [sym_html_redirect_operator] = ACTIONS(185),
    [sym_html_append_operator] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_file_descriptor] = ACTIONS(183),
    [sym__eq_sep_concat] = ACTIONS(183),
    [sym__concat] = ACTIONS(183),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
    [anon_sym_GT_GT] = ACTIONS(179),
    [sym_html_redirect_operator] = ACTIONS(181),
    [sym_html_append_operator] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym__eq_sep_concat] = ACTIONS(179),
    [sym__concat] = ACTIONS(179),
  },
  [81] = {
    [aux_sym_concatenation_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
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
    [anon_sym_RPAREN] = ACTIONS(163),
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
    [anon_sym_GT_GT] = ACTIONS(163),
    [sym_html_redirect_operator] = ACTIONS(165),
    [sym_html_append_operator] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_CR] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [sym_file_descriptor] = ACTIONS(163),
    [sym__concat] = ACTIONS(240),
  },
  [82] = {
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
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [sym__eq_sep_concat] = ACTIONS(156),
    [sym__concat] = ACTIONS(156),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
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
    [anon_sym_RPAREN] = ACTIONS(183),
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
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_GT_GT] = ACTIONS(183),
    [sym_html_redirect_operator] = ACTIONS(185),
    [sym_html_append_operator] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_file_descriptor] = ACTIONS(183),
    [sym__eq_sep_concat] = ACTIONS(183),
  },
  [84] = {
    [aux_sym_tmp_eval_args_repeat1] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_TILDE] = ACTIONS(242),
    [anon_sym_PIPE] = ACTIONS(244),
    [anon_sym_PIPEH] = ACTIONS(242),
    [anon_sym_PIPET] = ACTIONS(242),
    [anon_sym_AT_AT] = ACTIONS(244),
    [anon_sym_AT_ATdbt] = ACTIONS(244),
    [anon_sym_AT_ATdbta] = ACTIONS(242),
    [anon_sym_AT_ATdbtb] = ACTIONS(242),
    [anon_sym_AT_ATdbts] = ACTIONS(242),
    [anon_sym_AT_AT_DOT] = ACTIONS(242),
    [anon_sym_AT_AT_EQ] = ACTIONS(242),
    [anon_sym_AT_ATk] = ACTIONS(242),
    [anon_sym_AT_ATt] = ACTIONS(242),
    [anon_sym_AT_ATb] = ACTIONS(242),
    [anon_sym_AT_ATi] = ACTIONS(244),
    [anon_sym_AT_ATiS] = ACTIONS(242),
    [anon_sym_AT_ATf] = ACTIONS(242),
    [anon_sym_AT_ATs_COLON] = ACTIONS(242),
    [anon_sym_AT_ATc_COLON] = ACTIONS(242),
    [anon_sym_AT] = ACTIONS(244),
    [anon_sym_AT_BANG] = ACTIONS(242),
    [anon_sym_AT_LPAREN] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(242),
    [anon_sym_ATa_COLON] = ACTIONS(242),
    [anon_sym_ATb_COLON] = ACTIONS(242),
    [anon_sym_ATB_COLON] = ACTIONS(242),
    [anon_sym_ATe_COLON] = ACTIONS(242),
    [anon_sym_ATF_COLON] = ACTIONS(242),
    [anon_sym_ATi_COLON] = ACTIONS(242),
    [anon_sym_ATk_COLON] = ACTIONS(242),
    [anon_sym_ATo_COLON] = ACTIONS(242),
    [anon_sym_ATr_COLON] = ACTIONS(242),
    [anon_sym_ATf_COLON] = ACTIONS(242),
    [anon_sym_ATs_COLON] = ACTIONS(242),
    [anon_sym_ATx_COLON] = ACTIONS(242),
    [anon_sym_PIPE_DOT] = ACTIONS(242),
    [anon_sym_GT] = ACTIONS(244),
    [anon_sym_GT_GT] = ACTIONS(242),
    [sym_html_redirect_operator] = ACTIONS(244),
    [sym_html_append_operator] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(242),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(242),
    [anon_sym_CR] = ACTIONS(242),
    [anon_sym_SEMI] = ACTIONS(242),
    [sym_file_descriptor] = ACTIONS(242),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
    [anon_sym_EQ] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(179),
    [sym_html_redirect_operator] = ACTIONS(181),
    [sym_html_append_operator] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym__eq_sep_concat] = ACTIONS(179),
  },
  [86] = {
    [aux_sym_tmp_eval_args_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_PIPEH] = ACTIONS(248),
    [anon_sym_PIPET] = ACTIONS(248),
    [anon_sym_AT_AT] = ACTIONS(250),
    [anon_sym_AT_ATdbt] = ACTIONS(250),
    [anon_sym_AT_ATdbta] = ACTIONS(248),
    [anon_sym_AT_ATdbtb] = ACTIONS(248),
    [anon_sym_AT_ATdbts] = ACTIONS(248),
    [anon_sym_AT_AT_DOT] = ACTIONS(248),
    [anon_sym_AT_AT_EQ] = ACTIONS(248),
    [anon_sym_AT_ATk] = ACTIONS(248),
    [anon_sym_AT_ATt] = ACTIONS(248),
    [anon_sym_AT_ATb] = ACTIONS(248),
    [anon_sym_AT_ATi] = ACTIONS(250),
    [anon_sym_AT_ATiS] = ACTIONS(248),
    [anon_sym_AT_ATf] = ACTIONS(248),
    [anon_sym_AT_ATs_COLON] = ACTIONS(248),
    [anon_sym_AT_ATc_COLON] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(250),
    [anon_sym_AT_BANG] = ACTIONS(248),
    [anon_sym_AT_LPAREN] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_ATa_COLON] = ACTIONS(248),
    [anon_sym_ATb_COLON] = ACTIONS(248),
    [anon_sym_ATB_COLON] = ACTIONS(248),
    [anon_sym_ATe_COLON] = ACTIONS(248),
    [anon_sym_ATF_COLON] = ACTIONS(248),
    [anon_sym_ATi_COLON] = ACTIONS(248),
    [anon_sym_ATk_COLON] = ACTIONS(248),
    [anon_sym_ATo_COLON] = ACTIONS(248),
    [anon_sym_ATr_COLON] = ACTIONS(248),
    [anon_sym_ATf_COLON] = ACTIONS(248),
    [anon_sym_ATs_COLON] = ACTIONS(248),
    [anon_sym_ATx_COLON] = ACTIONS(248),
    [anon_sym_PIPE_DOT] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_GT] = ACTIONS(248),
    [sym_html_redirect_operator] = ACTIONS(250),
    [sym_html_append_operator] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(248),
    [anon_sym_CR] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_file_descriptor] = ACTIONS(248),
  },
  [87] = {
    [aux_sym_tmp_eval_args_repeat1] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(255),
    [anon_sym_TILDE] = ACTIONS(255),
    [anon_sym_PIPE] = ACTIONS(257),
    [anon_sym_PIPEH] = ACTIONS(255),
    [anon_sym_PIPET] = ACTIONS(255),
    [anon_sym_AT_AT] = ACTIONS(257),
    [anon_sym_AT_ATdbt] = ACTIONS(257),
    [anon_sym_AT_ATdbta] = ACTIONS(255),
    [anon_sym_AT_ATdbtb] = ACTIONS(255),
    [anon_sym_AT_ATdbts] = ACTIONS(255),
    [anon_sym_AT_AT_DOT] = ACTIONS(255),
    [anon_sym_AT_AT_EQ] = ACTIONS(255),
    [anon_sym_AT_ATk] = ACTIONS(255),
    [anon_sym_AT_ATt] = ACTIONS(255),
    [anon_sym_AT_ATb] = ACTIONS(255),
    [anon_sym_AT_ATi] = ACTIONS(257),
    [anon_sym_AT_ATiS] = ACTIONS(255),
    [anon_sym_AT_ATf] = ACTIONS(255),
    [anon_sym_AT_ATs_COLON] = ACTIONS(255),
    [anon_sym_AT_ATc_COLON] = ACTIONS(255),
    [anon_sym_AT] = ACTIONS(257),
    [anon_sym_AT_BANG] = ACTIONS(255),
    [anon_sym_AT_LPAREN] = ACTIONS(255),
    [anon_sym_RPAREN] = ACTIONS(255),
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
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(255),
    [sym_html_redirect_operator] = ACTIONS(257),
    [sym_html_append_operator] = ACTIONS(255),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_CR] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [sym_file_descriptor] = ACTIONS(255),
  },
  [88] = {
    [aux_sym_concatenation_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
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
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_file_descriptor] = ACTIONS(150),
    [sym__concat] = ACTIONS(240),
  },
  [89] = {
    [aux_sym_concatenation_repeat1] = STATE(89),
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
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [sym__concat] = ACTIONS(259),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [anon_sym_TILDE] = ACTIONS(262),
    [anon_sym_PIPE] = ACTIONS(264),
    [anon_sym_PIPEH] = ACTIONS(262),
    [anon_sym_PIPET] = ACTIONS(262),
    [anon_sym_AT_AT] = ACTIONS(264),
    [anon_sym_AT_ATdbt] = ACTIONS(264),
    [anon_sym_AT_ATdbta] = ACTIONS(262),
    [anon_sym_AT_ATdbtb] = ACTIONS(262),
    [anon_sym_AT_ATdbts] = ACTIONS(262),
    [anon_sym_AT_AT_DOT] = ACTIONS(262),
    [anon_sym_AT_AT_EQ] = ACTIONS(262),
    [anon_sym_AT_ATk] = ACTIONS(262),
    [anon_sym_AT_ATt] = ACTIONS(262),
    [anon_sym_AT_ATb] = ACTIONS(262),
    [anon_sym_AT_ATi] = ACTIONS(264),
    [anon_sym_AT_ATiS] = ACTIONS(262),
    [anon_sym_AT_ATf] = ACTIONS(262),
    [anon_sym_AT_ATs_COLON] = ACTIONS(262),
    [anon_sym_AT_ATc_COLON] = ACTIONS(262),
    [anon_sym_AT] = ACTIONS(264),
    [anon_sym_AT_BANG] = ACTIONS(262),
    [anon_sym_AT_LPAREN] = ACTIONS(262),
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_ATa_COLON] = ACTIONS(262),
    [anon_sym_ATb_COLON] = ACTIONS(262),
    [anon_sym_ATB_COLON] = ACTIONS(262),
    [anon_sym_ATe_COLON] = ACTIONS(262),
    [anon_sym_ATF_COLON] = ACTIONS(262),
    [anon_sym_ATi_COLON] = ACTIONS(262),
    [anon_sym_ATk_COLON] = ACTIONS(262),
    [anon_sym_ATo_COLON] = ACTIONS(262),
    [anon_sym_ATr_COLON] = ACTIONS(262),
    [anon_sym_ATf_COLON] = ACTIONS(262),
    [anon_sym_ATs_COLON] = ACTIONS(262),
    [anon_sym_ATx_COLON] = ACTIONS(262),
    [anon_sym_PIPE_DOT] = ACTIONS(262),
    [anon_sym_EQ] = ACTIONS(262),
    [anon_sym_GT] = ACTIONS(264),
    [anon_sym_GT_GT] = ACTIONS(262),
    [sym_html_redirect_operator] = ACTIONS(264),
    [sym_html_append_operator] = ACTIONS(262),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(262),
    [anon_sym_CR] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(262),
    [sym_file_descriptor] = ACTIONS(262),
    [sym__eq_sep_concat] = ACTIONS(262),
  },
  [91] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_PIPEH] = ACTIONS(266),
    [anon_sym_PIPET] = ACTIONS(266),
    [anon_sym_AT_AT] = ACTIONS(268),
    [anon_sym_AT_ATdbt] = ACTIONS(268),
    [anon_sym_AT_ATdbta] = ACTIONS(266),
    [anon_sym_AT_ATdbtb] = ACTIONS(266),
    [anon_sym_AT_ATdbts] = ACTIONS(266),
    [anon_sym_AT_AT_DOT] = ACTIONS(266),
    [anon_sym_AT_AT_EQ] = ACTIONS(266),
    [anon_sym_AT_ATk] = ACTIONS(266),
    [anon_sym_AT_ATt] = ACTIONS(266),
    [anon_sym_AT_ATb] = ACTIONS(266),
    [anon_sym_AT_ATi] = ACTIONS(268),
    [anon_sym_AT_ATiS] = ACTIONS(266),
    [anon_sym_AT_ATf] = ACTIONS(266),
    [anon_sym_AT_ATs_COLON] = ACTIONS(266),
    [anon_sym_AT_ATc_COLON] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(268),
    [anon_sym_AT_BANG] = ACTIONS(266),
    [anon_sym_AT_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_ATa_COLON] = ACTIONS(266),
    [anon_sym_ATb_COLON] = ACTIONS(266),
    [anon_sym_ATB_COLON] = ACTIONS(266),
    [anon_sym_ATe_COLON] = ACTIONS(266),
    [anon_sym_ATF_COLON] = ACTIONS(266),
    [anon_sym_ATi_COLON] = ACTIONS(266),
    [anon_sym_ATk_COLON] = ACTIONS(266),
    [anon_sym_ATo_COLON] = ACTIONS(266),
    [anon_sym_ATr_COLON] = ACTIONS(266),
    [anon_sym_ATf_COLON] = ACTIONS(266),
    [anon_sym_ATs_COLON] = ACTIONS(266),
    [anon_sym_ATx_COLON] = ACTIONS(266),
    [anon_sym_PIPE_DOT] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(266),
    [sym_html_redirect_operator] = ACTIONS(268),
    [sym_html_append_operator] = ACTIONS(266),
    [anon_sym_BQUOTE] = ACTIONS(266),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(266),
    [anon_sym_CR] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_file_descriptor] = ACTIONS(266),
    [sym__eq_sep_concat] = ACTIONS(270),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_TILDE] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(225),
    [anon_sym_PIPEH] = ACTIONS(223),
    [anon_sym_PIPET] = ACTIONS(223),
    [anon_sym_AT_AT] = ACTIONS(225),
    [anon_sym_AT_ATdbt] = ACTIONS(225),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(223),
    [anon_sym_AT_ATdbts] = ACTIONS(223),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(223),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(223),
    [anon_sym_AT_ATf] = ACTIONS(223),
    [anon_sym_AT_ATs_COLON] = ACTIONS(223),
    [anon_sym_AT_ATc_COLON] = ACTIONS(223),
    [anon_sym_AT] = ACTIONS(225),
    [anon_sym_AT_BANG] = ACTIONS(223),
    [anon_sym_AT_LPAREN] = ACTIONS(223),
    [anon_sym_RPAREN] = ACTIONS(223),
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
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(225),
    [anon_sym_GT_GT] = ACTIONS(223),
    [sym_html_redirect_operator] = ACTIONS(225),
    [sym_html_append_operator] = ACTIONS(223),
    [anon_sym_BQUOTE] = ACTIONS(223),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(223),
    [anon_sym_CR] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(223),
    [sym_file_descriptor] = ACTIONS(223),
    [sym__eq_sep_concat] = ACTIONS(223),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [anon_sym_TILDE] = ACTIONS(273),
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
    [anon_sym_COLON] = ACTIONS(277),
    [anon_sym_AT_ATs_COLON] = ACTIONS(273),
    [anon_sym_AT_ATc_COLON] = ACTIONS(273),
    [anon_sym_AT] = ACTIONS(275),
    [anon_sym_AT_BANG] = ACTIONS(273),
    [anon_sym_AT_LPAREN] = ACTIONS(273),
    [anon_sym_RPAREN] = ACTIONS(273),
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
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(273),
    [sym_html_redirect_operator] = ACTIONS(275),
    [sym_html_append_operator] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(273),
    [anon_sym_CR] = ACTIONS(273),
    [anon_sym_SEMI] = ACTIONS(273),
    [sym_file_descriptor] = ACTIONS(273),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPEH] = ACTIONS(281),
    [anon_sym_PIPET] = ACTIONS(281),
    [anon_sym_AT_AT] = ACTIONS(281),
    [anon_sym_AT_ATdbt] = ACTIONS(281),
    [anon_sym_AT_ATdbta] = ACTIONS(281),
    [anon_sym_AT_ATdbtb] = ACTIONS(281),
    [anon_sym_AT_ATdbts] = ACTIONS(281),
    [anon_sym_AT_AT_DOT] = ACTIONS(281),
    [anon_sym_AT_AT_EQ] = ACTIONS(281),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(281),
    [anon_sym_AT_ATb] = ACTIONS(281),
    [anon_sym_AT_ATi] = ACTIONS(281),
    [anon_sym_AT_ATiS] = ACTIONS(281),
    [anon_sym_AT_ATf] = ACTIONS(281),
    [anon_sym_AT_ATs_COLON] = ACTIONS(281),
    [anon_sym_AT_ATc_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
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
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_PIPE_DOT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(281),
    [sym_html_redirect_operator] = ACTIONS(281),
    [sym_html_append_operator] = ACTIONS(281),
    [sym_macro_content] = ACTIONS(285),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(279),
    [anon_sym_CR] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(281),
    [sym_file_descriptor] = ACTIONS(279),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_TILDE] = ACTIONS(183),
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
    [anon_sym_RPAREN] = ACTIONS(183),
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
    [anon_sym_GT_GT] = ACTIONS(183),
    [sym_html_redirect_operator] = ACTIONS(185),
    [sym_html_append_operator] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym_file_descriptor] = ACTIONS(183),
    [sym__concat] = ACTIONS(183),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_TILDE] = ACTIONS(179),
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
    [anon_sym_GT_GT] = ACTIONS(179),
    [sym_html_redirect_operator] = ACTIONS(181),
    [sym_html_append_operator] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym_file_descriptor] = ACTIONS(179),
    [sym__concat] = ACTIONS(179),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_PIPEH] = ACTIONS(266),
    [anon_sym_PIPET] = ACTIONS(266),
    [anon_sym_AT_AT] = ACTIONS(268),
    [anon_sym_AT_ATdbt] = ACTIONS(268),
    [anon_sym_AT_ATdbta] = ACTIONS(266),
    [anon_sym_AT_ATdbtb] = ACTIONS(266),
    [anon_sym_AT_ATdbts] = ACTIONS(266),
    [anon_sym_AT_AT_DOT] = ACTIONS(266),
    [anon_sym_AT_AT_EQ] = ACTIONS(266),
    [anon_sym_AT_ATk] = ACTIONS(266),
    [anon_sym_AT_ATt] = ACTIONS(266),
    [anon_sym_AT_ATb] = ACTIONS(266),
    [anon_sym_AT_ATi] = ACTIONS(268),
    [anon_sym_AT_ATiS] = ACTIONS(266),
    [anon_sym_AT_ATf] = ACTIONS(266),
    [anon_sym_AT_ATs_COLON] = ACTIONS(266),
    [anon_sym_AT_ATc_COLON] = ACTIONS(266),
    [anon_sym_AT] = ACTIONS(268),
    [anon_sym_AT_BANG] = ACTIONS(266),
    [anon_sym_AT_LPAREN] = ACTIONS(266),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_ATa_COLON] = ACTIONS(266),
    [anon_sym_ATb_COLON] = ACTIONS(266),
    [anon_sym_ATB_COLON] = ACTIONS(266),
    [anon_sym_ATe_COLON] = ACTIONS(266),
    [anon_sym_ATF_COLON] = ACTIONS(266),
    [anon_sym_ATi_COLON] = ACTIONS(266),
    [anon_sym_ATk_COLON] = ACTIONS(266),
    [anon_sym_ATo_COLON] = ACTIONS(266),
    [anon_sym_ATr_COLON] = ACTIONS(266),
    [anon_sym_ATf_COLON] = ACTIONS(266),
    [anon_sym_ATs_COLON] = ACTIONS(266),
    [anon_sym_ATx_COLON] = ACTIONS(266),
    [anon_sym_PIPE_DOT] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(266),
    [sym_html_redirect_operator] = ACTIONS(268),
    [sym_html_append_operator] = ACTIONS(266),
    [anon_sym_BQUOTE] = ACTIONS(266),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(266),
    [anon_sym_CR] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_file_descriptor] = ACTIONS(266),
    [sym__eq_sep_concat] = ACTIONS(266),
  },
  [99] = {
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
    [anon_sym_RPAREN] = ACTIONS(175),
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
    [anon_sym_GT_GT] = ACTIONS(175),
    [sym_html_redirect_operator] = ACTIONS(177),
    [sym_html_append_operator] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_file_descriptor] = ACTIONS(175),
    [sym__concat] = ACTIONS(175),
  },
  [100] = {
    [sym__redirect_operator] = STATE(188),
    [sym_fdn_redirect_operator] = STATE(188),
    [sym_fdn_append_operator] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(361),
    [sym_html_redirect_operator] = ACTIONS(363),
    [sym_html_append_operator] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(287),
    [anon_sym_CR] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [sym_file_descriptor] = ACTIONS(367),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_TILDE] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(250),
    [anon_sym_PIPEH] = ACTIONS(248),
    [anon_sym_PIPET] = ACTIONS(248),
    [anon_sym_AT_AT] = ACTIONS(250),
    [anon_sym_AT_ATdbt] = ACTIONS(250),
    [anon_sym_AT_ATdbta] = ACTIONS(248),
    [anon_sym_AT_ATdbtb] = ACTIONS(248),
    [anon_sym_AT_ATdbts] = ACTIONS(248),
    [anon_sym_AT_AT_DOT] = ACTIONS(248),
    [anon_sym_AT_AT_EQ] = ACTIONS(248),
    [anon_sym_AT_ATk] = ACTIONS(248),
    [anon_sym_AT_ATt] = ACTIONS(248),
    [anon_sym_AT_ATb] = ACTIONS(248),
    [anon_sym_AT_ATi] = ACTIONS(250),
    [anon_sym_AT_ATiS] = ACTIONS(248),
    [anon_sym_AT_ATf] = ACTIONS(248),
    [anon_sym_AT_ATs_COLON] = ACTIONS(248),
    [anon_sym_AT_ATc_COLON] = ACTIONS(248),
    [anon_sym_AT] = ACTIONS(250),
    [anon_sym_AT_BANG] = ACTIONS(248),
    [anon_sym_AT_LPAREN] = ACTIONS(248),
    [anon_sym_RPAREN] = ACTIONS(248),
    [anon_sym_ATa_COLON] = ACTIONS(248),
    [anon_sym_ATb_COLON] = ACTIONS(248),
    [anon_sym_ATB_COLON] = ACTIONS(248),
    [anon_sym_ATe_COLON] = ACTIONS(248),
    [anon_sym_ATF_COLON] = ACTIONS(248),
    [anon_sym_ATi_COLON] = ACTIONS(248),
    [anon_sym_ATk_COLON] = ACTIONS(248),
    [anon_sym_ATo_COLON] = ACTIONS(248),
    [anon_sym_ATr_COLON] = ACTIONS(248),
    [anon_sym_ATf_COLON] = ACTIONS(248),
    [anon_sym_ATs_COLON] = ACTIONS(248),
    [anon_sym_ATx_COLON] = ACTIONS(248),
    [anon_sym_PIPE_DOT] = ACTIONS(248),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_GT_GT] = ACTIONS(248),
    [sym_html_redirect_operator] = ACTIONS(250),
    [sym_html_append_operator] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_BQUOTE] = ACTIONS(248),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(248),
    [anon_sym_CR] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(248),
    [sym_file_descriptor] = ACTIONS(248),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
    [anon_sym_GT_GT] = ACTIONS(171),
    [sym_html_redirect_operator] = ACTIONS(173),
    [sym_html_append_operator] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_file_descriptor] = ACTIONS(171),
    [sym__concat] = ACTIONS(171),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_TILDE] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_GT_GT] = ACTIONS(167),
    [sym_html_redirect_operator] = ACTIONS(169),
    [sym_html_append_operator] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_file_descriptor] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [104] = {
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
    [anon_sym_RPAREN] = ACTIONS(369),
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
    [anon_sym_PIPE_DOT] = ACTIONS(369),
    [anon_sym_EQ] = ACTIONS(373),
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
  [105] = {
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
    [anon_sym_RPAREN] = ACTIONS(156),
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
    [sym__concat] = ACTIONS(156),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_TILDE] = ACTIONS(375),
    [anon_sym_PIPE] = ACTIONS(377),
    [anon_sym_PIPEH] = ACTIONS(375),
    [anon_sym_PIPET] = ACTIONS(375),
    [anon_sym_AT_AT] = ACTIONS(377),
    [anon_sym_AT_ATdbt] = ACTIONS(377),
    [anon_sym_AT_ATdbta] = ACTIONS(375),
    [anon_sym_AT_ATdbtb] = ACTIONS(375),
    [anon_sym_AT_ATdbts] = ACTIONS(375),
    [anon_sym_AT_AT_DOT] = ACTIONS(375),
    [anon_sym_AT_AT_EQ] = ACTIONS(375),
    [anon_sym_AT_ATk] = ACTIONS(375),
    [anon_sym_AT_ATt] = ACTIONS(375),
    [anon_sym_AT_ATb] = ACTIONS(375),
    [anon_sym_AT_ATi] = ACTIONS(377),
    [anon_sym_AT_ATiS] = ACTIONS(375),
    [anon_sym_AT_ATf] = ACTIONS(375),
    [anon_sym_AT_ATs_COLON] = ACTIONS(375),
    [anon_sym_AT_ATc_COLON] = ACTIONS(375),
    [anon_sym_AT] = ACTIONS(377),
    [anon_sym_AT_BANG] = ACTIONS(375),
    [anon_sym_AT_LPAREN] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_ATa_COLON] = ACTIONS(375),
    [anon_sym_ATb_COLON] = ACTIONS(375),
    [anon_sym_ATB_COLON] = ACTIONS(375),
    [anon_sym_ATe_COLON] = ACTIONS(375),
    [anon_sym_ATF_COLON] = ACTIONS(375),
    [anon_sym_ATi_COLON] = ACTIONS(375),
    [anon_sym_ATk_COLON] = ACTIONS(375),
    [anon_sym_ATo_COLON] = ACTIONS(375),
    [anon_sym_ATr_COLON] = ACTIONS(375),
    [anon_sym_ATf_COLON] = ACTIONS(375),
    [anon_sym_ATs_COLON] = ACTIONS(375),
    [anon_sym_ATx_COLON] = ACTIONS(375),
    [anon_sym_LPAREN] = ACTIONS(379),
    [anon_sym_PIPE_DOT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(375),
    [sym_html_redirect_operator] = ACTIONS(377),
    [sym_html_append_operator] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(375),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(375),
    [anon_sym_CR] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(375),
    [sym_file_descriptor] = ACTIONS(375),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
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
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_file_descriptor] = ACTIONS(150),
    [sym__eq_sep_concat] = ACTIONS(150),
  },
  [108] = {
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
    [anon_sym_RPAREN] = ACTIONS(381),
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
  [109] = {
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
    [anon_sym_RPAREN] = ACTIONS(385),
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
  [110] = {
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
    [anon_sym_RPAREN] = ACTIONS(389),
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
  [111] = {
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
    [anon_sym_RPAREN] = ACTIONS(393),
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
  [112] = {
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
    [anon_sym_RPAREN] = ACTIONS(397),
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
  [113] = {
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
    [anon_sym_RPAREN] = ACTIONS(401),
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
  [114] = {
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
    [anon_sym_RPAREN] = ACTIONS(405),
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
  [115] = {
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
    [anon_sym_RPAREN] = ACTIONS(409),
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
  [116] = {
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
    [anon_sym_RPAREN] = ACTIONS(413),
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
    [anon_sym_PIPE_DOT] = ACTIONS(413),
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
  [117] = {
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
    [anon_sym_RPAREN] = ACTIONS(417),
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
    [anon_sym_PIPE_DOT] = ACTIONS(417),
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
  [118] = {
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
    [anon_sym_RPAREN] = ACTIONS(421),
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
    [anon_sym_PIPE_DOT] = ACTIONS(421),
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
  [119] = {
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
    [anon_sym_RPAREN] = ACTIONS(425),
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
    [anon_sym_PIPE_DOT] = ACTIONS(425),
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
  [120] = {
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
    [anon_sym_RPAREN] = ACTIONS(429),
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
    [anon_sym_PIPE_DOT] = ACTIONS(429),
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
  [121] = {
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
    [anon_sym_RPAREN] = ACTIONS(433),
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
    [anon_sym_PIPE_DOT] = ACTIONS(433),
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
  [122] = {
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
    [anon_sym_RPAREN] = ACTIONS(437),
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
    [anon_sym_PIPE_DOT] = ACTIONS(437),
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
  [123] = {
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
    [anon_sym_RPAREN] = ACTIONS(441),
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
    [anon_sym_PIPE_DOT] = ACTIONS(441),
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
  [124] = {
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
    [anon_sym_RPAREN] = ACTIONS(445),
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
    [anon_sym_PIPE_DOT] = ACTIONS(445),
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
  [125] = {
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
    [anon_sym_RPAREN] = ACTIONS(449),
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
    [anon_sym_PIPE_DOT] = ACTIONS(449),
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
  [126] = {
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
    [anon_sym_RPAREN] = ACTIONS(453),
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
    [anon_sym_PIPE_DOT] = ACTIONS(453),
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
  [127] = {
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
    [anon_sym_RPAREN] = ACTIONS(457),
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
    [anon_sym_PIPE_DOT] = ACTIONS(457),
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
  [128] = {
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
    [anon_sym_RPAREN] = ACTIONS(461),
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
    [anon_sym_PIPE_DOT] = ACTIONS(461),
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
  [129] = {
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
    [anon_sym_RPAREN] = ACTIONS(465),
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
    [anon_sym_PIPE_DOT] = ACTIONS(465),
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
  [130] = {
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
    [anon_sym_RPAREN] = ACTIONS(469),
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
    [anon_sym_PIPE_DOT] = ACTIONS(469),
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
  [131] = {
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
    [anon_sym_RPAREN] = ACTIONS(473),
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
    [anon_sym_PIPE_DOT] = ACTIONS(473),
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
  [132] = {
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
    [anon_sym_RPAREN] = ACTIONS(477),
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
    [anon_sym_PIPE_DOT] = ACTIONS(477),
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
  [133] = {
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
    [anon_sym_RPAREN] = ACTIONS(481),
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
    [anon_sym_PIPE_DOT] = ACTIONS(481),
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
  [134] = {
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
    [anon_sym_RPAREN] = ACTIONS(485),
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
    [anon_sym_PIPE_DOT] = ACTIONS(485),
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
  [135] = {
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
    [anon_sym_RPAREN] = ACTIONS(489),
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
    [anon_sym_PIPE_DOT] = ACTIONS(489),
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
  [136] = {
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
    [anon_sym_RPAREN] = ACTIONS(493),
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
    [anon_sym_PIPE_DOT] = ACTIONS(493),
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
  [137] = {
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
    [anon_sym_RPAREN] = ACTIONS(497),
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
    [anon_sym_PIPE_DOT] = ACTIONS(497),
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
  [138] = {
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
    [anon_sym_RPAREN] = ACTIONS(501),
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
    [anon_sym_PIPE_DOT] = ACTIONS(501),
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
  [139] = {
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
    [anon_sym_RPAREN] = ACTIONS(505),
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
    [anon_sym_PIPE_DOT] = ACTIONS(505),
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
  [140] = {
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
    [anon_sym_RPAREN] = ACTIONS(509),
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
    [anon_sym_PIPE_DOT] = ACTIONS(509),
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
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_PIPE] = ACTIONS(515),
    [anon_sym_PIPEH] = ACTIONS(513),
    [anon_sym_PIPET] = ACTIONS(513),
    [anon_sym_AT_AT] = ACTIONS(515),
    [anon_sym_AT_ATdbt] = ACTIONS(515),
    [anon_sym_AT_ATdbta] = ACTIONS(513),
    [anon_sym_AT_ATdbtb] = ACTIONS(513),
    [anon_sym_AT_ATdbts] = ACTIONS(513),
    [anon_sym_AT_AT_DOT] = ACTIONS(513),
    [anon_sym_AT_AT_EQ] = ACTIONS(513),
    [anon_sym_AT_ATk] = ACTIONS(513),
    [anon_sym_AT_ATt] = ACTIONS(513),
    [anon_sym_AT_ATb] = ACTIONS(513),
    [anon_sym_AT_ATi] = ACTIONS(515),
    [anon_sym_AT_ATiS] = ACTIONS(513),
    [anon_sym_AT_ATf] = ACTIONS(513),
    [anon_sym_AT_ATs_COLON] = ACTIONS(513),
    [anon_sym_AT_ATc_COLON] = ACTIONS(513),
    [anon_sym_AT] = ACTIONS(515),
    [anon_sym_AT_BANG] = ACTIONS(513),
    [anon_sym_AT_LPAREN] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
    [anon_sym_ATa_COLON] = ACTIONS(513),
    [anon_sym_ATb_COLON] = ACTIONS(513),
    [anon_sym_ATB_COLON] = ACTIONS(513),
    [anon_sym_ATe_COLON] = ACTIONS(513),
    [anon_sym_ATF_COLON] = ACTIONS(513),
    [anon_sym_ATi_COLON] = ACTIONS(513),
    [anon_sym_ATk_COLON] = ACTIONS(513),
    [anon_sym_ATo_COLON] = ACTIONS(513),
    [anon_sym_ATr_COLON] = ACTIONS(513),
    [anon_sym_ATf_COLON] = ACTIONS(513),
    [anon_sym_ATs_COLON] = ACTIONS(513),
    [anon_sym_ATx_COLON] = ACTIONS(513),
    [anon_sym_PIPE_DOT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(515),
    [anon_sym_GT_GT] = ACTIONS(513),
    [sym_html_redirect_operator] = ACTIONS(515),
    [sym_html_append_operator] = ACTIONS(513),
    [anon_sym_BQUOTE] = ACTIONS(513),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(513),
    [anon_sym_CR] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(513),
    [sym_file_descriptor] = ACTIONS(513),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(517),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPEH] = ACTIONS(517),
    [anon_sym_PIPET] = ACTIONS(517),
    [anon_sym_AT_AT] = ACTIONS(519),
    [anon_sym_AT_ATdbt] = ACTIONS(519),
    [anon_sym_AT_ATdbta] = ACTIONS(517),
    [anon_sym_AT_ATdbtb] = ACTIONS(517),
    [anon_sym_AT_ATdbts] = ACTIONS(517),
    [anon_sym_AT_AT_DOT] = ACTIONS(517),
    [anon_sym_AT_AT_EQ] = ACTIONS(517),
    [anon_sym_AT_ATk] = ACTIONS(517),
    [anon_sym_AT_ATt] = ACTIONS(517),
    [anon_sym_AT_ATb] = ACTIONS(517),
    [anon_sym_AT_ATi] = ACTIONS(519),
    [anon_sym_AT_ATiS] = ACTIONS(517),
    [anon_sym_AT_ATf] = ACTIONS(517),
    [anon_sym_AT_ATs_COLON] = ACTIONS(517),
    [anon_sym_AT_ATc_COLON] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(519),
    [anon_sym_AT_BANG] = ACTIONS(517),
    [anon_sym_AT_LPAREN] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_ATa_COLON] = ACTIONS(517),
    [anon_sym_ATb_COLON] = ACTIONS(517),
    [anon_sym_ATB_COLON] = ACTIONS(517),
    [anon_sym_ATe_COLON] = ACTIONS(517),
    [anon_sym_ATF_COLON] = ACTIONS(517),
    [anon_sym_ATi_COLON] = ACTIONS(517),
    [anon_sym_ATk_COLON] = ACTIONS(517),
    [anon_sym_ATo_COLON] = ACTIONS(517),
    [anon_sym_ATr_COLON] = ACTIONS(517),
    [anon_sym_ATf_COLON] = ACTIONS(517),
    [anon_sym_ATs_COLON] = ACTIONS(517),
    [anon_sym_ATx_COLON] = ACTIONS(517),
    [anon_sym_PIPE_DOT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(519),
    [anon_sym_GT_GT] = ACTIONS(517),
    [sym_html_redirect_operator] = ACTIONS(519),
    [sym_html_append_operator] = ACTIONS(517),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(517),
    [anon_sym_CR] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_file_descriptor] = ACTIONS(517),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_TILDE] = ACTIONS(521),
    [anon_sym_PIPE] = ACTIONS(523),
    [anon_sym_PIPEH] = ACTIONS(521),
    [anon_sym_PIPET] = ACTIONS(521),
    [anon_sym_AT_AT] = ACTIONS(523),
    [anon_sym_AT_ATdbt] = ACTIONS(523),
    [anon_sym_AT_ATdbta] = ACTIONS(521),
    [anon_sym_AT_ATdbtb] = ACTIONS(521),
    [anon_sym_AT_ATdbts] = ACTIONS(521),
    [anon_sym_AT_AT_DOT] = ACTIONS(521),
    [anon_sym_AT_AT_EQ] = ACTIONS(521),
    [anon_sym_AT_ATk] = ACTIONS(521),
    [anon_sym_AT_ATt] = ACTIONS(521),
    [anon_sym_AT_ATb] = ACTIONS(521),
    [anon_sym_AT_ATi] = ACTIONS(523),
    [anon_sym_AT_ATiS] = ACTIONS(521),
    [anon_sym_AT_ATf] = ACTIONS(521),
    [anon_sym_AT_ATs_COLON] = ACTIONS(521),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(523),
    [anon_sym_AT_BANG] = ACTIONS(521),
    [anon_sym_AT_LPAREN] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(521),
    [anon_sym_ATa_COLON] = ACTIONS(521),
    [anon_sym_ATb_COLON] = ACTIONS(521),
    [anon_sym_ATB_COLON] = ACTIONS(521),
    [anon_sym_ATe_COLON] = ACTIONS(521),
    [anon_sym_ATF_COLON] = ACTIONS(521),
    [anon_sym_ATi_COLON] = ACTIONS(521),
    [anon_sym_ATk_COLON] = ACTIONS(521),
    [anon_sym_ATo_COLON] = ACTIONS(521),
    [anon_sym_ATr_COLON] = ACTIONS(521),
    [anon_sym_ATf_COLON] = ACTIONS(521),
    [anon_sym_ATs_COLON] = ACTIONS(521),
    [anon_sym_ATx_COLON] = ACTIONS(521),
    [anon_sym_PIPE_DOT] = ACTIONS(521),
    [anon_sym_GT] = ACTIONS(523),
    [anon_sym_GT_GT] = ACTIONS(521),
    [sym_html_redirect_operator] = ACTIONS(523),
    [sym_html_append_operator] = ACTIONS(521),
    [anon_sym_BQUOTE] = ACTIONS(521),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(521),
    [anon_sym_CR] = ACTIONS(521),
    [anon_sym_SEMI] = ACTIONS(521),
    [sym_file_descriptor] = ACTIONS(521),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(525),
    [anon_sym_TILDE] = ACTIONS(525),
    [anon_sym_PIPE] = ACTIONS(527),
    [anon_sym_PIPEH] = ACTIONS(525),
    [anon_sym_PIPET] = ACTIONS(525),
    [anon_sym_AT_AT] = ACTIONS(527),
    [anon_sym_AT_ATdbt] = ACTIONS(527),
    [anon_sym_AT_ATdbta] = ACTIONS(525),
    [anon_sym_AT_ATdbtb] = ACTIONS(525),
    [anon_sym_AT_ATdbts] = ACTIONS(525),
    [anon_sym_AT_AT_DOT] = ACTIONS(525),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(525),
    [anon_sym_AT_ATt] = ACTIONS(525),
    [anon_sym_AT_ATb] = ACTIONS(525),
    [anon_sym_AT_ATi] = ACTIONS(527),
    [anon_sym_AT_ATiS] = ACTIONS(525),
    [anon_sym_AT_ATf] = ACTIONS(525),
    [anon_sym_AT_ATs_COLON] = ACTIONS(525),
    [anon_sym_AT_ATc_COLON] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(527),
    [anon_sym_AT_BANG] = ACTIONS(525),
    [anon_sym_AT_LPAREN] = ACTIONS(525),
    [anon_sym_RPAREN] = ACTIONS(525),
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
    [anon_sym_GT] = ACTIONS(527),
    [anon_sym_GT_GT] = ACTIONS(525),
    [sym_html_redirect_operator] = ACTIONS(527),
    [sym_html_append_operator] = ACTIONS(525),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(525),
    [anon_sym_CR] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(525),
    [sym_file_descriptor] = ACTIONS(525),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_TILDE] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(529),
    [anon_sym_PIPET] = ACTIONS(529),
    [anon_sym_AT_AT] = ACTIONS(531),
    [anon_sym_AT_ATdbt] = ACTIONS(531),
    [anon_sym_AT_ATdbta] = ACTIONS(529),
    [anon_sym_AT_ATdbtb] = ACTIONS(529),
    [anon_sym_AT_ATdbts] = ACTIONS(529),
    [anon_sym_AT_AT_DOT] = ACTIONS(529),
    [anon_sym_AT_AT_EQ] = ACTIONS(529),
    [anon_sym_AT_ATk] = ACTIONS(529),
    [anon_sym_AT_ATt] = ACTIONS(529),
    [anon_sym_AT_ATb] = ACTIONS(529),
    [anon_sym_AT_ATi] = ACTIONS(531),
    [anon_sym_AT_ATiS] = ACTIONS(529),
    [anon_sym_AT_ATf] = ACTIONS(529),
    [anon_sym_AT_ATs_COLON] = ACTIONS(529),
    [anon_sym_AT_ATc_COLON] = ACTIONS(529),
    [anon_sym_AT] = ACTIONS(531),
    [anon_sym_AT_BANG] = ACTIONS(529),
    [anon_sym_AT_LPAREN] = ACTIONS(529),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_ATa_COLON] = ACTIONS(529),
    [anon_sym_ATb_COLON] = ACTIONS(529),
    [anon_sym_ATB_COLON] = ACTIONS(529),
    [anon_sym_ATe_COLON] = ACTIONS(529),
    [anon_sym_ATF_COLON] = ACTIONS(529),
    [anon_sym_ATi_COLON] = ACTIONS(529),
    [anon_sym_ATk_COLON] = ACTIONS(529),
    [anon_sym_ATo_COLON] = ACTIONS(529),
    [anon_sym_ATr_COLON] = ACTIONS(529),
    [anon_sym_ATf_COLON] = ACTIONS(529),
    [anon_sym_ATs_COLON] = ACTIONS(529),
    [anon_sym_ATx_COLON] = ACTIONS(529),
    [anon_sym_PIPE_DOT] = ACTIONS(529),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(529),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(529),
    [anon_sym_BQUOTE] = ACTIONS(529),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_CR] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(529),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(533),
    [anon_sym_PIPET] = ACTIONS(533),
    [anon_sym_AT_AT] = ACTIONS(535),
    [anon_sym_AT_ATdbt] = ACTIONS(535),
    [anon_sym_AT_ATdbta] = ACTIONS(533),
    [anon_sym_AT_ATdbtb] = ACTIONS(533),
    [anon_sym_AT_ATdbts] = ACTIONS(533),
    [anon_sym_AT_AT_DOT] = ACTIONS(533),
    [anon_sym_AT_AT_EQ] = ACTIONS(533),
    [anon_sym_AT_ATk] = ACTIONS(533),
    [anon_sym_AT_ATt] = ACTIONS(533),
    [anon_sym_AT_ATb] = ACTIONS(533),
    [anon_sym_AT_ATi] = ACTIONS(535),
    [anon_sym_AT_ATiS] = ACTIONS(533),
    [anon_sym_AT_ATf] = ACTIONS(533),
    [anon_sym_AT_ATs_COLON] = ACTIONS(533),
    [anon_sym_AT_ATc_COLON] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym_AT_BANG] = ACTIONS(533),
    [anon_sym_AT_LPAREN] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_ATa_COLON] = ACTIONS(533),
    [anon_sym_ATb_COLON] = ACTIONS(533),
    [anon_sym_ATB_COLON] = ACTIONS(533),
    [anon_sym_ATe_COLON] = ACTIONS(533),
    [anon_sym_ATF_COLON] = ACTIONS(533),
    [anon_sym_ATi_COLON] = ACTIONS(533),
    [anon_sym_ATk_COLON] = ACTIONS(533),
    [anon_sym_ATo_COLON] = ACTIONS(533),
    [anon_sym_ATr_COLON] = ACTIONS(533),
    [anon_sym_ATf_COLON] = ACTIONS(533),
    [anon_sym_ATs_COLON] = ACTIONS(533),
    [anon_sym_ATx_COLON] = ACTIONS(533),
    [anon_sym_PIPE_DOT] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(533),
    [sym_html_redirect_operator] = ACTIONS(535),
    [sym_html_append_operator] = ACTIONS(533),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_CR] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(533),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_PIPEH] = ACTIONS(537),
    [anon_sym_PIPET] = ACTIONS(537),
    [anon_sym_AT_AT] = ACTIONS(539),
    [anon_sym_AT_ATdbt] = ACTIONS(539),
    [anon_sym_AT_ATdbta] = ACTIONS(537),
    [anon_sym_AT_ATdbtb] = ACTIONS(537),
    [anon_sym_AT_ATdbts] = ACTIONS(537),
    [anon_sym_AT_AT_DOT] = ACTIONS(537),
    [anon_sym_AT_AT_EQ] = ACTIONS(537),
    [anon_sym_AT_ATk] = ACTIONS(537),
    [anon_sym_AT_ATt] = ACTIONS(537),
    [anon_sym_AT_ATb] = ACTIONS(537),
    [anon_sym_AT_ATi] = ACTIONS(539),
    [anon_sym_AT_ATiS] = ACTIONS(537),
    [anon_sym_AT_ATf] = ACTIONS(537),
    [anon_sym_AT_ATs_COLON] = ACTIONS(537),
    [anon_sym_AT_ATc_COLON] = ACTIONS(537),
    [anon_sym_AT] = ACTIONS(539),
    [anon_sym_AT_BANG] = ACTIONS(537),
    [anon_sym_AT_LPAREN] = ACTIONS(537),
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_ATa_COLON] = ACTIONS(537),
    [anon_sym_ATb_COLON] = ACTIONS(537),
    [anon_sym_ATB_COLON] = ACTIONS(537),
    [anon_sym_ATe_COLON] = ACTIONS(537),
    [anon_sym_ATF_COLON] = ACTIONS(537),
    [anon_sym_ATi_COLON] = ACTIONS(537),
    [anon_sym_ATk_COLON] = ACTIONS(537),
    [anon_sym_ATo_COLON] = ACTIONS(537),
    [anon_sym_ATr_COLON] = ACTIONS(537),
    [anon_sym_ATf_COLON] = ACTIONS(537),
    [anon_sym_ATs_COLON] = ACTIONS(537),
    [anon_sym_ATx_COLON] = ACTIONS(537),
    [anon_sym_PIPE_DOT] = ACTIONS(537),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(537),
    [sym_html_redirect_operator] = ACTIONS(539),
    [sym_html_append_operator] = ACTIONS(537),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(537),
    [anon_sym_CR] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_file_descriptor] = ACTIONS(537),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_TILDE] = ACTIONS(541),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_PIPEH] = ACTIONS(541),
    [anon_sym_PIPET] = ACTIONS(541),
    [anon_sym_AT_AT] = ACTIONS(543),
    [anon_sym_AT_ATdbt] = ACTIONS(543),
    [anon_sym_AT_ATdbta] = ACTIONS(541),
    [anon_sym_AT_ATdbtb] = ACTIONS(541),
    [anon_sym_AT_ATdbts] = ACTIONS(541),
    [anon_sym_AT_AT_DOT] = ACTIONS(541),
    [anon_sym_AT_AT_EQ] = ACTIONS(541),
    [anon_sym_AT_ATk] = ACTIONS(541),
    [anon_sym_AT_ATt] = ACTIONS(541),
    [anon_sym_AT_ATb] = ACTIONS(541),
    [anon_sym_AT_ATi] = ACTIONS(543),
    [anon_sym_AT_ATiS] = ACTIONS(541),
    [anon_sym_AT_ATf] = ACTIONS(541),
    [anon_sym_AT_ATs_COLON] = ACTIONS(541),
    [anon_sym_AT_ATc_COLON] = ACTIONS(541),
    [anon_sym_AT] = ACTIONS(543),
    [anon_sym_AT_BANG] = ACTIONS(541),
    [anon_sym_AT_LPAREN] = ACTIONS(541),
    [anon_sym_RPAREN] = ACTIONS(541),
    [anon_sym_ATa_COLON] = ACTIONS(541),
    [anon_sym_ATb_COLON] = ACTIONS(541),
    [anon_sym_ATB_COLON] = ACTIONS(541),
    [anon_sym_ATe_COLON] = ACTIONS(541),
    [anon_sym_ATF_COLON] = ACTIONS(541),
    [anon_sym_ATi_COLON] = ACTIONS(541),
    [anon_sym_ATk_COLON] = ACTIONS(541),
    [anon_sym_ATo_COLON] = ACTIONS(541),
    [anon_sym_ATr_COLON] = ACTIONS(541),
    [anon_sym_ATf_COLON] = ACTIONS(541),
    [anon_sym_ATs_COLON] = ACTIONS(541),
    [anon_sym_ATx_COLON] = ACTIONS(541),
    [anon_sym_PIPE_DOT] = ACTIONS(541),
    [anon_sym_GT] = ACTIONS(543),
    [anon_sym_GT_GT] = ACTIONS(541),
    [sym_html_redirect_operator] = ACTIONS(543),
    [sym_html_append_operator] = ACTIONS(541),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(541),
    [anon_sym_CR] = ACTIONS(541),
    [anon_sym_SEMI] = ACTIONS(541),
    [sym_file_descriptor] = ACTIONS(541),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_TILDE] = ACTIONS(150),
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
    [anon_sym_RPAREN] = ACTIONS(150),
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
    [anon_sym_PIPE_DOT] = ACTIONS(150),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(150),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym_file_descriptor] = ACTIONS(150),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [anon_sym_TILDE] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(547),
    [anon_sym_PIPEH] = ACTIONS(545),
    [anon_sym_PIPET] = ACTIONS(545),
    [anon_sym_AT_AT] = ACTIONS(547),
    [anon_sym_AT_ATdbt] = ACTIONS(547),
    [anon_sym_AT_ATdbta] = ACTIONS(545),
    [anon_sym_AT_ATdbtb] = ACTIONS(545),
    [anon_sym_AT_ATdbts] = ACTIONS(545),
    [anon_sym_AT_AT_DOT] = ACTIONS(545),
    [anon_sym_AT_AT_EQ] = ACTIONS(545),
    [anon_sym_AT_ATk] = ACTIONS(545),
    [anon_sym_AT_ATt] = ACTIONS(545),
    [anon_sym_AT_ATb] = ACTIONS(545),
    [anon_sym_AT_ATi] = ACTIONS(547),
    [anon_sym_AT_ATiS] = ACTIONS(545),
    [anon_sym_AT_ATf] = ACTIONS(545),
    [anon_sym_AT_ATs_COLON] = ACTIONS(545),
    [anon_sym_AT_ATc_COLON] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(547),
    [anon_sym_AT_BANG] = ACTIONS(545),
    [anon_sym_AT_LPAREN] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_ATa_COLON] = ACTIONS(545),
    [anon_sym_ATb_COLON] = ACTIONS(545),
    [anon_sym_ATB_COLON] = ACTIONS(545),
    [anon_sym_ATe_COLON] = ACTIONS(545),
    [anon_sym_ATF_COLON] = ACTIONS(545),
    [anon_sym_ATi_COLON] = ACTIONS(545),
    [anon_sym_ATk_COLON] = ACTIONS(545),
    [anon_sym_ATo_COLON] = ACTIONS(545),
    [anon_sym_ATr_COLON] = ACTIONS(545),
    [anon_sym_ATf_COLON] = ACTIONS(545),
    [anon_sym_ATs_COLON] = ACTIONS(545),
    [anon_sym_ATx_COLON] = ACTIONS(545),
    [anon_sym_PIPE_DOT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(547),
    [anon_sym_GT_GT] = ACTIONS(545),
    [sym_html_redirect_operator] = ACTIONS(547),
    [sym_html_append_operator] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_CR] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(545),
    [sym_file_descriptor] = ACTIONS(545),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_PIPE] = ACTIONS(551),
    [anon_sym_PIPEH] = ACTIONS(549),
    [anon_sym_PIPET] = ACTIONS(549),
    [anon_sym_AT_AT] = ACTIONS(551),
    [anon_sym_AT_ATdbt] = ACTIONS(551),
    [anon_sym_AT_ATdbta] = ACTIONS(549),
    [anon_sym_AT_ATdbtb] = ACTIONS(549),
    [anon_sym_AT_ATdbts] = ACTIONS(549),
    [anon_sym_AT_AT_DOT] = ACTIONS(549),
    [anon_sym_AT_AT_EQ] = ACTIONS(549),
    [anon_sym_AT_ATk] = ACTIONS(549),
    [anon_sym_AT_ATt] = ACTIONS(549),
    [anon_sym_AT_ATb] = ACTIONS(549),
    [anon_sym_AT_ATi] = ACTIONS(551),
    [anon_sym_AT_ATiS] = ACTIONS(549),
    [anon_sym_AT_ATf] = ACTIONS(549),
    [anon_sym_AT_ATs_COLON] = ACTIONS(549),
    [anon_sym_AT_ATc_COLON] = ACTIONS(549),
    [anon_sym_AT] = ACTIONS(551),
    [anon_sym_AT_BANG] = ACTIONS(549),
    [anon_sym_AT_LPAREN] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_ATa_COLON] = ACTIONS(549),
    [anon_sym_ATb_COLON] = ACTIONS(549),
    [anon_sym_ATB_COLON] = ACTIONS(549),
    [anon_sym_ATe_COLON] = ACTIONS(549),
    [anon_sym_ATF_COLON] = ACTIONS(549),
    [anon_sym_ATi_COLON] = ACTIONS(549),
    [anon_sym_ATk_COLON] = ACTIONS(549),
    [anon_sym_ATo_COLON] = ACTIONS(549),
    [anon_sym_ATr_COLON] = ACTIONS(549),
    [anon_sym_ATf_COLON] = ACTIONS(549),
    [anon_sym_ATs_COLON] = ACTIONS(549),
    [anon_sym_ATx_COLON] = ACTIONS(549),
    [anon_sym_PIPE_DOT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(551),
    [anon_sym_GT_GT] = ACTIONS(549),
    [sym_html_redirect_operator] = ACTIONS(551),
    [sym_html_append_operator] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(549),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(549),
    [anon_sym_CR] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(549),
    [sym_file_descriptor] = ACTIONS(549),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_TILDE] = ACTIONS(553),
    [anon_sym_PIPE] = ACTIONS(555),
    [anon_sym_PIPEH] = ACTIONS(553),
    [anon_sym_PIPET] = ACTIONS(553),
    [anon_sym_AT_AT] = ACTIONS(555),
    [anon_sym_AT_ATdbt] = ACTIONS(555),
    [anon_sym_AT_ATdbta] = ACTIONS(553),
    [anon_sym_AT_ATdbtb] = ACTIONS(553),
    [anon_sym_AT_ATdbts] = ACTIONS(553),
    [anon_sym_AT_AT_DOT] = ACTIONS(553),
    [anon_sym_AT_AT_EQ] = ACTIONS(553),
    [anon_sym_AT_ATk] = ACTIONS(553),
    [anon_sym_AT_ATt] = ACTIONS(553),
    [anon_sym_AT_ATb] = ACTIONS(553),
    [anon_sym_AT_ATi] = ACTIONS(555),
    [anon_sym_AT_ATiS] = ACTIONS(553),
    [anon_sym_AT_ATf] = ACTIONS(553),
    [anon_sym_AT_ATs_COLON] = ACTIONS(553),
    [anon_sym_AT_ATc_COLON] = ACTIONS(553),
    [anon_sym_AT] = ACTIONS(555),
    [anon_sym_AT_BANG] = ACTIONS(553),
    [anon_sym_AT_LPAREN] = ACTIONS(553),
    [anon_sym_RPAREN] = ACTIONS(553),
    [anon_sym_ATa_COLON] = ACTIONS(553),
    [anon_sym_ATb_COLON] = ACTIONS(553),
    [anon_sym_ATB_COLON] = ACTIONS(553),
    [anon_sym_ATe_COLON] = ACTIONS(553),
    [anon_sym_ATF_COLON] = ACTIONS(553),
    [anon_sym_ATi_COLON] = ACTIONS(553),
    [anon_sym_ATk_COLON] = ACTIONS(553),
    [anon_sym_ATo_COLON] = ACTIONS(553),
    [anon_sym_ATr_COLON] = ACTIONS(553),
    [anon_sym_ATf_COLON] = ACTIONS(553),
    [anon_sym_ATs_COLON] = ACTIONS(553),
    [anon_sym_ATx_COLON] = ACTIONS(553),
    [anon_sym_PIPE_DOT] = ACTIONS(553),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_GT_GT] = ACTIONS(553),
    [sym_html_redirect_operator] = ACTIONS(555),
    [sym_html_append_operator] = ACTIONS(553),
    [anon_sym_BQUOTE] = ACTIONS(553),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(553),
    [anon_sym_CR] = ACTIONS(553),
    [anon_sym_SEMI] = ACTIONS(553),
    [sym_file_descriptor] = ACTIONS(553),
  },
  [153] = {
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
    [anon_sym_RPAREN] = ACTIONS(43),
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
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_TILDE] = ACTIONS(557),
    [anon_sym_PIPE] = ACTIONS(559),
    [anon_sym_PIPEH] = ACTIONS(557),
    [anon_sym_PIPET] = ACTIONS(557),
    [anon_sym_AT_AT] = ACTIONS(559),
    [anon_sym_AT_ATdbt] = ACTIONS(559),
    [anon_sym_AT_ATdbta] = ACTIONS(557),
    [anon_sym_AT_ATdbtb] = ACTIONS(557),
    [anon_sym_AT_ATdbts] = ACTIONS(557),
    [anon_sym_AT_AT_DOT] = ACTIONS(557),
    [anon_sym_AT_AT_EQ] = ACTIONS(557),
    [anon_sym_AT_ATk] = ACTIONS(557),
    [anon_sym_AT_ATt] = ACTIONS(557),
    [anon_sym_AT_ATb] = ACTIONS(557),
    [anon_sym_AT_ATi] = ACTIONS(559),
    [anon_sym_AT_ATiS] = ACTIONS(557),
    [anon_sym_AT_ATf] = ACTIONS(557),
    [anon_sym_AT_ATs_COLON] = ACTIONS(557),
    [anon_sym_AT_ATc_COLON] = ACTIONS(557),
    [anon_sym_AT] = ACTIONS(559),
    [anon_sym_AT_BANG] = ACTIONS(557),
    [anon_sym_AT_LPAREN] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
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
    [anon_sym_GT] = ACTIONS(559),
    [anon_sym_GT_GT] = ACTIONS(557),
    [sym_html_redirect_operator] = ACTIONS(559),
    [sym_html_append_operator] = ACTIONS(557),
    [anon_sym_BQUOTE] = ACTIONS(557),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(557),
    [anon_sym_CR] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(557),
    [sym_file_descriptor] = ACTIONS(557),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(561),
    [anon_sym_PIPE] = ACTIONS(563),
    [anon_sym_PIPEH] = ACTIONS(561),
    [anon_sym_PIPET] = ACTIONS(561),
    [anon_sym_AT_AT] = ACTIONS(563),
    [anon_sym_AT_ATdbt] = ACTIONS(563),
    [anon_sym_AT_ATdbta] = ACTIONS(561),
    [anon_sym_AT_ATdbtb] = ACTIONS(561),
    [anon_sym_AT_ATdbts] = ACTIONS(561),
    [anon_sym_AT_AT_DOT] = ACTIONS(561),
    [anon_sym_AT_AT_EQ] = ACTIONS(561),
    [anon_sym_AT_ATk] = ACTIONS(561),
    [anon_sym_AT_ATt] = ACTIONS(561),
    [anon_sym_AT_ATb] = ACTIONS(561),
    [anon_sym_AT_ATi] = ACTIONS(563),
    [anon_sym_AT_ATiS] = ACTIONS(561),
    [anon_sym_AT_ATf] = ACTIONS(561),
    [anon_sym_AT_ATs_COLON] = ACTIONS(561),
    [anon_sym_AT_ATc_COLON] = ACTIONS(561),
    [anon_sym_AT] = ACTIONS(563),
    [anon_sym_AT_BANG] = ACTIONS(561),
    [anon_sym_AT_LPAREN] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_ATa_COLON] = ACTIONS(561),
    [anon_sym_ATb_COLON] = ACTIONS(561),
    [anon_sym_ATB_COLON] = ACTIONS(561),
    [anon_sym_ATe_COLON] = ACTIONS(561),
    [anon_sym_ATF_COLON] = ACTIONS(561),
    [anon_sym_ATi_COLON] = ACTIONS(561),
    [anon_sym_ATk_COLON] = ACTIONS(561),
    [anon_sym_ATo_COLON] = ACTIONS(561),
    [anon_sym_ATr_COLON] = ACTIONS(561),
    [anon_sym_ATf_COLON] = ACTIONS(561),
    [anon_sym_ATs_COLON] = ACTIONS(561),
    [anon_sym_ATx_COLON] = ACTIONS(561),
    [anon_sym_PIPE_DOT] = ACTIONS(561),
    [anon_sym_GT] = ACTIONS(563),
    [anon_sym_GT_GT] = ACTIONS(561),
    [sym_html_redirect_operator] = ACTIONS(563),
    [sym_html_append_operator] = ACTIONS(561),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(561),
    [anon_sym_CR] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(561),
    [sym_file_descriptor] = ACTIONS(561),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [anon_sym_TILDE] = ACTIONS(565),
    [anon_sym_PIPE] = ACTIONS(567),
    [anon_sym_PIPEH] = ACTIONS(565),
    [anon_sym_PIPET] = ACTIONS(565),
    [anon_sym_AT_AT] = ACTIONS(567),
    [anon_sym_AT_ATdbt] = ACTIONS(567),
    [anon_sym_AT_ATdbta] = ACTIONS(565),
    [anon_sym_AT_ATdbtb] = ACTIONS(565),
    [anon_sym_AT_ATdbts] = ACTIONS(565),
    [anon_sym_AT_AT_DOT] = ACTIONS(565),
    [anon_sym_AT_AT_EQ] = ACTIONS(565),
    [anon_sym_AT_ATk] = ACTIONS(565),
    [anon_sym_AT_ATt] = ACTIONS(565),
    [anon_sym_AT_ATb] = ACTIONS(565),
    [anon_sym_AT_ATi] = ACTIONS(567),
    [anon_sym_AT_ATiS] = ACTIONS(565),
    [anon_sym_AT_ATf] = ACTIONS(565),
    [anon_sym_AT_ATs_COLON] = ACTIONS(565),
    [anon_sym_AT_ATc_COLON] = ACTIONS(565),
    [anon_sym_AT] = ACTIONS(567),
    [anon_sym_AT_BANG] = ACTIONS(565),
    [anon_sym_AT_LPAREN] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(565),
    [anon_sym_ATa_COLON] = ACTIONS(565),
    [anon_sym_ATb_COLON] = ACTIONS(565),
    [anon_sym_ATB_COLON] = ACTIONS(565),
    [anon_sym_ATe_COLON] = ACTIONS(565),
    [anon_sym_ATF_COLON] = ACTIONS(565),
    [anon_sym_ATi_COLON] = ACTIONS(565),
    [anon_sym_ATk_COLON] = ACTIONS(565),
    [anon_sym_ATo_COLON] = ACTIONS(565),
    [anon_sym_ATr_COLON] = ACTIONS(565),
    [anon_sym_ATf_COLON] = ACTIONS(565),
    [anon_sym_ATs_COLON] = ACTIONS(565),
    [anon_sym_ATx_COLON] = ACTIONS(565),
    [anon_sym_PIPE_DOT] = ACTIONS(565),
    [anon_sym_GT] = ACTIONS(567),
    [anon_sym_GT_GT] = ACTIONS(565),
    [sym_html_redirect_operator] = ACTIONS(567),
    [sym_html_append_operator] = ACTIONS(565),
    [anon_sym_BQUOTE] = ACTIONS(565),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(565),
    [anon_sym_CR] = ACTIONS(565),
    [anon_sym_SEMI] = ACTIONS(565),
    [sym_file_descriptor] = ACTIONS(565),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_TILDE] = ACTIONS(569),
    [anon_sym_PIPE] = ACTIONS(571),
    [anon_sym_PIPEH] = ACTIONS(569),
    [anon_sym_PIPET] = ACTIONS(569),
    [anon_sym_AT_AT] = ACTIONS(571),
    [anon_sym_AT_ATdbt] = ACTIONS(571),
    [anon_sym_AT_ATdbta] = ACTIONS(569),
    [anon_sym_AT_ATdbtb] = ACTIONS(569),
    [anon_sym_AT_ATdbts] = ACTIONS(569),
    [anon_sym_AT_AT_DOT] = ACTIONS(569),
    [anon_sym_AT_AT_EQ] = ACTIONS(569),
    [anon_sym_AT_ATk] = ACTIONS(569),
    [anon_sym_AT_ATt] = ACTIONS(569),
    [anon_sym_AT_ATb] = ACTIONS(569),
    [anon_sym_AT_ATi] = ACTIONS(571),
    [anon_sym_AT_ATiS] = ACTIONS(569),
    [anon_sym_AT_ATf] = ACTIONS(569),
    [anon_sym_AT_ATs_COLON] = ACTIONS(569),
    [anon_sym_AT_ATc_COLON] = ACTIONS(569),
    [anon_sym_AT] = ACTIONS(571),
    [anon_sym_AT_BANG] = ACTIONS(569),
    [anon_sym_AT_LPAREN] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(569),
    [anon_sym_ATa_COLON] = ACTIONS(569),
    [anon_sym_ATb_COLON] = ACTIONS(569),
    [anon_sym_ATB_COLON] = ACTIONS(569),
    [anon_sym_ATe_COLON] = ACTIONS(569),
    [anon_sym_ATF_COLON] = ACTIONS(569),
    [anon_sym_ATi_COLON] = ACTIONS(569),
    [anon_sym_ATk_COLON] = ACTIONS(569),
    [anon_sym_ATo_COLON] = ACTIONS(569),
    [anon_sym_ATr_COLON] = ACTIONS(569),
    [anon_sym_ATf_COLON] = ACTIONS(569),
    [anon_sym_ATs_COLON] = ACTIONS(569),
    [anon_sym_ATx_COLON] = ACTIONS(569),
    [anon_sym_PIPE_DOT] = ACTIONS(569),
    [anon_sym_GT] = ACTIONS(571),
    [anon_sym_GT_GT] = ACTIONS(569),
    [sym_html_redirect_operator] = ACTIONS(571),
    [sym_html_append_operator] = ACTIONS(569),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(569),
    [anon_sym_CR] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(569),
    [sym_file_descriptor] = ACTIONS(569),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(575),
    [anon_sym_PIPEH] = ACTIONS(573),
    [anon_sym_PIPET] = ACTIONS(573),
    [anon_sym_AT_AT] = ACTIONS(575),
    [anon_sym_AT_ATdbt] = ACTIONS(575),
    [anon_sym_AT_ATdbta] = ACTIONS(573),
    [anon_sym_AT_ATdbtb] = ACTIONS(573),
    [anon_sym_AT_ATdbts] = ACTIONS(573),
    [anon_sym_AT_AT_DOT] = ACTIONS(573),
    [anon_sym_AT_AT_EQ] = ACTIONS(573),
    [anon_sym_AT_ATk] = ACTIONS(573),
    [anon_sym_AT_ATt] = ACTIONS(573),
    [anon_sym_AT_ATb] = ACTIONS(573),
    [anon_sym_AT_ATi] = ACTIONS(575),
    [anon_sym_AT_ATiS] = ACTIONS(573),
    [anon_sym_AT_ATf] = ACTIONS(573),
    [anon_sym_AT_ATs_COLON] = ACTIONS(573),
    [anon_sym_AT_ATc_COLON] = ACTIONS(573),
    [anon_sym_AT] = ACTIONS(575),
    [anon_sym_AT_BANG] = ACTIONS(573),
    [anon_sym_AT_LPAREN] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_ATa_COLON] = ACTIONS(573),
    [anon_sym_ATb_COLON] = ACTIONS(573),
    [anon_sym_ATB_COLON] = ACTIONS(573),
    [anon_sym_ATe_COLON] = ACTIONS(573),
    [anon_sym_ATF_COLON] = ACTIONS(573),
    [anon_sym_ATi_COLON] = ACTIONS(573),
    [anon_sym_ATk_COLON] = ACTIONS(573),
    [anon_sym_ATo_COLON] = ACTIONS(573),
    [anon_sym_ATr_COLON] = ACTIONS(573),
    [anon_sym_ATf_COLON] = ACTIONS(573),
    [anon_sym_ATs_COLON] = ACTIONS(573),
    [anon_sym_ATx_COLON] = ACTIONS(573),
    [anon_sym_PIPE_DOT] = ACTIONS(573),
    [anon_sym_GT] = ACTIONS(575),
    [anon_sym_GT_GT] = ACTIONS(573),
    [sym_html_redirect_operator] = ACTIONS(575),
    [sym_html_append_operator] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(573),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(573),
    [anon_sym_CR] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(573),
    [sym_file_descriptor] = ACTIONS(573),
  },
  [159] = {
    [ts_builtin_sym_end] = ACTIONS(577),
    [anon_sym_TILDE] = ACTIONS(577),
    [anon_sym_PIPE] = ACTIONS(579),
    [anon_sym_PIPEH] = ACTIONS(577),
    [anon_sym_PIPET] = ACTIONS(577),
    [anon_sym_AT_AT] = ACTIONS(579),
    [anon_sym_AT_ATdbt] = ACTIONS(579),
    [anon_sym_AT_ATdbta] = ACTIONS(577),
    [anon_sym_AT_ATdbtb] = ACTIONS(577),
    [anon_sym_AT_ATdbts] = ACTIONS(577),
    [anon_sym_AT_AT_DOT] = ACTIONS(577),
    [anon_sym_AT_AT_EQ] = ACTIONS(577),
    [anon_sym_AT_ATk] = ACTIONS(577),
    [anon_sym_AT_ATt] = ACTIONS(577),
    [anon_sym_AT_ATb] = ACTIONS(577),
    [anon_sym_AT_ATi] = ACTIONS(579),
    [anon_sym_AT_ATiS] = ACTIONS(577),
    [anon_sym_AT_ATf] = ACTIONS(577),
    [anon_sym_AT_ATs_COLON] = ACTIONS(577),
    [anon_sym_AT_ATc_COLON] = ACTIONS(577),
    [anon_sym_AT] = ACTIONS(579),
    [anon_sym_AT_BANG] = ACTIONS(577),
    [anon_sym_AT_LPAREN] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_ATa_COLON] = ACTIONS(577),
    [anon_sym_ATb_COLON] = ACTIONS(577),
    [anon_sym_ATB_COLON] = ACTIONS(577),
    [anon_sym_ATe_COLON] = ACTIONS(577),
    [anon_sym_ATF_COLON] = ACTIONS(577),
    [anon_sym_ATi_COLON] = ACTIONS(577),
    [anon_sym_ATk_COLON] = ACTIONS(577),
    [anon_sym_ATo_COLON] = ACTIONS(577),
    [anon_sym_ATr_COLON] = ACTIONS(577),
    [anon_sym_ATf_COLON] = ACTIONS(577),
    [anon_sym_ATs_COLON] = ACTIONS(577),
    [anon_sym_ATx_COLON] = ACTIONS(577),
    [anon_sym_PIPE_DOT] = ACTIONS(577),
    [anon_sym_GT] = ACTIONS(579),
    [anon_sym_GT_GT] = ACTIONS(577),
    [sym_html_redirect_operator] = ACTIONS(579),
    [sym_html_append_operator] = ACTIONS(577),
    [anon_sym_BQUOTE] = ACTIONS(577),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(577),
    [anon_sym_CR] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(577),
    [sym_file_descriptor] = ACTIONS(577),
  },
  [160] = {
    [sym__redirect_operator] = STATE(188),
    [sym_fdn_redirect_operator] = STATE(188),
    [sym_fdn_append_operator] = STATE(188),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(581),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(583),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(361),
    [sym_html_redirect_operator] = ACTIONS(363),
    [sym_html_append_operator] = ACTIONS(365),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(287),
    [sym_file_descriptor] = ACTIONS(367),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(587),
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPEH] = ACTIONS(589),
    [anon_sym_PIPET] = ACTIONS(589),
    [sym_pipe_second_command] = ACTIONS(591),
    [anon_sym_AT_AT] = ACTIONS(589),
    [anon_sym_AT_ATdbt] = ACTIONS(589),
    [anon_sym_AT_ATdbta] = ACTIONS(589),
    [anon_sym_AT_ATdbtb] = ACTIONS(589),
    [anon_sym_AT_ATdbts] = ACTIONS(589),
    [anon_sym_AT_AT_DOT] = ACTIONS(589),
    [anon_sym_AT_AT_EQ] = ACTIONS(589),
    [anon_sym_AT_ATk] = ACTIONS(589),
    [anon_sym_AT_ATt] = ACTIONS(589),
    [anon_sym_AT_ATb] = ACTIONS(589),
    [anon_sym_AT_ATi] = ACTIONS(589),
    [anon_sym_AT_ATiS] = ACTIONS(589),
    [anon_sym_AT_ATf] = ACTIONS(589),
    [anon_sym_AT_ATs_COLON] = ACTIONS(589),
    [anon_sym_AT_ATc_COLON] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym_AT_BANG] = ACTIONS(589),
    [anon_sym_AT_LPAREN] = ACTIONS(589),
    [anon_sym_ATa_COLON] = ACTIONS(589),
    [anon_sym_ATb_COLON] = ACTIONS(589),
    [anon_sym_ATB_COLON] = ACTIONS(589),
    [anon_sym_ATe_COLON] = ACTIONS(589),
    [anon_sym_ATF_COLON] = ACTIONS(589),
    [anon_sym_ATi_COLON] = ACTIONS(589),
    [anon_sym_ATk_COLON] = ACTIONS(589),
    [anon_sym_ATo_COLON] = ACTIONS(589),
    [anon_sym_ATr_COLON] = ACTIONS(589),
    [anon_sym_ATf_COLON] = ACTIONS(589),
    [anon_sym_ATs_COLON] = ACTIONS(589),
    [anon_sym_ATx_COLON] = ACTIONS(589),
    [anon_sym_PIPE_DOT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_GT_GT] = ACTIONS(589),
    [sym_html_redirect_operator] = ACTIONS(589),
    [sym_html_append_operator] = ACTIONS(589),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(589),
    [anon_sym_CR] = ACTIONS(589),
    [anon_sym_SEMI] = ACTIONS(589),
    [sym_file_descriptor] = ACTIONS(587),
  },
  [162] = {
    [sym__redirect_operator] = STATE(188),
    [sym_fdn_redirect_operator] = STATE(188),
    [sym_fdn_append_operator] = STATE(188),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(593),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(361),
    [sym_html_redirect_operator] = ACTIONS(363),
    [sym_html_append_operator] = ACTIONS(365),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(287),
    [sym_file_descriptor] = ACTIONS(367),
  },
  [163] = {
    [anon_sym_TILDE] = ACTIONS(281),
    [anon_sym_PIPE] = ACTIONS(281),
    [anon_sym_PIPEH] = ACTIONS(281),
    [anon_sym_PIPET] = ACTIONS(281),
    [anon_sym_AT_AT] = ACTIONS(281),
    [anon_sym_AT_ATdbt] = ACTIONS(281),
    [anon_sym_AT_ATdbta] = ACTIONS(281),
    [anon_sym_AT_ATdbtb] = ACTIONS(281),
    [anon_sym_AT_ATdbts] = ACTIONS(281),
    [anon_sym_AT_AT_DOT] = ACTIONS(281),
    [anon_sym_AT_AT_EQ] = ACTIONS(281),
    [anon_sym_AT_ATk] = ACTIONS(281),
    [anon_sym_AT_ATt] = ACTIONS(281),
    [anon_sym_AT_ATb] = ACTIONS(281),
    [anon_sym_AT_ATi] = ACTIONS(281),
    [anon_sym_AT_ATiS] = ACTIONS(281),
    [anon_sym_AT_ATf] = ACTIONS(281),
    [anon_sym_AT_ATs_COLON] = ACTIONS(281),
    [anon_sym_AT_ATc_COLON] = ACTIONS(281),
    [anon_sym_AT] = ACTIONS(281),
    [anon_sym_AT_BANG] = ACTIONS(281),
    [anon_sym_AT_LPAREN] = ACTIONS(281),
    [anon_sym_RPAREN] = ACTIONS(279),
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
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_PIPE_DOT] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(281),
    [sym_html_redirect_operator] = ACTIONS(281),
    [sym_html_append_operator] = ACTIONS(281),
    [sym_macro_content] = ACTIONS(285),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(281),
    [sym_file_descriptor] = ACTIONS(279),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_TILDE] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(599),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(599),
    [anon_sym_GT_GT] = ACTIONS(597),
    [sym_html_redirect_operator] = ACTIONS(599),
    [sym_html_append_operator] = ACTIONS(597),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(597),
    [anon_sym_CR] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_file_descriptor] = ACTIONS(597),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(601),
    [sym_html_redirect_operator] = ACTIONS(603),
    [sym_html_append_operator] = ACTIONS(601),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(601),
    [anon_sym_CR] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(601),
    [sym_file_descriptor] = ACTIONS(601),
  },
  [166] = {
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPEH] = ACTIONS(589),
    [anon_sym_PIPET] = ACTIONS(589),
    [sym_pipe_second_command] = ACTIONS(591),
    [anon_sym_AT_AT] = ACTIONS(589),
    [anon_sym_AT_ATdbt] = ACTIONS(589),
    [anon_sym_AT_ATdbta] = ACTIONS(589),
    [anon_sym_AT_ATdbtb] = ACTIONS(589),
    [anon_sym_AT_ATdbts] = ACTIONS(589),
    [anon_sym_AT_AT_DOT] = ACTIONS(589),
    [anon_sym_AT_AT_EQ] = ACTIONS(589),
    [anon_sym_AT_ATk] = ACTIONS(589),
    [anon_sym_AT_ATt] = ACTIONS(589),
    [anon_sym_AT_ATb] = ACTIONS(589),
    [anon_sym_AT_ATi] = ACTIONS(589),
    [anon_sym_AT_ATiS] = ACTIONS(589),
    [anon_sym_AT_ATf] = ACTIONS(589),
    [anon_sym_AT_ATs_COLON] = ACTIONS(589),
    [anon_sym_AT_ATc_COLON] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym_AT_BANG] = ACTIONS(589),
    [anon_sym_AT_LPAREN] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_ATa_COLON] = ACTIONS(589),
    [anon_sym_ATb_COLON] = ACTIONS(589),
    [anon_sym_ATB_COLON] = ACTIONS(589),
    [anon_sym_ATe_COLON] = ACTIONS(589),
    [anon_sym_ATF_COLON] = ACTIONS(589),
    [anon_sym_ATi_COLON] = ACTIONS(589),
    [anon_sym_ATk_COLON] = ACTIONS(589),
    [anon_sym_ATo_COLON] = ACTIONS(589),
    [anon_sym_ATr_COLON] = ACTIONS(589),
    [anon_sym_ATf_COLON] = ACTIONS(589),
    [anon_sym_ATs_COLON] = ACTIONS(589),
    [anon_sym_ATx_COLON] = ACTIONS(589),
    [anon_sym_PIPE_DOT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_GT_GT] = ACTIONS(589),
    [sym_html_redirect_operator] = ACTIONS(589),
    [sym_html_append_operator] = ACTIONS(589),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(589),
    [sym_file_descriptor] = ACTIONS(587),
  },
  [167] = {
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_PIPEH] = ACTIONS(589),
    [anon_sym_PIPET] = ACTIONS(589),
    [sym_pipe_second_command] = ACTIONS(591),
    [anon_sym_AT_AT] = ACTIONS(589),
    [anon_sym_AT_ATdbt] = ACTIONS(589),
    [anon_sym_AT_ATdbta] = ACTIONS(589),
    [anon_sym_AT_ATdbtb] = ACTIONS(589),
    [anon_sym_AT_ATdbts] = ACTIONS(589),
    [anon_sym_AT_AT_DOT] = ACTIONS(589),
    [anon_sym_AT_AT_EQ] = ACTIONS(589),
    [anon_sym_AT_ATk] = ACTIONS(589),
    [anon_sym_AT_ATt] = ACTIONS(589),
    [anon_sym_AT_ATb] = ACTIONS(589),
    [anon_sym_AT_ATi] = ACTIONS(589),
    [anon_sym_AT_ATiS] = ACTIONS(589),
    [anon_sym_AT_ATf] = ACTIONS(589),
    [anon_sym_AT_ATs_COLON] = ACTIONS(589),
    [anon_sym_AT_ATc_COLON] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym_AT_BANG] = ACTIONS(589),
    [anon_sym_AT_LPAREN] = ACTIONS(589),
    [anon_sym_ATa_COLON] = ACTIONS(589),
    [anon_sym_ATb_COLON] = ACTIONS(589),
    [anon_sym_ATB_COLON] = ACTIONS(589),
    [anon_sym_ATe_COLON] = ACTIONS(589),
    [anon_sym_ATF_COLON] = ACTIONS(589),
    [anon_sym_ATi_COLON] = ACTIONS(589),
    [anon_sym_ATk_COLON] = ACTIONS(589),
    [anon_sym_ATo_COLON] = ACTIONS(589),
    [anon_sym_ATr_COLON] = ACTIONS(589),
    [anon_sym_ATf_COLON] = ACTIONS(589),
    [anon_sym_ATs_COLON] = ACTIONS(589),
    [anon_sym_ATx_COLON] = ACTIONS(589),
    [anon_sym_PIPE_DOT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_GT_GT] = ACTIONS(589),
    [sym_html_redirect_operator] = ACTIONS(589),
    [sym_html_append_operator] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(589),
    [sym_file_descriptor] = ACTIONS(587),
  },
  [168] = {
    [anon_sym_TILDE] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(599),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(583),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(599),
    [anon_sym_GT_GT] = ACTIONS(597),
    [sym_html_redirect_operator] = ACTIONS(599),
    [sym_html_append_operator] = ACTIONS(597),
    [anon_sym_BQUOTE] = ACTIONS(597),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_file_descriptor] = ACTIONS(597),
  },
  [169] = {
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(583),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(585),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(601),
    [sym_html_redirect_operator] = ACTIONS(603),
    [sym_html_append_operator] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(601),
    [sym_file_descriptor] = ACTIONS(601),
  },
  [170] = {
    [anon_sym_TILDE] = ACTIONS(597),
    [anon_sym_PIPE] = ACTIONS(599),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(599),
    [anon_sym_GT_GT] = ACTIONS(597),
    [sym_html_redirect_operator] = ACTIONS(599),
    [sym_html_append_operator] = ACTIONS(597),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(597),
    [sym_file_descriptor] = ACTIONS(597),
  },
  [171] = {
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(603),
    [anon_sym_PIPEH] = ACTIONS(293),
    [anon_sym_PIPET] = ACTIONS(295),
    [anon_sym_AT_AT] = ACTIONS(297),
    [anon_sym_AT_ATdbt] = ACTIONS(299),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(303),
    [anon_sym_AT_ATdbts] = ACTIONS(305),
    [anon_sym_AT_AT_DOT] = ACTIONS(307),
    [anon_sym_AT_AT_EQ] = ACTIONS(309),
    [anon_sym_AT_ATk] = ACTIONS(311),
    [anon_sym_AT_ATt] = ACTIONS(313),
    [anon_sym_AT_ATb] = ACTIONS(315),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(319),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(323),
    [anon_sym_AT_ATc_COLON] = ACTIONS(595),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym_AT_BANG] = ACTIONS(329),
    [anon_sym_AT_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_ATa_COLON] = ACTIONS(333),
    [anon_sym_ATb_COLON] = ACTIONS(335),
    [anon_sym_ATB_COLON] = ACTIONS(337),
    [anon_sym_ATe_COLON] = ACTIONS(339),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(343),
    [anon_sym_ATk_COLON] = ACTIONS(345),
    [anon_sym_ATo_COLON] = ACTIONS(347),
    [anon_sym_ATr_COLON] = ACTIONS(349),
    [anon_sym_ATf_COLON] = ACTIONS(351),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(355),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_GT_GT] = ACTIONS(601),
    [sym_html_redirect_operator] = ACTIONS(603),
    [sym_html_append_operator] = ACTIONS(601),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(601),
    [sym_file_descriptor] = ACTIONS(601),
  },
  [172] = {
    [aux_sym_commands_repeat1] = STATE(172),
    [ts_builtin_sym_end] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_DOT] = ACTIONS(607),
    [anon_sym_DOT_BANG] = ACTIONS(605),
    [anon_sym_DOT_LPAREN] = ACTIONS(605),
    [anon_sym_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PERCENT] = ACTIONS(605),
    [anon_sym_env] = ACTIONS(605),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(607),
    [aux_sym__interpret_identifier_token1] = ACTIONS(607),
    [aux_sym__interpret_identifier_token2] = ACTIONS(605),
    [sym_system_identifier] = ACTIONS(605),
    [sym_question_mark_identifier] = ACTIONS(605),
    [sym_pointer_identifier] = ACTIONS(605),
    [sym_macro_identifier] = ACTIONS(605),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(609),
    [anon_sym_CR] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(609),
    [sym_cmd_identifier] = ACTIONS(605),
    [sym__help_command] = ACTIONS(605),
    [sym_repeat_number] = ACTIONS(605),
    [sym_interpreter_identifier] = ACTIONS(605),
  },
  [173] = {
    [aux_sym__commands_singleline_repeat1] = STATE(173),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [anon_sym_DOT] = ACTIONS(614),
    [anon_sym_DOT_BANG] = ACTIONS(612),
    [anon_sym_DOT_LPAREN] = ACTIONS(612),
    [anon_sym_DOT_SLASH] = ACTIONS(612),
    [anon_sym_PERCENT] = ACTIONS(612),
    [anon_sym_env] = ACTIONS(612),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(614),
    [aux_sym__interpret_identifier_token1] = ACTIONS(614),
    [aux_sym__interpret_identifier_token2] = ACTIONS(612),
    [sym_system_identifier] = ACTIONS(612),
    [sym_question_mark_identifier] = ACTIONS(612),
    [sym_pointer_identifier] = ACTIONS(612),
    [sym_macro_identifier] = ACTIONS(612),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(616),
    [sym_cmd_identifier] = ACTIONS(612),
    [sym__help_command] = ACTIONS(612),
    [sym_repeat_number] = ACTIONS(612),
    [sym_interpreter_identifier] = ACTIONS(612),
  },
  [174] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(119),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [175] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(152),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [176] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(119),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [177] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(152),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(59),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [178] = {
    [sym__arg] = STATE(61),
    [sym_arg] = STATE(71),
    [sym_eq_sep_val] = STATE(158),
    [sym_double_quoted_arg] = STATE(61),
    [sym_single_quoted_arg] = STATE(61),
    [sym_cmd_substitution_arg] = STATE(61),
    [sym_concatenation] = STATE(107),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_arg_identifier] = ACTIONS(621),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(625),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [sym__comment] = ACTIONS(95),
  },
  [179] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(133),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [180] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(129),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [181] = {
    [sym_eq_sep_args] = STATE(155),
    [sym__eq_sep_key_single] = STATE(67),
    [sym_eq_sep_key] = STATE(104),
    [sym_double_quoted_arg] = STATE(90),
    [sym_single_quoted_arg] = STATE(90),
    [sym_cmd_substitution_arg] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym__eq_sep_key_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(95),
  },
  [182] = {
    [sym__arg] = STATE(61),
    [sym_arg] = STATE(98),
    [sym_double_quoted_arg] = STATE(61),
    [sym_single_quoted_arg] = STATE(61),
    [sym_cmd_substitution_arg] = STATE(61),
    [sym_concatenation] = STATE(107),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_arg_identifier] = ACTIONS(621),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(625),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [sym__comment] = ACTIONS(95),
  },
  [183] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(139),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [184] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(140),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [185] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(137),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [186] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(108),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [187] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(126),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [188] = {
    [sym__arg] = STATE(225),
    [sym_arg] = STATE(244),
    [sym_double_quoted_arg] = STATE(225),
    [sym_single_quoted_arg] = STATE(225),
    [sym_cmd_substitution_arg] = STATE(225),
    [sym_concatenation] = STATE(238),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [sym_arg_identifier] = ACTIONS(641),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_BQUOTE] = ACTIONS(647),
    [sym__comment] = ACTIONS(95),
  },
  [189] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(135),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [190] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(134),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [191] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(138),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [192] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(128),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [193] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(127),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [194] = {
    [sym__arg] = STATE(227),
    [sym_arg] = STATE(195),
    [sym_double_quoted_arg] = STATE(227),
    [sym_single_quoted_arg] = STATE(227),
    [sym_cmd_substitution_arg] = STATE(227),
    [sym_concatenation] = STATE(247),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [sym_arg_identifier] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(655),
    [anon_sym_BQUOTE] = ACTIONS(657),
    [sym__comment] = ACTIONS(95),
  },
  [195] = {
    [sym__arg] = STATE(225),
    [sym_arg] = STATE(293),
    [sym_double_quoted_arg] = STATE(225),
    [sym_single_quoted_arg] = STATE(225),
    [sym_cmd_substitution_arg] = STATE(225),
    [sym_concatenation] = STATE(238),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [sym_arg_identifier] = ACTIONS(641),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_BQUOTE] = ACTIONS(647),
    [sym__comment] = ACTIONS(95),
  },
  [196] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(125),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [197] = {
    [sym__arg] = STATE(227),
    [sym_arg] = STATE(187),
    [sym_double_quoted_arg] = STATE(227),
    [sym_single_quoted_arg] = STATE(227),
    [sym_cmd_substitution_arg] = STATE(227),
    [sym_concatenation] = STATE(247),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [sym_arg_identifier] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(655),
    [anon_sym_BQUOTE] = ACTIONS(657),
    [sym__comment] = ACTIONS(95),
  },
  [198] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(151),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [199] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(117),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [200] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(124),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [201] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(118),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [202] = {
    [sym__arg] = STATE(88),
    [sym_arg] = STATE(120),
    [sym_double_quoted_arg] = STATE(88),
    [sym_single_quoted_arg] = STATE(88),
    [sym_cmd_substitution_arg] = STATE(88),
    [sym_concatenation] = STATE(149),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [203] = {
    [sym__arg] = STATE(227),
    [sym_arg] = STATE(197),
    [sym_double_quoted_arg] = STATE(227),
    [sym_single_quoted_arg] = STATE(227),
    [sym_cmd_substitution_arg] = STATE(227),
    [sym_concatenation] = STATE(247),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [sym_arg_identifier] = ACTIONS(651),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(655),
    [anon_sym_BQUOTE] = ACTIONS(657),
    [sym__comment] = ACTIONS(95),
  },
  [204] = {
    [sym__arg] = STATE(82),
    [sym_double_quoted_arg] = STATE(82),
    [sym_single_quoted_arg] = STATE(82),
    [sym_cmd_substitution_arg] = STATE(82),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym_arg_identifier] = ACTIONS(659),
    [anon_sym_SQUOTE] = ACTIONS(623),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(625),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [sym__comment] = ACTIONS(95),
  },
  [205] = {
    [sym__arg] = STATE(241),
    [sym_double_quoted_arg] = STATE(241),
    [sym_single_quoted_arg] = STATE(241),
    [sym_cmd_substitution_arg] = STATE(241),
    [anon_sym_DQUOTE] = ACTIONS(649),
    [sym_arg_identifier] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(655),
    [anon_sym_BQUOTE] = ACTIONS(657),
    [sym__comment] = ACTIONS(95),
  },
  [206] = {
    [sym__arg] = STATE(105),
    [sym_double_quoted_arg] = STATE(105),
    [sym_single_quoted_arg] = STATE(105),
    [sym_cmd_substitution_arg] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [sym_arg_identifier] = ACTIONS(663),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(635),
    [anon_sym_BQUOTE] = ACTIONS(637),
    [sym__comment] = ACTIONS(95),
  },
  [207] = {
    [sym__eq_sep_key_single] = STATE(92),
    [sym_double_quoted_arg] = STATE(90),
    [sym_single_quoted_arg] = STATE(90),
    [sym_cmd_substitution_arg] = STATE(90),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym__eq_sep_key_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(95),
  },
  [208] = {
    [sym__arg] = STATE(229),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [anon_sym_DQUOTE] = ACTIONS(639),
    [sym_arg_identifier] = ACTIONS(665),
    [anon_sym_SQUOTE] = ACTIONS(643),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(645),
    [anon_sym_BQUOTE] = ACTIONS(647),
    [sym__comment] = ACTIONS(95),
  },
  [209] = {
    [sym__arg] = STATE(52),
    [sym_double_quoted_arg] = STATE(52),
    [sym_single_quoted_arg] = STATE(52),
    [sym_cmd_substitution_arg] = STATE(52),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(667),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [210] = {
    [sym_cmd_substitution_arg] = STATE(212),
    [aux_sym_double_quoted_arg_repeat1] = STATE(212),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(671),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(671),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(671),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [211] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(677),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(679),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(679),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(679),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(682),
    [anon_sym_BQUOTE] = ACTIONS(685),
    [sym__comment] = ACTIONS(95),
  },
  [212] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [213] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(692),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(694),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(694),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(694),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [214] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(696),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [215] = {
    [sym_cmd_substitution_arg] = STATE(219),
    [aux_sym_double_quoted_arg_repeat1] = STATE(219),
    [anon_sym_DQUOTE] = ACTIONS(698),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(700),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(700),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(700),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [216] = {
    [sym_cmd_substitution_arg] = STATE(214),
    [aux_sym_double_quoted_arg_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(704),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(704),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(704),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [217] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [218] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(708),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [219] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(710),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [220] = {
    [sym_cmd_substitution_arg] = STATE(223),
    [aux_sym_double_quoted_arg_repeat1] = STATE(223),
    [anon_sym_DQUOTE] = ACTIONS(712),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(714),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(714),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(714),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [221] = {
    [aux_sym_concatenation_repeat1] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym__concat] = ACTIONS(716),
  },
  [222] = {
    [sym_cmd_substitution_arg] = STATE(217),
    [aux_sym_double_quoted_arg_repeat1] = STATE(217),
    [anon_sym_DQUOTE] = ACTIONS(719),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(721),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(721),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(721),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [223] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(723),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(673),
    [anon_sym_BQUOTE] = ACTIONS(675),
    [sym__comment] = ACTIONS(95),
  },
  [224] = {
    [aux_sym_concatenation_repeat1] = STATE(221),
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_RPAREN] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(163),
    [anon_sym_CR] = ACTIONS(163),
    [anon_sym_SEMI] = ACTIONS(163),
    [sym__concat] = ACTIONS(725),
  },
  [225] = {
    [aux_sym_concatenation_repeat1] = STATE(224),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym__concat] = ACTIONS(725),
  },
  [226] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [227] = {
    [aux_sym_concatenation_repeat1] = STATE(230),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym_arg_identifier] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(727),
  },
  [228] = {
    [aux_sym_concatenation_repeat1] = STATE(228),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(729),
  },
  [229] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym__concat] = ACTIONS(156),
  },
  [230] = {
    [aux_sym_concatenation_repeat1] = STATE(228),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym_arg_identifier] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(163),
    [anon_sym_BQUOTE] = ACTIONS(163),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(727),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym__concat] = ACTIONS(179),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym__concat] = ACTIONS(183),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym__concat] = ACTIONS(175),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym__concat] = ACTIONS(171),
  },
  [236] = {
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym_arg_identifier] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(179),
  },
  [237] = {
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_arg_identifier] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(183),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
  },
  [239] = {
    [anon_sym_DQUOTE] = ACTIONS(175),
    [sym_arg_identifier] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(175),
  },
  [240] = {
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_arg_identifier] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(171),
  },
  [241] = {
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(156),
  },
  [242] = {
    [anon_sym_DQUOTE] = ACTIONS(169),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(169),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(169),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(169),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(95),
  },
  [243] = {
    [anon_sym_DQUOTE] = ACTIONS(169),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(169),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(169),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(169),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(95),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_BQUOTE] = ACTIONS(732),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(732),
    [anon_sym_CR] = ACTIONS(732),
    [anon_sym_SEMI] = ACTIONS(732),
  },
  [245] = {
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_arg_identifier] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(167),
  },
  [246] = {
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_arg_identifier] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(167),
  },
  [247] = {
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym_arg_identifier] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(95),
  },
  [248] = {
    [aux_sym_commands_repeat2] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(734),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(736),
    [anon_sym_CR] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(736),
  },
  [249] = {
    [anon_sym_DQUOTE] = ACTIONS(739),
    [sym_arg_identifier] = ACTIONS(741),
    [anon_sym_SQUOTE] = ACTIONS(739),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(739),
    [anon_sym_BQUOTE] = ACTIONS(739),
    [sym__comment] = ACTIONS(95),
  },
  [250] = {
    [anon_sym_DQUOTE] = ACTIONS(743),
    [sym_arg_identifier] = ACTIONS(745),
    [anon_sym_SQUOTE] = ACTIONS(743),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(743),
    [anon_sym_BQUOTE] = ACTIONS(743),
    [sym__comment] = ACTIONS(95),
  },
  [251] = {
    [aux_sym_commands_repeat2] = STATE(256),
    [ts_builtin_sym_end] = ACTIONS(747),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(749),
    [anon_sym_CR] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
  },
  [252] = {
    [anon_sym_DQUOTE] = ACTIONS(751),
    [sym_arg_identifier] = ACTIONS(753),
    [anon_sym_SQUOTE] = ACTIONS(751),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(751),
    [anon_sym_BQUOTE] = ACTIONS(751),
    [sym__comment] = ACTIONS(95),
  },
  [253] = {
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym_arg_identifier] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(755),
    [anon_sym_BQUOTE] = ACTIONS(755),
    [sym__comment] = ACTIONS(95),
  },
  [254] = {
    [anon_sym_DQUOTE] = ACTIONS(759),
    [sym_arg_identifier] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(759),
    [anon_sym_BQUOTE] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [255] = {
    [aux_sym_commands_repeat2] = STATE(257),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(749),
    [anon_sym_CR] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
  },
  [256] = {
    [aux_sym_commands_repeat2] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(763),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(749),
    [anon_sym_CR] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
  },
  [257] = {
    [aux_sym_commands_repeat2] = STATE(248),
    [ts_builtin_sym_end] = ACTIONS(747),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(749),
    [anon_sym_CR] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(749),
  },
  [258] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [259] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(258),
    [anon_sym_SQUOTE] = ACTIONS(769),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(771),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(771),
    [sym__comment] = ACTIONS(95),
  },
  [260] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(773),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [261] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(260),
    [anon_sym_SQUOTE] = ACTIONS(775),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(777),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(777),
    [sym__comment] = ACTIONS(95),
  },
  [262] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(779),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [263] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(267),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(783),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(783),
    [sym__comment] = ACTIONS(95),
  },
  [264] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(785),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(787),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(787),
    [sym__comment] = ACTIONS(95),
  },
  [265] = {
    [ts_builtin_sym_end] = ACTIONS(734),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(734),
    [anon_sym_CR] = ACTIONS(734),
    [anon_sym_SEMI] = ACTIONS(734),
  },
  [266] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(270),
    [anon_sym_SQUOTE] = ACTIONS(790),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(792),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(792),
    [sym__comment] = ACTIONS(95),
  },
  [267] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(794),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [268] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(271),
    [anon_sym_SQUOTE] = ACTIONS(796),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(798),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(798),
    [sym__comment] = ACTIONS(95),
  },
  [269] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(262),
    [anon_sym_SQUOTE] = ACTIONS(800),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(802),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(802),
    [sym__comment] = ACTIONS(95),
  },
  [270] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(804),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [271] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(806),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [272] = {
    [sym_tmp_eval_args] = STATE(130),
    [sym_tmp_eval_arg] = STATE(84),
    [aux_sym_tmp_eval_arg_repeat1] = STATE(64),
    [aux_sym_tmp_eval_arg_token1] = ACTIONS(808),
    [sym__comment] = ACTIONS(3),
  },
  [273] = {
    [aux_sym__commands_singleline_repeat2] = STATE(281),
    [anon_sym_BQUOTE] = ACTIONS(810),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(812),
  },
  [274] = {
    [aux_sym__commands_singleline_repeat2] = STATE(274),
    [anon_sym_BQUOTE] = ACTIONS(814),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(816),
  },
  [275] = {
    [aux_sym__commands_singleline_repeat2] = STATE(280),
    [anon_sym_BQUOTE] = ACTIONS(819),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(812),
  },
  [276] = {
    [aux_sym__commands_singleline_repeat2] = STATE(282),
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(821),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(814),
    [anon_sym_BQUOTE] = ACTIONS(814),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(814),
  },
  [278] = {
    [sym_tmp_eval_arg] = STATE(101),
    [aux_sym_tmp_eval_arg_repeat1] = STATE(64),
    [aux_sym_tmp_eval_arg_token1] = ACTIONS(808),
    [sym__comment] = ACTIONS(3),
  },
  [279] = {
    [aux_sym__commands_singleline_repeat2] = STATE(279),
    [anon_sym_RPAREN] = ACTIONS(814),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(823),
  },
  [280] = {
    [aux_sym__commands_singleline_repeat2] = STATE(274),
    [anon_sym_BQUOTE] = ACTIONS(810),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(812),
  },
  [281] = {
    [aux_sym__commands_singleline_repeat2] = STATE(274),
    [anon_sym_BQUOTE] = ACTIONS(826),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(812),
  },
  [282] = {
    [aux_sym__commands_singleline_repeat2] = STATE(279),
    [anon_sym_RPAREN] = ACTIONS(810),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(821),
  },
  [283] = {
    [aux_sym__commands_singleline_repeat2] = STATE(279),
    [anon_sym_RPAREN] = ACTIONS(826),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(821),
  },
  [284] = {
    [aux_sym__commands_singleline_repeat2] = STATE(283),
    [anon_sym_RPAREN] = ACTIONS(810),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(821),
  },
  [285] = {
    [sym_interpret_arg] = STATE(152),
    [sym__any_command] = ACTIONS(828),
    [sym__comment] = ACTIONS(95),
  },
  [286] = {
    [anon_sym_RPAREN] = ACTIONS(830),
    [sym_macro_call_content] = ACTIONS(832),
    [sym__comment] = ACTIONS(95),
  },
  [287] = {
    [anon_sym_GT] = ACTIONS(834),
    [anon_sym_GT_GT] = ACTIONS(836),
    [sym__comment] = ACTIONS(3),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(838),
    [sym_macro_call_content] = ACTIONS(840),
    [sym__comment] = ACTIONS(95),
  },
  [289] = {
    [anon_sym_RPAREN] = ACTIONS(842),
    [sym__comment] = ACTIONS(3),
  },
  [290] = {
    [anon_sym_BQUOTE] = ACTIONS(844),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(846),
    [sym__comment] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_RPAREN] = ACTIONS(848),
    [sym__comment] = ACTIONS(3),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(850),
    [sym__comment] = ACTIONS(3),
  },
  [294] = {
    [anon_sym_BQUOTE] = ACTIONS(852),
    [sym__comment] = ACTIONS(3),
  },
  [295] = {
    [anon_sym_RPAREN] = ACTIONS(854),
    [sym__comment] = ACTIONS(3),
  },
  [296] = {
    [anon_sym_BQUOTE] = ACTIONS(856),
    [sym__comment] = ACTIONS(3),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(858),
    [sym__comment] = ACTIONS(3),
  },
  [298] = {
    [anon_sym_BQUOTE] = ACTIONS(860),
    [sym__comment] = ACTIONS(3),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(862),
    [sym__comment] = ACTIONS(3),
  },
  [300] = {
    [anon_sym_BQUOTE] = ACTIONS(864),
    [sym__comment] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym__comment] = ACTIONS(3),
  },
  [302] = {
    [anon_sym_DQUOTE] = ACTIONS(868),
    [sym__comment] = ACTIONS(3),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(870),
    [sym__comment] = ACTIONS(3),
  },
  [304] = {
    [anon_sym_BQUOTE] = ACTIONS(872),
    [sym__comment] = ACTIONS(3),
  },
  [305] = {
    [anon_sym_BQUOTE] = ACTIONS(874),
    [sym__comment] = ACTIONS(3),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(876),
    [sym__comment] = ACTIONS(3),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(878),
    [sym__comment] = ACTIONS(3),
  },
  [308] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(880),
    [sym__comment] = ACTIONS(95),
  },
  [309] = {
    [sym_macro_content] = ACTIONS(882),
    [sym__comment] = ACTIONS(95),
  },
  [310] = {
    [sym_grep_specifier] = ACTIONS(884),
    [sym__comment] = ACTIONS(95),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(308),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(285),
  [13] = {.count = 1, .reusable = true}, SHIFT(309),
  [15] = {.count = 1, .reusable = true}, SHIFT(254),
  [17] = {.count = 1, .reusable = true}, SHIFT(58),
  [19] = {.count = 1, .reusable = false}, SHIFT(153),
  [21] = {.count = 1, .reusable = false}, SHIFT(60),
  [23] = {.count = 1, .reusable = true}, SHIFT(60),
  [25] = {.count = 1, .reusable = true}, SHIFT(36),
  [27] = {.count = 1, .reusable = true}, SHIFT(35),
  [29] = {.count = 1, .reusable = true}, SHIFT(181),
  [31] = {.count = 1, .reusable = true}, SHIFT(95),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(34),
  [37] = {.count = 1, .reusable = true}, SHIFT(31),
  [39] = {.count = 1, .reusable = true}, SHIFT(28),
  [41] = {.count = 1, .reusable = true}, SHIFT(33),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, SHIFT(163),
  [51] = {.count = 1, .reusable = true}, SHIFT(29),
  [53] = {.count = 1, .reusable = false}, SHIFT(4),
  [55] = {.count = 1, .reusable = true}, SHIFT(41),
  [57] = {.count = 1, .reusable = true}, SHIFT(43),
  [59] = {.count = 1, .reusable = true}, SHIFT(44),
  [61] = {.count = 1, .reusable = true}, SHIFT(42),
  [63] = {.count = 1, .reusable = true}, SHIFT(25),
  [65] = {.count = 1, .reusable = true}, SHIFT(45),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(172),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(21),
  [75] = {.count = 1, .reusable = true}, SHIFT(23),
  [77] = {.count = 1, .reusable = true}, SHIFT(173),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(215),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [87] = {.count = 1, .reusable = false}, SHIFT(47),
  [89] = {.count = 1, .reusable = true}, SHIFT(268),
  [91] = {.count = 1, .reusable = true}, SHIFT(19),
  [93] = {.count = 1, .reusable = true}, SHIFT(17),
  [95] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_args, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(215),
  [122] = {.count = 1, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(47),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(268),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(19),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(17),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(210),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [142] = {.count = 1, .reusable = false}, SHIFT(90),
  [144] = {.count = 1, .reusable = true}, SHIFT(263),
  [146] = {.count = 1, .reusable = true}, SHIFT(13),
  [148] = {.count = 1, .reusable = true}, SHIFT(12),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [154] = {.count = 1, .reusable = true}, SHIFT(209),
  [156] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [158] = {.count = 1, .reusable = false}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [160] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(209),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_concatenation, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 3),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 3),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(204),
  [197] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_arg_repeat1, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_arg_repeat1, 2),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_tmp_eval_arg_repeat1, 2), SHIFT_REPEAT(62),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 2),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 2),
  [208] = {.count = 1, .reusable = true}, SHIFT(207),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_arg, 1),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_arg, 1),
  [214] = {.count = 1, .reusable = false}, SHIFT(62),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(204),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 1),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [225] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2), SHIFT_REPEAT(207),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [234] = {.count = 1, .reusable = true}, SHIFT(182),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 2),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 2),
  [240] = {.count = 1, .reusable = true}, SHIFT(206),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_args, 1),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_args, 1),
  [246] = {.count = 1, .reusable = true}, SHIFT(278),
  [248] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_args_repeat1, 2),
  [250] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_args_repeat1, 2),
  [252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_args_repeat1, 2), SHIFT_REPEAT(278),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_args, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_args, 2),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(206),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_key_single, 1),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_key_single, 1),
  [266] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [268] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2), SHIFT_REPEAT(182),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(198),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [283] = {.count = 1, .reusable = false}, SHIFT(286),
  [285] = {.count = 1, .reusable = false}, SHIFT(106),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [289] = {.count = 1, .reusable = true}, SHIFT(310),
  [291] = {.count = 1, .reusable = false}, SHIFT(161),
  [293] = {.count = 1, .reusable = true}, SHIFT(147),
  [295] = {.count = 1, .reusable = true}, SHIFT(146),
  [297] = {.count = 1, .reusable = false}, SHIFT(199),
  [299] = {.count = 1, .reusable = false}, SHIFT(109),
  [301] = {.count = 1, .reusable = true}, SHIFT(109),
  [303] = {.count = 1, .reusable = true}, SHIFT(142),
  [305] = {.count = 1, .reusable = true}, SHIFT(141),
  [307] = {.count = 1, .reusable = true}, SHIFT(201),
  [309] = {.count = 1, .reusable = true}, SHIFT(176),
  [311] = {.count = 1, .reusable = true}, SHIFT(202),
  [313] = {.count = 1, .reusable = true}, SHIFT(122),
  [315] = {.count = 1, .reusable = true}, SHIFT(121),
  [317] = {.count = 1, .reusable = false}, SHIFT(113),
  [319] = {.count = 1, .reusable = true}, SHIFT(112),
  [321] = {.count = 1, .reusable = true}, SHIFT(94),
  [323] = {.count = 1, .reusable = true}, SHIFT(203),
  [325] = {.count = 1, .reusable = true}, SHIFT(27),
  [327] = {.count = 1, .reusable = false}, SHIFT(200),
  [329] = {.count = 1, .reusable = true}, SHIFT(196),
  [331] = {.count = 1, .reusable = true}, SHIFT(194),
  [333] = {.count = 1, .reusable = true}, SHIFT(193),
  [335] = {.count = 1, .reusable = true}, SHIFT(192),
  [337] = {.count = 1, .reusable = true}, SHIFT(180),
  [339] = {.count = 1, .reusable = true}, SHIFT(272),
  [341] = {.count = 1, .reusable = true}, SHIFT(179),
  [343] = {.count = 1, .reusable = true}, SHIFT(190),
  [345] = {.count = 1, .reusable = true}, SHIFT(189),
  [347] = {.count = 1, .reusable = true}, SHIFT(186),
  [349] = {.count = 1, .reusable = true}, SHIFT(185),
  [351] = {.count = 1, .reusable = true}, SHIFT(191),
  [353] = {.count = 1, .reusable = true}, SHIFT(183),
  [355] = {.count = 1, .reusable = true}, SHIFT(184),
  [357] = {.count = 1, .reusable = true}, SHIFT(154),
  [359] = {.count = 1, .reusable = false}, SHIFT(249),
  [361] = {.count = 1, .reusable = true}, SHIFT(250),
  [363] = {.count = 1, .reusable = false}, SHIFT(188),
  [365] = {.count = 1, .reusable = true}, SHIFT(188),
  [367] = {.count = 1, .reusable = true}, SHIFT(287),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 1),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 1),
  [373] = {.count = 1, .reusable = true}, SHIFT(178),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [379] = {.count = 1, .reusable = true}, SHIFT(288),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_legacy_quoted_command, 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 8),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 8),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 5),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 5),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_last_command, 1, .production_id = 1),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_last_command, 1, .production_id = 1),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [523] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [527] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [555] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 6),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 6),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [563] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 3),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 3),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [579] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [581] = {.count = 1, .reusable = false}, SHIFT(167),
  [583] = {.count = 1, .reusable = true}, SHIFT(174),
  [585] = {.count = 1, .reusable = true}, SHIFT(26),
  [587] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [591] = {.count = 1, .reusable = false}, SHIFT(116),
  [593] = {.count = 1, .reusable = false}, SHIFT(166),
  [595] = {.count = 1, .reusable = true}, SHIFT(30),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [603] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [605] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [607] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(172),
  [612] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [614] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [616] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(173),
  [619] = {.count = 1, .reusable = true}, SHIFT(222),
  [621] = {.count = 1, .reusable = false}, SHIFT(61),
  [623] = {.count = 1, .reusable = true}, SHIFT(259),
  [625] = {.count = 1, .reusable = true}, SHIFT(18),
  [627] = {.count = 1, .reusable = true}, SHIFT(15),
  [629] = {.count = 1, .reusable = true}, SHIFT(216),
  [631] = {.count = 1, .reusable = false}, SHIFT(88),
  [633] = {.count = 1, .reusable = true}, SHIFT(266),
  [635] = {.count = 1, .reusable = true}, SHIFT(8),
  [637] = {.count = 1, .reusable = true}, SHIFT(16),
  [639] = {.count = 1, .reusable = true}, SHIFT(220),
  [641] = {.count = 1, .reusable = false}, SHIFT(225),
  [643] = {.count = 1, .reusable = true}, SHIFT(261),
  [645] = {.count = 1, .reusable = true}, SHIFT(10),
  [647] = {.count = 1, .reusable = true}, SHIFT(9),
  [649] = {.count = 1, .reusable = true}, SHIFT(213),
  [651] = {.count = 1, .reusable = false}, SHIFT(227),
  [653] = {.count = 1, .reusable = true}, SHIFT(269),
  [655] = {.count = 1, .reusable = true}, SHIFT(7),
  [657] = {.count = 1, .reusable = true}, SHIFT(14),
  [659] = {.count = 1, .reusable = false}, SHIFT(82),
  [661] = {.count = 1, .reusable = false}, SHIFT(241),
  [663] = {.count = 1, .reusable = false}, SHIFT(105),
  [665] = {.count = 1, .reusable = false}, SHIFT(229),
  [667] = {.count = 1, .reusable = false}, SHIFT(52),
  [669] = {.count = 1, .reusable = false}, SHIFT(85),
  [671] = {.count = 1, .reusable = false}, SHIFT(212),
  [673] = {.count = 1, .reusable = false}, SHIFT(11),
  [675] = {.count = 1, .reusable = false}, SHIFT(20),
  [677] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2),
  [679] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(211),
  [682] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(11),
  [685] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(20),
  [688] = {.count = 1, .reusable = false}, SHIFT(73),
  [690] = {.count = 1, .reusable = false}, SHIFT(211),
  [692] = {.count = 1, .reusable = false}, SHIFT(236),
  [694] = {.count = 1, .reusable = false}, SHIFT(218),
  [696] = {.count = 1, .reusable = false}, SHIFT(99),
  [698] = {.count = 1, .reusable = false}, SHIFT(56),
  [700] = {.count = 1, .reusable = false}, SHIFT(219),
  [702] = {.count = 1, .reusable = false}, SHIFT(97),
  [704] = {.count = 1, .reusable = false}, SHIFT(214),
  [706] = {.count = 1, .reusable = false}, SHIFT(77),
  [708] = {.count = 1, .reusable = false}, SHIFT(239),
  [710] = {.count = 1, .reusable = false}, SHIFT(55),
  [712] = {.count = 1, .reusable = false}, SHIFT(231),
  [714] = {.count = 1, .reusable = false}, SHIFT(223),
  [716] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(208),
  [719] = {.count = 1, .reusable = false}, SHIFT(80),
  [721] = {.count = 1, .reusable = false}, SHIFT(217),
  [723] = {.count = 1, .reusable = false}, SHIFT(234),
  [725] = {.count = 1, .reusable = true}, SHIFT(208),
  [727] = {.count = 1, .reusable = true}, SHIFT(205),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(205),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 9),
  [734] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 1),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 1),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [749] = {.count = 1, .reusable = true}, SHIFT(6),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 2),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 2),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 1),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [765] = {.count = 1, .reusable = false}, SHIFT(76),
  [767] = {.count = 1, .reusable = false}, SHIFT(264),
  [769] = {.count = 1, .reusable = false}, SHIFT(79),
  [771] = {.count = 1, .reusable = false}, SHIFT(258),
  [773] = {.count = 1, .reusable = false}, SHIFT(235),
  [775] = {.count = 1, .reusable = false}, SHIFT(232),
  [777] = {.count = 1, .reusable = false}, SHIFT(260),
  [779] = {.count = 1, .reusable = false}, SHIFT(240),
  [781] = {.count = 1, .reusable = false}, SHIFT(83),
  [783] = {.count = 1, .reusable = false}, SHIFT(267),
  [785] = {.count = 1, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2),
  [787] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2), SHIFT_REPEAT(264),
  [790] = {.count = 1, .reusable = false}, SHIFT(96),
  [792] = {.count = 1, .reusable = false}, SHIFT(270),
  [794] = {.count = 1, .reusable = false}, SHIFT(69),
  [796] = {.count = 1, .reusable = false}, SHIFT(57),
  [798] = {.count = 1, .reusable = false}, SHIFT(271),
  [800] = {.count = 1, .reusable = false}, SHIFT(237),
  [802] = {.count = 1, .reusable = false}, SHIFT(262),
  [804] = {.count = 1, .reusable = false}, SHIFT(102),
  [806] = {.count = 1, .reusable = false}, SHIFT(54),
  [808] = {.count = 1, .reusable = false}, SHIFT(64),
  [810] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [812] = {.count = 1, .reusable = true}, SHIFT(24),
  [814] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [816] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(24),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [821] = {.count = 1, .reusable = true}, SHIFT(22),
  [823] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(22),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [828] = {.count = 1, .reusable = false}, SHIFT(150),
  [830] = {.count = 1, .reusable = false}, SHIFT(110),
  [832] = {.count = 1, .reusable = false}, SHIFT(292),
  [834] = {.count = 1, .reusable = false}, SHIFT(253),
  [836] = {.count = 1, .reusable = true}, SHIFT(252),
  [838] = {.count = 1, .reusable = false}, SHIFT(159),
  [840] = {.count = 1, .reusable = false}, SHIFT(291),
  [842] = {.count = 1, .reusable = true}, SHIFT(93),
  [844] = {.count = 1, .reusable = true}, SHIFT(103),
  [846] = {.count = 1, .reusable = true}, SHIFT(131),
  [848] = {.count = 1, .reusable = true}, SHIFT(159),
  [850] = {.count = 1, .reusable = true}, SHIFT(123),
  [852] = {.count = 1, .reusable = true}, SHIFT(70),
  [854] = {.count = 1, .reusable = true}, SHIFT(233),
  [856] = {.count = 1, .reusable = true}, SHIFT(226),
  [858] = {.count = 1, .reusable = true}, SHIFT(75),
  [860] = {.count = 1, .reusable = true}, SHIFT(74),
  [862] = {.count = 1, .reusable = true}, SHIFT(245),
  [864] = {.count = 1, .reusable = true}, SHIFT(246),
  [866] = {.count = 1, .reusable = true}, SHIFT(72),
  [868] = {.count = 1, .reusable = true}, SHIFT(114),
  [870] = {.count = 1, .reusable = true}, SHIFT(51),
  [872] = {.count = 1, .reusable = true}, SHIFT(242),
  [874] = {.count = 1, .reusable = true}, SHIFT(53),
  [876] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [878] = {.count = 1, .reusable = true}, SHIFT(243),
  [880] = {.count = 1, .reusable = false}, SHIFT(302),
  [882] = {.count = 1, .reusable = false}, SHIFT(152),
  [884] = {.count = 1, .reusable = true}, SHIFT(115),
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
