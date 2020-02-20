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
#define STATE_COUNT 307
#define SYMBOL_COUNT 172
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
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(293);
      if (lookahead == '%') ADVANCE(225);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '(') ADVANCE(215);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(190);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '=') ADVANCE(235);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '?') ADVANCE(233);
      if (lookahead == '@') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '%') ADVANCE(225);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '.') ADVANCE(219);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '?') ADVANCE(233);
      if (lookahead == '@') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(66);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '@') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(283);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '@') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(263);
      if (lookahead == '`') ADVANCE(306);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '=' &&
          lookahead != '\\') ADVANCE(266);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(320);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(80);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(256);
      if (lookahead == ' ') SKIP(6)
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(260);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '\r') ADVANCE(318);
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(320);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == '`') ADVANCE(307);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(18);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(76);
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
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '#') ADVANCE(315);
      if (lookahead == '$') ADVANCE(19);
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
      if (lookahead == '"') ADVANCE(81);
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
      if (lookahead == '#') ADVANCE(310);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == ')') ADVANCE(217);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(320);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == '@') ADVANCE(170);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == '|') ADVANCE(92);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(319);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '|') ADVANCE(93);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 16:
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
    case 17:
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '{') ADVANCE(79);
      if (lookahead != 0) ADVANCE(266);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '*') ADVANCE(267);
      if (lookahead == '{') ADVANCE(51);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '>') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(273);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(45);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == '*') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 46:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(45);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '}') ADVANCE(285);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(45);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(45);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == '}') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '}') ADVANCE(271);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(45);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(191);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(178);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(181);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(187);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(194);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(203);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(212);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(166);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == '>') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 71:
      if (lookahead == '{') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(283);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(266);
      END_STATE();
    case 73:
      if (lookahead == '}') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == '}') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 77:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(85);
      if (lookahead == '*') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(73);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '`') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(90);
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
          lookahead == '~') ADVANCE(91);
      END_STATE();
    case 91:
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
          lookahead == '~') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '.') ADVANCE(223);
      if (lookahead == 'H') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(94);
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(171);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(45);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(45);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '>') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '=') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'k') ADVANCE(144);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(152);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'k') ADVANCE(146);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == 'S') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(172);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '@') ADVANCE(124);
      if (lookahead == 'B') ADVANCE(52);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(173);
      if (lookahead == '(') ADVANCE(176);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'B') ADVANCE(23);
      if (lookahead == 'F') ADVANCE(24);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(174);
      if (lookahead == '(') ADVANCE(177);
      if (lookahead == '@') ADVANCE(125);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'F') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'k') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(231);
      if (lookahead == '!') ADVANCE(220);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(228);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(228);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(228);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(243);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(45);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(240);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(45);
      if (lookahead != 0) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '>') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead == '>') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead == ')') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(256);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(45);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(45);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
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
          lookahead != '|') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(72);
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
      if (lookahead == '$') ADVANCE(72);
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
      if (lookahead == '$') ADVANCE(72);
      if (lookahead == '%') ADVANCE(262);
      if (lookahead == '>') ADVANCE(251);
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
      if (lookahead == '$') ADVANCE(72);
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
      if (lookahead == '$') ADVANCE(72);
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
      if (lookahead == '$') ADVANCE(72);
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
      if (lookahead == '$') ADVANCE(21);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(21);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(21);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(21);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__eq_sep_key_identifier);
      if (lookahead == '$') ADVANCE(21);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_macro_content);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(45);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(277);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(45);
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
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '*') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(76);
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
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '>') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(76);
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
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(76);
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
      if (lookahead == '$') ADVANCE(20);
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
          lookahead == '~') ADVANCE(45);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(20);
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
          lookahead == '~') ADVANCE(45);
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
          lookahead == '`') ADVANCE(45);
      if (lookahead != 0) ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_double_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(289);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(45);
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
          lookahead == '\\') ADVANCE(45);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_single_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(45);
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
          lookahead != '\r') ADVANCE(40);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(122);
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
          lookahead != '\r') ADVANCE(40);
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
          lookahead != '$') ADVANCE(73);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '$') ADVANCE(74);
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
          lookahead != '\r') ADVANCE(40);
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
  [47] = {.lex_state = 3, .external_lex_state = 4},
  [48] = {.lex_state = 2, .external_lex_state = 5},
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
  [59] = {.lex_state = 2, .external_lex_state = 4},
  [60] = {.lex_state = 3, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 6},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 7},
  [64] = {.lex_state = 0, .external_lex_state = 7},
  [65] = {.lex_state = 0, .external_lex_state = 7},
  [66] = {.lex_state = 0, .external_lex_state = 6},
  [67] = {.lex_state = 0, .external_lex_state = 6},
  [68] = {.lex_state = 0, .external_lex_state = 7},
  [69] = {.lex_state = 0, .external_lex_state = 6},
  [70] = {.lex_state = 0, .external_lex_state = 6},
  [71] = {.lex_state = 0, .external_lex_state = 4},
  [72] = {.lex_state = 0, .external_lex_state = 6},
  [73] = {.lex_state = 0, .external_lex_state = 6},
  [74] = {.lex_state = 0, .external_lex_state = 7},
  [75] = {.lex_state = 0, .external_lex_state = 7},
  [76] = {.lex_state = 0, .external_lex_state = 6},
  [77] = {.lex_state = 0, .external_lex_state = 7},
  [78] = {.lex_state = 0, .external_lex_state = 4},
  [79] = {.lex_state = 0, .external_lex_state = 7},
  [80] = {.lex_state = 0, .external_lex_state = 7},
  [81] = {.lex_state = 0, .external_lex_state = 5},
  [82] = {.lex_state = 0, .external_lex_state = 7},
  [83] = {.lex_state = 0, .external_lex_state = 6},
  [84] = {.lex_state = 0, .external_lex_state = 5},
  [85] = {.lex_state = 0, .external_lex_state = 6},
  [86] = {.lex_state = 0, .external_lex_state = 5},
  [87] = {.lex_state = 0, .external_lex_state = 6},
  [88] = {.lex_state = 0, .external_lex_state = 6},
  [89] = {.lex_state = 0, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 6},
  [91] = {.lex_state = 0, .external_lex_state = 6},
  [92] = {.lex_state = 0, .external_lex_state = 5},
  [93] = {.lex_state = 0, .external_lex_state = 5},
  [94] = {.lex_state = 0, .external_lex_state = 5},
  [95] = {.lex_state = 0, .external_lex_state = 5},
  [96] = {.lex_state = 0, .external_lex_state = 5},
  [97] = {.lex_state = 0, .external_lex_state = 4},
  [98] = {.lex_state = 0, .external_lex_state = 5},
  [99] = {.lex_state = 0, .external_lex_state = 4},
  [100] = {.lex_state = 0, .external_lex_state = 6},
  [101] = {.lex_state = 4, .external_lex_state = 4},
  [102] = {.lex_state = 0, .external_lex_state = 5},
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
  [158] = {.lex_state = 5, .external_lex_state = 4},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 12, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 13, .external_lex_state = 4},
  [164] = {.lex_state = 14, .external_lex_state = 4},
  [165] = {.lex_state = 0, .external_lex_state = 4},
  [166] = {.lex_state = 0, .external_lex_state = 4},
  [167] = {.lex_state = 0, .external_lex_state = 4},
  [168] = {.lex_state = 0, .external_lex_state = 4},
  [169] = {.lex_state = 1, .external_lex_state = 2},
  [170] = {.lex_state = 1, .external_lex_state = 2},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 9},
  [173] = {.lex_state = 9},
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
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 9},
  [207] = {.lex_state = 11},
  [208] = {.lex_state = 0, .external_lex_state = 8},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 11},
  [211] = {.lex_state = 11},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 11},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 11},
  [218] = {.lex_state = 11},
  [219] = {.lex_state = 0, .external_lex_state = 8},
  [220] = {.lex_state = 11},
  [221] = {.lex_state = 0, .external_lex_state = 8},
  [222] = {.lex_state = 11},
  [223] = {.lex_state = 0, .external_lex_state = 8},
  [224] = {.lex_state = 9, .external_lex_state = 8},
  [225] = {.lex_state = 0, .external_lex_state = 8},
  [226] = {.lex_state = 9, .external_lex_state = 8},
  [227] = {.lex_state = 0, .external_lex_state = 8},
  [228] = {.lex_state = 0, .external_lex_state = 8},
  [229] = {.lex_state = 9, .external_lex_state = 8},
  [230] = {.lex_state = 0, .external_lex_state = 8},
  [231] = {.lex_state = 0, .external_lex_state = 8},
  [232] = {.lex_state = 0, .external_lex_state = 8},
  [233] = {.lex_state = 9, .external_lex_state = 8},
  [234] = {.lex_state = 9, .external_lex_state = 8},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 9, .external_lex_state = 8},
  [237] = {.lex_state = 9, .external_lex_state = 8},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 9, .external_lex_state = 8},
  [240] = {.lex_state = 11},
  [241] = {.lex_state = 9, .external_lex_state = 8},
  [242] = {.lex_state = 9, .external_lex_state = 8},
  [243] = {.lex_state = 11},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 9},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 9},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 15},
  [256] = {.lex_state = 15},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 15},
  [259] = {.lex_state = 15},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 15},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 15},
  [265] = {.lex_state = 15},
  [266] = {.lex_state = 15},
  [267] = {.lex_state = 15},
  [268] = {.lex_state = 15},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 238},
  [281] = {.lex_state = 238},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 17},
  [297] = {.lex_state = 90},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 6},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 0},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_commands] = STATE(302),
    [sym__command] = STATE(251),
    [sym_legacy_quoted_command] = STATE(105),
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_grep_command] = STATE(105),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(105),
    [sym_redirect_command] = STATE(251),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(142),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(142),
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
    [sym_macro_identifier] = ACTIONS(31),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [4] = {
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(142),
    [sym_arged_command] = STATE(142),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(142),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(142),
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
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [anon_sym_GT] = ACTIONS(45),
    [anon_sym_GT_GT] = ACTIONS(43),
    [sym_html_redirect_operator] = ACTIONS(45),
    [sym_html_append_operator] = ACTIONS(43),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(43),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_file_descriptor] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [5] = {
    [sym__command] = STATE(249),
    [sym_legacy_quoted_command] = STATE(105),
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_grep_command] = STATE(105),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(105),
    [sym_redirect_command] = STATE(249),
    [aux_sym_commands_repeat1] = STATE(169),
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
    [sym__command] = STATE(263),
    [sym_legacy_quoted_command] = STATE(105),
    [sym__simple_command] = STATE(105),
    [sym__tmp_command] = STATE(105),
    [sym__iter_command] = STATE(105),
    [sym__pipe_command] = STATE(105),
    [sym_grep_command] = STATE(105),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(105),
    [sym_arged_command] = STATE(105),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(105),
    [sym_redirect_command] = STATE(263),
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
    [sym__commands_singleline] = STATE(291),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [8] = {
    [sym__commands_singleline] = STATE(300),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [9] = {
    [sym__commands_singleline] = STATE(284),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [10] = {
    [sym__commands_singleline] = STATE(292),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [11] = {
    [sym__commands_singleline] = STATE(295),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [12] = {
    [sym__commands_singleline] = STATE(290),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [13] = {
    [sym__commands_singleline] = STATE(293),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [14] = {
    [sym__commands_singleline] = STATE(289),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [15] = {
    [sym__commands_singleline] = STATE(299),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [16] = {
    [sym__commands_singleline] = STATE(294),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [17] = {
    [sym__commands_singleline] = STATE(285),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [18] = {
    [sym__commands_singleline] = STATE(286),
    [sym__command] = STATE(269),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(269),
    [aux_sym__commands_singleline_repeat1] = STATE(22),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [19] = {
    [sym__commands_singleline] = STATE(306),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [20] = {
    [sym__commands_singleline] = STATE(287),
    [sym__command] = STATE(276),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(276),
    [aux_sym__commands_singleline_repeat1] = STATE(23),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [21] = {
    [sym__command] = STATE(271),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(271),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [22] = {
    [sym__command] = STATE(272),
    [sym_legacy_quoted_command] = STATE(159),
    [sym__simple_command] = STATE(159),
    [sym__tmp_command] = STATE(159),
    [sym__iter_command] = STATE(159),
    [sym__pipe_command] = STATE(159),
    [sym_grep_command] = STATE(159),
    [sym_html_disable_command] = STATE(159),
    [sym_html_enable_command] = STATE(159),
    [sym_scr_tts_command] = STATE(159),
    [sym_pipe_command] = STATE(159),
    [sym_iter_flags_command] = STATE(159),
    [sym_iter_dbta_command] = STATE(159),
    [sym_iter_dbtb_command] = STATE(159),
    [sym_iter_dbts_command] = STATE(159),
    [sym_iter_file_lines_command] = STATE(159),
    [sym_iter_offsets_command] = STATE(159),
    [sym_iter_sdbquery_command] = STATE(159),
    [sym_iter_threads_command] = STATE(159),
    [sym_iter_bbs_command] = STATE(159),
    [sym_iter_instrs_command] = STATE(159),
    [sym_iter_sections_command] = STATE(159),
    [sym_iter_functions_command] = STATE(159),
    [sym_iter_step_command] = STATE(159),
    [sym_iter_interpret_command] = STATE(159),
    [sym_tmp_seek_command] = STATE(159),
    [sym_tmp_blksz_command] = STATE(159),
    [sym_tmp_fromto_command] = STATE(159),
    [sym_tmp_arch_command] = STATE(159),
    [sym_tmp_bits_command] = STATE(159),
    [sym_tmp_nthi_command] = STATE(159),
    [sym_tmp_eval_command] = STATE(159),
    [sym_tmp_fs_command] = STATE(159),
    [sym_tmp_reli_command] = STATE(159),
    [sym_tmp_kuery_command] = STATE(159),
    [sym_tmp_fd_command] = STATE(159),
    [sym_tmp_reg_command] = STATE(159),
    [sym_tmp_file_command] = STATE(159),
    [sym_tmp_string_command] = STATE(159),
    [sym_tmp_hex_command] = STATE(159),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(159),
    [sym_arged_command] = STATE(159),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(159),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(159),
    [sym_redirect_command] = STATE(272),
    [aux_sym__commands_singleline_repeat1] = STATE(170),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [23] = {
    [sym__command] = STATE(275),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(275),
    [aux_sym__commands_singleline_repeat1] = STATE(170),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [24] = {
    [sym__command] = STATE(271),
    [sym_legacy_quoted_command] = STATE(157),
    [sym__simple_command] = STATE(157),
    [sym__tmp_command] = STATE(157),
    [sym__iter_command] = STATE(157),
    [sym__pipe_command] = STATE(157),
    [sym_grep_command] = STATE(157),
    [sym_html_disable_command] = STATE(157),
    [sym_html_enable_command] = STATE(157),
    [sym_scr_tts_command] = STATE(157),
    [sym_pipe_command] = STATE(157),
    [sym_iter_flags_command] = STATE(157),
    [sym_iter_dbta_command] = STATE(157),
    [sym_iter_dbtb_command] = STATE(157),
    [sym_iter_dbts_command] = STATE(157),
    [sym_iter_file_lines_command] = STATE(157),
    [sym_iter_offsets_command] = STATE(157),
    [sym_iter_sdbquery_command] = STATE(157),
    [sym_iter_threads_command] = STATE(157),
    [sym_iter_bbs_command] = STATE(157),
    [sym_iter_instrs_command] = STATE(157),
    [sym_iter_sections_command] = STATE(157),
    [sym_iter_functions_command] = STATE(157),
    [sym_iter_step_command] = STATE(157),
    [sym_iter_interpret_command] = STATE(157),
    [sym_tmp_seek_command] = STATE(157),
    [sym_tmp_blksz_command] = STATE(157),
    [sym_tmp_fromto_command] = STATE(157),
    [sym_tmp_arch_command] = STATE(157),
    [sym_tmp_bits_command] = STATE(157),
    [sym_tmp_nthi_command] = STATE(157),
    [sym_tmp_eval_command] = STATE(157),
    [sym_tmp_fs_command] = STATE(157),
    [sym_tmp_reli_command] = STATE(157),
    [sym_tmp_kuery_command] = STATE(157),
    [sym_tmp_fd_command] = STATE(157),
    [sym_tmp_reg_command] = STATE(157),
    [sym_tmp_file_command] = STATE(157),
    [sym_tmp_string_command] = STATE(157),
    [sym_tmp_hex_command] = STATE(157),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(157),
    [sym_arged_command] = STATE(157),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(157),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(157),
    [sym_redirect_command] = STATE(271),
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
    [sym_macro_identifier] = ACTIONS(31),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [25] = {
    [sym_legacy_quoted_command] = STATE(166),
    [sym__simple_command] = STATE(166),
    [sym__tmp_command] = STATE(166),
    [sym__iter_command] = STATE(166),
    [sym__pipe_command] = STATE(166),
    [sym_grep_command] = STATE(166),
    [sym_html_disable_command] = STATE(166),
    [sym_html_enable_command] = STATE(166),
    [sym_scr_tts_command] = STATE(166),
    [sym_pipe_command] = STATE(166),
    [sym_iter_flags_command] = STATE(166),
    [sym_iter_dbta_command] = STATE(166),
    [sym_iter_dbtb_command] = STATE(166),
    [sym_iter_dbts_command] = STATE(166),
    [sym_iter_file_lines_command] = STATE(166),
    [sym_iter_offsets_command] = STATE(166),
    [sym_iter_sdbquery_command] = STATE(166),
    [sym_iter_threads_command] = STATE(166),
    [sym_iter_bbs_command] = STATE(166),
    [sym_iter_instrs_command] = STATE(166),
    [sym_iter_sections_command] = STATE(166),
    [sym_iter_functions_command] = STATE(166),
    [sym_iter_step_command] = STATE(166),
    [sym_iter_interpret_command] = STATE(166),
    [sym_tmp_seek_command] = STATE(166),
    [sym_tmp_blksz_command] = STATE(166),
    [sym_tmp_fromto_command] = STATE(166),
    [sym_tmp_arch_command] = STATE(166),
    [sym_tmp_bits_command] = STATE(166),
    [sym_tmp_nthi_command] = STATE(166),
    [sym_tmp_eval_command] = STATE(166),
    [sym_tmp_fs_command] = STATE(166),
    [sym_tmp_reli_command] = STATE(166),
    [sym_tmp_kuery_command] = STATE(166),
    [sym_tmp_fd_command] = STATE(166),
    [sym_tmp_reg_command] = STATE(166),
    [sym_tmp_file_command] = STATE(166),
    [sym_tmp_string_command] = STATE(166),
    [sym_tmp_hex_command] = STATE(166),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(166),
    [sym_arged_command] = STATE(166),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(166),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(166),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [26] = {
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(168),
    [sym_arged_command] = STATE(168),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(168),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(168),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(165),
    [sym_arged_command] = STATE(165),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(173),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(47),
    [sym_last_command] = STATE(165),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(43),
    [sym_repeat_command] = STATE(165),
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
    [sym_macro_identifier] = ACTIONS(31),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(53),
    [sym__help_command] = ACTIONS(55),
    [sym_repeat_number] = ACTIONS(57),
    [sym_interpreter_identifier] = ACTIONS(59),
  },
  [28] = {
    [sym_legacy_quoted_command] = STATE(161),
    [sym__simple_command] = STATE(161),
    [sym__tmp_command] = STATE(161),
    [sym__iter_command] = STATE(161),
    [sym__pipe_command] = STATE(161),
    [sym_grep_command] = STATE(161),
    [sym_html_disable_command] = STATE(161),
    [sym_html_enable_command] = STATE(161),
    [sym_scr_tts_command] = STATE(161),
    [sym_pipe_command] = STATE(161),
    [sym_iter_flags_command] = STATE(161),
    [sym_iter_dbta_command] = STATE(161),
    [sym_iter_dbtb_command] = STATE(161),
    [sym_iter_dbts_command] = STATE(161),
    [sym_iter_file_lines_command] = STATE(161),
    [sym_iter_offsets_command] = STATE(161),
    [sym_iter_sdbquery_command] = STATE(161),
    [sym_iter_threads_command] = STATE(161),
    [sym_iter_bbs_command] = STATE(161),
    [sym_iter_instrs_command] = STATE(161),
    [sym_iter_sections_command] = STATE(161),
    [sym_iter_functions_command] = STATE(161),
    [sym_iter_step_command] = STATE(161),
    [sym_iter_interpret_command] = STATE(161),
    [sym_tmp_seek_command] = STATE(161),
    [sym_tmp_blksz_command] = STATE(161),
    [sym_tmp_fromto_command] = STATE(161),
    [sym_tmp_arch_command] = STATE(161),
    [sym_tmp_bits_command] = STATE(161),
    [sym_tmp_nthi_command] = STATE(161),
    [sym_tmp_eval_command] = STATE(161),
    [sym_tmp_fs_command] = STATE(161),
    [sym_tmp_reli_command] = STATE(161),
    [sym_tmp_kuery_command] = STATE(161),
    [sym_tmp_fd_command] = STATE(161),
    [sym_tmp_reg_command] = STATE(161),
    [sym_tmp_file_command] = STATE(161),
    [sym_tmp_string_command] = STATE(161),
    [sym_tmp_hex_command] = STATE(161),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(161),
    [sym_arged_command] = STATE(161),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(161),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(161),
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
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(162),
    [sym_arged_command] = STATE(162),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(162),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(162),
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
  [30] = {
    [sym_legacy_quoted_command] = STATE(167),
    [sym__simple_command] = STATE(167),
    [sym__tmp_command] = STATE(167),
    [sym__iter_command] = STATE(167),
    [sym__pipe_command] = STATE(167),
    [sym_grep_command] = STATE(167),
    [sym_html_disable_command] = STATE(167),
    [sym_html_enable_command] = STATE(167),
    [sym_scr_tts_command] = STATE(167),
    [sym_pipe_command] = STATE(167),
    [sym_iter_flags_command] = STATE(167),
    [sym_iter_dbta_command] = STATE(167),
    [sym_iter_dbtb_command] = STATE(167),
    [sym_iter_dbts_command] = STATE(167),
    [sym_iter_file_lines_command] = STATE(167),
    [sym_iter_offsets_command] = STATE(167),
    [sym_iter_sdbquery_command] = STATE(167),
    [sym_iter_threads_command] = STATE(167),
    [sym_iter_bbs_command] = STATE(167),
    [sym_iter_instrs_command] = STATE(167),
    [sym_iter_sections_command] = STATE(167),
    [sym_iter_functions_command] = STATE(167),
    [sym_iter_step_command] = STATE(167),
    [sym_iter_interpret_command] = STATE(167),
    [sym_tmp_seek_command] = STATE(167),
    [sym_tmp_blksz_command] = STATE(167),
    [sym_tmp_fromto_command] = STATE(167),
    [sym_tmp_arch_command] = STATE(167),
    [sym_tmp_bits_command] = STATE(167),
    [sym_tmp_nthi_command] = STATE(167),
    [sym_tmp_eval_command] = STATE(167),
    [sym_tmp_fs_command] = STATE(167),
    [sym_tmp_reli_command] = STATE(167),
    [sym_tmp_kuery_command] = STATE(167),
    [sym_tmp_fd_command] = STATE(167),
    [sym_tmp_reg_command] = STATE(167),
    [sym_tmp_file_command] = STATE(167),
    [sym_tmp_string_command] = STATE(167),
    [sym_tmp_hex_command] = STATE(167),
    [sym__interpreter_command] = STATE(110),
    [sym_help_command] = STATE(167),
    [sym_arged_command] = STATE(167),
    [sym__simple_arged_command] = STATE(110),
    [sym__math_arged_command] = STATE(110),
    [sym__pointer_arged_command] = STATE(110),
    [sym__macro_arged_command] = STATE(110),
    [sym__system_command] = STATE(110),
    [sym__interpret_command] = STATE(110),
    [sym__interpret_search_identifier] = STATE(174),
    [sym__env_command] = STATE(110),
    [sym__env_command_identifier] = STATE(39),
    [sym_last_command] = STATE(167),
    [sym_last_command_identifier] = STATE(111),
    [sym__interpret_identifier] = STATE(36),
    [sym_repeat_command] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(61),
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
    [sym_macro_identifier] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(65),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [31] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(145),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [anon_sym_RPAREN] = ACTIONS(81),
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
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(114),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [anon_sym_RPAREN] = ACTIONS(97),
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
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(141),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [anon_sym_RPAREN] = ACTIONS(101),
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
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(106),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [anon_sym_RPAREN] = ACTIONS(97),
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
  [35] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(113),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [36] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(38),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(38),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [sym_eq_sep_args] = STATE(121),
    [sym__eq_sep_key_single] = STATE(66),
    [sym_eq_sep_key] = STATE(103),
    [sym_double_quoted_arg] = STATE(76),
    [sym_single_quoted_arg] = STATE(76),
    [sym_cmd_substitution_arg] = STATE(76),
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
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(145),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [41] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(106),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [42] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(114),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [43] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [44] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(141),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [45] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(113),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
  [46] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(38),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
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
    [sym_eq_sep_args] = STATE(121),
    [sym__eq_sep_key_single] = STATE(66),
    [sym_eq_sep_key] = STATE(103),
    [sym_double_quoted_arg] = STATE(76),
    [sym_single_quoted_arg] = STATE(76),
    [sym_cmd_substitution_arg] = STATE(76),
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
  [48] = {
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
  [49] = {
    [aux_sym_concatenation_repeat1] = STATE(48),
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
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
    [sym__concat] = ACTIONS(154),
  },
  [50] = {
    [aux_sym_concatenation_repeat1] = STATE(50),
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
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_file_descriptor] = ACTIONS(160),
    [sym__concat] = ACTIONS(164),
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
  [53] = {
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
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_file_descriptor] = ACTIONS(160),
    [sym__concat] = ACTIONS(160),
  },
  [54] = {
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
    [anon_sym_RPAREN] = ACTIONS(175),
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
  [55] = {
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
  [56] = {
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
  [57] = {
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
    [anon_sym_RPAREN] = ACTIONS(175),
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
  [58] = {
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
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(156),
  },
  [59] = {
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
    [anon_sym_RPAREN] = ACTIONS(187),
    [anon_sym_PIPE_DOT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_GT_GT] = ACTIONS(187),
    [sym_html_redirect_operator] = ACTIONS(189),
    [sym_html_append_operator] = ACTIONS(187),
    [sym_arg_identifier] = ACTIONS(189),
    [anon_sym_SQUOTE] = ACTIONS(187),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
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
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(191),
    [sym_html_redirect_operator] = ACTIONS(193),
    [sym_html_append_operator] = ACTIONS(191),
    [sym__eq_sep_key_identifier] = ACTIONS(193),
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
    [aux_sym_eq_sep_key_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
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
    [anon_sym_PIPE_DOT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(195),
    [sym_html_redirect_operator] = ACTIONS(197),
    [sym_html_append_operator] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_file_descriptor] = ACTIONS(195),
    [sym__eq_sep_concat] = ACTIONS(199),
  },
  [62] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_PIPE] = ACTIONS(204),
    [anon_sym_PIPEH] = ACTIONS(202),
    [anon_sym_PIPET] = ACTIONS(202),
    [anon_sym_AT_AT] = ACTIONS(204),
    [anon_sym_AT_ATdbt] = ACTIONS(204),
    [anon_sym_AT_ATdbta] = ACTIONS(202),
    [anon_sym_AT_ATdbtb] = ACTIONS(202),
    [anon_sym_AT_ATdbts] = ACTIONS(202),
    [anon_sym_AT_AT_DOT] = ACTIONS(202),
    [anon_sym_AT_AT_EQ] = ACTIONS(202),
    [anon_sym_AT_ATk] = ACTIONS(202),
    [anon_sym_AT_ATt] = ACTIONS(202),
    [anon_sym_AT_ATb] = ACTIONS(202),
    [anon_sym_AT_ATi] = ACTIONS(204),
    [anon_sym_AT_ATiS] = ACTIONS(202),
    [anon_sym_AT_ATf] = ACTIONS(202),
    [anon_sym_AT_ATs_COLON] = ACTIONS(202),
    [anon_sym_AT_ATc_COLON] = ACTIONS(202),
    [anon_sym_AT] = ACTIONS(204),
    [anon_sym_AT_BANG] = ACTIONS(202),
    [anon_sym_AT_LPAREN] = ACTIONS(202),
    [anon_sym_ATa_COLON] = ACTIONS(202),
    [anon_sym_ATb_COLON] = ACTIONS(202),
    [anon_sym_ATB_COLON] = ACTIONS(202),
    [anon_sym_ATe_COLON] = ACTIONS(202),
    [anon_sym_ATF_COLON] = ACTIONS(202),
    [anon_sym_ATi_COLON] = ACTIONS(202),
    [anon_sym_ATk_COLON] = ACTIONS(202),
    [anon_sym_ATo_COLON] = ACTIONS(202),
    [anon_sym_ATr_COLON] = ACTIONS(202),
    [anon_sym_ATf_COLON] = ACTIONS(202),
    [anon_sym_ATs_COLON] = ACTIONS(202),
    [anon_sym_ATx_COLON] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_PIPE_DOT] = ACTIONS(202),
    [anon_sym_EQ] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_GT_GT] = ACTIONS(202),
    [sym_html_redirect_operator] = ACTIONS(204),
    [sym_html_append_operator] = ACTIONS(202),
    [anon_sym_BQUOTE] = ACTIONS(202),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(202),
    [anon_sym_CR] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [sym_file_descriptor] = ACTIONS(202),
    [sym__eq_sep_concat] = ACTIONS(206),
  },
  [63] = {
    [aux_sym_concatenation_repeat1] = STATE(64),
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
    [sym__eq_sep_concat] = ACTIONS(156),
    [sym__concat] = ACTIONS(208),
  },
  [64] = {
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
    [sym__concat] = ACTIONS(208),
  },
  [65] = {
    [aux_sym_concatenation_repeat1] = STATE(65),
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
    [sym__eq_sep_concat] = ACTIONS(160),
    [sym__concat] = ACTIONS(210),
  },
  [66] = {
    [aux_sym_eq_sep_key_repeat1] = STATE(62),
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
    [anon_sym_EQ] = ACTIONS(213),
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
    [sym__eq_sep_concat] = ACTIONS(206),
  },
  [67] = {
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
  [68] = {
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
  [69] = {
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
  [70] = {
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
  [71] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(71),
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
    [anon_sym_COMMA] = ACTIONS(221),
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
  },
  [72] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(90),
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
    [sym__eq_sep_concat] = ACTIONS(228),
  },
  [73] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(73),
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
    [anon_sym_RPAREN] = ACTIONS(230),
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
  [74] = {
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
  [75] = {
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
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(237),
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
    [anon_sym_PIPE_DOT] = ACTIONS(237),
    [anon_sym_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GT_GT] = ACTIONS(237),
    [sym_html_redirect_operator] = ACTIONS(239),
    [sym_html_append_operator] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(237),
    [anon_sym_CR] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(237),
    [sym_file_descriptor] = ACTIONS(237),
    [sym__eq_sep_concat] = ACTIONS(237),
  },
  [77] = {
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
  [78] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
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
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_ATF_COLON] = ACTIONS(241),
    [anon_sym_ATi_COLON] = ACTIONS(241),
    [anon_sym_ATk_COLON] = ACTIONS(241),
    [anon_sym_ATo_COLON] = ACTIONS(241),
    [anon_sym_ATr_COLON] = ACTIONS(241),
    [anon_sym_ATf_COLON] = ACTIONS(241),
    [anon_sym_ATs_COLON] = ACTIONS(241),
    [anon_sym_ATx_COLON] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_PIPE_DOT] = ACTIONS(241),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(241),
    [sym_html_redirect_operator] = ACTIONS(243),
    [sym_html_append_operator] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(241),
    [anon_sym_CR] = ACTIONS(241),
    [anon_sym_SEMI] = ACTIONS(241),
    [sym_file_descriptor] = ACTIONS(241),
  },
  [79] = {
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
  [80] = {
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
  [81] = {
    [aux_sym_concatenation_repeat1] = STATE(86),
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
    [sym__concat] = ACTIONS(247),
  },
  [82] = {
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
    [sym__eq_sep_concat] = ACTIONS(160),
    [sym__concat] = ACTIONS(160),
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
    [aux_sym_concatenation_repeat1] = STATE(84),
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
    [sym__concat] = ACTIONS(249),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
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
    [anon_sym_PIPE_DOT] = ACTIONS(195),
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(197),
    [anon_sym_GT_GT] = ACTIONS(195),
    [sym_html_redirect_operator] = ACTIONS(197),
    [sym_html_append_operator] = ACTIONS(195),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_file_descriptor] = ACTIONS(195),
    [sym__eq_sep_concat] = ACTIONS(195),
  },
  [86] = {
    [aux_sym_concatenation_repeat1] = STATE(84),
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
    [sym__concat] = ACTIONS(247),
  },
  [87] = {
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
  [88] = {
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
  [89] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_TILDE] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(254),
    [anon_sym_PIPEH] = ACTIONS(252),
    [anon_sym_PIPET] = ACTIONS(252),
    [anon_sym_AT_AT] = ACTIONS(254),
    [anon_sym_AT_ATdbt] = ACTIONS(254),
    [anon_sym_AT_ATdbta] = ACTIONS(252),
    [anon_sym_AT_ATdbtb] = ACTIONS(252),
    [anon_sym_AT_ATdbts] = ACTIONS(252),
    [anon_sym_AT_AT_DOT] = ACTIONS(252),
    [anon_sym_AT_AT_EQ] = ACTIONS(252),
    [anon_sym_AT_ATk] = ACTIONS(252),
    [anon_sym_AT_ATt] = ACTIONS(252),
    [anon_sym_AT_ATb] = ACTIONS(252),
    [anon_sym_AT_ATi] = ACTIONS(254),
    [anon_sym_AT_ATiS] = ACTIONS(252),
    [anon_sym_AT_ATf] = ACTIONS(252),
    [anon_sym_AT_ATs_COLON] = ACTIONS(252),
    [anon_sym_AT_ATc_COLON] = ACTIONS(252),
    [anon_sym_AT] = ACTIONS(254),
    [anon_sym_AT_BANG] = ACTIONS(252),
    [anon_sym_AT_LPAREN] = ACTIONS(252),
    [anon_sym_ATa_COLON] = ACTIONS(252),
    [anon_sym_ATb_COLON] = ACTIONS(252),
    [anon_sym_ATB_COLON] = ACTIONS(252),
    [anon_sym_ATe_COLON] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_ATF_COLON] = ACTIONS(252),
    [anon_sym_ATi_COLON] = ACTIONS(252),
    [anon_sym_ATk_COLON] = ACTIONS(252),
    [anon_sym_ATo_COLON] = ACTIONS(252),
    [anon_sym_ATr_COLON] = ACTIONS(252),
    [anon_sym_ATf_COLON] = ACTIONS(252),
    [anon_sym_ATs_COLON] = ACTIONS(252),
    [anon_sym_ATx_COLON] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(252),
    [anon_sym_PIPE_DOT] = ACTIONS(252),
    [anon_sym_GT] = ACTIONS(254),
    [anon_sym_GT_GT] = ACTIONS(252),
    [sym_html_redirect_operator] = ACTIONS(254),
    [sym_html_append_operator] = ACTIONS(252),
    [anon_sym_BQUOTE] = ACTIONS(252),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(252),
    [anon_sym_CR] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(252),
    [sym_file_descriptor] = ACTIONS(252),
  },
  [90] = {
    [aux_sym_eq_sep_val_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_TILDE] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(258),
    [anon_sym_PIPEH] = ACTIONS(256),
    [anon_sym_PIPET] = ACTIONS(256),
    [anon_sym_AT_AT] = ACTIONS(258),
    [anon_sym_AT_ATdbt] = ACTIONS(258),
    [anon_sym_AT_ATdbta] = ACTIONS(256),
    [anon_sym_AT_ATdbtb] = ACTIONS(256),
    [anon_sym_AT_ATdbts] = ACTIONS(256),
    [anon_sym_AT_AT_DOT] = ACTIONS(256),
    [anon_sym_AT_AT_EQ] = ACTIONS(256),
    [anon_sym_AT_ATk] = ACTIONS(256),
    [anon_sym_AT_ATt] = ACTIONS(256),
    [anon_sym_AT_ATb] = ACTIONS(256),
    [anon_sym_AT_ATi] = ACTIONS(258),
    [anon_sym_AT_ATiS] = ACTIONS(256),
    [anon_sym_AT_ATf] = ACTIONS(256),
    [anon_sym_AT_ATs_COLON] = ACTIONS(256),
    [anon_sym_AT_ATc_COLON] = ACTIONS(256),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_AT_BANG] = ACTIONS(256),
    [anon_sym_AT_LPAREN] = ACTIONS(256),
    [anon_sym_ATa_COLON] = ACTIONS(256),
    [anon_sym_ATb_COLON] = ACTIONS(256),
    [anon_sym_ATB_COLON] = ACTIONS(256),
    [anon_sym_ATe_COLON] = ACTIONS(256),
    [anon_sym_ATF_COLON] = ACTIONS(256),
    [anon_sym_ATi_COLON] = ACTIONS(256),
    [anon_sym_ATk_COLON] = ACTIONS(256),
    [anon_sym_ATo_COLON] = ACTIONS(256),
    [anon_sym_ATr_COLON] = ACTIONS(256),
    [anon_sym_ATf_COLON] = ACTIONS(256),
    [anon_sym_ATs_COLON] = ACTIONS(256),
    [anon_sym_ATx_COLON] = ACTIONS(256),
    [anon_sym_RPAREN] = ACTIONS(256),
    [anon_sym_PIPE_DOT] = ACTIONS(256),
    [anon_sym_GT] = ACTIONS(258),
    [anon_sym_GT_GT] = ACTIONS(256),
    [sym_html_redirect_operator] = ACTIONS(258),
    [sym_html_append_operator] = ACTIONS(256),
    [anon_sym_BQUOTE] = ACTIONS(256),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(256),
    [anon_sym_CR] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(256),
    [sym_file_descriptor] = ACTIONS(256),
    [sym__eq_sep_concat] = ACTIONS(228),
  },
  [91] = {
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
    [sym__eq_sep_concat] = ACTIONS(156),
  },
  [92] = {
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
  [93] = {
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
    [anon_sym_RPAREN] = ACTIONS(179),
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
  [94] = {
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
  [95] = {
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
    [anon_sym_RPAREN] = ACTIONS(167),
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
    [anon_sym_COMMA] = ACTIONS(217),
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
  },
  [98] = {
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
    [anon_sym_RPAREN] = ACTIONS(171),
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
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_TILDE] = ACTIONS(260),
    [anon_sym_PIPE] = ACTIONS(262),
    [anon_sym_PIPEH] = ACTIONS(260),
    [anon_sym_PIPET] = ACTIONS(260),
    [anon_sym_AT_AT] = ACTIONS(262),
    [anon_sym_AT_ATdbt] = ACTIONS(262),
    [anon_sym_AT_ATdbta] = ACTIONS(260),
    [anon_sym_AT_ATdbtb] = ACTIONS(260),
    [anon_sym_AT_ATdbts] = ACTIONS(260),
    [anon_sym_AT_AT_DOT] = ACTIONS(260),
    [anon_sym_AT_AT_EQ] = ACTIONS(260),
    [anon_sym_AT_ATk] = ACTIONS(260),
    [anon_sym_AT_ATt] = ACTIONS(260),
    [anon_sym_AT_ATb] = ACTIONS(260),
    [anon_sym_AT_ATi] = ACTIONS(262),
    [anon_sym_AT_ATiS] = ACTIONS(260),
    [anon_sym_AT_ATf] = ACTIONS(260),
    [anon_sym_COLON] = ACTIONS(264),
    [anon_sym_AT_ATs_COLON] = ACTIONS(260),
    [anon_sym_AT_ATc_COLON] = ACTIONS(260),
    [anon_sym_AT] = ACTIONS(262),
    [anon_sym_AT_BANG] = ACTIONS(260),
    [anon_sym_AT_LPAREN] = ACTIONS(260),
    [anon_sym_ATa_COLON] = ACTIONS(260),
    [anon_sym_ATb_COLON] = ACTIONS(260),
    [anon_sym_ATB_COLON] = ACTIONS(260),
    [anon_sym_ATe_COLON] = ACTIONS(260),
    [anon_sym_ATF_COLON] = ACTIONS(260),
    [anon_sym_ATi_COLON] = ACTIONS(260),
    [anon_sym_ATk_COLON] = ACTIONS(260),
    [anon_sym_ATo_COLON] = ACTIONS(260),
    [anon_sym_ATr_COLON] = ACTIONS(260),
    [anon_sym_ATf_COLON] = ACTIONS(260),
    [anon_sym_ATs_COLON] = ACTIONS(260),
    [anon_sym_ATx_COLON] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(260),
    [anon_sym_PIPE_DOT] = ACTIONS(260),
    [anon_sym_GT] = ACTIONS(262),
    [anon_sym_GT_GT] = ACTIONS(260),
    [sym_html_redirect_operator] = ACTIONS(262),
    [sym_html_append_operator] = ACTIONS(260),
    [anon_sym_BQUOTE] = ACTIONS(260),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(260),
    [anon_sym_CR] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(260),
    [sym_file_descriptor] = ACTIONS(260),
  },
  [100] = {
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
    [anon_sym_RPAREN] = ACTIONS(230),
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
    [sym__eq_sep_concat] = ACTIONS(230),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(266),
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_PIPEH] = ACTIONS(268),
    [anon_sym_PIPET] = ACTIONS(268),
    [anon_sym_AT_AT] = ACTIONS(268),
    [anon_sym_AT_ATdbt] = ACTIONS(268),
    [anon_sym_AT_ATdbta] = ACTIONS(268),
    [anon_sym_AT_ATdbtb] = ACTIONS(268),
    [anon_sym_AT_ATdbts] = ACTIONS(268),
    [anon_sym_AT_AT_DOT] = ACTIONS(268),
    [anon_sym_AT_AT_EQ] = ACTIONS(268),
    [anon_sym_AT_ATk] = ACTIONS(268),
    [anon_sym_AT_ATt] = ACTIONS(268),
    [anon_sym_AT_ATb] = ACTIONS(268),
    [anon_sym_AT_ATi] = ACTIONS(268),
    [anon_sym_AT_ATiS] = ACTIONS(268),
    [anon_sym_AT_ATf] = ACTIONS(268),
    [anon_sym_AT_ATs_COLON] = ACTIONS(268),
    [anon_sym_AT_ATc_COLON] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(268),
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
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_PIPE_DOT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(268),
    [sym_html_redirect_operator] = ACTIONS(268),
    [sym_html_append_operator] = ACTIONS(268),
    [sym_macro_content] = ACTIONS(272),
    [anon_sym_BQUOTE] = ACTIONS(268),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(266),
    [anon_sym_CR] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_file_descriptor] = ACTIONS(266),
  },
  [102] = {
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
    [sym__concat] = ACTIONS(160),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_TILDE] = ACTIONS(274),
    [anon_sym_PIPE] = ACTIONS(276),
    [anon_sym_PIPEH] = ACTIONS(274),
    [anon_sym_PIPET] = ACTIONS(274),
    [anon_sym_AT_AT] = ACTIONS(276),
    [anon_sym_AT_ATdbt] = ACTIONS(276),
    [anon_sym_AT_ATdbta] = ACTIONS(274),
    [anon_sym_AT_ATdbtb] = ACTIONS(274),
    [anon_sym_AT_ATdbts] = ACTIONS(274),
    [anon_sym_AT_AT_DOT] = ACTIONS(274),
    [anon_sym_AT_AT_EQ] = ACTIONS(274),
    [anon_sym_AT_ATk] = ACTIONS(274),
    [anon_sym_AT_ATt] = ACTIONS(274),
    [anon_sym_AT_ATb] = ACTIONS(274),
    [anon_sym_AT_ATi] = ACTIONS(276),
    [anon_sym_AT_ATiS] = ACTIONS(274),
    [anon_sym_AT_ATf] = ACTIONS(274),
    [anon_sym_AT_ATs_COLON] = ACTIONS(274),
    [anon_sym_AT_ATc_COLON] = ACTIONS(274),
    [anon_sym_AT] = ACTIONS(276),
    [anon_sym_AT_BANG] = ACTIONS(274),
    [anon_sym_AT_LPAREN] = ACTIONS(274),
    [anon_sym_ATa_COLON] = ACTIONS(274),
    [anon_sym_ATb_COLON] = ACTIONS(274),
    [anon_sym_ATB_COLON] = ACTIONS(274),
    [anon_sym_ATe_COLON] = ACTIONS(274),
    [anon_sym_ATF_COLON] = ACTIONS(274),
    [anon_sym_ATi_COLON] = ACTIONS(274),
    [anon_sym_ATk_COLON] = ACTIONS(274),
    [anon_sym_ATo_COLON] = ACTIONS(274),
    [anon_sym_ATr_COLON] = ACTIONS(274),
    [anon_sym_ATf_COLON] = ACTIONS(274),
    [anon_sym_ATs_COLON] = ACTIONS(274),
    [anon_sym_ATx_COLON] = ACTIONS(274),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_PIPE_DOT] = ACTIONS(274),
    [anon_sym_EQ] = ACTIONS(278),
    [anon_sym_GT] = ACTIONS(276),
    [anon_sym_GT_GT] = ACTIONS(274),
    [sym_html_redirect_operator] = ACTIONS(276),
    [sym_html_append_operator] = ACTIONS(274),
    [anon_sym_BQUOTE] = ACTIONS(274),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(274),
    [anon_sym_CR] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(274),
    [sym_file_descriptor] = ACTIONS(274),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_TILDE] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(282),
    [anon_sym_PIPEH] = ACTIONS(280),
    [anon_sym_PIPET] = ACTIONS(280),
    [anon_sym_AT_AT] = ACTIONS(282),
    [anon_sym_AT_ATdbt] = ACTIONS(282),
    [anon_sym_AT_ATdbta] = ACTIONS(280),
    [anon_sym_AT_ATdbtb] = ACTIONS(280),
    [anon_sym_AT_ATdbts] = ACTIONS(280),
    [anon_sym_AT_AT_DOT] = ACTIONS(280),
    [anon_sym_AT_AT_EQ] = ACTIONS(280),
    [anon_sym_AT_ATk] = ACTIONS(280),
    [anon_sym_AT_ATt] = ACTIONS(280),
    [anon_sym_AT_ATb] = ACTIONS(280),
    [anon_sym_AT_ATi] = ACTIONS(282),
    [anon_sym_AT_ATiS] = ACTIONS(280),
    [anon_sym_AT_ATf] = ACTIONS(280),
    [anon_sym_AT_ATs_COLON] = ACTIONS(280),
    [anon_sym_AT_ATc_COLON] = ACTIONS(280),
    [anon_sym_AT] = ACTIONS(282),
    [anon_sym_AT_BANG] = ACTIONS(280),
    [anon_sym_AT_LPAREN] = ACTIONS(280),
    [anon_sym_ATa_COLON] = ACTIONS(280),
    [anon_sym_ATb_COLON] = ACTIONS(280),
    [anon_sym_ATB_COLON] = ACTIONS(280),
    [anon_sym_ATe_COLON] = ACTIONS(280),
    [anon_sym_ATF_COLON] = ACTIONS(280),
    [anon_sym_ATi_COLON] = ACTIONS(280),
    [anon_sym_ATk_COLON] = ACTIONS(280),
    [anon_sym_ATo_COLON] = ACTIONS(280),
    [anon_sym_ATr_COLON] = ACTIONS(280),
    [anon_sym_ATf_COLON] = ACTIONS(280),
    [anon_sym_ATs_COLON] = ACTIONS(280),
    [anon_sym_ATx_COLON] = ACTIONS(280),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_RPAREN] = ACTIONS(280),
    [anon_sym_PIPE_DOT] = ACTIONS(280),
    [anon_sym_GT] = ACTIONS(282),
    [anon_sym_GT_GT] = ACTIONS(280),
    [sym_html_redirect_operator] = ACTIONS(282),
    [sym_html_append_operator] = ACTIONS(280),
    [anon_sym_BQUOTE] = ACTIONS(280),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(280),
    [anon_sym_CR] = ACTIONS(280),
    [anon_sym_SEMI] = ACTIONS(280),
    [sym_file_descriptor] = ACTIONS(280),
  },
  [105] = {
    [sym__redirect_operator] = STATE(191),
    [sym_fdn_redirect_operator] = STATE(191),
    [sym_fdn_append_operator] = STATE(191),
    [ts_builtin_sym_end] = ACTIONS(286),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(290),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(308),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(360),
    [sym_html_redirect_operator] = ACTIONS(362),
    [sym_html_append_operator] = ACTIONS(364),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(286),
    [anon_sym_CR] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(286),
    [sym_file_descriptor] = ACTIONS(366),
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
    [anon_sym_TILDE] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_PIPEH] = ACTIONS(376),
    [anon_sym_PIPET] = ACTIONS(376),
    [anon_sym_AT_AT] = ACTIONS(378),
    [anon_sym_AT_ATdbt] = ACTIONS(378),
    [anon_sym_AT_ATdbta] = ACTIONS(376),
    [anon_sym_AT_ATdbtb] = ACTIONS(376),
    [anon_sym_AT_ATdbts] = ACTIONS(376),
    [anon_sym_AT_AT_DOT] = ACTIONS(376),
    [anon_sym_AT_AT_EQ] = ACTIONS(376),
    [anon_sym_AT_ATk] = ACTIONS(376),
    [anon_sym_AT_ATt] = ACTIONS(376),
    [anon_sym_AT_ATb] = ACTIONS(376),
    [anon_sym_AT_ATi] = ACTIONS(378),
    [anon_sym_AT_ATiS] = ACTIONS(376),
    [anon_sym_AT_ATf] = ACTIONS(376),
    [anon_sym_AT_ATs_COLON] = ACTIONS(376),
    [anon_sym_AT_ATc_COLON] = ACTIONS(376),
    [anon_sym_AT] = ACTIONS(378),
    [anon_sym_AT_BANG] = ACTIONS(376),
    [anon_sym_AT_LPAREN] = ACTIONS(376),
    [anon_sym_ATa_COLON] = ACTIONS(376),
    [anon_sym_ATb_COLON] = ACTIONS(376),
    [anon_sym_ATB_COLON] = ACTIONS(376),
    [anon_sym_ATe_COLON] = ACTIONS(376),
    [anon_sym_ATF_COLON] = ACTIONS(376),
    [anon_sym_ATi_COLON] = ACTIONS(376),
    [anon_sym_ATk_COLON] = ACTIONS(376),
    [anon_sym_ATo_COLON] = ACTIONS(376),
    [anon_sym_ATr_COLON] = ACTIONS(376),
    [anon_sym_ATf_COLON] = ACTIONS(376),
    [anon_sym_ATs_COLON] = ACTIONS(376),
    [anon_sym_ATx_COLON] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_PIPE_DOT] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_GT_GT] = ACTIONS(376),
    [sym_html_redirect_operator] = ACTIONS(378),
    [sym_html_append_operator] = ACTIONS(376),
    [anon_sym_BQUOTE] = ACTIONS(376),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(376),
    [anon_sym_CR] = ACTIONS(376),
    [anon_sym_SEMI] = ACTIONS(376),
    [sym_file_descriptor] = ACTIONS(376),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_TILDE] = ACTIONS(380),
    [anon_sym_PIPE] = ACTIONS(382),
    [anon_sym_PIPEH] = ACTIONS(380),
    [anon_sym_PIPET] = ACTIONS(380),
    [anon_sym_AT_AT] = ACTIONS(382),
    [anon_sym_AT_ATdbt] = ACTIONS(382),
    [anon_sym_AT_ATdbta] = ACTIONS(380),
    [anon_sym_AT_ATdbtb] = ACTIONS(380),
    [anon_sym_AT_ATdbts] = ACTIONS(380),
    [anon_sym_AT_AT_DOT] = ACTIONS(380),
    [anon_sym_AT_AT_EQ] = ACTIONS(380),
    [anon_sym_AT_ATk] = ACTIONS(380),
    [anon_sym_AT_ATt] = ACTIONS(380),
    [anon_sym_AT_ATb] = ACTIONS(380),
    [anon_sym_AT_ATi] = ACTIONS(382),
    [anon_sym_AT_ATiS] = ACTIONS(380),
    [anon_sym_AT_ATf] = ACTIONS(380),
    [anon_sym_AT_ATs_COLON] = ACTIONS(380),
    [anon_sym_AT_ATc_COLON] = ACTIONS(380),
    [anon_sym_AT] = ACTIONS(382),
    [anon_sym_AT_BANG] = ACTIONS(380),
    [anon_sym_AT_LPAREN] = ACTIONS(380),
    [anon_sym_ATa_COLON] = ACTIONS(380),
    [anon_sym_ATb_COLON] = ACTIONS(380),
    [anon_sym_ATB_COLON] = ACTIONS(380),
    [anon_sym_ATe_COLON] = ACTIONS(380),
    [anon_sym_ATF_COLON] = ACTIONS(380),
    [anon_sym_ATi_COLON] = ACTIONS(380),
    [anon_sym_ATk_COLON] = ACTIONS(380),
    [anon_sym_ATo_COLON] = ACTIONS(380),
    [anon_sym_ATr_COLON] = ACTIONS(380),
    [anon_sym_ATf_COLON] = ACTIONS(380),
    [anon_sym_ATs_COLON] = ACTIONS(380),
    [anon_sym_ATx_COLON] = ACTIONS(380),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_PIPE_DOT] = ACTIONS(380),
    [anon_sym_GT] = ACTIONS(382),
    [anon_sym_GT_GT] = ACTIONS(380),
    [sym_html_redirect_operator] = ACTIONS(382),
    [sym_html_append_operator] = ACTIONS(380),
    [anon_sym_BQUOTE] = ACTIONS(380),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(380),
    [anon_sym_CR] = ACTIONS(380),
    [anon_sym_SEMI] = ACTIONS(380),
    [sym_file_descriptor] = ACTIONS(380),
  },
  [110] = {
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
  [111] = {
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
  [114] = {
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
  [115] = {
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
  [116] = {
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
  [117] = {
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
  [118] = {
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
  [119] = {
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
  [120] = {
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
  [121] = {
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
  [122] = {
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
  [123] = {
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
  [124] = {
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
  [125] = {
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
  [126] = {
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
  [127] = {
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
  [128] = {
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
  [129] = {
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
  [130] = {
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
  [131] = {
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
  [132] = {
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
  [133] = {
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
  [134] = {
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
  [135] = {
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
  [136] = {
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
  [137] = {
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
  [138] = {
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
  [139] = {
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
  [140] = {
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
  [141] = {
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
  [142] = {
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
  [143] = {
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
  [144] = {
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
  [145] = {
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
  [146] = {
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
  [147] = {
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
  [148] = {
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
  [149] = {
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
  [150] = {
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
  [151] = {
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
  [152] = {
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
  [153] = {
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
  [154] = {
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
  [155] = {
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
  [156] = {
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
  [157] = {
    [sym__redirect_operator] = STATE(191),
    [sym_fdn_redirect_operator] = STATE(191),
    [sym_fdn_append_operator] = STATE(191),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(564),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(566),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(568),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(360),
    [sym_html_redirect_operator] = ACTIONS(362),
    [sym_html_append_operator] = ACTIONS(364),
    [anon_sym_BQUOTE] = ACTIONS(286),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(286),
    [sym_file_descriptor] = ACTIONS(366),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(570),
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_PIPEH] = ACTIONS(572),
    [anon_sym_PIPET] = ACTIONS(572),
    [sym_pipe_second_command] = ACTIONS(574),
    [anon_sym_AT_AT] = ACTIONS(572),
    [anon_sym_AT_ATdbt] = ACTIONS(572),
    [anon_sym_AT_ATdbta] = ACTIONS(572),
    [anon_sym_AT_ATdbtb] = ACTIONS(572),
    [anon_sym_AT_ATdbts] = ACTIONS(572),
    [anon_sym_AT_AT_DOT] = ACTIONS(572),
    [anon_sym_AT_AT_EQ] = ACTIONS(572),
    [anon_sym_AT_ATk] = ACTIONS(572),
    [anon_sym_AT_ATt] = ACTIONS(572),
    [anon_sym_AT_ATb] = ACTIONS(572),
    [anon_sym_AT_ATi] = ACTIONS(572),
    [anon_sym_AT_ATiS] = ACTIONS(572),
    [anon_sym_AT_ATf] = ACTIONS(572),
    [anon_sym_AT_ATs_COLON] = ACTIONS(572),
    [anon_sym_AT_ATc_COLON] = ACTIONS(572),
    [anon_sym_AT] = ACTIONS(572),
    [anon_sym_AT_BANG] = ACTIONS(572),
    [anon_sym_AT_LPAREN] = ACTIONS(572),
    [anon_sym_ATa_COLON] = ACTIONS(572),
    [anon_sym_ATb_COLON] = ACTIONS(572),
    [anon_sym_ATB_COLON] = ACTIONS(572),
    [anon_sym_ATe_COLON] = ACTIONS(572),
    [anon_sym_ATF_COLON] = ACTIONS(572),
    [anon_sym_ATi_COLON] = ACTIONS(572),
    [anon_sym_ATk_COLON] = ACTIONS(572),
    [anon_sym_ATo_COLON] = ACTIONS(572),
    [anon_sym_ATr_COLON] = ACTIONS(572),
    [anon_sym_ATf_COLON] = ACTIONS(572),
    [anon_sym_ATs_COLON] = ACTIONS(572),
    [anon_sym_ATx_COLON] = ACTIONS(572),
    [anon_sym_PIPE_DOT] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [sym_html_redirect_operator] = ACTIONS(572),
    [sym_html_append_operator] = ACTIONS(572),
    [sym__comment] = ACTIONS(95),
    [anon_sym_LF] = ACTIONS(572),
    [anon_sym_CR] = ACTIONS(572),
    [anon_sym_SEMI] = ACTIONS(572),
    [sym_file_descriptor] = ACTIONS(570),
  },
  [159] = {
    [sym__redirect_operator] = STATE(191),
    [sym_fdn_redirect_operator] = STATE(191),
    [sym_fdn_append_operator] = STATE(191),
    [anon_sym_TILDE] = ACTIONS(288),
    [anon_sym_PIPE] = ACTIONS(576),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(308),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(286),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(360),
    [sym_html_redirect_operator] = ACTIONS(362),
    [sym_html_append_operator] = ACTIONS(364),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(286),
    [sym_file_descriptor] = ACTIONS(366),
  },
  [160] = {
    [anon_sym_TILDE] = ACTIONS(268),
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_PIPEH] = ACTIONS(268),
    [anon_sym_PIPET] = ACTIONS(268),
    [anon_sym_AT_AT] = ACTIONS(268),
    [anon_sym_AT_ATdbt] = ACTIONS(268),
    [anon_sym_AT_ATdbta] = ACTIONS(268),
    [anon_sym_AT_ATdbtb] = ACTIONS(268),
    [anon_sym_AT_ATdbts] = ACTIONS(268),
    [anon_sym_AT_AT_DOT] = ACTIONS(268),
    [anon_sym_AT_AT_EQ] = ACTIONS(268),
    [anon_sym_AT_ATk] = ACTIONS(268),
    [anon_sym_AT_ATt] = ACTIONS(268),
    [anon_sym_AT_ATb] = ACTIONS(268),
    [anon_sym_AT_ATi] = ACTIONS(268),
    [anon_sym_AT_ATiS] = ACTIONS(268),
    [anon_sym_AT_ATf] = ACTIONS(268),
    [anon_sym_AT_ATs_COLON] = ACTIONS(268),
    [anon_sym_AT_ATc_COLON] = ACTIONS(268),
    [anon_sym_AT] = ACTIONS(268),
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
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_PIPE_DOT] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(268),
    [anon_sym_GT_GT] = ACTIONS(268),
    [sym_html_redirect_operator] = ACTIONS(268),
    [sym_html_append_operator] = ACTIONS(268),
    [sym_macro_content] = ACTIONS(272),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(268),
    [sym_file_descriptor] = ACTIONS(266),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(580),
    [anon_sym_TILDE] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(308),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(582),
    [anon_sym_GT_GT] = ACTIONS(580),
    [sym_html_redirect_operator] = ACTIONS(582),
    [sym_html_append_operator] = ACTIONS(580),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(580),
    [anon_sym_CR] = ACTIONS(580),
    [anon_sym_SEMI] = ACTIONS(580),
    [sym_file_descriptor] = ACTIONS(580),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(584),
    [anon_sym_TILDE] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(308),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(324),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_GT_GT] = ACTIONS(584),
    [sym_html_redirect_operator] = ACTIONS(586),
    [sym_html_append_operator] = ACTIONS(584),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(584),
    [anon_sym_CR] = ACTIONS(584),
    [anon_sym_SEMI] = ACTIONS(584),
    [sym_file_descriptor] = ACTIONS(584),
  },
  [163] = {
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_PIPEH] = ACTIONS(572),
    [anon_sym_PIPET] = ACTIONS(572),
    [sym_pipe_second_command] = ACTIONS(574),
    [anon_sym_AT_AT] = ACTIONS(572),
    [anon_sym_AT_ATdbt] = ACTIONS(572),
    [anon_sym_AT_ATdbta] = ACTIONS(572),
    [anon_sym_AT_ATdbtb] = ACTIONS(572),
    [anon_sym_AT_ATdbts] = ACTIONS(572),
    [anon_sym_AT_AT_DOT] = ACTIONS(572),
    [anon_sym_AT_AT_EQ] = ACTIONS(572),
    [anon_sym_AT_ATk] = ACTIONS(572),
    [anon_sym_AT_ATt] = ACTIONS(572),
    [anon_sym_AT_ATb] = ACTIONS(572),
    [anon_sym_AT_ATi] = ACTIONS(572),
    [anon_sym_AT_ATiS] = ACTIONS(572),
    [anon_sym_AT_ATf] = ACTIONS(572),
    [anon_sym_AT_ATs_COLON] = ACTIONS(572),
    [anon_sym_AT_ATc_COLON] = ACTIONS(572),
    [anon_sym_AT] = ACTIONS(572),
    [anon_sym_AT_BANG] = ACTIONS(572),
    [anon_sym_AT_LPAREN] = ACTIONS(572),
    [anon_sym_ATa_COLON] = ACTIONS(572),
    [anon_sym_ATb_COLON] = ACTIONS(572),
    [anon_sym_ATB_COLON] = ACTIONS(572),
    [anon_sym_ATe_COLON] = ACTIONS(572),
    [anon_sym_ATF_COLON] = ACTIONS(572),
    [anon_sym_ATi_COLON] = ACTIONS(572),
    [anon_sym_ATk_COLON] = ACTIONS(572),
    [anon_sym_ATo_COLON] = ACTIONS(572),
    [anon_sym_ATr_COLON] = ACTIONS(572),
    [anon_sym_ATf_COLON] = ACTIONS(572),
    [anon_sym_ATs_COLON] = ACTIONS(572),
    [anon_sym_ATx_COLON] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_PIPE_DOT] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [sym_html_redirect_operator] = ACTIONS(572),
    [sym_html_append_operator] = ACTIONS(572),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(572),
    [sym_file_descriptor] = ACTIONS(570),
  },
  [164] = {
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_PIPE] = ACTIONS(572),
    [anon_sym_PIPEH] = ACTIONS(572),
    [anon_sym_PIPET] = ACTIONS(572),
    [sym_pipe_second_command] = ACTIONS(574),
    [anon_sym_AT_AT] = ACTIONS(572),
    [anon_sym_AT_ATdbt] = ACTIONS(572),
    [anon_sym_AT_ATdbta] = ACTIONS(572),
    [anon_sym_AT_ATdbtb] = ACTIONS(572),
    [anon_sym_AT_ATdbts] = ACTIONS(572),
    [anon_sym_AT_AT_DOT] = ACTIONS(572),
    [anon_sym_AT_AT_EQ] = ACTIONS(572),
    [anon_sym_AT_ATk] = ACTIONS(572),
    [anon_sym_AT_ATt] = ACTIONS(572),
    [anon_sym_AT_ATb] = ACTIONS(572),
    [anon_sym_AT_ATi] = ACTIONS(572),
    [anon_sym_AT_ATiS] = ACTIONS(572),
    [anon_sym_AT_ATf] = ACTIONS(572),
    [anon_sym_AT_ATs_COLON] = ACTIONS(572),
    [anon_sym_AT_ATc_COLON] = ACTIONS(572),
    [anon_sym_AT] = ACTIONS(572),
    [anon_sym_AT_BANG] = ACTIONS(572),
    [anon_sym_AT_LPAREN] = ACTIONS(572),
    [anon_sym_ATa_COLON] = ACTIONS(572),
    [anon_sym_ATb_COLON] = ACTIONS(572),
    [anon_sym_ATB_COLON] = ACTIONS(572),
    [anon_sym_ATe_COLON] = ACTIONS(572),
    [anon_sym_ATF_COLON] = ACTIONS(572),
    [anon_sym_ATi_COLON] = ACTIONS(572),
    [anon_sym_ATk_COLON] = ACTIONS(572),
    [anon_sym_ATo_COLON] = ACTIONS(572),
    [anon_sym_ATr_COLON] = ACTIONS(572),
    [anon_sym_ATf_COLON] = ACTIONS(572),
    [anon_sym_ATs_COLON] = ACTIONS(572),
    [anon_sym_ATx_COLON] = ACTIONS(572),
    [anon_sym_PIPE_DOT] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_GT_GT] = ACTIONS(572),
    [sym_html_redirect_operator] = ACTIONS(572),
    [sym_html_append_operator] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(572),
    [sym__comment] = ACTIONS(95),
    [anon_sym_SEMI] = ACTIONS(572),
    [sym_file_descriptor] = ACTIONS(570),
  },
  [165] = {
    [anon_sym_TILDE] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(566),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(568),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(582),
    [anon_sym_GT_GT] = ACTIONS(580),
    [sym_html_redirect_operator] = ACTIONS(582),
    [sym_html_append_operator] = ACTIONS(580),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(580),
    [sym_file_descriptor] = ACTIONS(580),
  },
  [166] = {
    [anon_sym_TILDE] = ACTIONS(580),
    [anon_sym_PIPE] = ACTIONS(582),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(308),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(580),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(582),
    [anon_sym_GT_GT] = ACTIONS(580),
    [sym_html_redirect_operator] = ACTIONS(582),
    [sym_html_append_operator] = ACTIONS(580),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(580),
    [sym_file_descriptor] = ACTIONS(580),
  },
  [167] = {
    [anon_sym_TILDE] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(308),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(578),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_GT_GT] = ACTIONS(584),
    [sym_html_redirect_operator] = ACTIONS(586),
    [sym_html_append_operator] = ACTIONS(584),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(584),
    [sym_file_descriptor] = ACTIONS(584),
  },
  [168] = {
    [anon_sym_TILDE] = ACTIONS(584),
    [anon_sym_PIPE] = ACTIONS(586),
    [anon_sym_PIPEH] = ACTIONS(292),
    [anon_sym_PIPET] = ACTIONS(294),
    [anon_sym_AT_AT] = ACTIONS(296),
    [anon_sym_AT_ATdbt] = ACTIONS(298),
    [anon_sym_AT_ATdbta] = ACTIONS(300),
    [anon_sym_AT_ATdbtb] = ACTIONS(302),
    [anon_sym_AT_ATdbts] = ACTIONS(304),
    [anon_sym_AT_AT_DOT] = ACTIONS(306),
    [anon_sym_AT_AT_EQ] = ACTIONS(566),
    [anon_sym_AT_ATk] = ACTIONS(310),
    [anon_sym_AT_ATt] = ACTIONS(312),
    [anon_sym_AT_ATb] = ACTIONS(314),
    [anon_sym_AT_ATi] = ACTIONS(316),
    [anon_sym_AT_ATiS] = ACTIONS(318),
    [anon_sym_AT_ATf] = ACTIONS(320),
    [anon_sym_AT_ATs_COLON] = ACTIONS(322),
    [anon_sym_AT_ATc_COLON] = ACTIONS(568),
    [anon_sym_AT] = ACTIONS(326),
    [anon_sym_AT_BANG] = ACTIONS(328),
    [anon_sym_AT_LPAREN] = ACTIONS(330),
    [anon_sym_ATa_COLON] = ACTIONS(332),
    [anon_sym_ATb_COLON] = ACTIONS(334),
    [anon_sym_ATB_COLON] = ACTIONS(336),
    [anon_sym_ATe_COLON] = ACTIONS(338),
    [anon_sym_ATF_COLON] = ACTIONS(340),
    [anon_sym_ATi_COLON] = ACTIONS(342),
    [anon_sym_ATk_COLON] = ACTIONS(344),
    [anon_sym_ATo_COLON] = ACTIONS(346),
    [anon_sym_ATr_COLON] = ACTIONS(348),
    [anon_sym_ATf_COLON] = ACTIONS(350),
    [anon_sym_ATs_COLON] = ACTIONS(352),
    [anon_sym_ATx_COLON] = ACTIONS(354),
    [anon_sym_PIPE_DOT] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(586),
    [anon_sym_GT_GT] = ACTIONS(584),
    [sym_html_redirect_operator] = ACTIONS(586),
    [sym_html_append_operator] = ACTIONS(584),
    [anon_sym_BQUOTE] = ACTIONS(584),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(584),
    [sym_file_descriptor] = ACTIONS(584),
  },
  [169] = {
    [aux_sym_commands_repeat1] = STATE(169),
    [ts_builtin_sym_end] = ACTIONS(588),
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
    [anon_sym_LF] = ACTIONS(592),
    [anon_sym_CR] = ACTIONS(592),
    [anon_sym_SEMI] = ACTIONS(592),
    [sym_cmd_identifier] = ACTIONS(588),
    [sym__help_command] = ACTIONS(588),
    [sym_repeat_number] = ACTIONS(588),
    [sym_interpreter_identifier] = ACTIONS(588),
  },
  [170] = {
    [aux_sym__commands_singleline_repeat1] = STATE(170),
    [anon_sym_DQUOTE] = ACTIONS(595),
    [anon_sym_DOT] = ACTIONS(597),
    [anon_sym_DOT_BANG] = ACTIONS(595),
    [anon_sym_DOT_LPAREN] = ACTIONS(595),
    [anon_sym_DOT_SLASH] = ACTIONS(595),
    [anon_sym_PERCENT] = ACTIONS(595),
    [anon_sym_env] = ACTIONS(595),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(597),
    [aux_sym__interpret_identifier_token1] = ACTIONS(597),
    [aux_sym__interpret_identifier_token2] = ACTIONS(595),
    [sym_system_identifier] = ACTIONS(595),
    [sym_question_mark_identifier] = ACTIONS(595),
    [sym_pointer_identifier] = ACTIONS(595),
    [sym_macro_identifier] = ACTIONS(595),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(599),
    [sym_cmd_identifier] = ACTIONS(595),
    [sym__help_command] = ACTIONS(595),
    [sym_repeat_number] = ACTIONS(595),
    [sym_interpreter_identifier] = ACTIONS(595),
  },
  [171] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(119),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [172] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(119),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
    [aux_sym_args_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [173] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(46),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
    [aux_sym_args_repeat1] = STATE(46),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [174] = {
    [sym__arg] = STATE(49),
    [sym_arg] = STATE(37),
    [sym_args] = STATE(144),
    [sym_double_quoted_arg] = STATE(49),
    [sym_single_quoted_arg] = STATE(49),
    [sym_cmd_substitution_arg] = STATE(49),
    [sym_concatenation] = STATE(58),
    [aux_sym_args_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [175] = {
    [sym__arg] = STATE(63),
    [sym_arg] = STATE(72),
    [sym_eq_sep_val] = STATE(156),
    [sym_double_quoted_arg] = STATE(63),
    [sym_single_quoted_arg] = STATE(63),
    [sym_cmd_substitution_arg] = STATE(63),
    [sym_concatenation] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [sym_arg_identifier] = ACTIONS(604),
    [anon_sym_SQUOTE] = ACTIONS(606),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(608),
    [anon_sym_BQUOTE] = ACTIONS(610),
    [sym__comment] = ACTIONS(95),
  },
  [176] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(129),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [177] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(149),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [178] = {
    [sym__arg] = STATE(63),
    [sym_arg] = STATE(100),
    [sym_double_quoted_arg] = STATE(63),
    [sym_single_quoted_arg] = STATE(63),
    [sym_cmd_substitution_arg] = STATE(63),
    [sym_concatenation] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [sym_arg_identifier] = ACTIONS(604),
    [anon_sym_SQUOTE] = ACTIONS(606),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(608),
    [anon_sym_BQUOTE] = ACTIONS(610),
    [sym__comment] = ACTIONS(95),
  },
  [179] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(117),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [180] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(118),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [181] = {
    [sym_eq_sep_args] = STATE(151),
    [sym__eq_sep_key_single] = STATE(66),
    [sym_eq_sep_key] = STATE(103),
    [sym_double_quoted_arg] = STATE(76),
    [sym_single_quoted_arg] = STATE(76),
    [sym_cmd_substitution_arg] = STATE(76),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym__eq_sep_key_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(95),
  },
  [182] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(120),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [183] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(123),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [184] = {
    [sym__arg] = STATE(229),
    [sym_arg] = STATE(193),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [sym_concatenation] = STATE(250),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [sym_arg_identifier] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(628),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(95),
  },
  [185] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(124),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [186] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(125),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [187] = {
    [sym__arg] = STATE(229),
    [sym_arg] = STATE(177),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [sym_concatenation] = STATE(250),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [sym_arg_identifier] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(628),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(95),
  },
  [188] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(127),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [189] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(128),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [190] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(131),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [191] = {
    [sym__arg] = STATE(221),
    [sym_arg] = STATE(235),
    [sym_double_quoted_arg] = STATE(221),
    [sym_single_quoted_arg] = STATE(221),
    [sym_cmd_substitution_arg] = STATE(221),
    [sym_concatenation] = STATE(238),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym_arg_identifier] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(638),
    [anon_sym_BQUOTE] = ACTIONS(640),
    [sym__comment] = ACTIONS(95),
  },
  [192] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(138),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [193] = {
    [sym__arg] = STATE(229),
    [sym_arg] = STATE(183),
    [sym_double_quoted_arg] = STATE(229),
    [sym_single_quoted_arg] = STATE(229),
    [sym_cmd_substitution_arg] = STATE(229),
    [sym_concatenation] = STATE(250),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [sym_arg_identifier] = ACTIONS(624),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(628),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(95),
  },
  [194] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(154),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [195] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(132),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [196] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(133),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [197] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(134),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [198] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(135),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [199] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(136),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [200] = {
    [sym__arg] = STATE(81),
    [sym_arg] = STATE(137),
    [sym_double_quoted_arg] = STATE(81),
    [sym_single_quoted_arg] = STATE(81),
    [sym_cmd_substitution_arg] = STATE(81),
    [sym_concatenation] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(614),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [201] = {
    [sym__arg] = STATE(82),
    [sym_double_quoted_arg] = STATE(82),
    [sym_single_quoted_arg] = STATE(82),
    [sym_cmd_substitution_arg] = STATE(82),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [sym_arg_identifier] = ACTIONS(642),
    [anon_sym_SQUOTE] = ACTIONS(606),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(608),
    [anon_sym_BQUOTE] = ACTIONS(610),
    [sym__comment] = ACTIONS(95),
  },
  [202] = {
    [sym__arg] = STATE(102),
    [sym_double_quoted_arg] = STATE(102),
    [sym_single_quoted_arg] = STATE(102),
    [sym_cmd_substitution_arg] = STATE(102),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [sym_arg_identifier] = ACTIONS(644),
    [anon_sym_SQUOTE] = ACTIONS(616),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(618),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(95),
  },
  [203] = {
    [sym__eq_sep_key_single] = STATE(85),
    [sym_double_quoted_arg] = STATE(76),
    [sym_single_quoted_arg] = STATE(76),
    [sym_cmd_substitution_arg] = STATE(76),
    [anon_sym_DQUOTE] = ACTIONS(138),
    [sym__eq_sep_key_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(95),
  },
  [204] = {
    [sym__arg] = STATE(239),
    [sym_double_quoted_arg] = STATE(239),
    [sym_single_quoted_arg] = STATE(239),
    [sym_cmd_substitution_arg] = STATE(239),
    [anon_sym_DQUOTE] = ACTIONS(622),
    [sym_arg_identifier] = ACTIONS(646),
    [anon_sym_SQUOTE] = ACTIONS(626),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(628),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(95),
  },
  [205] = {
    [sym__arg] = STATE(225),
    [sym_double_quoted_arg] = STATE(225),
    [sym_single_quoted_arg] = STATE(225),
    [sym_cmd_substitution_arg] = STATE(225),
    [anon_sym_DQUOTE] = ACTIONS(632),
    [sym_arg_identifier] = ACTIONS(648),
    [anon_sym_SQUOTE] = ACTIONS(636),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(638),
    [anon_sym_BQUOTE] = ACTIONS(640),
    [sym__comment] = ACTIONS(95),
  },
  [206] = {
    [sym__arg] = STATE(53),
    [sym_double_quoted_arg] = STATE(53),
    [sym_single_quoted_arg] = STATE(53),
    [sym_cmd_substitution_arg] = STATE(53),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [sym_arg_identifier] = ACTIONS(650),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(91),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(95),
  },
  [207] = {
    [sym_cmd_substitution_arg] = STATE(213),
    [aux_sym_double_quoted_arg_repeat1] = STATE(213),
    [anon_sym_DQUOTE] = ACTIONS(652),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(654),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(654),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(654),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [208] = {
    [aux_sym_concatenation_repeat1] = STATE(219),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(150),
    [anon_sym_CR] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
    [sym__concat] = ACTIONS(660),
  },
  [209] = {
    [sym_cmd_substitution_arg] = STATE(212),
    [aux_sym_double_quoted_arg_repeat1] = STATE(212),
    [anon_sym_DQUOTE] = ACTIONS(662),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(664),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(664),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(664),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [210] = {
    [sym_cmd_substitution_arg] = STATE(217),
    [aux_sym_double_quoted_arg_repeat1] = STATE(217),
    [anon_sym_DQUOTE] = ACTIONS(666),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(668),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(668),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(668),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [211] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(670),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [212] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(674),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [213] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(676),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [214] = {
    [sym_cmd_substitution_arg] = STATE(211),
    [aux_sym_double_quoted_arg_repeat1] = STATE(211),
    [anon_sym_DQUOTE] = ACTIONS(678),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(680),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(680),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(680),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [215] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(682),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [216] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(684),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [217] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(686),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(672),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(672),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [218] = {
    [sym_cmd_substitution_arg] = STATE(218),
    [aux_sym_double_quoted_arg_repeat1] = STATE(218),
    [anon_sym_DQUOTE] = ACTIONS(688),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(690),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(690),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(693),
    [anon_sym_BQUOTE] = ACTIONS(696),
    [sym__comment] = ACTIONS(95),
  },
  [219] = {
    [aux_sym_concatenation_repeat1] = STATE(219),
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym__concat] = ACTIONS(699),
  },
  [220] = {
    [sym_cmd_substitution_arg] = STATE(216),
    [aux_sym_double_quoted_arg_repeat1] = STATE(216),
    [anon_sym_DQUOTE] = ACTIONS(702),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(704),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(704),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(704),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [221] = {
    [aux_sym_concatenation_repeat1] = STATE(208),
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym__concat] = ACTIONS(660),
  },
  [222] = {
    [sym_cmd_substitution_arg] = STATE(215),
    [aux_sym_double_quoted_arg_repeat1] = STATE(215),
    [anon_sym_DQUOTE] = ACTIONS(706),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(708),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(708),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(708),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(95),
  },
  [223] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(183),
    [anon_sym_CR] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym__concat] = ACTIONS(183),
  },
  [224] = {
    [aux_sym_concatenation_repeat1] = STATE(226),
    [anon_sym_DQUOTE] = ACTIONS(150),
    [sym_arg_identifier] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(150),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(710),
  },
  [225] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym__concat] = ACTIONS(160),
  },
  [226] = {
    [aux_sym_concatenation_repeat1] = STATE(226),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym_arg_identifier] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(712),
  },
  [227] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym__concat] = ACTIONS(175),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(167),
    [anon_sym_CR] = ACTIONS(167),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym__concat] = ACTIONS(167),
  },
  [229] = {
    [aux_sym_concatenation_repeat1] = STATE(224),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(710),
  },
  [230] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(175),
    [anon_sym_CR] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [sym__concat] = ACTIONS(175),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(171),
    [anon_sym_CR] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym__concat] = ACTIONS(171),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_RPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(179),
    [anon_sym_CR] = ACTIONS(179),
    [anon_sym_SEMI] = ACTIONS(179),
    [sym__concat] = ACTIONS(179),
  },
  [233] = {
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym_arg_identifier] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(183),
  },
  [234] = {
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym_arg_identifier] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(167),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(167),
    [anon_sym_BQUOTE] = ACTIONS(167),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(167),
  },
  [235] = {
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_BQUOTE] = ACTIONS(715),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(715),
    [anon_sym_CR] = ACTIONS(715),
    [anon_sym_SEMI] = ACTIONS(715),
  },
  [236] = {
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym_arg_identifier] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(171),
  },
  [237] = {
    [anon_sym_DQUOTE] = ACTIONS(179),
    [sym_arg_identifier] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(179),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(179),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [239] = {
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym_arg_identifier] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(160),
  },
  [240] = {
    [anon_sym_DQUOTE] = ACTIONS(177),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(177),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(177),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(177),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(95),
  },
  [241] = {
    [anon_sym_DQUOTE] = ACTIONS(175),
    [sym_arg_identifier] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(175),
  },
  [242] = {
    [anon_sym_DQUOTE] = ACTIONS(175),
    [sym_arg_identifier] = ACTIONS(177),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(175),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [sym__comment] = ACTIONS(95),
    [sym__concat] = ACTIONS(175),
  },
  [243] = {
    [anon_sym_DQUOTE] = ACTIONS(177),
    [aux_sym_double_quoted_arg_token1] = ACTIONS(177),
    [aux_sym_double_quoted_arg_token2] = ACTIONS(177),
    [aux_sym_double_quoted_arg_token3] = ACTIONS(177),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(177),
    [sym__comment] = ACTIONS(95),
  },
  [244] = {
    [aux_sym_commands_repeat2] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(717),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_CR] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
  },
  [245] = {
    [anon_sym_DQUOTE] = ACTIONS(721),
    [sym_arg_identifier] = ACTIONS(723),
    [anon_sym_SQUOTE] = ACTIONS(721),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(721),
    [anon_sym_BQUOTE] = ACTIONS(721),
    [sym__comment] = ACTIONS(95),
  },
  [246] = {
    [aux_sym_commands_repeat2] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(725),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(727),
    [anon_sym_CR] = ACTIONS(727),
    [anon_sym_SEMI] = ACTIONS(727),
  },
  [247] = {
    [anon_sym_DQUOTE] = ACTIONS(730),
    [sym_arg_identifier] = ACTIONS(732),
    [anon_sym_SQUOTE] = ACTIONS(730),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(730),
    [anon_sym_BQUOTE] = ACTIONS(730),
    [sym__comment] = ACTIONS(95),
  },
  [248] = {
    [anon_sym_DQUOTE] = ACTIONS(734),
    [sym_arg_identifier] = ACTIONS(736),
    [anon_sym_SQUOTE] = ACTIONS(734),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(734),
    [anon_sym_BQUOTE] = ACTIONS(734),
    [sym__comment] = ACTIONS(95),
  },
  [249] = {
    [aux_sym_commands_repeat2] = STATE(244),
    [ts_builtin_sym_end] = ACTIONS(738),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_CR] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
  },
  [250] = {
    [anon_sym_DQUOTE] = ACTIONS(156),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(95),
  },
  [251] = {
    [aux_sym_commands_repeat2] = STATE(254),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_CR] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
  },
  [252] = {
    [anon_sym_DQUOTE] = ACTIONS(740),
    [sym_arg_identifier] = ACTIONS(742),
    [anon_sym_SQUOTE] = ACTIONS(740),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(740),
    [anon_sym_BQUOTE] = ACTIONS(740),
    [sym__comment] = ACTIONS(95),
  },
  [253] = {
    [anon_sym_DQUOTE] = ACTIONS(744),
    [sym_arg_identifier] = ACTIONS(746),
    [anon_sym_SQUOTE] = ACTIONS(744),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(744),
    [anon_sym_BQUOTE] = ACTIONS(744),
    [sym__comment] = ACTIONS(95),
  },
  [254] = {
    [aux_sym_commands_repeat2] = STATE(246),
    [ts_builtin_sym_end] = ACTIONS(738),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(719),
    [anon_sym_CR] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(719),
  },
  [255] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(748),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(750),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(750),
    [sym__comment] = ACTIONS(95),
  },
  [256] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(266),
    [anon_sym_SQUOTE] = ACTIONS(753),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(755),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(755),
    [sym__comment] = ACTIONS(95),
  },
  [257] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(757),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(759),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [258] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(262),
    [anon_sym_SQUOTE] = ACTIONS(761),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(763),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(763),
    [sym__comment] = ACTIONS(95),
  },
  [259] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(268),
    [anon_sym_SQUOTE] = ACTIONS(765),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(767),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(767),
    [sym__comment] = ACTIONS(95),
  },
  [260] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(769),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(759),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [261] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(257),
    [anon_sym_SQUOTE] = ACTIONS(771),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(773),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(773),
    [sym__comment] = ACTIONS(95),
  },
  [262] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(775),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(759),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [263] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(725),
    [anon_sym_CR] = ACTIONS(725),
    [anon_sym_SEMI] = ACTIONS(725),
  },
  [264] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(260),
    [anon_sym_SQUOTE] = ACTIONS(777),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(779),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(779),
    [sym__comment] = ACTIONS(95),
  },
  [265] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(267),
    [anon_sym_SQUOTE] = ACTIONS(781),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(783),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(783),
    [sym__comment] = ACTIONS(95),
  },
  [266] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(785),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(759),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [267] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(787),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(759),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [268] = {
    [aux_sym_single_quoted_arg_repeat1] = STATE(255),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [aux_sym_single_quoted_arg_token1] = ACTIONS(759),
    [aux_sym_single_quoted_arg_token2] = ACTIONS(759),
    [sym__comment] = ACTIONS(95),
  },
  [269] = {
    [aux_sym__commands_singleline_repeat2] = STATE(273),
    [anon_sym_RPAREN] = ACTIONS(791),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(793),
  },
  [270] = {
    [aux_sym__commands_singleline_repeat2] = STATE(279),
    [anon_sym_BQUOTE] = ACTIONS(795),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(797),
  },
  [271] = {
    [anon_sym_RPAREN] = ACTIONS(799),
    [anon_sym_BQUOTE] = ACTIONS(799),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(799),
  },
  [272] = {
    [aux_sym__commands_singleline_repeat2] = STATE(278),
    [anon_sym_RPAREN] = ACTIONS(801),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(793),
  },
  [273] = {
    [aux_sym__commands_singleline_repeat2] = STATE(277),
    [anon_sym_RPAREN] = ACTIONS(801),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(793),
  },
  [274] = {
    [aux_sym__commands_singleline_repeat2] = STATE(279),
    [anon_sym_BQUOTE] = ACTIONS(801),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(797),
  },
  [275] = {
    [aux_sym__commands_singleline_repeat2] = STATE(270),
    [anon_sym_BQUOTE] = ACTIONS(801),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(797),
  },
  [276] = {
    [aux_sym__commands_singleline_repeat2] = STATE(274),
    [anon_sym_BQUOTE] = ACTIONS(791),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(797),
  },
  [277] = {
    [aux_sym__commands_singleline_repeat2] = STATE(277),
    [anon_sym_RPAREN] = ACTIONS(799),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(803),
  },
  [278] = {
    [aux_sym__commands_singleline_repeat2] = STATE(277),
    [anon_sym_RPAREN] = ACTIONS(795),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(793),
  },
  [279] = {
    [aux_sym__commands_singleline_repeat2] = STATE(279),
    [anon_sym_BQUOTE] = ACTIONS(799),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(806),
  },
  [280] = {
    [anon_sym_RPAREN] = ACTIONS(809),
    [sym_macro_call_content] = ACTIONS(811),
    [sym__comment] = ACTIONS(95),
  },
  [281] = {
    [anon_sym_RPAREN] = ACTIONS(813),
    [sym_macro_call_content] = ACTIONS(815),
    [sym__comment] = ACTIONS(95),
  },
  [282] = {
    [sym_interpret_arg] = STATE(144),
    [sym__any_command] = ACTIONS(817),
    [sym__comment] = ACTIONS(95),
  },
  [283] = {
    [anon_sym_GT] = ACTIONS(819),
    [anon_sym_GT_GT] = ACTIONS(821),
    [sym__comment] = ACTIONS(3),
  },
  [284] = {
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym__comment] = ACTIONS(3),
  },
  [285] = {
    [anon_sym_RPAREN] = ACTIONS(825),
    [sym__comment] = ACTIONS(3),
  },
  [286] = {
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym__comment] = ACTIONS(3),
  },
  [287] = {
    [anon_sym_BQUOTE] = ACTIONS(829),
    [sym__comment] = ACTIONS(3),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(831),
    [sym__comment] = ACTIONS(3),
  },
  [289] = {
    [anon_sym_BQUOTE] = ACTIONS(833),
    [sym__comment] = ACTIONS(3),
  },
  [290] = {
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym__comment] = ACTIONS(3),
  },
  [291] = {
    [anon_sym_RPAREN] = ACTIONS(837),
    [sym__comment] = ACTIONS(3),
  },
  [292] = {
    [anon_sym_BQUOTE] = ACTIONS(839),
    [sym__comment] = ACTIONS(3),
  },
  [293] = {
    [anon_sym_RPAREN] = ACTIONS(841),
    [sym__comment] = ACTIONS(3),
  },
  [294] = {
    [anon_sym_BQUOTE] = ACTIONS(843),
    [sym__comment] = ACTIONS(3),
  },
  [295] = {
    [anon_sym_BQUOTE] = ACTIONS(845),
    [sym__comment] = ACTIONS(3),
  },
  [296] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(847),
    [sym__comment] = ACTIONS(95),
  },
  [297] = {
    [sym_grep_specifier] = ACTIONS(849),
    [sym__comment] = ACTIONS(95),
  },
  [298] = {
    [anon_sym_DQUOTE] = ACTIONS(851),
    [sym__comment] = ACTIONS(3),
  },
  [299] = {
    [anon_sym_BQUOTE] = ACTIONS(853),
    [sym__comment] = ACTIONS(3),
  },
  [300] = {
    [anon_sym_RPAREN] = ACTIONS(855),
    [sym__comment] = ACTIONS(3),
  },
  [301] = {
    [anon_sym_RPAREN] = ACTIONS(857),
    [sym__comment] = ACTIONS(3),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(859),
    [sym__comment] = ACTIONS(3),
  },
  [303] = {
    [sym_tmp_eval_arg] = ACTIONS(861),
    [sym__comment] = ACTIONS(95),
  },
  [304] = {
    [sym_tmp_eval_arg] = ACTIONS(863),
    [sym__comment] = ACTIONS(95),
  },
  [305] = {
    [sym_macro_content] = ACTIONS(865),
    [sym__comment] = ACTIONS(95),
  },
  [306] = {
    [anon_sym_BQUOTE] = ACTIONS(867),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(296),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(282),
  [13] = {.count = 1, .reusable = true}, SHIFT(305),
  [15] = {.count = 1, .reusable = true}, SHIFT(245),
  [17] = {.count = 1, .reusable = true}, SHIFT(60),
  [19] = {.count = 1, .reusable = false}, SHIFT(112),
  [21] = {.count = 1, .reusable = false}, SHIFT(59),
  [23] = {.count = 1, .reusable = true}, SHIFT(59),
  [25] = {.count = 1, .reusable = true}, SHIFT(31),
  [27] = {.count = 1, .reusable = true}, SHIFT(34),
  [29] = {.count = 1, .reusable = true}, SHIFT(181),
  [31] = {.count = 1, .reusable = true}, SHIFT(101),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(35),
  [37] = {.count = 1, .reusable = true}, SHIFT(32),
  [39] = {.count = 1, .reusable = true}, SHIFT(28),
  [41] = {.count = 1, .reusable = true}, SHIFT(33),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, SHIFT(40),
  [51] = {.count = 1, .reusable = true}, SHIFT(41),
  [53] = {.count = 1, .reusable = true}, SHIFT(45),
  [55] = {.count = 1, .reusable = true}, SHIFT(42),
  [57] = {.count = 1, .reusable = true}, SHIFT(27),
  [59] = {.count = 1, .reusable = true}, SHIFT(44),
  [61] = {.count = 1, .reusable = false}, SHIFT(4),
  [63] = {.count = 1, .reusable = true}, SHIFT(160),
  [65] = {.count = 1, .reusable = true}, SHIFT(25),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [69] = {.count = 1, .reusable = true}, SHIFT(169),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(22),
  [75] = {.count = 1, .reusable = true}, SHIFT(23),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(170),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(222),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [87] = {.count = 1, .reusable = false}, SHIFT(49),
  [89] = {.count = 1, .reusable = true}, SHIFT(256),
  [91] = {.count = 1, .reusable = true}, SHIFT(13),
  [93] = {.count = 1, .reusable = true}, SHIFT(11),
  [95] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_args, 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [119] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(222),
  [122] = {.count = 1, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(49),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(256),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(13),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(11),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [138] = {.count = 1, .reusable = true}, SHIFT(220),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [142] = {.count = 1, .reusable = false}, SHIFT(76),
  [144] = {.count = 1, .reusable = true}, SHIFT(258),
  [146] = {.count = 1, .reusable = true}, SHIFT(12),
  [148] = {.count = 1, .reusable = true}, SHIFT(14),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_concatenation, 2),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_concatenation, 2),
  [154] = {.count = 1, .reusable = true}, SHIFT(206),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [160] = {.count = 1, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [162] = {.count = 1, .reusable = false}, REDUCE(aux_sym_concatenation_repeat1, 2),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(206),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 3),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_single_quoted_arg, 3),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_single_quoted_arg, 3),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_double_quoted_arg, 2),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_double_quoted_arg, 2),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_key_repeat1, 2),
  [199] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_key_repeat1, 2), SHIFT_REPEAT(203),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 2),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 2),
  [206] = {.count = 1, .reusable = true}, SHIFT(203),
  [208] = {.count = 1, .reusable = true}, SHIFT(201),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(201),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_key, 1),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_key, 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [221] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(303),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 1),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 1),
  [228] = {.count = 1, .reusable = true}, SHIFT(178),
  [230] = {.count = 1, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [232] = {.count = 1, .reusable = false}, REDUCE(aux_sym_eq_sep_val_repeat1, 2),
  [234] = {.count = 2, .reusable = true}, REDUCE(aux_sym_eq_sep_val_repeat1, 2), SHIFT_REPEAT(178),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_key_single, 1),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_key_single, 1),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [245] = {.count = 1, .reusable = true}, SHIFT(303),
  [247] = {.count = 1, .reusable = true}, SHIFT(202),
  [249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(202),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_val, 2),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_val, 2),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [262] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [264] = {.count = 1, .reusable = true}, SHIFT(194),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [270] = {.count = 1, .reusable = false}, SHIFT(280),
  [272] = {.count = 1, .reusable = false}, SHIFT(104),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 1),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 1),
  [278] = {.count = 1, .reusable = true}, SHIFT(175),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [282] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [284] = {.count = 1, .reusable = true}, SHIFT(281),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [288] = {.count = 1, .reusable = true}, SHIFT(297),
  [290] = {.count = 1, .reusable = false}, SHIFT(158),
  [292] = {.count = 1, .reusable = true}, SHIFT(153),
  [294] = {.count = 1, .reusable = true}, SHIFT(152),
  [296] = {.count = 1, .reusable = false}, SHIFT(179),
  [298] = {.count = 1, .reusable = false}, SHIFT(150),
  [300] = {.count = 1, .reusable = true}, SHIFT(150),
  [302] = {.count = 1, .reusable = true}, SHIFT(148),
  [304] = {.count = 1, .reusable = true}, SHIFT(146),
  [306] = {.count = 1, .reusable = true}, SHIFT(180),
  [308] = {.count = 1, .reusable = true}, SHIFT(172),
  [310] = {.count = 1, .reusable = true}, SHIFT(182),
  [312] = {.count = 1, .reusable = true}, SHIFT(107),
  [314] = {.count = 1, .reusable = true}, SHIFT(140),
  [316] = {.count = 1, .reusable = false}, SHIFT(139),
  [318] = {.count = 1, .reusable = true}, SHIFT(130),
  [320] = {.count = 1, .reusable = true}, SHIFT(99),
  [322] = {.count = 1, .reusable = true}, SHIFT(184),
  [324] = {.count = 1, .reusable = true}, SHIFT(29),
  [326] = {.count = 1, .reusable = false}, SHIFT(185),
  [328] = {.count = 1, .reusable = true}, SHIFT(186),
  [330] = {.count = 1, .reusable = true}, SHIFT(187),
  [332] = {.count = 1, .reusable = true}, SHIFT(188),
  [334] = {.count = 1, .reusable = true}, SHIFT(189),
  [336] = {.count = 1, .reusable = true}, SHIFT(176),
  [338] = {.count = 1, .reusable = true}, SHIFT(304),
  [340] = {.count = 1, .reusable = true}, SHIFT(190),
  [342] = {.count = 1, .reusable = true}, SHIFT(195),
  [344] = {.count = 1, .reusable = true}, SHIFT(196),
  [346] = {.count = 1, .reusable = true}, SHIFT(197),
  [348] = {.count = 1, .reusable = true}, SHIFT(198),
  [350] = {.count = 1, .reusable = true}, SHIFT(199),
  [352] = {.count = 1, .reusable = true}, SHIFT(200),
  [354] = {.count = 1, .reusable = true}, SHIFT(192),
  [356] = {.count = 1, .reusable = true}, SHIFT(122),
  [358] = {.count = 1, .reusable = false}, SHIFT(253),
  [360] = {.count = 1, .reusable = true}, SHIFT(252),
  [362] = {.count = 1, .reusable = false}, SHIFT(191),
  [364] = {.count = 1, .reusable = true}, SHIFT(191),
  [366] = {.count = 1, .reusable = true}, SHIFT(283),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_legacy_quoted_command, 3),
  [384] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_last_command, 1, .production_id = 1),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_last_command, 1, .production_id = 1),
  [392] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [394] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 8),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 8),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 6),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 6),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [454] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [458] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [462] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [466] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [470] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [474] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [478] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [486] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [490] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [530] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [552] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_eq_sep_args, 3),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_eq_sep_args, 3),
  [564] = {.count = 1, .reusable = false}, SHIFT(164),
  [566] = {.count = 1, .reusable = true}, SHIFT(171),
  [568] = {.count = 1, .reusable = true}, SHIFT(26),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [572] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [574] = {.count = 1, .reusable = false}, SHIFT(116),
  [576] = {.count = 1, .reusable = false}, SHIFT(163),
  [578] = {.count = 1, .reusable = true}, SHIFT(30),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [582] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2, .production_id = 4),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [588] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [590] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [592] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(169),
  [595] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [597] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [599] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(170),
  [602] = {.count = 1, .reusable = true}, SHIFT(207),
  [604] = {.count = 1, .reusable = false}, SHIFT(63),
  [606] = {.count = 1, .reusable = true}, SHIFT(264),
  [608] = {.count = 1, .reusable = true}, SHIFT(9),
  [610] = {.count = 1, .reusable = true}, SHIFT(16),
  [612] = {.count = 1, .reusable = true}, SHIFT(214),
  [614] = {.count = 1, .reusable = false}, SHIFT(81),
  [616] = {.count = 1, .reusable = true}, SHIFT(265),
  [618] = {.count = 1, .reusable = true}, SHIFT(17),
  [620] = {.count = 1, .reusable = true}, SHIFT(19),
  [622] = {.count = 1, .reusable = true}, SHIFT(209),
  [624] = {.count = 1, .reusable = false}, SHIFT(229),
  [626] = {.count = 1, .reusable = true}, SHIFT(259),
  [628] = {.count = 1, .reusable = true}, SHIFT(18),
  [630] = {.count = 1, .reusable = true}, SHIFT(20),
  [632] = {.count = 1, .reusable = true}, SHIFT(210),
  [634] = {.count = 1, .reusable = false}, SHIFT(221),
  [636] = {.count = 1, .reusable = true}, SHIFT(261),
  [638] = {.count = 1, .reusable = true}, SHIFT(7),
  [640] = {.count = 1, .reusable = true}, SHIFT(10),
  [642] = {.count = 1, .reusable = false}, SHIFT(82),
  [644] = {.count = 1, .reusable = false}, SHIFT(102),
  [646] = {.count = 1, .reusable = false}, SHIFT(239),
  [648] = {.count = 1, .reusable = false}, SHIFT(225),
  [650] = {.count = 1, .reusable = false}, SHIFT(53),
  [652] = {.count = 1, .reusable = false}, SHIFT(80),
  [654] = {.count = 1, .reusable = false}, SHIFT(213),
  [656] = {.count = 1, .reusable = false}, SHIFT(8),
  [658] = {.count = 1, .reusable = false}, SHIFT(15),
  [660] = {.count = 1, .reusable = true}, SHIFT(205),
  [662] = {.count = 1, .reusable = false}, SHIFT(233),
  [664] = {.count = 1, .reusable = false}, SHIFT(212),
  [666] = {.count = 1, .reusable = false}, SHIFT(223),
  [668] = {.count = 1, .reusable = false}, SHIFT(217),
  [670] = {.count = 1, .reusable = false}, SHIFT(98),
  [672] = {.count = 1, .reusable = false}, SHIFT(218),
  [674] = {.count = 1, .reusable = false}, SHIFT(236),
  [676] = {.count = 1, .reusable = false}, SHIFT(68),
  [678] = {.count = 1, .reusable = false}, SHIFT(96),
  [680] = {.count = 1, .reusable = false}, SHIFT(211),
  [682] = {.count = 1, .reusable = false}, SHIFT(52),
  [684] = {.count = 1, .reusable = false}, SHIFT(87),
  [686] = {.count = 1, .reusable = false}, SHIFT(231),
  [688] = {.count = 1, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2),
  [690] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(218),
  [693] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(8),
  [696] = {.count = 2, .reusable = false}, REDUCE(aux_sym_double_quoted_arg_repeat1, 2), SHIFT_REPEAT(15),
  [699] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(205),
  [702] = {.count = 1, .reusable = false}, SHIFT(83),
  [704] = {.count = 1, .reusable = false}, SHIFT(216),
  [706] = {.count = 1, .reusable = false}, SHIFT(56),
  [708] = {.count = 1, .reusable = false}, SHIFT(215),
  [710] = {.count = 1, .reusable = true}, SHIFT(204),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym_concatenation_repeat1, 2), SHIFT_REPEAT(204),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 9),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [719] = {.count = 1, .reusable = true}, SHIFT(6),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 1),
  [723] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [725] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [730] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 2),
  [732] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [734] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 2),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [740] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 1),
  [742] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [744] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 1),
  [746] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [748] = {.count = 1, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2),
  [750] = {.count = 2, .reusable = false}, REDUCE(aux_sym_single_quoted_arg_repeat1, 2), SHIFT_REPEAT(255),
  [753] = {.count = 1, .reusable = false}, SHIFT(51),
  [755] = {.count = 1, .reusable = false}, SHIFT(266),
  [757] = {.count = 1, .reusable = false}, SHIFT(232),
  [759] = {.count = 1, .reusable = false}, SHIFT(255),
  [761] = {.count = 1, .reusable = false}, SHIFT(69),
  [763] = {.count = 1, .reusable = false}, SHIFT(262),
  [765] = {.count = 1, .reusable = false}, SHIFT(234),
  [767] = {.count = 1, .reusable = false}, SHIFT(268),
  [769] = {.count = 1, .reusable = false}, SHIFT(77),
  [771] = {.count = 1, .reusable = false}, SHIFT(228),
  [773] = {.count = 1, .reusable = false}, SHIFT(257),
  [775] = {.count = 1, .reusable = false}, SHIFT(88),
  [777] = {.count = 1, .reusable = false}, SHIFT(79),
  [779] = {.count = 1, .reusable = false}, SHIFT(260),
  [781] = {.count = 1, .reusable = false}, SHIFT(95),
  [783] = {.count = 1, .reusable = false}, SHIFT(267),
  [785] = {.count = 1, .reusable = false}, SHIFT(55),
  [787] = {.count = 1, .reusable = false}, SHIFT(93),
  [789] = {.count = 1, .reusable = false}, SHIFT(237),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [793] = {.count = 1, .reusable = true}, SHIFT(21),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [797] = {.count = 1, .reusable = true}, SHIFT(24),
  [799] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [803] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(21),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(24),
  [809] = {.count = 1, .reusable = false}, SHIFT(108),
  [811] = {.count = 1, .reusable = false}, SHIFT(288),
  [813] = {.count = 1, .reusable = false}, SHIFT(155),
  [815] = {.count = 1, .reusable = false}, SHIFT(301),
  [817] = {.count = 1, .reusable = false}, SHIFT(143),
  [819] = {.count = 1, .reusable = false}, SHIFT(247),
  [821] = {.count = 1, .reusable = true}, SHIFT(248),
  [823] = {.count = 1, .reusable = true}, SHIFT(75),
  [825] = {.count = 1, .reusable = true}, SHIFT(92),
  [827] = {.count = 1, .reusable = true}, SHIFT(241),
  [829] = {.count = 1, .reusable = true}, SHIFT(242),
  [831] = {.count = 1, .reusable = true}, SHIFT(155),
  [833] = {.count = 1, .reusable = true}, SHIFT(70),
  [835] = {.count = 1, .reusable = true}, SHIFT(67),
  [837] = {.count = 1, .reusable = true}, SHIFT(227),
  [839] = {.count = 1, .reusable = true}, SHIFT(230),
  [841] = {.count = 1, .reusable = true}, SHIFT(57),
  [843] = {.count = 1, .reusable = true}, SHIFT(74),
  [845] = {.count = 1, .reusable = true}, SHIFT(54),
  [847] = {.count = 1, .reusable = false}, SHIFT(298),
  [849] = {.count = 1, .reusable = true}, SHIFT(115),
  [851] = {.count = 1, .reusable = true}, SHIFT(109),
  [853] = {.count = 1, .reusable = true}, SHIFT(240),
  [855] = {.count = 1, .reusable = true}, SHIFT(243),
  [857] = {.count = 1, .reusable = true}, SHIFT(126),
  [859] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [861] = {.count = 1, .reusable = false}, SHIFT(97),
  [863] = {.count = 1, .reusable = false}, SHIFT(78),
  [865] = {.count = 1, .reusable = false}, SHIFT(144),
  [867] = {.count = 1, .reusable = true}, SHIFT(94),
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
