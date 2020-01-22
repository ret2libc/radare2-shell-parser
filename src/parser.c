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
#define STATE_COUNT 245
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_DQUOTE = 1,
  aux_sym_legacy_quoted_command_token1 = 2,
  anon_sym_TILDE = 3,
  sym_grep_specifier = 4,
  anon_sym_PIPE = 5,
  anon_sym_PIPEH = 6,
  anon_sym_PIPET = 7,
  anon_sym_AT_AT = 8,
  anon_sym_AT_ATdbt = 9,
  anon_sym_AT_ATdbta = 10,
  anon_sym_AT_ATdbtb = 11,
  anon_sym_AT_ATdbts = 12,
  anon_sym_AT_AT_DOT = 13,
  anon_sym_AT_AT_EQ = 14,
  anon_sym_AT_ATk = 15,
  anon_sym_AT_ATt = 16,
  anon_sym_AT_ATb = 17,
  anon_sym_AT_ATi = 18,
  anon_sym_AT_ATiS = 19,
  anon_sym_AT_ATf = 20,
  anon_sym_COLON = 21,
  anon_sym_AT_ATs_COLON = 22,
  anon_sym_AT_ATc_COLON = 23,
  anon_sym_AT = 24,
  anon_sym_AT_BANG = 25,
  anon_sym_AT_LPAREN = 26,
  anon_sym_ATa_COLON = 27,
  anon_sym_ATb_COLON = 28,
  anon_sym_ATB_COLON = 29,
  anon_sym_ATe_COLON = 30,
  anon_sym_COMMA = 31,
  anon_sym_ATF_COLON = 32,
  anon_sym_ATi_COLON = 33,
  anon_sym_ATk_COLON = 34,
  anon_sym_ATo_COLON = 35,
  anon_sym_ATr_COLON = 36,
  anon_sym_ATf_COLON = 37,
  anon_sym_ATs_COLON = 38,
  anon_sym_ATx_COLON = 39,
  sym_interpreter_command = 40,
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
  aux_sym_arg_identifier_token1 = 69,
  aux_sym_arg_identifier_token2 = 70,
  anon_sym_SQUOTE = 71,
  aux_sym_quoted_arg_token1 = 72,
  anon_sym_DOLLAR_LPAREN = 73,
  anon_sym_BQUOTE = 74,
  sym__comment = 75,
  anon_sym_LF = 76,
  anon_sym_CR = 77,
  anon_sym_SEMI = 78,
  sym_cmd_identifier = 79,
  sym__help_command = 80,
  sym_file_descriptor = 81,
  sym_repeat_number = 82,
  sym_commands = 83,
  sym__commands_singleline = 84,
  sym__command = 85,
  sym_legacy_quoted_command = 86,
  sym__simple_command = 87,
  sym__tmp_command = 88,
  sym__iter_command = 89,
  sym__pipe_command = 90,
  sym_grep_command = 91,
  sym_html_disable_command = 92,
  sym_html_enable_command = 93,
  sym_scr_tts_command = 94,
  sym_pipe_command = 95,
  sym_pipe_second_command = 96,
  sym_iter_flags_command = 97,
  sym_iter_dbta_command = 98,
  sym_iter_dbtb_command = 99,
  sym_iter_dbts_command = 100,
  sym_iter_file_lines_command = 101,
  sym_iter_offsets_command = 102,
  sym_iter_sdbquery_command = 103,
  sym_iter_threads_command = 104,
  sym_iter_bbs_command = 105,
  sym_iter_instrs_command = 106,
  sym_iter_sections_command = 107,
  sym_iter_functions_command = 108,
  sym_iter_step_command = 109,
  sym_iter_interpret_command = 110,
  sym_tmp_seek_command = 111,
  sym_tmp_blksz_command = 112,
  sym_tmp_fromto_command = 113,
  sym_tmp_arch_command = 114,
  sym_tmp_bits_command = 115,
  sym_tmp_nthi_command = 116,
  sym_tmp_eval_command = 117,
  sym_tmp_fs_command = 118,
  sym_tmp_reli_command = 119,
  sym_tmp_kuery_command = 120,
  sym_tmp_fd_command = 121,
  sym_tmp_reg_command = 122,
  sym_tmp_file_command = 123,
  sym_tmp_string_command = 124,
  sym_tmp_hex_command = 125,
  sym_help_command = 126,
  sym_arged_command = 127,
  sym__simple_arged_command = 128,
  sym__math_arged_command = 129,
  sym__pointer_arged_command = 130,
  sym__macro_arged_command = 131,
  sym__system_command = 132,
  sym__interpret_command = 133,
  sym__interpret_search_identifier = 134,
  sym__env_command = 135,
  sym__env_command_identifier = 136,
  sym__last_command = 137,
  sym_last_command_identifier = 138,
  sym__interpret_identifier = 139,
  sym_interpret_arg = 140,
  sym_system_arg = 141,
  sym_repeat_command = 142,
  sym__eq_sep_args = 143,
  sym_redirect_command = 144,
  sym__redirect_operator = 145,
  sym_fdn_redirect_operator = 146,
  sym_fdn_append_operator = 147,
  sym_arg = 148,
  sym_arg_identifier = 149,
  sym_quoted_arg = 150,
  sym_cmd_substitution_arg = 151,
  aux_sym_commands_repeat1 = 152,
  aux_sym_commands_repeat2 = 153,
  aux_sym__commands_singleline_repeat1 = 154,
  aux_sym__commands_singleline_repeat2 = 155,
  aux_sym_iter_offsets_command_repeat1 = 156,
  aux_sym_tmp_eval_command_repeat1 = 157,
  aux_sym__interpret_search_identifier_repeat1 = 158,
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
  [aux_sym_arg_identifier_token1] = "arg_identifier_token1",
  [aux_sym_arg_identifier_token2] = "arg_identifier_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_arg_token1] = "quoted_arg_token1",
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
  [sym__last_command] = "_last_command",
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
  [sym_arg_identifier] = "arg_identifier",
  [sym_quoted_arg] = "quoted_arg",
  [sym_cmd_substitution_arg] = "cmd_substitution_arg",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym__commands_singleline_repeat1] = "_commands_singleline_repeat1",
  [aux_sym__commands_singleline_repeat2] = "_commands_singleline_repeat2",
  [aux_sym_iter_offsets_command_repeat1] = "iter_offsets_command_repeat1",
  [aux_sym_tmp_eval_command_repeat1] = "tmp_eval_command_repeat1",
  [aux_sym__interpret_search_identifier_repeat1] = "_interpret_search_identifier_repeat1",
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
  [aux_sym_arg_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arg_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_arg_token1] = {
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
  [sym__last_command] = {
    .visible = false,
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
  [aux_sym__interpret_search_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_args = 2,
  field_command = 3,
  field_redirect_operator = 4,
  field_string = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args] = "args",
  [field_command] = "command",
  [field_redirect_operator] = "redirect_operator",
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
    {field_arg, 2},
    {field_command, 0},
    {field_redirect_operator, 1},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = sym_cmd_identifier,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '!') ADVANCE(185);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '%') ADVANCE(178);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(105);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '=') ADVANCE(188);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '?') ADVANCE(186);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(285);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '(') ADVANCE(163);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(253);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead != 0) ADVANCE(278);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(228);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(249);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead != 0) ADVANCE(252);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(222);
      END_STATE();
    case 8:
      if (lookahead == 0) ADVANCE(43);
      if (lookahead == '\t') ADVANCE(280);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead == '\r') ADVANCE(304);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '$') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '`') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(285);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(215);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(222);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(255);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(278);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(305);
      if (lookahead == '>') ADVANCE(197);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '|') ADVANCE(57);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(222);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == ')') ADVANCE(160);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(249);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(252);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(227);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(289);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 19:
      if (lookahead == '\t') ADVANCE(209);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 20:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(127);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(134);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(124);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(140);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(152);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(203);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'v') ADVANCE(179);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\t') ADVANCE(45);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 54:
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
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(172);
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
          lookahead == '}') ADVANCE(56);
      END_STATE();
    case 56:
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
          lookahead == '}') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(169);
      if (lookahead == 'H') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == 'H') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'k') ADVANCE(87);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(83);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'd') ADVANCE(276);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'k') ADVANCE(89);
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(82);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(75);
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(76);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(115);
      if (lookahead == '(') ADVANCE(118);
      if (lookahead == '@') ADVANCE(66);
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
    case 113:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == 'B') ADVANCE(260);
      if (lookahead == 'F') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(265);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'k') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == 'x') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '@') ADVANCE(68);
      if (lookahead == 'B') ADVANCE(235);
      if (lookahead == 'F') ADVANCE(236);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(242);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == 'x') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(302);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 162:
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
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '!') ADVANCE(165);
      if (lookahead == '(') ADVANCE(166);
      if (lookahead == '.') ADVANCE(182);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 172:
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
          lookahead == '}') ADVANCE(56);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(196);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*' ||
          lookahead == '-') ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(191);
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead == '#') ADVANCE(195);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '/') ADVANCE(196);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(193);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(209);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 213:
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
          lookahead != '|') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(214);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(215);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 222:
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
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(225);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(228);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(249);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(229);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '@') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(249);
      if (lookahead == '`') ADVANCE(297);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '>') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 'b') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(253);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(254);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '`') ADVANCE(298);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(255);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '>') ADVANCE(198);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(275);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(256);
      if (lookahead == ' ') ADVANCE(174);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '/') ADVANCE(278);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(258);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(279);
      if (lookahead == '/') ADVANCE(281);
      if (lookahead == 'H') ADVANCE(284);
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
          lookahead != '|' &&
          lookahead != '~') ADVANCE(285);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(280);
      if (lookahead == '/') ADVANCE(281);
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
          lookahead != '|' &&
          lookahead != '~') ADVANCE(285);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(283);
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
          lookahead != '|' &&
          lookahead != '~') ADVANCE(285);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '/') ADVANCE(285);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(23);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(282);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('"' <= lookahead && lookahead <= '$') ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '`' ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(23);
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '"' || '$' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(285);
      END_STATE();
    case 285:
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
          lookahead != '|' &&
          lookahead != '~') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead == '(') ADVANCE(295);
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
          lookahead != '|' &&
          lookahead != '~') ADVANCE(287);
      END_STATE();
    case 287:
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
          lookahead != '|' &&
          lookahead != '~') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(289);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '#') ADVANCE(290);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(294);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '/') ADVANCE(294);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(292);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(278);
      END_STATE();
    case 299:
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
          lookahead != '|') ADVANCE(222);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(252);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 3},
  [3] = {.lex_state = 2, .external_lex_state = 3},
  [4] = {.lex_state = 2, .external_lex_state = 3},
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
  [19] = {.lex_state = 2, .external_lex_state = 4},
  [20] = {.lex_state = 2, .external_lex_state = 4},
  [21] = {.lex_state = 2, .external_lex_state = 4},
  [22] = {.lex_state = 2, .external_lex_state = 4},
  [23] = {.lex_state = 2, .external_lex_state = 4},
  [24] = {.lex_state = 2, .external_lex_state = 4},
  [25] = {.lex_state = 3, .external_lex_state = 5},
  [26] = {.lex_state = 3, .external_lex_state = 5},
  [27] = {.lex_state = 3, .external_lex_state = 5},
  [28] = {.lex_state = 3, .external_lex_state = 5},
  [29] = {.lex_state = 3, .external_lex_state = 5},
  [30] = {.lex_state = 3, .external_lex_state = 5},
  [31] = {.lex_state = 3, .external_lex_state = 5},
  [32] = {.lex_state = 3, .external_lex_state = 5},
  [33] = {.lex_state = 3, .external_lex_state = 5},
  [34] = {.lex_state = 3, .external_lex_state = 5},
  [35] = {.lex_state = 3, .external_lex_state = 5},
  [36] = {.lex_state = 3, .external_lex_state = 5},
  [37] = {.lex_state = 3, .external_lex_state = 5},
  [38] = {.lex_state = 3, .external_lex_state = 5},
  [39] = {.lex_state = 3, .external_lex_state = 5},
  [40] = {.lex_state = 3, .external_lex_state = 5},
  [41] = {.lex_state = 3, .external_lex_state = 5},
  [42] = {.lex_state = 3, .external_lex_state = 5},
  [43] = {.lex_state = 3, .external_lex_state = 5},
  [44] = {.lex_state = 2, .external_lex_state = 5},
  [45] = {.lex_state = 2, .external_lex_state = 5},
  [46] = {.lex_state = 2, .external_lex_state = 5},
  [47] = {.lex_state = 2, .external_lex_state = 5},
  [48] = {.lex_state = 2, .external_lex_state = 5},
  [49] = {.lex_state = 2, .external_lex_state = 5},
  [50] = {.lex_state = 4, .external_lex_state = 5},
  [51] = {.lex_state = 2, .external_lex_state = 5},
  [52] = {.lex_state = 4, .external_lex_state = 5},
  [53] = {.lex_state = 2, .external_lex_state = 5},
  [54] = {.lex_state = 2, .external_lex_state = 5},
  [55] = {.lex_state = 2, .external_lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 5},
  [59] = {.lex_state = 2, .external_lex_state = 5},
  [60] = {.lex_state = 2, .external_lex_state = 5},
  [61] = {.lex_state = 5, .external_lex_state = 5},
  [62] = {.lex_state = 2, .external_lex_state = 5},
  [63] = {.lex_state = 2, .external_lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 5},
  [65] = {.lex_state = 2, .external_lex_state = 5},
  [66] = {.lex_state = 2, .external_lex_state = 5},
  [67] = {.lex_state = 2, .external_lex_state = 5},
  [68] = {.lex_state = 2, .external_lex_state = 5},
  [69] = {.lex_state = 2, .external_lex_state = 5},
  [70] = {.lex_state = 2, .external_lex_state = 5},
  [71] = {.lex_state = 2, .external_lex_state = 5},
  [72] = {.lex_state = 2, .external_lex_state = 5},
  [73] = {.lex_state = 2, .external_lex_state = 5},
  [74] = {.lex_state = 2, .external_lex_state = 5},
  [75] = {.lex_state = 2, .external_lex_state = 5},
  [76] = {.lex_state = 2, .external_lex_state = 5},
  [77] = {.lex_state = 2, .external_lex_state = 5},
  [78] = {.lex_state = 5, .external_lex_state = 5},
  [79] = {.lex_state = 2, .external_lex_state = 5},
  [80] = {.lex_state = 2, .external_lex_state = 5},
  [81] = {.lex_state = 2, .external_lex_state = 5},
  [82] = {.lex_state = 2, .external_lex_state = 5},
  [83] = {.lex_state = 2, .external_lex_state = 5},
  [84] = {.lex_state = 2, .external_lex_state = 5},
  [85] = {.lex_state = 2, .external_lex_state = 5},
  [86] = {.lex_state = 2, .external_lex_state = 5},
  [87] = {.lex_state = 2, .external_lex_state = 5},
  [88] = {.lex_state = 2, .external_lex_state = 5},
  [89] = {.lex_state = 2, .external_lex_state = 5},
  [90] = {.lex_state = 2, .external_lex_state = 5},
  [91] = {.lex_state = 2, .external_lex_state = 5},
  [92] = {.lex_state = 2, .external_lex_state = 5},
  [93] = {.lex_state = 6, .external_lex_state = 5},
  [94] = {.lex_state = 2, .external_lex_state = 5},
  [95] = {.lex_state = 2, .external_lex_state = 5},
  [96] = {.lex_state = 2, .external_lex_state = 5},
  [97] = {.lex_state = 2, .external_lex_state = 5},
  [98] = {.lex_state = 2, .external_lex_state = 5},
  [99] = {.lex_state = 2, .external_lex_state = 5},
  [100] = {.lex_state = 2, .external_lex_state = 5},
  [101] = {.lex_state = 2, .external_lex_state = 5},
  [102] = {.lex_state = 2, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 5},
  [104] = {.lex_state = 2, .external_lex_state = 5},
  [105] = {.lex_state = 7, .external_lex_state = 5},
  [106] = {.lex_state = 2, .external_lex_state = 5},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 2, .external_lex_state = 5},
  [109] = {.lex_state = 2, .external_lex_state = 5},
  [110] = {.lex_state = 2, .external_lex_state = 5},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 2, .external_lex_state = 5},
  [113] = {.lex_state = 7, .external_lex_state = 5},
  [114] = {.lex_state = 2, .external_lex_state = 5},
  [115] = {.lex_state = 9, .external_lex_state = 5},
  [116] = {.lex_state = 10, .external_lex_state = 5},
  [117] = {.lex_state = 11, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 12, .external_lex_state = 5},
  [120] = {.lex_state = 11, .external_lex_state = 5},
  [121] = {.lex_state = 13, .external_lex_state = 5},
  [122] = {.lex_state = 10, .external_lex_state = 5},
  [123] = {.lex_state = 12, .external_lex_state = 5},
  [124] = {.lex_state = 6, .external_lex_state = 5},
  [125] = {.lex_state = 9, .external_lex_state = 5},
  [126] = {.lex_state = 2, .external_lex_state = 5},
  [127] = {.lex_state = 2, .external_lex_state = 5},
  [128] = {.lex_state = 2, .external_lex_state = 5},
  [129] = {.lex_state = 2, .external_lex_state = 5},
  [130] = {.lex_state = 2, .external_lex_state = 5},
  [131] = {.lex_state = 1, .external_lex_state = 2},
  [132] = {.lex_state = 1, .external_lex_state = 2},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 191},
  [209] = {.lex_state = 191},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 16},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 55},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 18},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 20},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 18},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 17},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token_file_descriptor = 2,
  ts_external_token_repeat_number = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token_repeat_number] = sym_repeat_number,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token_repeat_number] = true,
  },
  [3] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
  },
  [4] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token_repeat_number] = true,
  },
  [5] = {
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
    [sym_interpreter_command] = ACTIONS(1),
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
    [aux_sym_arg_identifier_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym__help_command] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
    [sym_repeat_number] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(239),
    [sym__command] = STATE(189),
    [sym_legacy_quoted_command] = STATE(189),
    [sym__simple_command] = STATE(48),
    [sym__tmp_command] = STATE(48),
    [sym__iter_command] = STATE(48),
    [sym__pipe_command] = STATE(48),
    [sym_grep_command] = STATE(48),
    [sym_html_disable_command] = STATE(48),
    [sym_html_enable_command] = STATE(48),
    [sym_scr_tts_command] = STATE(48),
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
    [sym_help_command] = STATE(189),
    [sym_arged_command] = STATE(48),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(105),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(48),
    [sym_redirect_command] = STATE(189),
    [aux_sym_commands_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(29),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(37),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(43),
  },
  [2] = {
    [sym__simple_command] = STATE(58),
    [sym__tmp_command] = STATE(58),
    [sym__iter_command] = STATE(58),
    [sym__pipe_command] = STATE(58),
    [sym_grep_command] = STATE(58),
    [sym_html_disable_command] = STATE(58),
    [sym_html_enable_command] = STATE(58),
    [sym_scr_tts_command] = STATE(58),
    [sym_pipe_command] = STATE(58),
    [sym_iter_flags_command] = STATE(58),
    [sym_iter_dbta_command] = STATE(58),
    [sym_iter_dbtb_command] = STATE(58),
    [sym_iter_dbts_command] = STATE(58),
    [sym_iter_file_lines_command] = STATE(58),
    [sym_iter_offsets_command] = STATE(58),
    [sym_iter_sdbquery_command] = STATE(58),
    [sym_iter_threads_command] = STATE(58),
    [sym_iter_bbs_command] = STATE(58),
    [sym_iter_instrs_command] = STATE(58),
    [sym_iter_sections_command] = STATE(58),
    [sym_iter_functions_command] = STATE(58),
    [sym_iter_step_command] = STATE(58),
    [sym_iter_interpret_command] = STATE(58),
    [sym_tmp_seek_command] = STATE(58),
    [sym_tmp_blksz_command] = STATE(58),
    [sym_tmp_fromto_command] = STATE(58),
    [sym_tmp_arch_command] = STATE(58),
    [sym_tmp_bits_command] = STATE(58),
    [sym_tmp_nthi_command] = STATE(58),
    [sym_tmp_eval_command] = STATE(58),
    [sym_tmp_fs_command] = STATE(58),
    [sym_tmp_reli_command] = STATE(58),
    [sym_tmp_kuery_command] = STATE(58),
    [sym_tmp_fd_command] = STATE(58),
    [sym_tmp_reg_command] = STATE(58),
    [sym_tmp_file_command] = STATE(58),
    [sym_tmp_string_command] = STATE(58),
    [sym_tmp_hex_command] = STATE(58),
    [sym_arged_command] = STATE(58),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(105),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_PIPEH] = ACTIONS(45),
    [anon_sym_PIPET] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(47),
    [anon_sym_AT_ATdbt] = ACTIONS(47),
    [anon_sym_AT_ATdbta] = ACTIONS(45),
    [anon_sym_AT_ATdbtb] = ACTIONS(45),
    [anon_sym_AT_ATdbts] = ACTIONS(45),
    [anon_sym_AT_AT_DOT] = ACTIONS(45),
    [anon_sym_AT_AT_EQ] = ACTIONS(45),
    [anon_sym_AT_ATk] = ACTIONS(45),
    [anon_sym_AT_ATt] = ACTIONS(45),
    [anon_sym_AT_ATb] = ACTIONS(45),
    [anon_sym_AT_ATi] = ACTIONS(47),
    [anon_sym_AT_ATiS] = ACTIONS(45),
    [anon_sym_AT_ATf] = ACTIONS(45),
    [anon_sym_AT_ATs_COLON] = ACTIONS(45),
    [anon_sym_AT_ATc_COLON] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
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
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_PIPE_DOT] = ACTIONS(45),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(29),
    [sym_question_mark_identifier] = ACTIONS(49),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_GT] = ACTIONS(45),
    [sym_html_redirect_operator] = ACTIONS(47),
    [sym_html_append_operator] = ACTIONS(45),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(45),
    [sym_repeat_number] = ACTIONS(43),
  },
  [3] = {
    [sym__simple_command] = STATE(58),
    [sym__tmp_command] = STATE(58),
    [sym__iter_command] = STATE(58),
    [sym__pipe_command] = STATE(58),
    [sym_grep_command] = STATE(58),
    [sym_html_disable_command] = STATE(58),
    [sym_html_enable_command] = STATE(58),
    [sym_scr_tts_command] = STATE(58),
    [sym_pipe_command] = STATE(58),
    [sym_iter_flags_command] = STATE(58),
    [sym_iter_dbta_command] = STATE(58),
    [sym_iter_dbtb_command] = STATE(58),
    [sym_iter_dbts_command] = STATE(58),
    [sym_iter_file_lines_command] = STATE(58),
    [sym_iter_offsets_command] = STATE(58),
    [sym_iter_sdbquery_command] = STATE(58),
    [sym_iter_threads_command] = STATE(58),
    [sym_iter_bbs_command] = STATE(58),
    [sym_iter_instrs_command] = STATE(58),
    [sym_iter_sections_command] = STATE(58),
    [sym_iter_functions_command] = STATE(58),
    [sym_iter_step_command] = STATE(58),
    [sym_iter_interpret_command] = STATE(58),
    [sym_tmp_seek_command] = STATE(58),
    [sym_tmp_blksz_command] = STATE(58),
    [sym_tmp_fromto_command] = STATE(58),
    [sym_tmp_arch_command] = STATE(58),
    [sym_tmp_bits_command] = STATE(58),
    [sym_tmp_nthi_command] = STATE(58),
    [sym_tmp_eval_command] = STATE(58),
    [sym_tmp_fs_command] = STATE(58),
    [sym_tmp_reli_command] = STATE(58),
    [sym_tmp_kuery_command] = STATE(58),
    [sym_tmp_fd_command] = STATE(58),
    [sym_tmp_reg_command] = STATE(58),
    [sym_tmp_file_command] = STATE(58),
    [sym_tmp_string_command] = STATE(58),
    [sym_tmp_hex_command] = STATE(58),
    [sym_arged_command] = STATE(58),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(58),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_PIPEH] = ACTIONS(45),
    [anon_sym_PIPET] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(47),
    [anon_sym_AT_ATdbt] = ACTIONS(47),
    [anon_sym_AT_ATdbta] = ACTIONS(45),
    [anon_sym_AT_ATdbtb] = ACTIONS(45),
    [anon_sym_AT_ATdbts] = ACTIONS(45),
    [anon_sym_AT_AT_DOT] = ACTIONS(45),
    [anon_sym_AT_AT_EQ] = ACTIONS(45),
    [anon_sym_AT_ATk] = ACTIONS(45),
    [anon_sym_AT_ATt] = ACTIONS(45),
    [anon_sym_AT_ATb] = ACTIONS(45),
    [anon_sym_AT_ATi] = ACTIONS(47),
    [anon_sym_AT_ATiS] = ACTIONS(45),
    [anon_sym_AT_ATf] = ACTIONS(45),
    [anon_sym_AT_ATs_COLON] = ACTIONS(45),
    [anon_sym_AT_ATc_COLON] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
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
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_PIPE_DOT] = ACTIONS(45),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(49),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_GT] = ACTIONS(45),
    [sym_html_redirect_operator] = ACTIONS(47),
    [sym_html_append_operator] = ACTIONS(45),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym_file_descriptor] = ACTIONS(45),
    [sym_repeat_number] = ACTIONS(59),
  },
  [4] = {
    [sym__simple_command] = STATE(58),
    [sym__tmp_command] = STATE(58),
    [sym__iter_command] = STATE(58),
    [sym__pipe_command] = STATE(58),
    [sym_grep_command] = STATE(58),
    [sym_html_disable_command] = STATE(58),
    [sym_html_enable_command] = STATE(58),
    [sym_scr_tts_command] = STATE(58),
    [sym_pipe_command] = STATE(58),
    [sym_iter_flags_command] = STATE(58),
    [sym_iter_dbta_command] = STATE(58),
    [sym_iter_dbtb_command] = STATE(58),
    [sym_iter_dbts_command] = STATE(58),
    [sym_iter_file_lines_command] = STATE(58),
    [sym_iter_offsets_command] = STATE(58),
    [sym_iter_sdbquery_command] = STATE(58),
    [sym_iter_threads_command] = STATE(58),
    [sym_iter_bbs_command] = STATE(58),
    [sym_iter_instrs_command] = STATE(58),
    [sym_iter_sections_command] = STATE(58),
    [sym_iter_functions_command] = STATE(58),
    [sym_iter_step_command] = STATE(58),
    [sym_iter_interpret_command] = STATE(58),
    [sym_tmp_seek_command] = STATE(58),
    [sym_tmp_blksz_command] = STATE(58),
    [sym_tmp_fromto_command] = STATE(58),
    [sym_tmp_arch_command] = STATE(58),
    [sym_tmp_bits_command] = STATE(58),
    [sym_tmp_nthi_command] = STATE(58),
    [sym_tmp_eval_command] = STATE(58),
    [sym_tmp_fs_command] = STATE(58),
    [sym_tmp_reli_command] = STATE(58),
    [sym_tmp_kuery_command] = STATE(58),
    [sym_tmp_fd_command] = STATE(58),
    [sym_tmp_reg_command] = STATE(58),
    [sym_tmp_file_command] = STATE(58),
    [sym_tmp_string_command] = STATE(58),
    [sym_tmp_hex_command] = STATE(58),
    [sym_arged_command] = STATE(58),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(58),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_PIPEH] = ACTIONS(45),
    [anon_sym_PIPET] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(47),
    [anon_sym_AT_ATdbt] = ACTIONS(47),
    [anon_sym_AT_ATdbta] = ACTIONS(45),
    [anon_sym_AT_ATdbtb] = ACTIONS(45),
    [anon_sym_AT_ATdbts] = ACTIONS(45),
    [anon_sym_AT_AT_DOT] = ACTIONS(45),
    [anon_sym_AT_AT_EQ] = ACTIONS(45),
    [anon_sym_AT_ATk] = ACTIONS(45),
    [anon_sym_AT_ATt] = ACTIONS(45),
    [anon_sym_AT_ATb] = ACTIONS(45),
    [anon_sym_AT_ATi] = ACTIONS(47),
    [anon_sym_AT_ATiS] = ACTIONS(45),
    [anon_sym_AT_ATf] = ACTIONS(45),
    [anon_sym_AT_ATs_COLON] = ACTIONS(45),
    [anon_sym_AT_ATc_COLON] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
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
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_PIPE_DOT] = ACTIONS(45),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(67),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_GT] = ACTIONS(45),
    [sym_html_redirect_operator] = ACTIONS(47),
    [sym_html_append_operator] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym_file_descriptor] = ACTIONS(45),
    [sym_repeat_number] = ACTIONS(73),
  },
  [5] = {
    [sym__command] = STATE(191),
    [sym_legacy_quoted_command] = STATE(191),
    [sym__simple_command] = STATE(48),
    [sym__tmp_command] = STATE(48),
    [sym__iter_command] = STATE(48),
    [sym__pipe_command] = STATE(48),
    [sym_grep_command] = STATE(48),
    [sym_html_disable_command] = STATE(48),
    [sym_html_enable_command] = STATE(48),
    [sym_scr_tts_command] = STATE(48),
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
    [sym_help_command] = STATE(191),
    [sym_arged_command] = STATE(48),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(105),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(48),
    [sym_redirect_command] = STATE(191),
    [aux_sym_commands_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(29),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(43),
  },
  [6] = {
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(48),
    [sym__tmp_command] = STATE(48),
    [sym__iter_command] = STATE(48),
    [sym__pipe_command] = STATE(48),
    [sym_grep_command] = STATE(48),
    [sym_html_disable_command] = STATE(48),
    [sym_html_enable_command] = STATE(48),
    [sym_scr_tts_command] = STATE(48),
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
    [sym_help_command] = STATE(193),
    [sym_arged_command] = STATE(48),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(105),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(48),
    [sym_redirect_command] = STATE(193),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(29),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_CR] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(43),
  },
  [7] = {
    [sym__commands_singleline] = STATE(232),
    [sym__command] = STATE(201),
    [sym_legacy_quoted_command] = STATE(201),
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_grep_command] = STATE(112),
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
    [sym_help_command] = STATE(201),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(112),
    [sym_redirect_command] = STATE(201),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(87),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym__help_command] = ACTIONS(91),
    [sym_repeat_number] = ACTIONS(73),
  },
  [8] = {
    [sym__commands_singleline] = STATE(231),
    [sym__command] = STATE(202),
    [sym_legacy_quoted_command] = STATE(202),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_grep_command] = STATE(111),
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
    [sym_help_command] = STATE(202),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(111),
    [sym_redirect_command] = STATE(202),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [9] = {
    [sym__commands_singleline] = STATE(228),
    [sym__command] = STATE(201),
    [sym_legacy_quoted_command] = STATE(201),
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_grep_command] = STATE(112),
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
    [sym_help_command] = STATE(201),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(112),
    [sym_redirect_command] = STATE(201),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(87),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym__help_command] = ACTIONS(91),
    [sym_repeat_number] = ACTIONS(73),
  },
  [10] = {
    [sym__commands_singleline] = STATE(211),
    [sym__command] = STATE(202),
    [sym_legacy_quoted_command] = STATE(202),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_grep_command] = STATE(111),
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
    [sym_help_command] = STATE(202),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(111),
    [sym_redirect_command] = STATE(202),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [11] = {
    [sym__commands_singleline] = STATE(222),
    [sym__command] = STATE(201),
    [sym_legacy_quoted_command] = STATE(201),
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_grep_command] = STATE(112),
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
    [sym_help_command] = STATE(201),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(112),
    [sym_redirect_command] = STATE(201),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(87),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym__help_command] = ACTIONS(91),
    [sym_repeat_number] = ACTIONS(73),
  },
  [12] = {
    [sym__commands_singleline] = STATE(220),
    [sym__command] = STATE(202),
    [sym_legacy_quoted_command] = STATE(202),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_grep_command] = STATE(111),
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
    [sym_help_command] = STATE(202),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(111),
    [sym_redirect_command] = STATE(202),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [13] = {
    [sym__commands_singleline] = STATE(227),
    [sym__command] = STATE(201),
    [sym_legacy_quoted_command] = STATE(201),
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_grep_command] = STATE(112),
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
    [sym_help_command] = STATE(201),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(112),
    [sym_redirect_command] = STATE(201),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(87),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym__help_command] = ACTIONS(91),
    [sym_repeat_number] = ACTIONS(73),
  },
  [14] = {
    [sym__commands_singleline] = STATE(236),
    [sym__command] = STATE(202),
    [sym_legacy_quoted_command] = STATE(202),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_grep_command] = STATE(111),
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
    [sym_help_command] = STATE(202),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(111),
    [sym_redirect_command] = STATE(202),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(95),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [15] = {
    [sym__command] = STATE(203),
    [sym_legacy_quoted_command] = STATE(203),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_grep_command] = STATE(111),
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
    [sym_help_command] = STATE(203),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(111),
    [sym_redirect_command] = STATE(203),
    [aux_sym__commands_singleline_repeat1] = STATE(132),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [16] = {
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(111),
    [sym__tmp_command] = STATE(111),
    [sym__iter_command] = STATE(111),
    [sym__pipe_command] = STATE(111),
    [sym_grep_command] = STATE(111),
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
    [sym_help_command] = STATE(196),
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(111),
    [sym_redirect_command] = STATE(196),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(103),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [17] = {
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_grep_command] = STATE(112),
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
    [sym_help_command] = STATE(196),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(112),
    [sym_redirect_command] = STATE(196),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(87),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [anon_sym_BQUOTE] = ACTIONS(103),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(103),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym__help_command] = ACTIONS(91),
    [sym_repeat_number] = ACTIONS(73),
  },
  [18] = {
    [sym__command] = STATE(197),
    [sym_legacy_quoted_command] = STATE(197),
    [sym__simple_command] = STATE(112),
    [sym__tmp_command] = STATE(112),
    [sym__iter_command] = STATE(112),
    [sym__pipe_command] = STATE(112),
    [sym_grep_command] = STATE(112),
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
    [sym_help_command] = STATE(197),
    [sym_arged_command] = STATE(112),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(112),
    [sym_redirect_command] = STATE(197),
    [aux_sym__commands_singleline_repeat1] = STATE(132),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(87),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(99),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym__help_command] = ACTIONS(91),
    [sym_repeat_number] = ACTIONS(73),
  },
  [19] = {
    [sym__simple_command] = STATE(130),
    [sym__tmp_command] = STATE(130),
    [sym__iter_command] = STATE(130),
    [sym__pipe_command] = STATE(130),
    [sym_grep_command] = STATE(130),
    [sym_html_disable_command] = STATE(130),
    [sym_html_enable_command] = STATE(130),
    [sym_scr_tts_command] = STATE(130),
    [sym_pipe_command] = STATE(130),
    [sym_iter_flags_command] = STATE(130),
    [sym_iter_dbta_command] = STATE(130),
    [sym_iter_dbtb_command] = STATE(130),
    [sym_iter_dbts_command] = STATE(130),
    [sym_iter_file_lines_command] = STATE(130),
    [sym_iter_offsets_command] = STATE(130),
    [sym_iter_sdbquery_command] = STATE(130),
    [sym_iter_threads_command] = STATE(130),
    [sym_iter_bbs_command] = STATE(130),
    [sym_iter_instrs_command] = STATE(130),
    [sym_iter_sections_command] = STATE(130),
    [sym_iter_functions_command] = STATE(130),
    [sym_iter_step_command] = STATE(130),
    [sym_iter_interpret_command] = STATE(130),
    [sym_tmp_seek_command] = STATE(130),
    [sym_tmp_blksz_command] = STATE(130),
    [sym_tmp_fromto_command] = STATE(130),
    [sym_tmp_arch_command] = STATE(130),
    [sym_tmp_bits_command] = STATE(130),
    [sym_tmp_nthi_command] = STATE(130),
    [sym_tmp_eval_command] = STATE(130),
    [sym_tmp_fs_command] = STATE(130),
    [sym_tmp_reli_command] = STATE(130),
    [sym_tmp_kuery_command] = STATE(130),
    [sym_tmp_fd_command] = STATE(130),
    [sym_tmp_reg_command] = STATE(130),
    [sym_tmp_file_command] = STATE(130),
    [sym_tmp_string_command] = STATE(130),
    [sym_tmp_hex_command] = STATE(130),
    [sym_arged_command] = STATE(130),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(130),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(67),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym_repeat_number] = ACTIONS(73),
  },
  [20] = {
    [sym__simple_command] = STATE(128),
    [sym__tmp_command] = STATE(128),
    [sym__iter_command] = STATE(128),
    [sym__pipe_command] = STATE(128),
    [sym_grep_command] = STATE(128),
    [sym_html_disable_command] = STATE(128),
    [sym_html_enable_command] = STATE(128),
    [sym_scr_tts_command] = STATE(128),
    [sym_pipe_command] = STATE(128),
    [sym_iter_flags_command] = STATE(128),
    [sym_iter_dbta_command] = STATE(128),
    [sym_iter_dbtb_command] = STATE(128),
    [sym_iter_dbts_command] = STATE(128),
    [sym_iter_file_lines_command] = STATE(128),
    [sym_iter_offsets_command] = STATE(128),
    [sym_iter_sdbquery_command] = STATE(128),
    [sym_iter_threads_command] = STATE(128),
    [sym_iter_bbs_command] = STATE(128),
    [sym_iter_instrs_command] = STATE(128),
    [sym_iter_sections_command] = STATE(128),
    [sym_iter_functions_command] = STATE(128),
    [sym_iter_step_command] = STATE(128),
    [sym_iter_interpret_command] = STATE(128),
    [sym_tmp_seek_command] = STATE(128),
    [sym_tmp_blksz_command] = STATE(128),
    [sym_tmp_fromto_command] = STATE(128),
    [sym_tmp_arch_command] = STATE(128),
    [sym_tmp_bits_command] = STATE(128),
    [sym_tmp_nthi_command] = STATE(128),
    [sym_tmp_eval_command] = STATE(128),
    [sym_tmp_fs_command] = STATE(128),
    [sym_tmp_reli_command] = STATE(128),
    [sym_tmp_kuery_command] = STATE(128),
    [sym_tmp_fd_command] = STATE(128),
    [sym_tmp_reg_command] = STATE(128),
    [sym_tmp_file_command] = STATE(128),
    [sym_tmp_string_command] = STATE(128),
    [sym_tmp_hex_command] = STATE(128),
    [sym_arged_command] = STATE(128),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(144),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(119),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(35),
    [sym_repeat_command] = STATE(128),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(67),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(69),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(71),
    [sym_repeat_number] = ACTIONS(73),
  },
  [21] = {
    [sym__simple_command] = STATE(127),
    [sym__tmp_command] = STATE(127),
    [sym__iter_command] = STATE(127),
    [sym__pipe_command] = STATE(127),
    [sym_grep_command] = STATE(127),
    [sym_html_disable_command] = STATE(127),
    [sym_html_enable_command] = STATE(127),
    [sym_scr_tts_command] = STATE(127),
    [sym_pipe_command] = STATE(127),
    [sym_iter_flags_command] = STATE(127),
    [sym_iter_dbta_command] = STATE(127),
    [sym_iter_dbtb_command] = STATE(127),
    [sym_iter_dbts_command] = STATE(127),
    [sym_iter_file_lines_command] = STATE(127),
    [sym_iter_offsets_command] = STATE(127),
    [sym_iter_sdbquery_command] = STATE(127),
    [sym_iter_threads_command] = STATE(127),
    [sym_iter_bbs_command] = STATE(127),
    [sym_iter_instrs_command] = STATE(127),
    [sym_iter_sections_command] = STATE(127),
    [sym_iter_functions_command] = STATE(127),
    [sym_iter_step_command] = STATE(127),
    [sym_iter_interpret_command] = STATE(127),
    [sym_tmp_seek_command] = STATE(127),
    [sym_tmp_blksz_command] = STATE(127),
    [sym_tmp_fromto_command] = STATE(127),
    [sym_tmp_arch_command] = STATE(127),
    [sym_tmp_bits_command] = STATE(127),
    [sym_tmp_nthi_command] = STATE(127),
    [sym_tmp_eval_command] = STATE(127),
    [sym_tmp_fs_command] = STATE(127),
    [sym_tmp_reli_command] = STATE(127),
    [sym_tmp_kuery_command] = STATE(127),
    [sym_tmp_fd_command] = STATE(127),
    [sym_tmp_reg_command] = STATE(127),
    [sym_tmp_file_command] = STATE(127),
    [sym_tmp_string_command] = STATE(127),
    [sym_tmp_hex_command] = STATE(127),
    [sym_arged_command] = STATE(127),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(127),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(49),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym_repeat_number] = ACTIONS(59),
  },
  [22] = {
    [sym__simple_command] = STATE(114),
    [sym__tmp_command] = STATE(114),
    [sym__iter_command] = STATE(114),
    [sym__pipe_command] = STATE(114),
    [sym_grep_command] = STATE(114),
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
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(105),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(114),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(29),
    [sym_question_mark_identifier] = ACTIONS(49),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym_repeat_number] = ACTIONS(43),
  },
  [23] = {
    [sym__simple_command] = STATE(129),
    [sym__tmp_command] = STATE(129),
    [sym__iter_command] = STATE(129),
    [sym__pipe_command] = STATE(129),
    [sym_grep_command] = STATE(129),
    [sym_html_disable_command] = STATE(129),
    [sym_html_enable_command] = STATE(129),
    [sym_scr_tts_command] = STATE(129),
    [sym_pipe_command] = STATE(129),
    [sym_iter_flags_command] = STATE(129),
    [sym_iter_dbta_command] = STATE(129),
    [sym_iter_dbtb_command] = STATE(129),
    [sym_iter_dbts_command] = STATE(129),
    [sym_iter_file_lines_command] = STATE(129),
    [sym_iter_offsets_command] = STATE(129),
    [sym_iter_sdbquery_command] = STATE(129),
    [sym_iter_threads_command] = STATE(129),
    [sym_iter_bbs_command] = STATE(129),
    [sym_iter_instrs_command] = STATE(129),
    [sym_iter_sections_command] = STATE(129),
    [sym_iter_functions_command] = STATE(129),
    [sym_iter_step_command] = STATE(129),
    [sym_iter_interpret_command] = STATE(129),
    [sym_tmp_seek_command] = STATE(129),
    [sym_tmp_blksz_command] = STATE(129),
    [sym_tmp_fromto_command] = STATE(129),
    [sym_tmp_arch_command] = STATE(129),
    [sym_tmp_bits_command] = STATE(129),
    [sym_tmp_nthi_command] = STATE(129),
    [sym_tmp_eval_command] = STATE(129),
    [sym_tmp_fs_command] = STATE(129),
    [sym_tmp_reli_command] = STATE(129),
    [sym_tmp_kuery_command] = STATE(129),
    [sym_tmp_fd_command] = STATE(129),
    [sym_tmp_reg_command] = STATE(129),
    [sym_tmp_file_command] = STATE(129),
    [sym_tmp_string_command] = STATE(129),
    [sym_tmp_hex_command] = STATE(129),
    [sym_arged_command] = STATE(129),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(115),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(129),
    [anon_sym_DOT] = ACTIONS(51),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_env] = ACTIONS(53),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(55),
    [sym_question_mark_identifier] = ACTIONS(49),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(57),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym_repeat_number] = ACTIONS(59),
  },
  [24] = {
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
    [sym_arged_command] = STATE(118),
    [sym__simple_arged_command] = STATE(100),
    [sym__math_arged_command] = STATE(100),
    [sym__pointer_arged_command] = STATE(100),
    [sym__macro_arged_command] = STATE(100),
    [sym__system_command] = STATE(100),
    [sym__interpret_command] = STATE(100),
    [sym__interpret_search_identifier] = STATE(141),
    [sym__env_command] = STATE(100),
    [sym__env_command_identifier] = STATE(105),
    [sym__last_command] = STATE(100),
    [sym_last_command_identifier] = STATE(106),
    [sym__interpret_identifier] = STATE(31),
    [sym_repeat_command] = STATE(118),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_env] = ACTIONS(21),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(23),
    [aux_sym__interpret_identifier_token1] = ACTIONS(25),
    [aux_sym__interpret_identifier_token2] = ACTIONS(27),
    [sym_system_identifier] = ACTIONS(29),
    [sym_question_mark_identifier] = ACTIONS(49),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym_repeat_number] = ACTIONS(43),
  },
  [25] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPEH] = ACTIONS(111),
    [anon_sym_PIPET] = ACTIONS(111),
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
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_PIPE_DOT] = ACTIONS(111),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [sym_html_redirect_operator] = ACTIONS(111),
    [sym_html_append_operator] = ACTIONS(111),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_CR] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [sym_file_descriptor] = ACTIONS(107),
  },
  [26] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(123),
    [anon_sym_PIPET] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(123),
    [anon_sym_AT_ATdbt] = ACTIONS(123),
    [anon_sym_AT_ATdbta] = ACTIONS(123),
    [anon_sym_AT_ATdbtb] = ACTIONS(123),
    [anon_sym_AT_ATdbts] = ACTIONS(123),
    [anon_sym_AT_AT_DOT] = ACTIONS(123),
    [anon_sym_AT_AT_EQ] = ACTIONS(123),
    [anon_sym_AT_ATk] = ACTIONS(123),
    [anon_sym_AT_ATt] = ACTIONS(123),
    [anon_sym_AT_ATb] = ACTIONS(123),
    [anon_sym_AT_ATi] = ACTIONS(123),
    [anon_sym_AT_ATiS] = ACTIONS(123),
    [anon_sym_AT_ATf] = ACTIONS(123),
    [anon_sym_AT_ATs_COLON] = ACTIONS(123),
    [anon_sym_AT_ATc_COLON] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_AT_BANG] = ACTIONS(123),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_ATa_COLON] = ACTIONS(123),
    [anon_sym_ATb_COLON] = ACTIONS(123),
    [anon_sym_ATB_COLON] = ACTIONS(123),
    [anon_sym_ATe_COLON] = ACTIONS(123),
    [anon_sym_ATF_COLON] = ACTIONS(123),
    [anon_sym_ATi_COLON] = ACTIONS(123),
    [anon_sym_ATk_COLON] = ACTIONS(123),
    [anon_sym_ATo_COLON] = ACTIONS(123),
    [anon_sym_ATr_COLON] = ACTIONS(123),
    [anon_sym_ATf_COLON] = ACTIONS(123),
    [anon_sym_ATs_COLON] = ACTIONS(123),
    [anon_sym_ATx_COLON] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_PIPE_DOT] = ACTIONS(123),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
    [sym_html_redirect_operator] = ACTIONS(123),
    [sym_html_append_operator] = ACTIONS(123),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_CR] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [sym_file_descriptor] = ACTIONS(121),
  },
  [27] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPEH] = ACTIONS(127),
    [anon_sym_PIPET] = ACTIONS(127),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(127),
    [anon_sym_AT_ATdbtb] = ACTIONS(127),
    [anon_sym_AT_ATdbts] = ACTIONS(127),
    [anon_sym_AT_AT_DOT] = ACTIONS(127),
    [anon_sym_AT_AT_EQ] = ACTIONS(127),
    [anon_sym_AT_ATk] = ACTIONS(127),
    [anon_sym_AT_ATt] = ACTIONS(127),
    [anon_sym_AT_ATb] = ACTIONS(127),
    [anon_sym_AT_ATi] = ACTIONS(127),
    [anon_sym_AT_ATiS] = ACTIONS(127),
    [anon_sym_AT_ATf] = ACTIONS(127),
    [anon_sym_AT_ATs_COLON] = ACTIONS(127),
    [anon_sym_AT_ATc_COLON] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_AT_BANG] = ACTIONS(127),
    [anon_sym_AT_LPAREN] = ACTIONS(127),
    [anon_sym_ATa_COLON] = ACTIONS(127),
    [anon_sym_ATb_COLON] = ACTIONS(127),
    [anon_sym_ATB_COLON] = ACTIONS(127),
    [anon_sym_ATe_COLON] = ACTIONS(127),
    [anon_sym_ATF_COLON] = ACTIONS(127),
    [anon_sym_ATi_COLON] = ACTIONS(127),
    [anon_sym_ATk_COLON] = ACTIONS(127),
    [anon_sym_ATo_COLON] = ACTIONS(127),
    [anon_sym_ATr_COLON] = ACTIONS(127),
    [anon_sym_ATf_COLON] = ACTIONS(127),
    [anon_sym_ATs_COLON] = ACTIONS(127),
    [anon_sym_ATx_COLON] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_PIPE_DOT] = ACTIONS(127),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(127),
    [sym_html_redirect_operator] = ACTIONS(127),
    [sym_html_append_operator] = ACTIONS(127),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_CR] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(125),
  },
  [28] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_PIPEH] = ACTIONS(131),
    [anon_sym_PIPET] = ACTIONS(131),
    [anon_sym_AT_AT] = ACTIONS(131),
    [anon_sym_AT_ATdbt] = ACTIONS(131),
    [anon_sym_AT_ATdbta] = ACTIONS(131),
    [anon_sym_AT_ATdbtb] = ACTIONS(131),
    [anon_sym_AT_ATdbts] = ACTIONS(131),
    [anon_sym_AT_AT_DOT] = ACTIONS(131),
    [anon_sym_AT_AT_EQ] = ACTIONS(131),
    [anon_sym_AT_ATk] = ACTIONS(131),
    [anon_sym_AT_ATt] = ACTIONS(131),
    [anon_sym_AT_ATb] = ACTIONS(131),
    [anon_sym_AT_ATi] = ACTIONS(131),
    [anon_sym_AT_ATiS] = ACTIONS(131),
    [anon_sym_AT_ATf] = ACTIONS(131),
    [anon_sym_AT_ATs_COLON] = ACTIONS(131),
    [anon_sym_AT_ATc_COLON] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_AT_BANG] = ACTIONS(131),
    [anon_sym_AT_LPAREN] = ACTIONS(131),
    [anon_sym_ATa_COLON] = ACTIONS(131),
    [anon_sym_ATb_COLON] = ACTIONS(131),
    [anon_sym_ATB_COLON] = ACTIONS(131),
    [anon_sym_ATe_COLON] = ACTIONS(131),
    [anon_sym_ATF_COLON] = ACTIONS(131),
    [anon_sym_ATi_COLON] = ACTIONS(131),
    [anon_sym_ATk_COLON] = ACTIONS(131),
    [anon_sym_ATo_COLON] = ACTIONS(131),
    [anon_sym_ATr_COLON] = ACTIONS(131),
    [anon_sym_ATf_COLON] = ACTIONS(131),
    [anon_sym_ATs_COLON] = ACTIONS(131),
    [anon_sym_ATx_COLON] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_PIPE_DOT] = ACTIONS(131),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [sym_html_redirect_operator] = ACTIONS(131),
    [sym_html_append_operator] = ACTIONS(131),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_CR] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_file_descriptor] = ACTIONS(129),
  },
  [29] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPEH] = ACTIONS(135),
    [anon_sym_PIPET] = ACTIONS(135),
    [anon_sym_AT_AT] = ACTIONS(135),
    [anon_sym_AT_ATdbt] = ACTIONS(135),
    [anon_sym_AT_ATdbta] = ACTIONS(135),
    [anon_sym_AT_ATdbtb] = ACTIONS(135),
    [anon_sym_AT_ATdbts] = ACTIONS(135),
    [anon_sym_AT_AT_DOT] = ACTIONS(135),
    [anon_sym_AT_AT_EQ] = ACTIONS(135),
    [anon_sym_AT_ATk] = ACTIONS(135),
    [anon_sym_AT_ATt] = ACTIONS(135),
    [anon_sym_AT_ATb] = ACTIONS(135),
    [anon_sym_AT_ATi] = ACTIONS(135),
    [anon_sym_AT_ATiS] = ACTIONS(135),
    [anon_sym_AT_ATf] = ACTIONS(135),
    [anon_sym_AT_ATs_COLON] = ACTIONS(135),
    [anon_sym_AT_ATc_COLON] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
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
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_PIPE_DOT] = ACTIONS(135),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [sym_html_redirect_operator] = ACTIONS(135),
    [sym_html_append_operator] = ACTIONS(135),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_CR] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(133),
  },
  [30] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(139),
    [anon_sym_TILDE] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [anon_sym_PIPEH] = ACTIONS(142),
    [anon_sym_PIPET] = ACTIONS(142),
    [anon_sym_AT_AT] = ACTIONS(142),
    [anon_sym_AT_ATdbt] = ACTIONS(142),
    [anon_sym_AT_ATdbta] = ACTIONS(142),
    [anon_sym_AT_ATdbtb] = ACTIONS(142),
    [anon_sym_AT_ATdbts] = ACTIONS(142),
    [anon_sym_AT_AT_DOT] = ACTIONS(142),
    [anon_sym_AT_AT_EQ] = ACTIONS(142),
    [anon_sym_AT_ATk] = ACTIONS(142),
    [anon_sym_AT_ATt] = ACTIONS(142),
    [anon_sym_AT_ATb] = ACTIONS(142),
    [anon_sym_AT_ATi] = ACTIONS(142),
    [anon_sym_AT_ATiS] = ACTIONS(142),
    [anon_sym_AT_ATf] = ACTIONS(142),
    [anon_sym_AT_ATs_COLON] = ACTIONS(142),
    [anon_sym_AT_ATc_COLON] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_AT_BANG] = ACTIONS(142),
    [anon_sym_AT_LPAREN] = ACTIONS(142),
    [anon_sym_ATa_COLON] = ACTIONS(142),
    [anon_sym_ATb_COLON] = ACTIONS(142),
    [anon_sym_ATB_COLON] = ACTIONS(142),
    [anon_sym_ATe_COLON] = ACTIONS(142),
    [anon_sym_ATF_COLON] = ACTIONS(142),
    [anon_sym_ATi_COLON] = ACTIONS(142),
    [anon_sym_ATk_COLON] = ACTIONS(142),
    [anon_sym_ATo_COLON] = ACTIONS(142),
    [anon_sym_ATr_COLON] = ACTIONS(142),
    [anon_sym_ATf_COLON] = ACTIONS(142),
    [anon_sym_ATs_COLON] = ACTIONS(142),
    [anon_sym_ATx_COLON] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_PIPE_DOT] = ACTIONS(142),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(142),
    [anon_sym_GT_GT] = ACTIONS(142),
    [sym_html_redirect_operator] = ACTIONS(142),
    [sym_html_append_operator] = ACTIONS(142),
    [aux_sym_arg_identifier_token1] = ACTIONS(144),
    [aux_sym_arg_identifier_token2] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(147),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(150),
    [anon_sym_BQUOTE] = ACTIONS(153),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_CR] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
    [sym_file_descriptor] = ACTIONS(137),
  },
  [31] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_PIPEH] = ACTIONS(158),
    [anon_sym_PIPET] = ACTIONS(158),
    [anon_sym_AT_AT] = ACTIONS(158),
    [anon_sym_AT_ATdbt] = ACTIONS(158),
    [anon_sym_AT_ATdbta] = ACTIONS(158),
    [anon_sym_AT_ATdbtb] = ACTIONS(158),
    [anon_sym_AT_ATdbts] = ACTIONS(158),
    [anon_sym_AT_AT_DOT] = ACTIONS(158),
    [anon_sym_AT_AT_EQ] = ACTIONS(158),
    [anon_sym_AT_ATk] = ACTIONS(158),
    [anon_sym_AT_ATt] = ACTIONS(158),
    [anon_sym_AT_ATb] = ACTIONS(158),
    [anon_sym_AT_ATi] = ACTIONS(158),
    [anon_sym_AT_ATiS] = ACTIONS(158),
    [anon_sym_AT_ATf] = ACTIONS(158),
    [anon_sym_AT_ATs_COLON] = ACTIONS(158),
    [anon_sym_AT_ATc_COLON] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(158),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_file_descriptor] = ACTIONS(156),
  },
  [32] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(111),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_PIPEH] = ACTIONS(111),
    [anon_sym_PIPET] = ACTIONS(111),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_GT_GT] = ACTIONS(111),
    [sym_html_redirect_operator] = ACTIONS(111),
    [sym_html_append_operator] = ACTIONS(111),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(111),
    [sym_file_descriptor] = ACTIONS(107),
  },
  [33] = {
    [sym_arg] = STATE(37),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_PIPEH] = ACTIONS(127),
    [anon_sym_PIPET] = ACTIONS(127),
    [anon_sym_AT_AT] = ACTIONS(127),
    [anon_sym_AT_ATdbt] = ACTIONS(127),
    [anon_sym_AT_ATdbta] = ACTIONS(127),
    [anon_sym_AT_ATdbtb] = ACTIONS(127),
    [anon_sym_AT_ATdbts] = ACTIONS(127),
    [anon_sym_AT_AT_DOT] = ACTIONS(127),
    [anon_sym_AT_AT_EQ] = ACTIONS(127),
    [anon_sym_AT_ATk] = ACTIONS(127),
    [anon_sym_AT_ATt] = ACTIONS(127),
    [anon_sym_AT_ATb] = ACTIONS(127),
    [anon_sym_AT_ATi] = ACTIONS(127),
    [anon_sym_AT_ATiS] = ACTIONS(127),
    [anon_sym_AT_ATf] = ACTIONS(127),
    [anon_sym_AT_ATs_COLON] = ACTIONS(127),
    [anon_sym_AT_ATc_COLON] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(127),
    [anon_sym_AT_BANG] = ACTIONS(127),
    [anon_sym_AT_LPAREN] = ACTIONS(127),
    [anon_sym_ATa_COLON] = ACTIONS(127),
    [anon_sym_ATb_COLON] = ACTIONS(127),
    [anon_sym_ATB_COLON] = ACTIONS(127),
    [anon_sym_ATe_COLON] = ACTIONS(127),
    [anon_sym_ATF_COLON] = ACTIONS(127),
    [anon_sym_ATi_COLON] = ACTIONS(127),
    [anon_sym_ATk_COLON] = ACTIONS(127),
    [anon_sym_ATo_COLON] = ACTIONS(127),
    [anon_sym_ATr_COLON] = ACTIONS(127),
    [anon_sym_ATf_COLON] = ACTIONS(127),
    [anon_sym_ATs_COLON] = ACTIONS(127),
    [anon_sym_ATx_COLON] = ACTIONS(127),
    [anon_sym_PIPE_DOT] = ACTIONS(127),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_GT_GT] = ACTIONS(127),
    [sym_html_redirect_operator] = ACTIONS(127),
    [sym_html_append_operator] = ACTIONS(127),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(127),
    [sym_file_descriptor] = ACTIONS(125),
  },
  [34] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [anon_sym_PIPEH] = ACTIONS(131),
    [anon_sym_PIPET] = ACTIONS(131),
    [anon_sym_AT_AT] = ACTIONS(131),
    [anon_sym_AT_ATdbt] = ACTIONS(131),
    [anon_sym_AT_ATdbta] = ACTIONS(131),
    [anon_sym_AT_ATdbtb] = ACTIONS(131),
    [anon_sym_AT_ATdbts] = ACTIONS(131),
    [anon_sym_AT_AT_DOT] = ACTIONS(131),
    [anon_sym_AT_AT_EQ] = ACTIONS(131),
    [anon_sym_AT_ATk] = ACTIONS(131),
    [anon_sym_AT_ATt] = ACTIONS(131),
    [anon_sym_AT_ATb] = ACTIONS(131),
    [anon_sym_AT_ATi] = ACTIONS(131),
    [anon_sym_AT_ATiS] = ACTIONS(131),
    [anon_sym_AT_ATf] = ACTIONS(131),
    [anon_sym_AT_ATs_COLON] = ACTIONS(131),
    [anon_sym_AT_ATc_COLON] = ACTIONS(131),
    [anon_sym_AT] = ACTIONS(131),
    [anon_sym_AT_BANG] = ACTIONS(131),
    [anon_sym_AT_LPAREN] = ACTIONS(131),
    [anon_sym_ATa_COLON] = ACTIONS(131),
    [anon_sym_ATb_COLON] = ACTIONS(131),
    [anon_sym_ATB_COLON] = ACTIONS(131),
    [anon_sym_ATe_COLON] = ACTIONS(131),
    [anon_sym_ATF_COLON] = ACTIONS(131),
    [anon_sym_ATi_COLON] = ACTIONS(131),
    [anon_sym_ATk_COLON] = ACTIONS(131),
    [anon_sym_ATo_COLON] = ACTIONS(131),
    [anon_sym_ATr_COLON] = ACTIONS(131),
    [anon_sym_ATf_COLON] = ACTIONS(131),
    [anon_sym_ATs_COLON] = ACTIONS(131),
    [anon_sym_ATx_COLON] = ACTIONS(131),
    [anon_sym_PIPE_DOT] = ACTIONS(131),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(131),
    [anon_sym_GT_GT] = ACTIONS(131),
    [sym_html_redirect_operator] = ACTIONS(131),
    [sym_html_append_operator] = ACTIONS(131),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(131),
    [sym_file_descriptor] = ACTIONS(129),
  },
  [35] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [anon_sym_PIPEH] = ACTIONS(158),
    [anon_sym_PIPET] = ACTIONS(158),
    [anon_sym_AT_AT] = ACTIONS(158),
    [anon_sym_AT_ATdbt] = ACTIONS(158),
    [anon_sym_AT_ATdbta] = ACTIONS(158),
    [anon_sym_AT_ATdbtb] = ACTIONS(158),
    [anon_sym_AT_ATdbts] = ACTIONS(158),
    [anon_sym_AT_AT_DOT] = ACTIONS(158),
    [anon_sym_AT_AT_EQ] = ACTIONS(158),
    [anon_sym_AT_ATk] = ACTIONS(158),
    [anon_sym_AT_ATt] = ACTIONS(158),
    [anon_sym_AT_ATb] = ACTIONS(158),
    [anon_sym_AT_ATi] = ACTIONS(158),
    [anon_sym_AT_ATiS] = ACTIONS(158),
    [anon_sym_AT_ATf] = ACTIONS(158),
    [anon_sym_AT_ATs_COLON] = ACTIONS(158),
    [anon_sym_AT_ATc_COLON] = ACTIONS(158),
    [anon_sym_AT] = ACTIONS(158),
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
    [anon_sym_PIPE_DOT] = ACTIONS(158),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(158),
    [anon_sym_GT_GT] = ACTIONS(158),
    [sym_html_redirect_operator] = ACTIONS(158),
    [sym_html_append_operator] = ACTIONS(158),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(158),
    [sym_file_descriptor] = ACTIONS(156),
  },
  [36] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(135),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPEH] = ACTIONS(135),
    [anon_sym_PIPET] = ACTIONS(135),
    [anon_sym_AT_AT] = ACTIONS(135),
    [anon_sym_AT_ATdbt] = ACTIONS(135),
    [anon_sym_AT_ATdbta] = ACTIONS(135),
    [anon_sym_AT_ATdbtb] = ACTIONS(135),
    [anon_sym_AT_ATdbts] = ACTIONS(135),
    [anon_sym_AT_AT_DOT] = ACTIONS(135),
    [anon_sym_AT_AT_EQ] = ACTIONS(135),
    [anon_sym_AT_ATk] = ACTIONS(135),
    [anon_sym_AT_ATt] = ACTIONS(135),
    [anon_sym_AT_ATb] = ACTIONS(135),
    [anon_sym_AT_ATi] = ACTIONS(135),
    [anon_sym_AT_ATiS] = ACTIONS(135),
    [anon_sym_AT_ATf] = ACTIONS(135),
    [anon_sym_AT_ATs_COLON] = ACTIONS(135),
    [anon_sym_AT_ATc_COLON] = ACTIONS(135),
    [anon_sym_AT] = ACTIONS(135),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(135),
    [sym_html_redirect_operator] = ACTIONS(135),
    [sym_html_append_operator] = ACTIONS(135),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(133),
  },
  [37] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [anon_sym_PIPEH] = ACTIONS(123),
    [anon_sym_PIPET] = ACTIONS(123),
    [anon_sym_AT_AT] = ACTIONS(123),
    [anon_sym_AT_ATdbt] = ACTIONS(123),
    [anon_sym_AT_ATdbta] = ACTIONS(123),
    [anon_sym_AT_ATdbtb] = ACTIONS(123),
    [anon_sym_AT_ATdbts] = ACTIONS(123),
    [anon_sym_AT_AT_DOT] = ACTIONS(123),
    [anon_sym_AT_AT_EQ] = ACTIONS(123),
    [anon_sym_AT_ATk] = ACTIONS(123),
    [anon_sym_AT_ATt] = ACTIONS(123),
    [anon_sym_AT_ATb] = ACTIONS(123),
    [anon_sym_AT_ATi] = ACTIONS(123),
    [anon_sym_AT_ATiS] = ACTIONS(123),
    [anon_sym_AT_ATf] = ACTIONS(123),
    [anon_sym_AT_ATs_COLON] = ACTIONS(123),
    [anon_sym_AT_ATc_COLON] = ACTIONS(123),
    [anon_sym_AT] = ACTIONS(123),
    [anon_sym_AT_BANG] = ACTIONS(123),
    [anon_sym_AT_LPAREN] = ACTIONS(123),
    [anon_sym_ATa_COLON] = ACTIONS(123),
    [anon_sym_ATb_COLON] = ACTIONS(123),
    [anon_sym_ATB_COLON] = ACTIONS(123),
    [anon_sym_ATe_COLON] = ACTIONS(123),
    [anon_sym_ATF_COLON] = ACTIONS(123),
    [anon_sym_ATi_COLON] = ACTIONS(123),
    [anon_sym_ATk_COLON] = ACTIONS(123),
    [anon_sym_ATo_COLON] = ACTIONS(123),
    [anon_sym_ATr_COLON] = ACTIONS(123),
    [anon_sym_ATf_COLON] = ACTIONS(123),
    [anon_sym_ATs_COLON] = ACTIONS(123),
    [anon_sym_ATx_COLON] = ACTIONS(123),
    [anon_sym_PIPE_DOT] = ACTIONS(123),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(123),
    [anon_sym_GT_GT] = ACTIONS(123),
    [sym_html_redirect_operator] = ACTIONS(123),
    [sym_html_append_operator] = ACTIONS(123),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(123),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(123),
    [sym_file_descriptor] = ACTIONS(121),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_PIPEH] = ACTIONS(162),
    [anon_sym_PIPET] = ACTIONS(162),
    [anon_sym_AT_AT] = ACTIONS(162),
    [anon_sym_AT_ATdbt] = ACTIONS(162),
    [anon_sym_AT_ATdbta] = ACTIONS(162),
    [anon_sym_AT_ATdbtb] = ACTIONS(162),
    [anon_sym_AT_ATdbts] = ACTIONS(162),
    [anon_sym_AT_AT_DOT] = ACTIONS(162),
    [anon_sym_AT_AT_EQ] = ACTIONS(162),
    [anon_sym_AT_ATk] = ACTIONS(162),
    [anon_sym_AT_ATt] = ACTIONS(162),
    [anon_sym_AT_ATb] = ACTIONS(162),
    [anon_sym_AT_ATi] = ACTIONS(162),
    [anon_sym_AT_ATiS] = ACTIONS(162),
    [anon_sym_AT_ATf] = ACTIONS(162),
    [anon_sym_AT_ATs_COLON] = ACTIONS(162),
    [anon_sym_AT_ATc_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(162),
    [sym_html_append_operator] = ACTIONS(162),
    [aux_sym_arg_identifier_token1] = ACTIONS(162),
    [aux_sym_arg_identifier_token2] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(160),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [anon_sym_PIPEH] = ACTIONS(166),
    [anon_sym_PIPET] = ACTIONS(166),
    [anon_sym_AT_AT] = ACTIONS(166),
    [anon_sym_AT_ATdbt] = ACTIONS(166),
    [anon_sym_AT_ATdbta] = ACTIONS(166),
    [anon_sym_AT_ATdbtb] = ACTIONS(166),
    [anon_sym_AT_ATdbts] = ACTIONS(166),
    [anon_sym_AT_AT_DOT] = ACTIONS(166),
    [anon_sym_AT_AT_EQ] = ACTIONS(166),
    [anon_sym_AT_ATk] = ACTIONS(166),
    [anon_sym_AT_ATt] = ACTIONS(166),
    [anon_sym_AT_ATb] = ACTIONS(166),
    [anon_sym_AT_ATi] = ACTIONS(166),
    [anon_sym_AT_ATiS] = ACTIONS(166),
    [anon_sym_AT_ATf] = ACTIONS(166),
    [anon_sym_AT_ATs_COLON] = ACTIONS(166),
    [anon_sym_AT_ATc_COLON] = ACTIONS(166),
    [anon_sym_AT] = ACTIONS(166),
    [anon_sym_AT_BANG] = ACTIONS(166),
    [anon_sym_AT_LPAREN] = ACTIONS(166),
    [anon_sym_ATa_COLON] = ACTIONS(166),
    [anon_sym_ATb_COLON] = ACTIONS(166),
    [anon_sym_ATB_COLON] = ACTIONS(166),
    [anon_sym_ATe_COLON] = ACTIONS(166),
    [anon_sym_ATF_COLON] = ACTIONS(166),
    [anon_sym_ATi_COLON] = ACTIONS(166),
    [anon_sym_ATk_COLON] = ACTIONS(166),
    [anon_sym_ATo_COLON] = ACTIONS(166),
    [anon_sym_ATr_COLON] = ACTIONS(166),
    [anon_sym_ATf_COLON] = ACTIONS(166),
    [anon_sym_ATs_COLON] = ACTIONS(166),
    [anon_sym_ATx_COLON] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_PIPE_DOT] = ACTIONS(166),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(166),
    [anon_sym_GT_GT] = ACTIONS(166),
    [sym_html_redirect_operator] = ACTIONS(166),
    [sym_html_append_operator] = ACTIONS(166),
    [aux_sym_arg_identifier_token1] = ACTIONS(166),
    [aux_sym_arg_identifier_token2] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [sym_file_descriptor] = ACTIONS(164),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [anon_sym_PIPEH] = ACTIONS(162),
    [anon_sym_PIPET] = ACTIONS(162),
    [anon_sym_AT_AT] = ACTIONS(162),
    [anon_sym_AT_ATdbt] = ACTIONS(162),
    [anon_sym_AT_ATdbta] = ACTIONS(162),
    [anon_sym_AT_ATdbtb] = ACTIONS(162),
    [anon_sym_AT_ATdbts] = ACTIONS(162),
    [anon_sym_AT_AT_DOT] = ACTIONS(162),
    [anon_sym_AT_AT_EQ] = ACTIONS(162),
    [anon_sym_AT_ATk] = ACTIONS(162),
    [anon_sym_AT_ATt] = ACTIONS(162),
    [anon_sym_AT_ATb] = ACTIONS(162),
    [anon_sym_AT_ATi] = ACTIONS(162),
    [anon_sym_AT_ATiS] = ACTIONS(162),
    [anon_sym_AT_ATf] = ACTIONS(162),
    [anon_sym_AT_ATs_COLON] = ACTIONS(162),
    [anon_sym_AT_ATc_COLON] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(162),
    [anon_sym_GT_GT] = ACTIONS(162),
    [sym_html_redirect_operator] = ACTIONS(162),
    [sym_html_append_operator] = ACTIONS(162),
    [aux_sym_arg_identifier_token1] = ACTIONS(162),
    [aux_sym_arg_identifier_token2] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
    [sym_file_descriptor] = ACTIONS(160),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(170),
    [anon_sym_PIPEH] = ACTIONS(170),
    [anon_sym_PIPET] = ACTIONS(170),
    [anon_sym_AT_AT] = ACTIONS(170),
    [anon_sym_AT_ATdbt] = ACTIONS(170),
    [anon_sym_AT_ATdbta] = ACTIONS(170),
    [anon_sym_AT_ATdbtb] = ACTIONS(170),
    [anon_sym_AT_ATdbts] = ACTIONS(170),
    [anon_sym_AT_AT_DOT] = ACTIONS(170),
    [anon_sym_AT_AT_EQ] = ACTIONS(170),
    [anon_sym_AT_ATk] = ACTIONS(170),
    [anon_sym_AT_ATt] = ACTIONS(170),
    [anon_sym_AT_ATb] = ACTIONS(170),
    [anon_sym_AT_ATi] = ACTIONS(170),
    [anon_sym_AT_ATiS] = ACTIONS(170),
    [anon_sym_AT_ATf] = ACTIONS(170),
    [anon_sym_AT_ATs_COLON] = ACTIONS(170),
    [anon_sym_AT_ATc_COLON] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_AT_BANG] = ACTIONS(170),
    [anon_sym_AT_LPAREN] = ACTIONS(170),
    [anon_sym_ATa_COLON] = ACTIONS(170),
    [anon_sym_ATb_COLON] = ACTIONS(170),
    [anon_sym_ATB_COLON] = ACTIONS(170),
    [anon_sym_ATe_COLON] = ACTIONS(170),
    [anon_sym_ATF_COLON] = ACTIONS(170),
    [anon_sym_ATi_COLON] = ACTIONS(170),
    [anon_sym_ATk_COLON] = ACTIONS(170),
    [anon_sym_ATo_COLON] = ACTIONS(170),
    [anon_sym_ATr_COLON] = ACTIONS(170),
    [anon_sym_ATf_COLON] = ACTIONS(170),
    [anon_sym_ATs_COLON] = ACTIONS(170),
    [anon_sym_ATx_COLON] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_PIPE_DOT] = ACTIONS(170),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(170),
    [anon_sym_GT_GT] = ACTIONS(170),
    [sym_html_redirect_operator] = ACTIONS(170),
    [sym_html_append_operator] = ACTIONS(170),
    [aux_sym_arg_identifier_token1] = ACTIONS(170),
    [aux_sym_arg_identifier_token2] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_CR] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_file_descriptor] = ACTIONS(168),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(174),
    [anon_sym_PIPEH] = ACTIONS(174),
    [anon_sym_PIPET] = ACTIONS(174),
    [anon_sym_AT_AT] = ACTIONS(174),
    [anon_sym_AT_ATdbt] = ACTIONS(174),
    [anon_sym_AT_ATdbta] = ACTIONS(174),
    [anon_sym_AT_ATdbtb] = ACTIONS(174),
    [anon_sym_AT_ATdbts] = ACTIONS(174),
    [anon_sym_AT_AT_DOT] = ACTIONS(174),
    [anon_sym_AT_AT_EQ] = ACTIONS(174),
    [anon_sym_AT_ATk] = ACTIONS(174),
    [anon_sym_AT_ATt] = ACTIONS(174),
    [anon_sym_AT_ATb] = ACTIONS(174),
    [anon_sym_AT_ATi] = ACTIONS(174),
    [anon_sym_AT_ATiS] = ACTIONS(174),
    [anon_sym_AT_ATf] = ACTIONS(174),
    [anon_sym_AT_ATs_COLON] = ACTIONS(174),
    [anon_sym_AT_ATc_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(174),
    [anon_sym_AT_BANG] = ACTIONS(174),
    [anon_sym_AT_LPAREN] = ACTIONS(174),
    [anon_sym_ATa_COLON] = ACTIONS(174),
    [anon_sym_ATb_COLON] = ACTIONS(174),
    [anon_sym_ATB_COLON] = ACTIONS(174),
    [anon_sym_ATe_COLON] = ACTIONS(174),
    [anon_sym_ATF_COLON] = ACTIONS(174),
    [anon_sym_ATi_COLON] = ACTIONS(174),
    [anon_sym_ATk_COLON] = ACTIONS(174),
    [anon_sym_ATo_COLON] = ACTIONS(174),
    [anon_sym_ATr_COLON] = ACTIONS(174),
    [anon_sym_ATf_COLON] = ACTIONS(174),
    [anon_sym_ATs_COLON] = ACTIONS(174),
    [anon_sym_ATx_COLON] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_PIPE_DOT] = ACTIONS(174),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_GT_GT] = ACTIONS(174),
    [sym_html_redirect_operator] = ACTIONS(174),
    [sym_html_append_operator] = ACTIONS(174),
    [aux_sym_arg_identifier_token1] = ACTIONS(174),
    [aux_sym_arg_identifier_token2] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_file_descriptor] = ACTIONS(172),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(178),
    [anon_sym_PIPEH] = ACTIONS(178),
    [anon_sym_PIPET] = ACTIONS(178),
    [anon_sym_AT_AT] = ACTIONS(178),
    [anon_sym_AT_ATdbt] = ACTIONS(178),
    [anon_sym_AT_ATdbta] = ACTIONS(178),
    [anon_sym_AT_ATdbtb] = ACTIONS(178),
    [anon_sym_AT_ATdbts] = ACTIONS(178),
    [anon_sym_AT_AT_DOT] = ACTIONS(178),
    [anon_sym_AT_AT_EQ] = ACTIONS(178),
    [anon_sym_AT_ATk] = ACTIONS(178),
    [anon_sym_AT_ATt] = ACTIONS(178),
    [anon_sym_AT_ATb] = ACTIONS(178),
    [anon_sym_AT_ATi] = ACTIONS(178),
    [anon_sym_AT_ATiS] = ACTIONS(178),
    [anon_sym_AT_ATf] = ACTIONS(178),
    [anon_sym_AT_ATs_COLON] = ACTIONS(178),
    [anon_sym_AT_ATc_COLON] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(178),
    [anon_sym_AT_BANG] = ACTIONS(178),
    [anon_sym_AT_LPAREN] = ACTIONS(178),
    [anon_sym_ATa_COLON] = ACTIONS(178),
    [anon_sym_ATb_COLON] = ACTIONS(178),
    [anon_sym_ATB_COLON] = ACTIONS(178),
    [anon_sym_ATe_COLON] = ACTIONS(178),
    [anon_sym_ATF_COLON] = ACTIONS(178),
    [anon_sym_ATi_COLON] = ACTIONS(178),
    [anon_sym_ATk_COLON] = ACTIONS(178),
    [anon_sym_ATo_COLON] = ACTIONS(178),
    [anon_sym_ATr_COLON] = ACTIONS(178),
    [anon_sym_ATf_COLON] = ACTIONS(178),
    [anon_sym_ATs_COLON] = ACTIONS(178),
    [anon_sym_ATx_COLON] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_PIPE_DOT] = ACTIONS(178),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(178),
    [anon_sym_GT_GT] = ACTIONS(178),
    [sym_html_redirect_operator] = ACTIONS(178),
    [sym_html_append_operator] = ACTIONS(178),
    [aux_sym_arg_identifier_token1] = ACTIONS(178),
    [aux_sym_arg_identifier_token2] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(178),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(178),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_CR] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [sym_file_descriptor] = ACTIONS(176),
  },
  [44] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
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
    [anon_sym_COMMA] = ACTIONS(184),
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
    [anon_sym_] = ACTIONS(3),
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
  [45] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
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
    [anon_sym_COMMA] = ACTIONS(191),
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
  [46] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(45),
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
    [anon_sym_COMMA] = ACTIONS(191),
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
    [anon_sym_BQUOTE] = ACTIONS(193),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(193),
    [anon_sym_CR] = ACTIONS(193),
    [anon_sym_SEMI] = ACTIONS(193),
    [sym_file_descriptor] = ACTIONS(193),
  },
  [47] = {
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
    [anon_sym_COMMA] = ACTIONS(180),
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
    [anon_sym_] = ACTIONS(3),
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
  [48] = {
    [sym__redirect_operator] = STATE(166),
    [sym_fdn_redirect_operator] = STATE(166),
    [sym_fdn_append_operator] = STATE(166),
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_TILDE] = ACTIONS(199),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(271),
    [sym_html_redirect_operator] = ACTIONS(273),
    [sym_html_append_operator] = ACTIONS(275),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(277),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [anon_sym_TILDE] = ACTIONS(279),
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
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(279),
    [sym_html_redirect_operator] = ACTIONS(281),
    [sym_html_append_operator] = ACTIONS(279),
    [anon_sym_BQUOTE] = ACTIONS(279),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(279),
    [anon_sym_CR] = ACTIONS(279),
    [anon_sym_SEMI] = ACTIONS(279),
    [sym_file_descriptor] = ACTIONS(279),
  },
  [50] = {
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
    [anon_sym_LPAREN] = ACTIONS(289),
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
  [51] = {
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
    [anon_sym_COLON] = ACTIONS(295),
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
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(297),
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
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_PIPE_DOT] = ACTIONS(297),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_GT_GT] = ACTIONS(297),
    [sym_html_redirect_operator] = ACTIONS(299),
    [sym_html_append_operator] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(297),
    [anon_sym_CR] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(297),
    [sym_file_descriptor] = ACTIONS(297),
  },
  [53] = {
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
  [56] = {
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
  [57] = {
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
    [anon_sym_RPAREN] = ACTIONS(319),
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
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_PIPEH] = ACTIONS(321),
    [anon_sym_PIPET] = ACTIONS(321),
    [anon_sym_AT_AT] = ACTIONS(323),
    [anon_sym_AT_ATdbt] = ACTIONS(323),
    [anon_sym_AT_ATdbta] = ACTIONS(321),
    [anon_sym_AT_ATdbtb] = ACTIONS(321),
    [anon_sym_AT_ATdbts] = ACTIONS(321),
    [anon_sym_AT_AT_DOT] = ACTIONS(321),
    [anon_sym_AT_AT_EQ] = ACTIONS(321),
    [anon_sym_AT_ATk] = ACTIONS(321),
    [anon_sym_AT_ATt] = ACTIONS(321),
    [anon_sym_AT_ATb] = ACTIONS(321),
    [anon_sym_AT_ATi] = ACTIONS(323),
    [anon_sym_AT_ATiS] = ACTIONS(321),
    [anon_sym_AT_ATf] = ACTIONS(321),
    [anon_sym_AT_ATs_COLON] = ACTIONS(321),
    [anon_sym_AT_ATc_COLON] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(323),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(321),
    [sym_html_redirect_operator] = ACTIONS(323),
    [sym_html_append_operator] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_CR] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym_file_descriptor] = ACTIONS(321),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
    [anon_sym_PIPEH] = ACTIONS(45),
    [anon_sym_PIPET] = ACTIONS(45),
    [anon_sym_AT_AT] = ACTIONS(47),
    [anon_sym_AT_ATdbt] = ACTIONS(47),
    [anon_sym_AT_ATdbta] = ACTIONS(45),
    [anon_sym_AT_ATdbtb] = ACTIONS(45),
    [anon_sym_AT_ATdbts] = ACTIONS(45),
    [anon_sym_AT_AT_DOT] = ACTIONS(45),
    [anon_sym_AT_AT_EQ] = ACTIONS(45),
    [anon_sym_AT_ATk] = ACTIONS(45),
    [anon_sym_AT_ATt] = ACTIONS(45),
    [anon_sym_AT_ATb] = ACTIONS(45),
    [anon_sym_AT_ATi] = ACTIONS(47),
    [anon_sym_AT_ATiS] = ACTIONS(45),
    [anon_sym_AT_ATf] = ACTIONS(45),
    [anon_sym_AT_ATs_COLON] = ACTIONS(45),
    [anon_sym_AT_ATc_COLON] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(47),
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
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_PIPE_DOT] = ACTIONS(45),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(47),
    [anon_sym_GT_GT] = ACTIONS(45),
    [sym_html_redirect_operator] = ACTIONS(47),
    [sym_html_append_operator] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(45),
    [anon_sym_CR] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_file_descriptor] = ACTIONS(45),
  },
  [60] = {
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
  [61] = {
    [sym_pipe_second_command] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPEH] = ACTIONS(331),
    [anon_sym_PIPET] = ACTIONS(331),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(331),
    [sym_html_append_operator] = ACTIONS(331),
    [sym__any_command] = ACTIONS(333),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(331),
    [anon_sym_CR] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(329),
  },
  [62] = {
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
  [63] = {
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
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(343),
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
    [anon_sym_PIPE_DOT] = ACTIONS(343),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(343),
    [sym_html_redirect_operator] = ACTIONS(345),
    [sym_html_append_operator] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_CR] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
    [sym_file_descriptor] = ACTIONS(343),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(347),
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
    [anon_sym_PIPE_DOT] = ACTIONS(347),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(347),
    [sym_html_redirect_operator] = ACTIONS(349),
    [sym_html_append_operator] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_CR] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
    [sym_file_descriptor] = ACTIONS(347),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_TILDE] = ACTIONS(351),
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
    [anon_sym_PIPE_DOT] = ACTIONS(351),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_GT_GT] = ACTIONS(351),
    [sym_html_redirect_operator] = ACTIONS(353),
    [sym_html_append_operator] = ACTIONS(351),
    [anon_sym_BQUOTE] = ACTIONS(351),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_CR] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_file_descriptor] = ACTIONS(351),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_TILDE] = ACTIONS(355),
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
    [anon_sym_PIPE_DOT] = ACTIONS(355),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(357),
    [sym_html_append_operator] = ACTIONS(355),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
    [sym_file_descriptor] = ACTIONS(355),
  },
  [68] = {
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
  [69] = {
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
  [70] = {
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
  [71] = {
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
  [72] = {
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
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_PIPE_DOT] = ACTIONS(375),
    [anon_sym_] = ACTIONS(3),
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
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_TILDE] = ACTIONS(379),
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
    [anon_sym_RPAREN] = ACTIONS(379),
    [anon_sym_PIPE_DOT] = ACTIONS(379),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(379),
    [sym_html_redirect_operator] = ACTIONS(381),
    [sym_html_append_operator] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_CR] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(379),
    [sym_file_descriptor] = ACTIONS(379),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_TILDE] = ACTIONS(383),
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
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_PIPE_DOT] = ACTIONS(383),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(383),
    [sym_html_redirect_operator] = ACTIONS(385),
    [sym_html_append_operator] = ACTIONS(383),
    [anon_sym_BQUOTE] = ACTIONS(383),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_CR] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [sym_file_descriptor] = ACTIONS(383),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_TILDE] = ACTIONS(387),
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
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_PIPE_DOT] = ACTIONS(387),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_GT_GT] = ACTIONS(387),
    [sym_html_redirect_operator] = ACTIONS(389),
    [sym_html_append_operator] = ACTIONS(387),
    [anon_sym_BQUOTE] = ACTIONS(387),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_CR] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_file_descriptor] = ACTIONS(387),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(391),
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
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_PIPE_DOT] = ACTIONS(391),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(391),
    [sym_html_redirect_operator] = ACTIONS(393),
    [sym_html_append_operator] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(391),
    [anon_sym_CR] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [sym_file_descriptor] = ACTIONS(391),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(395),
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
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_PIPE_DOT] = ACTIONS(395),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(395),
    [sym_html_redirect_operator] = ACTIONS(397),
    [sym_html_append_operator] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(395),
    [anon_sym_CR] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
    [sym_file_descriptor] = ACTIONS(395),
  },
  [78] = {
    [sym_system_arg] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPEH] = ACTIONS(401),
    [anon_sym_PIPET] = ACTIONS(401),
    [anon_sym_AT_AT] = ACTIONS(401),
    [anon_sym_AT_ATdbt] = ACTIONS(401),
    [anon_sym_AT_ATdbta] = ACTIONS(401),
    [anon_sym_AT_ATdbtb] = ACTIONS(401),
    [anon_sym_AT_ATdbts] = ACTIONS(401),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(401),
    [anon_sym_AT_ATk] = ACTIONS(401),
    [anon_sym_AT_ATt] = ACTIONS(401),
    [anon_sym_AT_ATb] = ACTIONS(401),
    [anon_sym_AT_ATi] = ACTIONS(401),
    [anon_sym_AT_ATiS] = ACTIONS(401),
    [anon_sym_AT_ATf] = ACTIONS(401),
    [anon_sym_AT_ATs_COLON] = ACTIONS(401),
    [anon_sym_AT_ATc_COLON] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
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
    [anon_sym_PIPE_DOT] = ACTIONS(401),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [sym_html_redirect_operator] = ACTIONS(401),
    [sym_html_append_operator] = ACTIONS(401),
    [sym__any_command] = ACTIONS(403),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(401),
    [anon_sym_CR] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym_file_descriptor] = ACTIONS(399),
  },
  [79] = {
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
  [80] = {
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
  [81] = {
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
  [82] = {
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
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(135),
    [anon_sym_PIPEH] = ACTIONS(133),
    [anon_sym_PIPET] = ACTIONS(133),
    [anon_sym_AT_AT] = ACTIONS(135),
    [anon_sym_AT_ATdbt] = ACTIONS(135),
    [anon_sym_AT_ATdbta] = ACTIONS(133),
    [anon_sym_AT_ATdbtb] = ACTIONS(133),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT_AT_DOT] = ACTIONS(133),
    [anon_sym_AT_AT_EQ] = ACTIONS(133),
    [anon_sym_AT_ATk] = ACTIONS(133),
    [anon_sym_AT_ATt] = ACTIONS(133),
    [anon_sym_AT_ATb] = ACTIONS(133),
    [anon_sym_AT_ATi] = ACTIONS(135),
    [anon_sym_AT_ATiS] = ACTIONS(133),
    [anon_sym_AT_ATf] = ACTIONS(133),
    [anon_sym_AT_ATs_COLON] = ACTIONS(133),
    [anon_sym_AT_ATc_COLON] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(135),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(135),
    [anon_sym_GT_GT] = ACTIONS(133),
    [sym_html_redirect_operator] = ACTIONS(135),
    [sym_html_append_operator] = ACTIONS(133),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_CR] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(133),
  },
  [84] = {
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
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(172),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(174),
    [anon_sym_GT_GT] = ACTIONS(172),
    [sym_html_redirect_operator] = ACTIONS(174),
    [sym_html_append_operator] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_file_descriptor] = ACTIONS(172),
  },
  [86] = {
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
  [87] = {
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
  [88] = {
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
  [89] = {
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
  [90] = {
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
  [91] = {
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
  [92] = {
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
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_PIPEH] = ACTIONS(443),
    [anon_sym_PIPET] = ACTIONS(443),
    [anon_sym_AT_AT] = ACTIONS(443),
    [anon_sym_AT_ATdbt] = ACTIONS(443),
    [anon_sym_AT_ATdbta] = ACTIONS(443),
    [anon_sym_AT_ATdbtb] = ACTIONS(443),
    [anon_sym_AT_ATdbts] = ACTIONS(443),
    [anon_sym_AT_AT_DOT] = ACTIONS(443),
    [anon_sym_AT_AT_EQ] = ACTIONS(443),
    [anon_sym_AT_ATk] = ACTIONS(443),
    [anon_sym_AT_ATt] = ACTIONS(443),
    [anon_sym_AT_ATb] = ACTIONS(443),
    [anon_sym_AT_ATi] = ACTIONS(443),
    [anon_sym_AT_ATiS] = ACTIONS(443),
    [anon_sym_AT_ATf] = ACTIONS(443),
    [anon_sym_AT_ATs_COLON] = ACTIONS(443),
    [anon_sym_AT_ATc_COLON] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
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
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PIPE_DOT] = ACTIONS(443),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(443),
    [sym_html_redirect_operator] = ACTIONS(443),
    [sym_html_append_operator] = ACTIONS(443),
    [sym_macro_content] = ACTIONS(447),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(443),
    [anon_sym_CR] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
    [sym_file_descriptor] = ACTIONS(441),
  },
  [94] = {
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
  [95] = {
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
  [96] = {
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
  [97] = {
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
  [98] = {
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
  [99] = {
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
  [100] = {
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
  [101] = {
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
  [102] = {
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
  [103] = {
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
  [104] = {
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
  [105] = {
    [sym__eq_sep_args] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPEH] = ACTIONS(495),
    [anon_sym_PIPET] = ACTIONS(495),
    [anon_sym_AT_AT] = ACTIONS(495),
    [anon_sym_AT_ATdbt] = ACTIONS(495),
    [anon_sym_AT_ATdbta] = ACTIONS(495),
    [anon_sym_AT_ATdbtb] = ACTIONS(495),
    [anon_sym_AT_ATdbts] = ACTIONS(495),
    [anon_sym_AT_AT_DOT] = ACTIONS(495),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(495),
    [anon_sym_AT_ATt] = ACTIONS(495),
    [anon_sym_AT_ATb] = ACTIONS(495),
    [anon_sym_AT_ATi] = ACTIONS(495),
    [anon_sym_AT_ATiS] = ACTIONS(495),
    [anon_sym_AT_ATf] = ACTIONS(495),
    [anon_sym_AT_ATs_COLON] = ACTIONS(495),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(495),
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
    [anon_sym_PIPE_DOT] = ACTIONS(495),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_GT_GT] = ACTIONS(495),
    [sym_html_redirect_operator] = ACTIONS(495),
    [sym_html_append_operator] = ACTIONS(495),
    [sym_eq_sep_key] = ACTIONS(497),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(495),
    [anon_sym_CR] = ACTIONS(495),
    [anon_sym_SEMI] = ACTIONS(495),
    [sym_file_descriptor] = ACTIONS(493),
  },
  [106] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [107] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [108] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [109] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [110] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [111] = {
    [sym__redirect_operator] = STATE(166),
    [sym_fdn_redirect_operator] = STATE(166),
    [sym_fdn_append_operator] = STATE(166),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(519),
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
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
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
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(271),
    [sym_html_redirect_operator] = ACTIONS(273),
    [sym_html_append_operator] = ACTIONS(275),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(277),
  },
  [112] = {
    [sym__redirect_operator] = STATE(166),
    [sym_fdn_redirect_operator] = STATE(166),
    [sym_fdn_append_operator] = STATE(166),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_PIPE] = ACTIONS(523),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(527),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(269),
    [anon_sym_GT_GT] = ACTIONS(271),
    [sym_html_redirect_operator] = ACTIONS(273),
    [sym_html_append_operator] = ACTIONS(275),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(197),
    [sym_file_descriptor] = ACTIONS(277),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_TILDE] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(531),
    [anon_sym_PIPET] = ACTIONS(531),
    [anon_sym_AT_AT] = ACTIONS(531),
    [anon_sym_AT_ATdbt] = ACTIONS(531),
    [anon_sym_AT_ATdbta] = ACTIONS(531),
    [anon_sym_AT_ATdbtb] = ACTIONS(531),
    [anon_sym_AT_ATdbts] = ACTIONS(531),
    [anon_sym_AT_AT_DOT] = ACTIONS(531),
    [anon_sym_AT_AT_EQ] = ACTIONS(531),
    [anon_sym_AT_ATk] = ACTIONS(531),
    [anon_sym_AT_ATt] = ACTIONS(531),
    [anon_sym_AT_ATb] = ACTIONS(531),
    [anon_sym_AT_ATi] = ACTIONS(531),
    [anon_sym_AT_ATiS] = ACTIONS(531),
    [anon_sym_AT_ATf] = ACTIONS(531),
    [anon_sym_AT_ATs_COLON] = ACTIONS(531),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(531),
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
    [anon_sym_PIPE_DOT] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(531),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(531),
    [sym_eq_sep_key] = ACTIONS(531),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(531),
    [anon_sym_CR] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
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
  [115] = {
    [sym__eq_sep_args] = STATE(95),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPEH] = ACTIONS(495),
    [anon_sym_PIPET] = ACTIONS(495),
    [anon_sym_AT_AT] = ACTIONS(495),
    [anon_sym_AT_ATdbt] = ACTIONS(495),
    [anon_sym_AT_ATdbta] = ACTIONS(495),
    [anon_sym_AT_ATdbtb] = ACTIONS(495),
    [anon_sym_AT_ATdbts] = ACTIONS(495),
    [anon_sym_AT_AT_DOT] = ACTIONS(495),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(495),
    [anon_sym_AT_ATt] = ACTIONS(495),
    [anon_sym_AT_ATb] = ACTIONS(495),
    [anon_sym_AT_ATi] = ACTIONS(495),
    [anon_sym_AT_ATiS] = ACTIONS(495),
    [anon_sym_AT_ATf] = ACTIONS(495),
    [anon_sym_AT_ATs_COLON] = ACTIONS(495),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(495),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_GT_GT] = ACTIONS(495),
    [sym_html_redirect_operator] = ACTIONS(495),
    [sym_html_append_operator] = ACTIONS(495),
    [sym_eq_sep_key] = ACTIONS(497),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(495),
    [sym_file_descriptor] = ACTIONS(493),
  },
  [116] = {
    [sym_pipe_second_command] = STATE(109),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPEH] = ACTIONS(331),
    [anon_sym_PIPET] = ACTIONS(331),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(331),
    [sym_html_append_operator] = ACTIONS(331),
    [sym__any_command] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(331),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(329),
  },
  [117] = {
    [sym_system_arg] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPEH] = ACTIONS(401),
    [anon_sym_PIPET] = ACTIONS(401),
    [anon_sym_AT_AT] = ACTIONS(401),
    [anon_sym_AT_ATdbt] = ACTIONS(401),
    [anon_sym_AT_ATdbta] = ACTIONS(401),
    [anon_sym_AT_ATdbtb] = ACTIONS(401),
    [anon_sym_AT_ATdbts] = ACTIONS(401),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(401),
    [anon_sym_AT_ATk] = ACTIONS(401),
    [anon_sym_AT_ATt] = ACTIONS(401),
    [anon_sym_AT_ATb] = ACTIONS(401),
    [anon_sym_AT_ATi] = ACTIONS(401),
    [anon_sym_AT_ATiS] = ACTIONS(401),
    [anon_sym_AT_ATf] = ACTIONS(401),
    [anon_sym_AT_ATs_COLON] = ACTIONS(401),
    [anon_sym_AT_ATc_COLON] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [sym_html_redirect_operator] = ACTIONS(401),
    [sym_html_append_operator] = ACTIONS(401),
    [sym__any_command] = ACTIONS(403),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym_file_descriptor] = ACTIONS(399),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
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
  [119] = {
    [sym__eq_sep_args] = STATE(95),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_PIPEH] = ACTIONS(495),
    [anon_sym_PIPET] = ACTIONS(495),
    [anon_sym_AT_AT] = ACTIONS(495),
    [anon_sym_AT_ATdbt] = ACTIONS(495),
    [anon_sym_AT_ATdbta] = ACTIONS(495),
    [anon_sym_AT_ATdbtb] = ACTIONS(495),
    [anon_sym_AT_ATdbts] = ACTIONS(495),
    [anon_sym_AT_AT_DOT] = ACTIONS(495),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(495),
    [anon_sym_AT_ATt] = ACTIONS(495),
    [anon_sym_AT_ATb] = ACTIONS(495),
    [anon_sym_AT_ATi] = ACTIONS(495),
    [anon_sym_AT_ATiS] = ACTIONS(495),
    [anon_sym_AT_ATf] = ACTIONS(495),
    [anon_sym_AT_ATs_COLON] = ACTIONS(495),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(495),
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
    [anon_sym_PIPE_DOT] = ACTIONS(495),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_GT_GT] = ACTIONS(495),
    [sym_html_redirect_operator] = ACTIONS(495),
    [sym_html_append_operator] = ACTIONS(495),
    [sym_eq_sep_key] = ACTIONS(497),
    [anon_sym_BQUOTE] = ACTIONS(495),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(495),
    [sym_file_descriptor] = ACTIONS(493),
  },
  [120] = {
    [sym_pipe_second_command] = STATE(109),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_PIPEH] = ACTIONS(331),
    [anon_sym_PIPET] = ACTIONS(331),
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
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_PIPE_DOT] = ACTIONS(331),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(331),
    [sym_html_redirect_operator] = ACTIONS(331),
    [sym_html_append_operator] = ACTIONS(331),
    [sym__any_command] = ACTIONS(333),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(331),
    [sym_file_descriptor] = ACTIONS(329),
  },
  [121] = {
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_PIPEH] = ACTIONS(443),
    [anon_sym_PIPET] = ACTIONS(443),
    [anon_sym_AT_AT] = ACTIONS(443),
    [anon_sym_AT_ATdbt] = ACTIONS(443),
    [anon_sym_AT_ATdbta] = ACTIONS(443),
    [anon_sym_AT_ATdbtb] = ACTIONS(443),
    [anon_sym_AT_ATdbts] = ACTIONS(443),
    [anon_sym_AT_AT_DOT] = ACTIONS(443),
    [anon_sym_AT_AT_EQ] = ACTIONS(443),
    [anon_sym_AT_ATk] = ACTIONS(443),
    [anon_sym_AT_ATt] = ACTIONS(443),
    [anon_sym_AT_ATb] = ACTIONS(443),
    [anon_sym_AT_ATi] = ACTIONS(443),
    [anon_sym_AT_ATiS] = ACTIONS(443),
    [anon_sym_AT_ATf] = ACTIONS(443),
    [anon_sym_AT_ATs_COLON] = ACTIONS(443),
    [anon_sym_AT_ATc_COLON] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
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
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_PIPE_DOT] = ACTIONS(443),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(443),
    [sym_html_redirect_operator] = ACTIONS(443),
    [sym_html_append_operator] = ACTIONS(443),
    [sym_macro_content] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(443),
    [sym_file_descriptor] = ACTIONS(441),
  },
  [122] = {
    [sym_system_arg] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_PIPE] = ACTIONS(401),
    [anon_sym_PIPEH] = ACTIONS(401),
    [anon_sym_PIPET] = ACTIONS(401),
    [anon_sym_AT_AT] = ACTIONS(401),
    [anon_sym_AT_ATdbt] = ACTIONS(401),
    [anon_sym_AT_ATdbta] = ACTIONS(401),
    [anon_sym_AT_ATdbtb] = ACTIONS(401),
    [anon_sym_AT_ATdbts] = ACTIONS(401),
    [anon_sym_AT_AT_DOT] = ACTIONS(401),
    [anon_sym_AT_AT_EQ] = ACTIONS(401),
    [anon_sym_AT_ATk] = ACTIONS(401),
    [anon_sym_AT_ATt] = ACTIONS(401),
    [anon_sym_AT_ATb] = ACTIONS(401),
    [anon_sym_AT_ATi] = ACTIONS(401),
    [anon_sym_AT_ATiS] = ACTIONS(401),
    [anon_sym_AT_ATf] = ACTIONS(401),
    [anon_sym_AT_ATs_COLON] = ACTIONS(401),
    [anon_sym_AT_ATc_COLON] = ACTIONS(401),
    [anon_sym_AT] = ACTIONS(401),
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
    [anon_sym_PIPE_DOT] = ACTIONS(401),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(401),
    [sym_html_redirect_operator] = ACTIONS(401),
    [sym_html_append_operator] = ACTIONS(401),
    [sym__any_command] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(401),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(401),
    [sym_file_descriptor] = ACTIONS(399),
  },
  [123] = {
    [anon_sym_TILDE] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(531),
    [anon_sym_PIPET] = ACTIONS(531),
    [anon_sym_AT_AT] = ACTIONS(531),
    [anon_sym_AT_ATdbt] = ACTIONS(531),
    [anon_sym_AT_ATdbta] = ACTIONS(531),
    [anon_sym_AT_ATdbtb] = ACTIONS(531),
    [anon_sym_AT_ATdbts] = ACTIONS(531),
    [anon_sym_AT_AT_DOT] = ACTIONS(531),
    [anon_sym_AT_AT_EQ] = ACTIONS(531),
    [anon_sym_AT_ATk] = ACTIONS(531),
    [anon_sym_AT_ATt] = ACTIONS(531),
    [anon_sym_AT_ATb] = ACTIONS(531),
    [anon_sym_AT_ATi] = ACTIONS(531),
    [anon_sym_AT_ATiS] = ACTIONS(531),
    [anon_sym_AT_ATf] = ACTIONS(531),
    [anon_sym_AT_ATs_COLON] = ACTIONS(531),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(531),
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
    [anon_sym_PIPE_DOT] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(531),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(531),
    [sym_eq_sep_key] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(531),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [124] = {
    [anon_sym_TILDE] = ACTIONS(443),
    [anon_sym_PIPE] = ACTIONS(443),
    [anon_sym_PIPEH] = ACTIONS(443),
    [anon_sym_PIPET] = ACTIONS(443),
    [anon_sym_AT_AT] = ACTIONS(443),
    [anon_sym_AT_ATdbt] = ACTIONS(443),
    [anon_sym_AT_ATdbta] = ACTIONS(443),
    [anon_sym_AT_ATdbtb] = ACTIONS(443),
    [anon_sym_AT_ATdbts] = ACTIONS(443),
    [anon_sym_AT_AT_DOT] = ACTIONS(443),
    [anon_sym_AT_AT_EQ] = ACTIONS(443),
    [anon_sym_AT_ATk] = ACTIONS(443),
    [anon_sym_AT_ATt] = ACTIONS(443),
    [anon_sym_AT_ATb] = ACTIONS(443),
    [anon_sym_AT_ATi] = ACTIONS(443),
    [anon_sym_AT_ATiS] = ACTIONS(443),
    [anon_sym_AT_ATf] = ACTIONS(443),
    [anon_sym_AT_ATs_COLON] = ACTIONS(443),
    [anon_sym_AT_ATc_COLON] = ACTIONS(443),
    [anon_sym_AT] = ACTIONS(443),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(443),
    [anon_sym_GT_GT] = ACTIONS(443),
    [sym_html_redirect_operator] = ACTIONS(443),
    [sym_html_append_operator] = ACTIONS(443),
    [sym_macro_content] = ACTIONS(541),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(443),
    [sym_file_descriptor] = ACTIONS(441),
  },
  [125] = {
    [anon_sym_TILDE] = ACTIONS(531),
    [anon_sym_PIPE] = ACTIONS(531),
    [anon_sym_PIPEH] = ACTIONS(531),
    [anon_sym_PIPET] = ACTIONS(531),
    [anon_sym_AT_AT] = ACTIONS(531),
    [anon_sym_AT_ATdbt] = ACTIONS(531),
    [anon_sym_AT_ATdbta] = ACTIONS(531),
    [anon_sym_AT_ATdbtb] = ACTIONS(531),
    [anon_sym_AT_ATdbts] = ACTIONS(531),
    [anon_sym_AT_AT_DOT] = ACTIONS(531),
    [anon_sym_AT_AT_EQ] = ACTIONS(531),
    [anon_sym_AT_ATk] = ACTIONS(531),
    [anon_sym_AT_ATt] = ACTIONS(531),
    [anon_sym_AT_ATb] = ACTIONS(531),
    [anon_sym_AT_ATi] = ACTIONS(531),
    [anon_sym_AT_ATiS] = ACTIONS(531),
    [anon_sym_AT_ATf] = ACTIONS(531),
    [anon_sym_AT_ATs_COLON] = ACTIONS(531),
    [anon_sym_AT_ATc_COLON] = ACTIONS(531),
    [anon_sym_AT] = ACTIONS(531),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_GT_GT] = ACTIONS(531),
    [sym_html_redirect_operator] = ACTIONS(531),
    [sym_html_append_operator] = ACTIONS(531),
    [sym_eq_sep_key] = ACTIONS(531),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_file_descriptor] = ACTIONS(529),
  },
  [126] = {
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
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(315),
    [sym_file_descriptor] = ACTIONS(315),
  },
  [127] = {
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
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
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
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
    [anon_sym_RPAREN] = ACTIONS(537),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(539),
    [anon_sym_GT_GT] = ACTIONS(537),
    [sym_html_redirect_operator] = ACTIONS(539),
    [sym_html_append_operator] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(537),
    [sym_file_descriptor] = ACTIONS(537),
  },
  [128] = {
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(527),
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
  [129] = {
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
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
    [anon_sym_AT_ATc_COLON] = ACTIONS(521),
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
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_PIPE_DOT] = ACTIONS(267),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_GT_GT] = ACTIONS(533),
    [sym_html_redirect_operator] = ACTIONS(535),
    [sym_html_append_operator] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(533),
    [sym_file_descriptor] = ACTIONS(533),
  },
  [130] = {
    [anon_sym_TILDE] = ACTIONS(537),
    [anon_sym_PIPE] = ACTIONS(539),
    [anon_sym_PIPEH] = ACTIONS(203),
    [anon_sym_PIPET] = ACTIONS(205),
    [anon_sym_AT_AT] = ACTIONS(207),
    [anon_sym_AT_ATdbt] = ACTIONS(209),
    [anon_sym_AT_ATdbta] = ACTIONS(211),
    [anon_sym_AT_ATdbtb] = ACTIONS(213),
    [anon_sym_AT_ATdbts] = ACTIONS(215),
    [anon_sym_AT_AT_DOT] = ACTIONS(217),
    [anon_sym_AT_AT_EQ] = ACTIONS(525),
    [anon_sym_AT_ATk] = ACTIONS(221),
    [anon_sym_AT_ATt] = ACTIONS(223),
    [anon_sym_AT_ATb] = ACTIONS(225),
    [anon_sym_AT_ATi] = ACTIONS(227),
    [anon_sym_AT_ATiS] = ACTIONS(229),
    [anon_sym_AT_ATf] = ACTIONS(231),
    [anon_sym_AT_ATs_COLON] = ACTIONS(233),
    [anon_sym_AT_ATc_COLON] = ACTIONS(527),
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
  [131] = {
    [aux_sym_commands_repeat1] = STATE(131),
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [sym_interpreter_command] = ACTIONS(545),
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
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(547),
    [anon_sym_CR] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(547),
    [sym_cmd_identifier] = ACTIONS(543),
    [sym__help_command] = ACTIONS(543),
    [sym_repeat_number] = ACTIONS(543),
  },
  [132] = {
    [aux_sym__commands_singleline_repeat1] = STATE(132),
    [anon_sym_DQUOTE] = ACTIONS(550),
    [sym_interpreter_command] = ACTIONS(552),
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
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(554),
    [sym_cmd_identifier] = ACTIONS(550),
    [sym__help_command] = ACTIONS(550),
    [sym_repeat_number] = ACTIONS(550),
  },
  [133] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(559),
    [anon_sym_CR] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [134] = {
    [sym_arg] = STATE(136),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(559),
    [anon_sym_CR] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [135] = {
    [sym_arg] = STATE(135),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(574),
    [aux_sym_arg_identifier_token2] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(577),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(580),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(142),
    [anon_sym_CR] = ACTIONS(142),
    [anon_sym_SEMI] = ACTIONS(142),
  },
  [136] = {
    [sym_arg] = STATE(135),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(135),
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(588),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(588),
    [anon_sym_CR] = ACTIONS(588),
    [anon_sym_SEMI] = ACTIONS(588),
  },
  [137] = {
    [sym_arg] = STATE(135),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(135),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(588),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(588),
  },
  [138] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(559),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [139] = {
    [sym_arg] = STATE(137),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(137),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(559),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(559),
  },
  [140] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
  },
  [141] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(170),
    [aux_sym_arg_identifier_token2] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_CR] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_DQUOTE] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(174),
    [aux_sym_arg_identifier_token2] = ACTIONS(174),
    [anon_sym_SQUOTE] = ACTIONS(174),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
  },
  [144] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(36),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
  },
  [145] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(162),
    [aux_sym_arg_identifier_token2] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [147] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
  },
  [148] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(113),
    [aux_sym_arg_identifier_token2] = ACTIONS(113),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [sym__comment] = ACTIONS(5),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_DQUOTE] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(166),
    [aux_sym_arg_identifier_token2] = ACTIONS(166),
    [anon_sym_SQUOTE] = ACTIONS(166),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(162),
    [aux_sym_arg_identifier_token2] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [151] = {
    [sym_arg] = STATE(79),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [152] = {
    [sym_arg] = STATE(68),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [153] = {
    [sym_arg] = STATE(97),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [154] = {
    [sym_arg] = STATE(110),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [155] = {
    [sym_arg] = STATE(82),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [156] = {
    [sym_arg] = STATE(103),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [157] = {
    [sym_arg] = STATE(88),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [158] = {
    [sym_arg] = STATE(169),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [sym__comment] = ACTIONS(5),
  },
  [159] = {
    [sym_arg] = STATE(102),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [160] = {
    [sym_arg] = STATE(101),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [161] = {
    [sym_arg] = STATE(168),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [sym__comment] = ACTIONS(5),
  },
  [162] = {
    [sym_arg] = STATE(53),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [163] = {
    [sym_arg] = STATE(99),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [164] = {
    [sym_arg] = STATE(98),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [165] = {
    [sym_arg] = STATE(89),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [166] = {
    [sym_arg] = STATE(184),
    [sym_arg_identifier] = STATE(180),
    [sym_quoted_arg] = STATE(180),
    [sym_cmd_substitution_arg] = STATE(180),
    [anon_sym_DQUOTE] = ACTIONS(600),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(602),
    [aux_sym_arg_identifier_token2] = ACTIONS(602),
    [anon_sym_SQUOTE] = ACTIONS(604),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(606),
    [anon_sym_BQUOTE] = ACTIONS(608),
    [sym__comment] = ACTIONS(5),
  },
  [167] = {
    [sym_arg] = STATE(90),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [168] = {
    [sym_arg] = STATE(60),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [169] = {
    [sym_arg] = STATE(151),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(561),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(563),
    [aux_sym_arg_identifier_token2] = ACTIONS(563),
    [anon_sym_SQUOTE] = ACTIONS(565),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(567),
    [anon_sym_BQUOTE] = ACTIONS(569),
    [sym__comment] = ACTIONS(5),
  },
  [170] = {
    [sym_arg] = STATE(96),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [171] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [172] = {
    [sym_arg] = STATE(87),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [173] = {
    [sym_arg] = STATE(94),
    [sym_arg_identifier] = STATE(85),
    [sym_quoted_arg] = STATE(85),
    [sym_cmd_substitution_arg] = STATE(85),
    [anon_sym_DQUOTE] = ACTIONS(590),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(592),
    [aux_sym_arg_identifier_token2] = ACTIONS(592),
    [anon_sym_SQUOTE] = ACTIONS(594),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(596),
    [anon_sym_BQUOTE] = ACTIONS(598),
    [sym__comment] = ACTIONS(5),
  },
  [174] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(610),
    [anon_sym_] = ACTIONS(612),
    [aux_sym_arg_identifier_token1] = ACTIONS(610),
    [aux_sym_arg_identifier_token2] = ACTIONS(610),
    [anon_sym_SQUOTE] = ACTIONS(610),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(610),
    [anon_sym_BQUOTE] = ACTIONS(610),
    [sym__comment] = ACTIONS(5),
  },
  [175] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(174),
    [anon_sym_DQUOTE] = ACTIONS(615),
    [anon_sym_] = ACTIONS(617),
    [aux_sym_arg_identifier_token1] = ACTIONS(615),
    [aux_sym_arg_identifier_token2] = ACTIONS(615),
    [anon_sym_SQUOTE] = ACTIONS(615),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(615),
    [anon_sym_BQUOTE] = ACTIONS(615),
    [sym__comment] = ACTIONS(5),
  },
  [176] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(175),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [anon_sym_] = ACTIONS(621),
    [aux_sym_arg_identifier_token1] = ACTIONS(619),
    [aux_sym_arg_identifier_token2] = ACTIONS(619),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(619),
    [anon_sym_BQUOTE] = ACTIONS(619),
    [sym__comment] = ACTIONS(5),
  },
  [177] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(623),
    [anon_sym_RPAREN] = ACTIONS(623),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(623),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(623),
    [anon_sym_CR] = ACTIONS(623),
    [anon_sym_SEMI] = ACTIONS(623),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [182] = {
    [anon_sym_DQUOTE] = ACTIONS(625),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(625),
    [aux_sym_arg_identifier_token2] = ACTIONS(625),
    [anon_sym_SQUOTE] = ACTIONS(625),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(625),
    [anon_sym_BQUOTE] = ACTIONS(625),
    [sym__comment] = ACTIONS(5),
  },
  [183] = {
    [anon_sym_DQUOTE] = ACTIONS(627),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(627),
    [aux_sym_arg_identifier_token2] = ACTIONS(627),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(627),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [sym__comment] = ACTIONS(5),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(629),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(629),
    [anon_sym_CR] = ACTIONS(629),
    [anon_sym_SEMI] = ACTIONS(629),
  },
  [185] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [186] = {
    [anon_sym_DQUOTE] = ACTIONS(631),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(631),
    [aux_sym_arg_identifier_token2] = ACTIONS(631),
    [anon_sym_SQUOTE] = ACTIONS(631),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(631),
    [anon_sym_BQUOTE] = ACTIONS(631),
    [sym__comment] = ACTIONS(5),
  },
  [187] = {
    [anon_sym_DQUOTE] = ACTIONS(633),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(633),
    [aux_sym_arg_identifier_token2] = ACTIONS(633),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(633),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [sym__comment] = ACTIONS(5),
  },
  [188] = {
    [aux_sym_commands_repeat2] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(635),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(637),
    [anon_sym_CR] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(637),
  },
  [189] = {
    [aux_sym_commands_repeat2] = STATE(190),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_CR] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(640),
  },
  [190] = {
    [aux_sym_commands_repeat2] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_CR] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(640),
  },
  [191] = {
    [aux_sym_commands_repeat2] = STATE(192),
    [ts_builtin_sym_end] = ACTIONS(642),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_CR] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(640),
  },
  [192] = {
    [aux_sym_commands_repeat2] = STATE(188),
    [ts_builtin_sym_end] = ACTIONS(644),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(640),
    [anon_sym_CR] = ACTIONS(640),
    [anon_sym_SEMI] = ACTIONS(640),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(635),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(635),
    [anon_sym_CR] = ACTIONS(635),
    [anon_sym_SEMI] = ACTIONS(635),
  },
  [194] = {
    [aux_sym__commands_singleline_repeat2] = STATE(199),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(648),
  },
  [195] = {
    [aux_sym__commands_singleline_repeat2] = STATE(204),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(652),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(654),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(654),
  },
  [197] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(652),
  },
  [198] = {
    [aux_sym__commands_singleline_repeat2] = STATE(204),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(652),
  },
  [199] = {
    [aux_sym__commands_singleline_repeat2] = STATE(199),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(656),
  },
  [200] = {
    [aux_sym__commands_singleline_repeat2] = STATE(199),
    [anon_sym_RPAREN] = ACTIONS(650),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(648),
  },
  [201] = {
    [aux_sym__commands_singleline_repeat2] = STATE(198),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(659),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(652),
  },
  [202] = {
    [aux_sym__commands_singleline_repeat2] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(648),
  },
  [203] = {
    [aux_sym__commands_singleline_repeat2] = STATE(200),
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(648),
  },
  [204] = {
    [aux_sym__commands_singleline_repeat2] = STATE(204),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(654),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(661),
  },
  [205] = {
    [sym_interpret_arg] = STATE(83),
    [anon_sym_] = ACTIONS(5),
    [sym__any_command] = ACTIONS(664),
    [sym__comment] = ACTIONS(5),
  },
  [206] = {
    [sym__eq_sep_args] = STATE(56),
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_key] = ACTIONS(497),
    [sym__comment] = ACTIONS(5),
  },
  [207] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(666),
    [anon_sym_GT_GT] = ACTIONS(668),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(670),
    [anon_sym_] = ACTIONS(5),
    [sym_macro_call_content] = ACTIONS(672),
    [sym__comment] = ACTIONS(5),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_] = ACTIONS(5),
    [sym_macro_call_content] = ACTIONS(676),
    [sym__comment] = ACTIONS(5),
  },
  [210] = {
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_val] = ACTIONS(682),
    [sym__comment] = ACTIONS(5),
  },
  [213] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(684),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [214] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(686),
    [sym__comment] = ACTIONS(5),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(688),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_DQUOTE] = ACTIONS(690),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [anon_sym_RPAREN] = ACTIONS(692),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(694),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [sym__comment] = ACTIONS(3),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(696),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [221] = {
    [anon_sym_DQUOTE] = ACTIONS(698),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(700),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(702),
    [sym__comment] = ACTIONS(5),
  },
  [224] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(704),
    [sym__comment] = ACTIONS(5),
  },
  [225] = {
    [anon_sym_DQUOTE] = ACTIONS(706),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(706),
    [sym__comment] = ACTIONS(3),
  },
  [227] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(708),
    [sym__comment] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(710),
    [sym__comment] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_DQUOTE] = ACTIONS(712),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(712),
    [sym__comment] = ACTIONS(3),
  },
  [231] = {
    [anon_sym_RPAREN] = ACTIONS(714),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [232] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(716),
    [sym__comment] = ACTIONS(3),
  },
  [233] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(718),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [234] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(720),
    [sym__comment] = ACTIONS(5),
  },
  [235] = {
    [sym_grep_specifier] = ACTIONS(722),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(724),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(726),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [238] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(728),
    [sym__comment] = ACTIONS(5),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(730),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [240] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(732),
    [sym__comment] = ACTIONS(5),
  },
  [241] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(734),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(736),
    [sym__comment] = ACTIONS(5),
  },
  [243] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(698),
    [sym__comment] = ACTIONS(3),
  },
  [244] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(738),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(244),
  [11] = {.count = 1, .reusable = false}, SHIFT(189),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(205),
  [17] = {.count = 1, .reusable = true}, SHIFT(240),
  [19] = {.count = 1, .reusable = true}, SHIFT(176),
  [21] = {.count = 1, .reusable = true}, SHIFT(113),
  [23] = {.count = 1, .reusable = false}, SHIFT(59),
  [25] = {.count = 1, .reusable = false}, SHIFT(43),
  [27] = {.count = 1, .reusable = true}, SHIFT(43),
  [29] = {.count = 1, .reusable = true}, SHIFT(78),
  [31] = {.count = 1, .reusable = true}, SHIFT(133),
  [33] = {.count = 1, .reusable = true}, SHIFT(206),
  [35] = {.count = 1, .reusable = true}, SHIFT(93),
  [37] = {.count = 1, .reusable = true}, SHIFT(5),
  [39] = {.count = 1, .reusable = true}, SHIFT(27),
  [41] = {.count = 1, .reusable = true}, SHIFT(134),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [49] = {.count = 1, .reusable = true}, SHIFT(140),
  [51] = {.count = 1, .reusable = false}, SHIFT(3),
  [53] = {.count = 1, .reusable = true}, SHIFT(125),
  [55] = {.count = 1, .reusable = true}, SHIFT(117),
  [57] = {.count = 1, .reusable = true}, SHIFT(124),
  [59] = {.count = 1, .reusable = true}, SHIFT(23),
  [61] = {.count = 1, .reusable = false}, SHIFT(4),
  [63] = {.count = 1, .reusable = true}, SHIFT(123),
  [65] = {.count = 1, .reusable = true}, SHIFT(122),
  [67] = {.count = 1, .reusable = true}, SHIFT(145),
  [69] = {.count = 1, .reusable = true}, SHIFT(121),
  [71] = {.count = 1, .reusable = true}, SHIFT(33),
  [73] = {.count = 1, .reusable = true}, SHIFT(20),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(191),
  [79] = {.count = 1, .reusable = true}, SHIFT(131),
  [81] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [83] = {.count = 1, .reusable = false}, SHIFT(193),
  [85] = {.count = 1, .reusable = false}, SHIFT(201),
  [87] = {.count = 1, .reusable = true}, SHIFT(138),
  [89] = {.count = 1, .reusable = true}, SHIFT(18),
  [91] = {.count = 1, .reusable = true}, SHIFT(139),
  [93] = {.count = 1, .reusable = false}, SHIFT(202),
  [95] = {.count = 1, .reusable = true}, SHIFT(15),
  [97] = {.count = 1, .reusable = false}, SHIFT(203),
  [99] = {.count = 1, .reusable = true}, SHIFT(132),
  [101] = {.count = 1, .reusable = false}, SHIFT(196),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(197),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [109] = {.count = 1, .reusable = false}, SHIFT(213),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [113] = {.count = 1, .reusable = false}, SHIFT(39),
  [115] = {.count = 1, .reusable = false}, SHIFT(214),
  [117] = {.count = 1, .reusable = false}, SHIFT(14),
  [119] = {.count = 1, .reusable = false}, SHIFT(13),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(213),
  [142] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(39),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(214),
  [150] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(14),
  [153] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(13),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [180] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [182] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(223),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [191] = {.count = 1, .reusable = true}, SHIFT(223),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [199] = {.count = 1, .reusable = true}, SHIFT(235),
  [201] = {.count = 1, .reusable = false}, SHIFT(61),
  [203] = {.count = 1, .reusable = true}, SHIFT(62),
  [205] = {.count = 1, .reusable = true}, SHIFT(63),
  [207] = {.count = 1, .reusable = false}, SHIFT(154),
  [209] = {.count = 1, .reusable = false}, SHIFT(65),
  [211] = {.count = 1, .reusable = true}, SHIFT(65),
  [213] = {.count = 1, .reusable = true}, SHIFT(66),
  [215] = {.count = 1, .reusable = true}, SHIFT(67),
  [217] = {.count = 1, .reusable = true}, SHIFT(155),
  [219] = {.count = 1, .reusable = true}, SHIFT(147),
  [221] = {.count = 1, .reusable = true}, SHIFT(156),
  [223] = {.count = 1, .reusable = true}, SHIFT(71),
  [225] = {.count = 1, .reusable = true}, SHIFT(72),
  [227] = {.count = 1, .reusable = false}, SHIFT(73),
  [229] = {.count = 1, .reusable = true}, SHIFT(74),
  [231] = {.count = 1, .reusable = true}, SHIFT(51),
  [233] = {.count = 1, .reusable = true}, SHIFT(158),
  [235] = {.count = 1, .reusable = true}, SHIFT(24),
  [237] = {.count = 1, .reusable = false}, SHIFT(159),
  [239] = {.count = 1, .reusable = true}, SHIFT(160),
  [241] = {.count = 1, .reusable = true}, SHIFT(161),
  [243] = {.count = 1, .reusable = true}, SHIFT(162),
  [245] = {.count = 1, .reusable = true}, SHIFT(163),
  [247] = {.count = 1, .reusable = true}, SHIFT(164),
  [249] = {.count = 1, .reusable = true}, SHIFT(224),
  [251] = {.count = 1, .reusable = true}, SHIFT(153),
  [253] = {.count = 1, .reusable = true}, SHIFT(170),
  [255] = {.count = 1, .reusable = true}, SHIFT(173),
  [257] = {.count = 1, .reusable = true}, SHIFT(171),
  [259] = {.count = 1, .reusable = true}, SHIFT(167),
  [261] = {.count = 1, .reusable = true}, SHIFT(165),
  [263] = {.count = 1, .reusable = true}, SHIFT(157),
  [265] = {.count = 1, .reusable = true}, SHIFT(172),
  [267] = {.count = 1, .reusable = true}, SHIFT(91),
  [269] = {.count = 1, .reusable = false}, SHIFT(187),
  [271] = {.count = 1, .reusable = true}, SHIFT(186),
  [273] = {.count = 1, .reusable = false}, SHIFT(166),
  [275] = {.count = 1, .reusable = true}, SHIFT(166),
  [277] = {.count = 1, .reusable = true}, SHIFT(207),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [281] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [283] = {.count = 1, .reusable = true}, SHIFT(212),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 1),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 1),
  [289] = {.count = 1, .reusable = true}, SHIFT(208),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [295] = {.count = 1, .reusable = true}, SHIFT(152),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [299] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [301] = {.count = 1, .reusable = true}, SHIFT(209),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 2, .production_id = 3),
  [319] = {.count = 1, .reusable = true}, SHIFT(52),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [333] = {.count = 1, .reusable = false}, SHIFT(108),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 4, .production_id = 1),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 4, .production_id = 1),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 1),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 1),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [403] = {.count = 1, .reusable = false}, SHIFT(64),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [445] = {.count = 1, .reusable = false}, SHIFT(50),
  [447] = {.count = 1, .reusable = false}, SHIFT(57),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [497] = {.count = 1, .reusable = false}, SHIFT(49),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1, .production_id = 1),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1, .production_id = 1),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [517] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [519] = {.count = 1, .reusable = false}, SHIFT(120),
  [521] = {.count = 1, .reusable = true}, SHIFT(21),
  [523] = {.count = 1, .reusable = false}, SHIFT(116),
  [525] = {.count = 1, .reusable = true}, SHIFT(148),
  [527] = {.count = 1, .reusable = true}, SHIFT(19),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [531] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [539] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [541] = {.count = 1, .reusable = false}, SHIFT(126),
  [543] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [545] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [547] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(131),
  [550] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [552] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(132),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [561] = {.count = 1, .reusable = false}, SHIFT(233),
  [563] = {.count = 1, .reusable = false}, SHIFT(149),
  [565] = {.count = 1, .reusable = false}, SHIFT(234),
  [567] = {.count = 1, .reusable = false}, SHIFT(12),
  [569] = {.count = 1, .reusable = false}, SHIFT(11),
  [571] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(233),
  [574] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(149),
  [577] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(234),
  [580] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(12),
  [583] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(11),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [590] = {.count = 1, .reusable = false}, SHIFT(237),
  [592] = {.count = 1, .reusable = false}, SHIFT(86),
  [594] = {.count = 1, .reusable = false}, SHIFT(238),
  [596] = {.count = 1, .reusable = false}, SHIFT(10),
  [598] = {.count = 1, .reusable = false}, SHIFT(9),
  [600] = {.count = 1, .reusable = false}, SHIFT(241),
  [602] = {.count = 1, .reusable = false}, SHIFT(181),
  [604] = {.count = 1, .reusable = false}, SHIFT(242),
  [606] = {.count = 1, .reusable = false}, SHIFT(8),
  [608] = {.count = 1, .reusable = false}, SHIFT(7),
  [610] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2),
  [612] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2), SHIFT_REPEAT(174),
  [615] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 2),
  [617] = {.count = 1, .reusable = false}, SHIFT(174),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [621] = {.count = 1, .reusable = false}, SHIFT(175),
  [623] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 6),
  [625] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 7),
  [631] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [633] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [635] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [637] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [640] = {.count = 1, .reusable = true}, SHIFT(6),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [648] = {.count = 1, .reusable = true}, SHIFT(16),
  [650] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [652] = {.count = 1, .reusable = true}, SHIFT(17),
  [654] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(16),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [661] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(17),
  [664] = {.count = 1, .reusable = false}, SHIFT(76),
  [666] = {.count = 1, .reusable = false}, SHIFT(182),
  [668] = {.count = 1, .reusable = true}, SHIFT(183),
  [670] = {.count = 1, .reusable = false}, SHIFT(70),
  [672] = {.count = 1, .reusable = false}, SHIFT(217),
  [674] = {.count = 1, .reusable = false}, SHIFT(69),
  [676] = {.count = 1, .reusable = false}, SHIFT(218),
  [678] = {.count = 1, .reusable = true}, SHIFT(142),
  [680] = {.count = 1, .reusable = true}, SHIFT(81),
  [682] = {.count = 1, .reusable = false}, SHIFT(75),
  [684] = {.count = 1, .reusable = false}, SHIFT(221),
  [686] = {.count = 1, .reusable = false}, SHIFT(243),
  [688] = {.count = 1, .reusable = true}, SHIFT(104),
  [690] = {.count = 1, .reusable = true}, SHIFT(178),
  [692] = {.count = 1, .reusable = true}, SHIFT(77),
  [694] = {.count = 1, .reusable = true}, SHIFT(84),
  [696] = {.count = 1, .reusable = true}, SHIFT(150),
  [698] = {.count = 1, .reusable = true}, SHIFT(41),
  [700] = {.count = 1, .reusable = true}, SHIFT(146),
  [702] = {.count = 1, .reusable = false}, SHIFT(47),
  [704] = {.count = 1, .reusable = false}, SHIFT(46),
  [706] = {.count = 1, .reusable = true}, SHIFT(54),
  [708] = {.count = 1, .reusable = true}, SHIFT(38),
  [710] = {.count = 1, .reusable = true}, SHIFT(80),
  [712] = {.count = 1, .reusable = true}, SHIFT(179),
  [714] = {.count = 1, .reusable = true}, SHIFT(177),
  [716] = {.count = 1, .reusable = true}, SHIFT(185),
  [718] = {.count = 1, .reusable = false}, SHIFT(210),
  [720] = {.count = 1, .reusable = false}, SHIFT(219),
  [722] = {.count = 1, .reusable = false}, SHIFT(107),
  [724] = {.count = 1, .reusable = true}, SHIFT(40),
  [726] = {.count = 1, .reusable = false}, SHIFT(225),
  [728] = {.count = 1, .reusable = false}, SHIFT(226),
  [730] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [732] = {.count = 1, .reusable = false}, SHIFT(215),
  [734] = {.count = 1, .reusable = false}, SHIFT(229),
  [736] = {.count = 1, .reusable = false}, SHIFT(230),
  [738] = {.count = 1, .reusable = false}, SHIFT(216),
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
