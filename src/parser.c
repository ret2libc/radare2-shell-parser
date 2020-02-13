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
#define STATE_COUNT 250
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 86
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
  aux_sym_quoted_arg_token1 = 70,
  aux_sym_quoted_arg_token2 = 71,
  aux_sym_quoted_arg_token3 = 72,
  anon_sym_SQUOTE = 73,
  aux_sym_quoted_arg_token4 = 74,
  anon_sym_DOLLAR_LPAREN = 75,
  anon_sym_BQUOTE = 76,
  sym__comment = 77,
  anon_sym_LF = 78,
  anon_sym_CR = 79,
  anon_sym_SEMI = 80,
  sym_cmd_identifier = 81,
  sym__help_command = 82,
  sym_file_descriptor = 83,
  sym_repeat_number = 84,
  sym_interpreter_identifier = 85,
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
  sym_system_arg = 144,
  sym_repeat_command = 145,
  sym__eq_sep_args = 146,
  sym_redirect_command = 147,
  sym__redirect_operator = 148,
  sym_fdn_redirect_operator = 149,
  sym_fdn_append_operator = 150,
  sym_arg = 151,
  sym_args = 152,
  sym_quoted_arg = 153,
  sym_cmd_substitution_arg = 154,
  aux_sym_commands_repeat1 = 155,
  aux_sym_commands_repeat2 = 156,
  aux_sym__commands_singleline_repeat1 = 157,
  aux_sym__commands_singleline_repeat2 = 158,
  aux_sym_tmp_eval_command_repeat1 = 159,
  aux_sym__interpret_search_identifier_repeat1 = 160,
  aux_sym_args_repeat1 = 161,
  aux_sym_quoted_arg_repeat1 = 162,
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
  [aux_sym_quoted_arg_token1] = "quoted_arg_token1",
  [aux_sym_quoted_arg_token2] = "quoted_arg_token2",
  [aux_sym_quoted_arg_token3] = "quoted_arg_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_arg_token4] = "quoted_arg_token4",
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
  [sym_quoted_arg] = "quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym__interpret_search_identifier_repeat1] = "_interpret_search_identifier_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_quoted_arg_repeat1] = "quoted_arg_repeat1",
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
  [aux_sym_quoted_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_arg_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_arg_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_arg_token4] = {
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
  [aux_sym_quoted_arg_repeat1] = {
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
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '!') ADVANCE(253);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '$') ADVANCE(375);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '(') ADVANCE(229);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '=') ADVANCE(256);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '!') ADVANCE(253);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '%') ADVANCE(246);
      if (lookahead == '(') ADVANCE(258);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '?') ADVANCE(254);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '/') ADVANCE(351);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(352);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(353);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(325);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0) ADVANCE(350);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(300);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == ';') ADVANCE(396);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(321);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(286);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(54);
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == '\n') ADVANCE(393);
      if (lookahead == '\r') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(287);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(326);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(301);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == ')') ADVANCE(225);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == ';') ADVANCE(396);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(321);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(324);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(288);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(265);
      if (lookahead == '@') ADVANCE(164);
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(327);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(350);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == ';') ADVANCE(395);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '\'') ADVANCE(378);
      if (lookahead == '/') ADVANCE(351);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(353);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(368);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '$') ADVANCE(375);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '\\') ADVANCE(377);
      if (lookahead == '`') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(373);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(289);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(328);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(281);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(285);
      END_STATE();
    case 19:
      if (lookahead == '\t') ADVANCE(379);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 20:
      if (lookahead == '\t') ADVANCE(295);
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '#') ADVANCE(392);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(299);
      END_STATE();
    case 21:
      if (lookahead == '\t') ADVANCE(56);
      if (lookahead == ' ') ADVANCE(241);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == '\t') ADVANCE(302);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(365);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(367);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(385);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 26:
      if (lookahead == '*') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(391);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '$' ||
          lookahead == '}') ADVANCE(29);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(193);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(176);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(180);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(188);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(213);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(197);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(205);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(217);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(221);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(160);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == '>') ADVANCE(273);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 51:
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(362);
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
      if (lookahead == ' ') ADVANCE(241);
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
          lookahead == '\\') ADVANCE(392);
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
          lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(31);
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
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 66:
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
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == 'H') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(235);
      if (lookahead == 'H') ADVANCE(74);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == 'H') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '\t') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '\t') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == ')') ADVANCE(227);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '\t') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '>') ADVANCE(268);
      if (lookahead == '@') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(98);
      if (lookahead == '`') ADVANCE(389);
      if (lookahead == '~') ADVANCE(65);
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
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == '>') ADVANCE(276);
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
      if (lookahead == 't') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_pipe_second_command);
      if (lookahead == ';' ||
          lookahead == '|') ADVANCE(392);
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
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'k') ADVANCE(131);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 'd') ADVANCE(348);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'k') ADVANCE(133);
      if (lookahead == 's') ADVANCE(345);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead == 'd') ADVANCE(322);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'k') ADVANCE(134);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(168);
      if (lookahead == '(') ADVANCE(172);
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
    case 165:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(170);
      if (lookahead == '(') ADVANCE(174);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == 'F') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'b') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead == 's') ADVANCE(342);
      if (lookahead == 'x') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '@') ADVANCE(105);
      if (lookahead == 'B') ADVANCE(307);
      if (lookahead == 'F') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'b') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 'k') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(315);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 'x') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '(') ADVANCE(175);
      if (lookahead == '@') ADVANCE(106);
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
    case 168:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 228:
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
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '.') ADVANCE(250);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(251);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          lookahead == '$' ||
          lookahead == '&' ||
          ('+' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ':') ||
          lookahead == '<' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '^' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(68);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(61);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(373);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '.') ADVANCE(248);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(249);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(259);
      if (lookahead == ' ') ADVANCE(243);
      if (lookahead == '#') ADVANCE(263);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(31);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(31);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(281);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(285);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(283);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 285:
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
          lookahead != '|') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(286);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(287);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == '`') ADVANCE(390);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(288);
      if (lookahead == ')') ADVANCE(228);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(293);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(289);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 294:
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
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(295);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(299);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(299);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead == '/') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(31);
      if (lookahead != 0) ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(300);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == ';') ADVANCE(396);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(321);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(301);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == ';') ADVANCE(396);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'H') ADVANCE(321);
      if (lookahead == '`') ADVANCE(387);
      if (lookahead == '|') ADVANCE(71);
      if (lookahead == '~') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(302);
      if (lookahead == ' ') ADVANCE(239);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead == '/') ADVANCE(324);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(31);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(305);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(31);
      if (lookahead != 0) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '>') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 'b') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(325);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(326);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == ')') ADVANCE(226);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(327);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead == '>') ADVANCE(266);
      if (lookahead == '@') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(347);
      if (lookahead == '`') ADVANCE(388);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(328);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead == '#') ADVANCE(346);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(31);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(330);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(31);
      if (lookahead != 0) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '*') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(355);
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
          lookahead != '~') ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '>') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(355);
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
          lookahead != '~') ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(355);
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
          lookahead != '~') ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '>' || '@' < lookahead) &&
          (lookahead < '`' || '|' < lookahead) &&
          lookahead != '~') ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(355);
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
          lookahead == '~') ADVANCE(353);
      if (lookahead != 0) ADVANCE(353);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(354);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(353);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '/') ADVANCE(353);
      if (lookahead == '\\') ADVANCE(361);
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
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
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
          lookahead == '~') ADVANCE(31);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '{') ADVANCE(363);
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
          lookahead == '~') ADVANCE(31);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
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
          lookahead == '~') ADVANCE(31);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(359);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
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
          lookahead == '~') ADVANCE(358);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '}') ADVANCE(362);
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
          (lookahead < '|' || '~' < lookahead)) ADVANCE(353);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(24);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '{') ADVANCE(362);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '>' || '@' < lookahead) &&
          (lookahead < '`' || '~' < lookahead)) ADVANCE(353);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(364);
      if (lookahead == '\\') ADVANCE(355);
      if (lookahead == '}') ADVANCE(362);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          (lookahead < '>' || '@' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(353);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(366);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '{') ADVANCE(363);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(31);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_arg_identifier);
      if (lookahead == '$') ADVANCE(366);
      if (lookahead == '*') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(361);
      if (lookahead == '}') ADVANCE(363);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          ('|' <= lookahead && lookahead <= '~')) ADVANCE(31);
      if (('?' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      if (lookahead != 0) ADVANCE(358);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(368);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == '#') ADVANCE(369);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '"' || '$' < lookahead) &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(373);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(373);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(373);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '/') ADVANCE(373);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(31);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(371);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(31);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token2);
      if (lookahead == '(') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token3);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token3);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\' ||
          lookahead == '`') ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token4);
      if (lookahead == '\t') ADVANCE(379);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead == '#') ADVANCE(380);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token4);
      if (lookahead == '\r') ADVANCE(384);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token4);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token4);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token4);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(350);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(102);
      END_STATE();
    case 390:
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
          lookahead != '|') ADVANCE(294);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(324);
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
  [47] = {.lex_state = 0, .external_lex_state = 3},
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
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 0, .external_lex_state = 3},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 0, .external_lex_state = 3},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 3, .external_lex_state = 3},
  [74] = {.lex_state = 4, .external_lex_state = 3},
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
  [94] = {.lex_state = 5, .external_lex_state = 3},
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
  [117] = {.lex_state = 5, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 6, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 7, .external_lex_state = 3},
  [124] = {.lex_state = 8, .external_lex_state = 3},
  [125] = {.lex_state = 9, .external_lex_state = 3},
  [126] = {.lex_state = 10, .external_lex_state = 3},
  [127] = {.lex_state = 11, .external_lex_state = 3},
  [128] = {.lex_state = 7, .external_lex_state = 3},
  [129] = {.lex_state = 12, .external_lex_state = 3},
  [130] = {.lex_state = 10, .external_lex_state = 3},
  [131] = {.lex_state = 4, .external_lex_state = 3},
  [132] = {.lex_state = 13, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 0, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 1, .external_lex_state = 2},
  [139] = {.lex_state = 1, .external_lex_state = 2},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 14},
  [146] = {.lex_state = 15},
  [147] = {.lex_state = 15},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 14},
  [153] = {.lex_state = 15},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 14},
  [159] = {.lex_state = 14},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 15},
  [163] = {.lex_state = 14},
  [164] = {.lex_state = 14},
  [165] = {.lex_state = 14},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 14},
  [169] = {.lex_state = 14},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 14},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 15},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 14},
  [177] = {.lex_state = 14},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 14},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 15},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 15},
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 14},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 14},
  [195] = {.lex_state = 14},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 14},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 14},
  [200] = {.lex_state = 14},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 14},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 259},
  [217] = {.lex_state = 16},
  [218] = {.lex_state = 259},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 67},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 20},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 22},
  [249] = {.lex_state = 18},
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
    [aux_sym_quoted_arg_token2] = ACTIONS(1),
    [aux_sym_quoted_arg_token3] = ACTIONS(1),
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
    [sym_commands] = STATE(244),
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(54),
    [sym__tmp_command] = STATE(54),
    [sym__iter_command] = STATE(54),
    [sym__pipe_command] = STATE(54),
    [sym_grep_command] = STATE(54),
    [sym_html_disable_command] = STATE(54),
    [sym_html_enable_command] = STATE(54),
    [sym_scr_tts_command] = STATE(54),
    [sym_pipe_command] = STATE(54),
    [sym_iter_flags_command] = STATE(54),
    [sym_iter_dbta_command] = STATE(54),
    [sym_iter_dbtb_command] = STATE(54),
    [sym_iter_dbts_command] = STATE(54),
    [sym_iter_file_lines_command] = STATE(54),
    [sym_iter_offsets_command] = STATE(54),
    [sym_iter_sdbquery_command] = STATE(54),
    [sym_iter_threads_command] = STATE(54),
    [sym_iter_bbs_command] = STATE(54),
    [sym_iter_instrs_command] = STATE(54),
    [sym_iter_sections_command] = STATE(54),
    [sym_iter_functions_command] = STATE(54),
    [sym_iter_step_command] = STATE(54),
    [sym_iter_interpret_command] = STATE(54),
    [sym_tmp_seek_command] = STATE(54),
    [sym_tmp_blksz_command] = STATE(54),
    [sym_tmp_fromto_command] = STATE(54),
    [sym_tmp_arch_command] = STATE(54),
    [sym_tmp_bits_command] = STATE(54),
    [sym_tmp_nthi_command] = STATE(54),
    [sym_tmp_eval_command] = STATE(54),
    [sym_tmp_fs_command] = STATE(54),
    [sym_tmp_reli_command] = STATE(54),
    [sym_tmp_kuery_command] = STATE(54),
    [sym_tmp_fd_command] = STATE(54),
    [sym_tmp_reg_command] = STATE(54),
    [sym_tmp_file_command] = STATE(54),
    [sym_tmp_string_command] = STATE(54),
    [sym_tmp_hex_command] = STATE(54),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(54),
    [sym_arged_command] = STATE(54),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(94),
    [sym_last_command] = STATE(54),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(54),
    [sym_redirect_command] = STATE(193),
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
    [sym__simple_command] = STATE(103),
    [sym__tmp_command] = STATE(103),
    [sym__iter_command] = STATE(103),
    [sym__pipe_command] = STATE(103),
    [sym_grep_command] = STATE(103),
    [sym_html_disable_command] = STATE(103),
    [sym_html_enable_command] = STATE(103),
    [sym_scr_tts_command] = STATE(103),
    [sym_pipe_command] = STATE(103),
    [sym_iter_flags_command] = STATE(103),
    [sym_iter_dbta_command] = STATE(103),
    [sym_iter_dbtb_command] = STATE(103),
    [sym_iter_dbts_command] = STATE(103),
    [sym_iter_file_lines_command] = STATE(103),
    [sym_iter_offsets_command] = STATE(103),
    [sym_iter_sdbquery_command] = STATE(103),
    [sym_iter_threads_command] = STATE(103),
    [sym_iter_bbs_command] = STATE(103),
    [sym_iter_instrs_command] = STATE(103),
    [sym_iter_sections_command] = STATE(103),
    [sym_iter_functions_command] = STATE(103),
    [sym_iter_step_command] = STATE(103),
    [sym_iter_interpret_command] = STATE(103),
    [sym_tmp_seek_command] = STATE(103),
    [sym_tmp_blksz_command] = STATE(103),
    [sym_tmp_fromto_command] = STATE(103),
    [sym_tmp_arch_command] = STATE(103),
    [sym_tmp_bits_command] = STATE(103),
    [sym_tmp_nthi_command] = STATE(103),
    [sym_tmp_eval_command] = STATE(103),
    [sym_tmp_fs_command] = STATE(103),
    [sym_tmp_reli_command] = STATE(103),
    [sym_tmp_kuery_command] = STATE(103),
    [sym_tmp_fd_command] = STATE(103),
    [sym_tmp_reg_command] = STATE(103),
    [sym_tmp_file_command] = STATE(103),
    [sym_tmp_string_command] = STATE(103),
    [sym_tmp_hex_command] = STATE(103),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(103),
    [sym_arged_command] = STATE(103),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(94),
    [sym_last_command] = STATE(103),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(103),
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
    [sym__simple_command] = STATE(103),
    [sym__tmp_command] = STATE(103),
    [sym__iter_command] = STATE(103),
    [sym__pipe_command] = STATE(103),
    [sym_grep_command] = STATE(103),
    [sym_html_disable_command] = STATE(103),
    [sym_html_enable_command] = STATE(103),
    [sym_scr_tts_command] = STATE(103),
    [sym_pipe_command] = STATE(103),
    [sym_iter_flags_command] = STATE(103),
    [sym_iter_dbta_command] = STATE(103),
    [sym_iter_dbtb_command] = STATE(103),
    [sym_iter_dbts_command] = STATE(103),
    [sym_iter_file_lines_command] = STATE(103),
    [sym_iter_offsets_command] = STATE(103),
    [sym_iter_sdbquery_command] = STATE(103),
    [sym_iter_threads_command] = STATE(103),
    [sym_iter_bbs_command] = STATE(103),
    [sym_iter_instrs_command] = STATE(103),
    [sym_iter_sections_command] = STATE(103),
    [sym_iter_functions_command] = STATE(103),
    [sym_iter_step_command] = STATE(103),
    [sym_iter_interpret_command] = STATE(103),
    [sym_tmp_seek_command] = STATE(103),
    [sym_tmp_blksz_command] = STATE(103),
    [sym_tmp_fromto_command] = STATE(103),
    [sym_tmp_arch_command] = STATE(103),
    [sym_tmp_bits_command] = STATE(103),
    [sym_tmp_nthi_command] = STATE(103),
    [sym_tmp_eval_command] = STATE(103),
    [sym_tmp_fs_command] = STATE(103),
    [sym_tmp_reli_command] = STATE(103),
    [sym_tmp_kuery_command] = STATE(103),
    [sym_tmp_fd_command] = STATE(103),
    [sym_tmp_reg_command] = STATE(103),
    [sym_tmp_file_command] = STATE(103),
    [sym_tmp_string_command] = STATE(103),
    [sym_tmp_hex_command] = STATE(103),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(103),
    [sym_arged_command] = STATE(103),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(103),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(103),
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
    [sym__simple_command] = STATE(103),
    [sym__tmp_command] = STATE(103),
    [sym__iter_command] = STATE(103),
    [sym__pipe_command] = STATE(103),
    [sym_grep_command] = STATE(103),
    [sym_html_disable_command] = STATE(103),
    [sym_html_enable_command] = STATE(103),
    [sym_scr_tts_command] = STATE(103),
    [sym_pipe_command] = STATE(103),
    [sym_iter_flags_command] = STATE(103),
    [sym_iter_dbta_command] = STATE(103),
    [sym_iter_dbtb_command] = STATE(103),
    [sym_iter_dbts_command] = STATE(103),
    [sym_iter_file_lines_command] = STATE(103),
    [sym_iter_offsets_command] = STATE(103),
    [sym_iter_sdbquery_command] = STATE(103),
    [sym_iter_threads_command] = STATE(103),
    [sym_iter_bbs_command] = STATE(103),
    [sym_iter_instrs_command] = STATE(103),
    [sym_iter_sections_command] = STATE(103),
    [sym_iter_functions_command] = STATE(103),
    [sym_iter_step_command] = STATE(103),
    [sym_iter_interpret_command] = STATE(103),
    [sym_tmp_seek_command] = STATE(103),
    [sym_tmp_blksz_command] = STATE(103),
    [sym_tmp_fromto_command] = STATE(103),
    [sym_tmp_arch_command] = STATE(103),
    [sym_tmp_bits_command] = STATE(103),
    [sym_tmp_nthi_command] = STATE(103),
    [sym_tmp_eval_command] = STATE(103),
    [sym_tmp_fs_command] = STATE(103),
    [sym_tmp_reli_command] = STATE(103),
    [sym_tmp_kuery_command] = STATE(103),
    [sym_tmp_fd_command] = STATE(103),
    [sym_tmp_reg_command] = STATE(103),
    [sym_tmp_file_command] = STATE(103),
    [sym_tmp_string_command] = STATE(103),
    [sym_tmp_hex_command] = STATE(103),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(103),
    [sym_arged_command] = STATE(103),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(103),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(103),
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
    [sym__command] = STATE(201),
    [sym_legacy_quoted_command] = STATE(201),
    [sym__simple_command] = STATE(54),
    [sym__tmp_command] = STATE(54),
    [sym__iter_command] = STATE(54),
    [sym__pipe_command] = STATE(54),
    [sym_grep_command] = STATE(54),
    [sym_html_disable_command] = STATE(54),
    [sym_html_enable_command] = STATE(54),
    [sym_scr_tts_command] = STATE(54),
    [sym_pipe_command] = STATE(54),
    [sym_iter_flags_command] = STATE(54),
    [sym_iter_dbta_command] = STATE(54),
    [sym_iter_dbtb_command] = STATE(54),
    [sym_iter_dbts_command] = STATE(54),
    [sym_iter_file_lines_command] = STATE(54),
    [sym_iter_offsets_command] = STATE(54),
    [sym_iter_sdbquery_command] = STATE(54),
    [sym_iter_threads_command] = STATE(54),
    [sym_iter_bbs_command] = STATE(54),
    [sym_iter_instrs_command] = STATE(54),
    [sym_iter_sections_command] = STATE(54),
    [sym_iter_functions_command] = STATE(54),
    [sym_iter_step_command] = STATE(54),
    [sym_iter_interpret_command] = STATE(54),
    [sym_tmp_seek_command] = STATE(54),
    [sym_tmp_blksz_command] = STATE(54),
    [sym_tmp_fromto_command] = STATE(54),
    [sym_tmp_arch_command] = STATE(54),
    [sym_tmp_bits_command] = STATE(54),
    [sym_tmp_nthi_command] = STATE(54),
    [sym_tmp_eval_command] = STATE(54),
    [sym_tmp_fs_command] = STATE(54),
    [sym_tmp_reli_command] = STATE(54),
    [sym_tmp_kuery_command] = STATE(54),
    [sym_tmp_fd_command] = STATE(54),
    [sym_tmp_reg_command] = STATE(54),
    [sym_tmp_file_command] = STATE(54),
    [sym_tmp_string_command] = STATE(54),
    [sym_tmp_hex_command] = STATE(54),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(54),
    [sym_arged_command] = STATE(54),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(94),
    [sym_last_command] = STATE(54),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(54),
    [sym_redirect_command] = STATE(201),
    [aux_sym_commands_repeat1] = STATE(138),
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
    [sym__command] = STATE(204),
    [sym_legacy_quoted_command] = STATE(204),
    [sym__simple_command] = STATE(54),
    [sym__tmp_command] = STATE(54),
    [sym__iter_command] = STATE(54),
    [sym__pipe_command] = STATE(54),
    [sym_grep_command] = STATE(54),
    [sym_html_disable_command] = STATE(54),
    [sym_html_enable_command] = STATE(54),
    [sym_scr_tts_command] = STATE(54),
    [sym_pipe_command] = STATE(54),
    [sym_iter_flags_command] = STATE(54),
    [sym_iter_dbta_command] = STATE(54),
    [sym_iter_dbtb_command] = STATE(54),
    [sym_iter_dbts_command] = STATE(54),
    [sym_iter_file_lines_command] = STATE(54),
    [sym_iter_offsets_command] = STATE(54),
    [sym_iter_sdbquery_command] = STATE(54),
    [sym_iter_threads_command] = STATE(54),
    [sym_iter_bbs_command] = STATE(54),
    [sym_iter_instrs_command] = STATE(54),
    [sym_iter_sections_command] = STATE(54),
    [sym_iter_functions_command] = STATE(54),
    [sym_iter_step_command] = STATE(54),
    [sym_iter_interpret_command] = STATE(54),
    [sym_tmp_seek_command] = STATE(54),
    [sym_tmp_blksz_command] = STATE(54),
    [sym_tmp_fromto_command] = STATE(54),
    [sym_tmp_arch_command] = STATE(54),
    [sym_tmp_bits_command] = STATE(54),
    [sym_tmp_nthi_command] = STATE(54),
    [sym_tmp_eval_command] = STATE(54),
    [sym_tmp_fs_command] = STATE(54),
    [sym_tmp_reli_command] = STATE(54),
    [sym_tmp_kuery_command] = STATE(54),
    [sym_tmp_fd_command] = STATE(54),
    [sym_tmp_reg_command] = STATE(54),
    [sym_tmp_file_command] = STATE(54),
    [sym_tmp_string_command] = STATE(54),
    [sym_tmp_hex_command] = STATE(54),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(54),
    [sym_arged_command] = STATE(54),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(94),
    [sym_last_command] = STATE(54),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(54),
    [sym_redirect_command] = STATE(204),
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
    [sym__commands_singleline] = STATE(230),
    [sym__command] = STATE(210),
    [sym_legacy_quoted_command] = STATE(210),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(210),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
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
    [sym__commands_singleline] = STATE(222),
    [sym__command] = STATE(210),
    [sym_legacy_quoted_command] = STATE(210),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(210),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
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
  [9] = {
    [sym__commands_singleline] = STATE(238),
    [sym__command] = STATE(215),
    [sym_legacy_quoted_command] = STATE(215),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(215),
    [aux_sym__commands_singleline_repeat1] = STATE(20),
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
  [10] = {
    [sym__commands_singleline] = STATE(237),
    [sym__command] = STATE(210),
    [sym_legacy_quoted_command] = STATE(210),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(210),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
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
  [11] = {
    [sym__commands_singleline] = STATE(236),
    [sym__command] = STATE(215),
    [sym_legacy_quoted_command] = STATE(215),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(215),
    [aux_sym__commands_singleline_repeat1] = STATE(20),
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
  [12] = {
    [sym__commands_singleline] = STATE(235),
    [sym__command] = STATE(210),
    [sym_legacy_quoted_command] = STATE(210),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(210),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
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
  [13] = {
    [sym__commands_singleline] = STATE(231),
    [sym__command] = STATE(215),
    [sym_legacy_quoted_command] = STATE(215),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(215),
    [aux_sym__commands_singleline_repeat1] = STATE(20),
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
    [sym__commands_singleline] = STATE(224),
    [sym__command] = STATE(215),
    [sym_legacy_quoted_command] = STATE(215),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(215),
    [aux_sym__commands_singleline_repeat1] = STATE(20),
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
  [15] = {
    [sym__commands_singleline] = STATE(221),
    [sym__command] = STATE(215),
    [sym_legacy_quoted_command] = STATE(215),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(215),
    [aux_sym__commands_singleline_repeat1] = STATE(20),
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
  [16] = {
    [sym__commands_singleline] = STATE(241),
    [sym__command] = STATE(210),
    [sym_legacy_quoted_command] = STATE(210),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(210),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
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
  [17] = {
    [sym__command] = STATE(212),
    [sym_legacy_quoted_command] = STATE(212),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(212),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(85),
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
  [18] = {
    [sym__command] = STATE(211),
    [sym_legacy_quoted_command] = STATE(211),
    [sym__simple_command] = STATE(119),
    [sym__tmp_command] = STATE(119),
    [sym__iter_command] = STATE(119),
    [sym__pipe_command] = STATE(119),
    [sym_grep_command] = STATE(119),
    [sym_html_disable_command] = STATE(119),
    [sym_html_enable_command] = STATE(119),
    [sym_scr_tts_command] = STATE(119),
    [sym_pipe_command] = STATE(119),
    [sym_iter_flags_command] = STATE(119),
    [sym_iter_dbta_command] = STATE(119),
    [sym_iter_dbtb_command] = STATE(119),
    [sym_iter_dbts_command] = STATE(119),
    [sym_iter_file_lines_command] = STATE(119),
    [sym_iter_offsets_command] = STATE(119),
    [sym_iter_sdbquery_command] = STATE(119),
    [sym_iter_threads_command] = STATE(119),
    [sym_iter_bbs_command] = STATE(119),
    [sym_iter_instrs_command] = STATE(119),
    [sym_iter_sections_command] = STATE(119),
    [sym_iter_functions_command] = STATE(119),
    [sym_iter_step_command] = STATE(119),
    [sym_iter_interpret_command] = STATE(119),
    [sym_tmp_seek_command] = STATE(119),
    [sym_tmp_blksz_command] = STATE(119),
    [sym_tmp_fromto_command] = STATE(119),
    [sym_tmp_arch_command] = STATE(119),
    [sym_tmp_bits_command] = STATE(119),
    [sym_tmp_nthi_command] = STATE(119),
    [sym_tmp_eval_command] = STATE(119),
    [sym_tmp_fs_command] = STATE(119),
    [sym_tmp_reli_command] = STATE(119),
    [sym_tmp_kuery_command] = STATE(119),
    [sym_tmp_fd_command] = STATE(119),
    [sym_tmp_reg_command] = STATE(119),
    [sym_tmp_file_command] = STATE(119),
    [sym_tmp_string_command] = STATE(119),
    [sym_tmp_hex_command] = STATE(119),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(119),
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(119),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(119),
    [sym_redirect_command] = STATE(211),
    [aux_sym__commands_singleline_repeat1] = STATE(139),
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
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(35),
    [sym__help_command] = ACTIONS(37),
    [sym_repeat_number] = ACTIONS(73),
    [sym_interpreter_identifier] = ACTIONS(41),
  },
  [19] = {
    [sym__command] = STATE(212),
    [sym_legacy_quoted_command] = STATE(212),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(212),
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
    [anon_sym_BQUOTE] = ACTIONS(85),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [20] = {
    [sym__command] = STATE(208),
    [sym_legacy_quoted_command] = STATE(208),
    [sym__simple_command] = STATE(118),
    [sym__tmp_command] = STATE(118),
    [sym__iter_command] = STATE(118),
    [sym__pipe_command] = STATE(118),
    [sym_grep_command] = STATE(118),
    [sym_html_disable_command] = STATE(118),
    [sym_html_enable_command] = STATE(118),
    [sym_scr_tts_command] = STATE(118),
    [sym_pipe_command] = STATE(118),
    [sym_iter_flags_command] = STATE(118),
    [sym_iter_dbta_command] = STATE(118),
    [sym_iter_dbtb_command] = STATE(118),
    [sym_iter_dbts_command] = STATE(118),
    [sym_iter_file_lines_command] = STATE(118),
    [sym_iter_offsets_command] = STATE(118),
    [sym_iter_sdbquery_command] = STATE(118),
    [sym_iter_threads_command] = STATE(118),
    [sym_iter_bbs_command] = STATE(118),
    [sym_iter_instrs_command] = STATE(118),
    [sym_iter_sections_command] = STATE(118),
    [sym_iter_functions_command] = STATE(118),
    [sym_iter_step_command] = STATE(118),
    [sym_iter_interpret_command] = STATE(118),
    [sym_tmp_seek_command] = STATE(118),
    [sym_tmp_blksz_command] = STATE(118),
    [sym_tmp_fromto_command] = STATE(118),
    [sym_tmp_arch_command] = STATE(118),
    [sym_tmp_bits_command] = STATE(118),
    [sym_tmp_nthi_command] = STATE(118),
    [sym_tmp_eval_command] = STATE(118),
    [sym_tmp_fs_command] = STATE(118),
    [sym_tmp_reli_command] = STATE(118),
    [sym_tmp_kuery_command] = STATE(118),
    [sym_tmp_fd_command] = STATE(118),
    [sym_tmp_reg_command] = STATE(118),
    [sym_tmp_file_command] = STATE(118),
    [sym_tmp_string_command] = STATE(118),
    [sym_tmp_hex_command] = STATE(118),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(118),
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(118),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(118),
    [sym_redirect_command] = STATE(208),
    [aux_sym__commands_singleline_repeat1] = STATE(139),
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
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(57),
    [sym__help_command] = ACTIONS(59),
    [sym_repeat_number] = ACTIONS(61),
    [sym_interpreter_identifier] = ACTIONS(63),
  },
  [21] = {
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
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(122),
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(94),
    [sym_last_command] = STATE(122),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(122),
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
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(135),
    [sym_arged_command] = STATE(135),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(135),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
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
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(136),
    [sym_arged_command] = STATE(136),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(136),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(136),
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
  [24] = {
    [sym__simple_command] = STATE(133),
    [sym__tmp_command] = STATE(133),
    [sym__iter_command] = STATE(133),
    [sym__pipe_command] = STATE(133),
    [sym_grep_command] = STATE(133),
    [sym_html_disable_command] = STATE(133),
    [sym_html_enable_command] = STATE(133),
    [sym_scr_tts_command] = STATE(133),
    [sym_pipe_command] = STATE(133),
    [sym_iter_flags_command] = STATE(133),
    [sym_iter_dbta_command] = STATE(133),
    [sym_iter_dbtb_command] = STATE(133),
    [sym_iter_dbts_command] = STATE(133),
    [sym_iter_file_lines_command] = STATE(133),
    [sym_iter_offsets_command] = STATE(133),
    [sym_iter_sdbquery_command] = STATE(133),
    [sym_iter_threads_command] = STATE(133),
    [sym_iter_bbs_command] = STATE(133),
    [sym_iter_instrs_command] = STATE(133),
    [sym_iter_sections_command] = STATE(133),
    [sym_iter_functions_command] = STATE(133),
    [sym_iter_step_command] = STATE(133),
    [sym_iter_interpret_command] = STATE(133),
    [sym_tmp_seek_command] = STATE(133),
    [sym_tmp_blksz_command] = STATE(133),
    [sym_tmp_fromto_command] = STATE(133),
    [sym_tmp_arch_command] = STATE(133),
    [sym_tmp_bits_command] = STATE(133),
    [sym_tmp_nthi_command] = STATE(133),
    [sym_tmp_eval_command] = STATE(133),
    [sym_tmp_fs_command] = STATE(133),
    [sym_tmp_reli_command] = STATE(133),
    [sym_tmp_kuery_command] = STATE(133),
    [sym_tmp_fd_command] = STATE(133),
    [sym_tmp_reg_command] = STATE(133),
    [sym_tmp_file_command] = STATE(133),
    [sym_tmp_string_command] = STATE(133),
    [sym_tmp_hex_command] = STATE(133),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(133),
    [sym_arged_command] = STATE(133),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(126),
    [sym_last_command] = STATE(133),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(133),
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
    [sym__simple_command] = STATE(137),
    [sym__tmp_command] = STATE(137),
    [sym__iter_command] = STATE(137),
    [sym__pipe_command] = STATE(137),
    [sym_grep_command] = STATE(137),
    [sym_html_disable_command] = STATE(137),
    [sym_html_enable_command] = STATE(137),
    [sym_scr_tts_command] = STATE(137),
    [sym_pipe_command] = STATE(137),
    [sym_iter_flags_command] = STATE(137),
    [sym_iter_dbta_command] = STATE(137),
    [sym_iter_dbtb_command] = STATE(137),
    [sym_iter_dbts_command] = STATE(137),
    [sym_iter_file_lines_command] = STATE(137),
    [sym_iter_offsets_command] = STATE(137),
    [sym_iter_sdbquery_command] = STATE(137),
    [sym_iter_threads_command] = STATE(137),
    [sym_iter_bbs_command] = STATE(137),
    [sym_iter_instrs_command] = STATE(137),
    [sym_iter_sections_command] = STATE(137),
    [sym_iter_functions_command] = STATE(137),
    [sym_iter_step_command] = STATE(137),
    [sym_iter_interpret_command] = STATE(137),
    [sym_tmp_seek_command] = STATE(137),
    [sym_tmp_blksz_command] = STATE(137),
    [sym_tmp_fromto_command] = STATE(137),
    [sym_tmp_arch_command] = STATE(137),
    [sym_tmp_bits_command] = STATE(137),
    [sym_tmp_nthi_command] = STATE(137),
    [sym_tmp_eval_command] = STATE(137),
    [sym_tmp_fs_command] = STATE(137),
    [sym_tmp_reli_command] = STATE(137),
    [sym_tmp_kuery_command] = STATE(137),
    [sym_tmp_fd_command] = STATE(137),
    [sym_tmp_reg_command] = STATE(137),
    [sym_tmp_file_command] = STATE(137),
    [sym_tmp_string_command] = STATE(137),
    [sym_tmp_hex_command] = STATE(137),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(137),
    [sym_arged_command] = STATE(137),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(143),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(123),
    [sym_last_command] = STATE(137),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(137),
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
    [sym__simple_command] = STATE(121),
    [sym__tmp_command] = STATE(121),
    [sym__iter_command] = STATE(121),
    [sym__pipe_command] = STATE(121),
    [sym_grep_command] = STATE(121),
    [sym_html_disable_command] = STATE(121),
    [sym_html_enable_command] = STATE(121),
    [sym_scr_tts_command] = STATE(121),
    [sym_pipe_command] = STATE(121),
    [sym_iter_flags_command] = STATE(121),
    [sym_iter_dbta_command] = STATE(121),
    [sym_iter_dbtb_command] = STATE(121),
    [sym_iter_dbts_command] = STATE(121),
    [sym_iter_file_lines_command] = STATE(121),
    [sym_iter_offsets_command] = STATE(121),
    [sym_iter_sdbquery_command] = STATE(121),
    [sym_iter_threads_command] = STATE(121),
    [sym_iter_bbs_command] = STATE(121),
    [sym_iter_instrs_command] = STATE(121),
    [sym_iter_sections_command] = STATE(121),
    [sym_iter_functions_command] = STATE(121),
    [sym_iter_step_command] = STATE(121),
    [sym_iter_interpret_command] = STATE(121),
    [sym_tmp_seek_command] = STATE(121),
    [sym_tmp_blksz_command] = STATE(121),
    [sym_tmp_fromto_command] = STATE(121),
    [sym_tmp_arch_command] = STATE(121),
    [sym_tmp_bits_command] = STATE(121),
    [sym_tmp_nthi_command] = STATE(121),
    [sym_tmp_eval_command] = STATE(121),
    [sym_tmp_fs_command] = STATE(121),
    [sym_tmp_reli_command] = STATE(121),
    [sym_tmp_kuery_command] = STATE(121),
    [sym_tmp_fd_command] = STATE(121),
    [sym_tmp_reg_command] = STATE(121),
    [sym_tmp_file_command] = STATE(121),
    [sym_tmp_string_command] = STATE(121),
    [sym_tmp_hex_command] = STATE(121),
    [sym__interpreter_command] = STATE(75),
    [sym_help_command] = STATE(121),
    [sym_arged_command] = STATE(121),
    [sym__simple_arged_command] = STATE(75),
    [sym__math_arged_command] = STATE(75),
    [sym__pointer_arged_command] = STATE(75),
    [sym__macro_arged_command] = STATE(75),
    [sym__system_command] = STATE(75),
    [sym__interpret_command] = STATE(75),
    [sym__interpret_search_identifier] = STATE(142),
    [sym__env_command] = STATE(75),
    [sym__env_command_identifier] = STATE(94),
    [sym_last_command] = STATE(121),
    [sym_last_command_identifier] = STATE(99),
    [sym__interpret_identifier] = STATE(29),
    [sym_repeat_command] = STATE(121),
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
    [sym_args] = STATE(85),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
    [sym_args] = STATE(105),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
  [29] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(98),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
  [30] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(109),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
  [31] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(107),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
  [32] = {
    [sym_arg] = STATE(33),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
    [sym_arg] = STATE(42),
    [sym_args] = STATE(98),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
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
  [35] = {
    [sym_arg] = STATE(42),
    [sym_args] = STATE(105),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
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
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [36] = {
    [sym_arg] = STATE(42),
    [sym_args] = STATE(109),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
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
    [anon_sym_BQUOTE] = ACTIONS(113),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(113),
    [sym_file_descriptor] = ACTIONS(113),
  },
  [37] = {
    [sym_arg] = STATE(42),
    [sym_args] = STATE(107),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
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
  [38] = {
    [sym_arg] = STATE(42),
    [sym_args] = STATE(85),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
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
  [39] = {
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
  [40] = {
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
  [41] = {
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
  [42] = {
    [sym_arg] = STATE(33),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
  [46] = {
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
  [47] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(47),
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
    [anon_sym_COMMA] = ACTIONS(168),
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
  [48] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(47),
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
    [anon_sym_COMMA] = ACTIONS(175),
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [49] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(48),
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
    [anon_sym_COMMA] = ACTIONS(175),
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [50] = {
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
    [anon_sym_LPAREN] = ACTIONS(185),
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
    [anon_sym_COMMA] = ACTIONS(164),
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(187),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_GT_GT] = ACTIONS(187),
    [sym_html_redirect_operator] = ACTIONS(189),
    [sym_html_append_operator] = ACTIONS(187),
    [anon_sym_BQUOTE] = ACTIONS(187),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_CR] = ACTIONS(187),
    [anon_sym_SEMI] = ACTIONS(187),
    [sym_file_descriptor] = ACTIONS(187),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(193),
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
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_PIPE_DOT] = ACTIONS(193),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(193),
    [sym_html_redirect_operator] = ACTIONS(195),
    [sym_html_append_operator] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_CR] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
  },
  [54] = {
    [sym__redirect_operator] = STATE(175),
    [sym_fdn_redirect_operator] = STATE(175),
    [sym_fdn_append_operator] = STATE(175),
    [ts_builtin_sym_end] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(203),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [sym_html_redirect_operator] = ACTIONS(275),
    [sym_html_append_operator] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(199),
    [anon_sym_CR] = ACTIONS(199),
    [anon_sym_SEMI] = ACTIONS(199),
    [sym_file_descriptor] = ACTIONS(279),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_TILDE] = ACTIONS(281),
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
    [anon_sym_COLON] = ACTIONS(285),
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
    [anon_sym_PIPE_DOT] = ACTIONS(281),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(283),
    [anon_sym_GT_GT] = ACTIONS(281),
    [sym_html_redirect_operator] = ACTIONS(283),
    [sym_html_append_operator] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(281),
    [anon_sym_CR] = ACTIONS(281),
    [anon_sym_SEMI] = ACTIONS(281),
    [sym_file_descriptor] = ACTIONS(281),
  },
  [56] = {
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
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_TILDE] = ACTIONS(287),
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
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_PIPE_DOT] = ACTIONS(287),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_GT_GT] = ACTIONS(287),
    [sym_html_redirect_operator] = ACTIONS(289),
    [sym_html_append_operator] = ACTIONS(287),
    [anon_sym_BQUOTE] = ACTIONS(287),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(287),
    [anon_sym_CR] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [sym_file_descriptor] = ACTIONS(287),
  },
  [58] = {
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
  [59] = {
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
  [63] = {
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
  [64] = {
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
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
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
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_PIPE_DOT] = ACTIONS(319),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(321),
    [anon_sym_GT_GT] = ACTIONS(319),
    [sym_html_redirect_operator] = ACTIONS(321),
    [sym_html_append_operator] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(319),
    [anon_sym_CR] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(319),
    [sym_file_descriptor] = ACTIONS(319),
  },
  [66] = {
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
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
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
    [anon_sym_PIPE_DOT] = ACTIONS(323),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(325),
    [anon_sym_GT_GT] = ACTIONS(323),
    [sym_html_redirect_operator] = ACTIONS(325),
    [sym_html_append_operator] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(323),
    [anon_sym_CR] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [sym_file_descriptor] = ACTIONS(323),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
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
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(327),
    [sym_html_redirect_operator] = ACTIONS(329),
    [sym_html_append_operator] = ACTIONS(327),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_CR] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_file_descriptor] = ACTIONS(327),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
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
    [anon_sym_PIPE_DOT] = ACTIONS(331),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(333),
    [sym_html_append_operator] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(331),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_CR] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(331),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(335),
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
    [anon_sym_PIPE_DOT] = ACTIONS(335),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(337),
    [anon_sym_GT_GT] = ACTIONS(335),
    [sym_html_redirect_operator] = ACTIONS(337),
    [sym_html_append_operator] = ACTIONS(335),
    [anon_sym_BQUOTE] = ACTIONS(335),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(335),
    [anon_sym_CR] = ACTIONS(335),
    [anon_sym_SEMI] = ACTIONS(335),
    [sym_file_descriptor] = ACTIONS(335),
  },
  [71] = {
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
  [72] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(339),
    [anon_sym_] = ACTIONS(3),
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
  [73] = {
    [sym_system_arg] = STATE(89),
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPEH] = ACTIONS(345),
    [anon_sym_PIPET] = ACTIONS(345),
    [anon_sym_AT_AT] = ACTIONS(345),
    [anon_sym_AT_ATdbt] = ACTIONS(345),
    [anon_sym_AT_ATdbta] = ACTIONS(345),
    [anon_sym_AT_ATdbtb] = ACTIONS(345),
    [anon_sym_AT_ATdbts] = ACTIONS(345),
    [anon_sym_AT_AT_DOT] = ACTIONS(345),
    [anon_sym_AT_AT_EQ] = ACTIONS(345),
    [anon_sym_AT_ATk] = ACTIONS(345),
    [anon_sym_AT_ATt] = ACTIONS(345),
    [anon_sym_AT_ATb] = ACTIONS(345),
    [anon_sym_AT_ATi] = ACTIONS(345),
    [anon_sym_AT_ATiS] = ACTIONS(345),
    [anon_sym_AT_ATf] = ACTIONS(345),
    [anon_sym_AT_ATs_COLON] = ACTIONS(345),
    [anon_sym_AT_ATc_COLON] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
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
    [anon_sym_PIPE_DOT] = ACTIONS(345),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_html_redirect_operator] = ACTIONS(345),
    [sym_html_append_operator] = ACTIONS(345),
    [sym__any_command] = ACTIONS(347),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_CR] = ACTIONS(345),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_file_descriptor] = ACTIONS(343),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_TILDE] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPEH] = ACTIONS(351),
    [anon_sym_PIPET] = ACTIONS(351),
    [anon_sym_AT_AT] = ACTIONS(351),
    [anon_sym_AT_ATdbt] = ACTIONS(351),
    [anon_sym_AT_ATdbta] = ACTIONS(351),
    [anon_sym_AT_ATdbtb] = ACTIONS(351),
    [anon_sym_AT_ATdbts] = ACTIONS(351),
    [anon_sym_AT_AT_DOT] = ACTIONS(351),
    [anon_sym_AT_AT_EQ] = ACTIONS(351),
    [anon_sym_AT_ATk] = ACTIONS(351),
    [anon_sym_AT_ATt] = ACTIONS(351),
    [anon_sym_AT_ATb] = ACTIONS(351),
    [anon_sym_AT_ATi] = ACTIONS(351),
    [anon_sym_AT_ATiS] = ACTIONS(351),
    [anon_sym_AT_ATf] = ACTIONS(351),
    [anon_sym_AT_ATs_COLON] = ACTIONS(351),
    [anon_sym_AT_ATc_COLON] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
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
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_PIPE_DOT] = ACTIONS(351),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [sym_html_redirect_operator] = ACTIONS(351),
    [sym_html_append_operator] = ACTIONS(351),
    [sym_macro_content] = ACTIONS(355),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_CR] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_file_descriptor] = ACTIONS(349),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_TILDE] = ACTIONS(357),
    [anon_sym_PIPE] = ACTIONS(359),
    [anon_sym_PIPEH] = ACTIONS(357),
    [anon_sym_PIPET] = ACTIONS(357),
    [anon_sym_AT_AT] = ACTIONS(359),
    [anon_sym_AT_ATdbt] = ACTIONS(359),
    [anon_sym_AT_ATdbta] = ACTIONS(357),
    [anon_sym_AT_ATdbtb] = ACTIONS(357),
    [anon_sym_AT_ATdbts] = ACTIONS(357),
    [anon_sym_AT_AT_DOT] = ACTIONS(357),
    [anon_sym_AT_AT_EQ] = ACTIONS(357),
    [anon_sym_AT_ATk] = ACTIONS(357),
    [anon_sym_AT_ATt] = ACTIONS(357),
    [anon_sym_AT_ATb] = ACTIONS(357),
    [anon_sym_AT_ATi] = ACTIONS(359),
    [anon_sym_AT_ATiS] = ACTIONS(357),
    [anon_sym_AT_ATf] = ACTIONS(357),
    [anon_sym_AT_ATs_COLON] = ACTIONS(357),
    [anon_sym_AT_ATc_COLON] = ACTIONS(357),
    [anon_sym_AT] = ACTIONS(359),
    [anon_sym_AT_BANG] = ACTIONS(357),
    [anon_sym_AT_LPAREN] = ACTIONS(357),
    [anon_sym_ATa_COLON] = ACTIONS(357),
    [anon_sym_ATb_COLON] = ACTIONS(357),
    [anon_sym_ATB_COLON] = ACTIONS(357),
    [anon_sym_ATe_COLON] = ACTIONS(357),
    [anon_sym_ATF_COLON] = ACTIONS(357),
    [anon_sym_ATi_COLON] = ACTIONS(357),
    [anon_sym_ATk_COLON] = ACTIONS(357),
    [anon_sym_ATo_COLON] = ACTIONS(357),
    [anon_sym_ATr_COLON] = ACTIONS(357),
    [anon_sym_ATf_COLON] = ACTIONS(357),
    [anon_sym_ATs_COLON] = ACTIONS(357),
    [anon_sym_ATx_COLON] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_PIPE_DOT] = ACTIONS(357),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_GT_GT] = ACTIONS(357),
    [sym_html_redirect_operator] = ACTIONS(359),
    [sym_html_append_operator] = ACTIONS(357),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(357),
    [anon_sym_CR] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [sym_file_descriptor] = ACTIONS(357),
  },
  [76] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [77] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [78] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [79] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [80] = {
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
  [83] = {
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
  [84] = {
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
  [88] = {
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
  [89] = {
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
  [90] = {
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
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(140),
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
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [sym_file_descriptor] = ACTIONS(140),
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
    [sym__eq_sep_args] = STATE(90),
    [ts_builtin_sym_end] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPEH] = ACTIONS(419),
    [anon_sym_PIPET] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(419),
    [anon_sym_AT_ATdbt] = ACTIONS(419),
    [anon_sym_AT_ATdbta] = ACTIONS(419),
    [anon_sym_AT_ATdbtb] = ACTIONS(419),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(419),
    [anon_sym_AT_AT_EQ] = ACTIONS(419),
    [anon_sym_AT_ATk] = ACTIONS(419),
    [anon_sym_AT_ATt] = ACTIONS(419),
    [anon_sym_AT_ATb] = ACTIONS(419),
    [anon_sym_AT_ATi] = ACTIONS(419),
    [anon_sym_AT_ATiS] = ACTIONS(419),
    [anon_sym_AT_ATf] = ACTIONS(419),
    [anon_sym_AT_ATs_COLON] = ACTIONS(419),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
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
    [anon_sym_PIPE_DOT] = ACTIONS(419),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [sym_html_redirect_operator] = ACTIONS(419),
    [sym_html_append_operator] = ACTIONS(419),
    [sym_eq_sep_key] = ACTIONS(421),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_CR] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
    [sym_file_descriptor] = ACTIONS(417),
  },
  [95] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [96] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [97] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [98] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [99] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [100] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(193),
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
    [anon_sym_RPAREN] = ACTIONS(447),
    [anon_sym_PIPE_DOT] = ACTIONS(193),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(193),
    [sym_html_redirect_operator] = ACTIONS(195),
    [sym_html_append_operator] = ACTIONS(193),
    [anon_sym_BQUOTE] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_CR] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
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
  [105] = {
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
  [106] = {
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
  [107] = {
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
  [108] = {
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
  [109] = {
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
  [110] = {
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
  [111] = {
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
  [112] = {
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
  [113] = {
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
  [114] = {
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
  [115] = {
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
  [116] = {
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
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PIPEH] = ACTIONS(511),
    [anon_sym_PIPET] = ACTIONS(511),
    [anon_sym_AT_AT] = ACTIONS(511),
    [anon_sym_AT_ATdbt] = ACTIONS(511),
    [anon_sym_AT_ATdbta] = ACTIONS(511),
    [anon_sym_AT_ATdbtb] = ACTIONS(511),
    [anon_sym_AT_ATdbts] = ACTIONS(511),
    [anon_sym_AT_AT_DOT] = ACTIONS(511),
    [anon_sym_AT_AT_EQ] = ACTIONS(511),
    [anon_sym_AT_ATk] = ACTIONS(511),
    [anon_sym_AT_ATt] = ACTIONS(511),
    [anon_sym_AT_ATb] = ACTIONS(511),
    [anon_sym_AT_ATi] = ACTIONS(511),
    [anon_sym_AT_ATiS] = ACTIONS(511),
    [anon_sym_AT_ATf] = ACTIONS(511),
    [anon_sym_AT_ATs_COLON] = ACTIONS(511),
    [anon_sym_AT_ATc_COLON] = ACTIONS(511),
    [anon_sym_AT] = ACTIONS(511),
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
    [anon_sym_PIPE_DOT] = ACTIONS(511),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(511),
    [sym_html_append_operator] = ACTIONS(511),
    [sym_eq_sep_key] = ACTIONS(511),
    [sym__comment] = ACTIONS(103),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_CR] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(509),
  },
  [118] = {
    [sym__redirect_operator] = STATE(175),
    [sym_fdn_redirect_operator] = STATE(175),
    [sym_fdn_append_operator] = STATE(175),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [sym_html_redirect_operator] = ACTIONS(275),
    [sym_html_append_operator] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(199),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(199),
    [sym_file_descriptor] = ACTIONS(279),
  },
  [119] = {
    [sym__redirect_operator] = STATE(175),
    [sym_fdn_redirect_operator] = STATE(175),
    [sym_fdn_append_operator] = STATE(175),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_PIPE] = ACTIONS(519),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(199),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [sym_html_redirect_operator] = ACTIONS(275),
    [sym_html_append_operator] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(199),
    [sym_file_descriptor] = ACTIONS(279),
  },
  [120] = {
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
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_TILDE] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(529),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(529),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(529),
    [anon_sym_CR] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(529),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
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
  [123] = {
    [sym__eq_sep_args] = STATE(90),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPEH] = ACTIONS(419),
    [anon_sym_PIPET] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(419),
    [anon_sym_AT_ATdbt] = ACTIONS(419),
    [anon_sym_AT_ATdbta] = ACTIONS(419),
    [anon_sym_AT_ATdbtb] = ACTIONS(419),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(419),
    [anon_sym_AT_AT_EQ] = ACTIONS(419),
    [anon_sym_AT_ATk] = ACTIONS(419),
    [anon_sym_AT_ATt] = ACTIONS(419),
    [anon_sym_AT_ATb] = ACTIONS(419),
    [anon_sym_AT_ATi] = ACTIONS(419),
    [anon_sym_AT_ATiS] = ACTIONS(419),
    [anon_sym_AT_ATf] = ACTIONS(419),
    [anon_sym_AT_ATs_COLON] = ACTIONS(419),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
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
    [anon_sym_PIPE_DOT] = ACTIONS(419),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [sym_html_redirect_operator] = ACTIONS(419),
    [sym_html_append_operator] = ACTIONS(419),
    [sym_eq_sep_key] = ACTIONS(421),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(419),
    [sym_file_descriptor] = ACTIONS(417),
  },
  [124] = {
    [sym_system_arg] = STATE(89),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPEH] = ACTIONS(345),
    [anon_sym_PIPET] = ACTIONS(345),
    [anon_sym_AT_AT] = ACTIONS(345),
    [anon_sym_AT_ATdbt] = ACTIONS(345),
    [anon_sym_AT_ATdbta] = ACTIONS(345),
    [anon_sym_AT_ATdbtb] = ACTIONS(345),
    [anon_sym_AT_ATdbts] = ACTIONS(345),
    [anon_sym_AT_AT_DOT] = ACTIONS(345),
    [anon_sym_AT_AT_EQ] = ACTIONS(345),
    [anon_sym_AT_ATk] = ACTIONS(345),
    [anon_sym_AT_ATt] = ACTIONS(345),
    [anon_sym_AT_ATb] = ACTIONS(345),
    [anon_sym_AT_ATi] = ACTIONS(345),
    [anon_sym_AT_ATiS] = ACTIONS(345),
    [anon_sym_AT_ATf] = ACTIONS(345),
    [anon_sym_AT_ATs_COLON] = ACTIONS(345),
    [anon_sym_AT_ATc_COLON] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
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
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_html_redirect_operator] = ACTIONS(345),
    [sym_html_append_operator] = ACTIONS(345),
    [sym__any_command] = ACTIONS(347),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_file_descriptor] = ACTIONS(343),
  },
  [125] = {
    [anon_sym_TILDE] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPEH] = ACTIONS(351),
    [anon_sym_PIPET] = ACTIONS(351),
    [anon_sym_AT_AT] = ACTIONS(351),
    [anon_sym_AT_ATdbt] = ACTIONS(351),
    [anon_sym_AT_ATdbta] = ACTIONS(351),
    [anon_sym_AT_ATdbtb] = ACTIONS(351),
    [anon_sym_AT_ATdbts] = ACTIONS(351),
    [anon_sym_AT_AT_DOT] = ACTIONS(351),
    [anon_sym_AT_AT_EQ] = ACTIONS(351),
    [anon_sym_AT_ATk] = ACTIONS(351),
    [anon_sym_AT_ATt] = ACTIONS(351),
    [anon_sym_AT_ATb] = ACTIONS(351),
    [anon_sym_AT_ATi] = ACTIONS(351),
    [anon_sym_AT_ATiS] = ACTIONS(351),
    [anon_sym_AT_ATf] = ACTIONS(351),
    [anon_sym_AT_ATs_COLON] = ACTIONS(351),
    [anon_sym_AT_ATc_COLON] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
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
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_PIPE_DOT] = ACTIONS(351),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [sym_html_redirect_operator] = ACTIONS(351),
    [sym_html_append_operator] = ACTIONS(351),
    [sym_macro_content] = ACTIONS(355),
    [anon_sym_BQUOTE] = ACTIONS(351),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_file_descriptor] = ACTIONS(349),
  },
  [126] = {
    [sym__eq_sep_args] = STATE(90),
    [anon_sym_TILDE] = ACTIONS(419),
    [anon_sym_PIPE] = ACTIONS(419),
    [anon_sym_PIPEH] = ACTIONS(419),
    [anon_sym_PIPET] = ACTIONS(419),
    [anon_sym_AT_AT] = ACTIONS(419),
    [anon_sym_AT_ATdbt] = ACTIONS(419),
    [anon_sym_AT_ATdbta] = ACTIONS(419),
    [anon_sym_AT_ATdbtb] = ACTIONS(419),
    [anon_sym_AT_ATdbts] = ACTIONS(419),
    [anon_sym_AT_AT_DOT] = ACTIONS(419),
    [anon_sym_AT_AT_EQ] = ACTIONS(419),
    [anon_sym_AT_ATk] = ACTIONS(419),
    [anon_sym_AT_ATt] = ACTIONS(419),
    [anon_sym_AT_ATb] = ACTIONS(419),
    [anon_sym_AT_ATi] = ACTIONS(419),
    [anon_sym_AT_ATiS] = ACTIONS(419),
    [anon_sym_AT_ATf] = ACTIONS(419),
    [anon_sym_AT_ATs_COLON] = ACTIONS(419),
    [anon_sym_AT_ATc_COLON] = ACTIONS(419),
    [anon_sym_AT] = ACTIONS(419),
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
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(419),
    [anon_sym_GT_GT] = ACTIONS(419),
    [sym_html_redirect_operator] = ACTIONS(419),
    [sym_html_append_operator] = ACTIONS(419),
    [sym_eq_sep_key] = ACTIONS(421),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(419),
    [sym_file_descriptor] = ACTIONS(417),
  },
  [127] = {
    [sym_system_arg] = STATE(89),
    [anon_sym_TILDE] = ACTIONS(345),
    [anon_sym_PIPE] = ACTIONS(345),
    [anon_sym_PIPEH] = ACTIONS(345),
    [anon_sym_PIPET] = ACTIONS(345),
    [anon_sym_AT_AT] = ACTIONS(345),
    [anon_sym_AT_ATdbt] = ACTIONS(345),
    [anon_sym_AT_ATdbta] = ACTIONS(345),
    [anon_sym_AT_ATdbtb] = ACTIONS(345),
    [anon_sym_AT_ATdbts] = ACTIONS(345),
    [anon_sym_AT_AT_DOT] = ACTIONS(345),
    [anon_sym_AT_AT_EQ] = ACTIONS(345),
    [anon_sym_AT_ATk] = ACTIONS(345),
    [anon_sym_AT_ATt] = ACTIONS(345),
    [anon_sym_AT_ATb] = ACTIONS(345),
    [anon_sym_AT_ATi] = ACTIONS(345),
    [anon_sym_AT_ATiS] = ACTIONS(345),
    [anon_sym_AT_ATf] = ACTIONS(345),
    [anon_sym_AT_ATs_COLON] = ACTIONS(345),
    [anon_sym_AT_ATc_COLON] = ACTIONS(345),
    [anon_sym_AT] = ACTIONS(345),
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
    [anon_sym_PIPE_DOT] = ACTIONS(345),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(345),
    [sym_html_redirect_operator] = ACTIONS(345),
    [sym_html_append_operator] = ACTIONS(345),
    [sym__any_command] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_file_descriptor] = ACTIONS(343),
  },
  [128] = {
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PIPEH] = ACTIONS(511),
    [anon_sym_PIPET] = ACTIONS(511),
    [anon_sym_AT_AT] = ACTIONS(511),
    [anon_sym_AT_ATdbt] = ACTIONS(511),
    [anon_sym_AT_ATdbta] = ACTIONS(511),
    [anon_sym_AT_ATdbtb] = ACTIONS(511),
    [anon_sym_AT_ATdbts] = ACTIONS(511),
    [anon_sym_AT_AT_DOT] = ACTIONS(511),
    [anon_sym_AT_AT_EQ] = ACTIONS(511),
    [anon_sym_AT_ATk] = ACTIONS(511),
    [anon_sym_AT_ATt] = ACTIONS(511),
    [anon_sym_AT_ATb] = ACTIONS(511),
    [anon_sym_AT_ATi] = ACTIONS(511),
    [anon_sym_AT_ATiS] = ACTIONS(511),
    [anon_sym_AT_ATf] = ACTIONS(511),
    [anon_sym_AT_ATs_COLON] = ACTIONS(511),
    [anon_sym_AT_ATc_COLON] = ACTIONS(511),
    [anon_sym_AT] = ACTIONS(511),
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
    [anon_sym_PIPE_DOT] = ACTIONS(511),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(511),
    [sym_html_append_operator] = ACTIONS(511),
    [sym_eq_sep_key] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(511),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(509),
  },
  [129] = {
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
  [130] = {
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(511),
    [anon_sym_PIPEH] = ACTIONS(511),
    [anon_sym_PIPET] = ACTIONS(511),
    [anon_sym_AT_AT] = ACTIONS(511),
    [anon_sym_AT_ATdbt] = ACTIONS(511),
    [anon_sym_AT_ATdbta] = ACTIONS(511),
    [anon_sym_AT_ATdbtb] = ACTIONS(511),
    [anon_sym_AT_ATdbts] = ACTIONS(511),
    [anon_sym_AT_AT_DOT] = ACTIONS(511),
    [anon_sym_AT_AT_EQ] = ACTIONS(511),
    [anon_sym_AT_ATk] = ACTIONS(511),
    [anon_sym_AT_ATt] = ACTIONS(511),
    [anon_sym_AT_ATb] = ACTIONS(511),
    [anon_sym_AT_ATi] = ACTIONS(511),
    [anon_sym_AT_ATiS] = ACTIONS(511),
    [anon_sym_AT_ATf] = ACTIONS(511),
    [anon_sym_AT_ATs_COLON] = ACTIONS(511),
    [anon_sym_AT_ATc_COLON] = ACTIONS(511),
    [anon_sym_AT] = ACTIONS(511),
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
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(511),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(511),
    [sym_html_append_operator] = ACTIONS(511),
    [sym_eq_sep_key] = ACTIONS(511),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(509),
  },
  [131] = {
    [anon_sym_TILDE] = ACTIONS(351),
    [anon_sym_PIPE] = ACTIONS(351),
    [anon_sym_PIPEH] = ACTIONS(351),
    [anon_sym_PIPET] = ACTIONS(351),
    [anon_sym_AT_AT] = ACTIONS(351),
    [anon_sym_AT_ATdbt] = ACTIONS(351),
    [anon_sym_AT_ATdbta] = ACTIONS(351),
    [anon_sym_AT_ATdbtb] = ACTIONS(351),
    [anon_sym_AT_ATdbts] = ACTIONS(351),
    [anon_sym_AT_AT_DOT] = ACTIONS(351),
    [anon_sym_AT_AT_EQ] = ACTIONS(351),
    [anon_sym_AT_ATk] = ACTIONS(351),
    [anon_sym_AT_ATt] = ACTIONS(351),
    [anon_sym_AT_ATb] = ACTIONS(351),
    [anon_sym_AT_ATi] = ACTIONS(351),
    [anon_sym_AT_ATiS] = ACTIONS(351),
    [anon_sym_AT_ATf] = ACTIONS(351),
    [anon_sym_AT_ATs_COLON] = ACTIONS(351),
    [anon_sym_AT_ATc_COLON] = ACTIONS(351),
    [anon_sym_AT] = ACTIONS(351),
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
    [anon_sym_PIPE_DOT] = ACTIONS(351),
    [anon_sym_] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_GT_GT] = ACTIONS(351),
    [sym_html_redirect_operator] = ACTIONS(351),
    [sym_html_append_operator] = ACTIONS(351),
    [sym_macro_content] = ACTIONS(537),
    [sym__comment] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_file_descriptor] = ACTIONS(349),
  },
  [132] = {
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
  [133] = {
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(533),
    [sym_html_redirect_operator] = ACTIONS(535),
    [sym_html_append_operator] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(533),
  },
  [134] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_GT_GT] = ACTIONS(193),
    [sym_html_redirect_operator] = ACTIONS(195),
    [sym_html_append_operator] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
  },
  [135] = {
    [anon_sym_TILDE] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(221),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_RPAREN] = ACTIONS(529),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(529),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(529),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(529),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [136] = {
    [anon_sym_TILDE] = ACTIONS(529),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(529),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(529),
    [anon_sym_BQUOTE] = ACTIONS(529),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(529),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [137] = {
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(205),
    [anon_sym_PIPET] = ACTIONS(207),
    [anon_sym_AT_AT] = ACTIONS(209),
    [anon_sym_AT_ATdbt] = ACTIONS(211),
    [anon_sym_AT_ATdbta] = ACTIONS(213),
    [anon_sym_AT_ATdbtb] = ACTIONS(215),
    [anon_sym_AT_ATdbts] = ACTIONS(217),
    [anon_sym_AT_AT_DOT] = ACTIONS(219),
    [anon_sym_AT_AT_EQ] = ACTIONS(515),
    [anon_sym_AT_ATk] = ACTIONS(223),
    [anon_sym_AT_ATt] = ACTIONS(225),
    [anon_sym_AT_ATb] = ACTIONS(227),
    [anon_sym_AT_ATi] = ACTIONS(229),
    [anon_sym_AT_ATiS] = ACTIONS(231),
    [anon_sym_AT_ATf] = ACTIONS(233),
    [anon_sym_AT_ATs_COLON] = ACTIONS(235),
    [anon_sym_AT_ATc_COLON] = ACTIONS(517),
    [anon_sym_AT] = ACTIONS(239),
    [anon_sym_AT_BANG] = ACTIONS(241),
    [anon_sym_AT_LPAREN] = ACTIONS(243),
    [anon_sym_ATa_COLON] = ACTIONS(245),
    [anon_sym_ATb_COLON] = ACTIONS(247),
    [anon_sym_ATB_COLON] = ACTIONS(249),
    [anon_sym_ATe_COLON] = ACTIONS(251),
    [anon_sym_ATF_COLON] = ACTIONS(253),
    [anon_sym_ATi_COLON] = ACTIONS(255),
    [anon_sym_ATk_COLON] = ACTIONS(257),
    [anon_sym_ATo_COLON] = ACTIONS(259),
    [anon_sym_ATr_COLON] = ACTIONS(261),
    [anon_sym_ATf_COLON] = ACTIONS(263),
    [anon_sym_ATs_COLON] = ACTIONS(265),
    [anon_sym_ATx_COLON] = ACTIONS(267),
    [anon_sym_PIPE_DOT] = ACTIONS(269),
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
  [138] = {
    [aux_sym_commands_repeat1] = STATE(138),
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_DOT_BANG] = ACTIONS(539),
    [anon_sym_DOT_LPAREN] = ACTIONS(539),
    [anon_sym_DOT_SLASH] = ACTIONS(539),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(539),
    [anon_sym_env] = ACTIONS(539),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(541),
    [aux_sym__interpret_identifier_token1] = ACTIONS(541),
    [aux_sym__interpret_identifier_token2] = ACTIONS(539),
    [sym_system_identifier] = ACTIONS(539),
    [sym_question_mark_identifier] = ACTIONS(539),
    [sym_pointer_identifier] = ACTIONS(539),
    [sym_macro_identifier] = ACTIONS(539),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(543),
    [anon_sym_CR] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(543),
    [sym_cmd_identifier] = ACTIONS(539),
    [sym__help_command] = ACTIONS(539),
    [sym_repeat_number] = ACTIONS(539),
    [sym_interpreter_identifier] = ACTIONS(539),
  },
  [139] = {
    [aux_sym__commands_singleline_repeat1] = STATE(139),
    [anon_sym_DQUOTE] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(548),
    [anon_sym_DOT_BANG] = ACTIONS(546),
    [anon_sym_DOT_LPAREN] = ACTIONS(546),
    [anon_sym_DOT_SLASH] = ACTIONS(546),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(546),
    [anon_sym_env] = ACTIONS(546),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(548),
    [aux_sym__interpret_identifier_token1] = ACTIONS(548),
    [aux_sym__interpret_identifier_token2] = ACTIONS(546),
    [sym_system_identifier] = ACTIONS(546),
    [sym_question_mark_identifier] = ACTIONS(546),
    [sym_pointer_identifier] = ACTIONS(546),
    [sym_macro_identifier] = ACTIONS(546),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(550),
    [sym_cmd_identifier] = ACTIONS(546),
    [sym__help_command] = ACTIONS(546),
    [sym_repeat_number] = ACTIONS(546),
    [sym_interpreter_identifier] = ACTIONS(546),
  },
  [140] = {
    [sym_arg] = STATE(42),
    [sym_args] = STATE(115),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [141] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(115),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [142] = {
    [sym_arg] = STATE(32),
    [sym_args] = STATE(98),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
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
    [sym_arg] = STATE(42),
    [sym_args] = STATE(98),
    [sym_quoted_arg] = STATE(39),
    [sym_cmd_substitution_arg] = STATE(39),
    [aux_sym_args_repeat1] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(103),
  },
  [144] = {
    [sym_arg] = STATE(114),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [145] = {
    [sym_arg] = STATE(104),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [146] = {
    [sym_cmd_substitution_arg] = STATE(146),
    [aux_sym_quoted_arg_repeat1] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(565),
    [aux_sym_quoted_arg_token2] = ACTIONS(565),
    [aux_sym_quoted_arg_token3] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(571),
    [sym__comment] = ACTIONS(103),
  },
  [147] = {
    [sym_cmd_substitution_arg] = STATE(146),
    [aux_sym_quoted_arg_repeat1] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(574),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(576),
    [aux_sym_quoted_arg_token2] = ACTIONS(576),
    [aux_sym_quoted_arg_token3] = ACTIONS(576),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [148] = {
    [sym_cmd_substitution_arg] = STATE(147),
    [aux_sym_quoted_arg_repeat1] = STATE(147),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(584),
    [aux_sym_quoted_arg_token2] = ACTIONS(584),
    [aux_sym_quoted_arg_token3] = ACTIONS(584),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [149] = {
    [sym_arg] = STATE(113),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [150] = {
    [sym_arg] = STATE(116),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [151] = {
    [sym_arg] = STATE(110),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [152] = {
    [sym_arg] = STATE(160),
    [sym_quoted_arg] = STATE(194),
    [sym_cmd_substitution_arg] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(586),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(588),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(592),
    [anon_sym_BQUOTE] = ACTIONS(594),
    [sym__comment] = ACTIONS(103),
  },
  [153] = {
    [sym_cmd_substitution_arg] = STATE(162),
    [aux_sym_quoted_arg_repeat1] = STATE(162),
    [anon_sym_DQUOTE] = ACTIONS(596),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(598),
    [aux_sym_quoted_arg_token2] = ACTIONS(598),
    [aux_sym_quoted_arg_token3] = ACTIONS(598),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [154] = {
    [sym_arg] = STATE(57),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [155] = {
    [sym_arg] = STATE(158),
    [sym_quoted_arg] = STATE(194),
    [sym_cmd_substitution_arg] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(586),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(588),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(592),
    [anon_sym_BQUOTE] = ACTIONS(594),
    [sym__comment] = ACTIONS(103),
  },
  [156] = {
    [sym_arg] = STATE(97),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [157] = {
    [sym_arg] = STATE(96),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [158] = {
    [sym_arg] = STATE(72),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [159] = {
    [sym_arg] = STATE(95),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [160] = {
    [sym_arg] = STATE(151),
    [sym_quoted_arg] = STATE(194),
    [sym_cmd_substitution_arg] = STATE(194),
    [anon_sym_DQUOTE] = ACTIONS(586),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(588),
    [anon_sym_SQUOTE] = ACTIONS(590),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(592),
    [anon_sym_BQUOTE] = ACTIONS(594),
    [sym__comment] = ACTIONS(103),
  },
  [161] = {
    [sym_arg] = STATE(58),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [162] = {
    [sym_cmd_substitution_arg] = STATE(146),
    [aux_sym_quoted_arg_repeat1] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(576),
    [aux_sym_quoted_arg_token2] = ACTIONS(576),
    [aux_sym_quoted_arg_token3] = ACTIONS(576),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [163] = {
    [sym_arg] = STATE(92),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [164] = {
    [sym_arg] = STATE(88),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [165] = {
    [sym_arg] = STATE(87),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [166] = {
    [sym_arg] = STATE(82),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [167] = {
    [sym_cmd_substitution_arg] = STATE(174),
    [aux_sym_quoted_arg_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(602),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(604),
    [aux_sym_quoted_arg_token2] = ACTIONS(604),
    [aux_sym_quoted_arg_token3] = ACTIONS(604),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [168] = {
    [sym_arg] = STATE(79),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [169] = {
    [sym_arg] = STATE(78),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [170] = {
    [sym_arg] = STATE(77),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [171] = {
    [sym_arg] = STATE(76),
    [sym_quoted_arg] = STATE(91),
    [sym_cmd_substitution_arg] = STATE(91),
    [anon_sym_DQUOTE] = ACTIONS(553),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(555),
    [anon_sym_SQUOTE] = ACTIONS(557),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(559),
    [anon_sym_BQUOTE] = ACTIONS(561),
    [sym__comment] = ACTIONS(103),
  },
  [172] = {
    [sym_cmd_substitution_arg] = STATE(146),
    [aux_sym_quoted_arg_repeat1] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(606),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(576),
    [aux_sym_quoted_arg_token2] = ACTIONS(576),
    [aux_sym_quoted_arg_token3] = ACTIONS(576),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [173] = {
    [sym_cmd_substitution_arg] = STATE(172),
    [aux_sym_quoted_arg_repeat1] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(608),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(610),
    [aux_sym_quoted_arg_token2] = ACTIONS(610),
    [aux_sym_quoted_arg_token3] = ACTIONS(610),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [174] = {
    [sym_cmd_substitution_arg] = STATE(146),
    [aux_sym_quoted_arg_repeat1] = STATE(146),
    [anon_sym_DQUOTE] = ACTIONS(612),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(576),
    [aux_sym_quoted_arg_token2] = ACTIONS(576),
    [aux_sym_quoted_arg_token3] = ACTIONS(576),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(103),
  },
  [175] = {
    [sym_arg] = STATE(180),
    [sym_quoted_arg] = STATE(187),
    [sym_cmd_substitution_arg] = STATE(187),
    [anon_sym_DQUOTE] = ACTIONS(614),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(616),
    [anon_sym_SQUOTE] = ACTIONS(618),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(620),
    [anon_sym_BQUOTE] = ACTIONS(622),
    [sym__comment] = ACTIONS(103),
  },
  [176] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(177),
    [anon_sym_DQUOTE] = ACTIONS(624),
    [anon_sym_] = ACTIONS(626),
    [sym_arg_identifier] = ACTIONS(628),
    [anon_sym_SQUOTE] = ACTIONS(624),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(624),
    [anon_sym_BQUOTE] = ACTIONS(624),
    [sym__comment] = ACTIONS(103),
  },
  [177] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(630),
    [anon_sym_] = ACTIONS(632),
    [sym_arg_identifier] = ACTIONS(634),
    [anon_sym_SQUOTE] = ACTIONS(630),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(630),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(103),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
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
    [ts_builtin_sym_end] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(636),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(636),
    [anon_sym_CR] = ACTIONS(636),
    [anon_sym_SEMI] = ACTIONS(636),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(638),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(638),
    [anon_sym_CR] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(638),
  },
  [182] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(182),
    [anon_sym_DQUOTE] = ACTIONS(640),
    [anon_sym_] = ACTIONS(642),
    [sym_arg_identifier] = ACTIONS(645),
    [anon_sym_SQUOTE] = ACTIONS(640),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(640),
    [anon_sym_BQUOTE] = ACTIONS(640),
    [sym__comment] = ACTIONS(103),
  },
  [183] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [184] = {
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(146),
    [aux_sym_quoted_arg_token2] = ACTIONS(146),
    [aux_sym_quoted_arg_token3] = ACTIONS(146),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(146),
    [sym__comment] = ACTIONS(103),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [188] = {
    [anon_sym_DQUOTE] = ACTIONS(146),
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token1] = ACTIONS(146),
    [aux_sym_quoted_arg_token2] = ACTIONS(146),
    [aux_sym_quoted_arg_token3] = ACTIONS(146),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(146),
    [anon_sym_BQUOTE] = ACTIONS(146),
    [sym__comment] = ACTIONS(103),
  },
  [189] = {
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(103),
  },
  [190] = {
    [aux_sym_commands_repeat2] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(647),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(649),
    [anon_sym_CR] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(649),
  },
  [191] = {
    [anon_sym_DQUOTE] = ACTIONS(652),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(654),
    [anon_sym_SQUOTE] = ACTIONS(652),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(652),
    [anon_sym_BQUOTE] = ACTIONS(652),
    [sym__comment] = ACTIONS(103),
  },
  [192] = {
    [anon_sym_DQUOTE] = ACTIONS(656),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(658),
    [anon_sym_SQUOTE] = ACTIONS(656),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(656),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(103),
  },
  [193] = {
    [aux_sym_commands_repeat2] = STATE(196),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(660),
    [anon_sym_CR] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(660),
  },
  [194] = {
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(103),
  },
  [195] = {
    [anon_sym_DQUOTE] = ACTIONS(662),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(664),
    [anon_sym_SQUOTE] = ACTIONS(662),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(662),
    [anon_sym_BQUOTE] = ACTIONS(662),
    [sym__comment] = ACTIONS(103),
  },
  [196] = {
    [aux_sym_commands_repeat2] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(666),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(660),
    [anon_sym_CR] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(660),
  },
  [197] = {
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(150),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(148),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(103),
  },
  [198] = {
    [aux_sym_commands_repeat2] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(668),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(660),
    [anon_sym_CR] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(660),
  },
  [199] = {
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(154),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(103),
  },
  [200] = {
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(158),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(156),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(103),
  },
  [201] = {
    [aux_sym_commands_repeat2] = STATE(198),
    [ts_builtin_sym_end] = ACTIONS(666),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(660),
    [anon_sym_CR] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(660),
  },
  [202] = {
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(672),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(670),
    [anon_sym_BQUOTE] = ACTIONS(670),
    [sym__comment] = ACTIONS(103),
  },
  [203] = {
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_] = ACTIONS(3),
    [sym_arg_identifier] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(103),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(647),
    [anon_sym_CR] = ACTIONS(647),
    [anon_sym_SEMI] = ACTIONS(647),
  },
  [205] = {
    [aux_sym__commands_singleline_repeat2] = STATE(205),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(676),
  },
  [206] = {
    [aux_sym__commands_singleline_repeat2] = STATE(205),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(681),
  },
  [207] = {
    [aux_sym__commands_singleline_repeat2] = STATE(213),
    [anon_sym_RPAREN] = ACTIONS(683),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(685),
  },
  [208] = {
    [aux_sym__commands_singleline_repeat2] = STATE(209),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(681),
  },
  [209] = {
    [aux_sym__commands_singleline_repeat2] = STATE(205),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(683),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(681),
  },
  [210] = {
    [aux_sym__commands_singleline_repeat2] = STATE(214),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(685),
  },
  [211] = {
    [aux_sym__commands_singleline_repeat2] = STATE(207),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(685),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(674),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(674),
  },
  [213] = {
    [aux_sym__commands_singleline_repeat2] = STATE(213),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(689),
  },
  [214] = {
    [aux_sym__commands_singleline_repeat2] = STATE(213),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(685),
  },
  [215] = {
    [aux_sym__commands_singleline_repeat2] = STATE(206),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(687),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(681),
  },
  [216] = {
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_] = ACTIONS(103),
    [sym_macro_call_content] = ACTIONS(694),
    [sym__comment] = ACTIONS(103),
  },
  [217] = {
    [sym__eq_sep_args] = STATE(83),
    [anon_sym_] = ACTIONS(103),
    [sym_eq_sep_key] = ACTIONS(421),
    [sym__comment] = ACTIONS(103),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_] = ACTIONS(103),
    [sym_macro_call_content] = ACTIONS(698),
    [sym__comment] = ACTIONS(103),
  },
  [219] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(700),
    [anon_sym_GT_GT] = ACTIONS(702),
    [sym__comment] = ACTIONS(3),
  },
  [220] = {
    [sym_interpret_arg] = STATE(98),
    [anon_sym_] = ACTIONS(103),
    [sym__any_command] = ACTIONS(704),
    [sym__comment] = ACTIONS(103),
  },
  [221] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(706),
    [sym__comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_RPAREN] = ACTIONS(708),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [sym_grep_specifier] = ACTIONS(710),
    [anon_sym_] = ACTIONS(103),
    [sym__comment] = ACTIONS(103),
  },
  [224] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(712),
    [sym__comment] = ACTIONS(3),
  },
  [225] = {
    [anon_sym_RPAREN] = ACTIONS(714),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(716),
    [sym__comment] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_DQUOTE] = ACTIONS(718),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_RPAREN] = ACTIONS(720),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(722),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [231] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(726),
    [sym__comment] = ACTIONS(3),
  },
  [232] = {
    [anon_sym_] = ACTIONS(103),
    [sym_tmp_eval_arg] = ACTIONS(728),
    [sym__comment] = ACTIONS(103),
  },
  [233] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(730),
    [sym__comment] = ACTIONS(3),
  },
  [234] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(732),
    [sym__comment] = ACTIONS(3),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(736),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(738),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [238] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(740),
    [sym__comment] = ACTIONS(3),
  },
  [239] = {
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token4] = ACTIONS(742),
    [sym__comment] = ACTIONS(103),
  },
  [240] = {
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token4] = ACTIONS(744),
    [sym__comment] = ACTIONS(103),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(746),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [242] = {
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token4] = ACTIONS(748),
    [sym__comment] = ACTIONS(103),
  },
  [243] = {
    [anon_sym_] = ACTIONS(103),
    [sym_eq_sep_val] = ACTIONS(750),
    [sym__comment] = ACTIONS(103),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(752),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [245] = {
    [anon_sym_] = ACTIONS(103),
    [aux_sym_quoted_arg_token4] = ACTIONS(754),
    [sym__comment] = ACTIONS(103),
  },
  [246] = {
    [anon_sym_RPAREN] = ACTIONS(756),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [247] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(758),
    [anon_sym_] = ACTIONS(103),
    [sym__comment] = ACTIONS(103),
  },
  [248] = {
    [anon_sym_] = ACTIONS(103),
    [sym_macro_content] = ACTIONS(760),
    [sym__comment] = ACTIONS(103),
  },
  [249] = {
    [anon_sym_] = ACTIONS(103),
    [sym_tmp_eval_arg] = ACTIONS(762),
    [sym__comment] = ACTIONS(103),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(247),
  [9] = {.count = 1, .reusable = false}, SHIFT(2),
  [11] = {.count = 1, .reusable = true}, SHIFT(220),
  [13] = {.count = 1, .reusable = true}, SHIFT(248),
  [15] = {.count = 1, .reusable = true}, SHIFT(176),
  [17] = {.count = 1, .reusable = true}, SHIFT(117),
  [19] = {.count = 1, .reusable = false}, SHIFT(66),
  [21] = {.count = 1, .reusable = false}, SHIFT(46),
  [23] = {.count = 1, .reusable = true}, SHIFT(46),
  [25] = {.count = 1, .reusable = true}, SHIFT(73),
  [27] = {.count = 1, .reusable = true}, SHIFT(27),
  [29] = {.count = 1, .reusable = true}, SHIFT(217),
  [31] = {.count = 1, .reusable = true}, SHIFT(74),
  [33] = {.count = 1, .reusable = true}, SHIFT(5),
  [35] = {.count = 1, .reusable = true}, SHIFT(30),
  [37] = {.count = 1, .reusable = true}, SHIFT(31),
  [39] = {.count = 1, .reusable = true}, SHIFT(26),
  [41] = {.count = 1, .reusable = true}, SHIFT(28),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, SHIFT(3),
  [49] = {.count = 1, .reusable = true}, SHIFT(128),
  [51] = {.count = 1, .reusable = true}, SHIFT(127),
  [53] = {.count = 1, .reusable = true}, SHIFT(38),
  [55] = {.count = 1, .reusable = true}, SHIFT(125),
  [57] = {.count = 1, .reusable = true}, SHIFT(36),
  [59] = {.count = 1, .reusable = true}, SHIFT(37),
  [61] = {.count = 1, .reusable = true}, SHIFT(23),
  [63] = {.count = 1, .reusable = true}, SHIFT(35),
  [65] = {.count = 1, .reusable = false}, SHIFT(4),
  [67] = {.count = 1, .reusable = true}, SHIFT(130),
  [69] = {.count = 1, .reusable = true}, SHIFT(124),
  [71] = {.count = 1, .reusable = true}, SHIFT(131),
  [73] = {.count = 1, .reusable = true}, SHIFT(22),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(138),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(18),
  [83] = {.count = 1, .reusable = true}, SHIFT(20),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(139),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(167),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [95] = {.count = 1, .reusable = false}, SHIFT(39),
  [97] = {.count = 1, .reusable = true}, SHIFT(240),
  [99] = {.count = 1, .reusable = true}, SHIFT(16),
  [101] = {.count = 1, .reusable = true}, SHIFT(15),
  [103] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 1, .production_id = 1),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_args, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_args, 1),
  [121] = {.count = 1, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(167),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(39),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(240),
  [134] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(16),
  [137] = {.count = 2, .reusable = true}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(15),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 2),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 2),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [164] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [166] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(249),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [175] = {.count = 1, .reusable = true}, SHIFT(249),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 7),
  [185] = {.count = 1, .reusable = true}, SHIFT(218),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [191] = {.count = 1, .reusable = true}, SHIFT(243),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [197] = {.count = 1, .reusable = true}, SHIFT(216),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [201] = {.count = 1, .reusable = true}, SHIFT(223),
  [203] = {.count = 1, .reusable = false}, SHIFT(120),
  [205] = {.count = 1, .reusable = true}, SHIFT(61),
  [207] = {.count = 1, .reusable = true}, SHIFT(62),
  [209] = {.count = 1, .reusable = false}, SHIFT(149),
  [211] = {.count = 1, .reusable = false}, SHIFT(63),
  [213] = {.count = 1, .reusable = true}, SHIFT(63),
  [215] = {.count = 1, .reusable = true}, SHIFT(64),
  [217] = {.count = 1, .reusable = true}, SHIFT(65),
  [219] = {.count = 1, .reusable = true}, SHIFT(144),
  [221] = {.count = 1, .reusable = true}, SHIFT(141),
  [223] = {.count = 1, .reusable = true}, SHIFT(150),
  [225] = {.count = 1, .reusable = true}, SHIFT(67),
  [227] = {.count = 1, .reusable = true}, SHIFT(68),
  [229] = {.count = 1, .reusable = false}, SHIFT(69),
  [231] = {.count = 1, .reusable = true}, SHIFT(70),
  [233] = {.count = 1, .reusable = true}, SHIFT(55),
  [235] = {.count = 1, .reusable = true}, SHIFT(152),
  [237] = {.count = 1, .reusable = true}, SHIFT(21),
  [239] = {.count = 1, .reusable = false}, SHIFT(145),
  [241] = {.count = 1, .reusable = true}, SHIFT(154),
  [243] = {.count = 1, .reusable = true}, SHIFT(155),
  [245] = {.count = 1, .reusable = true}, SHIFT(156),
  [247] = {.count = 1, .reusable = true}, SHIFT(157),
  [249] = {.count = 1, .reusable = true}, SHIFT(159),
  [251] = {.count = 1, .reusable = true}, SHIFT(232),
  [253] = {.count = 1, .reusable = true}, SHIFT(163),
  [255] = {.count = 1, .reusable = true}, SHIFT(164),
  [257] = {.count = 1, .reusable = true}, SHIFT(165),
  [259] = {.count = 1, .reusable = true}, SHIFT(166),
  [261] = {.count = 1, .reusable = true}, SHIFT(168),
  [263] = {.count = 1, .reusable = true}, SHIFT(169),
  [265] = {.count = 1, .reusable = true}, SHIFT(170),
  [267] = {.count = 1, .reusable = true}, SHIFT(171),
  [269] = {.count = 1, .reusable = true}, SHIFT(86),
  [271] = {.count = 1, .reusable = false}, SHIFT(195),
  [273] = {.count = 1, .reusable = true}, SHIFT(202),
  [275] = {.count = 1, .reusable = false}, SHIFT(175),
  [277] = {.count = 1, .reusable = true}, SHIFT(175),
  [279] = {.count = 1, .reusable = true}, SHIFT(219),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(161),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [289] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 10),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [347] = {.count = 1, .reusable = false}, SHIFT(93),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [353] = {.count = 1, .reusable = false}, SHIFT(53),
  [355] = {.count = 1, .reusable = false}, SHIFT(101),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [421] = {.count = 1, .reusable = false}, SHIFT(52),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_last_command, 1, .production_id = 1),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_last_command, 1, .production_id = 1),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [447] = {.count = 1, .reusable = true}, SHIFT(50),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym__interpreter_command, 2, .production_id = 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 11),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 12),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 12),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
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
  [509] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [513] = {.count = 1, .reusable = false}, SHIFT(132),
  [515] = {.count = 1, .reusable = true}, SHIFT(140),
  [517] = {.count = 1, .reusable = true}, SHIFT(25),
  [519] = {.count = 1, .reusable = false}, SHIFT(129),
  [521] = {.count = 1, .reusable = true}, SHIFT(24),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [527] = {.count = 1, .reusable = false}, SHIFT(112),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [537] = {.count = 1, .reusable = false}, SHIFT(134),
  [539] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [541] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [543] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(138),
  [546] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [548] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [550] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(139),
  [553] = {.count = 1, .reusable = true}, SHIFT(148),
  [555] = {.count = 1, .reusable = false}, SHIFT(91),
  [557] = {.count = 1, .reusable = true}, SHIFT(239),
  [559] = {.count = 1, .reusable = true}, SHIFT(7),
  [561] = {.count = 1, .reusable = true}, SHIFT(13),
  [563] = {.count = 1, .reusable = false}, REDUCE(aux_sym_quoted_arg_repeat1, 2),
  [565] = {.count = 2, .reusable = false}, REDUCE(aux_sym_quoted_arg_repeat1, 2), SHIFT_REPEAT(146),
  [568] = {.count = 2, .reusable = false}, REDUCE(aux_sym_quoted_arg_repeat1, 2), SHIFT_REPEAT(8),
  [571] = {.count = 2, .reusable = false}, REDUCE(aux_sym_quoted_arg_repeat1, 2), SHIFT_REPEAT(14),
  [574] = {.count = 1, .reusable = false}, SHIFT(81),
  [576] = {.count = 1, .reusable = false}, SHIFT(146),
  [578] = {.count = 1, .reusable = false}, SHIFT(8),
  [580] = {.count = 1, .reusable = false}, SHIFT(14),
  [582] = {.count = 1, .reusable = false}, SHIFT(84),
  [584] = {.count = 1, .reusable = false}, SHIFT(147),
  [586] = {.count = 1, .reusable = true}, SHIFT(153),
  [588] = {.count = 1, .reusable = false}, SHIFT(194),
  [590] = {.count = 1, .reusable = true}, SHIFT(242),
  [592] = {.count = 1, .reusable = true}, SHIFT(12),
  [594] = {.count = 1, .reusable = true}, SHIFT(11),
  [596] = {.count = 1, .reusable = false}, SHIFT(197),
  [598] = {.count = 1, .reusable = false}, SHIFT(162),
  [600] = {.count = 1, .reusable = false}, SHIFT(199),
  [602] = {.count = 1, .reusable = false}, SHIFT(41),
  [604] = {.count = 1, .reusable = false}, SHIFT(174),
  [606] = {.count = 1, .reusable = false}, SHIFT(185),
  [608] = {.count = 1, .reusable = false}, SHIFT(186),
  [610] = {.count = 1, .reusable = false}, SHIFT(172),
  [612] = {.count = 1, .reusable = false}, SHIFT(43),
  [614] = {.count = 1, .reusable = true}, SHIFT(173),
  [616] = {.count = 1, .reusable = false}, SHIFT(187),
  [618] = {.count = 1, .reusable = true}, SHIFT(245),
  [620] = {.count = 1, .reusable = true}, SHIFT(10),
  [622] = {.count = 1, .reusable = true}, SHIFT(9),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 1),
  [626] = {.count = 1, .reusable = true}, SHIFT(177),
  [628] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_search_identifier, 2),
  [632] = {.count = 1, .reusable = true}, SHIFT(182),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 2),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 9),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 6),
  [640] = {.count = 1, .reusable = true}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2),
  [642] = {.count = 2, .reusable = true}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2), SHIFT_REPEAT(182),
  [645] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2),
  [647] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [649] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [652] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 2),
  [654] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 2),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [660] = {.count = 1, .reusable = true}, SHIFT(6),
  [662] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_redirect_operator, 1),
  [664] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [666] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [668] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [670] = {.count = 1, .reusable = true}, REDUCE(sym_fdn_append_operator, 1),
  [672] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [674] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(19),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [681] = {.count = 1, .reusable = true}, SHIFT(19),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [685] = {.count = 1, .reusable = true}, SHIFT(17),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [689] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(17),
  [692] = {.count = 1, .reusable = false}, SHIFT(59),
  [694] = {.count = 1, .reusable = false}, SHIFT(228),
  [696] = {.count = 1, .reusable = false}, SHIFT(106),
  [698] = {.count = 1, .reusable = false}, SHIFT(246),
  [700] = {.count = 1, .reusable = false}, SHIFT(191),
  [702] = {.count = 1, .reusable = true}, SHIFT(192),
  [704] = {.count = 1, .reusable = false}, SHIFT(100),
  [706] = {.count = 1, .reusable = true}, SHIFT(40),
  [708] = {.count = 1, .reusable = true}, SHIFT(184),
  [710] = {.count = 1, .reusable = false}, SHIFT(111),
  [712] = {.count = 1, .reusable = true}, SHIFT(188),
  [714] = {.count = 1, .reusable = true}, SHIFT(102),
  [716] = {.count = 1, .reusable = true}, SHIFT(80),
  [718] = {.count = 1, .reusable = true}, SHIFT(181),
  [720] = {.count = 1, .reusable = true}, SHIFT(106),
  [722] = {.count = 1, .reusable = true}, SHIFT(200),
  [724] = {.count = 1, .reusable = true}, SHIFT(56),
  [726] = {.count = 1, .reusable = true}, SHIFT(71),
  [728] = {.count = 1, .reusable = false}, SHIFT(49),
  [730] = {.count = 1, .reusable = true}, SHIFT(44),
  [732] = {.count = 1, .reusable = true}, SHIFT(183),
  [734] = {.count = 1, .reusable = true}, SHIFT(203),
  [736] = {.count = 1, .reusable = true}, SHIFT(189),
  [738] = {.count = 1, .reusable = true}, SHIFT(179),
  [740] = {.count = 1, .reusable = true}, SHIFT(178),
  [742] = {.count = 1, .reusable = false}, SHIFT(226),
  [744] = {.count = 1, .reusable = false}, SHIFT(233),
  [746] = {.count = 1, .reusable = true}, SHIFT(45),
  [748] = {.count = 1, .reusable = false}, SHIFT(229),
  [750] = {.count = 1, .reusable = false}, SHIFT(60),
  [752] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [754] = {.count = 1, .reusable = false}, SHIFT(234),
  [756] = {.count = 1, .reusable = true}, SHIFT(108),
  [758] = {.count = 1, .reusable = false}, SHIFT(227),
  [760] = {.count = 1, .reusable = false}, SHIFT(225),
  [762] = {.count = 1, .reusable = false}, SHIFT(51),
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
