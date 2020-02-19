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
#define STATE_COUNT 313
#define SYMBOL_COUNT 172
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 7
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
  sym__eq_sep_key_single = 154,
  sym_eq_sep_key = 155,
  sym_eq_sep_val = 156,
  sym_double_quoted_arg = 157,
  sym_single_quoted_arg = 158,
  sym_cmd_substitution_arg = 159,
  sym_concatenation = 160,
  aux_sym_commands_repeat1 = 161,
  aux_sym_commands_repeat2 = 162,
  aux_sym__commands_singleline_repeat1 = 163,
  aux_sym__commands_singleline_repeat2 = 164,
  aux_sym_tmp_eval_command_repeat1 = 165,
  aux_sym_args_repeat1 = 166,
  aux_sym_eq_sep_key_repeat1 = 167,
  aux_sym_eq_sep_val_repeat1 = 168,
  aux_sym_double_quoted_arg_repeat1 = 169,
  aux_sym_single_quoted_arg_repeat1 = 170,
  aux_sym_concatenation_repeat1 = 171,
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
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
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
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 3},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 3},
  [11] = {.index = 18, .length = 4},
  [12] = {.index = 22, .length = 5},
  [13] = {.index = 27, .length = 6},
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

static TSSymbol ts_alias_sequences[14][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_cmd_identifier,
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
  [58] = {.lex_state = 2, .external_lex_state = 4},
  [59] = {.lex_state = 3, .external_lex_state = 4},
  [60] = {.lex_state = 2, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 6},
  [66] = {.lex_state = 0, .external_lex_state = 7},
  [67] = {.lex_state = 0, .external_lex_state = 7},
  [68] = {.lex_state = 0, .external_lex_state = 6},
  [69] = {.lex_state = 0, .external_lex_state = 6},
  [70] = {.lex_state = 0, .external_lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 5},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 0, .external_lex_state = 6},
  [74] = {.lex_state = 0, .external_lex_state = 5},
  [75] = {.lex_state = 0, .external_lex_state = 4},
  [76] = {.lex_state = 0, .external_lex_state = 7},
  [77] = {.lex_state = 0, .external_lex_state = 7},
  [78] = {.lex_state = 0, .external_lex_state = 7},
  [79] = {.lex_state = 0, .external_lex_state = 6},
  [80] = {.lex_state = 0, .external_lex_state = 7},
  [81] = {.lex_state = 0, .external_lex_state = 7},
  [82] = {.lex_state = 0, .external_lex_state = 4},
  [83] = {.lex_state = 0, .external_lex_state = 7},
  [84] = {.lex_state = 0, .external_lex_state = 6},
  [85] = {.lex_state = 0, .external_lex_state = 5},
  [86] = {.lex_state = 0, .external_lex_state = 6},
  [87] = {.lex_state = 0, .external_lex_state = 6},
  [88] = {.lex_state = 0, .external_lex_state = 6},
  [89] = {.lex_state = 0, .external_lex_state = 6},
  [90] = {.lex_state = 0, .external_lex_state = 6},
  [91] = {.lex_state = 0, .external_lex_state = 5},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 4},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 4},
  [97] = {.lex_state = 0, .external_lex_state = 5},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 4},
  [101] = {.lex_state = 0, .external_lex_state = 6},
  [102] = {.lex_state = 0, .external_lex_state = 6},
  [103] = {.lex_state = 0, .external_lex_state = 4},
  [104] = {.lex_state = 0, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 5},
  [106] = {.lex_state = 0, .external_lex_state = 4},
  [107] = {.lex_state = 0, .external_lex_state = 4},
  [108] = {.lex_state = 4, .external_lex_state = 4},
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
  [161] = {.lex_state = 5, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 10, .external_lex_state = 4},
  [164] = {.lex_state = 0, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 13, .external_lex_state = 4},
  [167] = {.lex_state = 4, .external_lex_state = 4},
  [168] = {.lex_state = 12, .external_lex_state = 4},
  [169] = {.lex_state = 0, .external_lex_state = 4},
  [170] = {.lex_state = 0, .external_lex_state = 4},
  [171] = {.lex_state = 0, .external_lex_state = 4},
  [172] = {.lex_state = 0, .external_lex_state = 4},
  [173] = {.lex_state = 0, .external_lex_state = 4},
  [174] = {.lex_state = 1, .external_lex_state = 2},
  [175] = {.lex_state = 1, .external_lex_state = 2},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 7},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 7},
  [192] = {.lex_state = 7},
  [193] = {.lex_state = 7},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 7},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 7},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 7},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 7},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 7},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 9},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 9},
  [223] = {.lex_state = 0, .external_lex_state = 8},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 9},
  [226] = {.lex_state = 0, .external_lex_state = 8},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 0, .external_lex_state = 8},
  [229] = {.lex_state = 7, .external_lex_state = 8},
  [230] = {.lex_state = 7, .external_lex_state = 8},
  [231] = {.lex_state = 0, .external_lex_state = 8},
  [232] = {.lex_state = 7, .external_lex_state = 8},
  [233] = {.lex_state = 0, .external_lex_state = 8},
  [234] = {.lex_state = 0, .external_lex_state = 8},
  [235] = {.lex_state = 0, .external_lex_state = 8},
  [236] = {.lex_state = 0, .external_lex_state = 8},
  [237] = {.lex_state = 0, .external_lex_state = 8},
  [238] = {.lex_state = 7, .external_lex_state = 8},
  [239] = {.lex_state = 7, .external_lex_state = 8},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7, .external_lex_state = 8},
  [242] = {.lex_state = 7, .external_lex_state = 8},
  [243] = {.lex_state = 7, .external_lex_state = 8},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 7, .external_lex_state = 8},
  [248] = {.lex_state = 7, .external_lex_state = 8},
  [249] = {.lex_state = 7},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 7},
  [252] = {.lex_state = 7},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 7},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 7},
  [258] = {.lex_state = 7},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 14},
  [261] = {.lex_state = 14},
  [262] = {.lex_state = 14},
  [263] = {.lex_state = 14},
  [264] = {.lex_state = 14},
  [265] = {.lex_state = 14},
  [266] = {.lex_state = 14},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 14},
  [269] = {.lex_state = 14},
  [270] = {.lex_state = 14},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 217},
  [287] = {.lex_state = 217},
  [288] = {.lex_state = 15},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 6},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 6},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 70},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 11},
  [312] = {.lex_state = 0},
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
  },
  [7] = {
    [ts_external_token_file_descriptor] = true,
    [ts_external_token__eq_sep_concat] = true,
    [ts_external_token__concat] = true,
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
    [sym__concat] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(308),
    [sym__command] = STATE(255),
    [sym_legacy_quoted_command] = STATE(99),
    [sym__simple_command] = STATE(99),
    [sym__tmp_command] = STATE(99),
    [sym__iter_command] = STATE(99),
    [sym__pipe_command] = STATE(99),
    [sym_grep_command] = STATE(99),
    [sym_html_disable_command] = STATE(99),
    [sym_html_enable_command] = STATE(99),
    [sym_scr_tts_command] = STATE(99),
    [sym_pipe_command] = STATE(99),
    [sym_iter_flags_command] = STATE(99),
    [sym_iter_dbta_command] = STATE(99),
    [sym_iter_dbtb_command] = STATE(99),
    [sym_iter_dbts_command] = STATE(99),
    [sym_iter_file_lines_command] = STATE(99),
    [sym_iter_offsets_command] = STATE(99),
    [sym_iter_sdbquery_command] = STATE(99),
    [sym_iter_threads_command] = STATE(99),
    [sym_iter_bbs_command] = STATE(99),
    [sym_iter_instrs_command] = STATE(99),
    [sym_iter_sections_command] = STATE(99),
    [sym_iter_functions_command] = STATE(99),
    [sym_iter_step_command] = STATE(99),
    [sym_iter_interpret_command] = STATE(99),
    [sym_tmp_seek_command] = STATE(99),
    [sym_tmp_blksz_command] = STATE(99),
    [sym_tmp_fromto_command] = STATE(99),
    [sym_tmp_arch_command] = STATE(99),
    [sym_tmp_bits_command] = STATE(99),
    [sym_tmp_nthi_command] = STATE(99),
    [sym_tmp_eval_command] = STATE(99),
    [sym_tmp_fs_command] = STATE(99),
    [sym_tmp_reli_command] = STATE(99),
    [sym_tmp_kuery_command] = STATE(99),
    [sym_tmp_fd_command] = STATE(99),
    [sym_tmp_reg_command] = STATE(99),
    [sym_tmp_file_command] = STATE(99),
    [sym_tmp_string_command] = STATE(99),
    [sym_tmp_hex_command] = STATE(99),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(99),
    [sym_arged_command] = STATE(99),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(99),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(99),
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
    [sym_legacy_quoted_command] = STATE(145),
    [sym__simple_command] = STATE(145),
    [sym__tmp_command] = STATE(145),
    [sym__iter_command] = STATE(145),
    [sym__pipe_command] = STATE(145),
    [sym_grep_command] = STATE(145),
    [sym_html_disable_command] = STATE(145),
    [sym_html_enable_command] = STATE(145),
    [sym_scr_tts_command] = STATE(145),
    [sym_pipe_command] = STATE(145),
    [sym_iter_flags_command] = STATE(145),
    [sym_iter_dbta_command] = STATE(145),
    [sym_iter_dbtb_command] = STATE(145),
    [sym_iter_dbts_command] = STATE(145),
    [sym_iter_file_lines_command] = STATE(145),
    [sym_iter_offsets_command] = STATE(145),
    [sym_iter_sdbquery_command] = STATE(145),
    [sym_iter_threads_command] = STATE(145),
    [sym_iter_bbs_command] = STATE(145),
    [sym_iter_instrs_command] = STATE(145),
    [sym_iter_sections_command] = STATE(145),
    [sym_iter_functions_command] = STATE(145),
    [sym_iter_step_command] = STATE(145),
    [sym_iter_interpret_command] = STATE(145),
    [sym_tmp_seek_command] = STATE(145),
    [sym_tmp_blksz_command] = STATE(145),
    [sym_tmp_fromto_command] = STATE(145),
    [sym_tmp_arch_command] = STATE(145),
    [sym_tmp_bits_command] = STATE(145),
    [sym_tmp_nthi_command] = STATE(145),
    [sym_tmp_eval_command] = STATE(145),
    [sym_tmp_fs_command] = STATE(145),
    [sym_tmp_reli_command] = STATE(145),
    [sym_tmp_kuery_command] = STATE(145),
    [sym_tmp_fd_command] = STATE(145),
    [sym_tmp_reg_command] = STATE(145),
    [sym_tmp_file_command] = STATE(145),
    [sym_tmp_string_command] = STATE(145),
    [sym_tmp_hex_command] = STATE(145),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(145),
    [sym_arged_command] = STATE(145),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(145),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(145),
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
    [sym_legacy_quoted_command] = STATE(145),
    [sym__simple_command] = STATE(145),
    [sym__tmp_command] = STATE(145),
    [sym__iter_command] = STATE(145),
    [sym__pipe_command] = STATE(145),
    [sym_grep_command] = STATE(145),
    [sym_html_disable_command] = STATE(145),
    [sym_html_enable_command] = STATE(145),
    [sym_scr_tts_command] = STATE(145),
    [sym_pipe_command] = STATE(145),
    [sym_iter_flags_command] = STATE(145),
    [sym_iter_dbta_command] = STATE(145),
    [sym_iter_dbtb_command] = STATE(145),
    [sym_iter_dbts_command] = STATE(145),
    [sym_iter_file_lines_command] = STATE(145),
    [sym_iter_offsets_command] = STATE(145),
    [sym_iter_sdbquery_command] = STATE(145),
    [sym_iter_threads_command] = STATE(145),
    [sym_iter_bbs_command] = STATE(145),
    [sym_iter_instrs_command] = STATE(145),
    [sym_iter_sections_command] = STATE(145),
    [sym_iter_functions_command] = STATE(145),
    [sym_iter_step_command] = STATE(145),
    [sym_iter_interpret_command] = STATE(145),
    [sym_tmp_seek_command] = STATE(145),
    [sym_tmp_blksz_command] = STATE(145),
    [sym_tmp_fromto_command] = STATE(145),
    [sym_tmp_arch_command] = STATE(145),
    [sym_tmp_bits_command] = STATE(145),
    [sym_tmp_nthi_command] = STATE(145),
    [sym_tmp_eval_command] = STATE(145),
    [sym_tmp_fs_command] = STATE(145),
    [sym_tmp_reli_command] = STATE(145),
    [sym_tmp_kuery_command] = STATE(145),
    [sym_tmp_fd_command] = STATE(145),
    [sym_tmp_reg_command] = STATE(145),
    [sym_tmp_file_command] = STATE(145),
    [sym_tmp_string_command] = STATE(145),
    [sym_tmp_hex_command] = STATE(145),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(145),
    [sym_arged_command] = STATE(145),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(145),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(145),
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
    [sym_legacy_quoted_command] = STATE(145),
    [sym__simple_command] = STATE(145),
    [sym__tmp_command] = STATE(145),
    [sym__iter_command] = STATE(145),
    [sym__pipe_command] = STATE(145),
    [sym_grep_command] = STATE(145),
    [sym_html_disable_command] = STATE(145),
    [sym_html_enable_command] = STATE(145),
    [sym_scr_tts_command] = STATE(145),
    [sym_pipe_command] = STATE(145),
    [sym_iter_flags_command] = STATE(145),
    [sym_iter_dbta_command] = STATE(145),
    [sym_iter_dbtb_command] = STATE(145),
    [sym_iter_dbts_command] = STATE(145),
    [sym_iter_file_lines_command] = STATE(145),
    [sym_iter_offsets_command] = STATE(145),
    [sym_iter_sdbquery_command] = STATE(145),
    [sym_iter_threads_command] = STATE(145),
    [sym_iter_bbs_command] = STATE(145),
    [sym_iter_instrs_command] = STATE(145),
    [sym_iter_sections_command] = STATE(145),
    [sym_iter_functions_command] = STATE(145),
    [sym_iter_step_command] = STATE(145),
    [sym_iter_interpret_command] = STATE(145),
    [sym_tmp_seek_command] = STATE(145),
    [sym_tmp_blksz_command] = STATE(145),
    [sym_tmp_fromto_command] = STATE(145),
    [sym_tmp_arch_command] = STATE(145),
    [sym_tmp_bits_command] = STATE(145),
    [sym_tmp_nthi_command] = STATE(145),
    [sym_tmp_eval_command] = STATE(145),
    [sym_tmp_fs_command] = STATE(145),
    [sym_tmp_reli_command] = STATE(145),
    [sym_tmp_kuery_command] = STATE(145),
    [sym_tmp_fd_command] = STATE(145),
    [sym_tmp_reg_command] = STATE(145),
    [sym_tmp_file_command] = STATE(145),
    [sym_tmp_string_command] = STATE(145),
    [sym_tmp_hex_command] = STATE(145),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(145),
    [sym_arged_command] = STATE(145),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(145),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(145),
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
    [sym_macro_identifier] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [5] = {
    [sym__command] = STATE(253),
    [sym_legacy_quoted_command] = STATE(99),
    [sym__simple_command] = STATE(99),
    [sym__tmp_command] = STATE(99),
    [sym__iter_command] = STATE(99),
    [sym__pipe_command] = STATE(99),
    [sym_grep_command] = STATE(99),
    [sym_html_disable_command] = STATE(99),
    [sym_html_enable_command] = STATE(99),
    [sym_scr_tts_command] = STATE(99),
    [sym_pipe_command] = STATE(99),
    [sym_iter_flags_command] = STATE(99),
    [sym_iter_dbta_command] = STATE(99),
    [sym_iter_dbtb_command] = STATE(99),
    [sym_iter_dbts_command] = STATE(99),
    [sym_iter_file_lines_command] = STATE(99),
    [sym_iter_offsets_command] = STATE(99),
    [sym_iter_sdbquery_command] = STATE(99),
    [sym_iter_threads_command] = STATE(99),
    [sym_iter_bbs_command] = STATE(99),
    [sym_iter_instrs_command] = STATE(99),
    [sym_iter_sections_command] = STATE(99),
    [sym_iter_functions_command] = STATE(99),
    [sym_iter_step_command] = STATE(99),
    [sym_iter_interpret_command] = STATE(99),
    [sym_tmp_seek_command] = STATE(99),
    [sym_tmp_blksz_command] = STATE(99),
    [sym_tmp_fromto_command] = STATE(99),
    [sym_tmp_arch_command] = STATE(99),
    [sym_tmp_bits_command] = STATE(99),
    [sym_tmp_nthi_command] = STATE(99),
    [sym_tmp_eval_command] = STATE(99),
    [sym_tmp_fs_command] = STATE(99),
    [sym_tmp_reli_command] = STATE(99),
    [sym_tmp_kuery_command] = STATE(99),
    [sym_tmp_fd_command] = STATE(99),
    [sym_tmp_reg_command] = STATE(99),
    [sym_tmp_file_command] = STATE(99),
    [sym_tmp_string_command] = STATE(99),
    [sym_tmp_hex_command] = STATE(99),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(99),
    [sym_arged_command] = STATE(99),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(99),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(99),
    [sym_redirect_command] = STATE(253),
    [aux_sym_commands_repeat1] = STATE(174),
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
    [sym__command] = STATE(267),
    [sym_legacy_quoted_command] = STATE(99),
    [sym__simple_command] = STATE(99),
    [sym__tmp_command] = STATE(99),
    [sym__iter_command] = STATE(99),
    [sym__pipe_command] = STATE(99),
    [sym_grep_command] = STATE(99),
    [sym_html_disable_command] = STATE(99),
    [sym_html_enable_command] = STATE(99),
    [sym_scr_tts_command] = STATE(99),
    [sym_pipe_command] = STATE(99),
    [sym_iter_flags_command] = STATE(99),
    [sym_iter_dbta_command] = STATE(99),
    [sym_iter_dbtb_command] = STATE(99),
    [sym_iter_dbts_command] = STATE(99),
    [sym_iter_file_lines_command] = STATE(99),
    [sym_iter_offsets_command] = STATE(99),
    [sym_iter_sdbquery_command] = STATE(99),
    [sym_iter_threads_command] = STATE(99),
    [sym_iter_bbs_command] = STATE(99),
    [sym_iter_instrs_command] = STATE(99),
    [sym_iter_sections_command] = STATE(99),
    [sym_iter_functions_command] = STATE(99),
    [sym_iter_step_command] = STATE(99),
    [sym_iter_interpret_command] = STATE(99),
    [sym_tmp_seek_command] = STATE(99),
    [sym_tmp_blksz_command] = STATE(99),
    [sym_tmp_fromto_command] = STATE(99),
    [sym_tmp_arch_command] = STATE(99),
    [sym_tmp_bits_command] = STATE(99),
    [sym_tmp_nthi_command] = STATE(99),
    [sym_tmp_eval_command] = STATE(99),
    [sym_tmp_fs_command] = STATE(99),
    [sym_tmp_reli_command] = STATE(99),
    [sym_tmp_kuery_command] = STATE(99),
    [sym_tmp_fd_command] = STATE(99),
    [sym_tmp_reg_command] = STATE(99),
    [sym_tmp_file_command] = STATE(99),
    [sym_tmp_string_command] = STATE(99),
    [sym_tmp_hex_command] = STATE(99),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(99),
    [sym_arged_command] = STATE(99),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(99),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(99),
    [sym_redirect_command] = STATE(267),
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
    [sym__commands_singleline] = STATE(312),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__commands_singleline] = STATE(305),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [9] = {
    [sym__commands_singleline] = STATE(300),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [10] = {
    [sym__commands_singleline] = STATE(299),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [11] = {
    [sym__commands_singleline] = STATE(298),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [12] = {
    [sym__commands_singleline] = STATE(297),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [13] = {
    [sym__commands_singleline] = STATE(293),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [14] = {
    [sym__commands_singleline] = STATE(307),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [15] = {
    [sym__commands_singleline] = STATE(289),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [16] = {
    [sym__commands_singleline] = STATE(306),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [17] = {
    [sym__commands_singleline] = STATE(292),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [18] = {
    [sym__commands_singleline] = STATE(291),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [19] = {
    [sym__commands_singleline] = STATE(294),
    [sym__command] = STATE(276),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(24),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [20] = {
    [sym__commands_singleline] = STATE(301),
    [sym__command] = STATE(274),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(274),
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
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(284),
    [aux_sym__commands_singleline_repeat1] = STATE(175),
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
    [anon_sym_SEMI] = ACTIONS(79),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(162),
    [sym_redirect_command] = STATE(277),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(81),
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
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(51),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [23] = {
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
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
    [sym_macro_identifier] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [24] = {
    [sym__command] = STATE(279),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(160),
    [sym_arged_command] = STATE(160),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(160),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(160),
    [sym_redirect_command] = STATE(279),
    [aux_sym__commands_singleline_repeat1] = STATE(175),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [25] = {
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(170),
    [sym_arged_command] = STATE(170),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(170),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(170),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [26] = {
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(164),
    [sym_arged_command] = STATE(164),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(164),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(165),
    [sym_arged_command] = STATE(165),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(165),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
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
    [sym_legacy_quoted_command] = STATE(172),
    [sym__simple_command] = STATE(172),
    [sym__tmp_command] = STATE(172),
    [sym__iter_command] = STATE(172),
    [sym__pipe_command] = STATE(172),
    [sym_grep_command] = STATE(172),
    [sym_html_disable_command] = STATE(172),
    [sym_html_enable_command] = STATE(172),
    [sym_scr_tts_command] = STATE(172),
    [sym_pipe_command] = STATE(172),
    [sym_iter_flags_command] = STATE(172),
    [sym_iter_dbta_command] = STATE(172),
    [sym_iter_dbtb_command] = STATE(172),
    [sym_iter_dbts_command] = STATE(172),
    [sym_iter_file_lines_command] = STATE(172),
    [sym_iter_offsets_command] = STATE(172),
    [sym_iter_sdbquery_command] = STATE(172),
    [sym_iter_threads_command] = STATE(172),
    [sym_iter_bbs_command] = STATE(172),
    [sym_iter_instrs_command] = STATE(172),
    [sym_iter_sections_command] = STATE(172),
    [sym_iter_functions_command] = STATE(172),
    [sym_iter_step_command] = STATE(172),
    [sym_iter_interpret_command] = STATE(172),
    [sym_tmp_seek_command] = STATE(172),
    [sym_tmp_blksz_command] = STATE(172),
    [sym_tmp_fromto_command] = STATE(172),
    [sym_tmp_arch_command] = STATE(172),
    [sym_tmp_bits_command] = STATE(172),
    [sym_tmp_nthi_command] = STATE(172),
    [sym_tmp_eval_command] = STATE(172),
    [sym_tmp_fs_command] = STATE(172),
    [sym_tmp_reli_command] = STATE(172),
    [sym_tmp_kuery_command] = STATE(172),
    [sym_tmp_fd_command] = STATE(172),
    [sym_tmp_reg_command] = STATE(172),
    [sym_tmp_file_command] = STATE(172),
    [sym_tmp_string_command] = STATE(172),
    [sym_tmp_hex_command] = STATE(172),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(172),
    [sym_arged_command] = STATE(172),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(172),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(172),
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
  [29] = {
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
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(169),
    [sym_arged_command] = STATE(169),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(177),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(169),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(33),
    [sym_repeat_command] = STATE(169),
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
    [sym_legacy_quoted_command] = STATE(173),
    [sym__simple_command] = STATE(173),
    [sym__tmp_command] = STATE(173),
    [sym__iter_command] = STATE(173),
    [sym__pipe_command] = STATE(173),
    [sym_grep_command] = STATE(173),
    [sym_html_disable_command] = STATE(173),
    [sym_html_enable_command] = STATE(173),
    [sym_scr_tts_command] = STATE(173),
    [sym_pipe_command] = STATE(173),
    [sym_iter_flags_command] = STATE(173),
    [sym_iter_dbta_command] = STATE(173),
    [sym_iter_dbtb_command] = STATE(173),
    [sym_iter_dbts_command] = STATE(173),
    [sym_iter_file_lines_command] = STATE(173),
    [sym_iter_offsets_command] = STATE(173),
    [sym_iter_sdbquery_command] = STATE(173),
    [sym_iter_threads_command] = STATE(173),
    [sym_iter_bbs_command] = STATE(173),
    [sym_iter_instrs_command] = STATE(173),
    [sym_iter_sections_command] = STATE(173),
    [sym_iter_functions_command] = STATE(173),
    [sym_iter_step_command] = STATE(173),
    [sym_iter_interpret_command] = STATE(173),
    [sym_tmp_seek_command] = STATE(173),
    [sym_tmp_blksz_command] = STATE(173),
    [sym_tmp_fromto_command] = STATE(173),
    [sym_tmp_arch_command] = STATE(173),
    [sym_tmp_bits_command] = STATE(173),
    [sym_tmp_nthi_command] = STATE(173),
    [sym_tmp_eval_command] = STATE(173),
    [sym_tmp_fs_command] = STATE(173),
    [sym_tmp_reli_command] = STATE(173),
    [sym_tmp_kuery_command] = STATE(173),
    [sym_tmp_fd_command] = STATE(173),
    [sym_tmp_reg_command] = STATE(173),
    [sym_tmp_file_command] = STATE(173),
    [sym_tmp_string_command] = STATE(173),
    [sym_tmp_hex_command] = STATE(173),
    [sym__interpreter_command] = STATE(109),
    [sym_help_command] = STATE(173),
    [sym_arged_command] = STATE(173),
    [sym__simple_arged_command] = STATE(109),
    [sym__math_arged_command] = STATE(109),
    [sym__pointer_arged_command] = STATE(109),
    [sym__macro_arged_command] = STATE(109),
    [sym__system_command] = STATE(109),
    [sym__interpret_command] = STATE(109),
    [sym__interpret_search_identifier] = STATE(178),
    [sym__env_command] = STATE(109),
    [sym__env_command_identifier] = STATE(48),
    [sym_last_command] = STATE(173),
    [sym_last_command_identifier] = STATE(114),
    [sym__interpret_identifier] = STATE(45),
    [sym_repeat_command] = STATE(173),
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
    [sym_macro_identifier] = ACTIONS(59),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(61),
    [sym__help_command] = ACTIONS(63),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(67),
  },
  [31] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(106),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
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
  [32] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_PIPET] = ACTIONS(99),
    [anon_sym_AT_AT] = ACTIONS(101),
    [anon_sym_AT_ATdbt] = ACTIONS(101),
    [anon_sym_AT_ATdbta] = ACTIONS(99),
    [anon_sym_AT_ATdbtb] = ACTIONS(99),
    [anon_sym_AT_ATdbts] = ACTIONS(99),
    [anon_sym_AT_AT_DOT] = ACTIONS(99),
    [anon_sym_AT_AT_EQ] = ACTIONS(99),
    [anon_sym_AT_ATk] = ACTIONS(99),
    [anon_sym_AT_ATt] = ACTIONS(99),
    [anon_sym_AT_ATb] = ACTIONS(99),
    [anon_sym_AT_ATi] = ACTIONS(101),
    [anon_sym_AT_ATiS] = ACTIONS(99),
    [anon_sym_AT_ATf] = ACTIONS(99),
    [anon_sym_AT_ATs_COLON] = ACTIONS(99),
    [anon_sym_AT_ATc_COLON] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(101),
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
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(99),
    [sym_html_redirect_operator] = ACTIONS(101),
    [sym_html_append_operator] = ACTIONS(99),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(99),
    [anon_sym_CR] = ACTIONS(99),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_file_descriptor] = ACTIONS(99),
  },
  [33] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(149),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_PIPEH] = ACTIONS(103),
    [anon_sym_PIPET] = ACTIONS(103),
    [anon_sym_AT_AT] = ACTIONS(105),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(103),
    [anon_sym_AT_ATdbtb] = ACTIONS(103),
    [anon_sym_AT_ATdbts] = ACTIONS(103),
    [anon_sym_AT_AT_DOT] = ACTIONS(103),
    [anon_sym_AT_AT_EQ] = ACTIONS(103),
    [anon_sym_AT_ATk] = ACTIONS(103),
    [anon_sym_AT_ATt] = ACTIONS(103),
    [anon_sym_AT_ATb] = ACTIONS(103),
    [anon_sym_AT_ATi] = ACTIONS(105),
    [anon_sym_AT_ATiS] = ACTIONS(103),
    [anon_sym_AT_ATf] = ACTIONS(103),
    [anon_sym_AT_ATs_COLON] = ACTIONS(103),
    [anon_sym_AT_ATc_COLON] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
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
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_PIPE_DOT] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(103),
    [sym_html_redirect_operator] = ACTIONS(105),
    [sym_html_append_operator] = ACTIONS(103),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(103),
    [anon_sym_CR] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [sym_file_descriptor] = ACTIONS(103),
  },
  [34] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(124),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
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
  [35] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(150),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PIPEH] = ACTIONS(107),
    [anon_sym_PIPET] = ACTIONS(107),
    [anon_sym_AT_AT] = ACTIONS(109),
    [anon_sym_AT_ATdbt] = ACTIONS(109),
    [anon_sym_AT_ATdbta] = ACTIONS(107),
    [anon_sym_AT_ATdbtb] = ACTIONS(107),
    [anon_sym_AT_ATdbts] = ACTIONS(107),
    [anon_sym_AT_AT_DOT] = ACTIONS(107),
    [anon_sym_AT_AT_EQ] = ACTIONS(107),
    [anon_sym_AT_ATk] = ACTIONS(107),
    [anon_sym_AT_ATt] = ACTIONS(107),
    [anon_sym_AT_ATb] = ACTIONS(107),
    [anon_sym_AT_ATi] = ACTIONS(109),
    [anon_sym_AT_ATiS] = ACTIONS(107),
    [anon_sym_AT_ATf] = ACTIONS(107),
    [anon_sym_AT_ATs_COLON] = ACTIONS(107),
    [anon_sym_AT_ATc_COLON] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(109),
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
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_PIPE_DOT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(107),
    [sym_html_redirect_operator] = ACTIONS(109),
    [sym_html_append_operator] = ACTIONS(107),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_CR] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
  },
  [36] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(123),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPEH] = ACTIONS(111),
    [anon_sym_PIPET] = ACTIONS(111),
    [anon_sym_AT_AT] = ACTIONS(113),
    [anon_sym_AT_ATdbt] = ACTIONS(113),
    [anon_sym_AT_ATdbta] = ACTIONS(111),
    [anon_sym_AT_ATdbtb] = ACTIONS(111),
    [anon_sym_AT_ATdbts] = ACTIONS(111),
    [anon_sym_AT_AT_DOT] = ACTIONS(111),
    [anon_sym_AT_AT_EQ] = ACTIONS(111),
    [anon_sym_AT_ATk] = ACTIONS(111),
    [anon_sym_AT_ATt] = ACTIONS(111),
    [anon_sym_AT_ATb] = ACTIONS(111),
    [anon_sym_AT_ATi] = ACTIONS(113),
    [anon_sym_AT_ATiS] = ACTIONS(111),
    [anon_sym_AT_ATf] = ACTIONS(111),
    [anon_sym_AT_ATs_COLON] = ACTIONS(111),
    [anon_sym_AT_ATc_COLON] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
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
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_PIPE_DOT] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(111),
    [sym_html_redirect_operator] = ACTIONS(113),
    [sym_html_append_operator] = ACTIONS(111),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_CR] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [sym_file_descriptor] = ACTIONS(111),
  },
  [37] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_DQUOTE] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_PIPEH] = ACTIONS(115),
    [anon_sym_PIPET] = ACTIONS(115),
    [anon_sym_AT_AT] = ACTIONS(120),
    [anon_sym_AT_ATdbt] = ACTIONS(120),
    [anon_sym_AT_ATdbta] = ACTIONS(115),
    [anon_sym_AT_ATdbtb] = ACTIONS(115),
    [anon_sym_AT_ATdbts] = ACTIONS(115),
    [anon_sym_AT_AT_DOT] = ACTIONS(115),
    [anon_sym_AT_AT_EQ] = ACTIONS(115),
    [anon_sym_AT_ATk] = ACTIONS(115),
    [anon_sym_AT_ATt] = ACTIONS(115),
    [anon_sym_AT_ATb] = ACTIONS(115),
    [anon_sym_AT_ATi] = ACTIONS(120),
    [anon_sym_AT_ATiS] = ACTIONS(115),
    [anon_sym_AT_ATf] = ACTIONS(115),
    [anon_sym_AT_ATs_COLON] = ACTIONS(115),
    [anon_sym_AT_ATc_COLON] = ACTIONS(115),
    [anon_sym_AT] = ACTIONS(120),
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
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_PIPE_DOT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_GT_GT] = ACTIONS(115),
    [sym_html_redirect_operator] = ACTIONS(120),
    [sym_html_append_operator] = ACTIONS(115),
    [sym_arg_identifier] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(128),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(115),
    [anon_sym_CR] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [sym_file_descriptor] = ACTIONS(115),
  },
  [38] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(134),
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
    [anon_sym_PIPE_DOT] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(134),
    [sym_html_redirect_operator] = ACTIONS(136),
    [sym_html_append_operator] = ACTIONS(134),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(134),
    [anon_sym_CR] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_file_descriptor] = ACTIONS(134),
  },
  [39] = {
    [sym_eq_sep_args] = STATE(115),
    [sym__eq_sep_key_single] = STATE(62),
    [sym_eq_sep_key] = STATE(100),
    [sym_double_quoted_arg] = STATE(72),
    [sym_single_quoted_arg] = STATE(72),
    [sym_cmd_substitution_arg] = STATE(72),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_PIPEH] = ACTIONS(138),
    [anon_sym_PIPET] = ACTIONS(138),
    [anon_sym_AT_AT] = ACTIONS(142),
    [anon_sym_AT_ATdbt] = ACTIONS(142),
    [anon_sym_AT_ATdbta] = ACTIONS(138),
    [anon_sym_AT_ATdbtb] = ACTIONS(138),
    [anon_sym_AT_ATdbts] = ACTIONS(138),
    [anon_sym_AT_AT_DOT] = ACTIONS(138),
    [anon_sym_AT_AT_EQ] = ACTIONS(138),
    [anon_sym_AT_ATk] = ACTIONS(138),
    [anon_sym_AT_ATt] = ACTIONS(138),
    [anon_sym_AT_ATb] = ACTIONS(138),
    [anon_sym_AT_ATi] = ACTIONS(142),
    [anon_sym_AT_ATiS] = ACTIONS(138),
    [anon_sym_AT_ATf] = ACTIONS(138),
    [anon_sym_AT_ATs_COLON] = ACTIONS(138),
    [anon_sym_AT_ATc_COLON] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_AT_BANG] = ACTIONS(138),
    [anon_sym_AT_LPAREN] = ACTIONS(138),
    [anon_sym_ATa_COLON] = ACTIONS(138),
    [anon_sym_ATb_COLON] = ACTIONS(138),
    [anon_sym_ATB_COLON] = ACTIONS(138),
    [anon_sym_ATe_COLON] = ACTIONS(138),
    [anon_sym_ATF_COLON] = ACTIONS(138),
    [anon_sym_ATi_COLON] = ACTIONS(138),
    [anon_sym_ATk_COLON] = ACTIONS(138),
    [anon_sym_ATo_COLON] = ACTIONS(138),
    [anon_sym_ATr_COLON] = ACTIONS(138),
    [anon_sym_ATf_COLON] = ACTIONS(138),
    [anon_sym_ATs_COLON] = ACTIONS(138),
    [anon_sym_ATx_COLON] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_PIPE_DOT] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(138),
    [sym_html_redirect_operator] = ACTIONS(142),
    [sym_html_append_operator] = ACTIONS(138),
    [sym__eq_sep_key_identifier] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(138),
    [anon_sym_CR] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(138),
    [sym_file_descriptor] = ACTIONS(138),
  },
  [40] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(101),
    [anon_sym_PIPEH] = ACTIONS(99),
    [anon_sym_PIPET] = ACTIONS(99),
    [anon_sym_AT_AT] = ACTIONS(101),
    [anon_sym_AT_ATdbt] = ACTIONS(101),
    [anon_sym_AT_ATdbta] = ACTIONS(99),
    [anon_sym_AT_ATdbtb] = ACTIONS(99),
    [anon_sym_AT_ATdbts] = ACTIONS(99),
    [anon_sym_AT_AT_DOT] = ACTIONS(99),
    [anon_sym_AT_AT_EQ] = ACTIONS(99),
    [anon_sym_AT_ATk] = ACTIONS(99),
    [anon_sym_AT_ATt] = ACTIONS(99),
    [anon_sym_AT_ATb] = ACTIONS(99),
    [anon_sym_AT_ATi] = ACTIONS(101),
    [anon_sym_AT_ATiS] = ACTIONS(99),
    [anon_sym_AT_ATf] = ACTIONS(99),
    [anon_sym_AT_ATs_COLON] = ACTIONS(99),
    [anon_sym_AT_ATc_COLON] = ACTIONS(99),
    [anon_sym_AT] = ACTIONS(101),
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
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_GT_GT] = ACTIONS(99),
    [sym_html_redirect_operator] = ACTIONS(101),
    [sym_html_append_operator] = ACTIONS(99),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_file_descriptor] = ACTIONS(99),
  },
  [41] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(150),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PIPEH] = ACTIONS(107),
    [anon_sym_PIPET] = ACTIONS(107),
    [anon_sym_AT_AT] = ACTIONS(109),
    [anon_sym_AT_ATdbt] = ACTIONS(109),
    [anon_sym_AT_ATdbta] = ACTIONS(107),
    [anon_sym_AT_ATdbtb] = ACTIONS(107),
    [anon_sym_AT_ATdbts] = ACTIONS(107),
    [anon_sym_AT_AT_DOT] = ACTIONS(107),
    [anon_sym_AT_AT_EQ] = ACTIONS(107),
    [anon_sym_AT_ATk] = ACTIONS(107),
    [anon_sym_AT_ATt] = ACTIONS(107),
    [anon_sym_AT_ATb] = ACTIONS(107),
    [anon_sym_AT_ATi] = ACTIONS(109),
    [anon_sym_AT_ATiS] = ACTIONS(107),
    [anon_sym_AT_ATf] = ACTIONS(107),
    [anon_sym_AT_ATs_COLON] = ACTIONS(107),
    [anon_sym_AT_ATc_COLON] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(109),
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
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(107),
    [sym_html_redirect_operator] = ACTIONS(109),
    [sym_html_append_operator] = ACTIONS(107),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(107),
    [sym_file_descriptor] = ACTIONS(107),
  },
  [42] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(123),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_PIPEH] = ACTIONS(111),
    [anon_sym_PIPET] = ACTIONS(111),
    [anon_sym_AT_AT] = ACTIONS(113),
    [anon_sym_AT_ATdbt] = ACTIONS(113),
    [anon_sym_AT_ATdbta] = ACTIONS(111),
    [anon_sym_AT_ATdbtb] = ACTIONS(111),
    [anon_sym_AT_ATdbts] = ACTIONS(111),
    [anon_sym_AT_AT_DOT] = ACTIONS(111),
    [anon_sym_AT_AT_EQ] = ACTIONS(111),
    [anon_sym_AT_ATk] = ACTIONS(111),
    [anon_sym_AT_ATt] = ACTIONS(111),
    [anon_sym_AT_ATb] = ACTIONS(111),
    [anon_sym_AT_ATi] = ACTIONS(113),
    [anon_sym_AT_ATiS] = ACTIONS(111),
    [anon_sym_AT_ATf] = ACTIONS(111),
    [anon_sym_AT_ATs_COLON] = ACTIONS(111),
    [anon_sym_AT_ATc_COLON] = ACTIONS(111),
    [anon_sym_AT] = ACTIONS(113),
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
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_GT_GT] = ACTIONS(111),
    [sym_html_redirect_operator] = ACTIONS(113),
    [sym_html_append_operator] = ACTIONS(111),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(111),
    [sym_file_descriptor] = ACTIONS(111),
  },
  [43] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(106),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
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
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(124),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
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
  [45] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(149),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [anon_sym_PIPEH] = ACTIONS(103),
    [anon_sym_PIPET] = ACTIONS(103),
    [anon_sym_AT_AT] = ACTIONS(105),
    [anon_sym_AT_ATdbt] = ACTIONS(105),
    [anon_sym_AT_ATdbta] = ACTIONS(103),
    [anon_sym_AT_ATdbtb] = ACTIONS(103),
    [anon_sym_AT_ATdbts] = ACTIONS(103),
    [anon_sym_AT_AT_DOT] = ACTIONS(103),
    [anon_sym_AT_AT_EQ] = ACTIONS(103),
    [anon_sym_AT_ATk] = ACTIONS(103),
    [anon_sym_AT_ATt] = ACTIONS(103),
    [anon_sym_AT_ATb] = ACTIONS(103),
    [anon_sym_AT_ATi] = ACTIONS(105),
    [anon_sym_AT_ATiS] = ACTIONS(103),
    [anon_sym_AT_ATf] = ACTIONS(103),
    [anon_sym_AT_ATs_COLON] = ACTIONS(103),
    [anon_sym_AT_ATc_COLON] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(105),
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
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(103),
    [sym_html_redirect_operator] = ACTIONS(105),
    [sym_html_append_operator] = ACTIONS(103),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(103),
    [sym_file_descriptor] = ACTIONS(103),
  },
  [46] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(37),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(134),
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
    [anon_sym_PIPE_DOT] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(134),
    [sym_html_redirect_operator] = ACTIONS(136),
    [sym_html_append_operator] = ACTIONS(134),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(134),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(134),
    [sym_file_descriptor] = ACTIONS(134),
  },
  [47] = {
    [aux_sym_concatenation_repeat1] = STATE(49),
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
    [sym__concat] = ACTIONS(156),
  },
  [48] = {
    [sym_eq_sep_args] = STATE(115),
    [sym__eq_sep_key_single] = STATE(62),
    [sym_eq_sep_key] = STATE(100),
    [sym_double_quoted_arg] = STATE(72),
    [sym_single_quoted_arg] = STATE(72),
    [sym_cmd_substitution_arg] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_PIPEH] = ACTIONS(138),
    [anon_sym_PIPET] = ACTIONS(138),
    [anon_sym_AT_AT] = ACTIONS(142),
    [anon_sym_AT_ATdbt] = ACTIONS(142),
    [anon_sym_AT_ATdbta] = ACTIONS(138),
    [anon_sym_AT_ATdbtb] = ACTIONS(138),
    [anon_sym_AT_ATdbts] = ACTIONS(138),
    [anon_sym_AT_AT_DOT] = ACTIONS(138),
    [anon_sym_AT_AT_EQ] = ACTIONS(138),
    [anon_sym_AT_ATk] = ACTIONS(138),
    [anon_sym_AT_ATt] = ACTIONS(138),
    [anon_sym_AT_ATb] = ACTIONS(138),
    [anon_sym_AT_ATi] = ACTIONS(142),
    [anon_sym_AT_ATiS] = ACTIONS(138),
    [anon_sym_AT_ATf] = ACTIONS(138),
    [anon_sym_AT_ATs_COLON] = ACTIONS(138),
    [anon_sym_AT_ATc_COLON] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_AT_BANG] = ACTIONS(138),
    [anon_sym_AT_LPAREN] = ACTIONS(138),
    [anon_sym_ATa_COLON] = ACTIONS(138),
    [anon_sym_ATb_COLON] = ACTIONS(138),
    [anon_sym_ATB_COLON] = ACTIONS(138),
    [anon_sym_ATe_COLON] = ACTIONS(138),
    [anon_sym_ATF_COLON] = ACTIONS(138),
    [anon_sym_ATi_COLON] = ACTIONS(138),
    [anon_sym_ATk_COLON] = ACTIONS(138),
    [anon_sym_ATo_COLON] = ACTIONS(138),
    [anon_sym_ATr_COLON] = ACTIONS(138),
    [anon_sym_ATf_COLON] = ACTIONS(138),
    [anon_sym_ATs_COLON] = ACTIONS(138),
    [anon_sym_ATx_COLON] = ACTIONS(138),
    [anon_sym_PIPE_DOT] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(138),
    [sym_html_redirect_operator] = ACTIONS(142),
    [sym_html_append_operator] = ACTIONS(138),
    [sym__eq_sep_key_identifier] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(138),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(138),
    [sym_file_descriptor] = ACTIONS(138),
  },
  [49] = {
    [aux_sym_concatenation_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(158),
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
    [anon_sym_PIPE_DOT] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(158),
    [sym_html_redirect_operator] = ACTIONS(160),
    [sym_html_append_operator] = ACTIONS(158),
    [sym_arg_identifier] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_file_descriptor] = ACTIONS(158),
    [sym__concat] = ACTIONS(156),
  },
  [50] = {
    [aux_sym_concatenation_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(162),
    [sym_arg_identifier] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(162),
    [sym__concat] = ACTIONS(166),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_PIPEH] = ACTIONS(169),
    [anon_sym_PIPET] = ACTIONS(169),
    [anon_sym_AT_AT] = ACTIONS(171),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(169),
    [anon_sym_AT_ATdbtb] = ACTIONS(169),
    [anon_sym_AT_ATdbts] = ACTIONS(169),
    [anon_sym_AT_AT_DOT] = ACTIONS(169),
    [anon_sym_AT_AT_EQ] = ACTIONS(169),
    [anon_sym_AT_ATk] = ACTIONS(169),
    [anon_sym_AT_ATt] = ACTIONS(169),
    [anon_sym_AT_ATb] = ACTIONS(169),
    [anon_sym_AT_ATi] = ACTIONS(171),
    [anon_sym_AT_ATiS] = ACTIONS(169),
    [anon_sym_AT_ATf] = ACTIONS(169),
    [anon_sym_AT_ATs_COLON] = ACTIONS(169),
    [anon_sym_AT_ATc_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_AT_BANG] = ACTIONS(169),
    [anon_sym_AT_LPAREN] = ACTIONS(169),
    [anon_sym_ATa_COLON] = ACTIONS(169),
    [anon_sym_ATb_COLON] = ACTIONS(169),
    [anon_sym_ATB_COLON] = ACTIONS(169),
    [anon_sym_ATe_COLON] = ACTIONS(169),
    [anon_sym_ATF_COLON] = ACTIONS(169),
    [anon_sym_ATi_COLON] = ACTIONS(169),
    [anon_sym_ATk_COLON] = ACTIONS(169),
    [anon_sym_ATo_COLON] = ACTIONS(169),
    [anon_sym_ATr_COLON] = ACTIONS(169),
    [anon_sym_ATf_COLON] = ACTIONS(169),
    [anon_sym_ATs_COLON] = ACTIONS(169),
    [anon_sym_ATx_COLON] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_PIPE_DOT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(169),
    [sym_html_redirect_operator] = ACTIONS(171),
    [sym_html_append_operator] = ACTIONS(169),
    [sym_arg_identifier] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_CR] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym__concat] = ACTIONS(169),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPEH] = ACTIONS(173),
    [anon_sym_PIPET] = ACTIONS(173),
    [anon_sym_AT_AT] = ACTIONS(175),
    [anon_sym_AT_ATdbt] = ACTIONS(175),
    [anon_sym_AT_ATdbta] = ACTIONS(173),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(173),
    [anon_sym_AT_AT_DOT] = ACTIONS(173),
    [anon_sym_AT_AT_EQ] = ACTIONS(173),
    [anon_sym_AT_ATk] = ACTIONS(173),
    [anon_sym_AT_ATt] = ACTIONS(173),
    [anon_sym_AT_ATb] = ACTIONS(173),
    [anon_sym_AT_ATi] = ACTIONS(175),
    [anon_sym_AT_ATiS] = ACTIONS(173),
    [anon_sym_AT_ATf] = ACTIONS(173),
    [anon_sym_AT_ATs_COLON] = ACTIONS(173),
    [anon_sym_AT_ATc_COLON] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_AT_BANG] = ACTIONS(173),
    [anon_sym_AT_LPAREN] = ACTIONS(173),
    [anon_sym_ATa_COLON] = ACTIONS(173),
    [anon_sym_ATb_COLON] = ACTIONS(173),
    [anon_sym_ATB_COLON] = ACTIONS(173),
    [anon_sym_ATe_COLON] = ACTIONS(173),
    [anon_sym_ATF_COLON] = ACTIONS(173),
    [anon_sym_ATi_COLON] = ACTIONS(173),
    [anon_sym_ATk_COLON] = ACTIONS(173),
    [anon_sym_ATo_COLON] = ACTIONS(173),
    [anon_sym_ATr_COLON] = ACTIONS(173),
    [anon_sym_ATf_COLON] = ACTIONS(173),
    [anon_sym_ATs_COLON] = ACTIONS(173),
    [anon_sym_ATx_COLON] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_PIPE_DOT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(173),
    [sym_html_redirect_operator] = ACTIONS(175),
    [sym_html_append_operator] = ACTIONS(173),
    [sym_arg_identifier] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym__concat] = ACTIONS(173),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [sym_arg_identifier] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [sym_arg_identifier] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_DQUOTE] = ACTIONS(181),
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
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_GT_GT] = ACTIONS(181),
    [sym_html_redirect_operator] = ACTIONS(183),
    [sym_html_append_operator] = ACTIONS(181),
    [sym_arg_identifier] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_CR] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [sym_file_descriptor] = ACTIONS(181),
    [sym__concat] = ACTIONS(181),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_DQUOTE] = ACTIONS(185),
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
    [anon_sym_PIPE_DOT] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_GT_GT] = ACTIONS(185),
    [sym_html_redirect_operator] = ACTIONS(187),
    [sym_html_append_operator] = ACTIONS(185),
    [sym_arg_identifier] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_CR] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [sym_file_descriptor] = ACTIONS(185),
    [sym__concat] = ACTIONS(185),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(162),
    [sym_arg_identifier] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(162),
    [sym__concat] = ACTIONS(162),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(189),
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
    [anon_sym_PIPE_DOT] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_GT_GT] = ACTIONS(189),
    [sym_html_redirect_operator] = ACTIONS(191),
    [sym_html_append_operator] = ACTIONS(189),
    [sym_arg_identifier] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(189),
    [anon_sym_BQUOTE] = ACTIONS(189),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(189),
    [anon_sym_CR] = ACTIONS(189),
    [anon_sym_SEMI] = ACTIONS(189),
    [sym_file_descriptor] = ACTIONS(189),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_TILDE] = ACTIONS(193),
    [anon_sym_PIPE] = ACTIONS(195),
    [anon_sym_PIPEH] = ACTIONS(193),
    [anon_sym_PIPET] = ACTIONS(193),
    [anon_sym_AT_AT] = ACTIONS(195),
    [anon_sym_AT_ATdbt] = ACTIONS(195),
    [anon_sym_AT_ATdbta] = ACTIONS(193),
    [anon_sym_AT_ATdbtb] = ACTIONS(193),
    [anon_sym_AT_ATdbts] = ACTIONS(193),
    [anon_sym_AT_AT_DOT] = ACTIONS(193),
    [anon_sym_AT_AT_EQ] = ACTIONS(193),
    [anon_sym_AT_ATk] = ACTIONS(193),
    [anon_sym_AT_ATt] = ACTIONS(193),
    [anon_sym_AT_ATb] = ACTIONS(193),
    [anon_sym_AT_ATi] = ACTIONS(195),
    [anon_sym_AT_ATiS] = ACTIONS(193),
    [anon_sym_AT_ATf] = ACTIONS(193),
    [anon_sym_AT_ATs_COLON] = ACTIONS(193),
    [anon_sym_AT_ATc_COLON] = ACTIONS(193),
    [anon_sym_AT] = ACTIONS(195),
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
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_PIPE_DOT] = ACTIONS(193),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(193),
    [sym_html_redirect_operator] = ACTIONS(195),
    [sym_html_append_operator] = ACTIONS(193),
    [sym__eq_sep_key_identifier] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_CR] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
  },
  [60] = {
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
  [61] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(65),
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
    [anon_sym_PIPE_DOT] = ACTIONS(197),
    [anon_sym_EQ] = ACTIONS(197),
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
    [sym__eq_sep_concat] = ACTIONS(201),
  },
  [62] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_TILDE] = ACTIONS(203),
    [anon_sym_PIPE] = ACTIONS(205),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(205),
    [anon_sym_AT_ATdbta] = ACTIONS(203),
    [anon_sym_AT_ATdbtb] = ACTIONS(203),
    [anon_sym_AT_ATdbts] = ACTIONS(203),
    [anon_sym_AT_AT_DOT] = ACTIONS(203),
    [anon_sym_AT_AT_EQ] = ACTIONS(203),
    [anon_sym_AT_ATk] = ACTIONS(203),
    [anon_sym_AT_ATt] = ACTIONS(203),
    [anon_sym_AT_ATb] = ACTIONS(203),
    [anon_sym_AT_ATi] = ACTIONS(205),
    [anon_sym_AT_ATiS] = ACTIONS(203),
    [anon_sym_AT_ATf] = ACTIONS(203),
    [anon_sym_AT_ATs_COLON] = ACTIONS(203),
    [anon_sym_AT_ATc_COLON] = ACTIONS(203),
    [anon_sym_AT] = ACTIONS(205),
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
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_PIPE_DOT] = ACTIONS(203),
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(203),
    [sym_html_redirect_operator] = ACTIONS(205),
    [sym_html_append_operator] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_CR] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(203),
    [sym__eq_sep_concat] = ACTIONS(201),
  },
  [63] = {
    [aux_sym_concatenation_repeat1] = STATE(64),
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
    [sym__eq_sep_concat] = ACTIONS(152),
    [sym__concat] = ACTIONS(207),
  },
  [64] = {
    [aux_sym_concatenation_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(158),
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
    [anon_sym_PIPE_DOT] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(158),
    [sym_html_redirect_operator] = ACTIONS(160),
    [sym_html_append_operator] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_file_descriptor] = ACTIONS(158),
    [sym__eq_sep_concat] = ACTIONS(158),
    [sym__concat] = ACTIONS(207),
  },
  [65] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(65),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
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
    [anon_sym_PIPE_DOT] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(209),
    [sym_html_redirect_operator] = ACTIONS(211),
    [sym_html_append_operator] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_CR] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym__eq_sep_concat] = ACTIONS(213),
  },
  [66] = {
    [aux_sym_concatenation_repeat1] = STATE(66),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(162),
    [sym__eq_sep_concat] = ACTIONS(162),
    [sym__concat] = ACTIONS(216),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__eq_sep_concat] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [68] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(84),
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
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_PIPE_DOT] = ACTIONS(219),
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
    [sym__eq_sep_concat] = ACTIONS(223),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_PIPEH] = ACTIONS(169),
    [anon_sym_PIPET] = ACTIONS(169),
    [anon_sym_AT_AT] = ACTIONS(171),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(169),
    [anon_sym_AT_ATdbtb] = ACTIONS(169),
    [anon_sym_AT_ATdbts] = ACTIONS(169),
    [anon_sym_AT_AT_DOT] = ACTIONS(169),
    [anon_sym_AT_AT_EQ] = ACTIONS(169),
    [anon_sym_AT_ATk] = ACTIONS(169),
    [anon_sym_AT_ATt] = ACTIONS(169),
    [anon_sym_AT_ATb] = ACTIONS(169),
    [anon_sym_AT_ATi] = ACTIONS(171),
    [anon_sym_AT_ATiS] = ACTIONS(169),
    [anon_sym_AT_ATf] = ACTIONS(169),
    [anon_sym_AT_ATs_COLON] = ACTIONS(169),
    [anon_sym_AT_ATc_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_AT_BANG] = ACTIONS(169),
    [anon_sym_AT_LPAREN] = ACTIONS(169),
    [anon_sym_ATa_COLON] = ACTIONS(169),
    [anon_sym_ATb_COLON] = ACTIONS(169),
    [anon_sym_ATB_COLON] = ACTIONS(169),
    [anon_sym_ATe_COLON] = ACTIONS(169),
    [anon_sym_ATF_COLON] = ACTIONS(169),
    [anon_sym_ATi_COLON] = ACTIONS(169),
    [anon_sym_ATk_COLON] = ACTIONS(169),
    [anon_sym_ATo_COLON] = ACTIONS(169),
    [anon_sym_ATr_COLON] = ACTIONS(169),
    [anon_sym_ATf_COLON] = ACTIONS(169),
    [anon_sym_ATs_COLON] = ACTIONS(169),
    [anon_sym_ATx_COLON] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_PIPE_DOT] = ACTIONS(169),
    [anon_sym_EQ] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(169),
    [sym_html_redirect_operator] = ACTIONS(171),
    [sym_html_append_operator] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_CR] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym__eq_sep_concat] = ACTIONS(169),
  },
  [70] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(82),
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
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
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_ATF_COLON] = ACTIONS(225),
    [anon_sym_ATi_COLON] = ACTIONS(225),
    [anon_sym_ATk_COLON] = ACTIONS(225),
    [anon_sym_ATo_COLON] = ACTIONS(225),
    [anon_sym_ATr_COLON] = ACTIONS(225),
    [anon_sym_ATf_COLON] = ACTIONS(225),
    [anon_sym_ATs_COLON] = ACTIONS(225),
    [anon_sym_ATx_COLON] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_PIPE_DOT] = ACTIONS(225),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_GT_GT] = ACTIONS(225),
    [sym_html_redirect_operator] = ACTIONS(227),
    [sym_html_append_operator] = ACTIONS(225),
    [anon_sym_BQUOTE] = ACTIONS(225),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(225),
    [anon_sym_CR] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(225),
    [sym_file_descriptor] = ACTIONS(225),
  },
  [71] = {
    [aux_sym_concatenation_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_TILDE] = ACTIONS(158),
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
    [anon_sym_PIPE_DOT] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(158),
    [sym_html_redirect_operator] = ACTIONS(160),
    [sym_html_append_operator] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_file_descriptor] = ACTIONS(158),
    [sym__concat] = ACTIONS(231),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
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
    [anon_sym_PIPE_DOT] = ACTIONS(233),
    [anon_sym_EQ] = ACTIONS(233),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_GT_GT] = ACTIONS(233),
    [sym_html_redirect_operator] = ACTIONS(235),
    [sym_html_append_operator] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(233),
    [anon_sym_CR] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [sym_file_descriptor] = ACTIONS(233),
    [sym__eq_sep_concat] = ACTIONS(233),
  },
  [73] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(185),
    [anon_sym_EQ] = ACTIONS(185),
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
    [sym__eq_sep_concat] = ACTIONS(185),
  },
  [74] = {
    [aux_sym_concatenation_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(162),
    [sym__concat] = ACTIONS(237),
  },
  [75] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_PIPEH] = ACTIONS(240),
    [anon_sym_PIPET] = ACTIONS(240),
    [anon_sym_AT_AT] = ACTIONS(242),
    [anon_sym_AT_ATdbt] = ACTIONS(242),
    [anon_sym_AT_ATdbta] = ACTIONS(240),
    [anon_sym_AT_ATdbtb] = ACTIONS(240),
    [anon_sym_AT_ATdbts] = ACTIONS(240),
    [anon_sym_AT_AT_DOT] = ACTIONS(240),
    [anon_sym_AT_AT_EQ] = ACTIONS(240),
    [anon_sym_AT_ATk] = ACTIONS(240),
    [anon_sym_AT_ATt] = ACTIONS(240),
    [anon_sym_AT_ATb] = ACTIONS(240),
    [anon_sym_AT_ATi] = ACTIONS(242),
    [anon_sym_AT_ATiS] = ACTIONS(240),
    [anon_sym_AT_ATf] = ACTIONS(240),
    [anon_sym_AT_ATs_COLON] = ACTIONS(240),
    [anon_sym_AT_ATc_COLON] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_AT_BANG] = ACTIONS(240),
    [anon_sym_AT_LPAREN] = ACTIONS(240),
    [anon_sym_ATa_COLON] = ACTIONS(240),
    [anon_sym_ATb_COLON] = ACTIONS(240),
    [anon_sym_ATB_COLON] = ACTIONS(240),
    [anon_sym_ATe_COLON] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_ATF_COLON] = ACTIONS(240),
    [anon_sym_ATi_COLON] = ACTIONS(240),
    [anon_sym_ATk_COLON] = ACTIONS(240),
    [anon_sym_ATo_COLON] = ACTIONS(240),
    [anon_sym_ATr_COLON] = ACTIONS(240),
    [anon_sym_ATf_COLON] = ACTIONS(240),
    [anon_sym_ATs_COLON] = ACTIONS(240),
    [anon_sym_ATx_COLON] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_PIPE_DOT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(242),
    [anon_sym_GT_GT] = ACTIONS(240),
    [sym_html_redirect_operator] = ACTIONS(242),
    [sym_html_append_operator] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(240),
    [anon_sym_CR] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [sym_file_descriptor] = ACTIONS(240),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__eq_sep_concat] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [77] = {
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
    [sym__eq_sep_concat] = ACTIONS(181),
    [sym__concat] = ACTIONS(181),
  },
  [78] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(185),
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
    [sym__eq_sep_concat] = ACTIONS(185),
    [sym__concat] = ACTIONS(185),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(209),
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
    [anon_sym_PIPE_DOT] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_GT_GT] = ACTIONS(209),
    [sym_html_redirect_operator] = ACTIONS(211),
    [sym_html_append_operator] = ACTIONS(209),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_CR] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
    [sym_file_descriptor] = ACTIONS(209),
    [sym__eq_sep_concat] = ACTIONS(209),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_PIPEH] = ACTIONS(169),
    [anon_sym_PIPET] = ACTIONS(169),
    [anon_sym_AT_AT] = ACTIONS(171),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(169),
    [anon_sym_AT_ATdbtb] = ACTIONS(169),
    [anon_sym_AT_ATdbts] = ACTIONS(169),
    [anon_sym_AT_AT_DOT] = ACTIONS(169),
    [anon_sym_AT_AT_EQ] = ACTIONS(169),
    [anon_sym_AT_ATk] = ACTIONS(169),
    [anon_sym_AT_ATt] = ACTIONS(169),
    [anon_sym_AT_ATb] = ACTIONS(169),
    [anon_sym_AT_ATi] = ACTIONS(171),
    [anon_sym_AT_ATiS] = ACTIONS(169),
    [anon_sym_AT_ATf] = ACTIONS(169),
    [anon_sym_AT_ATs_COLON] = ACTIONS(169),
    [anon_sym_AT_ATc_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_AT_BANG] = ACTIONS(169),
    [anon_sym_AT_LPAREN] = ACTIONS(169),
    [anon_sym_ATa_COLON] = ACTIONS(169),
    [anon_sym_ATb_COLON] = ACTIONS(169),
    [anon_sym_ATB_COLON] = ACTIONS(169),
    [anon_sym_ATe_COLON] = ACTIONS(169),
    [anon_sym_ATF_COLON] = ACTIONS(169),
    [anon_sym_ATi_COLON] = ACTIONS(169),
    [anon_sym_ATk_COLON] = ACTIONS(169),
    [anon_sym_ATo_COLON] = ACTIONS(169),
    [anon_sym_ATr_COLON] = ACTIONS(169),
    [anon_sym_ATf_COLON] = ACTIONS(169),
    [anon_sym_ATs_COLON] = ACTIONS(169),
    [anon_sym_ATx_COLON] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_PIPE_DOT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(169),
    [sym_html_redirect_operator] = ACTIONS(171),
    [sym_html_append_operator] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_CR] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym__eq_sep_concat] = ACTIONS(169),
    [sym__concat] = ACTIONS(169),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPEH] = ACTIONS(173),
    [anon_sym_PIPET] = ACTIONS(173),
    [anon_sym_AT_AT] = ACTIONS(175),
    [anon_sym_AT_ATdbt] = ACTIONS(175),
    [anon_sym_AT_ATdbta] = ACTIONS(173),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(173),
    [anon_sym_AT_AT_DOT] = ACTIONS(173),
    [anon_sym_AT_AT_EQ] = ACTIONS(173),
    [anon_sym_AT_ATk] = ACTIONS(173),
    [anon_sym_AT_ATt] = ACTIONS(173),
    [anon_sym_AT_ATb] = ACTIONS(173),
    [anon_sym_AT_ATi] = ACTIONS(175),
    [anon_sym_AT_ATiS] = ACTIONS(173),
    [anon_sym_AT_ATf] = ACTIONS(173),
    [anon_sym_AT_ATs_COLON] = ACTIONS(173),
    [anon_sym_AT_ATc_COLON] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_AT_BANG] = ACTIONS(173),
    [anon_sym_AT_LPAREN] = ACTIONS(173),
    [anon_sym_ATa_COLON] = ACTIONS(173),
    [anon_sym_ATb_COLON] = ACTIONS(173),
    [anon_sym_ATB_COLON] = ACTIONS(173),
    [anon_sym_ATe_COLON] = ACTIONS(173),
    [anon_sym_ATF_COLON] = ACTIONS(173),
    [anon_sym_ATi_COLON] = ACTIONS(173),
    [anon_sym_ATk_COLON] = ACTIONS(173),
    [anon_sym_ATo_COLON] = ACTIONS(173),
    [anon_sym_ATr_COLON] = ACTIONS(173),
    [anon_sym_ATf_COLON] = ACTIONS(173),
    [anon_sym_ATs_COLON] = ACTIONS(173),
    [anon_sym_ATx_COLON] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_PIPE_DOT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(173),
    [sym_html_redirect_operator] = ACTIONS(175),
    [sym_html_append_operator] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym__eq_sep_concat] = ACTIONS(173),
    [sym__concat] = ACTIONS(173),
  },
  [82] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_TILDE] = ACTIONS(247),
    [anon_sym_PIPE] = ACTIONS(249),
    [anon_sym_PIPEH] = ACTIONS(247),
    [anon_sym_PIPET] = ACTIONS(247),
    [anon_sym_AT_AT] = ACTIONS(249),
    [anon_sym_AT_ATdbt] = ACTIONS(249),
    [anon_sym_AT_ATdbta] = ACTIONS(247),
    [anon_sym_AT_ATdbtb] = ACTIONS(247),
    [anon_sym_AT_ATdbts] = ACTIONS(247),
    [anon_sym_AT_AT_DOT] = ACTIONS(247),
    [anon_sym_AT_AT_EQ] = ACTIONS(247),
    [anon_sym_AT_ATk] = ACTIONS(247),
    [anon_sym_AT_ATt] = ACTIONS(247),
    [anon_sym_AT_ATb] = ACTIONS(247),
    [anon_sym_AT_ATi] = ACTIONS(249),
    [anon_sym_AT_ATiS] = ACTIONS(247),
    [anon_sym_AT_ATf] = ACTIONS(247),
    [anon_sym_AT_ATs_COLON] = ACTIONS(247),
    [anon_sym_AT_ATc_COLON] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(247),
    [anon_sym_AT_LPAREN] = ACTIONS(247),
    [anon_sym_ATa_COLON] = ACTIONS(247),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(247),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_ATF_COLON] = ACTIONS(247),
    [anon_sym_ATi_COLON] = ACTIONS(247),
    [anon_sym_ATk_COLON] = ACTIONS(247),
    [anon_sym_ATo_COLON] = ACTIONS(247),
    [anon_sym_ATr_COLON] = ACTIONS(247),
    [anon_sym_ATf_COLON] = ACTIONS(247),
    [anon_sym_ATs_COLON] = ACTIONS(247),
    [anon_sym_ATx_COLON] = ACTIONS(247),
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_PIPE_DOT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_GT_GT] = ACTIONS(247),
    [sym_html_redirect_operator] = ACTIONS(249),
    [sym_html_append_operator] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(247),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(247),
    [anon_sym_CR] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(247),
    [sym_file_descriptor] = ACTIONS(247),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(162),
    [sym__eq_sep_concat] = ACTIONS(162),
    [sym__concat] = ACTIONS(162),
  },
  [84] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(89),
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
    [sym__eq_sep_concat] = ACTIONS(223),
  },
  [85] = {
    [aux_sym_concatenation_repeat1] = STATE(71),
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
    [sym__concat] = ACTIONS(231),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPEH] = ACTIONS(173),
    [anon_sym_PIPET] = ACTIONS(173),
    [anon_sym_AT_AT] = ACTIONS(175),
    [anon_sym_AT_ATdbt] = ACTIONS(175),
    [anon_sym_AT_ATdbta] = ACTIONS(173),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(173),
    [anon_sym_AT_AT_DOT] = ACTIONS(173),
    [anon_sym_AT_AT_EQ] = ACTIONS(173),
    [anon_sym_AT_ATk] = ACTIONS(173),
    [anon_sym_AT_ATt] = ACTIONS(173),
    [anon_sym_AT_ATb] = ACTIONS(173),
    [anon_sym_AT_ATi] = ACTIONS(175),
    [anon_sym_AT_ATiS] = ACTIONS(173),
    [anon_sym_AT_ATf] = ACTIONS(173),
    [anon_sym_AT_ATs_COLON] = ACTIONS(173),
    [anon_sym_AT_ATc_COLON] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_AT_BANG] = ACTIONS(173),
    [anon_sym_AT_LPAREN] = ACTIONS(173),
    [anon_sym_ATa_COLON] = ACTIONS(173),
    [anon_sym_ATb_COLON] = ACTIONS(173),
    [anon_sym_ATB_COLON] = ACTIONS(173),
    [anon_sym_ATe_COLON] = ACTIONS(173),
    [anon_sym_ATF_COLON] = ACTIONS(173),
    [anon_sym_ATi_COLON] = ACTIONS(173),
    [anon_sym_ATk_COLON] = ACTIONS(173),
    [anon_sym_ATo_COLON] = ACTIONS(173),
    [anon_sym_ATr_COLON] = ACTIONS(173),
    [anon_sym_ATf_COLON] = ACTIONS(173),
    [anon_sym_ATs_COLON] = ACTIONS(173),
    [anon_sym_ATx_COLON] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_PIPE_DOT] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(173),
    [sym_html_redirect_operator] = ACTIONS(175),
    [sym_html_append_operator] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym__eq_sep_concat] = ACTIONS(173),
  },
  [87] = {
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
    [anon_sym_EQ] = ACTIONS(181),
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
    [sym__eq_sep_concat] = ACTIONS(181),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__eq_sep_concat] = ACTIONS(177),
  },
  [89] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(89),
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
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_PIPE_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(255),
    [sym_html_redirect_operator] = ACTIONS(257),
    [sym_html_append_operator] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_CR] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [sym_file_descriptor] = ACTIONS(255),
    [sym__eq_sep_concat] = ACTIONS(259),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_EQ] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__eq_sep_concat] = ACTIONS(177),
  },
  [91] = {
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
    [sym__concat] = ACTIONS(181),
  },
  [92] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(185),
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
    [sym__concat] = ACTIONS(185),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [94] = {
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
    [anon_sym_RPAREN] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_PIPE_DOT] = ACTIONS(262),
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
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_TILDE] = ACTIONS(177),
    [anon_sym_PIPE] = ACTIONS(179),
    [anon_sym_PIPEH] = ACTIONS(177),
    [anon_sym_PIPET] = ACTIONS(177),
    [anon_sym_AT_AT] = ACTIONS(179),
    [anon_sym_AT_ATdbt] = ACTIONS(179),
    [anon_sym_AT_ATdbta] = ACTIONS(177),
    [anon_sym_AT_ATdbtb] = ACTIONS(177),
    [anon_sym_AT_ATdbts] = ACTIONS(177),
    [anon_sym_AT_AT_DOT] = ACTIONS(177),
    [anon_sym_AT_AT_EQ] = ACTIONS(177),
    [anon_sym_AT_ATk] = ACTIONS(177),
    [anon_sym_AT_ATt] = ACTIONS(177),
    [anon_sym_AT_ATb] = ACTIONS(177),
    [anon_sym_AT_ATi] = ACTIONS(179),
    [anon_sym_AT_ATiS] = ACTIONS(177),
    [anon_sym_AT_ATf] = ACTIONS(177),
    [anon_sym_AT_ATs_COLON] = ACTIONS(177),
    [anon_sym_AT_ATc_COLON] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(179),
    [anon_sym_AT_BANG] = ACTIONS(177),
    [anon_sym_AT_LPAREN] = ACTIONS(177),
    [anon_sym_ATa_COLON] = ACTIONS(177),
    [anon_sym_ATb_COLON] = ACTIONS(177),
    [anon_sym_ATB_COLON] = ACTIONS(177),
    [anon_sym_ATe_COLON] = ACTIONS(177),
    [anon_sym_ATF_COLON] = ACTIONS(177),
    [anon_sym_ATi_COLON] = ACTIONS(177),
    [anon_sym_ATk_COLON] = ACTIONS(177),
    [anon_sym_ATo_COLON] = ACTIONS(177),
    [anon_sym_ATr_COLON] = ACTIONS(177),
    [anon_sym_ATf_COLON] = ACTIONS(177),
    [anon_sym_ATs_COLON] = ACTIONS(177),
    [anon_sym_ATx_COLON] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PIPE_DOT] = ACTIONS(177),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_GT_GT] = ACTIONS(177),
    [sym_html_redirect_operator] = ACTIONS(179),
    [sym_html_append_operator] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_file_descriptor] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_PIPEH] = ACTIONS(268),
    [anon_sym_PIPET] = ACTIONS(268),
    [anon_sym_AT_AT] = ACTIONS(270),
    [anon_sym_AT_ATdbt] = ACTIONS(270),
    [anon_sym_AT_ATdbta] = ACTIONS(268),
    [anon_sym_AT_ATdbtb] = ACTIONS(268),
    [anon_sym_AT_ATdbts] = ACTIONS(268),
    [anon_sym_AT_AT_DOT] = ACTIONS(268),
    [anon_sym_AT_AT_EQ] = ACTIONS(268),
    [anon_sym_AT_ATk] = ACTIONS(268),
    [anon_sym_AT_ATt] = ACTIONS(268),
    [anon_sym_AT_ATb] = ACTIONS(268),
    [anon_sym_AT_ATi] = ACTIONS(270),
    [anon_sym_AT_ATiS] = ACTIONS(268),
    [anon_sym_AT_ATf] = ACTIONS(268),
    [anon_sym_AT_ATs_COLON] = ACTIONS(268),
    [anon_sym_AT_ATc_COLON] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_AT_BANG] = ACTIONS(268),
    [anon_sym_AT_LPAREN] = ACTIONS(268),
    [anon_sym_ATa_COLON] = ACTIONS(268),
    [anon_sym_ATb_COLON] = ACTIONS(268),
    [anon_sym_ATB_COLON] = ACTIONS(268),
    [anon_sym_ATe_COLON] = ACTIONS(268),
    [anon_sym_ATF_COLON] = ACTIONS(268),
    [anon_sym_ATi_COLON] = ACTIONS(268),
    [anon_sym_ATk_COLON] = ACTIONS(268),
    [anon_sym_ATo_COLON] = ACTIONS(268),
    [anon_sym_ATr_COLON] = ACTIONS(268),
    [anon_sym_ATf_COLON] = ACTIONS(268),
    [anon_sym_ATs_COLON] = ACTIONS(268),
    [anon_sym_ATx_COLON] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_PIPE_DOT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(268),
    [sym_html_redirect_operator] = ACTIONS(270),
    [sym_html_append_operator] = ACTIONS(268),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(268),
    [anon_sym_CR] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_file_descriptor] = ACTIONS(268),
  },
  [97] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_TILDE] = ACTIONS(169),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_PIPEH] = ACTIONS(169),
    [anon_sym_PIPET] = ACTIONS(169),
    [anon_sym_AT_AT] = ACTIONS(171),
    [anon_sym_AT_ATdbt] = ACTIONS(171),
    [anon_sym_AT_ATdbta] = ACTIONS(169),
    [anon_sym_AT_ATdbtb] = ACTIONS(169),
    [anon_sym_AT_ATdbts] = ACTIONS(169),
    [anon_sym_AT_AT_DOT] = ACTIONS(169),
    [anon_sym_AT_AT_EQ] = ACTIONS(169),
    [anon_sym_AT_ATk] = ACTIONS(169),
    [anon_sym_AT_ATt] = ACTIONS(169),
    [anon_sym_AT_ATb] = ACTIONS(169),
    [anon_sym_AT_ATi] = ACTIONS(171),
    [anon_sym_AT_ATiS] = ACTIONS(169),
    [anon_sym_AT_ATf] = ACTIONS(169),
    [anon_sym_AT_ATs_COLON] = ACTIONS(169),
    [anon_sym_AT_ATc_COLON] = ACTIONS(169),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym_AT_BANG] = ACTIONS(169),
    [anon_sym_AT_LPAREN] = ACTIONS(169),
    [anon_sym_ATa_COLON] = ACTIONS(169),
    [anon_sym_ATb_COLON] = ACTIONS(169),
    [anon_sym_ATB_COLON] = ACTIONS(169),
    [anon_sym_ATe_COLON] = ACTIONS(169),
    [anon_sym_ATF_COLON] = ACTIONS(169),
    [anon_sym_ATi_COLON] = ACTIONS(169),
    [anon_sym_ATk_COLON] = ACTIONS(169),
    [anon_sym_ATo_COLON] = ACTIONS(169),
    [anon_sym_ATr_COLON] = ACTIONS(169),
    [anon_sym_ATf_COLON] = ACTIONS(169),
    [anon_sym_ATs_COLON] = ACTIONS(169),
    [anon_sym_ATx_COLON] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_PIPE_DOT] = ACTIONS(169),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(169),
    [sym_html_redirect_operator] = ACTIONS(171),
    [sym_html_append_operator] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_CR] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym_file_descriptor] = ACTIONS(169),
    [sym__concat] = ACTIONS(169),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(175),
    [anon_sym_PIPEH] = ACTIONS(173),
    [anon_sym_PIPET] = ACTIONS(173),
    [anon_sym_AT_AT] = ACTIONS(175),
    [anon_sym_AT_ATdbt] = ACTIONS(175),
    [anon_sym_AT_ATdbta] = ACTIONS(173),
    [anon_sym_AT_ATdbtb] = ACTIONS(173),
    [anon_sym_AT_ATdbts] = ACTIONS(173),
    [anon_sym_AT_AT_DOT] = ACTIONS(173),
    [anon_sym_AT_AT_EQ] = ACTIONS(173),
    [anon_sym_AT_ATk] = ACTIONS(173),
    [anon_sym_AT_ATt] = ACTIONS(173),
    [anon_sym_AT_ATb] = ACTIONS(173),
    [anon_sym_AT_ATi] = ACTIONS(175),
    [anon_sym_AT_ATiS] = ACTIONS(173),
    [anon_sym_AT_ATf] = ACTIONS(173),
    [anon_sym_AT_ATs_COLON] = ACTIONS(173),
    [anon_sym_AT_ATc_COLON] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(175),
    [anon_sym_AT_BANG] = ACTIONS(173),
    [anon_sym_AT_LPAREN] = ACTIONS(173),
    [anon_sym_ATa_COLON] = ACTIONS(173),
    [anon_sym_ATb_COLON] = ACTIONS(173),
    [anon_sym_ATB_COLON] = ACTIONS(173),
    [anon_sym_ATe_COLON] = ACTIONS(173),
    [anon_sym_ATF_COLON] = ACTIONS(173),
    [anon_sym_ATi_COLON] = ACTIONS(173),
    [anon_sym_ATk_COLON] = ACTIONS(173),
    [anon_sym_ATo_COLON] = ACTIONS(173),
    [anon_sym_ATr_COLON] = ACTIONS(173),
    [anon_sym_ATf_COLON] = ACTIONS(173),
    [anon_sym_ATs_COLON] = ACTIONS(173),
    [anon_sym_ATx_COLON] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_PIPE_DOT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_GT_GT] = ACTIONS(173),
    [sym_html_redirect_operator] = ACTIONS(175),
    [sym_html_append_operator] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym_file_descriptor] = ACTIONS(173),
    [sym__concat] = ACTIONS(173),
  },
  [99] = {
    [sym__redirect_operator] = STATE(190),
    [sym_fdn_redirect_operator] = STATE(190),
    [sym_fdn_append_operator] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(278),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(296),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_GT_GT] = ACTIONS(348),
    [sym_html_redirect_operator] = ACTIONS(350),
    [sym_html_append_operator] = ACTIONS(352),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(274),
    [anon_sym_CR] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_file_descriptor] = ACTIONS(354),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_TILDE] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(358),
    [anon_sym_PIPEH] = ACTIONS(356),
    [anon_sym_PIPET] = ACTIONS(356),
    [anon_sym_AT_AT] = ACTIONS(358),
    [anon_sym_AT_ATdbt] = ACTIONS(358),
    [anon_sym_AT_ATdbta] = ACTIONS(356),
    [anon_sym_AT_ATdbtb] = ACTIONS(356),
    [anon_sym_AT_ATdbts] = ACTIONS(356),
    [anon_sym_AT_AT_DOT] = ACTIONS(356),
    [anon_sym_AT_AT_EQ] = ACTIONS(356),
    [anon_sym_AT_ATk] = ACTIONS(356),
    [anon_sym_AT_ATt] = ACTIONS(356),
    [anon_sym_AT_ATb] = ACTIONS(356),
    [anon_sym_AT_ATi] = ACTIONS(358),
    [anon_sym_AT_ATiS] = ACTIONS(356),
    [anon_sym_AT_ATf] = ACTIONS(356),
    [anon_sym_AT_ATs_COLON] = ACTIONS(356),
    [anon_sym_AT_ATc_COLON] = ACTIONS(356),
    [anon_sym_AT] = ACTIONS(358),
    [anon_sym_AT_BANG] = ACTIONS(356),
    [anon_sym_AT_LPAREN] = ACTIONS(356),
    [anon_sym_ATa_COLON] = ACTIONS(356),
    [anon_sym_ATb_COLON] = ACTIONS(356),
    [anon_sym_ATB_COLON] = ACTIONS(356),
    [anon_sym_ATe_COLON] = ACTIONS(356),
    [anon_sym_ATF_COLON] = ACTIONS(356),
    [anon_sym_ATi_COLON] = ACTIONS(356),
    [anon_sym_ATk_COLON] = ACTIONS(356),
    [anon_sym_ATo_COLON] = ACTIONS(356),
    [anon_sym_ATr_COLON] = ACTIONS(356),
    [anon_sym_ATf_COLON] = ACTIONS(356),
    [anon_sym_ATs_COLON] = ACTIONS(356),
    [anon_sym_ATx_COLON] = ACTIONS(356),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_EQ] = ACTIONS(360),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(356),
    [sym_html_redirect_operator] = ACTIONS(358),
    [sym_html_append_operator] = ACTIONS(356),
    [anon_sym_BQUOTE] = ACTIONS(356),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(356),
    [anon_sym_CR] = ACTIONS(356),
    [anon_sym_SEMI] = ACTIONS(356),
    [sym_file_descriptor] = ACTIONS(356),
  },
  [101] = {
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
    [sym__eq_sep_concat] = ACTIONS(152),
  },
  [102] = {
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
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_PIPE_DOT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(257),
    [anon_sym_GT_GT] = ACTIONS(255),
    [sym_html_redirect_operator] = ACTIONS(257),
    [sym_html_append_operator] = ACTIONS(255),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(255),
    [anon_sym_CR] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(255),
    [sym_file_descriptor] = ACTIONS(255),
    [sym__eq_sep_concat] = ACTIONS(255),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_TILDE] = ACTIONS(240),
    [anon_sym_PIPE] = ACTIONS(242),
    [anon_sym_PIPEH] = ACTIONS(240),
    [anon_sym_PIPET] = ACTIONS(240),
    [anon_sym_AT_AT] = ACTIONS(242),
    [anon_sym_AT_ATdbt] = ACTIONS(242),
    [anon_sym_AT_ATdbta] = ACTIONS(240),
    [anon_sym_AT_ATdbtb] = ACTIONS(240),
    [anon_sym_AT_ATdbts] = ACTIONS(240),
    [anon_sym_AT_AT_DOT] = ACTIONS(240),
    [anon_sym_AT_AT_EQ] = ACTIONS(240),
    [anon_sym_AT_ATk] = ACTIONS(240),
    [anon_sym_AT_ATt] = ACTIONS(240),
    [anon_sym_AT_ATb] = ACTIONS(240),
    [anon_sym_AT_ATi] = ACTIONS(242),
    [anon_sym_AT_ATiS] = ACTIONS(240),
    [anon_sym_AT_ATf] = ACTIONS(240),
    [anon_sym_AT_ATs_COLON] = ACTIONS(240),
    [anon_sym_AT_ATc_COLON] = ACTIONS(240),
    [anon_sym_AT] = ACTIONS(242),
    [anon_sym_AT_BANG] = ACTIONS(240),
    [anon_sym_AT_LPAREN] = ACTIONS(240),
    [anon_sym_ATa_COLON] = ACTIONS(240),
    [anon_sym_ATb_COLON] = ACTIONS(240),
    [anon_sym_ATB_COLON] = ACTIONS(240),
    [anon_sym_ATe_COLON] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_ATF_COLON] = ACTIONS(240),
    [anon_sym_ATi_COLON] = ACTIONS(240),
    [anon_sym_ATk_COLON] = ACTIONS(240),
    [anon_sym_ATo_COLON] = ACTIONS(240),
    [anon_sym_ATr_COLON] = ACTIONS(240),
    [anon_sym_ATf_COLON] = ACTIONS(240),
    [anon_sym_ATs_COLON] = ACTIONS(240),
    [anon_sym_ATx_COLON] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_PIPE_DOT] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(242),
    [anon_sym_GT_GT] = ACTIONS(240),
    [sym_html_redirect_operator] = ACTIONS(242),
    [sym_html_append_operator] = ACTIONS(240),
    [anon_sym_BQUOTE] = ACTIONS(240),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(240),
    [anon_sym_CR] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(240),
    [sym_file_descriptor] = ACTIONS(240),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_TILDE] = ACTIONS(362),
    [anon_sym_PIPE] = ACTIONS(364),
    [anon_sym_PIPEH] = ACTIONS(362),
    [anon_sym_PIPET] = ACTIONS(362),
    [anon_sym_AT_AT] = ACTIONS(364),
    [anon_sym_AT_ATdbt] = ACTIONS(364),
    [anon_sym_AT_ATdbta] = ACTIONS(362),
    [anon_sym_AT_ATdbtb] = ACTIONS(362),
    [anon_sym_AT_ATdbts] = ACTIONS(362),
    [anon_sym_AT_AT_DOT] = ACTIONS(362),
    [anon_sym_AT_AT_EQ] = ACTIONS(362),
    [anon_sym_AT_ATk] = ACTIONS(362),
    [anon_sym_AT_ATt] = ACTIONS(362),
    [anon_sym_AT_ATb] = ACTIONS(362),
    [anon_sym_AT_ATi] = ACTIONS(364),
    [anon_sym_AT_ATiS] = ACTIONS(362),
    [anon_sym_AT_ATf] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(366),
    [anon_sym_AT_ATs_COLON] = ACTIONS(362),
    [anon_sym_AT_ATc_COLON] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(364),
    [anon_sym_AT_BANG] = ACTIONS(362),
    [anon_sym_AT_LPAREN] = ACTIONS(362),
    [anon_sym_ATa_COLON] = ACTIONS(362),
    [anon_sym_ATb_COLON] = ACTIONS(362),
    [anon_sym_ATB_COLON] = ACTIONS(362),
    [anon_sym_ATe_COLON] = ACTIONS(362),
    [anon_sym_ATF_COLON] = ACTIONS(362),
    [anon_sym_ATi_COLON] = ACTIONS(362),
    [anon_sym_ATk_COLON] = ACTIONS(362),
    [anon_sym_ATo_COLON] = ACTIONS(362),
    [anon_sym_ATr_COLON] = ACTIONS(362),
    [anon_sym_ATf_COLON] = ACTIONS(362),
    [anon_sym_ATs_COLON] = ACTIONS(362),
    [anon_sym_ATx_COLON] = ACTIONS(362),
    [anon_sym_RPAREN] = ACTIONS(362),
    [anon_sym_PIPE_DOT] = ACTIONS(362),
    [anon_sym_GT] = ACTIONS(364),
    [anon_sym_GT_GT] = ACTIONS(362),
    [sym_html_redirect_operator] = ACTIONS(364),
    [sym_html_append_operator] = ACTIONS(362),
    [anon_sym_BQUOTE] = ACTIONS(362),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(362),
    [anon_sym_CR] = ACTIONS(362),
    [anon_sym_SEMI] = ACTIONS(362),
    [sym_file_descriptor] = ACTIONS(362),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
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
    [anon_sym_PIPE_DOT] = ACTIONS(162),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(162),
    [sym__concat] = ACTIONS(162),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(368),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_PIPEH] = ACTIONS(368),
    [anon_sym_PIPET] = ACTIONS(368),
    [anon_sym_AT_AT] = ACTIONS(370),
    [anon_sym_AT_ATdbt] = ACTIONS(370),
    [anon_sym_AT_ATdbta] = ACTIONS(368),
    [anon_sym_AT_ATdbtb] = ACTIONS(368),
    [anon_sym_AT_ATdbts] = ACTIONS(368),
    [anon_sym_AT_AT_DOT] = ACTIONS(368),
    [anon_sym_AT_AT_EQ] = ACTIONS(368),
    [anon_sym_AT_ATk] = ACTIONS(368),
    [anon_sym_AT_ATt] = ACTIONS(368),
    [anon_sym_AT_ATb] = ACTIONS(368),
    [anon_sym_AT_ATi] = ACTIONS(370),
    [anon_sym_AT_ATiS] = ACTIONS(368),
    [anon_sym_AT_ATf] = ACTIONS(368),
    [anon_sym_AT_ATs_COLON] = ACTIONS(368),
    [anon_sym_AT_ATc_COLON] = ACTIONS(368),
    [anon_sym_AT] = ACTIONS(370),
    [anon_sym_AT_BANG] = ACTIONS(368),
    [anon_sym_AT_LPAREN] = ACTIONS(368),
    [anon_sym_ATa_COLON] = ACTIONS(368),
    [anon_sym_ATb_COLON] = ACTIONS(368),
    [anon_sym_ATB_COLON] = ACTIONS(368),
    [anon_sym_ATe_COLON] = ACTIONS(368),
    [anon_sym_ATF_COLON] = ACTIONS(368),
    [anon_sym_ATi_COLON] = ACTIONS(368),
    [anon_sym_ATk_COLON] = ACTIONS(368),
    [anon_sym_ATo_COLON] = ACTIONS(368),
    [anon_sym_ATr_COLON] = ACTIONS(368),
    [anon_sym_ATf_COLON] = ACTIONS(368),
    [anon_sym_ATs_COLON] = ACTIONS(368),
    [anon_sym_ATx_COLON] = ACTIONS(368),
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_PIPE_DOT] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(370),
    [anon_sym_GT_GT] = ACTIONS(368),
    [sym_html_redirect_operator] = ACTIONS(370),
    [sym_html_append_operator] = ACTIONS(368),
    [anon_sym_BQUOTE] = ACTIONS(368),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(368),
    [anon_sym_CR] = ACTIONS(368),
    [anon_sym_SEMI] = ACTIONS(368),
    [sym_file_descriptor] = ACTIONS(368),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_TILDE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_PIPEH] = ACTIONS(372),
    [anon_sym_PIPET] = ACTIONS(372),
    [anon_sym_AT_AT] = ACTIONS(374),
    [anon_sym_AT_ATdbt] = ACTIONS(374),
    [anon_sym_AT_ATdbta] = ACTIONS(372),
    [anon_sym_AT_ATdbtb] = ACTIONS(372),
    [anon_sym_AT_ATdbts] = ACTIONS(372),
    [anon_sym_AT_AT_DOT] = ACTIONS(372),
    [anon_sym_AT_AT_EQ] = ACTIONS(372),
    [anon_sym_AT_ATk] = ACTIONS(372),
    [anon_sym_AT_ATt] = ACTIONS(372),
    [anon_sym_AT_ATb] = ACTIONS(372),
    [anon_sym_AT_ATi] = ACTIONS(374),
    [anon_sym_AT_ATiS] = ACTIONS(372),
    [anon_sym_AT_ATf] = ACTIONS(372),
    [anon_sym_AT_ATs_COLON] = ACTIONS(372),
    [anon_sym_AT_ATc_COLON] = ACTIONS(372),
    [anon_sym_AT] = ACTIONS(374),
    [anon_sym_AT_BANG] = ACTIONS(372),
    [anon_sym_AT_LPAREN] = ACTIONS(372),
    [anon_sym_ATa_COLON] = ACTIONS(372),
    [anon_sym_ATb_COLON] = ACTIONS(372),
    [anon_sym_ATB_COLON] = ACTIONS(372),
    [anon_sym_ATe_COLON] = ACTIONS(372),
    [anon_sym_ATF_COLON] = ACTIONS(372),
    [anon_sym_ATi_COLON] = ACTIONS(372),
    [anon_sym_ATk_COLON] = ACTIONS(372),
    [anon_sym_ATo_COLON] = ACTIONS(372),
    [anon_sym_ATr_COLON] = ACTIONS(372),
    [anon_sym_ATf_COLON] = ACTIONS(372),
    [anon_sym_ATs_COLON] = ACTIONS(372),
    [anon_sym_ATx_COLON] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_PIPE_DOT] = ACTIONS(372),
    [anon_sym_GT] = ACTIONS(374),
    [anon_sym_GT_GT] = ACTIONS(372),
    [sym_html_redirect_operator] = ACTIONS(374),
    [sym_html_append_operator] = ACTIONS(372),
    [anon_sym_BQUOTE] = ACTIONS(372),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(372),
    [anon_sym_CR] = ACTIONS(372),
    [anon_sym_SEMI] = ACTIONS(372),
    [sym_file_descriptor] = ACTIONS(372),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PIPEH] = ACTIONS(378),
    [anon_sym_PIPET] = ACTIONS(378),
    [anon_sym_AT_AT] = ACTIONS(378),
    [anon_sym_AT_ATdbt] = ACTIONS(378),
    [anon_sym_AT_ATdbta] = ACTIONS(378),
    [anon_sym_AT_ATdbtb] = ACTIONS(378),
    [anon_sym_AT_ATdbts] = ACTIONS(378),
    [anon_sym_AT_AT_DOT] = ACTIONS(378),
    [anon_sym_AT_AT_EQ] = ACTIONS(378),
    [anon_sym_AT_ATk] = ACTIONS(378),
    [anon_sym_AT_ATt] = ACTIONS(378),
    [anon_sym_AT_ATb] = ACTIONS(378),
    [anon_sym_AT_ATi] = ACTIONS(378),
    [anon_sym_AT_ATiS] = ACTIONS(378),
    [anon_sym_AT_ATf] = ACTIONS(378),
    [anon_sym_AT_ATs_COLON] = ACTIONS(378),
    [anon_sym_AT_ATc_COLON] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_AT_BANG] = ACTIONS(378),
    [anon_sym_AT_LPAREN] = ACTIONS(378),
    [anon_sym_ATa_COLON] = ACTIONS(378),
    [anon_sym_ATb_COLON] = ACTIONS(378),
    [anon_sym_ATB_COLON] = ACTIONS(378),
    [anon_sym_ATe_COLON] = ACTIONS(378),
    [anon_sym_ATF_COLON] = ACTIONS(378),
    [anon_sym_ATi_COLON] = ACTIONS(378),
    [anon_sym_ATk_COLON] = ACTIONS(378),
    [anon_sym_ATo_COLON] = ACTIONS(378),
    [anon_sym_ATr_COLON] = ACTIONS(378),
    [anon_sym_ATf_COLON] = ACTIONS(378),
    [anon_sym_ATs_COLON] = ACTIONS(378),
    [anon_sym_ATx_COLON] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_PIPE_DOT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_GT] = ACTIONS(378),
    [sym_html_redirect_operator] = ACTIONS(378),
    [sym_html_append_operator] = ACTIONS(378),
    [sym_macro_content] = ACTIONS(382),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(378),
    [anon_sym_CR] = ACTIONS(378),
    [anon_sym_SEMI] = ACTIONS(378),
    [sym_file_descriptor] = ACTIONS(376),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(384),
    [anon_sym_TILDE] = ACTIONS(384),
    [anon_sym_PIPE] = ACTIONS(386),
    [anon_sym_PIPEH] = ACTIONS(384),
    [anon_sym_PIPET] = ACTIONS(384),
    [anon_sym_AT_AT] = ACTIONS(386),
    [anon_sym_AT_ATdbt] = ACTIONS(386),
    [anon_sym_AT_ATdbta] = ACTIONS(384),
    [anon_sym_AT_ATdbtb] = ACTIONS(384),
    [anon_sym_AT_ATdbts] = ACTIONS(384),
    [anon_sym_AT_AT_DOT] = ACTIONS(384),
    [anon_sym_AT_AT_EQ] = ACTIONS(384),
    [anon_sym_AT_ATk] = ACTIONS(384),
    [anon_sym_AT_ATt] = ACTIONS(384),
    [anon_sym_AT_ATb] = ACTIONS(384),
    [anon_sym_AT_ATi] = ACTIONS(386),
    [anon_sym_AT_ATiS] = ACTIONS(384),
    [anon_sym_AT_ATf] = ACTIONS(384),
    [anon_sym_AT_ATs_COLON] = ACTIONS(384),
    [anon_sym_AT_ATc_COLON] = ACTIONS(384),
    [anon_sym_AT] = ACTIONS(386),
    [anon_sym_AT_BANG] = ACTIONS(384),
    [anon_sym_AT_LPAREN] = ACTIONS(384),
    [anon_sym_ATa_COLON] = ACTIONS(384),
    [anon_sym_ATb_COLON] = ACTIONS(384),
    [anon_sym_ATB_COLON] = ACTIONS(384),
    [anon_sym_ATe_COLON] = ACTIONS(384),
    [anon_sym_ATF_COLON] = ACTIONS(384),
    [anon_sym_ATi_COLON] = ACTIONS(384),
    [anon_sym_ATk_COLON] = ACTIONS(384),
    [anon_sym_ATo_COLON] = ACTIONS(384),
    [anon_sym_ATr_COLON] = ACTIONS(384),
    [anon_sym_ATf_COLON] = ACTIONS(384),
    [anon_sym_ATs_COLON] = ACTIONS(384),
    [anon_sym_ATx_COLON] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_PIPE_DOT] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_GT_GT] = ACTIONS(384),
    [sym_html_redirect_operator] = ACTIONS(386),
    [sym_html_append_operator] = ACTIONS(384),
    [anon_sym_BQUOTE] = ACTIONS(384),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(384),
    [anon_sym_CR] = ACTIONS(384),
    [anon_sym_SEMI] = ACTIONS(384),
    [sym_file_descriptor] = ACTIONS(384),
  },
  [110] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_PIPEH] = ACTIONS(388),
    [anon_sym_PIPET] = ACTIONS(388),
    [anon_sym_AT_AT] = ACTIONS(390),
    [anon_sym_AT_ATdbt] = ACTIONS(390),
    [anon_sym_AT_ATdbta] = ACTIONS(388),
    [anon_sym_AT_ATdbtb] = ACTIONS(388),
    [anon_sym_AT_ATdbts] = ACTIONS(388),
    [anon_sym_AT_AT_DOT] = ACTIONS(388),
    [anon_sym_AT_AT_EQ] = ACTIONS(388),
    [anon_sym_AT_ATk] = ACTIONS(388),
    [anon_sym_AT_ATt] = ACTIONS(388),
    [anon_sym_AT_ATb] = ACTIONS(388),
    [anon_sym_AT_ATi] = ACTIONS(390),
    [anon_sym_AT_ATiS] = ACTIONS(388),
    [anon_sym_AT_ATf] = ACTIONS(388),
    [anon_sym_AT_ATs_COLON] = ACTIONS(388),
    [anon_sym_AT_ATc_COLON] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_AT_BANG] = ACTIONS(388),
    [anon_sym_AT_LPAREN] = ACTIONS(388),
    [anon_sym_ATa_COLON] = ACTIONS(388),
    [anon_sym_ATb_COLON] = ACTIONS(388),
    [anon_sym_ATB_COLON] = ACTIONS(388),
    [anon_sym_ATe_COLON] = ACTIONS(388),
    [anon_sym_ATF_COLON] = ACTIONS(388),
    [anon_sym_ATi_COLON] = ACTIONS(388),
    [anon_sym_ATk_COLON] = ACTIONS(388),
    [anon_sym_ATo_COLON] = ACTIONS(388),
    [anon_sym_ATr_COLON] = ACTIONS(388),
    [anon_sym_ATf_COLON] = ACTIONS(388),
    [anon_sym_ATs_COLON] = ACTIONS(388),
    [anon_sym_ATx_COLON] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_PIPE_DOT] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_GT_GT] = ACTIONS(388),
    [sym_html_redirect_operator] = ACTIONS(390),
    [sym_html_append_operator] = ACTIONS(388),
    [anon_sym_BQUOTE] = ACTIONS(388),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(388),
    [anon_sym_CR] = ACTIONS(388),
    [anon_sym_SEMI] = ACTIONS(388),
    [sym_file_descriptor] = ACTIONS(388),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_PIPEH] = ACTIONS(392),
    [anon_sym_PIPET] = ACTIONS(392),
    [anon_sym_AT_AT] = ACTIONS(394),
    [anon_sym_AT_ATdbt] = ACTIONS(394),
    [anon_sym_AT_ATdbta] = ACTIONS(392),
    [anon_sym_AT_ATdbtb] = ACTIONS(392),
    [anon_sym_AT_ATdbts] = ACTIONS(392),
    [anon_sym_AT_AT_DOT] = ACTIONS(392),
    [anon_sym_AT_AT_EQ] = ACTIONS(392),
    [anon_sym_AT_ATk] = ACTIONS(392),
    [anon_sym_AT_ATt] = ACTIONS(392),
    [anon_sym_AT_ATb] = ACTIONS(392),
    [anon_sym_AT_ATi] = ACTIONS(394),
    [anon_sym_AT_ATiS] = ACTIONS(392),
    [anon_sym_AT_ATf] = ACTIONS(392),
    [anon_sym_AT_ATs_COLON] = ACTIONS(392),
    [anon_sym_AT_ATc_COLON] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(394),
    [anon_sym_AT_BANG] = ACTIONS(392),
    [anon_sym_AT_LPAREN] = ACTIONS(392),
    [anon_sym_ATa_COLON] = ACTIONS(392),
    [anon_sym_ATb_COLON] = ACTIONS(392),
    [anon_sym_ATB_COLON] = ACTIONS(392),
    [anon_sym_ATe_COLON] = ACTIONS(392),
    [anon_sym_ATF_COLON] = ACTIONS(392),
    [anon_sym_ATi_COLON] = ACTIONS(392),
    [anon_sym_ATk_COLON] = ACTIONS(392),
    [anon_sym_ATo_COLON] = ACTIONS(392),
    [anon_sym_ATr_COLON] = ACTIONS(392),
    [anon_sym_ATf_COLON] = ACTIONS(392),
    [anon_sym_ATs_COLON] = ACTIONS(392),
    [anon_sym_ATx_COLON] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_PIPE_DOT] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(394),
    [anon_sym_GT_GT] = ACTIONS(392),
    [sym_html_redirect_operator] = ACTIONS(394),
    [sym_html_append_operator] = ACTIONS(392),
    [anon_sym_BQUOTE] = ACTIONS(392),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(392),
    [anon_sym_CR] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [sym_file_descriptor] = ACTIONS(392),
  },
  [112] = {
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
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_PIPEH] = ACTIONS(396),
    [anon_sym_PIPET] = ACTIONS(396),
    [anon_sym_AT_AT] = ACTIONS(398),
    [anon_sym_AT_ATdbt] = ACTIONS(398),
    [anon_sym_AT_ATdbta] = ACTIONS(396),
    [anon_sym_AT_ATdbtb] = ACTIONS(396),
    [anon_sym_AT_ATdbts] = ACTIONS(396),
    [anon_sym_AT_AT_DOT] = ACTIONS(396),
    [anon_sym_AT_AT_EQ] = ACTIONS(396),
    [anon_sym_AT_ATk] = ACTIONS(396),
    [anon_sym_AT_ATt] = ACTIONS(396),
    [anon_sym_AT_ATb] = ACTIONS(396),
    [anon_sym_AT_ATi] = ACTIONS(398),
    [anon_sym_AT_ATiS] = ACTIONS(396),
    [anon_sym_AT_ATf] = ACTIONS(396),
    [anon_sym_AT_ATs_COLON] = ACTIONS(396),
    [anon_sym_AT_ATc_COLON] = ACTIONS(396),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_AT_BANG] = ACTIONS(396),
    [anon_sym_AT_LPAREN] = ACTIONS(396),
    [anon_sym_ATa_COLON] = ACTIONS(396),
    [anon_sym_ATb_COLON] = ACTIONS(396),
    [anon_sym_ATB_COLON] = ACTIONS(396),
    [anon_sym_ATe_COLON] = ACTIONS(396),
    [anon_sym_ATF_COLON] = ACTIONS(396),
    [anon_sym_ATi_COLON] = ACTIONS(396),
    [anon_sym_ATk_COLON] = ACTIONS(396),
    [anon_sym_ATo_COLON] = ACTIONS(396),
    [anon_sym_ATr_COLON] = ACTIONS(396),
    [anon_sym_ATf_COLON] = ACTIONS(396),
    [anon_sym_ATs_COLON] = ACTIONS(396),
    [anon_sym_ATx_COLON] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_PIPE_DOT] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_GT_GT] = ACTIONS(396),
    [sym_html_redirect_operator] = ACTIONS(398),
    [sym_html_append_operator] = ACTIONS(396),
    [anon_sym_BQUOTE] = ACTIONS(396),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(396),
    [anon_sym_CR] = ACTIONS(396),
    [anon_sym_SEMI] = ACTIONS(396),
    [sym_file_descriptor] = ACTIONS(396),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_TILDE] = ACTIONS(400),
    [anon_sym_PIPE] = ACTIONS(402),
    [anon_sym_PIPEH] = ACTIONS(400),
    [anon_sym_PIPET] = ACTIONS(400),
    [anon_sym_AT_AT] = ACTIONS(402),
    [anon_sym_AT_ATdbt] = ACTIONS(402),
    [anon_sym_AT_ATdbta] = ACTIONS(400),
    [anon_sym_AT_ATdbtb] = ACTIONS(400),
    [anon_sym_AT_ATdbts] = ACTIONS(400),
    [anon_sym_AT_AT_DOT] = ACTIONS(400),
    [anon_sym_AT_AT_EQ] = ACTIONS(400),
    [anon_sym_AT_ATk] = ACTIONS(400),
    [anon_sym_AT_ATt] = ACTIONS(400),
    [anon_sym_AT_ATb] = ACTIONS(400),
    [anon_sym_AT_ATi] = ACTIONS(402),
    [anon_sym_AT_ATiS] = ACTIONS(400),
    [anon_sym_AT_ATf] = ACTIONS(400),
    [anon_sym_AT_ATs_COLON] = ACTIONS(400),
    [anon_sym_AT_ATc_COLON] = ACTIONS(400),
    [anon_sym_AT] = ACTIONS(402),
    [anon_sym_AT_BANG] = ACTIONS(400),
    [anon_sym_AT_LPAREN] = ACTIONS(400),
    [anon_sym_ATa_COLON] = ACTIONS(400),
    [anon_sym_ATb_COLON] = ACTIONS(400),
    [anon_sym_ATB_COLON] = ACTIONS(400),
    [anon_sym_ATe_COLON] = ACTIONS(400),
    [anon_sym_ATF_COLON] = ACTIONS(400),
    [anon_sym_ATi_COLON] = ACTIONS(400),
    [anon_sym_ATk_COLON] = ACTIONS(400),
    [anon_sym_ATo_COLON] = ACTIONS(400),
    [anon_sym_ATr_COLON] = ACTIONS(400),
    [anon_sym_ATf_COLON] = ACTIONS(400),
    [anon_sym_ATs_COLON] = ACTIONS(400),
    [anon_sym_ATx_COLON] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [anon_sym_PIPE_DOT] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(402),
    [anon_sym_GT_GT] = ACTIONS(400),
    [sym_html_redirect_operator] = ACTIONS(402),
    [sym_html_append_operator] = ACTIONS(400),
    [anon_sym_BQUOTE] = ACTIONS(400),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(400),
    [anon_sym_CR] = ACTIONS(400),
    [anon_sym_SEMI] = ACTIONS(400),
    [sym_file_descriptor] = ACTIONS(400),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(404),
    [anon_sym_TILDE] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_PIPEH] = ACTIONS(404),
    [anon_sym_PIPET] = ACTIONS(404),
    [anon_sym_AT_AT] = ACTIONS(406),
    [anon_sym_AT_ATdbt] = ACTIONS(406),
    [anon_sym_AT_ATdbta] = ACTIONS(404),
    [anon_sym_AT_ATdbtb] = ACTIONS(404),
    [anon_sym_AT_ATdbts] = ACTIONS(404),
    [anon_sym_AT_AT_DOT] = ACTIONS(404),
    [anon_sym_AT_AT_EQ] = ACTIONS(404),
    [anon_sym_AT_ATk] = ACTIONS(404),
    [anon_sym_AT_ATt] = ACTIONS(404),
    [anon_sym_AT_ATb] = ACTIONS(404),
    [anon_sym_AT_ATi] = ACTIONS(406),
    [anon_sym_AT_ATiS] = ACTIONS(404),
    [anon_sym_AT_ATf] = ACTIONS(404),
    [anon_sym_AT_ATs_COLON] = ACTIONS(404),
    [anon_sym_AT_ATc_COLON] = ACTIONS(404),
    [anon_sym_AT] = ACTIONS(406),
    [anon_sym_AT_BANG] = ACTIONS(404),
    [anon_sym_AT_LPAREN] = ACTIONS(404),
    [anon_sym_ATa_COLON] = ACTIONS(404),
    [anon_sym_ATb_COLON] = ACTIONS(404),
    [anon_sym_ATB_COLON] = ACTIONS(404),
    [anon_sym_ATe_COLON] = ACTIONS(404),
    [anon_sym_ATF_COLON] = ACTIONS(404),
    [anon_sym_ATi_COLON] = ACTIONS(404),
    [anon_sym_ATk_COLON] = ACTIONS(404),
    [anon_sym_ATo_COLON] = ACTIONS(404),
    [anon_sym_ATr_COLON] = ACTIONS(404),
    [anon_sym_ATf_COLON] = ACTIONS(404),
    [anon_sym_ATs_COLON] = ACTIONS(404),
    [anon_sym_ATx_COLON] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_PIPE_DOT] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_GT_GT] = ACTIONS(404),
    [sym_html_redirect_operator] = ACTIONS(406),
    [sym_html_append_operator] = ACTIONS(404),
    [anon_sym_BQUOTE] = ACTIONS(404),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(404),
    [anon_sym_CR] = ACTIONS(404),
    [anon_sym_SEMI] = ACTIONS(404),
    [sym_file_descriptor] = ACTIONS(404),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_PIPEH] = ACTIONS(408),
    [anon_sym_PIPET] = ACTIONS(408),
    [anon_sym_AT_AT] = ACTIONS(410),
    [anon_sym_AT_ATdbt] = ACTIONS(410),
    [anon_sym_AT_ATdbta] = ACTIONS(408),
    [anon_sym_AT_ATdbtb] = ACTIONS(408),
    [anon_sym_AT_ATdbts] = ACTIONS(408),
    [anon_sym_AT_AT_DOT] = ACTIONS(408),
    [anon_sym_AT_AT_EQ] = ACTIONS(408),
    [anon_sym_AT_ATk] = ACTIONS(408),
    [anon_sym_AT_ATt] = ACTIONS(408),
    [anon_sym_AT_ATb] = ACTIONS(408),
    [anon_sym_AT_ATi] = ACTIONS(410),
    [anon_sym_AT_ATiS] = ACTIONS(408),
    [anon_sym_AT_ATf] = ACTIONS(408),
    [anon_sym_AT_ATs_COLON] = ACTIONS(408),
    [anon_sym_AT_ATc_COLON] = ACTIONS(408),
    [anon_sym_AT] = ACTIONS(410),
    [anon_sym_AT_BANG] = ACTIONS(408),
    [anon_sym_AT_LPAREN] = ACTIONS(408),
    [anon_sym_ATa_COLON] = ACTIONS(408),
    [anon_sym_ATb_COLON] = ACTIONS(408),
    [anon_sym_ATB_COLON] = ACTIONS(408),
    [anon_sym_ATe_COLON] = ACTIONS(408),
    [anon_sym_ATF_COLON] = ACTIONS(408),
    [anon_sym_ATi_COLON] = ACTIONS(408),
    [anon_sym_ATk_COLON] = ACTIONS(408),
    [anon_sym_ATo_COLON] = ACTIONS(408),
    [anon_sym_ATr_COLON] = ACTIONS(408),
    [anon_sym_ATf_COLON] = ACTIONS(408),
    [anon_sym_ATs_COLON] = ACTIONS(408),
    [anon_sym_ATx_COLON] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [anon_sym_PIPE_DOT] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_GT_GT] = ACTIONS(408),
    [sym_html_redirect_operator] = ACTIONS(410),
    [sym_html_append_operator] = ACTIONS(408),
    [anon_sym_BQUOTE] = ACTIONS(408),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(408),
    [anon_sym_CR] = ACTIONS(408),
    [anon_sym_SEMI] = ACTIONS(408),
    [sym_file_descriptor] = ACTIONS(408),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_TILDE] = ACTIONS(412),
    [anon_sym_PIPE] = ACTIONS(414),
    [anon_sym_PIPEH] = ACTIONS(412),
    [anon_sym_PIPET] = ACTIONS(412),
    [anon_sym_AT_AT] = ACTIONS(414),
    [anon_sym_AT_ATdbt] = ACTIONS(414),
    [anon_sym_AT_ATdbta] = ACTIONS(412),
    [anon_sym_AT_ATdbtb] = ACTIONS(412),
    [anon_sym_AT_ATdbts] = ACTIONS(412),
    [anon_sym_AT_AT_DOT] = ACTIONS(412),
    [anon_sym_AT_AT_EQ] = ACTIONS(412),
    [anon_sym_AT_ATk] = ACTIONS(412),
    [anon_sym_AT_ATt] = ACTIONS(412),
    [anon_sym_AT_ATb] = ACTIONS(412),
    [anon_sym_AT_ATi] = ACTIONS(414),
    [anon_sym_AT_ATiS] = ACTIONS(412),
    [anon_sym_AT_ATf] = ACTIONS(412),
    [anon_sym_AT_ATs_COLON] = ACTIONS(412),
    [anon_sym_AT_ATc_COLON] = ACTIONS(412),
    [anon_sym_AT] = ACTIONS(414),
    [anon_sym_AT_BANG] = ACTIONS(412),
    [anon_sym_AT_LPAREN] = ACTIONS(412),
    [anon_sym_ATa_COLON] = ACTIONS(412),
    [anon_sym_ATb_COLON] = ACTIONS(412),
    [anon_sym_ATB_COLON] = ACTIONS(412),
    [anon_sym_ATe_COLON] = ACTIONS(412),
    [anon_sym_ATF_COLON] = ACTIONS(412),
    [anon_sym_ATi_COLON] = ACTIONS(412),
    [anon_sym_ATk_COLON] = ACTIONS(412),
    [anon_sym_ATo_COLON] = ACTIONS(412),
    [anon_sym_ATr_COLON] = ACTIONS(412),
    [anon_sym_ATf_COLON] = ACTIONS(412),
    [anon_sym_ATs_COLON] = ACTIONS(412),
    [anon_sym_ATx_COLON] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_PIPE_DOT] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_GT_GT] = ACTIONS(412),
    [sym_html_redirect_operator] = ACTIONS(414),
    [sym_html_append_operator] = ACTIONS(412),
    [anon_sym_BQUOTE] = ACTIONS(412),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(412),
    [anon_sym_CR] = ACTIONS(412),
    [anon_sym_SEMI] = ACTIONS(412),
    [sym_file_descriptor] = ACTIONS(412),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [anon_sym_TILDE] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(418),
    [anon_sym_PIPEH] = ACTIONS(416),
    [anon_sym_PIPET] = ACTIONS(416),
    [anon_sym_AT_AT] = ACTIONS(418),
    [anon_sym_AT_ATdbt] = ACTIONS(418),
    [anon_sym_AT_ATdbta] = ACTIONS(416),
    [anon_sym_AT_ATdbtb] = ACTIONS(416),
    [anon_sym_AT_ATdbts] = ACTIONS(416),
    [anon_sym_AT_AT_DOT] = ACTIONS(416),
    [anon_sym_AT_AT_EQ] = ACTIONS(416),
    [anon_sym_AT_ATk] = ACTIONS(416),
    [anon_sym_AT_ATt] = ACTIONS(416),
    [anon_sym_AT_ATb] = ACTIONS(416),
    [anon_sym_AT_ATi] = ACTIONS(418),
    [anon_sym_AT_ATiS] = ACTIONS(416),
    [anon_sym_AT_ATf] = ACTIONS(416),
    [anon_sym_AT_ATs_COLON] = ACTIONS(416),
    [anon_sym_AT_ATc_COLON] = ACTIONS(416),
    [anon_sym_AT] = ACTIONS(418),
    [anon_sym_AT_BANG] = ACTIONS(416),
    [anon_sym_AT_LPAREN] = ACTIONS(416),
    [anon_sym_ATa_COLON] = ACTIONS(416),
    [anon_sym_ATb_COLON] = ACTIONS(416),
    [anon_sym_ATB_COLON] = ACTIONS(416),
    [anon_sym_ATe_COLON] = ACTIONS(416),
    [anon_sym_ATF_COLON] = ACTIONS(416),
    [anon_sym_ATi_COLON] = ACTIONS(416),
    [anon_sym_ATk_COLON] = ACTIONS(416),
    [anon_sym_ATo_COLON] = ACTIONS(416),
    [anon_sym_ATr_COLON] = ACTIONS(416),
    [anon_sym_ATf_COLON] = ACTIONS(416),
    [anon_sym_ATs_COLON] = ACTIONS(416),
    [anon_sym_ATx_COLON] = ACTIONS(416),
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_PIPE_DOT] = ACTIONS(416),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_GT_GT] = ACTIONS(416),
    [sym_html_redirect_operator] = ACTIONS(418),
    [sym_html_append_operator] = ACTIONS(416),
    [anon_sym_BQUOTE] = ACTIONS(416),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(416),
    [anon_sym_CR] = ACTIONS(416),
    [anon_sym_SEMI] = ACTIONS(416),
    [sym_file_descriptor] = ACTIONS(416),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_PIPE] = ACTIONS(422),
    [anon_sym_PIPEH] = ACTIONS(420),
    [anon_sym_PIPET] = ACTIONS(420),
    [anon_sym_AT_AT] = ACTIONS(422),
    [anon_sym_AT_ATdbt] = ACTIONS(422),
    [anon_sym_AT_ATdbta] = ACTIONS(420),
    [anon_sym_AT_ATdbtb] = ACTIONS(420),
    [anon_sym_AT_ATdbts] = ACTIONS(420),
    [anon_sym_AT_AT_DOT] = ACTIONS(420),
    [anon_sym_AT_AT_EQ] = ACTIONS(420),
    [anon_sym_AT_ATk] = ACTIONS(420),
    [anon_sym_AT_ATt] = ACTIONS(420),
    [anon_sym_AT_ATb] = ACTIONS(420),
    [anon_sym_AT_ATi] = ACTIONS(422),
    [anon_sym_AT_ATiS] = ACTIONS(420),
    [anon_sym_AT_ATf] = ACTIONS(420),
    [anon_sym_AT_ATs_COLON] = ACTIONS(420),
    [anon_sym_AT_ATc_COLON] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(422),
    [anon_sym_AT_BANG] = ACTIONS(420),
    [anon_sym_AT_LPAREN] = ACTIONS(420),
    [anon_sym_ATa_COLON] = ACTIONS(420),
    [anon_sym_ATb_COLON] = ACTIONS(420),
    [anon_sym_ATB_COLON] = ACTIONS(420),
    [anon_sym_ATe_COLON] = ACTIONS(420),
    [anon_sym_ATF_COLON] = ACTIONS(420),
    [anon_sym_ATi_COLON] = ACTIONS(420),
    [anon_sym_ATk_COLON] = ACTIONS(420),
    [anon_sym_ATo_COLON] = ACTIONS(420),
    [anon_sym_ATr_COLON] = ACTIONS(420),
    [anon_sym_ATf_COLON] = ACTIONS(420),
    [anon_sym_ATs_COLON] = ACTIONS(420),
    [anon_sym_ATx_COLON] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_PIPE_DOT] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_GT_GT] = ACTIONS(420),
    [sym_html_redirect_operator] = ACTIONS(422),
    [sym_html_append_operator] = ACTIONS(420),
    [anon_sym_BQUOTE] = ACTIONS(420),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(420),
    [anon_sym_CR] = ACTIONS(420),
    [anon_sym_SEMI] = ACTIONS(420),
    [sym_file_descriptor] = ACTIONS(420),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [anon_sym_TILDE] = ACTIONS(424),
    [anon_sym_PIPE] = ACTIONS(426),
    [anon_sym_PIPEH] = ACTIONS(424),
    [anon_sym_PIPET] = ACTIONS(424),
    [anon_sym_AT_AT] = ACTIONS(426),
    [anon_sym_AT_ATdbt] = ACTIONS(426),
    [anon_sym_AT_ATdbta] = ACTIONS(424),
    [anon_sym_AT_ATdbtb] = ACTIONS(424),
    [anon_sym_AT_ATdbts] = ACTIONS(424),
    [anon_sym_AT_AT_DOT] = ACTIONS(424),
    [anon_sym_AT_AT_EQ] = ACTIONS(424),
    [anon_sym_AT_ATk] = ACTIONS(424),
    [anon_sym_AT_ATt] = ACTIONS(424),
    [anon_sym_AT_ATb] = ACTIONS(424),
    [anon_sym_AT_ATi] = ACTIONS(426),
    [anon_sym_AT_ATiS] = ACTIONS(424),
    [anon_sym_AT_ATf] = ACTIONS(424),
    [anon_sym_AT_ATs_COLON] = ACTIONS(424),
    [anon_sym_AT_ATc_COLON] = ACTIONS(424),
    [anon_sym_AT] = ACTIONS(426),
    [anon_sym_AT_BANG] = ACTIONS(424),
    [anon_sym_AT_LPAREN] = ACTIONS(424),
    [anon_sym_ATa_COLON] = ACTIONS(424),
    [anon_sym_ATb_COLON] = ACTIONS(424),
    [anon_sym_ATB_COLON] = ACTIONS(424),
    [anon_sym_ATe_COLON] = ACTIONS(424),
    [anon_sym_ATF_COLON] = ACTIONS(424),
    [anon_sym_ATi_COLON] = ACTIONS(424),
    [anon_sym_ATk_COLON] = ACTIONS(424),
    [anon_sym_ATo_COLON] = ACTIONS(424),
    [anon_sym_ATr_COLON] = ACTIONS(424),
    [anon_sym_ATf_COLON] = ACTIONS(424),
    [anon_sym_ATs_COLON] = ACTIONS(424),
    [anon_sym_ATx_COLON] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [anon_sym_PIPE_DOT] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(426),
    [anon_sym_GT_GT] = ACTIONS(424),
    [sym_html_redirect_operator] = ACTIONS(426),
    [sym_html_append_operator] = ACTIONS(424),
    [anon_sym_BQUOTE] = ACTIONS(424),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(424),
    [anon_sym_CR] = ACTIONS(424),
    [anon_sym_SEMI] = ACTIONS(424),
    [sym_file_descriptor] = ACTIONS(424),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_PIPE] = ACTIONS(430),
    [anon_sym_PIPEH] = ACTIONS(428),
    [anon_sym_PIPET] = ACTIONS(428),
    [anon_sym_AT_AT] = ACTIONS(430),
    [anon_sym_AT_ATdbt] = ACTIONS(430),
    [anon_sym_AT_ATdbta] = ACTIONS(428),
    [anon_sym_AT_ATdbtb] = ACTIONS(428),
    [anon_sym_AT_ATdbts] = ACTIONS(428),
    [anon_sym_AT_AT_DOT] = ACTIONS(428),
    [anon_sym_AT_AT_EQ] = ACTIONS(428),
    [anon_sym_AT_ATk] = ACTIONS(428),
    [anon_sym_AT_ATt] = ACTIONS(428),
    [anon_sym_AT_ATb] = ACTIONS(428),
    [anon_sym_AT_ATi] = ACTIONS(430),
    [anon_sym_AT_ATiS] = ACTIONS(428),
    [anon_sym_AT_ATf] = ACTIONS(428),
    [anon_sym_AT_ATs_COLON] = ACTIONS(428),
    [anon_sym_AT_ATc_COLON] = ACTIONS(428),
    [anon_sym_AT] = ACTIONS(430),
    [anon_sym_AT_BANG] = ACTIONS(428),
    [anon_sym_AT_LPAREN] = ACTIONS(428),
    [anon_sym_ATa_COLON] = ACTIONS(428),
    [anon_sym_ATb_COLON] = ACTIONS(428),
    [anon_sym_ATB_COLON] = ACTIONS(428),
    [anon_sym_ATe_COLON] = ACTIONS(428),
    [anon_sym_ATF_COLON] = ACTIONS(428),
    [anon_sym_ATi_COLON] = ACTIONS(428),
    [anon_sym_ATk_COLON] = ACTIONS(428),
    [anon_sym_ATo_COLON] = ACTIONS(428),
    [anon_sym_ATr_COLON] = ACTIONS(428),
    [anon_sym_ATf_COLON] = ACTIONS(428),
    [anon_sym_ATs_COLON] = ACTIONS(428),
    [anon_sym_ATx_COLON] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [anon_sym_PIPE_DOT] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_GT_GT] = ACTIONS(428),
    [sym_html_redirect_operator] = ACTIONS(430),
    [sym_html_append_operator] = ACTIONS(428),
    [anon_sym_BQUOTE] = ACTIONS(428),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(428),
    [anon_sym_CR] = ACTIONS(428),
    [anon_sym_SEMI] = ACTIONS(428),
    [sym_file_descriptor] = ACTIONS(428),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(432),
    [anon_sym_TILDE] = ACTIONS(432),
    [anon_sym_PIPE] = ACTIONS(434),
    [anon_sym_PIPEH] = ACTIONS(432),
    [anon_sym_PIPET] = ACTIONS(432),
    [anon_sym_AT_AT] = ACTIONS(434),
    [anon_sym_AT_ATdbt] = ACTIONS(434),
    [anon_sym_AT_ATdbta] = ACTIONS(432),
    [anon_sym_AT_ATdbtb] = ACTIONS(432),
    [anon_sym_AT_ATdbts] = ACTIONS(432),
    [anon_sym_AT_AT_DOT] = ACTIONS(432),
    [anon_sym_AT_AT_EQ] = ACTIONS(432),
    [anon_sym_AT_ATk] = ACTIONS(432),
    [anon_sym_AT_ATt] = ACTIONS(432),
    [anon_sym_AT_ATb] = ACTIONS(432),
    [anon_sym_AT_ATi] = ACTIONS(434),
    [anon_sym_AT_ATiS] = ACTIONS(432),
    [anon_sym_AT_ATf] = ACTIONS(432),
    [anon_sym_AT_ATs_COLON] = ACTIONS(432),
    [anon_sym_AT_ATc_COLON] = ACTIONS(432),
    [anon_sym_AT] = ACTIONS(434),
    [anon_sym_AT_BANG] = ACTIONS(432),
    [anon_sym_AT_LPAREN] = ACTIONS(432),
    [anon_sym_ATa_COLON] = ACTIONS(432),
    [anon_sym_ATb_COLON] = ACTIONS(432),
    [anon_sym_ATB_COLON] = ACTIONS(432),
    [anon_sym_ATe_COLON] = ACTIONS(432),
    [anon_sym_ATF_COLON] = ACTIONS(432),
    [anon_sym_ATi_COLON] = ACTIONS(432),
    [anon_sym_ATk_COLON] = ACTIONS(432),
    [anon_sym_ATo_COLON] = ACTIONS(432),
    [anon_sym_ATr_COLON] = ACTIONS(432),
    [anon_sym_ATf_COLON] = ACTIONS(432),
    [anon_sym_ATs_COLON] = ACTIONS(432),
    [anon_sym_ATx_COLON] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_PIPE_DOT] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_GT_GT] = ACTIONS(432),
    [sym_html_redirect_operator] = ACTIONS(434),
    [sym_html_append_operator] = ACTIONS(432),
    [anon_sym_BQUOTE] = ACTIONS(432),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(432),
    [anon_sym_CR] = ACTIONS(432),
    [anon_sym_SEMI] = ACTIONS(432),
    [sym_file_descriptor] = ACTIONS(432),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_TILDE] = ACTIONS(436),
    [anon_sym_PIPE] = ACTIONS(438),
    [anon_sym_PIPEH] = ACTIONS(436),
    [anon_sym_PIPET] = ACTIONS(436),
    [anon_sym_AT_AT] = ACTIONS(438),
    [anon_sym_AT_ATdbt] = ACTIONS(438),
    [anon_sym_AT_ATdbta] = ACTIONS(436),
    [anon_sym_AT_ATdbtb] = ACTIONS(436),
    [anon_sym_AT_ATdbts] = ACTIONS(436),
    [anon_sym_AT_AT_DOT] = ACTIONS(436),
    [anon_sym_AT_AT_EQ] = ACTIONS(436),
    [anon_sym_AT_ATk] = ACTIONS(436),
    [anon_sym_AT_ATt] = ACTIONS(436),
    [anon_sym_AT_ATb] = ACTIONS(436),
    [anon_sym_AT_ATi] = ACTIONS(438),
    [anon_sym_AT_ATiS] = ACTIONS(436),
    [anon_sym_AT_ATf] = ACTIONS(436),
    [anon_sym_AT_ATs_COLON] = ACTIONS(436),
    [anon_sym_AT_ATc_COLON] = ACTIONS(436),
    [anon_sym_AT] = ACTIONS(438),
    [anon_sym_AT_BANG] = ACTIONS(436),
    [anon_sym_AT_LPAREN] = ACTIONS(436),
    [anon_sym_ATa_COLON] = ACTIONS(436),
    [anon_sym_ATb_COLON] = ACTIONS(436),
    [anon_sym_ATB_COLON] = ACTIONS(436),
    [anon_sym_ATe_COLON] = ACTIONS(436),
    [anon_sym_ATF_COLON] = ACTIONS(436),
    [anon_sym_ATi_COLON] = ACTIONS(436),
    [anon_sym_ATk_COLON] = ACTIONS(436),
    [anon_sym_ATo_COLON] = ACTIONS(436),
    [anon_sym_ATr_COLON] = ACTIONS(436),
    [anon_sym_ATf_COLON] = ACTIONS(436),
    [anon_sym_ATs_COLON] = ACTIONS(436),
    [anon_sym_ATx_COLON] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(436),
    [anon_sym_PIPE_DOT] = ACTIONS(436),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_GT_GT] = ACTIONS(436),
    [sym_html_redirect_operator] = ACTIONS(438),
    [sym_html_append_operator] = ACTIONS(436),
    [anon_sym_BQUOTE] = ACTIONS(436),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(436),
    [anon_sym_CR] = ACTIONS(436),
    [anon_sym_SEMI] = ACTIONS(436),
    [sym_file_descriptor] = ACTIONS(436),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_PIPE] = ACTIONS(442),
    [anon_sym_PIPEH] = ACTIONS(440),
    [anon_sym_PIPET] = ACTIONS(440),
    [anon_sym_AT_AT] = ACTIONS(442),
    [anon_sym_AT_ATdbt] = ACTIONS(442),
    [anon_sym_AT_ATdbta] = ACTIONS(440),
    [anon_sym_AT_ATdbtb] = ACTIONS(440),
    [anon_sym_AT_ATdbts] = ACTIONS(440),
    [anon_sym_AT_AT_DOT] = ACTIONS(440),
    [anon_sym_AT_AT_EQ] = ACTIONS(440),
    [anon_sym_AT_ATk] = ACTIONS(440),
    [anon_sym_AT_ATt] = ACTIONS(440),
    [anon_sym_AT_ATb] = ACTIONS(440),
    [anon_sym_AT_ATi] = ACTIONS(442),
    [anon_sym_AT_ATiS] = ACTIONS(440),
    [anon_sym_AT_ATf] = ACTIONS(440),
    [anon_sym_AT_ATs_COLON] = ACTIONS(440),
    [anon_sym_AT_ATc_COLON] = ACTIONS(440),
    [anon_sym_AT] = ACTIONS(442),
    [anon_sym_AT_BANG] = ACTIONS(440),
    [anon_sym_AT_LPAREN] = ACTIONS(440),
    [anon_sym_ATa_COLON] = ACTIONS(440),
    [anon_sym_ATb_COLON] = ACTIONS(440),
    [anon_sym_ATB_COLON] = ACTIONS(440),
    [anon_sym_ATe_COLON] = ACTIONS(440),
    [anon_sym_ATF_COLON] = ACTIONS(440),
    [anon_sym_ATi_COLON] = ACTIONS(440),
    [anon_sym_ATk_COLON] = ACTIONS(440),
    [anon_sym_ATo_COLON] = ACTIONS(440),
    [anon_sym_ATr_COLON] = ACTIONS(440),
    [anon_sym_ATf_COLON] = ACTIONS(440),
    [anon_sym_ATs_COLON] = ACTIONS(440),
    [anon_sym_ATx_COLON] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [anon_sym_PIPE_DOT] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(440),
    [sym_html_redirect_operator] = ACTIONS(442),
    [sym_html_append_operator] = ACTIONS(440),
    [anon_sym_BQUOTE] = ACTIONS(440),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(440),
    [anon_sym_CR] = ACTIONS(440),
    [anon_sym_SEMI] = ACTIONS(440),
    [sym_file_descriptor] = ACTIONS(440),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [anon_sym_TILDE] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(446),
    [anon_sym_PIPEH] = ACTIONS(444),
    [anon_sym_PIPET] = ACTIONS(444),
    [anon_sym_AT_AT] = ACTIONS(446),
    [anon_sym_AT_ATdbt] = ACTIONS(446),
    [anon_sym_AT_ATdbta] = ACTIONS(444),
    [anon_sym_AT_ATdbtb] = ACTIONS(444),
    [anon_sym_AT_ATdbts] = ACTIONS(444),
    [anon_sym_AT_AT_DOT] = ACTIONS(444),
    [anon_sym_AT_AT_EQ] = ACTIONS(444),
    [anon_sym_AT_ATk] = ACTIONS(444),
    [anon_sym_AT_ATt] = ACTIONS(444),
    [anon_sym_AT_ATb] = ACTIONS(444),
    [anon_sym_AT_ATi] = ACTIONS(446),
    [anon_sym_AT_ATiS] = ACTIONS(444),
    [anon_sym_AT_ATf] = ACTIONS(444),
    [anon_sym_AT_ATs_COLON] = ACTIONS(444),
    [anon_sym_AT_ATc_COLON] = ACTIONS(444),
    [anon_sym_AT] = ACTIONS(446),
    [anon_sym_AT_BANG] = ACTIONS(444),
    [anon_sym_AT_LPAREN] = ACTIONS(444),
    [anon_sym_ATa_COLON] = ACTIONS(444),
    [anon_sym_ATb_COLON] = ACTIONS(444),
    [anon_sym_ATB_COLON] = ACTIONS(444),
    [anon_sym_ATe_COLON] = ACTIONS(444),
    [anon_sym_ATF_COLON] = ACTIONS(444),
    [anon_sym_ATi_COLON] = ACTIONS(444),
    [anon_sym_ATk_COLON] = ACTIONS(444),
    [anon_sym_ATo_COLON] = ACTIONS(444),
    [anon_sym_ATr_COLON] = ACTIONS(444),
    [anon_sym_ATf_COLON] = ACTIONS(444),
    [anon_sym_ATs_COLON] = ACTIONS(444),
    [anon_sym_ATx_COLON] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_PIPE_DOT] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(446),
    [anon_sym_GT_GT] = ACTIONS(444),
    [sym_html_redirect_operator] = ACTIONS(446),
    [sym_html_append_operator] = ACTIONS(444),
    [anon_sym_BQUOTE] = ACTIONS(444),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(444),
    [anon_sym_CR] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [sym_file_descriptor] = ACTIONS(444),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [anon_sym_TILDE] = ACTIONS(448),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_PIPEH] = ACTIONS(448),
    [anon_sym_PIPET] = ACTIONS(448),
    [anon_sym_AT_AT] = ACTIONS(450),
    [anon_sym_AT_ATdbt] = ACTIONS(450),
    [anon_sym_AT_ATdbta] = ACTIONS(448),
    [anon_sym_AT_ATdbtb] = ACTIONS(448),
    [anon_sym_AT_ATdbts] = ACTIONS(448),
    [anon_sym_AT_AT_DOT] = ACTIONS(448),
    [anon_sym_AT_AT_EQ] = ACTIONS(448),
    [anon_sym_AT_ATk] = ACTIONS(448),
    [anon_sym_AT_ATt] = ACTIONS(448),
    [anon_sym_AT_ATb] = ACTIONS(448),
    [anon_sym_AT_ATi] = ACTIONS(450),
    [anon_sym_AT_ATiS] = ACTIONS(448),
    [anon_sym_AT_ATf] = ACTIONS(448),
    [anon_sym_AT_ATs_COLON] = ACTIONS(448),
    [anon_sym_AT_ATc_COLON] = ACTIONS(448),
    [anon_sym_AT] = ACTIONS(450),
    [anon_sym_AT_BANG] = ACTIONS(448),
    [anon_sym_AT_LPAREN] = ACTIONS(448),
    [anon_sym_ATa_COLON] = ACTIONS(448),
    [anon_sym_ATb_COLON] = ACTIONS(448),
    [anon_sym_ATB_COLON] = ACTIONS(448),
    [anon_sym_ATe_COLON] = ACTIONS(448),
    [anon_sym_ATF_COLON] = ACTIONS(448),
    [anon_sym_ATi_COLON] = ACTIONS(448),
    [anon_sym_ATk_COLON] = ACTIONS(448),
    [anon_sym_ATo_COLON] = ACTIONS(448),
    [anon_sym_ATr_COLON] = ACTIONS(448),
    [anon_sym_ATf_COLON] = ACTIONS(448),
    [anon_sym_ATs_COLON] = ACTIONS(448),
    [anon_sym_ATx_COLON] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_PIPE_DOT] = ACTIONS(448),
    [anon_sym_GT] = ACTIONS(450),
    [anon_sym_GT_GT] = ACTIONS(448),
    [sym_html_redirect_operator] = ACTIONS(450),
    [sym_html_append_operator] = ACTIONS(448),
    [anon_sym_BQUOTE] = ACTIONS(448),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(448),
    [anon_sym_CR] = ACTIONS(448),
    [anon_sym_SEMI] = ACTIONS(448),
    [sym_file_descriptor] = ACTIONS(448),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_TILDE] = ACTIONS(452),
    [anon_sym_PIPE] = ACTIONS(454),
    [anon_sym_PIPEH] = ACTIONS(452),
    [anon_sym_PIPET] = ACTIONS(452),
    [anon_sym_AT_AT] = ACTIONS(454),
    [anon_sym_AT_ATdbt] = ACTIONS(454),
    [anon_sym_AT_ATdbta] = ACTIONS(452),
    [anon_sym_AT_ATdbtb] = ACTIONS(452),
    [anon_sym_AT_ATdbts] = ACTIONS(452),
    [anon_sym_AT_AT_DOT] = ACTIONS(452),
    [anon_sym_AT_AT_EQ] = ACTIONS(452),
    [anon_sym_AT_ATk] = ACTIONS(452),
    [anon_sym_AT_ATt] = ACTIONS(452),
    [anon_sym_AT_ATb] = ACTIONS(452),
    [anon_sym_AT_ATi] = ACTIONS(454),
    [anon_sym_AT_ATiS] = ACTIONS(452),
    [anon_sym_AT_ATf] = ACTIONS(452),
    [anon_sym_AT_ATs_COLON] = ACTIONS(452),
    [anon_sym_AT_ATc_COLON] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(454),
    [anon_sym_AT_BANG] = ACTIONS(452),
    [anon_sym_AT_LPAREN] = ACTIONS(452),
    [anon_sym_ATa_COLON] = ACTIONS(452),
    [anon_sym_ATb_COLON] = ACTIONS(452),
    [anon_sym_ATB_COLON] = ACTIONS(452),
    [anon_sym_ATe_COLON] = ACTIONS(452),
    [anon_sym_ATF_COLON] = ACTIONS(452),
    [anon_sym_ATi_COLON] = ACTIONS(452),
    [anon_sym_ATk_COLON] = ACTIONS(452),
    [anon_sym_ATo_COLON] = ACTIONS(452),
    [anon_sym_ATr_COLON] = ACTIONS(452),
    [anon_sym_ATf_COLON] = ACTIONS(452),
    [anon_sym_ATs_COLON] = ACTIONS(452),
    [anon_sym_ATx_COLON] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PIPE_DOT] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_GT_GT] = ACTIONS(452),
    [sym_html_redirect_operator] = ACTIONS(454),
    [sym_html_append_operator] = ACTIONS(452),
    [anon_sym_BQUOTE] = ACTIONS(452),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(452),
    [anon_sym_CR] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [sym_file_descriptor] = ACTIONS(452),
  },
  [128] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_PIPE] = ACTIONS(458),
    [anon_sym_PIPEH] = ACTIONS(456),
    [anon_sym_PIPET] = ACTIONS(456),
    [anon_sym_AT_AT] = ACTIONS(458),
    [anon_sym_AT_ATdbt] = ACTIONS(458),
    [anon_sym_AT_ATdbta] = ACTIONS(456),
    [anon_sym_AT_ATdbtb] = ACTIONS(456),
    [anon_sym_AT_ATdbts] = ACTIONS(456),
    [anon_sym_AT_AT_DOT] = ACTIONS(456),
    [anon_sym_AT_AT_EQ] = ACTIONS(456),
    [anon_sym_AT_ATk] = ACTIONS(456),
    [anon_sym_AT_ATt] = ACTIONS(456),
    [anon_sym_AT_ATb] = ACTIONS(456),
    [anon_sym_AT_ATi] = ACTIONS(458),
    [anon_sym_AT_ATiS] = ACTIONS(456),
    [anon_sym_AT_ATf] = ACTIONS(456),
    [anon_sym_AT_ATs_COLON] = ACTIONS(456),
    [anon_sym_AT_ATc_COLON] = ACTIONS(456),
    [anon_sym_AT] = ACTIONS(458),
    [anon_sym_AT_BANG] = ACTIONS(456),
    [anon_sym_AT_LPAREN] = ACTIONS(456),
    [anon_sym_ATa_COLON] = ACTIONS(456),
    [anon_sym_ATb_COLON] = ACTIONS(456),
    [anon_sym_ATB_COLON] = ACTIONS(456),
    [anon_sym_ATe_COLON] = ACTIONS(456),
    [anon_sym_ATF_COLON] = ACTIONS(456),
    [anon_sym_ATi_COLON] = ACTIONS(456),
    [anon_sym_ATk_COLON] = ACTIONS(456),
    [anon_sym_ATo_COLON] = ACTIONS(456),
    [anon_sym_ATr_COLON] = ACTIONS(456),
    [anon_sym_ATf_COLON] = ACTIONS(456),
    [anon_sym_ATs_COLON] = ACTIONS(456),
    [anon_sym_ATx_COLON] = ACTIONS(456),
    [anon_sym_RPAREN] = ACTIONS(456),
    [anon_sym_PIPE_DOT] = ACTIONS(456),
    [anon_sym_GT] = ACTIONS(458),
    [anon_sym_GT_GT] = ACTIONS(456),
    [sym_html_redirect_operator] = ACTIONS(458),
    [sym_html_append_operator] = ACTIONS(456),
    [anon_sym_BQUOTE] = ACTIONS(456),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(456),
    [anon_sym_CR] = ACTIONS(456),
    [anon_sym_SEMI] = ACTIONS(456),
    [sym_file_descriptor] = ACTIONS(456),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_TILDE] = ACTIONS(460),
    [anon_sym_PIPE] = ACTIONS(462),
    [anon_sym_PIPEH] = ACTIONS(460),
    [anon_sym_PIPET] = ACTIONS(460),
    [anon_sym_AT_AT] = ACTIONS(462),
    [anon_sym_AT_ATdbt] = ACTIONS(462),
    [anon_sym_AT_ATdbta] = ACTIONS(460),
    [anon_sym_AT_ATdbtb] = ACTIONS(460),
    [anon_sym_AT_ATdbts] = ACTIONS(460),
    [anon_sym_AT_AT_DOT] = ACTIONS(460),
    [anon_sym_AT_AT_EQ] = ACTIONS(460),
    [anon_sym_AT_ATk] = ACTIONS(460),
    [anon_sym_AT_ATt] = ACTIONS(460),
    [anon_sym_AT_ATb] = ACTIONS(460),
    [anon_sym_AT_ATi] = ACTIONS(462),
    [anon_sym_AT_ATiS] = ACTIONS(460),
    [anon_sym_AT_ATf] = ACTIONS(460),
    [anon_sym_AT_ATs_COLON] = ACTIONS(460),
    [anon_sym_AT_ATc_COLON] = ACTIONS(460),
    [anon_sym_AT] = ACTIONS(462),
    [anon_sym_AT_BANG] = ACTIONS(460),
    [anon_sym_AT_LPAREN] = ACTIONS(460),
    [anon_sym_ATa_COLON] = ACTIONS(460),
    [anon_sym_ATb_COLON] = ACTIONS(460),
    [anon_sym_ATB_COLON] = ACTIONS(460),
    [anon_sym_ATe_COLON] = ACTIONS(460),
    [anon_sym_ATF_COLON] = ACTIONS(460),
    [anon_sym_ATi_COLON] = ACTIONS(460),
    [anon_sym_ATk_COLON] = ACTIONS(460),
    [anon_sym_ATo_COLON] = ACTIONS(460),
    [anon_sym_ATr_COLON] = ACTIONS(460),
    [anon_sym_ATf_COLON] = ACTIONS(460),
    [anon_sym_ATs_COLON] = ACTIONS(460),
    [anon_sym_ATx_COLON] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(460),
    [anon_sym_PIPE_DOT] = ACTIONS(460),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_GT_GT] = ACTIONS(460),
    [sym_html_redirect_operator] = ACTIONS(462),
    [sym_html_append_operator] = ACTIONS(460),
    [anon_sym_BQUOTE] = ACTIONS(460),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(460),
    [anon_sym_CR] = ACTIONS(460),
    [anon_sym_SEMI] = ACTIONS(460),
    [sym_file_descriptor] = ACTIONS(460),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_TILDE] = ACTIONS(464),
    [anon_sym_PIPE] = ACTIONS(466),
    [anon_sym_PIPEH] = ACTIONS(464),
    [anon_sym_PIPET] = ACTIONS(464),
    [anon_sym_AT_AT] = ACTIONS(466),
    [anon_sym_AT_ATdbt] = ACTIONS(466),
    [anon_sym_AT_ATdbta] = ACTIONS(464),
    [anon_sym_AT_ATdbtb] = ACTIONS(464),
    [anon_sym_AT_ATdbts] = ACTIONS(464),
    [anon_sym_AT_AT_DOT] = ACTIONS(464),
    [anon_sym_AT_AT_EQ] = ACTIONS(464),
    [anon_sym_AT_ATk] = ACTIONS(464),
    [anon_sym_AT_ATt] = ACTIONS(464),
    [anon_sym_AT_ATb] = ACTIONS(464),
    [anon_sym_AT_ATi] = ACTIONS(466),
    [anon_sym_AT_ATiS] = ACTIONS(464),
    [anon_sym_AT_ATf] = ACTIONS(464),
    [anon_sym_AT_ATs_COLON] = ACTIONS(464),
    [anon_sym_AT_ATc_COLON] = ACTIONS(464),
    [anon_sym_AT] = ACTIONS(466),
    [anon_sym_AT_BANG] = ACTIONS(464),
    [anon_sym_AT_LPAREN] = ACTIONS(464),
    [anon_sym_ATa_COLON] = ACTIONS(464),
    [anon_sym_ATb_COLON] = ACTIONS(464),
    [anon_sym_ATB_COLON] = ACTIONS(464),
    [anon_sym_ATe_COLON] = ACTIONS(464),
    [anon_sym_ATF_COLON] = ACTIONS(464),
    [anon_sym_ATi_COLON] = ACTIONS(464),
    [anon_sym_ATk_COLON] = ACTIONS(464),
    [anon_sym_ATo_COLON] = ACTIONS(464),
    [anon_sym_ATr_COLON] = ACTIONS(464),
    [anon_sym_ATf_COLON] = ACTIONS(464),
    [anon_sym_ATs_COLON] = ACTIONS(464),
    [anon_sym_ATx_COLON] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_PIPE_DOT] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(466),
    [anon_sym_GT_GT] = ACTIONS(464),
    [sym_html_redirect_operator] = ACTIONS(466),
    [sym_html_append_operator] = ACTIONS(464),
    [anon_sym_BQUOTE] = ACTIONS(464),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(464),
    [anon_sym_CR] = ACTIONS(464),
    [anon_sym_SEMI] = ACTIONS(464),
    [sym_file_descriptor] = ACTIONS(464),
  },
  [131] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_TILDE] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_PIPEH] = ACTIONS(468),
    [anon_sym_PIPET] = ACTIONS(468),
    [anon_sym_AT_AT] = ACTIONS(470),
    [anon_sym_AT_ATdbt] = ACTIONS(470),
    [anon_sym_AT_ATdbta] = ACTIONS(468),
    [anon_sym_AT_ATdbtb] = ACTIONS(468),
    [anon_sym_AT_ATdbts] = ACTIONS(468),
    [anon_sym_AT_AT_DOT] = ACTIONS(468),
    [anon_sym_AT_AT_EQ] = ACTIONS(468),
    [anon_sym_AT_ATk] = ACTIONS(468),
    [anon_sym_AT_ATt] = ACTIONS(468),
    [anon_sym_AT_ATb] = ACTIONS(468),
    [anon_sym_AT_ATi] = ACTIONS(470),
    [anon_sym_AT_ATiS] = ACTIONS(468),
    [anon_sym_AT_ATf] = ACTIONS(468),
    [anon_sym_AT_ATs_COLON] = ACTIONS(468),
    [anon_sym_AT_ATc_COLON] = ACTIONS(468),
    [anon_sym_AT] = ACTIONS(470),
    [anon_sym_AT_BANG] = ACTIONS(468),
    [anon_sym_AT_LPAREN] = ACTIONS(468),
    [anon_sym_ATa_COLON] = ACTIONS(468),
    [anon_sym_ATb_COLON] = ACTIONS(468),
    [anon_sym_ATB_COLON] = ACTIONS(468),
    [anon_sym_ATe_COLON] = ACTIONS(468),
    [anon_sym_ATF_COLON] = ACTIONS(468),
    [anon_sym_ATi_COLON] = ACTIONS(468),
    [anon_sym_ATk_COLON] = ACTIONS(468),
    [anon_sym_ATo_COLON] = ACTIONS(468),
    [anon_sym_ATr_COLON] = ACTIONS(468),
    [anon_sym_ATf_COLON] = ACTIONS(468),
    [anon_sym_ATs_COLON] = ACTIONS(468),
    [anon_sym_ATx_COLON] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_PIPE_DOT] = ACTIONS(468),
    [anon_sym_GT] = ACTIONS(470),
    [anon_sym_GT_GT] = ACTIONS(468),
    [sym_html_redirect_operator] = ACTIONS(470),
    [sym_html_append_operator] = ACTIONS(468),
    [anon_sym_BQUOTE] = ACTIONS(468),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(468),
    [anon_sym_CR] = ACTIONS(468),
    [anon_sym_SEMI] = ACTIONS(468),
    [sym_file_descriptor] = ACTIONS(468),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_TILDE] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_PIPEH] = ACTIONS(472),
    [anon_sym_PIPET] = ACTIONS(472),
    [anon_sym_AT_AT] = ACTIONS(474),
    [anon_sym_AT_ATdbt] = ACTIONS(474),
    [anon_sym_AT_ATdbta] = ACTIONS(472),
    [anon_sym_AT_ATdbtb] = ACTIONS(472),
    [anon_sym_AT_ATdbts] = ACTIONS(472),
    [anon_sym_AT_AT_DOT] = ACTIONS(472),
    [anon_sym_AT_AT_EQ] = ACTIONS(472),
    [anon_sym_AT_ATk] = ACTIONS(472),
    [anon_sym_AT_ATt] = ACTIONS(472),
    [anon_sym_AT_ATb] = ACTIONS(472),
    [anon_sym_AT_ATi] = ACTIONS(474),
    [anon_sym_AT_ATiS] = ACTIONS(472),
    [anon_sym_AT_ATf] = ACTIONS(472),
    [anon_sym_AT_ATs_COLON] = ACTIONS(472),
    [anon_sym_AT_ATc_COLON] = ACTIONS(472),
    [anon_sym_AT] = ACTIONS(474),
    [anon_sym_AT_BANG] = ACTIONS(472),
    [anon_sym_AT_LPAREN] = ACTIONS(472),
    [anon_sym_ATa_COLON] = ACTIONS(472),
    [anon_sym_ATb_COLON] = ACTIONS(472),
    [anon_sym_ATB_COLON] = ACTIONS(472),
    [anon_sym_ATe_COLON] = ACTIONS(472),
    [anon_sym_ATF_COLON] = ACTIONS(472),
    [anon_sym_ATi_COLON] = ACTIONS(472),
    [anon_sym_ATk_COLON] = ACTIONS(472),
    [anon_sym_ATo_COLON] = ACTIONS(472),
    [anon_sym_ATr_COLON] = ACTIONS(472),
    [anon_sym_ATf_COLON] = ACTIONS(472),
    [anon_sym_ATs_COLON] = ACTIONS(472),
    [anon_sym_ATx_COLON] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_PIPE_DOT] = ACTIONS(472),
    [anon_sym_GT] = ACTIONS(474),
    [anon_sym_GT_GT] = ACTIONS(472),
    [sym_html_redirect_operator] = ACTIONS(474),
    [sym_html_append_operator] = ACTIONS(472),
    [anon_sym_BQUOTE] = ACTIONS(472),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(472),
    [anon_sym_CR] = ACTIONS(472),
    [anon_sym_SEMI] = ACTIONS(472),
    [sym_file_descriptor] = ACTIONS(472),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [anon_sym_TILDE] = ACTIONS(476),
    [anon_sym_PIPE] = ACTIONS(478),
    [anon_sym_PIPEH] = ACTIONS(476),
    [anon_sym_PIPET] = ACTIONS(476),
    [anon_sym_AT_AT] = ACTIONS(478),
    [anon_sym_AT_ATdbt] = ACTIONS(478),
    [anon_sym_AT_ATdbta] = ACTIONS(476),
    [anon_sym_AT_ATdbtb] = ACTIONS(476),
    [anon_sym_AT_ATdbts] = ACTIONS(476),
    [anon_sym_AT_AT_DOT] = ACTIONS(476),
    [anon_sym_AT_AT_EQ] = ACTIONS(476),
    [anon_sym_AT_ATk] = ACTIONS(476),
    [anon_sym_AT_ATt] = ACTIONS(476),
    [anon_sym_AT_ATb] = ACTIONS(476),
    [anon_sym_AT_ATi] = ACTIONS(478),
    [anon_sym_AT_ATiS] = ACTIONS(476),
    [anon_sym_AT_ATf] = ACTIONS(476),
    [anon_sym_AT_ATs_COLON] = ACTIONS(476),
    [anon_sym_AT_ATc_COLON] = ACTIONS(476),
    [anon_sym_AT] = ACTIONS(478),
    [anon_sym_AT_BANG] = ACTIONS(476),
    [anon_sym_AT_LPAREN] = ACTIONS(476),
    [anon_sym_ATa_COLON] = ACTIONS(476),
    [anon_sym_ATb_COLON] = ACTIONS(476),
    [anon_sym_ATB_COLON] = ACTIONS(476),
    [anon_sym_ATe_COLON] = ACTIONS(476),
    [anon_sym_ATF_COLON] = ACTIONS(476),
    [anon_sym_ATi_COLON] = ACTIONS(476),
    [anon_sym_ATk_COLON] = ACTIONS(476),
    [anon_sym_ATo_COLON] = ACTIONS(476),
    [anon_sym_ATr_COLON] = ACTIONS(476),
    [anon_sym_ATf_COLON] = ACTIONS(476),
    [anon_sym_ATs_COLON] = ACTIONS(476),
    [anon_sym_ATx_COLON] = ACTIONS(476),
    [anon_sym_RPAREN] = ACTIONS(476),
    [anon_sym_PIPE_DOT] = ACTIONS(476),
    [anon_sym_GT] = ACTIONS(478),
    [anon_sym_GT_GT] = ACTIONS(476),
    [sym_html_redirect_operator] = ACTIONS(478),
    [sym_html_append_operator] = ACTIONS(476),
    [anon_sym_BQUOTE] = ACTIONS(476),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(476),
    [anon_sym_CR] = ACTIONS(476),
    [anon_sym_SEMI] = ACTIONS(476),
    [sym_file_descriptor] = ACTIONS(476),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [anon_sym_TILDE] = ACTIONS(480),
    [anon_sym_PIPE] = ACTIONS(482),
    [anon_sym_PIPEH] = ACTIONS(480),
    [anon_sym_PIPET] = ACTIONS(480),
    [anon_sym_AT_AT] = ACTIONS(482),
    [anon_sym_AT_ATdbt] = ACTIONS(482),
    [anon_sym_AT_ATdbta] = ACTIONS(480),
    [anon_sym_AT_ATdbtb] = ACTIONS(480),
    [anon_sym_AT_ATdbts] = ACTIONS(480),
    [anon_sym_AT_AT_DOT] = ACTIONS(480),
    [anon_sym_AT_AT_EQ] = ACTIONS(480),
    [anon_sym_AT_ATk] = ACTIONS(480),
    [anon_sym_AT_ATt] = ACTIONS(480),
    [anon_sym_AT_ATb] = ACTIONS(480),
    [anon_sym_AT_ATi] = ACTIONS(482),
    [anon_sym_AT_ATiS] = ACTIONS(480),
    [anon_sym_AT_ATf] = ACTIONS(480),
    [anon_sym_AT_ATs_COLON] = ACTIONS(480),
    [anon_sym_AT_ATc_COLON] = ACTIONS(480),
    [anon_sym_AT] = ACTIONS(482),
    [anon_sym_AT_BANG] = ACTIONS(480),
    [anon_sym_AT_LPAREN] = ACTIONS(480),
    [anon_sym_ATa_COLON] = ACTIONS(480),
    [anon_sym_ATb_COLON] = ACTIONS(480),
    [anon_sym_ATB_COLON] = ACTIONS(480),
    [anon_sym_ATe_COLON] = ACTIONS(480),
    [anon_sym_ATF_COLON] = ACTIONS(480),
    [anon_sym_ATi_COLON] = ACTIONS(480),
    [anon_sym_ATk_COLON] = ACTIONS(480),
    [anon_sym_ATo_COLON] = ACTIONS(480),
    [anon_sym_ATr_COLON] = ACTIONS(480),
    [anon_sym_ATf_COLON] = ACTIONS(480),
    [anon_sym_ATs_COLON] = ACTIONS(480),
    [anon_sym_ATx_COLON] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(480),
    [anon_sym_PIPE_DOT] = ACTIONS(480),
    [anon_sym_GT] = ACTIONS(482),
    [anon_sym_GT_GT] = ACTIONS(480),
    [sym_html_redirect_operator] = ACTIONS(482),
    [sym_html_append_operator] = ACTIONS(480),
    [anon_sym_BQUOTE] = ACTIONS(480),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(480),
    [anon_sym_CR] = ACTIONS(480),
    [anon_sym_SEMI] = ACTIONS(480),
    [sym_file_descriptor] = ACTIONS(480),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(484),
    [anon_sym_TILDE] = ACTIONS(484),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_PIPEH] = ACTIONS(484),
    [anon_sym_PIPET] = ACTIONS(484),
    [anon_sym_AT_AT] = ACTIONS(486),
    [anon_sym_AT_ATdbt] = ACTIONS(486),
    [anon_sym_AT_ATdbta] = ACTIONS(484),
    [anon_sym_AT_ATdbtb] = ACTIONS(484),
    [anon_sym_AT_ATdbts] = ACTIONS(484),
    [anon_sym_AT_AT_DOT] = ACTIONS(484),
    [anon_sym_AT_AT_EQ] = ACTIONS(484),
    [anon_sym_AT_ATk] = ACTIONS(484),
    [anon_sym_AT_ATt] = ACTIONS(484),
    [anon_sym_AT_ATb] = ACTIONS(484),
    [anon_sym_AT_ATi] = ACTIONS(486),
    [anon_sym_AT_ATiS] = ACTIONS(484),
    [anon_sym_AT_ATf] = ACTIONS(484),
    [anon_sym_AT_ATs_COLON] = ACTIONS(484),
    [anon_sym_AT_ATc_COLON] = ACTIONS(484),
    [anon_sym_AT] = ACTIONS(486),
    [anon_sym_AT_BANG] = ACTIONS(484),
    [anon_sym_AT_LPAREN] = ACTIONS(484),
    [anon_sym_ATa_COLON] = ACTIONS(484),
    [anon_sym_ATb_COLON] = ACTIONS(484),
    [anon_sym_ATB_COLON] = ACTIONS(484),
    [anon_sym_ATe_COLON] = ACTIONS(484),
    [anon_sym_ATF_COLON] = ACTIONS(484),
    [anon_sym_ATi_COLON] = ACTIONS(484),
    [anon_sym_ATk_COLON] = ACTIONS(484),
    [anon_sym_ATo_COLON] = ACTIONS(484),
    [anon_sym_ATr_COLON] = ACTIONS(484),
    [anon_sym_ATf_COLON] = ACTIONS(484),
    [anon_sym_ATs_COLON] = ACTIONS(484),
    [anon_sym_ATx_COLON] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(484),
    [anon_sym_PIPE_DOT] = ACTIONS(484),
    [anon_sym_GT] = ACTIONS(486),
    [anon_sym_GT_GT] = ACTIONS(484),
    [sym_html_redirect_operator] = ACTIONS(486),
    [sym_html_append_operator] = ACTIONS(484),
    [anon_sym_BQUOTE] = ACTIONS(484),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(484),
    [anon_sym_CR] = ACTIONS(484),
    [anon_sym_SEMI] = ACTIONS(484),
    [sym_file_descriptor] = ACTIONS(484),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_TILDE] = ACTIONS(488),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_PIPEH] = ACTIONS(488),
    [anon_sym_PIPET] = ACTIONS(488),
    [anon_sym_AT_AT] = ACTIONS(490),
    [anon_sym_AT_ATdbt] = ACTIONS(490),
    [anon_sym_AT_ATdbta] = ACTIONS(488),
    [anon_sym_AT_ATdbtb] = ACTIONS(488),
    [anon_sym_AT_ATdbts] = ACTIONS(488),
    [anon_sym_AT_AT_DOT] = ACTIONS(488),
    [anon_sym_AT_AT_EQ] = ACTIONS(488),
    [anon_sym_AT_ATk] = ACTIONS(488),
    [anon_sym_AT_ATt] = ACTIONS(488),
    [anon_sym_AT_ATb] = ACTIONS(488),
    [anon_sym_AT_ATi] = ACTIONS(490),
    [anon_sym_AT_ATiS] = ACTIONS(488),
    [anon_sym_AT_ATf] = ACTIONS(488),
    [anon_sym_AT_ATs_COLON] = ACTIONS(488),
    [anon_sym_AT_ATc_COLON] = ACTIONS(488),
    [anon_sym_AT] = ACTIONS(490),
    [anon_sym_AT_BANG] = ACTIONS(488),
    [anon_sym_AT_LPAREN] = ACTIONS(488),
    [anon_sym_ATa_COLON] = ACTIONS(488),
    [anon_sym_ATb_COLON] = ACTIONS(488),
    [anon_sym_ATB_COLON] = ACTIONS(488),
    [anon_sym_ATe_COLON] = ACTIONS(488),
    [anon_sym_ATF_COLON] = ACTIONS(488),
    [anon_sym_ATi_COLON] = ACTIONS(488),
    [anon_sym_ATk_COLON] = ACTIONS(488),
    [anon_sym_ATo_COLON] = ACTIONS(488),
    [anon_sym_ATr_COLON] = ACTIONS(488),
    [anon_sym_ATf_COLON] = ACTIONS(488),
    [anon_sym_ATs_COLON] = ACTIONS(488),
    [anon_sym_ATx_COLON] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_PIPE_DOT] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(490),
    [anon_sym_GT_GT] = ACTIONS(488),
    [sym_html_redirect_operator] = ACTIONS(490),
    [sym_html_append_operator] = ACTIONS(488),
    [anon_sym_BQUOTE] = ACTIONS(488),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(488),
    [anon_sym_CR] = ACTIONS(488),
    [anon_sym_SEMI] = ACTIONS(488),
    [sym_file_descriptor] = ACTIONS(488),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_TILDE] = ACTIONS(492),
    [anon_sym_PIPE] = ACTIONS(494),
    [anon_sym_PIPEH] = ACTIONS(492),
    [anon_sym_PIPET] = ACTIONS(492),
    [anon_sym_AT_AT] = ACTIONS(494),
    [anon_sym_AT_ATdbt] = ACTIONS(494),
    [anon_sym_AT_ATdbta] = ACTIONS(492),
    [anon_sym_AT_ATdbtb] = ACTIONS(492),
    [anon_sym_AT_ATdbts] = ACTIONS(492),
    [anon_sym_AT_AT_DOT] = ACTIONS(492),
    [anon_sym_AT_AT_EQ] = ACTIONS(492),
    [anon_sym_AT_ATk] = ACTIONS(492),
    [anon_sym_AT_ATt] = ACTIONS(492),
    [anon_sym_AT_ATb] = ACTIONS(492),
    [anon_sym_AT_ATi] = ACTIONS(494),
    [anon_sym_AT_ATiS] = ACTIONS(492),
    [anon_sym_AT_ATf] = ACTIONS(492),
    [anon_sym_AT_ATs_COLON] = ACTIONS(492),
    [anon_sym_AT_ATc_COLON] = ACTIONS(492),
    [anon_sym_AT] = ACTIONS(494),
    [anon_sym_AT_BANG] = ACTIONS(492),
    [anon_sym_AT_LPAREN] = ACTIONS(492),
    [anon_sym_ATa_COLON] = ACTIONS(492),
    [anon_sym_ATb_COLON] = ACTIONS(492),
    [anon_sym_ATB_COLON] = ACTIONS(492),
    [anon_sym_ATe_COLON] = ACTIONS(492),
    [anon_sym_ATF_COLON] = ACTIONS(492),
    [anon_sym_ATi_COLON] = ACTIONS(492),
    [anon_sym_ATk_COLON] = ACTIONS(492),
    [anon_sym_ATo_COLON] = ACTIONS(492),
    [anon_sym_ATr_COLON] = ACTIONS(492),
    [anon_sym_ATf_COLON] = ACTIONS(492),
    [anon_sym_ATs_COLON] = ACTIONS(492),
    [anon_sym_ATx_COLON] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_PIPE_DOT] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(494),
    [anon_sym_GT_GT] = ACTIONS(492),
    [sym_html_redirect_operator] = ACTIONS(494),
    [sym_html_append_operator] = ACTIONS(492),
    [anon_sym_BQUOTE] = ACTIONS(492),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(492),
    [anon_sym_CR] = ACTIONS(492),
    [anon_sym_SEMI] = ACTIONS(492),
    [sym_file_descriptor] = ACTIONS(492),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_TILDE] = ACTIONS(496),
    [anon_sym_PIPE] = ACTIONS(498),
    [anon_sym_PIPEH] = ACTIONS(496),
    [anon_sym_PIPET] = ACTIONS(496),
    [anon_sym_AT_AT] = ACTIONS(498),
    [anon_sym_AT_ATdbt] = ACTIONS(498),
    [anon_sym_AT_ATdbta] = ACTIONS(496),
    [anon_sym_AT_ATdbtb] = ACTIONS(496),
    [anon_sym_AT_ATdbts] = ACTIONS(496),
    [anon_sym_AT_AT_DOT] = ACTIONS(496),
    [anon_sym_AT_AT_EQ] = ACTIONS(496),
    [anon_sym_AT_ATk] = ACTIONS(496),
    [anon_sym_AT_ATt] = ACTIONS(496),
    [anon_sym_AT_ATb] = ACTIONS(496),
    [anon_sym_AT_ATi] = ACTIONS(498),
    [anon_sym_AT_ATiS] = ACTIONS(496),
    [anon_sym_AT_ATf] = ACTIONS(496),
    [anon_sym_AT_ATs_COLON] = ACTIONS(496),
    [anon_sym_AT_ATc_COLON] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(498),
    [anon_sym_AT_BANG] = ACTIONS(496),
    [anon_sym_AT_LPAREN] = ACTIONS(496),
    [anon_sym_ATa_COLON] = ACTIONS(496),
    [anon_sym_ATb_COLON] = ACTIONS(496),
    [anon_sym_ATB_COLON] = ACTIONS(496),
    [anon_sym_ATe_COLON] = ACTIONS(496),
    [anon_sym_ATF_COLON] = ACTIONS(496),
    [anon_sym_ATi_COLON] = ACTIONS(496),
    [anon_sym_ATk_COLON] = ACTIONS(496),
    [anon_sym_ATo_COLON] = ACTIONS(496),
    [anon_sym_ATr_COLON] = ACTIONS(496),
    [anon_sym_ATf_COLON] = ACTIONS(496),
    [anon_sym_ATs_COLON] = ACTIONS(496),
    [anon_sym_ATx_COLON] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_PIPE_DOT] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(498),
    [anon_sym_GT_GT] = ACTIONS(496),
    [sym_html_redirect_operator] = ACTIONS(498),
    [sym_html_append_operator] = ACTIONS(496),
    [anon_sym_BQUOTE] = ACTIONS(496),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(496),
    [anon_sym_CR] = ACTIONS(496),
    [anon_sym_SEMI] = ACTIONS(496),
    [sym_file_descriptor] = ACTIONS(496),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_TILDE] = ACTIONS(500),
    [anon_sym_PIPE] = ACTIONS(502),
    [anon_sym_PIPEH] = ACTIONS(500),
    [anon_sym_PIPET] = ACTIONS(500),
    [anon_sym_AT_AT] = ACTIONS(502),
    [anon_sym_AT_ATdbt] = ACTIONS(502),
    [anon_sym_AT_ATdbta] = ACTIONS(500),
    [anon_sym_AT_ATdbtb] = ACTIONS(500),
    [anon_sym_AT_ATdbts] = ACTIONS(500),
    [anon_sym_AT_AT_DOT] = ACTIONS(500),
    [anon_sym_AT_AT_EQ] = ACTIONS(500),
    [anon_sym_AT_ATk] = ACTIONS(500),
    [anon_sym_AT_ATt] = ACTIONS(500),
    [anon_sym_AT_ATb] = ACTIONS(500),
    [anon_sym_AT_ATi] = ACTIONS(502),
    [anon_sym_AT_ATiS] = ACTIONS(500),
    [anon_sym_AT_ATf] = ACTIONS(500),
    [anon_sym_AT_ATs_COLON] = ACTIONS(500),
    [anon_sym_AT_ATc_COLON] = ACTIONS(500),
    [anon_sym_AT] = ACTIONS(502),
    [anon_sym_AT_BANG] = ACTIONS(500),
    [anon_sym_AT_LPAREN] = ACTIONS(500),
    [anon_sym_ATa_COLON] = ACTIONS(500),
    [anon_sym_ATb_COLON] = ACTIONS(500),
    [anon_sym_ATB_COLON] = ACTIONS(500),
    [anon_sym_ATe_COLON] = ACTIONS(500),
    [anon_sym_ATF_COLON] = ACTIONS(500),
    [anon_sym_ATi_COLON] = ACTIONS(500),
    [anon_sym_ATk_COLON] = ACTIONS(500),
    [anon_sym_ATo_COLON] = ACTIONS(500),
    [anon_sym_ATr_COLON] = ACTIONS(500),
    [anon_sym_ATf_COLON] = ACTIONS(500),
    [anon_sym_ATs_COLON] = ACTIONS(500),
    [anon_sym_ATx_COLON] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_PIPE_DOT] = ACTIONS(500),
    [anon_sym_GT] = ACTIONS(502),
    [anon_sym_GT_GT] = ACTIONS(500),
    [sym_html_redirect_operator] = ACTIONS(502),
    [sym_html_append_operator] = ACTIONS(500),
    [anon_sym_BQUOTE] = ACTIONS(500),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(500),
    [anon_sym_CR] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(500),
    [sym_file_descriptor] = ACTIONS(500),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(504),
    [anon_sym_TILDE] = ACTIONS(504),
    [anon_sym_PIPE] = ACTIONS(506),
    [anon_sym_PIPEH] = ACTIONS(504),
    [anon_sym_PIPET] = ACTIONS(504),
    [anon_sym_AT_AT] = ACTIONS(506),
    [anon_sym_AT_ATdbt] = ACTIONS(506),
    [anon_sym_AT_ATdbta] = ACTIONS(504),
    [anon_sym_AT_ATdbtb] = ACTIONS(504),
    [anon_sym_AT_ATdbts] = ACTIONS(504),
    [anon_sym_AT_AT_DOT] = ACTIONS(504),
    [anon_sym_AT_AT_EQ] = ACTIONS(504),
    [anon_sym_AT_ATk] = ACTIONS(504),
    [anon_sym_AT_ATt] = ACTIONS(504),
    [anon_sym_AT_ATb] = ACTIONS(504),
    [anon_sym_AT_ATi] = ACTIONS(506),
    [anon_sym_AT_ATiS] = ACTIONS(504),
    [anon_sym_AT_ATf] = ACTIONS(504),
    [anon_sym_AT_ATs_COLON] = ACTIONS(504),
    [anon_sym_AT_ATc_COLON] = ACTIONS(504),
    [anon_sym_AT] = ACTIONS(506),
    [anon_sym_AT_BANG] = ACTIONS(504),
    [anon_sym_AT_LPAREN] = ACTIONS(504),
    [anon_sym_ATa_COLON] = ACTIONS(504),
    [anon_sym_ATb_COLON] = ACTIONS(504),
    [anon_sym_ATB_COLON] = ACTIONS(504),
    [anon_sym_ATe_COLON] = ACTIONS(504),
    [anon_sym_ATF_COLON] = ACTIONS(504),
    [anon_sym_ATi_COLON] = ACTIONS(504),
    [anon_sym_ATk_COLON] = ACTIONS(504),
    [anon_sym_ATo_COLON] = ACTIONS(504),
    [anon_sym_ATr_COLON] = ACTIONS(504),
    [anon_sym_ATf_COLON] = ACTIONS(504),
    [anon_sym_ATs_COLON] = ACTIONS(504),
    [anon_sym_ATx_COLON] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(504),
    [anon_sym_PIPE_DOT] = ACTIONS(504),
    [anon_sym_GT] = ACTIONS(506),
    [anon_sym_GT_GT] = ACTIONS(504),
    [sym_html_redirect_operator] = ACTIONS(506),
    [sym_html_append_operator] = ACTIONS(504),
    [anon_sym_BQUOTE] = ACTIONS(504),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(504),
    [anon_sym_CR] = ACTIONS(504),
    [anon_sym_SEMI] = ACTIONS(504),
    [sym_file_descriptor] = ACTIONS(504),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [anon_sym_TILDE] = ACTIONS(508),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_PIPEH] = ACTIONS(508),
    [anon_sym_PIPET] = ACTIONS(508),
    [anon_sym_AT_AT] = ACTIONS(510),
    [anon_sym_AT_ATdbt] = ACTIONS(510),
    [anon_sym_AT_ATdbta] = ACTIONS(508),
    [anon_sym_AT_ATdbtb] = ACTIONS(508),
    [anon_sym_AT_ATdbts] = ACTIONS(508),
    [anon_sym_AT_AT_DOT] = ACTIONS(508),
    [anon_sym_AT_AT_EQ] = ACTIONS(508),
    [anon_sym_AT_ATk] = ACTIONS(508),
    [anon_sym_AT_ATt] = ACTIONS(508),
    [anon_sym_AT_ATb] = ACTIONS(508),
    [anon_sym_AT_ATi] = ACTIONS(510),
    [anon_sym_AT_ATiS] = ACTIONS(508),
    [anon_sym_AT_ATf] = ACTIONS(508),
    [anon_sym_AT_ATs_COLON] = ACTIONS(508),
    [anon_sym_AT_ATc_COLON] = ACTIONS(508),
    [anon_sym_AT] = ACTIONS(510),
    [anon_sym_AT_BANG] = ACTIONS(508),
    [anon_sym_AT_LPAREN] = ACTIONS(508),
    [anon_sym_ATa_COLON] = ACTIONS(508),
    [anon_sym_ATb_COLON] = ACTIONS(508),
    [anon_sym_ATB_COLON] = ACTIONS(508),
    [anon_sym_ATe_COLON] = ACTIONS(508),
    [anon_sym_ATF_COLON] = ACTIONS(508),
    [anon_sym_ATi_COLON] = ACTIONS(508),
    [anon_sym_ATk_COLON] = ACTIONS(508),
    [anon_sym_ATo_COLON] = ACTIONS(508),
    [anon_sym_ATr_COLON] = ACTIONS(508),
    [anon_sym_ATf_COLON] = ACTIONS(508),
    [anon_sym_ATs_COLON] = ACTIONS(508),
    [anon_sym_ATx_COLON] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_PIPE_DOT] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(510),
    [anon_sym_GT_GT] = ACTIONS(508),
    [sym_html_redirect_operator] = ACTIONS(510),
    [sym_html_append_operator] = ACTIONS(508),
    [anon_sym_BQUOTE] = ACTIONS(508),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(508),
    [anon_sym_CR] = ACTIONS(508),
    [anon_sym_SEMI] = ACTIONS(508),
    [sym_file_descriptor] = ACTIONS(508),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_TILDE] = ACTIONS(512),
    [anon_sym_PIPE] = ACTIONS(514),
    [anon_sym_PIPEH] = ACTIONS(512),
    [anon_sym_PIPET] = ACTIONS(512),
    [anon_sym_AT_AT] = ACTIONS(514),
    [anon_sym_AT_ATdbt] = ACTIONS(514),
    [anon_sym_AT_ATdbta] = ACTIONS(512),
    [anon_sym_AT_ATdbtb] = ACTIONS(512),
    [anon_sym_AT_ATdbts] = ACTIONS(512),
    [anon_sym_AT_AT_DOT] = ACTIONS(512),
    [anon_sym_AT_AT_EQ] = ACTIONS(512),
    [anon_sym_AT_ATk] = ACTIONS(512),
    [anon_sym_AT_ATt] = ACTIONS(512),
    [anon_sym_AT_ATb] = ACTIONS(512),
    [anon_sym_AT_ATi] = ACTIONS(514),
    [anon_sym_AT_ATiS] = ACTIONS(512),
    [anon_sym_AT_ATf] = ACTIONS(512),
    [anon_sym_AT_ATs_COLON] = ACTIONS(512),
    [anon_sym_AT_ATc_COLON] = ACTIONS(512),
    [anon_sym_AT] = ACTIONS(514),
    [anon_sym_AT_BANG] = ACTIONS(512),
    [anon_sym_AT_LPAREN] = ACTIONS(512),
    [anon_sym_ATa_COLON] = ACTIONS(512),
    [anon_sym_ATb_COLON] = ACTIONS(512),
    [anon_sym_ATB_COLON] = ACTIONS(512),
    [anon_sym_ATe_COLON] = ACTIONS(512),
    [anon_sym_ATF_COLON] = ACTIONS(512),
    [anon_sym_ATi_COLON] = ACTIONS(512),
    [anon_sym_ATk_COLON] = ACTIONS(512),
    [anon_sym_ATo_COLON] = ACTIONS(512),
    [anon_sym_ATr_COLON] = ACTIONS(512),
    [anon_sym_ATf_COLON] = ACTIONS(512),
    [anon_sym_ATs_COLON] = ACTIONS(512),
    [anon_sym_ATx_COLON] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PIPE_DOT] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(514),
    [anon_sym_GT_GT] = ACTIONS(512),
    [sym_html_redirect_operator] = ACTIONS(514),
    [sym_html_append_operator] = ACTIONS(512),
    [anon_sym_BQUOTE] = ACTIONS(512),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(512),
    [anon_sym_CR] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [sym_file_descriptor] = ACTIONS(512),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(516),
    [anon_sym_TILDE] = ACTIONS(516),
    [anon_sym_PIPE] = ACTIONS(518),
    [anon_sym_PIPEH] = ACTIONS(516),
    [anon_sym_PIPET] = ACTIONS(516),
    [anon_sym_AT_AT] = ACTIONS(518),
    [anon_sym_AT_ATdbt] = ACTIONS(518),
    [anon_sym_AT_ATdbta] = ACTIONS(516),
    [anon_sym_AT_ATdbtb] = ACTIONS(516),
    [anon_sym_AT_ATdbts] = ACTIONS(516),
    [anon_sym_AT_AT_DOT] = ACTIONS(516),
    [anon_sym_AT_AT_EQ] = ACTIONS(516),
    [anon_sym_AT_ATk] = ACTIONS(516),
    [anon_sym_AT_ATt] = ACTIONS(516),
    [anon_sym_AT_ATb] = ACTIONS(516),
    [anon_sym_AT_ATi] = ACTIONS(518),
    [anon_sym_AT_ATiS] = ACTIONS(516),
    [anon_sym_AT_ATf] = ACTIONS(516),
    [anon_sym_AT_ATs_COLON] = ACTIONS(516),
    [anon_sym_AT_ATc_COLON] = ACTIONS(516),
    [anon_sym_AT] = ACTIONS(518),
    [anon_sym_AT_BANG] = ACTIONS(516),
    [anon_sym_AT_LPAREN] = ACTIONS(516),
    [anon_sym_ATa_COLON] = ACTIONS(516),
    [anon_sym_ATb_COLON] = ACTIONS(516),
    [anon_sym_ATB_COLON] = ACTIONS(516),
    [anon_sym_ATe_COLON] = ACTIONS(516),
    [anon_sym_ATF_COLON] = ACTIONS(516),
    [anon_sym_ATi_COLON] = ACTIONS(516),
    [anon_sym_ATk_COLON] = ACTIONS(516),
    [anon_sym_ATo_COLON] = ACTIONS(516),
    [anon_sym_ATr_COLON] = ACTIONS(516),
    [anon_sym_ATf_COLON] = ACTIONS(516),
    [anon_sym_ATs_COLON] = ACTIONS(516),
    [anon_sym_ATx_COLON] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_PIPE_DOT] = ACTIONS(516),
    [anon_sym_GT] = ACTIONS(518),
    [anon_sym_GT_GT] = ACTIONS(516),
    [sym_html_redirect_operator] = ACTIONS(518),
    [sym_html_append_operator] = ACTIONS(516),
    [anon_sym_BQUOTE] = ACTIONS(516),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(516),
    [anon_sym_CR] = ACTIONS(516),
    [anon_sym_SEMI] = ACTIONS(516),
    [sym_file_descriptor] = ACTIONS(516),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [anon_sym_TILDE] = ACTIONS(520),
    [anon_sym_PIPE] = ACTIONS(522),
    [anon_sym_PIPEH] = ACTIONS(520),
    [anon_sym_PIPET] = ACTIONS(520),
    [anon_sym_AT_AT] = ACTIONS(522),
    [anon_sym_AT_ATdbt] = ACTIONS(522),
    [anon_sym_AT_ATdbta] = ACTIONS(520),
    [anon_sym_AT_ATdbtb] = ACTIONS(520),
    [anon_sym_AT_ATdbts] = ACTIONS(520),
    [anon_sym_AT_AT_DOT] = ACTIONS(520),
    [anon_sym_AT_AT_EQ] = ACTIONS(520),
    [anon_sym_AT_ATk] = ACTIONS(520),
    [anon_sym_AT_ATt] = ACTIONS(520),
    [anon_sym_AT_ATb] = ACTIONS(520),
    [anon_sym_AT_ATi] = ACTIONS(522),
    [anon_sym_AT_ATiS] = ACTIONS(520),
    [anon_sym_AT_ATf] = ACTIONS(520),
    [anon_sym_AT_ATs_COLON] = ACTIONS(520),
    [anon_sym_AT_ATc_COLON] = ACTIONS(520),
    [anon_sym_AT] = ACTIONS(522),
    [anon_sym_AT_BANG] = ACTIONS(520),
    [anon_sym_AT_LPAREN] = ACTIONS(520),
    [anon_sym_ATa_COLON] = ACTIONS(520),
    [anon_sym_ATb_COLON] = ACTIONS(520),
    [anon_sym_ATB_COLON] = ACTIONS(520),
    [anon_sym_ATe_COLON] = ACTIONS(520),
    [anon_sym_ATF_COLON] = ACTIONS(520),
    [anon_sym_ATi_COLON] = ACTIONS(520),
    [anon_sym_ATk_COLON] = ACTIONS(520),
    [anon_sym_ATo_COLON] = ACTIONS(520),
    [anon_sym_ATr_COLON] = ACTIONS(520),
    [anon_sym_ATf_COLON] = ACTIONS(520),
    [anon_sym_ATs_COLON] = ACTIONS(520),
    [anon_sym_ATx_COLON] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_PIPE_DOT] = ACTIONS(520),
    [anon_sym_GT] = ACTIONS(522),
    [anon_sym_GT_GT] = ACTIONS(520),
    [sym_html_redirect_operator] = ACTIONS(522),
    [sym_html_append_operator] = ACTIONS(520),
    [anon_sym_BQUOTE] = ACTIONS(520),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(520),
    [anon_sym_CR] = ACTIONS(520),
    [anon_sym_SEMI] = ACTIONS(520),
    [sym_file_descriptor] = ACTIONS(520),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(526),
    [anon_sym_PIPEH] = ACTIONS(524),
    [anon_sym_PIPET] = ACTIONS(524),
    [anon_sym_AT_AT] = ACTIONS(526),
    [anon_sym_AT_ATdbt] = ACTIONS(526),
    [anon_sym_AT_ATdbta] = ACTIONS(524),
    [anon_sym_AT_ATdbtb] = ACTIONS(524),
    [anon_sym_AT_ATdbts] = ACTIONS(524),
    [anon_sym_AT_AT_DOT] = ACTIONS(524),
    [anon_sym_AT_AT_EQ] = ACTIONS(524),
    [anon_sym_AT_ATk] = ACTIONS(524),
    [anon_sym_AT_ATt] = ACTIONS(524),
    [anon_sym_AT_ATb] = ACTIONS(524),
    [anon_sym_AT_ATi] = ACTIONS(526),
    [anon_sym_AT_ATiS] = ACTIONS(524),
    [anon_sym_AT_ATf] = ACTIONS(524),
    [anon_sym_AT_ATs_COLON] = ACTIONS(524),
    [anon_sym_AT_ATc_COLON] = ACTIONS(524),
    [anon_sym_AT] = ACTIONS(526),
    [anon_sym_AT_BANG] = ACTIONS(524),
    [anon_sym_AT_LPAREN] = ACTIONS(524),
    [anon_sym_ATa_COLON] = ACTIONS(524),
    [anon_sym_ATb_COLON] = ACTIONS(524),
    [anon_sym_ATB_COLON] = ACTIONS(524),
    [anon_sym_ATe_COLON] = ACTIONS(524),
    [anon_sym_ATF_COLON] = ACTIONS(524),
    [anon_sym_ATi_COLON] = ACTIONS(524),
    [anon_sym_ATk_COLON] = ACTIONS(524),
    [anon_sym_ATo_COLON] = ACTIONS(524),
    [anon_sym_ATr_COLON] = ACTIONS(524),
    [anon_sym_ATf_COLON] = ACTIONS(524),
    [anon_sym_ATs_COLON] = ACTIONS(524),
    [anon_sym_ATx_COLON] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_PIPE_DOT] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(524),
    [sym_html_redirect_operator] = ACTIONS(526),
    [sym_html_append_operator] = ACTIONS(524),
    [anon_sym_BQUOTE] = ACTIONS(524),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(524),
    [anon_sym_CR] = ACTIONS(524),
    [anon_sym_SEMI] = ACTIONS(524),
    [sym_file_descriptor] = ACTIONS(524),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_PIPE] = ACTIONS(530),
    [anon_sym_PIPEH] = ACTIONS(528),
    [anon_sym_PIPET] = ACTIONS(528),
    [anon_sym_AT_AT] = ACTIONS(530),
    [anon_sym_AT_ATdbt] = ACTIONS(530),
    [anon_sym_AT_ATdbta] = ACTIONS(528),
    [anon_sym_AT_ATdbtb] = ACTIONS(528),
    [anon_sym_AT_ATdbts] = ACTIONS(528),
    [anon_sym_AT_AT_DOT] = ACTIONS(528),
    [anon_sym_AT_AT_EQ] = ACTIONS(528),
    [anon_sym_AT_ATk] = ACTIONS(528),
    [anon_sym_AT_ATt] = ACTIONS(528),
    [anon_sym_AT_ATb] = ACTIONS(528),
    [anon_sym_AT_ATi] = ACTIONS(530),
    [anon_sym_AT_ATiS] = ACTIONS(528),
    [anon_sym_AT_ATf] = ACTIONS(528),
    [anon_sym_AT_ATs_COLON] = ACTIONS(528),
    [anon_sym_AT_ATc_COLON] = ACTIONS(528),
    [anon_sym_AT] = ACTIONS(530),
    [anon_sym_AT_BANG] = ACTIONS(528),
    [anon_sym_AT_LPAREN] = ACTIONS(528),
    [anon_sym_ATa_COLON] = ACTIONS(528),
    [anon_sym_ATb_COLON] = ACTIONS(528),
    [anon_sym_ATB_COLON] = ACTIONS(528),
    [anon_sym_ATe_COLON] = ACTIONS(528),
    [anon_sym_ATF_COLON] = ACTIONS(528),
    [anon_sym_ATi_COLON] = ACTIONS(528),
    [anon_sym_ATk_COLON] = ACTIONS(528),
    [anon_sym_ATo_COLON] = ACTIONS(528),
    [anon_sym_ATr_COLON] = ACTIONS(528),
    [anon_sym_ATf_COLON] = ACTIONS(528),
    [anon_sym_ATs_COLON] = ACTIONS(528),
    [anon_sym_ATx_COLON] = ACTIONS(528),
    [anon_sym_RPAREN] = ACTIONS(528),
    [anon_sym_PIPE_DOT] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(530),
    [anon_sym_GT_GT] = ACTIONS(528),
    [sym_html_redirect_operator] = ACTIONS(530),
    [sym_html_append_operator] = ACTIONS(528),
    [anon_sym_BQUOTE] = ACTIONS(528),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(528),
    [anon_sym_CR] = ACTIONS(528),
    [anon_sym_SEMI] = ACTIONS(528),
    [sym_file_descriptor] = ACTIONS(528),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_TILDE] = ACTIONS(532),
    [anon_sym_PIPE] = ACTIONS(534),
    [anon_sym_PIPEH] = ACTIONS(532),
    [anon_sym_PIPET] = ACTIONS(532),
    [anon_sym_AT_AT] = ACTIONS(534),
    [anon_sym_AT_ATdbt] = ACTIONS(534),
    [anon_sym_AT_ATdbta] = ACTIONS(532),
    [anon_sym_AT_ATdbtb] = ACTIONS(532),
    [anon_sym_AT_ATdbts] = ACTIONS(532),
    [anon_sym_AT_AT_DOT] = ACTIONS(532),
    [anon_sym_AT_AT_EQ] = ACTIONS(532),
    [anon_sym_AT_ATk] = ACTIONS(532),
    [anon_sym_AT_ATt] = ACTIONS(532),
    [anon_sym_AT_ATb] = ACTIONS(532),
    [anon_sym_AT_ATi] = ACTIONS(534),
    [anon_sym_AT_ATiS] = ACTIONS(532),
    [anon_sym_AT_ATf] = ACTIONS(532),
    [anon_sym_AT_ATs_COLON] = ACTIONS(532),
    [anon_sym_AT_ATc_COLON] = ACTIONS(532),
    [anon_sym_AT] = ACTIONS(534),
    [anon_sym_AT_BANG] = ACTIONS(532),
    [anon_sym_AT_LPAREN] = ACTIONS(532),
    [anon_sym_ATa_COLON] = ACTIONS(532),
    [anon_sym_ATb_COLON] = ACTIONS(532),
    [anon_sym_ATB_COLON] = ACTIONS(532),
    [anon_sym_ATe_COLON] = ACTIONS(532),
    [anon_sym_ATF_COLON] = ACTIONS(532),
    [anon_sym_ATi_COLON] = ACTIONS(532),
    [anon_sym_ATk_COLON] = ACTIONS(532),
    [anon_sym_ATo_COLON] = ACTIONS(532),
    [anon_sym_ATr_COLON] = ACTIONS(532),
    [anon_sym_ATf_COLON] = ACTIONS(532),
    [anon_sym_ATs_COLON] = ACTIONS(532),
    [anon_sym_ATx_COLON] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(532),
    [anon_sym_PIPE_DOT] = ACTIONS(532),
    [anon_sym_GT] = ACTIONS(534),
    [anon_sym_GT_GT] = ACTIONS(532),
    [sym_html_redirect_operator] = ACTIONS(534),
    [sym_html_append_operator] = ACTIONS(532),
    [anon_sym_BQUOTE] = ACTIONS(532),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(532),
    [anon_sym_CR] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [sym_file_descriptor] = ACTIONS(532),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_TILDE] = ACTIONS(536),
    [anon_sym_PIPE] = ACTIONS(538),
    [anon_sym_PIPEH] = ACTIONS(536),
    [anon_sym_PIPET] = ACTIONS(536),
    [anon_sym_AT_AT] = ACTIONS(538),
    [anon_sym_AT_ATdbt] = ACTIONS(538),
    [anon_sym_AT_ATdbta] = ACTIONS(536),
    [anon_sym_AT_ATdbtb] = ACTIONS(536),
    [anon_sym_AT_ATdbts] = ACTIONS(536),
    [anon_sym_AT_AT_DOT] = ACTIONS(536),
    [anon_sym_AT_AT_EQ] = ACTIONS(536),
    [anon_sym_AT_ATk] = ACTIONS(536),
    [anon_sym_AT_ATt] = ACTIONS(536),
    [anon_sym_AT_ATb] = ACTIONS(536),
    [anon_sym_AT_ATi] = ACTIONS(538),
    [anon_sym_AT_ATiS] = ACTIONS(536),
    [anon_sym_AT_ATf] = ACTIONS(536),
    [anon_sym_AT_ATs_COLON] = ACTIONS(536),
    [anon_sym_AT_ATc_COLON] = ACTIONS(536),
    [anon_sym_AT] = ACTIONS(538),
    [anon_sym_AT_BANG] = ACTIONS(536),
    [anon_sym_AT_LPAREN] = ACTIONS(536),
    [anon_sym_ATa_COLON] = ACTIONS(536),
    [anon_sym_ATb_COLON] = ACTIONS(536),
    [anon_sym_ATB_COLON] = ACTIONS(536),
    [anon_sym_ATe_COLON] = ACTIONS(536),
    [anon_sym_ATF_COLON] = ACTIONS(536),
    [anon_sym_ATi_COLON] = ACTIONS(536),
    [anon_sym_ATk_COLON] = ACTIONS(536),
    [anon_sym_ATo_COLON] = ACTIONS(536),
    [anon_sym_ATr_COLON] = ACTIONS(536),
    [anon_sym_ATf_COLON] = ACTIONS(536),
    [anon_sym_ATs_COLON] = ACTIONS(536),
    [anon_sym_ATx_COLON] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(536),
    [anon_sym_PIPE_DOT] = ACTIONS(536),
    [anon_sym_GT] = ACTIONS(538),
    [anon_sym_GT_GT] = ACTIONS(536),
    [sym_html_redirect_operator] = ACTIONS(538),
    [sym_html_append_operator] = ACTIONS(536),
    [anon_sym_BQUOTE] = ACTIONS(536),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(536),
    [anon_sym_CR] = ACTIONS(536),
    [anon_sym_SEMI] = ACTIONS(536),
    [sym_file_descriptor] = ACTIONS(536),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_TILDE] = ACTIONS(540),
    [anon_sym_PIPE] = ACTIONS(542),
    [anon_sym_PIPEH] = ACTIONS(540),
    [anon_sym_PIPET] = ACTIONS(540),
    [anon_sym_AT_AT] = ACTIONS(542),
    [anon_sym_AT_ATdbt] = ACTIONS(542),
    [anon_sym_AT_ATdbta] = ACTIONS(540),
    [anon_sym_AT_ATdbtb] = ACTIONS(540),
    [anon_sym_AT_ATdbts] = ACTIONS(540),
    [anon_sym_AT_AT_DOT] = ACTIONS(540),
    [anon_sym_AT_AT_EQ] = ACTIONS(540),
    [anon_sym_AT_ATk] = ACTIONS(540),
    [anon_sym_AT_ATt] = ACTIONS(540),
    [anon_sym_AT_ATb] = ACTIONS(540),
    [anon_sym_AT_ATi] = ACTIONS(542),
    [anon_sym_AT_ATiS] = ACTIONS(540),
    [anon_sym_AT_ATf] = ACTIONS(540),
    [anon_sym_AT_ATs_COLON] = ACTIONS(540),
    [anon_sym_AT_ATc_COLON] = ACTIONS(540),
    [anon_sym_AT] = ACTIONS(542),
    [anon_sym_AT_BANG] = ACTIONS(540),
    [anon_sym_AT_LPAREN] = ACTIONS(540),
    [anon_sym_ATa_COLON] = ACTIONS(540),
    [anon_sym_ATb_COLON] = ACTIONS(540),
    [anon_sym_ATB_COLON] = ACTIONS(540),
    [anon_sym_ATe_COLON] = ACTIONS(540),
    [anon_sym_ATF_COLON] = ACTIONS(540),
    [anon_sym_ATi_COLON] = ACTIONS(540),
    [anon_sym_ATk_COLON] = ACTIONS(540),
    [anon_sym_ATo_COLON] = ACTIONS(540),
    [anon_sym_ATr_COLON] = ACTIONS(540),
    [anon_sym_ATf_COLON] = ACTIONS(540),
    [anon_sym_ATs_COLON] = ACTIONS(540),
    [anon_sym_ATx_COLON] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_PIPE_DOT] = ACTIONS(540),
    [anon_sym_GT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(540),
    [sym_html_redirect_operator] = ACTIONS(542),
    [sym_html_append_operator] = ACTIONS(540),
    [anon_sym_BQUOTE] = ACTIONS(540),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_CR] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(540),
    [sym_file_descriptor] = ACTIONS(540),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_TILDE] = ACTIONS(544),
    [anon_sym_PIPE] = ACTIONS(546),
    [anon_sym_PIPEH] = ACTIONS(544),
    [anon_sym_PIPET] = ACTIONS(544),
    [anon_sym_AT_AT] = ACTIONS(546),
    [anon_sym_AT_ATdbt] = ACTIONS(546),
    [anon_sym_AT_ATdbta] = ACTIONS(544),
    [anon_sym_AT_ATdbtb] = ACTIONS(544),
    [anon_sym_AT_ATdbts] = ACTIONS(544),
    [anon_sym_AT_AT_DOT] = ACTIONS(544),
    [anon_sym_AT_AT_EQ] = ACTIONS(544),
    [anon_sym_AT_ATk] = ACTIONS(544),
    [anon_sym_AT_ATt] = ACTIONS(544),
    [anon_sym_AT_ATb] = ACTIONS(544),
    [anon_sym_AT_ATi] = ACTIONS(546),
    [anon_sym_AT_ATiS] = ACTIONS(544),
    [anon_sym_AT_ATf] = ACTIONS(544),
    [anon_sym_AT_ATs_COLON] = ACTIONS(544),
    [anon_sym_AT_ATc_COLON] = ACTIONS(544),
    [anon_sym_AT] = ACTIONS(546),
    [anon_sym_AT_BANG] = ACTIONS(544),
    [anon_sym_AT_LPAREN] = ACTIONS(544),
    [anon_sym_ATa_COLON] = ACTIONS(544),
    [anon_sym_ATb_COLON] = ACTIONS(544),
    [anon_sym_ATB_COLON] = ACTIONS(544),
    [anon_sym_ATe_COLON] = ACTIONS(544),
    [anon_sym_ATF_COLON] = ACTIONS(544),
    [anon_sym_ATi_COLON] = ACTIONS(544),
    [anon_sym_ATk_COLON] = ACTIONS(544),
    [anon_sym_ATo_COLON] = ACTIONS(544),
    [anon_sym_ATr_COLON] = ACTIONS(544),
    [anon_sym_ATf_COLON] = ACTIONS(544),
    [anon_sym_ATs_COLON] = ACTIONS(544),
    [anon_sym_ATx_COLON] = ACTIONS(544),
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_PIPE_DOT] = ACTIONS(544),
    [anon_sym_GT] = ACTIONS(546),
    [anon_sym_GT_GT] = ACTIONS(544),
    [sym_html_redirect_operator] = ACTIONS(546),
    [sym_html_append_operator] = ACTIONS(544),
    [anon_sym_BQUOTE] = ACTIONS(544),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(544),
    [anon_sym_CR] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
    [sym_file_descriptor] = ACTIONS(544),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(548),
    [anon_sym_TILDE] = ACTIONS(548),
    [anon_sym_PIPE] = ACTIONS(550),
    [anon_sym_PIPEH] = ACTIONS(548),
    [anon_sym_PIPET] = ACTIONS(548),
    [anon_sym_AT_AT] = ACTIONS(550),
    [anon_sym_AT_ATdbt] = ACTIONS(550),
    [anon_sym_AT_ATdbta] = ACTIONS(548),
    [anon_sym_AT_ATdbtb] = ACTIONS(548),
    [anon_sym_AT_ATdbts] = ACTIONS(548),
    [anon_sym_AT_AT_DOT] = ACTIONS(548),
    [anon_sym_AT_AT_EQ] = ACTIONS(548),
    [anon_sym_AT_ATk] = ACTIONS(548),
    [anon_sym_AT_ATt] = ACTIONS(548),
    [anon_sym_AT_ATb] = ACTIONS(548),
    [anon_sym_AT_ATi] = ACTIONS(550),
    [anon_sym_AT_ATiS] = ACTIONS(548),
    [anon_sym_AT_ATf] = ACTIONS(548),
    [anon_sym_AT_ATs_COLON] = ACTIONS(548),
    [anon_sym_AT_ATc_COLON] = ACTIONS(548),
    [anon_sym_AT] = ACTIONS(550),
    [anon_sym_AT_BANG] = ACTIONS(548),
    [anon_sym_AT_LPAREN] = ACTIONS(548),
    [anon_sym_ATa_COLON] = ACTIONS(548),
    [anon_sym_ATb_COLON] = ACTIONS(548),
    [anon_sym_ATB_COLON] = ACTIONS(548),
    [anon_sym_ATe_COLON] = ACTIONS(548),
    [anon_sym_ATF_COLON] = ACTIONS(548),
    [anon_sym_ATi_COLON] = ACTIONS(548),
    [anon_sym_ATk_COLON] = ACTIONS(548),
    [anon_sym_ATo_COLON] = ACTIONS(548),
    [anon_sym_ATr_COLON] = ACTIONS(548),
    [anon_sym_ATf_COLON] = ACTIONS(548),
    [anon_sym_ATs_COLON] = ACTIONS(548),
    [anon_sym_ATx_COLON] = ACTIONS(548),
    [anon_sym_RPAREN] = ACTIONS(548),
    [anon_sym_PIPE_DOT] = ACTIONS(548),
    [anon_sym_GT] = ACTIONS(550),
    [anon_sym_GT_GT] = ACTIONS(548),
    [sym_html_redirect_operator] = ACTIONS(550),
    [sym_html_append_operator] = ACTIONS(548),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(548),
    [anon_sym_CR] = ACTIONS(548),
    [anon_sym_SEMI] = ACTIONS(548),
    [sym_file_descriptor] = ACTIONS(548),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(552),
    [anon_sym_TILDE] = ACTIONS(552),
    [anon_sym_PIPE] = ACTIONS(554),
    [anon_sym_PIPEH] = ACTIONS(552),
    [anon_sym_PIPET] = ACTIONS(552),
    [anon_sym_AT_AT] = ACTIONS(554),
    [anon_sym_AT_ATdbt] = ACTIONS(554),
    [anon_sym_AT_ATdbta] = ACTIONS(552),
    [anon_sym_AT_ATdbtb] = ACTIONS(552),
    [anon_sym_AT_ATdbts] = ACTIONS(552),
    [anon_sym_AT_AT_DOT] = ACTIONS(552),
    [anon_sym_AT_AT_EQ] = ACTIONS(552),
    [anon_sym_AT_ATk] = ACTIONS(552),
    [anon_sym_AT_ATt] = ACTIONS(552),
    [anon_sym_AT_ATb] = ACTIONS(552),
    [anon_sym_AT_ATi] = ACTIONS(554),
    [anon_sym_AT_ATiS] = ACTIONS(552),
    [anon_sym_AT_ATf] = ACTIONS(552),
    [anon_sym_AT_ATs_COLON] = ACTIONS(552),
    [anon_sym_AT_ATc_COLON] = ACTIONS(552),
    [anon_sym_AT] = ACTIONS(554),
    [anon_sym_AT_BANG] = ACTIONS(552),
    [anon_sym_AT_LPAREN] = ACTIONS(552),
    [anon_sym_ATa_COLON] = ACTIONS(552),
    [anon_sym_ATb_COLON] = ACTIONS(552),
    [anon_sym_ATB_COLON] = ACTIONS(552),
    [anon_sym_ATe_COLON] = ACTIONS(552),
    [anon_sym_ATF_COLON] = ACTIONS(552),
    [anon_sym_ATi_COLON] = ACTIONS(552),
    [anon_sym_ATk_COLON] = ACTIONS(552),
    [anon_sym_ATo_COLON] = ACTIONS(552),
    [anon_sym_ATr_COLON] = ACTIONS(552),
    [anon_sym_ATf_COLON] = ACTIONS(552),
    [anon_sym_ATs_COLON] = ACTIONS(552),
    [anon_sym_ATx_COLON] = ACTIONS(552),
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_PIPE_DOT] = ACTIONS(552),
    [anon_sym_GT] = ACTIONS(554),
    [anon_sym_GT_GT] = ACTIONS(552),
    [sym_html_redirect_operator] = ACTIONS(554),
    [sym_html_append_operator] = ACTIONS(552),
    [anon_sym_BQUOTE] = ACTIONS(552),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(552),
    [anon_sym_CR] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(552),
    [sym_file_descriptor] = ACTIONS(552),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(556),
    [anon_sym_TILDE] = ACTIONS(556),
    [anon_sym_PIPE] = ACTIONS(558),
    [anon_sym_PIPEH] = ACTIONS(556),
    [anon_sym_PIPET] = ACTIONS(556),
    [anon_sym_AT_AT] = ACTIONS(558),
    [anon_sym_AT_ATdbt] = ACTIONS(558),
    [anon_sym_AT_ATdbta] = ACTIONS(556),
    [anon_sym_AT_ATdbtb] = ACTIONS(556),
    [anon_sym_AT_ATdbts] = ACTIONS(556),
    [anon_sym_AT_AT_DOT] = ACTIONS(556),
    [anon_sym_AT_AT_EQ] = ACTIONS(556),
    [anon_sym_AT_ATk] = ACTIONS(556),
    [anon_sym_AT_ATt] = ACTIONS(556),
    [anon_sym_AT_ATb] = ACTIONS(556),
    [anon_sym_AT_ATi] = ACTIONS(558),
    [anon_sym_AT_ATiS] = ACTIONS(556),
    [anon_sym_AT_ATf] = ACTIONS(556),
    [anon_sym_AT_ATs_COLON] = ACTIONS(556),
    [anon_sym_AT_ATc_COLON] = ACTIONS(556),
    [anon_sym_AT] = ACTIONS(558),
    [anon_sym_AT_BANG] = ACTIONS(556),
    [anon_sym_AT_LPAREN] = ACTIONS(556),
    [anon_sym_ATa_COLON] = ACTIONS(556),
    [anon_sym_ATb_COLON] = ACTIONS(556),
    [anon_sym_ATB_COLON] = ACTIONS(556),
    [anon_sym_ATe_COLON] = ACTIONS(556),
    [anon_sym_ATF_COLON] = ACTIONS(556),
    [anon_sym_ATi_COLON] = ACTIONS(556),
    [anon_sym_ATk_COLON] = ACTIONS(556),
    [anon_sym_ATo_COLON] = ACTIONS(556),
    [anon_sym_ATr_COLON] = ACTIONS(556),
    [anon_sym_ATf_COLON] = ACTIONS(556),
    [anon_sym_ATs_COLON] = ACTIONS(556),
    [anon_sym_ATx_COLON] = ACTIONS(556),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_PIPE_DOT] = ACTIONS(556),
    [anon_sym_GT] = ACTIONS(558),
    [anon_sym_GT_GT] = ACTIONS(556),
    [sym_html_redirect_operator] = ACTIONS(558),
    [sym_html_append_operator] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(556),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(556),
    [anon_sym_CR] = ACTIONS(556),
    [anon_sym_SEMI] = ACTIONS(556),
    [sym_file_descriptor] = ACTIONS(556),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [anon_sym_TILDE] = ACTIONS(560),
    [anon_sym_PIPE] = ACTIONS(562),
    [anon_sym_PIPEH] = ACTIONS(560),
    [anon_sym_PIPET] = ACTIONS(560),
    [anon_sym_AT_AT] = ACTIONS(562),
    [anon_sym_AT_ATdbt] = ACTIONS(562),
    [anon_sym_AT_ATdbta] = ACTIONS(560),
    [anon_sym_AT_ATdbtb] = ACTIONS(560),
    [anon_sym_AT_ATdbts] = ACTIONS(560),
    [anon_sym_AT_AT_DOT] = ACTIONS(560),
    [anon_sym_AT_AT_EQ] = ACTIONS(560),
    [anon_sym_AT_ATk] = ACTIONS(560),
    [anon_sym_AT_ATt] = ACTIONS(560),
    [anon_sym_AT_ATb] = ACTIONS(560),
    [anon_sym_AT_ATi] = ACTIONS(562),
    [anon_sym_AT_ATiS] = ACTIONS(560),
    [anon_sym_AT_ATf] = ACTIONS(560),
    [anon_sym_AT_ATs_COLON] = ACTIONS(560),
    [anon_sym_AT_ATc_COLON] = ACTIONS(560),
    [anon_sym_AT] = ACTIONS(562),
    [anon_sym_AT_BANG] = ACTIONS(560),
    [anon_sym_AT_LPAREN] = ACTIONS(560),
    [anon_sym_ATa_COLON] = ACTIONS(560),
    [anon_sym_ATb_COLON] = ACTIONS(560),
    [anon_sym_ATB_COLON] = ACTIONS(560),
    [anon_sym_ATe_COLON] = ACTIONS(560),
    [anon_sym_ATF_COLON] = ACTIONS(560),
    [anon_sym_ATi_COLON] = ACTIONS(560),
    [anon_sym_ATk_COLON] = ACTIONS(560),
    [anon_sym_ATo_COLON] = ACTIONS(560),
    [anon_sym_ATr_COLON] = ACTIONS(560),
    [anon_sym_ATf_COLON] = ACTIONS(560),
    [anon_sym_ATs_COLON] = ACTIONS(560),
    [anon_sym_ATx_COLON] = ACTIONS(560),
    [anon_sym_RPAREN] = ACTIONS(560),
    [anon_sym_PIPE_DOT] = ACTIONS(560),
    [anon_sym_GT] = ACTIONS(562),
    [anon_sym_GT_GT] = ACTIONS(560),
    [sym_html_redirect_operator] = ACTIONS(562),
    [sym_html_append_operator] = ACTIONS(560),
    [anon_sym_BQUOTE] = ACTIONS(560),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(560),
    [anon_sym_CR] = ACTIONS(560),
    [anon_sym_SEMI] = ACTIONS(560),
    [sym_file_descriptor] = ACTIONS(560),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [anon_sym_TILDE] = ACTIONS(564),
    [anon_sym_PIPE] = ACTIONS(566),
    [anon_sym_PIPEH] = ACTIONS(564),
    [anon_sym_PIPET] = ACTIONS(564),
    [anon_sym_AT_AT] = ACTIONS(566),
    [anon_sym_AT_ATdbt] = ACTIONS(566),
    [anon_sym_AT_ATdbta] = ACTIONS(564),
    [anon_sym_AT_ATdbtb] = ACTIONS(564),
    [anon_sym_AT_ATdbts] = ACTIONS(564),
    [anon_sym_AT_AT_DOT] = ACTIONS(564),
    [anon_sym_AT_AT_EQ] = ACTIONS(564),
    [anon_sym_AT_ATk] = ACTIONS(564),
    [anon_sym_AT_ATt] = ACTIONS(564),
    [anon_sym_AT_ATb] = ACTIONS(564),
    [anon_sym_AT_ATi] = ACTIONS(566),
    [anon_sym_AT_ATiS] = ACTIONS(564),
    [anon_sym_AT_ATf] = ACTIONS(564),
    [anon_sym_AT_ATs_COLON] = ACTIONS(564),
    [anon_sym_AT_ATc_COLON] = ACTIONS(564),
    [anon_sym_AT] = ACTIONS(566),
    [anon_sym_AT_BANG] = ACTIONS(564),
    [anon_sym_AT_LPAREN] = ACTIONS(564),
    [anon_sym_ATa_COLON] = ACTIONS(564),
    [anon_sym_ATb_COLON] = ACTIONS(564),
    [anon_sym_ATB_COLON] = ACTIONS(564),
    [anon_sym_ATe_COLON] = ACTIONS(564),
    [anon_sym_ATF_COLON] = ACTIONS(564),
    [anon_sym_ATi_COLON] = ACTIONS(564),
    [anon_sym_ATk_COLON] = ACTIONS(564),
    [anon_sym_ATo_COLON] = ACTIONS(564),
    [anon_sym_ATr_COLON] = ACTIONS(564),
    [anon_sym_ATf_COLON] = ACTIONS(564),
    [anon_sym_ATs_COLON] = ACTIONS(564),
    [anon_sym_ATx_COLON] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [anon_sym_PIPE_DOT] = ACTIONS(564),
    [anon_sym_GT] = ACTIONS(566),
    [anon_sym_GT_GT] = ACTIONS(564),
    [sym_html_redirect_operator] = ACTIONS(566),
    [sym_html_append_operator] = ACTIONS(564),
    [anon_sym_BQUOTE] = ACTIONS(564),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_CR] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(564),
    [sym_file_descriptor] = ACTIONS(564),
  },
  [156] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_PIPEH] = ACTIONS(268),
    [anon_sym_PIPET] = ACTIONS(268),
    [anon_sym_AT_AT] = ACTIONS(270),
    [anon_sym_AT_ATdbt] = ACTIONS(270),
    [anon_sym_AT_ATdbta] = ACTIONS(268),
    [anon_sym_AT_ATdbtb] = ACTIONS(268),
    [anon_sym_AT_ATdbts] = ACTIONS(268),
    [anon_sym_AT_AT_DOT] = ACTIONS(268),
    [anon_sym_AT_AT_EQ] = ACTIONS(268),
    [anon_sym_AT_ATk] = ACTIONS(268),
    [anon_sym_AT_ATt] = ACTIONS(268),
    [anon_sym_AT_ATb] = ACTIONS(268),
    [anon_sym_AT_ATi] = ACTIONS(270),
    [anon_sym_AT_ATiS] = ACTIONS(268),
    [anon_sym_AT_ATf] = ACTIONS(268),
    [anon_sym_AT_ATs_COLON] = ACTIONS(268),
    [anon_sym_AT_ATc_COLON] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_AT_BANG] = ACTIONS(268),
    [anon_sym_AT_LPAREN] = ACTIONS(268),
    [anon_sym_ATa_COLON] = ACTIONS(268),
    [anon_sym_ATb_COLON] = ACTIONS(268),
    [anon_sym_ATB_COLON] = ACTIONS(268),
    [anon_sym_ATe_COLON] = ACTIONS(268),
    [anon_sym_ATF_COLON] = ACTIONS(268),
    [anon_sym_ATi_COLON] = ACTIONS(268),
    [anon_sym_ATk_COLON] = ACTIONS(268),
    [anon_sym_ATo_COLON] = ACTIONS(268),
    [anon_sym_ATr_COLON] = ACTIONS(268),
    [anon_sym_ATf_COLON] = ACTIONS(268),
    [anon_sym_ATs_COLON] = ACTIONS(268),
    [anon_sym_ATx_COLON] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(568),
    [anon_sym_PIPE_DOT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(268),
    [sym_html_redirect_operator] = ACTIONS(270),
    [sym_html_append_operator] = ACTIONS(268),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(268),
    [anon_sym_CR] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_file_descriptor] = ACTIONS(268),
  },
  [157] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [anon_sym_TILDE] = ACTIONS(570),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_PIPEH] = ACTIONS(570),
    [anon_sym_PIPET] = ACTIONS(570),
    [anon_sym_AT_AT] = ACTIONS(572),
    [anon_sym_AT_ATdbt] = ACTIONS(572),
    [anon_sym_AT_ATdbta] = ACTIONS(570),
    [anon_sym_AT_ATdbtb] = ACTIONS(570),
    [anon_sym_AT_ATdbts] = ACTIONS(570),
    [anon_sym_AT_AT_DOT] = ACTIONS(570),
    [anon_sym_AT_AT_EQ] = ACTIONS(570),
    [anon_sym_AT_ATk] = ACTIONS(570),
    [anon_sym_AT_ATt] = ACTIONS(570),
    [anon_sym_AT_ATb] = ACTIONS(570),
    [anon_sym_AT_ATi] = ACTIONS(572),
    [anon_sym_AT_ATiS] = ACTIONS(570),
    [anon_sym_AT_ATf] = ACTIONS(570),
    [anon_sym_AT_ATs_COLON] = ACTIONS(570),
    [anon_sym_AT_ATc_COLON] = ACTIONS(570),
    [anon_sym_AT] = ACTIONS(572),
    [anon_sym_AT_BANG] = ACTIONS(570),
    [anon_sym_AT_LPAREN] = ACTIONS(570),
    [anon_sym_ATa_COLON] = ACTIONS(570),
    [anon_sym_ATb_COLON] = ACTIONS(570),
    [anon_sym_ATB_COLON] = ACTIONS(570),
    [anon_sym_ATe_COLON] = ACTIONS(570),
    [anon_sym_ATF_COLON] = ACTIONS(570),
    [anon_sym_ATi_COLON] = ACTIONS(570),
    [anon_sym_ATk_COLON] = ACTIONS(570),
    [anon_sym_ATo_COLON] = ACTIONS(570),
    [anon_sym_ATr_COLON] = ACTIONS(570),
    [anon_sym_ATf_COLON] = ACTIONS(570),
    [anon_sym_ATs_COLON] = ACTIONS(570),
    [anon_sym_ATx_COLON] = ACTIONS(570),
    [anon_sym_RPAREN] = ACTIONS(570),
    [anon_sym_PIPE_DOT] = ACTIONS(570),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(570),
    [sym_html_redirect_operator] = ACTIONS(572),
    [sym_html_append_operator] = ACTIONS(570),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(570),
    [anon_sym_CR] = ACTIONS(570),
    [anon_sym_SEMI] = ACTIONS(570),
    [sym_file_descriptor] = ACTIONS(570),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(574),
    [anon_sym_TILDE] = ACTIONS(574),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_PIPEH] = ACTIONS(574),
    [anon_sym_PIPET] = ACTIONS(574),
    [anon_sym_AT_AT] = ACTIONS(576),
    [anon_sym_AT_ATdbt] = ACTIONS(576),
    [anon_sym_AT_ATdbta] = ACTIONS(574),
    [anon_sym_AT_ATdbtb] = ACTIONS(574),
    [anon_sym_AT_ATdbts] = ACTIONS(574),
    [anon_sym_AT_AT_DOT] = ACTIONS(574),
    [anon_sym_AT_AT_EQ] = ACTIONS(574),
    [anon_sym_AT_ATk] = ACTIONS(574),
    [anon_sym_AT_ATt] = ACTIONS(574),
    [anon_sym_AT_ATb] = ACTIONS(574),
    [anon_sym_AT_ATi] = ACTIONS(576),
    [anon_sym_AT_ATiS] = ACTIONS(574),
    [anon_sym_AT_ATf] = ACTIONS(574),
    [anon_sym_AT_ATs_COLON] = ACTIONS(574),
    [anon_sym_AT_ATc_COLON] = ACTIONS(574),
    [anon_sym_AT] = ACTIONS(576),
    [anon_sym_AT_BANG] = ACTIONS(574),
    [anon_sym_AT_LPAREN] = ACTIONS(574),
    [anon_sym_ATa_COLON] = ACTIONS(574),
    [anon_sym_ATb_COLON] = ACTIONS(574),
    [anon_sym_ATB_COLON] = ACTIONS(574),
    [anon_sym_ATe_COLON] = ACTIONS(574),
    [anon_sym_ATF_COLON] = ACTIONS(574),
    [anon_sym_ATi_COLON] = ACTIONS(574),
    [anon_sym_ATk_COLON] = ACTIONS(574),
    [anon_sym_ATo_COLON] = ACTIONS(574),
    [anon_sym_ATr_COLON] = ACTIONS(574),
    [anon_sym_ATf_COLON] = ACTIONS(574),
    [anon_sym_ATs_COLON] = ACTIONS(574),
    [anon_sym_ATx_COLON] = ACTIONS(574),
    [anon_sym_RPAREN] = ACTIONS(574),
    [anon_sym_PIPE_DOT] = ACTIONS(574),
    [anon_sym_GT] = ACTIONS(576),
    [anon_sym_GT_GT] = ACTIONS(574),
    [sym_html_redirect_operator] = ACTIONS(576),
    [sym_html_append_operator] = ACTIONS(574),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(574),
    [anon_sym_CR] = ACTIONS(574),
    [anon_sym_SEMI] = ACTIONS(574),
    [sym_file_descriptor] = ACTIONS(574),
  },
  [159] = {
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
  [160] = {
    [sym__redirect_operator] = STATE(190),
    [sym_fdn_redirect_operator] = STATE(190),
    [sym_fdn_append_operator] = STATE(190),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(578),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(580),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(582),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_GT_GT] = ACTIONS(348),
    [sym_html_redirect_operator] = ACTIONS(350),
    [sym_html_append_operator] = ACTIONS(352),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_file_descriptor] = ACTIONS(354),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [anon_sym_TILDE] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_PIPEH] = ACTIONS(586),
    [anon_sym_PIPET] = ACTIONS(586),
    [sym_pipe_second_command] = ACTIONS(588),
    [anon_sym_AT_AT] = ACTIONS(586),
    [anon_sym_AT_ATdbt] = ACTIONS(586),
    [anon_sym_AT_ATdbta] = ACTIONS(586),
    [anon_sym_AT_ATdbtb] = ACTIONS(586),
    [anon_sym_AT_ATdbts] = ACTIONS(586),
    [anon_sym_AT_AT_DOT] = ACTIONS(586),
    [anon_sym_AT_AT_EQ] = ACTIONS(586),
    [anon_sym_AT_ATk] = ACTIONS(586),
    [anon_sym_AT_ATt] = ACTIONS(586),
    [anon_sym_AT_ATb] = ACTIONS(586),
    [anon_sym_AT_ATi] = ACTIONS(586),
    [anon_sym_AT_ATiS] = ACTIONS(586),
    [anon_sym_AT_ATf] = ACTIONS(586),
    [anon_sym_AT_ATs_COLON] = ACTIONS(586),
    [anon_sym_AT_ATc_COLON] = ACTIONS(586),
    [anon_sym_AT] = ACTIONS(586),
    [anon_sym_AT_BANG] = ACTIONS(586),
    [anon_sym_AT_LPAREN] = ACTIONS(586),
    [anon_sym_ATa_COLON] = ACTIONS(586),
    [anon_sym_ATb_COLON] = ACTIONS(586),
    [anon_sym_ATB_COLON] = ACTIONS(586),
    [anon_sym_ATe_COLON] = ACTIONS(586),
    [anon_sym_ATF_COLON] = ACTIONS(586),
    [anon_sym_ATi_COLON] = ACTIONS(586),
    [anon_sym_ATk_COLON] = ACTIONS(586),
    [anon_sym_ATo_COLON] = ACTIONS(586),
    [anon_sym_ATr_COLON] = ACTIONS(586),
    [anon_sym_ATf_COLON] = ACTIONS(586),
    [anon_sym_ATs_COLON] = ACTIONS(586),
    [anon_sym_ATx_COLON] = ACTIONS(586),
    [anon_sym_PIPE_DOT] = ACTIONS(586),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_GT_GT] = ACTIONS(586),
    [sym_html_redirect_operator] = ACTIONS(586),
    [sym_html_append_operator] = ACTIONS(586),
    [sym__comment] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(586),
    [anon_sym_CR] = ACTIONS(586),
    [anon_sym_SEMI] = ACTIONS(586),
    [sym_file_descriptor] = ACTIONS(584),
  },
  [162] = {
    [sym__redirect_operator] = STATE(190),
    [sym_fdn_redirect_operator] = STATE(190),
    [sym_fdn_append_operator] = STATE(190),
    [anon_sym_TILDE] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(590),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(296),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(346),
    [anon_sym_GT_GT] = ACTIONS(348),
    [sym_html_redirect_operator] = ACTIONS(350),
    [sym_html_append_operator] = ACTIONS(352),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_file_descriptor] = ACTIONS(354),
  },
  [163] = {
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PIPEH] = ACTIONS(378),
    [anon_sym_PIPET] = ACTIONS(378),
    [anon_sym_AT_AT] = ACTIONS(378),
    [anon_sym_AT_ATdbt] = ACTIONS(378),
    [anon_sym_AT_ATdbta] = ACTIONS(378),
    [anon_sym_AT_ATdbtb] = ACTIONS(378),
    [anon_sym_AT_ATdbts] = ACTIONS(378),
    [anon_sym_AT_AT_DOT] = ACTIONS(378),
    [anon_sym_AT_AT_EQ] = ACTIONS(378),
    [anon_sym_AT_ATk] = ACTIONS(378),
    [anon_sym_AT_ATt] = ACTIONS(378),
    [anon_sym_AT_ATb] = ACTIONS(378),
    [anon_sym_AT_ATi] = ACTIONS(378),
    [anon_sym_AT_ATiS] = ACTIONS(378),
    [anon_sym_AT_ATf] = ACTIONS(378),
    [anon_sym_AT_ATs_COLON] = ACTIONS(378),
    [anon_sym_AT_ATc_COLON] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_AT_BANG] = ACTIONS(378),
    [anon_sym_AT_LPAREN] = ACTIONS(378),
    [anon_sym_ATa_COLON] = ACTIONS(378),
    [anon_sym_ATb_COLON] = ACTIONS(378),
    [anon_sym_ATB_COLON] = ACTIONS(378),
    [anon_sym_ATe_COLON] = ACTIONS(378),
    [anon_sym_ATF_COLON] = ACTIONS(378),
    [anon_sym_ATi_COLON] = ACTIONS(378),
    [anon_sym_ATk_COLON] = ACTIONS(378),
    [anon_sym_ATo_COLON] = ACTIONS(378),
    [anon_sym_ATr_COLON] = ACTIONS(378),
    [anon_sym_ATf_COLON] = ACTIONS(378),
    [anon_sym_ATs_COLON] = ACTIONS(378),
    [anon_sym_ATx_COLON] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_PIPE_DOT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_GT] = ACTIONS(378),
    [sym_html_redirect_operator] = ACTIONS(378),
    [sym_html_append_operator] = ACTIONS(378),
    [sym_macro_content] = ACTIONS(382),
    [anon_sym_BQUOTE] = ACTIONS(378),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(378),
    [sym_file_descriptor] = ACTIONS(376),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(594),
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_PIPE] = ACTIONS(596),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(296),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(594),
    [sym_html_redirect_operator] = ACTIONS(596),
    [sym_html_append_operator] = ACTIONS(594),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(594),
    [anon_sym_CR] = ACTIONS(594),
    [anon_sym_SEMI] = ACTIONS(594),
    [sym_file_descriptor] = ACTIONS(594),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(598),
    [anon_sym_TILDE] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(296),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(312),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_GT_GT] = ACTIONS(598),
    [sym_html_redirect_operator] = ACTIONS(600),
    [sym_html_append_operator] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(598),
    [anon_sym_CR] = ACTIONS(598),
    [anon_sym_SEMI] = ACTIONS(598),
    [sym_file_descriptor] = ACTIONS(598),
  },
  [166] = {
    [anon_sym_TILDE] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_PIPEH] = ACTIONS(586),
    [anon_sym_PIPET] = ACTIONS(586),
    [sym_pipe_second_command] = ACTIONS(588),
    [anon_sym_AT_AT] = ACTIONS(586),
    [anon_sym_AT_ATdbt] = ACTIONS(586),
    [anon_sym_AT_ATdbta] = ACTIONS(586),
    [anon_sym_AT_ATdbtb] = ACTIONS(586),
    [anon_sym_AT_ATdbts] = ACTIONS(586),
    [anon_sym_AT_AT_DOT] = ACTIONS(586),
    [anon_sym_AT_AT_EQ] = ACTIONS(586),
    [anon_sym_AT_ATk] = ACTIONS(586),
    [anon_sym_AT_ATt] = ACTIONS(586),
    [anon_sym_AT_ATb] = ACTIONS(586),
    [anon_sym_AT_ATi] = ACTIONS(586),
    [anon_sym_AT_ATiS] = ACTIONS(586),
    [anon_sym_AT_ATf] = ACTIONS(586),
    [anon_sym_AT_ATs_COLON] = ACTIONS(586),
    [anon_sym_AT_ATc_COLON] = ACTIONS(586),
    [anon_sym_AT] = ACTIONS(586),
    [anon_sym_AT_BANG] = ACTIONS(586),
    [anon_sym_AT_LPAREN] = ACTIONS(586),
    [anon_sym_ATa_COLON] = ACTIONS(586),
    [anon_sym_ATb_COLON] = ACTIONS(586),
    [anon_sym_ATB_COLON] = ACTIONS(586),
    [anon_sym_ATe_COLON] = ACTIONS(586),
    [anon_sym_ATF_COLON] = ACTIONS(586),
    [anon_sym_ATi_COLON] = ACTIONS(586),
    [anon_sym_ATk_COLON] = ACTIONS(586),
    [anon_sym_ATo_COLON] = ACTIONS(586),
    [anon_sym_ATr_COLON] = ACTIONS(586),
    [anon_sym_ATf_COLON] = ACTIONS(586),
    [anon_sym_ATs_COLON] = ACTIONS(586),
    [anon_sym_ATx_COLON] = ACTIONS(586),
    [anon_sym_PIPE_DOT] = ACTIONS(586),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_GT_GT] = ACTIONS(586),
    [sym_html_redirect_operator] = ACTIONS(586),
    [sym_html_append_operator] = ACTIONS(586),
    [anon_sym_BQUOTE] = ACTIONS(586),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(586),
    [sym_file_descriptor] = ACTIONS(584),
  },
  [167] = {
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PIPEH] = ACTIONS(378),
    [anon_sym_PIPET] = ACTIONS(378),
    [anon_sym_AT_AT] = ACTIONS(378),
    [anon_sym_AT_ATdbt] = ACTIONS(378),
    [anon_sym_AT_ATdbta] = ACTIONS(378),
    [anon_sym_AT_ATdbtb] = ACTIONS(378),
    [anon_sym_AT_ATdbts] = ACTIONS(378),
    [anon_sym_AT_AT_DOT] = ACTIONS(378),
    [anon_sym_AT_AT_EQ] = ACTIONS(378),
    [anon_sym_AT_ATk] = ACTIONS(378),
    [anon_sym_AT_ATt] = ACTIONS(378),
    [anon_sym_AT_ATb] = ACTIONS(378),
    [anon_sym_AT_ATi] = ACTIONS(378),
    [anon_sym_AT_ATiS] = ACTIONS(378),
    [anon_sym_AT_ATf] = ACTIONS(378),
    [anon_sym_AT_ATs_COLON] = ACTIONS(378),
    [anon_sym_AT_ATc_COLON] = ACTIONS(378),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_AT_BANG] = ACTIONS(378),
    [anon_sym_AT_LPAREN] = ACTIONS(378),
    [anon_sym_ATa_COLON] = ACTIONS(378),
    [anon_sym_ATb_COLON] = ACTIONS(378),
    [anon_sym_ATB_COLON] = ACTIONS(378),
    [anon_sym_ATe_COLON] = ACTIONS(378),
    [anon_sym_ATF_COLON] = ACTIONS(378),
    [anon_sym_ATi_COLON] = ACTIONS(378),
    [anon_sym_ATk_COLON] = ACTIONS(378),
    [anon_sym_ATo_COLON] = ACTIONS(378),
    [anon_sym_ATr_COLON] = ACTIONS(378),
    [anon_sym_ATf_COLON] = ACTIONS(378),
    [anon_sym_ATs_COLON] = ACTIONS(378),
    [anon_sym_ATx_COLON] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_PIPE_DOT] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_GT] = ACTIONS(378),
    [sym_html_redirect_operator] = ACTIONS(378),
    [sym_html_append_operator] = ACTIONS(378),
    [sym_macro_content] = ACTIONS(602),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(378),
    [sym_file_descriptor] = ACTIONS(376),
  },
  [168] = {
    [anon_sym_TILDE] = ACTIONS(586),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_PIPEH] = ACTIONS(586),
    [anon_sym_PIPET] = ACTIONS(586),
    [sym_pipe_second_command] = ACTIONS(588),
    [anon_sym_AT_AT] = ACTIONS(586),
    [anon_sym_AT_ATdbt] = ACTIONS(586),
    [anon_sym_AT_ATdbta] = ACTIONS(586),
    [anon_sym_AT_ATdbtb] = ACTIONS(586),
    [anon_sym_AT_ATdbts] = ACTIONS(586),
    [anon_sym_AT_AT_DOT] = ACTIONS(586),
    [anon_sym_AT_AT_EQ] = ACTIONS(586),
    [anon_sym_AT_ATk] = ACTIONS(586),
    [anon_sym_AT_ATt] = ACTIONS(586),
    [anon_sym_AT_ATb] = ACTIONS(586),
    [anon_sym_AT_ATi] = ACTIONS(586),
    [anon_sym_AT_ATiS] = ACTIONS(586),
    [anon_sym_AT_ATf] = ACTIONS(586),
    [anon_sym_AT_ATs_COLON] = ACTIONS(586),
    [anon_sym_AT_ATc_COLON] = ACTIONS(586),
    [anon_sym_AT] = ACTIONS(586),
    [anon_sym_AT_BANG] = ACTIONS(586),
    [anon_sym_AT_LPAREN] = ACTIONS(586),
    [anon_sym_ATa_COLON] = ACTIONS(586),
    [anon_sym_ATb_COLON] = ACTIONS(586),
    [anon_sym_ATB_COLON] = ACTIONS(586),
    [anon_sym_ATe_COLON] = ACTIONS(586),
    [anon_sym_ATF_COLON] = ACTIONS(586),
    [anon_sym_ATi_COLON] = ACTIONS(586),
    [anon_sym_ATk_COLON] = ACTIONS(586),
    [anon_sym_ATo_COLON] = ACTIONS(586),
    [anon_sym_ATr_COLON] = ACTIONS(586),
    [anon_sym_ATf_COLON] = ACTIONS(586),
    [anon_sym_ATs_COLON] = ACTIONS(586),
    [anon_sym_ATx_COLON] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [anon_sym_PIPE_DOT] = ACTIONS(586),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_GT_GT] = ACTIONS(586),
    [sym_html_redirect_operator] = ACTIONS(586),
    [sym_html_append_operator] = ACTIONS(586),
    [sym__comment] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(586),
    [sym_file_descriptor] = ACTIONS(584),
  },
  [169] = {
    [anon_sym_TILDE] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(296),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(598),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_GT_GT] = ACTIONS(598),
    [sym_html_redirect_operator] = ACTIONS(600),
    [sym_html_append_operator] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(598),
    [sym_file_descriptor] = ACTIONS(598),
  },
  [170] = {
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_PIPE] = ACTIONS(596),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(580),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(582),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(594),
    [sym_html_redirect_operator] = ACTIONS(596),
    [sym_html_append_operator] = ACTIONS(594),
    [anon_sym_BQUOTE] = ACTIONS(594),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(594),
    [sym_file_descriptor] = ACTIONS(594),
  },
  [171] = {
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(270),
    [anon_sym_PIPEH] = ACTIONS(268),
    [anon_sym_PIPET] = ACTIONS(268),
    [anon_sym_AT_AT] = ACTIONS(270),
    [anon_sym_AT_ATdbt] = ACTIONS(270),
    [anon_sym_AT_ATdbta] = ACTIONS(268),
    [anon_sym_AT_ATdbtb] = ACTIONS(268),
    [anon_sym_AT_ATdbts] = ACTIONS(268),
    [anon_sym_AT_AT_DOT] = ACTIONS(268),
    [anon_sym_AT_AT_EQ] = ACTIONS(268),
    [anon_sym_AT_ATk] = ACTIONS(268),
    [anon_sym_AT_ATt] = ACTIONS(268),
    [anon_sym_AT_ATb] = ACTIONS(268),
    [anon_sym_AT_ATi] = ACTIONS(270),
    [anon_sym_AT_ATiS] = ACTIONS(268),
    [anon_sym_AT_ATf] = ACTIONS(268),
    [anon_sym_AT_ATs_COLON] = ACTIONS(268),
    [anon_sym_AT_ATc_COLON] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_AT_BANG] = ACTIONS(268),
    [anon_sym_AT_LPAREN] = ACTIONS(268),
    [anon_sym_ATa_COLON] = ACTIONS(268),
    [anon_sym_ATb_COLON] = ACTIONS(268),
    [anon_sym_ATB_COLON] = ACTIONS(268),
    [anon_sym_ATe_COLON] = ACTIONS(268),
    [anon_sym_ATF_COLON] = ACTIONS(268),
    [anon_sym_ATi_COLON] = ACTIONS(268),
    [anon_sym_ATk_COLON] = ACTIONS(268),
    [anon_sym_ATo_COLON] = ACTIONS(268),
    [anon_sym_ATr_COLON] = ACTIONS(268),
    [anon_sym_ATf_COLON] = ACTIONS(268),
    [anon_sym_ATs_COLON] = ACTIONS(268),
    [anon_sym_ATx_COLON] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
    [anon_sym_PIPE_DOT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(270),
    [anon_sym_GT_GT] = ACTIONS(268),
    [sym_html_redirect_operator] = ACTIONS(270),
    [sym_html_append_operator] = ACTIONS(268),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_file_descriptor] = ACTIONS(268),
  },
  [172] = {
    [anon_sym_TILDE] = ACTIONS(594),
    [anon_sym_PIPE] = ACTIONS(596),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(296),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(592),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(594),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(596),
    [anon_sym_GT_GT] = ACTIONS(594),
    [sym_html_redirect_operator] = ACTIONS(596),
    [sym_html_append_operator] = ACTIONS(594),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(594),
    [sym_file_descriptor] = ACTIONS(594),
  },
  [173] = {
    [anon_sym_TILDE] = ACTIONS(598),
    [anon_sym_PIPE] = ACTIONS(600),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(282),
    [anon_sym_AT_AT] = ACTIONS(284),
    [anon_sym_AT_ATdbt] = ACTIONS(286),
    [anon_sym_AT_ATdbta] = ACTIONS(288),
    [anon_sym_AT_ATdbtb] = ACTIONS(290),
    [anon_sym_AT_ATdbts] = ACTIONS(292),
    [anon_sym_AT_AT_DOT] = ACTIONS(294),
    [anon_sym_AT_AT_EQ] = ACTIONS(580),
    [anon_sym_AT_ATk] = ACTIONS(298),
    [anon_sym_AT_ATt] = ACTIONS(300),
    [anon_sym_AT_ATb] = ACTIONS(302),
    [anon_sym_AT_ATi] = ACTIONS(304),
    [anon_sym_AT_ATiS] = ACTIONS(306),
    [anon_sym_AT_ATf] = ACTIONS(308),
    [anon_sym_AT_ATs_COLON] = ACTIONS(310),
    [anon_sym_AT_ATc_COLON] = ACTIONS(582),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_AT_BANG] = ACTIONS(316),
    [anon_sym_AT_LPAREN] = ACTIONS(318),
    [anon_sym_ATa_COLON] = ACTIONS(320),
    [anon_sym_ATb_COLON] = ACTIONS(322),
    [anon_sym_ATB_COLON] = ACTIONS(324),
    [anon_sym_ATe_COLON] = ACTIONS(326),
    [anon_sym_ATF_COLON] = ACTIONS(328),
    [anon_sym_ATi_COLON] = ACTIONS(330),
    [anon_sym_ATk_COLON] = ACTIONS(332),
    [anon_sym_ATo_COLON] = ACTIONS(334),
    [anon_sym_ATr_COLON] = ACTIONS(336),
    [anon_sym_ATf_COLON] = ACTIONS(338),
    [anon_sym_ATs_COLON] = ACTIONS(340),
    [anon_sym_ATx_COLON] = ACTIONS(342),
    [anon_sym_PIPE_DOT] = ACTIONS(344),
    [anon_sym_GT] = ACTIONS(600),
    [anon_sym_GT_GT] = ACTIONS(598),
    [sym_html_redirect_operator] = ACTIONS(600),
    [sym_html_append_operator] = ACTIONS(598),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(598),
    [sym_file_descriptor] = ACTIONS(598),
  },
  [174] = {
    [aux_sym_commands_repeat1] = STATE(174),
    [ts_builtin_sym_end] = ACTIONS(604),
    [anon_sym_DQUOTE] = ACTIONS(604),
    [anon_sym_DOT] = ACTIONS(606),
    [anon_sym_DOT_BANG] = ACTIONS(604),
    [anon_sym_DOT_LPAREN] = ACTIONS(604),
    [anon_sym_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(604),
    [anon_sym_env] = ACTIONS(604),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(606),
    [aux_sym__interpret_identifier_token1] = ACTIONS(606),
    [aux_sym__interpret_identifier_token2] = ACTIONS(604),
    [sym_system_identifier] = ACTIONS(604),
    [sym_question_mark_identifier] = ACTIONS(604),
    [sym_pointer_identifier] = ACTIONS(604),
    [sym_macro_identifier] = ACTIONS(604),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(608),
    [anon_sym_CR] = ACTIONS(608),
    [anon_sym_SEMI] = ACTIONS(608),
    [sym_cmd_identifier] = ACTIONS(604),
    [sym__help_command] = ACTIONS(604),
    [sym_repeat_number] = ACTIONS(604),
    [sym_interpreter_identifier] = ACTIONS(604),
  },
  [175] = {
    [aux_sym__commands_singleline_repeat1] = STATE(175),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_DOT_BANG] = ACTIONS(611),
    [anon_sym_DOT_LPAREN] = ACTIONS(611),
    [anon_sym_DOT_SLASH] = ACTIONS(611),
    [anon_sym_PERCENT] = ACTIONS(611),
    [anon_sym_env] = ACTIONS(611),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(613),
    [aux_sym__interpret_identifier_token1] = ACTIONS(613),
    [aux_sym__interpret_identifier_token2] = ACTIONS(611),
    [sym_system_identifier] = ACTIONS(611),
    [sym_question_mark_identifier] = ACTIONS(611),
    [sym_pointer_identifier] = ACTIONS(611),
    [sym_macro_identifier] = ACTIONS(611),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(615),
    [sym_cmd_identifier] = ACTIONS(611),
    [sym__help_command] = ACTIONS(611),
    [sym_repeat_number] = ACTIONS(611),
    [sym_interpreter_identifier] = ACTIONS(611),
  },
  [176] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(120),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [177] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(149),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [178] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(149),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [179] = {
    [sym__arg] = STATE(47),
    [sym_arg] = STATE(38),
    [sym_args] = STATE(120),
    [sym_double_quoted_arg] = STATE(47),
    [sym_single_quoted_arg] = STATE(47),
    [sym_cmd_substitution_arg] = STATE(47),
    [sym_concatenation] = STATE(60),
    [aux_sym_args_repeat1] = STATE(38),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [180] = {
    [sym__arg] = STATE(63),
    [sym_arg] = STATE(68),
    [sym_eq_sep_val] = STATE(157),
    [sym_double_quoted_arg] = STATE(63),
    [sym_single_quoted_arg] = STATE(63),
    [sym_cmd_substitution_arg] = STATE(63),
    [sym_concatenation] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym_arg_identifier] = ACTIONS(620),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(624),
    [anon_sym_BQUOTE] = ACTIONS(626),
    [sym__comment] = ACTIONS(97),
  },
  [181] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(132),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [182] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(130),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [183] = {
    [sym__arg] = STATE(63),
    [sym_arg] = STATE(102),
    [sym_double_quoted_arg] = STATE(63),
    [sym_single_quoted_arg] = STATE(63),
    [sym_cmd_substitution_arg] = STATE(63),
    [sym_concatenation] = STATE(101),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym_arg_identifier] = ACTIONS(620),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(624),
    [anon_sym_BQUOTE] = ACTIONS(626),
    [sym__comment] = ACTIONS(97),
  },
  [184] = {
    [sym_eq_sep_args] = STATE(152),
    [sym__eq_sep_key_single] = STATE(62),
    [sym_eq_sep_key] = STATE(100),
    [sym_double_quoted_arg] = STATE(72),
    [sym_single_quoted_arg] = STATE(72),
    [sym_cmd_substitution_arg] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [sym__eq_sep_key_identifier] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(97),
  },
  [185] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(138),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [186] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(139),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [187] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(136),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [188] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(135),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [189] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(127),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [190] = {
    [sym__arg] = STATE(227),
    [sym_arg] = STATE(246),
    [sym_double_quoted_arg] = STATE(227),
    [sym_single_quoted_arg] = STATE(227),
    [sym_cmd_substitution_arg] = STATE(227),
    [sym_concatenation] = STATE(240),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [sym_arg_identifier] = ACTIONS(640),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(644),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [sym__comment] = ACTIONS(97),
  },
  [191] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(134),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [192] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(133),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [193] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(137),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [194] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(129),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [195] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(128),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [196] = {
    [sym__arg] = STATE(229),
    [sym_arg] = STATE(199),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [sym_concatenation] = STATE(249),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym_arg_identifier] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(654),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(97),
  },
  [197] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(126),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [198] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(118),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [199] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(155),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [200] = {
    [sym__arg] = STATE(229),
    [sym_arg] = STATE(189),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [sym_concatenation] = STATE(249),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym_arg_identifier] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(654),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(97),
  },
  [201] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(107),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [202] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(125),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [203] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(119),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [204] = {
    [sym__arg] = STATE(85),
    [sym_arg] = STATE(121),
    [sym_double_quoted_arg] = STATE(85),
    [sym_single_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [sym_concatenation] = STATE(159),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(630),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [205] = {
    [sym__arg] = STATE(229),
    [sym_arg] = STATE(200),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [sym_concatenation] = STATE(249),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym_arg_identifier] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(654),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(97),
  },
  [206] = {
    [sym__arg] = STATE(83),
    [sym_double_quoted_arg] = STATE(83),
    [sym_single_quoted_arg] = STATE(83),
    [sym_cmd_substitution_arg] = STATE(83),
    [anon_sym_DQUOTE] = ACTIONS(618),
    [sym_arg_identifier] = ACTIONS(658),
    [anon_sym_SQUOTE] = ACTIONS(622),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(624),
    [anon_sym_BQUOTE] = ACTIONS(626),
    [sym__comment] = ACTIONS(97),
  },
  [207] = {
    [sym__arg] = STATE(243),
    [sym_double_quoted_arg] = STATE(243),
    [sym_single_quoted_arg] = STATE(243),
    [sym_cmd_substitution_arg] = STATE(243),
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym_arg_identifier] = ACTIONS(660),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(654),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(97),
  },
  [208] = {
    [sym__arg] = STATE(105),
    [sym_double_quoted_arg] = STATE(105),
    [sym_single_quoted_arg] = STATE(105),
    [sym_cmd_substitution_arg] = STATE(105),
    [anon_sym_DQUOTE] = ACTIONS(628),
    [sym_arg_identifier] = ACTIONS(662),
    [anon_sym_SQUOTE] = ACTIONS(632),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(634),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(97),
  },
  [209] = {
    [sym__arg] = STATE(231),
    [sym_double_quoted_arg] = STATE(231),
    [sym_single_quoted_arg] = STATE(231),
    [sym_cmd_substitution_arg] = STATE(231),
    [anon_sym_DQUOTE] = ACTIONS(638),
    [sym_arg_identifier] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(642),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(644),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [sym__comment] = ACTIONS(97),
  },
  [210] = {
    [sym__arg] = STATE(57),
    [sym_double_quoted_arg] = STATE(57),
    [sym_single_quoted_arg] = STATE(57),
    [sym_cmd_substitution_arg] = STATE(57),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym_arg_identifier] = ACTIONS(666),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [sym__comment] = ACTIONS(97),
  },
  [211] = {
    [sym__eq_sep_key_single] = STATE(79),
    [sym_double_quoted_arg] = STATE(72),
    [sym_single_quoted_arg] = STATE(72),
    [sym_cmd_substitution_arg] = STATE(72),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [sym__eq_sep_key_identifier] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(97),
  },
  [212] = {
    [sym_cmd_substitution_arg] = STATE(214),
    [aux_sym_double_quoted_arg_repeat1] = STATE(214),
    [anon_sym_DQUOTE] = ACTIONS(668),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(670),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(670),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(670),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [213] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(676),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(678),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [214] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(680),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(678),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [215] = {
    [sym_cmd_substitution_arg] = STATE(220),
    [aux_sym_double_quoted_arg_repeat1] = STATE(220),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(684),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(684),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(684),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [216] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(686),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(688),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(688),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(688),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(691),
    [anon_sym_BQUOTE] = ACTIONS(694),
    [sym__comment] = ACTIONS(97),
  },
  [217] = {
    [sym_cmd_substitution_arg] = STATE(221),
    [aux_sym_double_quoted_arg_repeat1] = STATE(221),
    [anon_sym_DQUOTE] = ACTIONS(697),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(699),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(699),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(699),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [218] = {
    [sym_cmd_substitution_arg] = STATE(213),
    [aux_sym_double_quoted_arg_repeat1] = STATE(213),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(703),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(703),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(703),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [219] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(705),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(678),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [220] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(707),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(678),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [221] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(709),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(678),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [222] = {
    [sym_cmd_substitution_arg] = STATE(225),
    [aux_sym_double_quoted_arg_repeat1] = STATE(225),
    [anon_sym_DQUOTE] = ACTIONS(711),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(713),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(713),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(713),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [223] = {
    [aux_sym_concatenation_repeat1] = STATE(223),
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym__concat] = ACTIONS(715),
  },
  [224] = {
    [sym_cmd_substitution_arg] = STATE(219),
    [aux_sym_double_quoted_arg_repeat1] = STATE(219),
    [anon_sym_DQUOTE] = ACTIONS(718),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(720),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(720),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(720),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [225] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(722),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(678),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(672),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(97),
  },
  [226] = {
    [aux_sym_concatenation_repeat1] = STATE(223),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym__concat] = ACTIONS(724),
  },
  [227] = {
    [aux_sym_concatenation_repeat1] = STATE(226),
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym__concat] = ACTIONS(724),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [229] = {
    [aux_sym_concatenation_repeat1] = STATE(232),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(726),
  },
  [230] = {
    [aux_sym_concatenation_repeat1] = STATE(230),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym_arg_identifier] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(728),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym__concat] = ACTIONS(162),
  },
  [232] = {
    [aux_sym_concatenation_repeat1] = STATE(230),
    [anon_sym_DQUOTE] = ACTIONS(158),
    [sym_arg_identifier] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(158),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(726),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(173),
    [anon_sym_CR] = ACTIONS(173),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym__concat] = ACTIONS(173),
  },
  [234] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(169),
    [anon_sym_CR] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(169),
    [sym__concat] = ACTIONS(169),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(177),
    [anon_sym_CR] = ACTIONS(177),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym__concat] = ACTIONS(177),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(185),
    [anon_sym_CR] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(185),
    [sym__concat] = ACTIONS(185),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_CR] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(181),
    [sym__concat] = ACTIONS(181),
  },
  [238] = {
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym_arg_identifier] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(173),
  },
  [239] = {
    [anon_sym_DQUOTE] = ACTIONS(169),
    [sym_arg_identifier] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(169),
    [anon_sym_BQUOTE] = ACTIONS(169),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(169),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [241] = {
    [anon_sym_DQUOTE] = ACTIONS(185),
    [sym_arg_identifier] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(185),
    [anon_sym_BQUOTE] = ACTIONS(185),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(185),
  },
  [242] = {
    [anon_sym_DQUOTE] = ACTIONS(181),
    [sym_arg_identifier] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(181),
    [anon_sym_BQUOTE] = ACTIONS(181),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(181),
  },
  [243] = {
    [anon_sym_DQUOTE] = ACTIONS(162),
    [sym_arg_identifier] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(162),
  },
  [244] = {
    [anon_sym_DQUOTE] = ACTIONS(179),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(179),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(179),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(179),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(97),
  },
  [245] = {
    [anon_sym_DQUOTE] = ACTIONS(179),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(179),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(179),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(179),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(97),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_BQUOTE] = ACTIONS(731),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(731),
    [anon_sym_CR] = ACTIONS(731),
    [anon_sym_SEMI] = ACTIONS(731),
  },
  [247] = {
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_arg_identifier] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(177),
  },
  [248] = {
    [anon_sym_DQUOTE] = ACTIONS(177),
    [sym_arg_identifier] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(97),
    [sym__concat] = ACTIONS(177),
  },
  [249] = {
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(97),
  },
  [250] = {
    [aux_sym_commands_repeat2] = STATE(250),
    [ts_builtin_sym_end] = ACTIONS(733),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(735),
    [anon_sym_CR] = ACTIONS(735),
    [anon_sym_SEMI] = ACTIONS(735),
  },
  [251] = {
    [anon_sym_DQUOTE] = ACTIONS(738),
    [sym_arg_identifier] = ACTIONS(740),
    [anon_sym_SQUOTE] = ACTIONS(738),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(738),
    [anon_sym_BQUOTE] = ACTIONS(738),
    [sym__comment] = ACTIONS(97),
  },
  [252] = {
    [anon_sym_DQUOTE] = ACTIONS(742),
    [sym_arg_identifier] = ACTIONS(744),
    [anon_sym_SQUOTE] = ACTIONS(742),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(742),
    [anon_sym_BQUOTE] = ACTIONS(742),
    [sym__comment] = ACTIONS(97),
  },
  [253] = {
    [aux_sym_commands_repeat2] = STATE(259),
    [ts_builtin_sym_end] = ACTIONS(746),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(748),
    [anon_sym_CR] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(748),
  },
  [254] = {
    [anon_sym_DQUOTE] = ACTIONS(750),
    [sym_arg_identifier] = ACTIONS(752),
    [anon_sym_SQUOTE] = ACTIONS(750),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(750),
    [anon_sym_BQUOTE] = ACTIONS(750),
    [sym__comment] = ACTIONS(97),
  },
  [255] = {
    [aux_sym_commands_repeat2] = STATE(256),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(748),
    [anon_sym_CR] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(748),
  },
  [256] = {
    [aux_sym_commands_repeat2] = STATE(250),
    [ts_builtin_sym_end] = ACTIONS(746),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(748),
    [anon_sym_CR] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(748),
  },
  [257] = {
    [anon_sym_DQUOTE] = ACTIONS(754),
    [sym_arg_identifier] = ACTIONS(756),
    [anon_sym_SQUOTE] = ACTIONS(754),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(754),
    [anon_sym_BQUOTE] = ACTIONS(754),
    [sym__comment] = ACTIONS(97),
  },
  [258] = {
    [anon_sym_DQUOTE] = ACTIONS(758),
    [sym_arg_identifier] = ACTIONS(760),
    [anon_sym_SQUOTE] = ACTIONS(758),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(758),
    [anon_sym_BQUOTE] = ACTIONS(758),
    [sym__comment] = ACTIONS(97),
  },
  [259] = {
    [aux_sym_commands_repeat2] = STATE(250),
    [ts_builtin_sym_end] = ACTIONS(762),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(748),
    [anon_sym_CR] = ACTIONS(748),
    [anon_sym_SEMI] = ACTIONS(748),
  },
  [260] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(764),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(766),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [261] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(264),
    [anon_sym_SQUOTE] = ACTIONS(768),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(770),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(770),
    [sym__comment] = ACTIONS(97),
  },
  [262] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(265),
    [anon_sym_SQUOTE] = ACTIONS(772),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(774),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(774),
    [sym__comment] = ACTIONS(97),
  },
  [263] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(260),
    [anon_sym_SQUOTE] = ACTIONS(776),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(778),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(778),
    [sym__comment] = ACTIONS(97),
  },
  [264] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(780),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(766),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [265] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(782),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(766),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [266] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(784),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(786),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(786),
    [sym__comment] = ACTIONS(97),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(733),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(733),
    [anon_sym_CR] = ACTIONS(733),
    [anon_sym_SEMI] = ACTIONS(733),
  },
  [268] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(271),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(791),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(791),
    [sym__comment] = ACTIONS(97),
  },
  [269] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(272),
    [anon_sym_SQUOTE] = ACTIONS(793),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(795),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(795),
    [sym__comment] = ACTIONS(97),
  },
  [270] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(797),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(766),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [271] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(799),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(766),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [272] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(801),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(766),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(766),
    [sym__comment] = ACTIONS(97),
  },
  [273] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(270),
    [anon_sym_SQUOTE] = ACTIONS(803),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(805),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(805),
    [sym__comment] = ACTIONS(97),
  },
  [274] = {
    [aux_sym__commands_singleline_repeat2] = STATE(281),
    [anon_sym_RPAREN] = ACTIONS(807),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(809),
  },
  [275] = {
    [aux_sym__commands_singleline_repeat2] = STATE(275),
    [anon_sym_RPAREN] = ACTIONS(811),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(813),
  },
  [276] = {
    [aux_sym__commands_singleline_repeat2] = STATE(278),
    [anon_sym_BQUOTE] = ACTIONS(807),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(816),
  },
  [277] = {
    [anon_sym_RPAREN] = ACTIONS(811),
    [anon_sym_BQUOTE] = ACTIONS(811),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(811),
  },
  [278] = {
    [aux_sym__commands_singleline_repeat2] = STATE(280),
    [anon_sym_BQUOTE] = ACTIONS(818),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(816),
  },
  [279] = {
    [aux_sym__commands_singleline_repeat2] = STATE(282),
    [anon_sym_BQUOTE] = ACTIONS(818),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(816),
  },
  [280] = {
    [aux_sym__commands_singleline_repeat2] = STATE(280),
    [anon_sym_BQUOTE] = ACTIONS(811),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(820),
  },
  [281] = {
    [aux_sym__commands_singleline_repeat2] = STATE(275),
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(809),
  },
  [282] = {
    [aux_sym__commands_singleline_repeat2] = STATE(280),
    [anon_sym_BQUOTE] = ACTIONS(823),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(816),
  },
  [283] = {
    [aux_sym__commands_singleline_repeat2] = STATE(275),
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(809),
  },
  [284] = {
    [aux_sym__commands_singleline_repeat2] = STATE(283),
    [anon_sym_RPAREN] = ACTIONS(818),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(809),
  },
  [285] = {
    [anon_sym_GT] = ACTIONS(825),
    [anon_sym_GT_GT] = ACTIONS(827),
    [sym__comment] = ACTIONS(3),
  },
  [286] = {
    [anon_sym_RPAREN] = ACTIONS(829),
    [sym_macro_call_content] = ACTIONS(831),
    [sym__comment] = ACTIONS(97),
  },
  [287] = {
    [anon_sym_RPAREN] = ACTIONS(833),
    [sym_macro_call_content] = ACTIONS(835),
    [sym__comment] = ACTIONS(97),
  },
  [288] = {
    [sym_interpret_arg] = STATE(149),
    [sym__any_command] = ACTIONS(837),
    [sym__comment] = ACTIONS(97),
  },
  [289] = {
    [anon_sym_BQUOTE] = ACTIONS(839),
    [sym__comment] = ACTIONS(3),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(841),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(843),
    [sym__comment] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_BQUOTE] = ACTIONS(845),
    [sym__comment] = ACTIONS(3),
  },
  [293] = {
    [anon_sym_BQUOTE] = ACTIONS(847),
    [sym__comment] = ACTIONS(3),
  },
  [294] = {
    [anon_sym_BQUOTE] = ACTIONS(849),
    [sym__comment] = ACTIONS(3),
  },
  [295] = {
    [sym_tmp_eval_arg] = ACTIONS(851),
    [sym__comment] = ACTIONS(97),
  },
  [296] = {
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym__comment] = ACTIONS(3),
  },
  [297] = {
    [anon_sym_RPAREN] = ACTIONS(855),
    [sym__comment] = ACTIONS(3),
  },
  [298] = {
    [anon_sym_BQUOTE] = ACTIONS(857),
    [sym__comment] = ACTIONS(3),
  },
  [299] = {
    [anon_sym_RPAREN] = ACTIONS(859),
    [sym__comment] = ACTIONS(3),
  },
  [300] = {
    [anon_sym_BQUOTE] = ACTIONS(861),
    [sym__comment] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(863),
    [sym__comment] = ACTIONS(3),
  },
  [302] = {
    [sym_tmp_eval_arg] = ACTIONS(865),
    [sym__comment] = ACTIONS(97),
  },
  [303] = {
    [anon_sym_RPAREN] = ACTIONS(867),
    [sym__comment] = ACTIONS(3),
  },
  [304] = {
    [anon_sym_DQUOTE] = ACTIONS(869),
    [sym__comment] = ACTIONS(3),
  },
  [305] = {
    [anon_sym_BQUOTE] = ACTIONS(871),
    [sym__comment] = ACTIONS(3),
  },
  [306] = {
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym__comment] = ACTIONS(3),
  },
  [307] = {
    [anon_sym_RPAREN] = ACTIONS(875),
    [sym__comment] = ACTIONS(3),
  },
  [308] = {
    [ts_builtin_sym_end] = ACTIONS(877),
    [sym__comment] = ACTIONS(3),
  },
  [309] = {
    [sym_grep_specifier] = ACTIONS(879),
    [sym__comment] = ACTIONS(97),
  },
  [310] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(881),
    [sym__comment] = ACTIONS(97),
  },
  [311] = {
    [sym_macro_content] = ACTIONS(883),
    [sym__comment] = ACTIONS(97),
  },
  [312] = {
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(310),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(288),
  [13] = {.count = 1, .reusable = true}, SHIFT(311),
  [15] = {.count = 1, .reusable = true}, SHIFT(254),
  [17] = {.count = 1, .reusable = true}, SHIFT(59),
  [19] = {.count = 1, .reusable = false}, SHIFT(112),
  [21] = {.count = 1, .reusable = false}, SHIFT(58),
  [23] = {.count = 1, .reusable = true}, SHIFT(58),
  [25] = {.count = 1, .reusable = true}, SHIFT(35),
  [27] = {.count = 1, .reusable = true}, SHIFT(31),
  [29] = {.count = 1, .reusable = true}, SHIFT(184),
  [31] = {.count = 1, .reusable = true}, SHIFT(108),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(36),
  [37] = {.count = 1, .reusable = true}, SHIFT(34),
  [39] = {.count = 1, .reusable = true}, SHIFT(26),
  [41] = {.count = 1, .reusable = true}, SHIFT(32),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, SHIFT(167),
  [51] = {.count = 1, .reusable = true}, SHIFT(28),
  [53] = {.count = 1, .reusable = false}, SHIFT(4),
  [55] = {.count = 1, .reusable = true}, SHIFT(41),
  [57] = {.count = 1, .reusable = true}, SHIFT(43),
  [59] = {.count = 1, .reusable = true}, SHIFT(163),
  [61] = {.count = 1, .reusable = true}, SHIFT(42),
  [63] = {.count = 1, .reusable = true}, SHIFT(44),
  [65] = {.count = 1, .reusable = true}, SHIFT(25),
  [67] = {.count = 1, .reusable = true}, SHIFT(40),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(174),
  [73] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(21),
  [77] = {.count = 1, .reusable = true}, SHIFT(24),
  [79] = {.count = 1, .reusable = true}, SHIFT(175),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(217),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [89] = {.count = 1, .reusable = false}, SHIFT(47),
  [91] = {.count = 1, .reusable = true}, SHIFT(269),
  [93] = {.count = 1, .reusable = true}, SHIFT(14),
  [95] = {.count = 1, .reusable = true}, SHIFT(13),
  [97] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [115] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(217),
  [120] = {.count = 1, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(47),
  [125] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(269),
  [128] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(14),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(13),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_args, 1),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [140] = {.count = 1, .reusable = true}, SHIFT(212),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [144] = {.count = 1, .reusable = false}, SHIFT(72),
  [146] = {.count = 1, .reusable = true}, SHIFT(268),
  [148] = {.count = 1, .reusable = true}, SHIFT(7),
  [150] = {.count = 1, .reusable = true}, SHIFT(15),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [156] = {.count = 1, .reusable = true}, SHIFT(210),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 2),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_concatenation, 2),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(210),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 2),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 3),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 3),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 3),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(211),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 1),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 1),
  [207] = {.count = 1, .reusable = true}, SHIFT(206),
  [209] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2), SHIFT_REPEAT(211),
  [216] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(206),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [223] = {.count = 1, .reusable = true}, SHIFT(183),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [229] = {.count = 1, .reusable = true}, SHIFT(295),
  [231] = {.count = 1, .reusable = true}, SHIFT(208),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_key_single, 1),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_key_single, 1),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(208),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [242] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(295),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [249] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 2),
  [253] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [257] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2), SHIFT_REPEAT(183),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 8),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 8),
  [266] = {.count = 1, .reusable = true}, SHIFT(287),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(286),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [276] = {.count = 1, .reusable = true}, SHIFT(309),
  [278] = {.count = 1, .reusable = false}, SHIFT(161),
  [280] = {.count = 1, .reusable = true}, SHIFT(154),
  [282] = {.count = 1, .reusable = true}, SHIFT(153),
  [284] = {.count = 1, .reusable = false}, SHIFT(198),
  [286] = {.count = 1, .reusable = false}, SHIFT(151),
  [288] = {.count = 1, .reusable = true}, SHIFT(151),
  [290] = {.count = 1, .reusable = true}, SHIFT(147),
  [292] = {.count = 1, .reusable = true}, SHIFT(146),
  [294] = {.count = 1, .reusable = true}, SHIFT(203),
  [296] = {.count = 1, .reusable = true}, SHIFT(179),
  [298] = {.count = 1, .reusable = true}, SHIFT(204),
  [300] = {.count = 1, .reusable = true}, SHIFT(142),
  [302] = {.count = 1, .reusable = true}, SHIFT(141),
  [304] = {.count = 1, .reusable = false}, SHIFT(140),
  [306] = {.count = 1, .reusable = true}, SHIFT(131),
  [308] = {.count = 1, .reusable = true}, SHIFT(104),
  [310] = {.count = 1, .reusable = true}, SHIFT(205),
  [312] = {.count = 1, .reusable = true}, SHIFT(27),
  [314] = {.count = 1, .reusable = false}, SHIFT(202),
  [316] = {.count = 1, .reusable = true}, SHIFT(197),
  [318] = {.count = 1, .reusable = true}, SHIFT(196),
  [320] = {.count = 1, .reusable = true}, SHIFT(195),
  [322] = {.count = 1, .reusable = true}, SHIFT(194),
  [324] = {.count = 1, .reusable = true}, SHIFT(182),
  [326] = {.count = 1, .reusable = true}, SHIFT(302),
  [328] = {.count = 1, .reusable = true}, SHIFT(181),
  [330] = {.count = 1, .reusable = true}, SHIFT(192),
  [332] = {.count = 1, .reusable = true}, SHIFT(191),
  [334] = {.count = 1, .reusable = true}, SHIFT(188),
  [336] = {.count = 1, .reusable = true}, SHIFT(187),
  [338] = {.count = 1, .reusable = true}, SHIFT(193),
  [340] = {.count = 1, .reusable = true}, SHIFT(185),
  [342] = {.count = 1, .reusable = true}, SHIFT(186),
  [344] = {.count = 1, .reusable = true}, SHIFT(122),
  [346] = {.count = 1, .reusable = false}, SHIFT(251),
  [348] = {.count = 1, .reusable = true}, SHIFT(252),
  [350] = {.count = 1, .reusable = false}, SHIFT(190),
  [352] = {.count = 1, .reusable = true}, SHIFT(190),
  [354] = {.count = 1, .reusable = true}, SHIFT(285),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 1),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 1),
  [360] = {.count = 1, .reusable = true}, SHIFT(180),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [366] = {.count = 1, .reusable = true}, SHIFT(201),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [380] = {.count = 1, .reusable = false}, SHIFT(96),
  [382] = {.count = 1, .reusable = false}, SHIFT(156),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 7),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 7),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 13),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 13),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_last_command, 1, .production_id = 1),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_last_command, 1, .production_id = 1),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 9),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 9),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 6),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 6),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 12),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 12),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [568] = {.count = 1, .reusable = true}, SHIFT(94),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 3),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 3),
  [574] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 11),
  [576] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 11),
  [578] = {.count = 1, .reusable = false}, SHIFT(166),
  [580] = {.count = 1, .reusable = true}, SHIFT(176),
  [582] = {.count = 1, .reusable = true}, SHIFT(30),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [588] = {.count = 1, .reusable = false}, SHIFT(117),
  [590] = {.count = 1, .reusable = false}, SHIFT(168),
  [592] = {.count = 1, .reusable = true}, SHIFT(29),
  [594] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [596] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [598] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [600] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [602] = {.count = 1, .reusable = false}, SHIFT(171),
  [604] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [606] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(174),
  [611] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [613] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [615] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(175),
  [618] = {.count = 1, .reusable = true}, SHIFT(224),
  [620] = {.count = 1, .reusable = false}, SHIFT(63),
  [622] = {.count = 1, .reusable = true}, SHIFT(263),
  [624] = {.count = 1, .reusable = true}, SHIFT(10),
  [626] = {.count = 1, .reusable = true}, SHIFT(9),
  [628] = {.count = 1, .reusable = true}, SHIFT(218),
  [630] = {.count = 1, .reusable = false}, SHIFT(85),
  [632] = {.count = 1, .reusable = true}, SHIFT(273),
  [634] = {.count = 1, .reusable = true}, SHIFT(20),
  [636] = {.count = 1, .reusable = true}, SHIFT(19),
  [638] = {.count = 1, .reusable = true}, SHIFT(222),
  [640] = {.count = 1, .reusable = false}, SHIFT(227),
  [642] = {.count = 1, .reusable = true}, SHIFT(262),
  [644] = {.count = 1, .reusable = true}, SHIFT(12),
  [646] = {.count = 1, .reusable = true}, SHIFT(11),
  [648] = {.count = 1, .reusable = true}, SHIFT(215),
  [650] = {.count = 1, .reusable = false}, SHIFT(229),
  [652] = {.count = 1, .reusable = true}, SHIFT(261),
  [654] = {.count = 1, .reusable = true}, SHIFT(18),
  [656] = {.count = 1, .reusable = true}, SHIFT(17),
  [658] = {.count = 1, .reusable = false}, SHIFT(83),
  [660] = {.count = 1, .reusable = false}, SHIFT(243),
  [662] = {.count = 1, .reusable = false}, SHIFT(105),
  [664] = {.count = 1, .reusable = false}, SHIFT(231),
  [666] = {.count = 1, .reusable = false}, SHIFT(57),
  [668] = {.count = 1, .reusable = false}, SHIFT(86),
  [670] = {.count = 1, .reusable = false}, SHIFT(214),
  [672] = {.count = 1, .reusable = false}, SHIFT(16),
  [674] = {.count = 1, .reusable = false}, SHIFT(8),
  [676] = {.count = 1, .reusable = false}, SHIFT(92),
  [678] = {.count = 1, .reusable = false}, SHIFT(216),
  [680] = {.count = 1, .reusable = false}, SHIFT(73),
  [682] = {.count = 1, .reusable = false}, SHIFT(238),
  [684] = {.count = 1, .reusable = false}, SHIFT(220),
  [686] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2),
  [688] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(216),
  [691] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(16),
  [694] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(8),
  [697] = {.count = 1, .reusable = false}, SHIFT(52),
  [699] = {.count = 1, .reusable = false}, SHIFT(221),
  [701] = {.count = 1, .reusable = false}, SHIFT(98),
  [703] = {.count = 1, .reusable = false}, SHIFT(213),
  [705] = {.count = 1, .reusable = false}, SHIFT(78),
  [707] = {.count = 1, .reusable = false}, SHIFT(241),
  [709] = {.count = 1, .reusable = false}, SHIFT(56),
  [711] = {.count = 1, .reusable = false}, SHIFT(233),
  [713] = {.count = 1, .reusable = false}, SHIFT(225),
  [715] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(209),
  [718] = {.count = 1, .reusable = false}, SHIFT(81),
  [720] = {.count = 1, .reusable = false}, SHIFT(219),
  [722] = {.count = 1, .reusable = false}, SHIFT(236),
  [724] = {.count = 1, .reusable = true}, SHIFT(209),
  [726] = {.count = 1, .reusable = true}, SHIFT(207),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(207),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 10),
  [733] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [735] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 1),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 1),
  [744] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [748] = {.count = 1, .reusable = true}, SHIFT(6),
  [750] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 1),
  [752] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [754] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 2),
  [756] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [758] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 2),
  [760] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [764] = {.count = 1, .reusable = false}, SHIFT(77),
  [766] = {.count = 1, .reusable = false}, SHIFT(266),
  [768] = {.count = 1, .reusable = false}, SHIFT(239),
  [770] = {.count = 1, .reusable = false}, SHIFT(264),
  [772] = {.count = 1, .reusable = false}, SHIFT(234),
  [774] = {.count = 1, .reusable = false}, SHIFT(265),
  [776] = {.count = 1, .reusable = false}, SHIFT(80),
  [778] = {.count = 1, .reusable = false}, SHIFT(260),
  [780] = {.count = 1, .reusable = false}, SHIFT(242),
  [782] = {.count = 1, .reusable = false}, SHIFT(237),
  [784] = {.count = 1, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2),
  [786] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2), SHIFT_REPEAT(266),
  [789] = {.count = 1, .reusable = false}, SHIFT(69),
  [791] = {.count = 1, .reusable = false}, SHIFT(271),
  [793] = {.count = 1, .reusable = false}, SHIFT(51),
  [795] = {.count = 1, .reusable = false}, SHIFT(272),
  [797] = {.count = 1, .reusable = false}, SHIFT(91),
  [799] = {.count = 1, .reusable = false}, SHIFT(87),
  [801] = {.count = 1, .reusable = false}, SHIFT(55),
  [803] = {.count = 1, .reusable = false}, SHIFT(97),
  [805] = {.count = 1, .reusable = false}, SHIFT(270),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [809] = {.count = 1, .reusable = true}, SHIFT(22),
  [811] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(22),
  [816] = {.count = 1, .reusable = true}, SHIFT(23),
  [818] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [820] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(23),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [825] = {.count = 1, .reusable = false}, SHIFT(257),
  [827] = {.count = 1, .reusable = true}, SHIFT(258),
  [829] = {.count = 1, .reusable = false}, SHIFT(158),
  [831] = {.count = 1, .reusable = false}, SHIFT(290),
  [833] = {.count = 1, .reusable = false}, SHIFT(143),
  [835] = {.count = 1, .reusable = false}, SHIFT(296),
  [837] = {.count = 1, .reusable = false}, SHIFT(148),
  [839] = {.count = 1, .reusable = true}, SHIFT(88),
  [841] = {.count = 1, .reusable = true}, SHIFT(143),
  [843] = {.count = 1, .reusable = true}, SHIFT(247),
  [845] = {.count = 1, .reusable = true}, SHIFT(248),
  [847] = {.count = 1, .reusable = true}, SHIFT(53),
  [849] = {.count = 1, .reusable = true}, SHIFT(95),
  [851] = {.count = 1, .reusable = false}, SHIFT(103),
  [853] = {.count = 1, .reusable = true}, SHIFT(113),
  [855] = {.count = 1, .reusable = true}, SHIFT(235),
  [857] = {.count = 1, .reusable = true}, SHIFT(228),
  [859] = {.count = 1, .reusable = true}, SHIFT(67),
  [861] = {.count = 1, .reusable = true}, SHIFT(76),
  [863] = {.count = 1, .reusable = true}, SHIFT(93),
  [865] = {.count = 1, .reusable = false}, SHIFT(70),
  [867] = {.count = 1, .reusable = true}, SHIFT(111),
  [869] = {.count = 1, .reusable = true}, SHIFT(110),
  [871] = {.count = 1, .reusable = true}, SHIFT(244),
  [873] = {.count = 1, .reusable = true}, SHIFT(245),
  [875] = {.count = 1, .reusable = true}, SHIFT(54),
  [877] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [879] = {.count = 1, .reusable = true}, SHIFT(116),
  [881] = {.count = 1, .reusable = false}, SHIFT(304),
  [883] = {.count = 1, .reusable = false}, SHIFT(303),
  [885] = {.count = 1, .reusable = true}, SHIFT(90),
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
