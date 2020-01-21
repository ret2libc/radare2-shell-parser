#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 238
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
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
  anon_sym_LPAREN_STAR = 43,
  anon_sym_DOT = 44,
  anon_sym_DOT_BANG = 45,
  anon_sym_DOT_LPAREN = 46,
  anon_sym_PIPE_DOT = 47,
  anon_sym_DOT_SLASH = 48,
  anon_sym_ = 49,
  anon_sym_PERCENT = 50,
  anon_sym_env = 51,
  anon_sym_DOT_DOT_DOT = 52,
  aux_sym__interpret_identifier_token1 = 53,
  aux_sym__interpret_identifier_token2 = 54,
  sym_system_identifier = 55,
  sym_question_mark_identifier = 56,
  sym_pointer_identifier = 57,
  anon_sym_EQ = 58,
  sym_macro_identifier = 59,
  sym_macro_call_content = 60,
  anon_sym_GT = 61,
  anon_sym_GT_GT = 62,
  sym_html_redirect_operator = 63,
  sym_html_append_operator = 64,
  sym_tmp_eval_arg = 65,
  sym_eq_sep_key = 66,
  sym_eq_sep_val = 67,
  sym_macro_content = 68,
  sym__any_command = 69,
  aux_sym_arg_identifier_token1 = 70,
  aux_sym_arg_identifier_token2 = 71,
  anon_sym_SQUOTE = 72,
  aux_sym_quoted_arg_token1 = 73,
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
  sym_commands = 84,
  sym__commands_singleline = 85,
  sym__command = 86,
  sym_legacy_quoted_command = 87,
  sym__simple_command = 88,
  sym__tmp_command = 89,
  sym__iter_command = 90,
  sym__pipe_command = 91,
  sym_grep_command = 92,
  sym_html_disable_command = 93,
  sym_html_enable_command = 94,
  sym_scr_tts_command = 95,
  sym_pipe_command = 96,
  sym_pipe_second_command = 97,
  sym_iter_flags_command = 98,
  sym_iter_dbta_command = 99,
  sym_iter_dbtb_command = 100,
  sym_iter_dbts_command = 101,
  sym_iter_file_lines_command = 102,
  sym_iter_offsets_command = 103,
  sym_iter_sdbquery_command = 104,
  sym_iter_threads_command = 105,
  sym_iter_bbs_command = 106,
  sym_iter_instrs_command = 107,
  sym_iter_sections_command = 108,
  sym_iter_functions_command = 109,
  sym_iter_step_command = 110,
  sym_iter_interpret_command = 111,
  sym_tmp_seek_command = 112,
  sym_tmp_blksz_command = 113,
  sym_tmp_fromto_command = 114,
  sym_tmp_arch_command = 115,
  sym_tmp_bits_command = 116,
  sym_tmp_nthi_command = 117,
  sym_tmp_eval_command = 118,
  sym_tmp_fs_command = 119,
  sym_tmp_reli_command = 120,
  sym_tmp_kuery_command = 121,
  sym_tmp_fd_command = 122,
  sym_tmp_reg_command = 123,
  sym_tmp_file_command = 124,
  sym_tmp_string_command = 125,
  sym_tmp_hex_command = 126,
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
  sym_help_command = 142,
  sym_repeat_command = 143,
  sym__eq_sep_args = 144,
  sym_redirect_command = 145,
  sym__redirect_operator = 146,
  sym_fdn_redirect_operator = 147,
  sym_fdn_append_operator = 148,
  sym_arg = 149,
  sym_arg_identifier = 150,
  sym_quoted_arg = 151,
  sym_cmd_substitution_arg = 152,
  aux_sym_commands_repeat1 = 153,
  aux_sym_commands_repeat2 = 154,
  aux_sym__commands_singleline_repeat1 = 155,
  aux_sym__commands_singleline_repeat2 = 156,
  aux_sym_iter_offsets_command_repeat1 = 157,
  aux_sym_tmp_eval_command_repeat1 = 158,
  aux_sym__interpret_search_identifier_repeat1 = 159,
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
  [anon_sym_LPAREN_STAR] = "cmd_identifier",
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
  [sym_help_command] = "help_command",
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
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = true,
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
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '?') ADVANCE(150);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(220);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(225);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(226);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(194);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(174);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(182);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(221);
      if (lookahead == '\n') ADVANCE(243);
      if (lookahead == '\r') ADVANCE(244);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '$') ADVANCE(227);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '`') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(226);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(182);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(195);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(219);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(219);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == ';') ADVANCE(245);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(182);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(177);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(188);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(114);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'v') ADVANCE(143);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '\r') ADVANCE(48);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 51:
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
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(136);
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
          lookahead == '}') ADVANCE(53);
      END_STATE();
    case 53:
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
          lookahead == '}') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(132);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'H') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(74);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(75);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'k') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'B') ADVANCE(201);
      if (lookahead == 'F') ADVANCE(202);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'f') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'k') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == 'x') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 126:
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
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(148);
      if (lookahead == '!') ADVANCE(130);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 136:
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
          lookahead == '}') ADVANCE(53);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_env);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__interpret_identifier_token2);
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_question_mark_identifier);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(155);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead == '#') ADVANCE(159);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(21);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(157);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(21);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(169);
      if (lookahead == '/') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(21);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(171);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(21);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
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
          lookahead != '|') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(174);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(175);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(176);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '`') ADVANCE(239);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(177);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(21);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(21);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 182:
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
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(183);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(21);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(21);
      if (lookahead != 0) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(188);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(21);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(21);
      if (lookahead != 0) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(194);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(195);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(196);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '`') ADVANCE(238);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(197);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '/') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '/') ADVANCE(219);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(21);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(21);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(220);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(225);
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
          lookahead != '~') ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(221);
      if (lookahead == '/') ADVANCE(222);
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
          lookahead != '~') ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(224);
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
          lookahead != '~') ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '/') ADVANCE(226);
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
          lookahead == '~') ADVANCE(21);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(223);
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
          lookahead == '~') ADVANCE(21);
      if (lookahead != 0) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(165);
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
          lookahead != '~') ADVANCE(226);
      END_STATE();
    case 226:
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
          lookahead != '~') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead == '(') ADVANCE(236);
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
          lookahead != '~') ADVANCE(228);
      END_STATE();
    case 228:
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
          lookahead != '~') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(230);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(235);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(233);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(219);
      END_STATE();
    case 239:
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
          lookahead != '|') ADVANCE(182);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SEMI);
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
  [52] = {.lex_state = 2, .external_lex_state = 5},
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
  [77] = {.lex_state = 5, .external_lex_state = 5},
  [78] = {.lex_state = 2, .external_lex_state = 5},
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
  [93] = {.lex_state = 2, .external_lex_state = 5},
  [94] = {.lex_state = 2, .external_lex_state = 5},
  [95] = {.lex_state = 2, .external_lex_state = 5},
  [96] = {.lex_state = 2, .external_lex_state = 5},
  [97] = {.lex_state = 2, .external_lex_state = 5},
  [98] = {.lex_state = 2, .external_lex_state = 5},
  [99] = {.lex_state = 2, .external_lex_state = 5},
  [100] = {.lex_state = 2, .external_lex_state = 5},
  [101] = {.lex_state = 6, .external_lex_state = 5},
  [102] = {.lex_state = 2, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 5},
  [104] = {.lex_state = 2, .external_lex_state = 5},
  [105] = {.lex_state = 2, .external_lex_state = 5},
  [106] = {.lex_state = 2, .external_lex_state = 5},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 2, .external_lex_state = 5},
  [109] = {.lex_state = 6, .external_lex_state = 5},
  [110] = {.lex_state = 8, .external_lex_state = 5},
  [111] = {.lex_state = 2, .external_lex_state = 5},
  [112] = {.lex_state = 9, .external_lex_state = 5},
  [113] = {.lex_state = 2, .external_lex_state = 5},
  [114] = {.lex_state = 9, .external_lex_state = 5},
  [115] = {.lex_state = 10, .external_lex_state = 5},
  [116] = {.lex_state = 11, .external_lex_state = 5},
  [117] = {.lex_state = 10, .external_lex_state = 5},
  [118] = {.lex_state = 11, .external_lex_state = 5},
  [119] = {.lex_state = 8, .external_lex_state = 5},
  [120] = {.lex_state = 2, .external_lex_state = 5},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 2, .external_lex_state = 5},
  [123] = {.lex_state = 2, .external_lex_state = 5},
  [124] = {.lex_state = 1, .external_lex_state = 2},
  [125] = {.lex_state = 1, .external_lex_state = 2},
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
  [157] = {.lex_state = 7},
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
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
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
  [198] = {.lex_state = 155},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 13},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 14},
  [208] = {.lex_state = 15},
  [209] = {.lex_state = 16},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 15},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 15},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 18},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 15},
  [235] = {.lex_state = 16},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 15},
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
    [sym_commands] = STATE(216),
    [sym__command] = STATE(182),
    [sym_legacy_quoted_command] = STATE(182),
    [sym__simple_command] = STATE(47),
    [sym__tmp_command] = STATE(47),
    [sym__iter_command] = STATE(47),
    [sym__pipe_command] = STATE(47),
    [sym_grep_command] = STATE(47),
    [sym_html_disable_command] = STATE(47),
    [sym_html_enable_command] = STATE(47),
    [sym_scr_tts_command] = STATE(47),
    [sym_pipe_command] = STATE(47),
    [sym_iter_flags_command] = STATE(47),
    [sym_iter_dbta_command] = STATE(47),
    [sym_iter_dbtb_command] = STATE(47),
    [sym_iter_dbts_command] = STATE(47),
    [sym_iter_file_lines_command] = STATE(47),
    [sym_iter_offsets_command] = STATE(47),
    [sym_iter_sdbquery_command] = STATE(47),
    [sym_iter_threads_command] = STATE(47),
    [sym_iter_bbs_command] = STATE(47),
    [sym_iter_instrs_command] = STATE(47),
    [sym_iter_sections_command] = STATE(47),
    [sym_iter_functions_command] = STATE(47),
    [sym_iter_step_command] = STATE(47),
    [sym_iter_interpret_command] = STATE(47),
    [sym_tmp_seek_command] = STATE(47),
    [sym_tmp_blksz_command] = STATE(47),
    [sym_tmp_fromto_command] = STATE(47),
    [sym_tmp_arch_command] = STATE(47),
    [sym_tmp_bits_command] = STATE(47),
    [sym_tmp_nthi_command] = STATE(47),
    [sym_tmp_eval_command] = STATE(47),
    [sym_tmp_fs_command] = STATE(47),
    [sym_tmp_reli_command] = STATE(47),
    [sym_tmp_kuery_command] = STATE(47),
    [sym_tmp_fd_command] = STATE(47),
    [sym_tmp_reg_command] = STATE(47),
    [sym_tmp_file_command] = STATE(47),
    [sym_tmp_string_command] = STATE(47),
    [sym_tmp_hex_command] = STATE(47),
    [sym_arged_command] = STATE(47),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(101),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(182),
    [sym_repeat_command] = STATE(47),
    [sym_redirect_command] = STATE(182),
    [aux_sym_commands_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(11),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(45),
  },
  [2] = {
    [sym__simple_command] = STATE(59),
    [sym__tmp_command] = STATE(59),
    [sym__iter_command] = STATE(59),
    [sym__pipe_command] = STATE(59),
    [sym_grep_command] = STATE(59),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(101),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_repeat_command] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_PIPEH] = ACTIONS(47),
    [anon_sym_PIPET] = ACTIONS(47),
    [anon_sym_AT_AT] = ACTIONS(49),
    [anon_sym_AT_ATdbt] = ACTIONS(49),
    [anon_sym_AT_ATdbta] = ACTIONS(47),
    [anon_sym_AT_ATdbtb] = ACTIONS(47),
    [anon_sym_AT_ATdbts] = ACTIONS(47),
    [anon_sym_AT_AT_DOT] = ACTIONS(47),
    [anon_sym_AT_AT_EQ] = ACTIONS(47),
    [anon_sym_AT_ATk] = ACTIONS(47),
    [anon_sym_AT_ATt] = ACTIONS(47),
    [anon_sym_AT_ATb] = ACTIONS(47),
    [anon_sym_AT_ATi] = ACTIONS(49),
    [anon_sym_AT_ATiS] = ACTIONS(47),
    [anon_sym_AT_ATf] = ACTIONS(47),
    [anon_sym_AT_ATs_COLON] = ACTIONS(47),
    [anon_sym_AT_ATc_COLON] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_AT_BANG] = ACTIONS(47),
    [anon_sym_AT_LPAREN] = ACTIONS(47),
    [anon_sym_ATa_COLON] = ACTIONS(47),
    [anon_sym_ATb_COLON] = ACTIONS(47),
    [anon_sym_ATB_COLON] = ACTIONS(47),
    [anon_sym_ATe_COLON] = ACTIONS(47),
    [anon_sym_ATF_COLON] = ACTIONS(47),
    [anon_sym_ATi_COLON] = ACTIONS(47),
    [anon_sym_ATk_COLON] = ACTIONS(47),
    [anon_sym_ATo_COLON] = ACTIONS(47),
    [anon_sym_ATr_COLON] = ACTIONS(47),
    [anon_sym_ATf_COLON] = ACTIONS(47),
    [anon_sym_ATs_COLON] = ACTIONS(47),
    [anon_sym_ATx_COLON] = ACTIONS(47),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_PIPE_DOT] = ACTIONS(47),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_GT] = ACTIONS(47),
    [sym_html_redirect_operator] = ACTIONS(49),
    [sym_html_append_operator] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_repeat_number] = ACTIONS(45),
  },
  [3] = {
    [sym__simple_command] = STATE(59),
    [sym__tmp_command] = STATE(59),
    [sym__iter_command] = STATE(59),
    [sym__pipe_command] = STATE(59),
    [sym_grep_command] = STATE(59),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_repeat_command] = STATE(59),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_PIPEH] = ACTIONS(47),
    [anon_sym_PIPET] = ACTIONS(47),
    [anon_sym_AT_AT] = ACTIONS(49),
    [anon_sym_AT_ATdbt] = ACTIONS(49),
    [anon_sym_AT_ATdbta] = ACTIONS(47),
    [anon_sym_AT_ATdbtb] = ACTIONS(47),
    [anon_sym_AT_ATdbts] = ACTIONS(47),
    [anon_sym_AT_AT_DOT] = ACTIONS(47),
    [anon_sym_AT_AT_EQ] = ACTIONS(47),
    [anon_sym_AT_ATk] = ACTIONS(47),
    [anon_sym_AT_ATt] = ACTIONS(47),
    [anon_sym_AT_ATb] = ACTIONS(47),
    [anon_sym_AT_ATi] = ACTIONS(49),
    [anon_sym_AT_ATiS] = ACTIONS(47),
    [anon_sym_AT_ATf] = ACTIONS(47),
    [anon_sym_AT_ATs_COLON] = ACTIONS(47),
    [anon_sym_AT_ATc_COLON] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_AT_BANG] = ACTIONS(47),
    [anon_sym_AT_LPAREN] = ACTIONS(47),
    [anon_sym_ATa_COLON] = ACTIONS(47),
    [anon_sym_ATb_COLON] = ACTIONS(47),
    [anon_sym_ATB_COLON] = ACTIONS(47),
    [anon_sym_ATe_COLON] = ACTIONS(47),
    [anon_sym_ATF_COLON] = ACTIONS(47),
    [anon_sym_ATi_COLON] = ACTIONS(47),
    [anon_sym_ATk_COLON] = ACTIONS(47),
    [anon_sym_ATo_COLON] = ACTIONS(47),
    [anon_sym_ATr_COLON] = ACTIONS(47),
    [anon_sym_ATf_COLON] = ACTIONS(47),
    [anon_sym_ATs_COLON] = ACTIONS(47),
    [anon_sym_ATx_COLON] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_PIPE_DOT] = ACTIONS(47),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_GT] = ACTIONS(47),
    [sym_html_redirect_operator] = ACTIONS(49),
    [sym_html_append_operator] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_repeat_number] = ACTIONS(59),
  },
  [4] = {
    [sym__simple_command] = STATE(59),
    [sym__tmp_command] = STATE(59),
    [sym__iter_command] = STATE(59),
    [sym__pipe_command] = STATE(59),
    [sym_grep_command] = STATE(59),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(59),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_PIPEH] = ACTIONS(47),
    [anon_sym_PIPET] = ACTIONS(47),
    [anon_sym_AT_AT] = ACTIONS(49),
    [anon_sym_AT_ATdbt] = ACTIONS(49),
    [anon_sym_AT_ATdbta] = ACTIONS(47),
    [anon_sym_AT_ATdbtb] = ACTIONS(47),
    [anon_sym_AT_ATdbts] = ACTIONS(47),
    [anon_sym_AT_AT_DOT] = ACTIONS(47),
    [anon_sym_AT_AT_EQ] = ACTIONS(47),
    [anon_sym_AT_ATk] = ACTIONS(47),
    [anon_sym_AT_ATt] = ACTIONS(47),
    [anon_sym_AT_ATb] = ACTIONS(47),
    [anon_sym_AT_ATi] = ACTIONS(49),
    [anon_sym_AT_ATiS] = ACTIONS(47),
    [anon_sym_AT_ATf] = ACTIONS(47),
    [anon_sym_AT_ATs_COLON] = ACTIONS(47),
    [anon_sym_AT_ATc_COLON] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_AT_BANG] = ACTIONS(47),
    [anon_sym_AT_LPAREN] = ACTIONS(47),
    [anon_sym_ATa_COLON] = ACTIONS(47),
    [anon_sym_ATb_COLON] = ACTIONS(47),
    [anon_sym_ATB_COLON] = ACTIONS(47),
    [anon_sym_ATe_COLON] = ACTIONS(47),
    [anon_sym_ATF_COLON] = ACTIONS(47),
    [anon_sym_ATi_COLON] = ACTIONS(47),
    [anon_sym_ATk_COLON] = ACTIONS(47),
    [anon_sym_ATo_COLON] = ACTIONS(47),
    [anon_sym_ATr_COLON] = ACTIONS(47),
    [anon_sym_ATf_COLON] = ACTIONS(47),
    [anon_sym_ATs_COLON] = ACTIONS(47),
    [anon_sym_ATx_COLON] = ACTIONS(47),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_PIPE_DOT] = ACTIONS(47),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(67),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_GT] = ACTIONS(47),
    [sym_html_redirect_operator] = ACTIONS(49),
    [sym_html_append_operator] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym_file_descriptor] = ACTIONS(47),
    [sym_repeat_number] = ACTIONS(71),
  },
  [5] = {
    [sym__command] = STATE(184),
    [sym_legacy_quoted_command] = STATE(184),
    [sym__simple_command] = STATE(47),
    [sym__tmp_command] = STATE(47),
    [sym__iter_command] = STATE(47),
    [sym__pipe_command] = STATE(47),
    [sym_grep_command] = STATE(47),
    [sym_html_disable_command] = STATE(47),
    [sym_html_enable_command] = STATE(47),
    [sym_scr_tts_command] = STATE(47),
    [sym_pipe_command] = STATE(47),
    [sym_iter_flags_command] = STATE(47),
    [sym_iter_dbta_command] = STATE(47),
    [sym_iter_dbtb_command] = STATE(47),
    [sym_iter_dbts_command] = STATE(47),
    [sym_iter_file_lines_command] = STATE(47),
    [sym_iter_offsets_command] = STATE(47),
    [sym_iter_sdbquery_command] = STATE(47),
    [sym_iter_threads_command] = STATE(47),
    [sym_iter_bbs_command] = STATE(47),
    [sym_iter_instrs_command] = STATE(47),
    [sym_iter_sections_command] = STATE(47),
    [sym_iter_functions_command] = STATE(47),
    [sym_iter_step_command] = STATE(47),
    [sym_iter_interpret_command] = STATE(47),
    [sym_tmp_seek_command] = STATE(47),
    [sym_tmp_blksz_command] = STATE(47),
    [sym_tmp_fromto_command] = STATE(47),
    [sym_tmp_arch_command] = STATE(47),
    [sym_tmp_bits_command] = STATE(47),
    [sym_tmp_nthi_command] = STATE(47),
    [sym_tmp_eval_command] = STATE(47),
    [sym_tmp_fs_command] = STATE(47),
    [sym_tmp_reli_command] = STATE(47),
    [sym_tmp_kuery_command] = STATE(47),
    [sym_tmp_fd_command] = STATE(47),
    [sym_tmp_reg_command] = STATE(47),
    [sym_tmp_file_command] = STATE(47),
    [sym_tmp_string_command] = STATE(47),
    [sym_tmp_hex_command] = STATE(47),
    [sym_arged_command] = STATE(47),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(101),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(184),
    [sym_repeat_command] = STATE(47),
    [sym_redirect_command] = STATE(184),
    [aux_sym_commands_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(75),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_CR] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(45),
  },
  [6] = {
    [sym__command] = STATE(186),
    [sym_legacy_quoted_command] = STATE(186),
    [sym__simple_command] = STATE(47),
    [sym__tmp_command] = STATE(47),
    [sym__iter_command] = STATE(47),
    [sym__pipe_command] = STATE(47),
    [sym_grep_command] = STATE(47),
    [sym_html_disable_command] = STATE(47),
    [sym_html_enable_command] = STATE(47),
    [sym_scr_tts_command] = STATE(47),
    [sym_pipe_command] = STATE(47),
    [sym_iter_flags_command] = STATE(47),
    [sym_iter_dbta_command] = STATE(47),
    [sym_iter_dbtb_command] = STATE(47),
    [sym_iter_dbts_command] = STATE(47),
    [sym_iter_file_lines_command] = STATE(47),
    [sym_iter_offsets_command] = STATE(47),
    [sym_iter_sdbquery_command] = STATE(47),
    [sym_iter_threads_command] = STATE(47),
    [sym_iter_bbs_command] = STATE(47),
    [sym_iter_instrs_command] = STATE(47),
    [sym_iter_sections_command] = STATE(47),
    [sym_iter_functions_command] = STATE(47),
    [sym_iter_step_command] = STATE(47),
    [sym_iter_interpret_command] = STATE(47),
    [sym_tmp_seek_command] = STATE(47),
    [sym_tmp_blksz_command] = STATE(47),
    [sym_tmp_fromto_command] = STATE(47),
    [sym_tmp_arch_command] = STATE(47),
    [sym_tmp_bits_command] = STATE(47),
    [sym_tmp_nthi_command] = STATE(47),
    [sym_tmp_eval_command] = STATE(47),
    [sym_tmp_fs_command] = STATE(47),
    [sym_tmp_reli_command] = STATE(47),
    [sym_tmp_kuery_command] = STATE(47),
    [sym_tmp_fd_command] = STATE(47),
    [sym_tmp_reg_command] = STATE(47),
    [sym_tmp_file_command] = STATE(47),
    [sym_tmp_string_command] = STATE(47),
    [sym_tmp_hex_command] = STATE(47),
    [sym_arged_command] = STATE(47),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(101),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(186),
    [sym_repeat_command] = STATE(47),
    [sym_redirect_command] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(81),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_CR] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(45),
  },
  [7] = {
    [sym__commands_singleline] = STATE(225),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_grep_command] = STATE(108),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(83),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(85),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym__help_command] = ACTIONS(89),
    [sym_repeat_number] = ACTIONS(71),
  },
  [8] = {
    [sym__commands_singleline] = STATE(224),
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(107),
    [sym__tmp_command] = STATE(107),
    [sym__iter_command] = STATE(107),
    [sym__pipe_command] = STATE(107),
    [sym_grep_command] = STATE(107),
    [sym_html_disable_command] = STATE(107),
    [sym_html_enable_command] = STATE(107),
    [sym_scr_tts_command] = STATE(107),
    [sym_pipe_command] = STATE(107),
    [sym_iter_flags_command] = STATE(107),
    [sym_iter_dbta_command] = STATE(107),
    [sym_iter_dbtb_command] = STATE(107),
    [sym_iter_dbts_command] = STATE(107),
    [sym_iter_file_lines_command] = STATE(107),
    [sym_iter_offsets_command] = STATE(107),
    [sym_iter_sdbquery_command] = STATE(107),
    [sym_iter_threads_command] = STATE(107),
    [sym_iter_bbs_command] = STATE(107),
    [sym_iter_instrs_command] = STATE(107),
    [sym_iter_sections_command] = STATE(107),
    [sym_iter_functions_command] = STATE(107),
    [sym_iter_step_command] = STATE(107),
    [sym_iter_interpret_command] = STATE(107),
    [sym_tmp_seek_command] = STATE(107),
    [sym_tmp_blksz_command] = STATE(107),
    [sym_tmp_fromto_command] = STATE(107),
    [sym_tmp_arch_command] = STATE(107),
    [sym_tmp_bits_command] = STATE(107),
    [sym_tmp_nthi_command] = STATE(107),
    [sym_tmp_eval_command] = STATE(107),
    [sym_tmp_fs_command] = STATE(107),
    [sym_tmp_reli_command] = STATE(107),
    [sym_tmp_kuery_command] = STATE(107),
    [sym_tmp_fd_command] = STATE(107),
    [sym_tmp_reg_command] = STATE(107),
    [sym_tmp_file_command] = STATE(107),
    [sym_tmp_string_command] = STATE(107),
    [sym_tmp_hex_command] = STATE(107),
    [sym_arged_command] = STATE(107),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(196),
    [sym_repeat_command] = STATE(107),
    [sym_redirect_command] = STATE(196),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
  },
  [9] = {
    [sym__commands_singleline] = STATE(221),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_grep_command] = STATE(108),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(83),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(85),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym__help_command] = ACTIONS(89),
    [sym_repeat_number] = ACTIONS(71),
  },
  [10] = {
    [sym__commands_singleline] = STATE(220),
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(107),
    [sym__tmp_command] = STATE(107),
    [sym__iter_command] = STATE(107),
    [sym__pipe_command] = STATE(107),
    [sym_grep_command] = STATE(107),
    [sym_html_disable_command] = STATE(107),
    [sym_html_enable_command] = STATE(107),
    [sym_scr_tts_command] = STATE(107),
    [sym_pipe_command] = STATE(107),
    [sym_iter_flags_command] = STATE(107),
    [sym_iter_dbta_command] = STATE(107),
    [sym_iter_dbtb_command] = STATE(107),
    [sym_iter_dbts_command] = STATE(107),
    [sym_iter_file_lines_command] = STATE(107),
    [sym_iter_offsets_command] = STATE(107),
    [sym_iter_sdbquery_command] = STATE(107),
    [sym_iter_threads_command] = STATE(107),
    [sym_iter_bbs_command] = STATE(107),
    [sym_iter_instrs_command] = STATE(107),
    [sym_iter_sections_command] = STATE(107),
    [sym_iter_functions_command] = STATE(107),
    [sym_iter_step_command] = STATE(107),
    [sym_iter_interpret_command] = STATE(107),
    [sym_tmp_seek_command] = STATE(107),
    [sym_tmp_blksz_command] = STATE(107),
    [sym_tmp_fromto_command] = STATE(107),
    [sym_tmp_arch_command] = STATE(107),
    [sym_tmp_bits_command] = STATE(107),
    [sym_tmp_nthi_command] = STATE(107),
    [sym_tmp_eval_command] = STATE(107),
    [sym_tmp_fs_command] = STATE(107),
    [sym_tmp_reli_command] = STATE(107),
    [sym_tmp_kuery_command] = STATE(107),
    [sym_tmp_fd_command] = STATE(107),
    [sym_tmp_reg_command] = STATE(107),
    [sym_tmp_file_command] = STATE(107),
    [sym_tmp_string_command] = STATE(107),
    [sym_tmp_hex_command] = STATE(107),
    [sym_arged_command] = STATE(107),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(196),
    [sym_repeat_command] = STATE(107),
    [sym_redirect_command] = STATE(196),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
  },
  [11] = {
    [sym__commands_singleline] = STATE(215),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_grep_command] = STATE(108),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(83),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(85),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym__help_command] = ACTIONS(89),
    [sym_repeat_number] = ACTIONS(71),
  },
  [12] = {
    [sym__commands_singleline] = STATE(213),
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(107),
    [sym__tmp_command] = STATE(107),
    [sym__iter_command] = STATE(107),
    [sym__pipe_command] = STATE(107),
    [sym_grep_command] = STATE(107),
    [sym_html_disable_command] = STATE(107),
    [sym_html_enable_command] = STATE(107),
    [sym_scr_tts_command] = STATE(107),
    [sym_pipe_command] = STATE(107),
    [sym_iter_flags_command] = STATE(107),
    [sym_iter_dbta_command] = STATE(107),
    [sym_iter_dbtb_command] = STATE(107),
    [sym_iter_dbts_command] = STATE(107),
    [sym_iter_file_lines_command] = STATE(107),
    [sym_iter_offsets_command] = STATE(107),
    [sym_iter_sdbquery_command] = STATE(107),
    [sym_iter_threads_command] = STATE(107),
    [sym_iter_bbs_command] = STATE(107),
    [sym_iter_instrs_command] = STATE(107),
    [sym_iter_sections_command] = STATE(107),
    [sym_iter_functions_command] = STATE(107),
    [sym_iter_step_command] = STATE(107),
    [sym_iter_interpret_command] = STATE(107),
    [sym_tmp_seek_command] = STATE(107),
    [sym_tmp_blksz_command] = STATE(107),
    [sym_tmp_fromto_command] = STATE(107),
    [sym_tmp_arch_command] = STATE(107),
    [sym_tmp_bits_command] = STATE(107),
    [sym_tmp_nthi_command] = STATE(107),
    [sym_tmp_eval_command] = STATE(107),
    [sym_tmp_fs_command] = STATE(107),
    [sym_tmp_reli_command] = STATE(107),
    [sym_tmp_kuery_command] = STATE(107),
    [sym_tmp_fd_command] = STATE(107),
    [sym_tmp_reg_command] = STATE(107),
    [sym_tmp_file_command] = STATE(107),
    [sym_tmp_string_command] = STATE(107),
    [sym_tmp_hex_command] = STATE(107),
    [sym_arged_command] = STATE(107),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(196),
    [sym_repeat_command] = STATE(107),
    [sym_redirect_command] = STATE(196),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
  },
  [13] = {
    [sym__commands_singleline] = STATE(206),
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_grep_command] = STATE(108),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(18),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(83),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(85),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym__help_command] = ACTIONS(89),
    [sym_repeat_number] = ACTIONS(71),
  },
  [14] = {
    [sym__commands_singleline] = STATE(205),
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(107),
    [sym__tmp_command] = STATE(107),
    [sym__iter_command] = STATE(107),
    [sym__pipe_command] = STATE(107),
    [sym_grep_command] = STATE(107),
    [sym_html_disable_command] = STATE(107),
    [sym_html_enable_command] = STATE(107),
    [sym_scr_tts_command] = STATE(107),
    [sym_pipe_command] = STATE(107),
    [sym_iter_flags_command] = STATE(107),
    [sym_iter_dbta_command] = STATE(107),
    [sym_iter_dbtb_command] = STATE(107),
    [sym_iter_dbts_command] = STATE(107),
    [sym_iter_file_lines_command] = STATE(107),
    [sym_iter_offsets_command] = STATE(107),
    [sym_iter_sdbquery_command] = STATE(107),
    [sym_iter_threads_command] = STATE(107),
    [sym_iter_bbs_command] = STATE(107),
    [sym_iter_instrs_command] = STATE(107),
    [sym_iter_sections_command] = STATE(107),
    [sym_iter_functions_command] = STATE(107),
    [sym_iter_step_command] = STATE(107),
    [sym_iter_interpret_command] = STATE(107),
    [sym_tmp_seek_command] = STATE(107),
    [sym_tmp_blksz_command] = STATE(107),
    [sym_tmp_fromto_command] = STATE(107),
    [sym_tmp_arch_command] = STATE(107),
    [sym_tmp_bits_command] = STATE(107),
    [sym_tmp_nthi_command] = STATE(107),
    [sym_tmp_eval_command] = STATE(107),
    [sym_tmp_fs_command] = STATE(107),
    [sym_tmp_reli_command] = STATE(107),
    [sym_tmp_kuery_command] = STATE(107),
    [sym_tmp_fd_command] = STATE(107),
    [sym_tmp_reg_command] = STATE(107),
    [sym_tmp_file_command] = STATE(107),
    [sym_tmp_string_command] = STATE(107),
    [sym_tmp_hex_command] = STATE(107),
    [sym_arged_command] = STATE(107),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(196),
    [sym_repeat_command] = STATE(107),
    [sym_redirect_command] = STATE(196),
    [aux_sym__commands_singleline_repeat1] = STATE(15),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
  },
  [15] = {
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(107),
    [sym__tmp_command] = STATE(107),
    [sym__iter_command] = STATE(107),
    [sym__pipe_command] = STATE(107),
    [sym_grep_command] = STATE(107),
    [sym_html_disable_command] = STATE(107),
    [sym_html_enable_command] = STATE(107),
    [sym_scr_tts_command] = STATE(107),
    [sym_pipe_command] = STATE(107),
    [sym_iter_flags_command] = STATE(107),
    [sym_iter_dbta_command] = STATE(107),
    [sym_iter_dbtb_command] = STATE(107),
    [sym_iter_dbts_command] = STATE(107),
    [sym_iter_file_lines_command] = STATE(107),
    [sym_iter_offsets_command] = STATE(107),
    [sym_iter_sdbquery_command] = STATE(107),
    [sym_iter_threads_command] = STATE(107),
    [sym_iter_bbs_command] = STATE(107),
    [sym_iter_instrs_command] = STATE(107),
    [sym_iter_sections_command] = STATE(107),
    [sym_iter_functions_command] = STATE(107),
    [sym_iter_step_command] = STATE(107),
    [sym_iter_interpret_command] = STATE(107),
    [sym_tmp_seek_command] = STATE(107),
    [sym_tmp_blksz_command] = STATE(107),
    [sym_tmp_fromto_command] = STATE(107),
    [sym_tmp_arch_command] = STATE(107),
    [sym_tmp_bits_command] = STATE(107),
    [sym_tmp_nthi_command] = STATE(107),
    [sym_tmp_eval_command] = STATE(107),
    [sym_tmp_fs_command] = STATE(107),
    [sym_tmp_reli_command] = STATE(107),
    [sym_tmp_kuery_command] = STATE(107),
    [sym_tmp_fd_command] = STATE(107),
    [sym_tmp_reg_command] = STATE(107),
    [sym_tmp_file_command] = STATE(107),
    [sym_tmp_string_command] = STATE(107),
    [sym_tmp_hex_command] = STATE(107),
    [sym_arged_command] = STATE(107),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(107),
    [sym_redirect_command] = STATE(193),
    [aux_sym__commands_singleline_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(95),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
  },
  [16] = {
    [sym__command] = STATE(191),
    [sym_legacy_quoted_command] = STATE(191),
    [sym__simple_command] = STATE(107),
    [sym__tmp_command] = STATE(107),
    [sym__iter_command] = STATE(107),
    [sym__pipe_command] = STATE(107),
    [sym_grep_command] = STATE(107),
    [sym_html_disable_command] = STATE(107),
    [sym_html_enable_command] = STATE(107),
    [sym_scr_tts_command] = STATE(107),
    [sym_pipe_command] = STATE(107),
    [sym_iter_flags_command] = STATE(107),
    [sym_iter_dbta_command] = STATE(107),
    [sym_iter_dbtb_command] = STATE(107),
    [sym_iter_dbts_command] = STATE(107),
    [sym_iter_file_lines_command] = STATE(107),
    [sym_iter_offsets_command] = STATE(107),
    [sym_iter_sdbquery_command] = STATE(107),
    [sym_iter_threads_command] = STATE(107),
    [sym_iter_bbs_command] = STATE(107),
    [sym_iter_instrs_command] = STATE(107),
    [sym_iter_sections_command] = STATE(107),
    [sym_iter_functions_command] = STATE(107),
    [sym_iter_step_command] = STATE(107),
    [sym_iter_interpret_command] = STATE(107),
    [sym_tmp_seek_command] = STATE(107),
    [sym_tmp_blksz_command] = STATE(107),
    [sym_tmp_fromto_command] = STATE(107),
    [sym_tmp_arch_command] = STATE(107),
    [sym_tmp_bits_command] = STATE(107),
    [sym_tmp_nthi_command] = STATE(107),
    [sym_tmp_eval_command] = STATE(107),
    [sym_tmp_fs_command] = STATE(107),
    [sym_tmp_reli_command] = STATE(107),
    [sym_tmp_kuery_command] = STATE(107),
    [sym_tmp_fd_command] = STATE(107),
    [sym_tmp_reg_command] = STATE(107),
    [sym_tmp_file_command] = STATE(107),
    [sym_tmp_string_command] = STATE(107),
    [sym_tmp_hex_command] = STATE(107),
    [sym_arged_command] = STATE(107),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_help_command] = STATE(191),
    [sym_repeat_command] = STATE(107),
    [sym_redirect_command] = STATE(191),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(33),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym_repeat_number] = ACTIONS(59),
  },
  [17] = {
    [sym__command] = STATE(191),
    [sym_legacy_quoted_command] = STATE(191),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_grep_command] = STATE(108),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_help_command] = STATE(191),
    [sym_repeat_command] = STATE(108),
    [sym_redirect_command] = STATE(191),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(99),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(85),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(101),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym__help_command] = ACTIONS(89),
    [sym_repeat_number] = ACTIONS(71),
  },
  [18] = {
    [sym__command] = STATE(188),
    [sym_legacy_quoted_command] = STATE(188),
    [sym__simple_command] = STATE(108),
    [sym__tmp_command] = STATE(108),
    [sym__iter_command] = STATE(108),
    [sym__pipe_command] = STATE(108),
    [sym_grep_command] = STATE(108),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_help_command] = STATE(188),
    [sym_repeat_command] = STATE(108),
    [sym_redirect_command] = STATE(188),
    [aux_sym__commands_singleline_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(103),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(85),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym__help_command] = ACTIONS(89),
    [sym_repeat_number] = ACTIONS(71),
  },
  [19] = {
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
    [sym_arged_command] = STATE(120),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(120),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(67),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym_repeat_number] = ACTIONS(71),
  },
  [20] = {
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
    [sym_arged_command] = STATE(123),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_repeat_command] = STATE(123),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [21] = {
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
    [sym_arged_command] = STATE(111),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(101),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_repeat_command] = STATE(111),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(45),
  },
  [22] = {
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
    [sym_arged_command] = STATE(121),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(110),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_repeat_command] = STATE(121),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(53),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(55),
    [anon_sym_env] = ACTIONS(55),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(57),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(59),
  },
  [23] = {
    [sym__simple_command] = STATE(113),
    [sym__tmp_command] = STATE(113),
    [sym__iter_command] = STATE(113),
    [sym__pipe_command] = STATE(113),
    [sym_grep_command] = STATE(113),
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
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(138),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(101),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(26),
    [sym_repeat_command] = STATE(113),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_env] = ACTIONS(23),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_question_mark_identifier] = ACTIONS(51),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym_repeat_number] = ACTIONS(45),
  },
  [24] = {
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
    [sym_arged_command] = STATE(122),
    [sym__simple_arged_command] = STATE(97),
    [sym__math_arged_command] = STATE(97),
    [sym__pointer_arged_command] = STATE(97),
    [sym__macro_arged_command] = STATE(97),
    [sym__system_command] = STATE(97),
    [sym__interpret_command] = STATE(97),
    [sym__interpret_search_identifier] = STATE(139),
    [sym__env_command] = STATE(97),
    [sym__env_command_identifier] = STATE(116),
    [sym__last_command] = STATE(97),
    [sym_last_command_identifier] = STATE(103),
    [sym__interpret_identifier] = STATE(34),
    [sym_repeat_command] = STATE(122),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(63),
    [anon_sym_env] = ACTIONS(63),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(25),
    [aux_sym__interpret_identifier_token1] = ACTIONS(27),
    [aux_sym__interpret_identifier_token2] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(65),
    [sym_question_mark_identifier] = ACTIONS(67),
    [sym_pointer_identifier] = ACTIONS(35),
    [sym_macro_identifier] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(69),
    [sym_repeat_number] = ACTIONS(71),
  },
  [25] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(109),
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
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_PIPE_DOT] = ACTIONS(109),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [sym_html_redirect_operator] = ACTIONS(109),
    [sym_html_append_operator] = ACTIONS(109),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_CR] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [26] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPEH] = ACTIONS(121),
    [anon_sym_PIPET] = ACTIONS(121),
    [anon_sym_AT_AT] = ACTIONS(121),
    [anon_sym_AT_ATdbt] = ACTIONS(121),
    [anon_sym_AT_ATdbta] = ACTIONS(121),
    [anon_sym_AT_ATdbtb] = ACTIONS(121),
    [anon_sym_AT_ATdbts] = ACTIONS(121),
    [anon_sym_AT_AT_DOT] = ACTIONS(121),
    [anon_sym_AT_AT_EQ] = ACTIONS(121),
    [anon_sym_AT_ATk] = ACTIONS(121),
    [anon_sym_AT_ATt] = ACTIONS(121),
    [anon_sym_AT_ATb] = ACTIONS(121),
    [anon_sym_AT_ATi] = ACTIONS(121),
    [anon_sym_AT_ATiS] = ACTIONS(121),
    [anon_sym_AT_ATf] = ACTIONS(121),
    [anon_sym_AT_ATs_COLON] = ACTIONS(121),
    [anon_sym_AT_ATc_COLON] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(121),
    [sym_html_redirect_operator] = ACTIONS(121),
    [sym_html_append_operator] = ACTIONS(121),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_CR] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(119),
  },
  [27] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(125),
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
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_PIPE_DOT] = ACTIONS(125),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(125),
    [sym_html_redirect_operator] = ACTIONS(125),
    [sym_html_append_operator] = ACTIONS(125),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_CR] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym_file_descriptor] = ACTIONS(123),
  },
  [28] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(129),
    [anon_sym_TILDE] = ACTIONS(132),
    [anon_sym_PIPE] = ACTIONS(132),
    [anon_sym_PIPEH] = ACTIONS(132),
    [anon_sym_PIPET] = ACTIONS(132),
    [anon_sym_AT_AT] = ACTIONS(132),
    [anon_sym_AT_ATdbt] = ACTIONS(132),
    [anon_sym_AT_ATdbta] = ACTIONS(132),
    [anon_sym_AT_ATdbtb] = ACTIONS(132),
    [anon_sym_AT_ATdbts] = ACTIONS(132),
    [anon_sym_AT_AT_DOT] = ACTIONS(132),
    [anon_sym_AT_AT_EQ] = ACTIONS(132),
    [anon_sym_AT_ATk] = ACTIONS(132),
    [anon_sym_AT_ATt] = ACTIONS(132),
    [anon_sym_AT_ATb] = ACTIONS(132),
    [anon_sym_AT_ATi] = ACTIONS(132),
    [anon_sym_AT_ATiS] = ACTIONS(132),
    [anon_sym_AT_ATf] = ACTIONS(132),
    [anon_sym_AT_ATs_COLON] = ACTIONS(132),
    [anon_sym_AT_ATc_COLON] = ACTIONS(132),
    [anon_sym_AT] = ACTIONS(132),
    [anon_sym_AT_BANG] = ACTIONS(132),
    [anon_sym_AT_LPAREN] = ACTIONS(132),
    [anon_sym_ATa_COLON] = ACTIONS(132),
    [anon_sym_ATb_COLON] = ACTIONS(132),
    [anon_sym_ATB_COLON] = ACTIONS(132),
    [anon_sym_ATe_COLON] = ACTIONS(132),
    [anon_sym_ATF_COLON] = ACTIONS(132),
    [anon_sym_ATi_COLON] = ACTIONS(132),
    [anon_sym_ATk_COLON] = ACTIONS(132),
    [anon_sym_ATo_COLON] = ACTIONS(132),
    [anon_sym_ATr_COLON] = ACTIONS(132),
    [anon_sym_ATf_COLON] = ACTIONS(132),
    [anon_sym_ATs_COLON] = ACTIONS(132),
    [anon_sym_ATx_COLON] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_PIPE_DOT] = ACTIONS(132),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(132),
    [anon_sym_GT_GT] = ACTIONS(132),
    [sym_html_redirect_operator] = ACTIONS(132),
    [sym_html_append_operator] = ACTIONS(132),
    [aux_sym_arg_identifier_token1] = ACTIONS(134),
    [aux_sym_arg_identifier_token2] = ACTIONS(134),
    [anon_sym_SQUOTE] = ACTIONS(137),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(140),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
    [sym_file_descriptor] = ACTIONS(127),
  },
  [29] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(148),
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
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(148),
    [sym_html_append_operator] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_file_descriptor] = ACTIONS(146),
  },
  [30] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(152),
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
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_file_descriptor] = ACTIONS(150),
  },
  [31] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(156),
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
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(156),
    [sym_html_append_operator] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(154),
  },
  [32] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(152),
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
    [anon_sym_PIPE_DOT] = ACTIONS(152),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(152),
    [sym_file_descriptor] = ACTIONS(150),
  },
  [33] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(148),
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
    [anon_sym_PIPE_DOT] = ACTIONS(148),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(148),
    [sym_html_append_operator] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(148),
    [sym_file_descriptor] = ACTIONS(146),
  },
  [34] = {
    [sym_arg] = STATE(35),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(35),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(121),
    [anon_sym_PIPEH] = ACTIONS(121),
    [anon_sym_PIPET] = ACTIONS(121),
    [anon_sym_AT_AT] = ACTIONS(121),
    [anon_sym_AT_ATdbt] = ACTIONS(121),
    [anon_sym_AT_ATdbta] = ACTIONS(121),
    [anon_sym_AT_ATdbtb] = ACTIONS(121),
    [anon_sym_AT_ATdbts] = ACTIONS(121),
    [anon_sym_AT_AT_DOT] = ACTIONS(121),
    [anon_sym_AT_AT_EQ] = ACTIONS(121),
    [anon_sym_AT_ATk] = ACTIONS(121),
    [anon_sym_AT_ATt] = ACTIONS(121),
    [anon_sym_AT_ATb] = ACTIONS(121),
    [anon_sym_AT_ATi] = ACTIONS(121),
    [anon_sym_AT_ATiS] = ACTIONS(121),
    [anon_sym_AT_ATf] = ACTIONS(121),
    [anon_sym_AT_ATs_COLON] = ACTIONS(121),
    [anon_sym_AT_ATc_COLON] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(121),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_GT_GT] = ACTIONS(121),
    [sym_html_redirect_operator] = ACTIONS(121),
    [sym_html_append_operator] = ACTIONS(121),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(121),
    [sym_file_descriptor] = ACTIONS(119),
  },
  [35] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(109),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [sym_html_redirect_operator] = ACTIONS(109),
    [sym_html_append_operator] = ACTIONS(109),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(109),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [36] = {
    [sym_arg] = STATE(33),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(125),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_GT_GT] = ACTIONS(125),
    [sym_html_redirect_operator] = ACTIONS(125),
    [sym_html_append_operator] = ACTIONS(125),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym_file_descriptor] = ACTIONS(123),
  },
  [37] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(156),
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
    [anon_sym_PIPE_DOT] = ACTIONS(156),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(156),
    [sym_html_append_operator] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(156),
    [sym_file_descriptor] = ACTIONS(154),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(160),
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
    [anon_sym_PIPE_DOT] = ACTIONS(160),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(160),
    [sym_html_redirect_operator] = ACTIONS(160),
    [sym_html_append_operator] = ACTIONS(160),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [sym_file_descriptor] = ACTIONS(158),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
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
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_file_descriptor] = ACTIONS(162),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PIPE] = ACTIONS(168),
    [anon_sym_PIPEH] = ACTIONS(168),
    [anon_sym_PIPET] = ACTIONS(168),
    [anon_sym_AT_AT] = ACTIONS(168),
    [anon_sym_AT_ATdbt] = ACTIONS(168),
    [anon_sym_AT_ATdbta] = ACTIONS(168),
    [anon_sym_AT_ATdbtb] = ACTIONS(168),
    [anon_sym_AT_ATdbts] = ACTIONS(168),
    [anon_sym_AT_AT_DOT] = ACTIONS(168),
    [anon_sym_AT_AT_EQ] = ACTIONS(168),
    [anon_sym_AT_ATk] = ACTIONS(168),
    [anon_sym_AT_ATt] = ACTIONS(168),
    [anon_sym_AT_ATb] = ACTIONS(168),
    [anon_sym_AT_ATi] = ACTIONS(168),
    [anon_sym_AT_ATiS] = ACTIONS(168),
    [anon_sym_AT_ATf] = ACTIONS(168),
    [anon_sym_AT_ATs_COLON] = ACTIONS(168),
    [anon_sym_AT_ATc_COLON] = ACTIONS(168),
    [anon_sym_AT] = ACTIONS(168),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(168),
    [sym_html_redirect_operator] = ACTIONS(168),
    [sym_html_append_operator] = ACTIONS(168),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
    [sym_file_descriptor] = ACTIONS(166),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_TILDE] = ACTIONS(164),
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
    [anon_sym_PIPE_DOT] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_file_descriptor] = ACTIONS(162),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_PIPEH] = ACTIONS(172),
    [anon_sym_PIPET] = ACTIONS(172),
    [anon_sym_AT_AT] = ACTIONS(172),
    [anon_sym_AT_ATdbt] = ACTIONS(172),
    [anon_sym_AT_ATdbta] = ACTIONS(172),
    [anon_sym_AT_ATdbtb] = ACTIONS(172),
    [anon_sym_AT_ATdbts] = ACTIONS(172),
    [anon_sym_AT_AT_DOT] = ACTIONS(172),
    [anon_sym_AT_AT_EQ] = ACTIONS(172),
    [anon_sym_AT_ATk] = ACTIONS(172),
    [anon_sym_AT_ATt] = ACTIONS(172),
    [anon_sym_AT_ATb] = ACTIONS(172),
    [anon_sym_AT_ATi] = ACTIONS(172),
    [anon_sym_AT_ATiS] = ACTIONS(172),
    [anon_sym_AT_ATf] = ACTIONS(172),
    [anon_sym_AT_ATs_COLON] = ACTIONS(172),
    [anon_sym_AT_ATc_COLON] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [sym_html_redirect_operator] = ACTIONS(172),
    [sym_html_append_operator] = ACTIONS(172),
    [aux_sym_arg_identifier_token1] = ACTIONS(172),
    [aux_sym_arg_identifier_token2] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_file_descriptor] = ACTIONS(170),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_TILDE] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_PIPEH] = ACTIONS(176),
    [anon_sym_PIPET] = ACTIONS(176),
    [anon_sym_AT_AT] = ACTIONS(176),
    [anon_sym_AT_ATdbt] = ACTIONS(176),
    [anon_sym_AT_ATdbta] = ACTIONS(176),
    [anon_sym_AT_ATdbtb] = ACTIONS(176),
    [anon_sym_AT_ATdbts] = ACTIONS(176),
    [anon_sym_AT_AT_DOT] = ACTIONS(176),
    [anon_sym_AT_AT_EQ] = ACTIONS(176),
    [anon_sym_AT_ATk] = ACTIONS(176),
    [anon_sym_AT_ATt] = ACTIONS(176),
    [anon_sym_AT_ATb] = ACTIONS(176),
    [anon_sym_AT_ATi] = ACTIONS(176),
    [anon_sym_AT_ATiS] = ACTIONS(176),
    [anon_sym_AT_ATf] = ACTIONS(176),
    [anon_sym_AT_ATs_COLON] = ACTIONS(176),
    [anon_sym_AT_ATc_COLON] = ACTIONS(176),
    [anon_sym_AT] = ACTIONS(176),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_GT_GT] = ACTIONS(176),
    [sym_html_redirect_operator] = ACTIONS(176),
    [sym_html_append_operator] = ACTIONS(176),
    [aux_sym_arg_identifier_token1] = ACTIONS(176),
    [aux_sym_arg_identifier_token2] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
    [sym_file_descriptor] = ACTIONS(174),
  },
  [44] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(178),
    [anon_sym_TILDE] = ACTIONS(178),
    [anon_sym_PIPE] = ACTIONS(180),
    [anon_sym_PIPEH] = ACTIONS(178),
    [anon_sym_PIPET] = ACTIONS(178),
    [anon_sym_AT_AT] = ACTIONS(180),
    [anon_sym_AT_ATdbt] = ACTIONS(180),
    [anon_sym_AT_ATdbta] = ACTIONS(178),
    [anon_sym_AT_ATdbtb] = ACTIONS(178),
    [anon_sym_AT_ATdbts] = ACTIONS(178),
    [anon_sym_AT_AT_DOT] = ACTIONS(178),
    [anon_sym_AT_AT_EQ] = ACTIONS(178),
    [anon_sym_AT_ATk] = ACTIONS(178),
    [anon_sym_AT_ATt] = ACTIONS(178),
    [anon_sym_AT_ATb] = ACTIONS(178),
    [anon_sym_AT_ATi] = ACTIONS(180),
    [anon_sym_AT_ATiS] = ACTIONS(178),
    [anon_sym_AT_ATf] = ACTIONS(178),
    [anon_sym_AT_ATs_COLON] = ACTIONS(178),
    [anon_sym_AT_ATc_COLON] = ACTIONS(178),
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_AT_BANG] = ACTIONS(178),
    [anon_sym_AT_LPAREN] = ACTIONS(178),
    [anon_sym_ATa_COLON] = ACTIONS(178),
    [anon_sym_ATb_COLON] = ACTIONS(178),
    [anon_sym_ATB_COLON] = ACTIONS(178),
    [anon_sym_ATe_COLON] = ACTIONS(178),
    [anon_sym_COMMA] = ACTIONS(182),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(180),
    [anon_sym_GT_GT] = ACTIONS(178),
    [sym_html_redirect_operator] = ACTIONS(180),
    [sym_html_append_operator] = ACTIONS(178),
    [anon_sym_BQUOTE] = ACTIONS(178),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(178),
    [anon_sym_CR] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [sym_file_descriptor] = ACTIONS(178),
  },
  [45] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(46),
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
    [anon_sym_COMMA] = ACTIONS(182),
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [46] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_PIPEH] = ACTIONS(188),
    [anon_sym_PIPET] = ACTIONS(188),
    [anon_sym_AT_AT] = ACTIONS(190),
    [anon_sym_AT_ATdbt] = ACTIONS(190),
    [anon_sym_AT_ATdbta] = ACTIONS(188),
    [anon_sym_AT_ATdbtb] = ACTIONS(188),
    [anon_sym_AT_ATdbts] = ACTIONS(188),
    [anon_sym_AT_AT_DOT] = ACTIONS(188),
    [anon_sym_AT_AT_EQ] = ACTIONS(188),
    [anon_sym_AT_ATk] = ACTIONS(188),
    [anon_sym_AT_ATt] = ACTIONS(188),
    [anon_sym_AT_ATb] = ACTIONS(188),
    [anon_sym_AT_ATi] = ACTIONS(190),
    [anon_sym_AT_ATiS] = ACTIONS(188),
    [anon_sym_AT_ATf] = ACTIONS(188),
    [anon_sym_AT_ATs_COLON] = ACTIONS(188),
    [anon_sym_AT_ATc_COLON] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_AT_BANG] = ACTIONS(188),
    [anon_sym_AT_LPAREN] = ACTIONS(188),
    [anon_sym_ATa_COLON] = ACTIONS(188),
    [anon_sym_ATb_COLON] = ACTIONS(188),
    [anon_sym_ATB_COLON] = ACTIONS(188),
    [anon_sym_ATe_COLON] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_ATF_COLON] = ACTIONS(188),
    [anon_sym_ATi_COLON] = ACTIONS(188),
    [anon_sym_ATk_COLON] = ACTIONS(188),
    [anon_sym_ATo_COLON] = ACTIONS(188),
    [anon_sym_ATr_COLON] = ACTIONS(188),
    [anon_sym_ATf_COLON] = ACTIONS(188),
    [anon_sym_ATs_COLON] = ACTIONS(188),
    [anon_sym_ATx_COLON] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_PIPE_DOT] = ACTIONS(188),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(188),
    [sym_html_redirect_operator] = ACTIONS(190),
    [sym_html_append_operator] = ACTIONS(188),
    [anon_sym_BQUOTE] = ACTIONS(188),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_CR] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [sym_file_descriptor] = ACTIONS(188),
  },
  [47] = {
    [sym__redirect_operator] = STATE(161),
    [sym_fdn_redirect_operator] = STATE(161),
    [sym_fdn_append_operator] = STATE(161),
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(199),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(269),
    [sym_html_redirect_operator] = ACTIONS(271),
    [sym_html_append_operator] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(195),
    [anon_sym_CR] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_file_descriptor] = ACTIONS(275),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_PIPEH] = ACTIONS(188),
    [anon_sym_PIPET] = ACTIONS(188),
    [anon_sym_AT_AT] = ACTIONS(190),
    [anon_sym_AT_ATdbt] = ACTIONS(190),
    [anon_sym_AT_ATdbta] = ACTIONS(188),
    [anon_sym_AT_ATdbtb] = ACTIONS(188),
    [anon_sym_AT_ATdbts] = ACTIONS(188),
    [anon_sym_AT_AT_DOT] = ACTIONS(188),
    [anon_sym_AT_AT_EQ] = ACTIONS(188),
    [anon_sym_AT_ATk] = ACTIONS(188),
    [anon_sym_AT_ATt] = ACTIONS(188),
    [anon_sym_AT_ATb] = ACTIONS(188),
    [anon_sym_AT_ATi] = ACTIONS(190),
    [anon_sym_AT_ATiS] = ACTIONS(188),
    [anon_sym_AT_ATf] = ACTIONS(188),
    [anon_sym_AT_ATs_COLON] = ACTIONS(188),
    [anon_sym_AT_ATc_COLON] = ACTIONS(188),
    [anon_sym_AT] = ACTIONS(190),
    [anon_sym_AT_BANG] = ACTIONS(188),
    [anon_sym_AT_LPAREN] = ACTIONS(188),
    [anon_sym_ATa_COLON] = ACTIONS(188),
    [anon_sym_ATb_COLON] = ACTIONS(188),
    [anon_sym_ATB_COLON] = ACTIONS(188),
    [anon_sym_ATe_COLON] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_ATF_COLON] = ACTIONS(188),
    [anon_sym_ATi_COLON] = ACTIONS(188),
    [anon_sym_ATk_COLON] = ACTIONS(188),
    [anon_sym_ATo_COLON] = ACTIONS(188),
    [anon_sym_ATr_COLON] = ACTIONS(188),
    [anon_sym_ATf_COLON] = ACTIONS(188),
    [anon_sym_ATs_COLON] = ACTIONS(188),
    [anon_sym_ATx_COLON] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_PIPE_DOT] = ACTIONS(188),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(190),
    [anon_sym_GT_GT] = ACTIONS(188),
    [sym_html_redirect_operator] = ACTIONS(190),
    [sym_html_append_operator] = ACTIONS(188),
    [anon_sym_BQUOTE] = ACTIONS(188),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(188),
    [anon_sym_CR] = ACTIONS(188),
    [anon_sym_SEMI] = ACTIONS(188),
    [sym_file_descriptor] = ACTIONS(188),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_TILDE] = ACTIONS(277),
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
    [anon_sym_PIPE_DOT] = ACTIONS(277),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(281),
    [anon_sym_GT] = ACTIONS(279),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_html_redirect_operator] = ACTIONS(279),
    [sym_html_append_operator] = ACTIONS(277),
    [anon_sym_BQUOTE] = ACTIONS(277),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(277),
    [anon_sym_CR] = ACTIONS(277),
    [anon_sym_SEMI] = ACTIONS(277),
    [sym_file_descriptor] = ACTIONS(277),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
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
    [anon_sym_RPAREN] = ACTIONS(283),
    [anon_sym_LPAREN] = ACTIONS(287),
    [anon_sym_PIPE_DOT] = ACTIONS(283),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(285),
    [anon_sym_GT_GT] = ACTIONS(283),
    [sym_html_redirect_operator] = ACTIONS(285),
    [sym_html_append_operator] = ACTIONS(283),
    [anon_sym_BQUOTE] = ACTIONS(283),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(283),
    [anon_sym_CR] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(283),
    [sym_file_descriptor] = ACTIONS(283),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
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
    [anon_sym_COLON] = ACTIONS(293),
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
    [anon_sym_PIPE_DOT] = ACTIONS(289),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_GT_GT] = ACTIONS(289),
    [sym_html_redirect_operator] = ACTIONS(291),
    [sym_html_append_operator] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_CR] = ACTIONS(289),
    [anon_sym_SEMI] = ACTIONS(289),
    [sym_file_descriptor] = ACTIONS(289),
  },
  [52] = {
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
  [53] = {
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [54] = {
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
  [55] = {
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
  [56] = {
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
  [57] = {
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
  [58] = {
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
  [59] = {
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
  [60] = {
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
  [61] = {
    [sym_pipe_second_command] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_PIPEH] = ACTIONS(329),
    [anon_sym_PIPET] = ACTIONS(329),
    [anon_sym_AT_AT] = ACTIONS(329),
    [anon_sym_AT_ATdbt] = ACTIONS(329),
    [anon_sym_AT_ATdbta] = ACTIONS(329),
    [anon_sym_AT_ATdbtb] = ACTIONS(329),
    [anon_sym_AT_ATdbts] = ACTIONS(329),
    [anon_sym_AT_AT_DOT] = ACTIONS(329),
    [anon_sym_AT_AT_EQ] = ACTIONS(329),
    [anon_sym_AT_ATk] = ACTIONS(329),
    [anon_sym_AT_ATt] = ACTIONS(329),
    [anon_sym_AT_ATb] = ACTIONS(329),
    [anon_sym_AT_ATi] = ACTIONS(329),
    [anon_sym_AT_ATiS] = ACTIONS(329),
    [anon_sym_AT_ATf] = ACTIONS(329),
    [anon_sym_AT_ATs_COLON] = ACTIONS(329),
    [anon_sym_AT_ATc_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
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
    [anon_sym_PIPE_DOT] = ACTIONS(329),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_html_redirect_operator] = ACTIONS(329),
    [sym_html_append_operator] = ACTIONS(329),
    [sym__any_command] = ACTIONS(331),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_CR] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(327),
  },
  [62] = {
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
  [63] = {
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
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_PIPEH] = ACTIONS(341),
    [anon_sym_PIPET] = ACTIONS(341),
    [anon_sym_AT_AT] = ACTIONS(343),
    [anon_sym_AT_ATdbt] = ACTIONS(343),
    [anon_sym_AT_ATdbta] = ACTIONS(341),
    [anon_sym_AT_ATdbtb] = ACTIONS(341),
    [anon_sym_AT_ATdbts] = ACTIONS(341),
    [anon_sym_AT_AT_DOT] = ACTIONS(341),
    [anon_sym_AT_AT_EQ] = ACTIONS(341),
    [anon_sym_AT_ATk] = ACTIONS(341),
    [anon_sym_AT_ATt] = ACTIONS(341),
    [anon_sym_AT_ATb] = ACTIONS(341),
    [anon_sym_AT_ATi] = ACTIONS(343),
    [anon_sym_AT_ATiS] = ACTIONS(341),
    [anon_sym_AT_ATf] = ACTIONS(341),
    [anon_sym_AT_ATs_COLON] = ACTIONS(341),
    [anon_sym_AT_ATc_COLON] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym_AT_BANG] = ACTIONS(341),
    [anon_sym_AT_LPAREN] = ACTIONS(341),
    [anon_sym_ATa_COLON] = ACTIONS(341),
    [anon_sym_ATb_COLON] = ACTIONS(341),
    [anon_sym_ATB_COLON] = ACTIONS(341),
    [anon_sym_ATe_COLON] = ACTIONS(341),
    [anon_sym_ATF_COLON] = ACTIONS(341),
    [anon_sym_ATi_COLON] = ACTIONS(341),
    [anon_sym_ATk_COLON] = ACTIONS(341),
    [anon_sym_ATo_COLON] = ACTIONS(341),
    [anon_sym_ATr_COLON] = ACTIONS(341),
    [anon_sym_ATf_COLON] = ACTIONS(341),
    [anon_sym_ATs_COLON] = ACTIONS(341),
    [anon_sym_ATx_COLON] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_PIPE_DOT] = ACTIONS(341),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_GT_GT] = ACTIONS(341),
    [sym_html_redirect_operator] = ACTIONS(343),
    [sym_html_append_operator] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(341),
    [anon_sym_CR] = ACTIONS(341),
    [anon_sym_SEMI] = ACTIONS(341),
    [sym_file_descriptor] = ACTIONS(341),
  },
  [65] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [66] = {
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
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_PIPE] = ACTIONS(355),
    [anon_sym_PIPEH] = ACTIONS(353),
    [anon_sym_PIPET] = ACTIONS(353),
    [anon_sym_AT_AT] = ACTIONS(355),
    [anon_sym_AT_ATdbt] = ACTIONS(355),
    [anon_sym_AT_ATdbta] = ACTIONS(353),
    [anon_sym_AT_ATdbtb] = ACTIONS(353),
    [anon_sym_AT_ATdbts] = ACTIONS(353),
    [anon_sym_AT_AT_DOT] = ACTIONS(353),
    [anon_sym_AT_AT_EQ] = ACTIONS(353),
    [anon_sym_AT_ATk] = ACTIONS(353),
    [anon_sym_AT_ATt] = ACTIONS(353),
    [anon_sym_AT_ATb] = ACTIONS(353),
    [anon_sym_AT_ATi] = ACTIONS(355),
    [anon_sym_AT_ATiS] = ACTIONS(353),
    [anon_sym_AT_ATf] = ACTIONS(353),
    [anon_sym_AT_ATs_COLON] = ACTIONS(353),
    [anon_sym_AT_ATc_COLON] = ACTIONS(353),
    [anon_sym_AT] = ACTIONS(355),
    [anon_sym_AT_BANG] = ACTIONS(353),
    [anon_sym_AT_LPAREN] = ACTIONS(353),
    [anon_sym_ATa_COLON] = ACTIONS(353),
    [anon_sym_ATb_COLON] = ACTIONS(353),
    [anon_sym_ATB_COLON] = ACTIONS(353),
    [anon_sym_ATe_COLON] = ACTIONS(353),
    [anon_sym_ATF_COLON] = ACTIONS(353),
    [anon_sym_ATi_COLON] = ACTIONS(353),
    [anon_sym_ATk_COLON] = ACTIONS(353),
    [anon_sym_ATo_COLON] = ACTIONS(353),
    [anon_sym_ATr_COLON] = ACTIONS(353),
    [anon_sym_ATf_COLON] = ACTIONS(353),
    [anon_sym_ATs_COLON] = ACTIONS(353),
    [anon_sym_ATx_COLON] = ACTIONS(353),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_PIPE_DOT] = ACTIONS(353),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_GT_GT] = ACTIONS(353),
    [sym_html_redirect_operator] = ACTIONS(355),
    [sym_html_append_operator] = ACTIONS(353),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(353),
    [anon_sym_CR] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [sym_file_descriptor] = ACTIONS(353),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_TILDE] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_PIPEH] = ACTIONS(105),
    [anon_sym_PIPET] = ACTIONS(105),
    [anon_sym_AT_AT] = ACTIONS(109),
    [anon_sym_AT_ATdbt] = ACTIONS(109),
    [anon_sym_AT_ATdbta] = ACTIONS(105),
    [anon_sym_AT_ATdbtb] = ACTIONS(105),
    [anon_sym_AT_ATdbts] = ACTIONS(105),
    [anon_sym_AT_AT_DOT] = ACTIONS(105),
    [anon_sym_AT_AT_EQ] = ACTIONS(105),
    [anon_sym_AT_ATk] = ACTIONS(105),
    [anon_sym_AT_ATt] = ACTIONS(105),
    [anon_sym_AT_ATb] = ACTIONS(105),
    [anon_sym_AT_ATi] = ACTIONS(109),
    [anon_sym_AT_ATiS] = ACTIONS(105),
    [anon_sym_AT_ATf] = ACTIONS(105),
    [anon_sym_AT_ATs_COLON] = ACTIONS(105),
    [anon_sym_AT_ATc_COLON] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(109),
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
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(105),
    [sym_html_redirect_operator] = ACTIONS(109),
    [sym_html_append_operator] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_CR] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [sym_file_descriptor] = ACTIONS(105),
  },
  [69] = {
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
  [70] = {
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
  [71] = {
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
  [72] = {
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
  [73] = {
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
  [74] = {
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
  [75] = {
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
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_PIPEH] = ACTIONS(47),
    [anon_sym_PIPET] = ACTIONS(47),
    [anon_sym_AT_AT] = ACTIONS(49),
    [anon_sym_AT_ATdbt] = ACTIONS(49),
    [anon_sym_AT_ATdbta] = ACTIONS(47),
    [anon_sym_AT_ATdbtb] = ACTIONS(47),
    [anon_sym_AT_ATdbts] = ACTIONS(47),
    [anon_sym_AT_AT_DOT] = ACTIONS(47),
    [anon_sym_AT_AT_EQ] = ACTIONS(47),
    [anon_sym_AT_ATk] = ACTIONS(47),
    [anon_sym_AT_ATt] = ACTIONS(47),
    [anon_sym_AT_ATb] = ACTIONS(47),
    [anon_sym_AT_ATi] = ACTIONS(49),
    [anon_sym_AT_ATiS] = ACTIONS(47),
    [anon_sym_AT_ATf] = ACTIONS(47),
    [anon_sym_AT_ATs_COLON] = ACTIONS(47),
    [anon_sym_AT_ATc_COLON] = ACTIONS(47),
    [anon_sym_AT] = ACTIONS(49),
    [anon_sym_AT_BANG] = ACTIONS(47),
    [anon_sym_AT_LPAREN] = ACTIONS(47),
    [anon_sym_ATa_COLON] = ACTIONS(47),
    [anon_sym_ATb_COLON] = ACTIONS(47),
    [anon_sym_ATB_COLON] = ACTIONS(47),
    [anon_sym_ATe_COLON] = ACTIONS(47),
    [anon_sym_ATF_COLON] = ACTIONS(47),
    [anon_sym_ATi_COLON] = ACTIONS(47),
    [anon_sym_ATk_COLON] = ACTIONS(47),
    [anon_sym_ATo_COLON] = ACTIONS(47),
    [anon_sym_ATr_COLON] = ACTIONS(47),
    [anon_sym_ATf_COLON] = ACTIONS(47),
    [anon_sym_ATs_COLON] = ACTIONS(47),
    [anon_sym_ATx_COLON] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_PIPE_DOT] = ACTIONS(47),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_GT] = ACTIONS(47),
    [sym_html_redirect_operator] = ACTIONS(49),
    [sym_html_append_operator] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(47),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(47),
    [anon_sym_CR] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_file_descriptor] = ACTIONS(47),
  },
  [77] = {
    [sym_system_arg] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [sym_html_redirect_operator] = ACTIONS(387),
    [sym_html_append_operator] = ACTIONS(387),
    [sym__any_command] = ACTIONS(389),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_CR] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_file_descriptor] = ACTIONS(385),
  },
  [78] = {
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [79] = {
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
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(166),
    [sym_html_redirect_operator] = ACTIONS(168),
    [sym_html_append_operator] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [sym_file_descriptor] = ACTIONS(166),
  },
  [81] = {
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
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_TILDE] = ACTIONS(399),
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
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_PIPE_DOT] = ACTIONS(399),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(399),
    [sym_html_redirect_operator] = ACTIONS(401),
    [sym_html_append_operator] = ACTIONS(399),
    [anon_sym_BQUOTE] = ACTIONS(399),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_CR] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(399),
    [sym_file_descriptor] = ACTIONS(399),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(403),
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
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_PIPE_DOT] = ACTIONS(403),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(403),
    [sym_html_redirect_operator] = ACTIONS(405),
    [sym_html_append_operator] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(403),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_CR] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
    [sym_file_descriptor] = ACTIONS(403),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_TILDE] = ACTIONS(174),
    [anon_sym_PIPE] = ACTIONS(176),
    [anon_sym_PIPEH] = ACTIONS(174),
    [anon_sym_PIPET] = ACTIONS(174),
    [anon_sym_AT_AT] = ACTIONS(176),
    [anon_sym_AT_ATdbt] = ACTIONS(176),
    [anon_sym_AT_ATdbta] = ACTIONS(174),
    [anon_sym_AT_ATdbtb] = ACTIONS(174),
    [anon_sym_AT_ATdbts] = ACTIONS(174),
    [anon_sym_AT_AT_DOT] = ACTIONS(174),
    [anon_sym_AT_AT_EQ] = ACTIONS(174),
    [anon_sym_AT_ATk] = ACTIONS(174),
    [anon_sym_AT_ATt] = ACTIONS(174),
    [anon_sym_AT_ATb] = ACTIONS(174),
    [anon_sym_AT_ATi] = ACTIONS(176),
    [anon_sym_AT_ATiS] = ACTIONS(174),
    [anon_sym_AT_ATf] = ACTIONS(174),
    [anon_sym_AT_ATs_COLON] = ACTIONS(174),
    [anon_sym_AT_ATc_COLON] = ACTIONS(174),
    [anon_sym_AT] = ACTIONS(176),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_GT_GT] = ACTIONS(174),
    [sym_html_redirect_operator] = ACTIONS(176),
    [sym_html_append_operator] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
    [sym_file_descriptor] = ACTIONS(174),
  },
  [85] = {
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_TILDE] = ACTIONS(407),
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
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_PIPE_DOT] = ACTIONS(407),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_GT] = ACTIONS(407),
    [sym_html_redirect_operator] = ACTIONS(409),
    [sym_html_append_operator] = ACTIONS(407),
    [anon_sym_BQUOTE] = ACTIONS(407),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(407),
    [anon_sym_CR] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(407),
    [sym_file_descriptor] = ACTIONS(407),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(411),
    [anon_sym_TILDE] = ACTIONS(411),
    [anon_sym_PIPE] = ACTIONS(413),
    [anon_sym_PIPEH] = ACTIONS(411),
    [anon_sym_PIPET] = ACTIONS(411),
    [anon_sym_AT_AT] = ACTIONS(413),
    [anon_sym_AT_ATdbt] = ACTIONS(413),
    [anon_sym_AT_ATdbta] = ACTIONS(411),
    [anon_sym_AT_ATdbtb] = ACTIONS(411),
    [anon_sym_AT_ATdbts] = ACTIONS(411),
    [anon_sym_AT_AT_DOT] = ACTIONS(411),
    [anon_sym_AT_AT_EQ] = ACTIONS(411),
    [anon_sym_AT_ATk] = ACTIONS(411),
    [anon_sym_AT_ATt] = ACTIONS(411),
    [anon_sym_AT_ATb] = ACTIONS(411),
    [anon_sym_AT_ATi] = ACTIONS(413),
    [anon_sym_AT_ATiS] = ACTIONS(411),
    [anon_sym_AT_ATf] = ACTIONS(411),
    [anon_sym_AT_ATs_COLON] = ACTIONS(411),
    [anon_sym_AT_ATc_COLON] = ACTIONS(411),
    [anon_sym_AT] = ACTIONS(413),
    [anon_sym_AT_BANG] = ACTIONS(411),
    [anon_sym_AT_LPAREN] = ACTIONS(411),
    [anon_sym_ATa_COLON] = ACTIONS(411),
    [anon_sym_ATb_COLON] = ACTIONS(411),
    [anon_sym_ATB_COLON] = ACTIONS(411),
    [anon_sym_ATe_COLON] = ACTIONS(411),
    [anon_sym_ATF_COLON] = ACTIONS(411),
    [anon_sym_ATi_COLON] = ACTIONS(411),
    [anon_sym_ATk_COLON] = ACTIONS(411),
    [anon_sym_ATo_COLON] = ACTIONS(411),
    [anon_sym_ATr_COLON] = ACTIONS(411),
    [anon_sym_ATf_COLON] = ACTIONS(411),
    [anon_sym_ATs_COLON] = ACTIONS(411),
    [anon_sym_ATx_COLON] = ACTIONS(411),
    [anon_sym_RPAREN] = ACTIONS(411),
    [anon_sym_PIPE_DOT] = ACTIONS(411),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_GT_GT] = ACTIONS(411),
    [sym_html_redirect_operator] = ACTIONS(413),
    [sym_html_append_operator] = ACTIONS(411),
    [anon_sym_BQUOTE] = ACTIONS(411),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(411),
    [anon_sym_CR] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(411),
    [sym_file_descriptor] = ACTIONS(411),
  },
  [88] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [89] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [90] = {
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
  [91] = {
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
  [92] = {
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
  [93] = {
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
  [94] = {
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
  [95] = {
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
  [96] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [97] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [98] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [99] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [100] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [101] = {
    [sym__eq_sep_args] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(469),
    [anon_sym_PIPET] = ACTIONS(469),
    [anon_sym_AT_AT] = ACTIONS(469),
    [anon_sym_AT_ATdbt] = ACTIONS(469),
    [anon_sym_AT_ATdbta] = ACTIONS(469),
    [anon_sym_AT_ATdbtb] = ACTIONS(469),
    [anon_sym_AT_ATdbts] = ACTIONS(469),
    [anon_sym_AT_AT_DOT] = ACTIONS(469),
    [anon_sym_AT_AT_EQ] = ACTIONS(469),
    [anon_sym_AT_ATk] = ACTIONS(469),
    [anon_sym_AT_ATt] = ACTIONS(469),
    [anon_sym_AT_ATb] = ACTIONS(469),
    [anon_sym_AT_ATi] = ACTIONS(469),
    [anon_sym_AT_ATiS] = ACTIONS(469),
    [anon_sym_AT_ATf] = ACTIONS(469),
    [anon_sym_AT_ATs_COLON] = ACTIONS(469),
    [anon_sym_AT_ATc_COLON] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
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
    [anon_sym_PIPE_DOT] = ACTIONS(469),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [sym_html_redirect_operator] = ACTIONS(469),
    [sym_html_append_operator] = ACTIONS(469),
    [sym_eq_sep_key] = ACTIONS(471),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_CR] = ACTIONS(469),
    [anon_sym_SEMI] = ACTIONS(469),
    [sym_file_descriptor] = ACTIONS(467),
  },
  [102] = {
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
  [103] = {
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
  [104] = {
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
  [105] = {
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
  [106] = {
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
  [107] = {
    [sym__redirect_operator] = STATE(161),
    [sym_fdn_redirect_operator] = STATE(161),
    [sym_fdn_append_operator] = STATE(161),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(269),
    [sym_html_redirect_operator] = ACTIONS(271),
    [sym_html_append_operator] = ACTIONS(273),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_file_descriptor] = ACTIONS(275),
  },
  [108] = {
    [sym__redirect_operator] = STATE(161),
    [sym_fdn_redirect_operator] = STATE(161),
    [sym_fdn_append_operator] = STATE(161),
    [anon_sym_TILDE] = ACTIONS(197),
    [anon_sym_PIPE] = ACTIONS(497),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(499),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(267),
    [anon_sym_GT_GT] = ACTIONS(269),
    [sym_html_redirect_operator] = ACTIONS(271),
    [sym_html_append_operator] = ACTIONS(273),
    [anon_sym_BQUOTE] = ACTIONS(195),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(195),
    [sym_file_descriptor] = ACTIONS(275),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(505),
    [anon_sym_PIPET] = ACTIONS(505),
    [anon_sym_AT_AT] = ACTIONS(505),
    [anon_sym_AT_ATdbt] = ACTIONS(505),
    [anon_sym_AT_ATdbta] = ACTIONS(505),
    [anon_sym_AT_ATdbtb] = ACTIONS(505),
    [anon_sym_AT_ATdbts] = ACTIONS(505),
    [anon_sym_AT_AT_DOT] = ACTIONS(505),
    [anon_sym_AT_AT_EQ] = ACTIONS(505),
    [anon_sym_AT_ATk] = ACTIONS(505),
    [anon_sym_AT_ATt] = ACTIONS(505),
    [anon_sym_AT_ATb] = ACTIONS(505),
    [anon_sym_AT_ATi] = ACTIONS(505),
    [anon_sym_AT_ATiS] = ACTIONS(505),
    [anon_sym_AT_ATf] = ACTIONS(505),
    [anon_sym_AT_ATs_COLON] = ACTIONS(505),
    [anon_sym_AT_ATc_COLON] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(505),
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
    [anon_sym_PIPE_DOT] = ACTIONS(505),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(505),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(505),
    [sym_eq_sep_key] = ACTIONS(505),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(505),
    [anon_sym_CR] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [110] = {
    [sym__eq_sep_args] = STATE(94),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(469),
    [anon_sym_PIPET] = ACTIONS(469),
    [anon_sym_AT_AT] = ACTIONS(469),
    [anon_sym_AT_ATdbt] = ACTIONS(469),
    [anon_sym_AT_ATdbta] = ACTIONS(469),
    [anon_sym_AT_ATdbtb] = ACTIONS(469),
    [anon_sym_AT_ATdbts] = ACTIONS(469),
    [anon_sym_AT_AT_DOT] = ACTIONS(469),
    [anon_sym_AT_AT_EQ] = ACTIONS(469),
    [anon_sym_AT_ATk] = ACTIONS(469),
    [anon_sym_AT_ATt] = ACTIONS(469),
    [anon_sym_AT_ATb] = ACTIONS(469),
    [anon_sym_AT_ATi] = ACTIONS(469),
    [anon_sym_AT_ATiS] = ACTIONS(469),
    [anon_sym_AT_ATf] = ACTIONS(469),
    [anon_sym_AT_ATs_COLON] = ACTIONS(469),
    [anon_sym_AT_ATc_COLON] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [sym_html_redirect_operator] = ACTIONS(469),
    [sym_html_append_operator] = ACTIONS(469),
    [sym_eq_sep_key] = ACTIONS(471),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(469),
    [sym_file_descriptor] = ACTIONS(467),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_TILDE] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_GT_GT] = ACTIONS(507),
    [sym_html_redirect_operator] = ACTIONS(509),
    [sym_html_append_operator] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(507),
    [anon_sym_CR] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_file_descriptor] = ACTIONS(507),
  },
  [112] = {
    [sym_system_arg] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [sym_html_redirect_operator] = ACTIONS(387),
    [sym_html_append_operator] = ACTIONS(387),
    [sym__any_command] = ACTIONS(389),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_file_descriptor] = ACTIONS(385),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(511),
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(233),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(513),
    [sym_html_append_operator] = ACTIONS(511),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_CR] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(511),
  },
  [114] = {
    [sym_pipe_second_command] = STATE(106),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_PIPEH] = ACTIONS(329),
    [anon_sym_PIPET] = ACTIONS(329),
    [anon_sym_AT_AT] = ACTIONS(329),
    [anon_sym_AT_ATdbt] = ACTIONS(329),
    [anon_sym_AT_ATdbta] = ACTIONS(329),
    [anon_sym_AT_ATdbtb] = ACTIONS(329),
    [anon_sym_AT_ATdbts] = ACTIONS(329),
    [anon_sym_AT_AT_DOT] = ACTIONS(329),
    [anon_sym_AT_AT_EQ] = ACTIONS(329),
    [anon_sym_AT_ATk] = ACTIONS(329),
    [anon_sym_AT_ATt] = ACTIONS(329),
    [anon_sym_AT_ATb] = ACTIONS(329),
    [anon_sym_AT_ATi] = ACTIONS(329),
    [anon_sym_AT_ATiS] = ACTIONS(329),
    [anon_sym_AT_ATf] = ACTIONS(329),
    [anon_sym_AT_ATs_COLON] = ACTIONS(329),
    [anon_sym_AT_ATc_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_html_redirect_operator] = ACTIONS(329),
    [sym_html_append_operator] = ACTIONS(329),
    [sym__any_command] = ACTIONS(331),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(327),
  },
  [115] = {
    [sym_pipe_second_command] = STATE(106),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_PIPEH] = ACTIONS(329),
    [anon_sym_PIPET] = ACTIONS(329),
    [anon_sym_AT_AT] = ACTIONS(329),
    [anon_sym_AT_ATdbt] = ACTIONS(329),
    [anon_sym_AT_ATdbta] = ACTIONS(329),
    [anon_sym_AT_ATdbtb] = ACTIONS(329),
    [anon_sym_AT_ATdbts] = ACTIONS(329),
    [anon_sym_AT_AT_DOT] = ACTIONS(329),
    [anon_sym_AT_AT_EQ] = ACTIONS(329),
    [anon_sym_AT_ATk] = ACTIONS(329),
    [anon_sym_AT_ATt] = ACTIONS(329),
    [anon_sym_AT_ATb] = ACTIONS(329),
    [anon_sym_AT_ATi] = ACTIONS(329),
    [anon_sym_AT_ATiS] = ACTIONS(329),
    [anon_sym_AT_ATf] = ACTIONS(329),
    [anon_sym_AT_ATs_COLON] = ACTIONS(329),
    [anon_sym_AT_ATc_COLON] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
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
    [anon_sym_PIPE_DOT] = ACTIONS(329),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_html_redirect_operator] = ACTIONS(329),
    [sym_html_append_operator] = ACTIONS(329),
    [sym__any_command] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(329),
    [sym_file_descriptor] = ACTIONS(327),
  },
  [116] = {
    [sym__eq_sep_args] = STATE(94),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_PIPE] = ACTIONS(469),
    [anon_sym_PIPEH] = ACTIONS(469),
    [anon_sym_PIPET] = ACTIONS(469),
    [anon_sym_AT_AT] = ACTIONS(469),
    [anon_sym_AT_ATdbt] = ACTIONS(469),
    [anon_sym_AT_ATdbta] = ACTIONS(469),
    [anon_sym_AT_ATdbtb] = ACTIONS(469),
    [anon_sym_AT_ATdbts] = ACTIONS(469),
    [anon_sym_AT_AT_DOT] = ACTIONS(469),
    [anon_sym_AT_AT_EQ] = ACTIONS(469),
    [anon_sym_AT_ATk] = ACTIONS(469),
    [anon_sym_AT_ATt] = ACTIONS(469),
    [anon_sym_AT_ATb] = ACTIONS(469),
    [anon_sym_AT_ATi] = ACTIONS(469),
    [anon_sym_AT_ATiS] = ACTIONS(469),
    [anon_sym_AT_ATf] = ACTIONS(469),
    [anon_sym_AT_ATs_COLON] = ACTIONS(469),
    [anon_sym_AT_ATc_COLON] = ACTIONS(469),
    [anon_sym_AT] = ACTIONS(469),
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
    [anon_sym_PIPE_DOT] = ACTIONS(469),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_GT_GT] = ACTIONS(469),
    [sym_html_redirect_operator] = ACTIONS(469),
    [sym_html_append_operator] = ACTIONS(469),
    [sym_eq_sep_key] = ACTIONS(471),
    [anon_sym_BQUOTE] = ACTIONS(469),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(469),
    [sym_file_descriptor] = ACTIONS(467),
  },
  [117] = {
    [sym_system_arg] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_PIPE] = ACTIONS(387),
    [anon_sym_PIPEH] = ACTIONS(387),
    [anon_sym_PIPET] = ACTIONS(387),
    [anon_sym_AT_AT] = ACTIONS(387),
    [anon_sym_AT_ATdbt] = ACTIONS(387),
    [anon_sym_AT_ATdbta] = ACTIONS(387),
    [anon_sym_AT_ATdbtb] = ACTIONS(387),
    [anon_sym_AT_ATdbts] = ACTIONS(387),
    [anon_sym_AT_AT_DOT] = ACTIONS(387),
    [anon_sym_AT_AT_EQ] = ACTIONS(387),
    [anon_sym_AT_ATk] = ACTIONS(387),
    [anon_sym_AT_ATt] = ACTIONS(387),
    [anon_sym_AT_ATb] = ACTIONS(387),
    [anon_sym_AT_ATi] = ACTIONS(387),
    [anon_sym_AT_ATiS] = ACTIONS(387),
    [anon_sym_AT_ATf] = ACTIONS(387),
    [anon_sym_AT_ATs_COLON] = ACTIONS(387),
    [anon_sym_AT_ATc_COLON] = ACTIONS(387),
    [anon_sym_AT] = ACTIONS(387),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(387),
    [anon_sym_GT_GT] = ACTIONS(387),
    [sym_html_redirect_operator] = ACTIONS(387),
    [sym_html_append_operator] = ACTIONS(387),
    [sym__any_command] = ACTIONS(389),
    [anon_sym_BQUOTE] = ACTIONS(387),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_file_descriptor] = ACTIONS(385),
  },
  [118] = {
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(505),
    [anon_sym_PIPET] = ACTIONS(505),
    [anon_sym_AT_AT] = ACTIONS(505),
    [anon_sym_AT_ATdbt] = ACTIONS(505),
    [anon_sym_AT_ATdbta] = ACTIONS(505),
    [anon_sym_AT_ATdbtb] = ACTIONS(505),
    [anon_sym_AT_ATdbts] = ACTIONS(505),
    [anon_sym_AT_AT_DOT] = ACTIONS(505),
    [anon_sym_AT_AT_EQ] = ACTIONS(505),
    [anon_sym_AT_ATk] = ACTIONS(505),
    [anon_sym_AT_ATt] = ACTIONS(505),
    [anon_sym_AT_ATb] = ACTIONS(505),
    [anon_sym_AT_ATi] = ACTIONS(505),
    [anon_sym_AT_ATiS] = ACTIONS(505),
    [anon_sym_AT_ATf] = ACTIONS(505),
    [anon_sym_AT_ATs_COLON] = ACTIONS(505),
    [anon_sym_AT_ATc_COLON] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(505),
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
    [anon_sym_PIPE_DOT] = ACTIONS(505),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(505),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(505),
    [sym_eq_sep_key] = ACTIONS(505),
    [anon_sym_BQUOTE] = ACTIONS(505),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [119] = {
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(505),
    [anon_sym_PIPET] = ACTIONS(505),
    [anon_sym_AT_AT] = ACTIONS(505),
    [anon_sym_AT_ATdbt] = ACTIONS(505),
    [anon_sym_AT_ATdbta] = ACTIONS(505),
    [anon_sym_AT_ATdbtb] = ACTIONS(505),
    [anon_sym_AT_ATdbts] = ACTIONS(505),
    [anon_sym_AT_AT_DOT] = ACTIONS(505),
    [anon_sym_AT_AT_EQ] = ACTIONS(505),
    [anon_sym_AT_ATk] = ACTIONS(505),
    [anon_sym_AT_ATt] = ACTIONS(505),
    [anon_sym_AT_ATb] = ACTIONS(505),
    [anon_sym_AT_ATi] = ACTIONS(505),
    [anon_sym_AT_ATiS] = ACTIONS(505),
    [anon_sym_AT_ATf] = ACTIONS(505),
    [anon_sym_AT_ATs_COLON] = ACTIONS(505),
    [anon_sym_AT_ATc_COLON] = ACTIONS(505),
    [anon_sym_AT] = ACTIONS(505),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(505),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(505),
    [sym_eq_sep_key] = ACTIONS(505),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [120] = {
    [anon_sym_TILDE] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(499),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_GT_GT] = ACTIONS(507),
    [sym_html_redirect_operator] = ACTIONS(509),
    [sym_html_append_operator] = ACTIONS(507),
    [anon_sym_BQUOTE] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_file_descriptor] = ACTIONS(507),
  },
  [121] = {
    [anon_sym_TILDE] = ACTIONS(507),
    [anon_sym_PIPE] = ACTIONS(509),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(507),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_GT_GT] = ACTIONS(507),
    [sym_html_redirect_operator] = ACTIONS(509),
    [sym_html_append_operator] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_file_descriptor] = ACTIONS(507),
  },
  [122] = {
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(499),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(501),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(513),
    [sym_html_append_operator] = ACTIONS(511),
    [anon_sym_BQUOTE] = ACTIONS(511),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(511),
  },
  [123] = {
    [anon_sym_TILDE] = ACTIONS(511),
    [anon_sym_PIPE] = ACTIONS(513),
    [anon_sym_PIPEH] = ACTIONS(201),
    [anon_sym_PIPET] = ACTIONS(203),
    [anon_sym_AT_AT] = ACTIONS(205),
    [anon_sym_AT_ATdbt] = ACTIONS(207),
    [anon_sym_AT_ATdbta] = ACTIONS(209),
    [anon_sym_AT_ATdbtb] = ACTIONS(211),
    [anon_sym_AT_ATdbts] = ACTIONS(213),
    [anon_sym_AT_AT_DOT] = ACTIONS(215),
    [anon_sym_AT_AT_EQ] = ACTIONS(217),
    [anon_sym_AT_ATk] = ACTIONS(219),
    [anon_sym_AT_ATt] = ACTIONS(221),
    [anon_sym_AT_ATb] = ACTIONS(223),
    [anon_sym_AT_ATi] = ACTIONS(225),
    [anon_sym_AT_ATiS] = ACTIONS(227),
    [anon_sym_AT_ATf] = ACTIONS(229),
    [anon_sym_AT_ATs_COLON] = ACTIONS(231),
    [anon_sym_AT_ATc_COLON] = ACTIONS(495),
    [anon_sym_AT] = ACTIONS(235),
    [anon_sym_AT_BANG] = ACTIONS(237),
    [anon_sym_AT_LPAREN] = ACTIONS(239),
    [anon_sym_ATa_COLON] = ACTIONS(241),
    [anon_sym_ATb_COLON] = ACTIONS(243),
    [anon_sym_ATB_COLON] = ACTIONS(245),
    [anon_sym_ATe_COLON] = ACTIONS(247),
    [anon_sym_ATF_COLON] = ACTIONS(249),
    [anon_sym_ATi_COLON] = ACTIONS(251),
    [anon_sym_ATk_COLON] = ACTIONS(253),
    [anon_sym_ATo_COLON] = ACTIONS(255),
    [anon_sym_ATr_COLON] = ACTIONS(257),
    [anon_sym_ATf_COLON] = ACTIONS(259),
    [anon_sym_ATs_COLON] = ACTIONS(261),
    [anon_sym_ATx_COLON] = ACTIONS(263),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_PIPE_DOT] = ACTIONS(265),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_GT_GT] = ACTIONS(511),
    [sym_html_redirect_operator] = ACTIONS(513),
    [sym_html_append_operator] = ACTIONS(511),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_file_descriptor] = ACTIONS(511),
  },
  [124] = {
    [aux_sym_commands_repeat1] = STATE(124),
    [ts_builtin_sym_end] = ACTIONS(515),
    [anon_sym_DQUOTE] = ACTIONS(515),
    [sym_interpreter_command] = ACTIONS(517),
    [anon_sym_LPAREN_STAR] = ACTIONS(515),
    [anon_sym_DOT] = ACTIONS(517),
    [anon_sym_DOT_BANG] = ACTIONS(515),
    [anon_sym_DOT_LPAREN] = ACTIONS(515),
    [anon_sym_DOT_SLASH] = ACTIONS(515),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(515),
    [anon_sym_env] = ACTIONS(515),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(517),
    [aux_sym__interpret_identifier_token1] = ACTIONS(517),
    [aux_sym__interpret_identifier_token2] = ACTIONS(515),
    [sym_system_identifier] = ACTIONS(515),
    [sym_question_mark_identifier] = ACTIONS(515),
    [sym_pointer_identifier] = ACTIONS(515),
    [sym_macro_identifier] = ACTIONS(517),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(519),
    [anon_sym_CR] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(519),
    [sym_cmd_identifier] = ACTIONS(515),
    [sym__help_command] = ACTIONS(515),
    [sym_repeat_number] = ACTIONS(515),
  },
  [125] = {
    [aux_sym__commands_singleline_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(522),
    [sym_interpreter_command] = ACTIONS(524),
    [anon_sym_LPAREN_STAR] = ACTIONS(522),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_DOT_BANG] = ACTIONS(522),
    [anon_sym_DOT_LPAREN] = ACTIONS(522),
    [anon_sym_DOT_SLASH] = ACTIONS(522),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(522),
    [anon_sym_env] = ACTIONS(522),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(524),
    [aux_sym__interpret_identifier_token1] = ACTIONS(524),
    [aux_sym__interpret_identifier_token2] = ACTIONS(522),
    [sym_system_identifier] = ACTIONS(522),
    [sym_question_mark_identifier] = ACTIONS(522),
    [sym_pointer_identifier] = ACTIONS(522),
    [sym_macro_identifier] = ACTIONS(524),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(526),
    [sym_cmd_identifier] = ACTIONS(522),
    [sym__help_command] = ACTIONS(522),
    [sym_repeat_number] = ACTIONS(522),
  },
  [126] = {
    [sym_arg] = STATE(129),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(533),
    [anon_sym_CR] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(533),
  },
  [127] = {
    [sym_arg] = STATE(126),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_CR] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(545),
  },
  [128] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(545),
    [anon_sym_CR] = ACTIONS(545),
    [anon_sym_SEMI] = ACTIONS(545),
  },
  [129] = {
    [sym_arg] = STATE(129),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(129),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(547),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(550),
    [aux_sym_arg_identifier_token2] = ACTIONS(550),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(556),
    [anon_sym_BQUOTE] = ACTIONS(559),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(132),
    [anon_sym_CR] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(132),
  },
  [130] = {
    [sym_arg] = STATE(131),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(545),
  },
  [131] = {
    [sym_arg] = STATE(129),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [aux_sym_iter_offsets_command_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(533),
  },
  [132] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(545),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [137] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [138] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [139] = {
    [sym_arg] = STATE(35),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(35),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [140] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [141] = {
    [sym_arg] = STATE(31),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(31),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [142] = {
    [sym_arg] = STATE(37),
    [sym_arg_identifier] = STATE(43),
    [sym_quoted_arg] = STATE(43),
    [sym_cmd_substitution_arg] = STATE(43),
    [aux_sym_iter_offsets_command_repeat1] = STATE(37),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(176),
    [anon_sym_RPAREN] = ACTIONS(176),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(176),
    [aux_sym_arg_identifier_token2] = ACTIONS(176),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(176),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(176),
    [anon_sym_CR] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(176),
  },
  [144] = {
    [sym_arg] = STATE(69),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [145] = {
    [sym_arg] = STATE(74),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [146] = {
    [sym_arg] = STATE(89),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [147] = {
    [sym_arg] = STATE(81),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [148] = {
    [sym_arg] = STATE(91),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [149] = {
    [sym_arg] = STATE(79),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [150] = {
    [sym_arg] = STATE(100),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [151] = {
    [sym_arg] = STATE(99),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [152] = {
    [sym_arg] = STATE(160),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym__comment] = ACTIONS(5),
  },
  [153] = {
    [sym_arg] = STATE(98),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [154] = {
    [sym_arg] = STATE(96),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [155] = {
    [sym_arg] = STATE(159),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym__comment] = ACTIONS(5),
  },
  [156] = {
    [sym_arg] = STATE(93),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [157] = {
    [sym_arg] = STATE(88),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [158] = {
    [sym_arg] = STATE(83),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [159] = {
    [sym_arg] = STATE(60),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [160] = {
    [sym_arg] = STATE(144),
    [sym_arg_identifier] = STATE(143),
    [sym_quoted_arg] = STATE(143),
    [sym_cmd_substitution_arg] = STATE(143),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(535),
    [aux_sym_arg_identifier_token2] = ACTIONS(535),
    [anon_sym_SQUOTE] = ACTIONS(537),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(539),
    [anon_sym_BQUOTE] = ACTIONS(541),
    [sym__comment] = ACTIONS(5),
  },
  [161] = {
    [sym_arg] = STATE(179),
    [sym_arg_identifier] = STATE(173),
    [sym_quoted_arg] = STATE(173),
    [sym_cmd_substitution_arg] = STATE(173),
    [anon_sym_DQUOTE] = ACTIONS(572),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(574),
    [aux_sym_arg_identifier_token2] = ACTIONS(574),
    [anon_sym_SQUOTE] = ACTIONS(576),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(578),
    [anon_sym_BQUOTE] = ACTIONS(580),
    [sym__comment] = ACTIONS(5),
  },
  [162] = {
    [sym_arg] = STATE(86),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [163] = {
    [sym_arg] = STATE(75),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [164] = {
    [sym_arg] = STATE(87),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [165] = {
    [sym_arg] = STATE(82),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [166] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(564),
    [aux_sym_arg_identifier_token2] = ACTIONS(564),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(568),
    [anon_sym_BQUOTE] = ACTIONS(570),
    [sym__comment] = ACTIONS(5),
  },
  [167] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(582),
    [anon_sym_] = ACTIONS(584),
    [aux_sym_arg_identifier_token1] = ACTIONS(582),
    [aux_sym_arg_identifier_token2] = ACTIONS(582),
    [anon_sym_SQUOTE] = ACTIONS(582),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(582),
    [anon_sym_BQUOTE] = ACTIONS(582),
    [sym__comment] = ACTIONS(5),
  },
  [168] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(169),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_] = ACTIONS(589),
    [aux_sym_arg_identifier_token1] = ACTIONS(587),
    [aux_sym_arg_identifier_token2] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(587),
    [anon_sym_BQUOTE] = ACTIONS(587),
    [sym__comment] = ACTIONS(5),
  },
  [169] = {
    [aux_sym__interpret_search_identifier_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_] = ACTIONS(593),
    [aux_sym_arg_identifier_token1] = ACTIONS(591),
    [aux_sym_arg_identifier_token2] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(591),
    [sym__comment] = ACTIONS(5),
  },
  [170] = {
    [anon_sym_DQUOTE] = ACTIONS(595),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(595),
    [aux_sym_arg_identifier_token2] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(595),
    [anon_sym_BQUOTE] = ACTIONS(595),
    [sym__comment] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(597),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(597),
    [anon_sym_CR] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(597),
  },
  [175] = {
    [anon_sym_DQUOTE] = ACTIONS(599),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(599),
    [aux_sym_arg_identifier_token2] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(599),
    [anon_sym_BQUOTE] = ACTIONS(599),
    [sym__comment] = ACTIONS(5),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [177] = {
    [anon_sym_DQUOTE] = ACTIONS(601),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(601),
    [aux_sym_arg_identifier_token2] = ACTIONS(601),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [sym__comment] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(603),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_CR] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
  },
  [180] = {
    [anon_sym_DQUOTE] = ACTIONS(605),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(605),
    [aux_sym_arg_identifier_token2] = ACTIONS(605),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(605),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [sym__comment] = ACTIONS(5),
  },
  [181] = {
    [aux_sym_commands_repeat2] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(609),
    [anon_sym_CR] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(609),
  },
  [182] = {
    [aux_sym_commands_repeat2] = STATE(183),
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(612),
    [anon_sym_CR] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(612),
  },
  [183] = {
    [aux_sym_commands_repeat2] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(614),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(612),
    [anon_sym_CR] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(612),
  },
  [184] = {
    [aux_sym_commands_repeat2] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(614),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(612),
    [anon_sym_CR] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(612),
  },
  [185] = {
    [aux_sym_commands_repeat2] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(616),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(612),
    [anon_sym_CR] = ACTIONS(612),
    [anon_sym_SEMI] = ACTIONS(612),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(607),
    [anon_sym_CR] = ACTIONS(607),
    [anon_sym_SEMI] = ACTIONS(607),
  },
  [187] = {
    [aux_sym__commands_singleline_repeat2] = STATE(189),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(618),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(620),
  },
  [188] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(618),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(620),
  },
  [189] = {
    [aux_sym__commands_singleline_repeat2] = STATE(189),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(622),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(624),
  },
  [190] = {
    [aux_sym__commands_singleline_repeat2] = STATE(189),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(620),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(622),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(622),
  },
  [192] = {
    [aux_sym__commands_singleline_repeat2] = STATE(187),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(629),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(620),
  },
  [193] = {
    [aux_sym__commands_singleline_repeat2] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(631),
  },
  [194] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(631),
  },
  [195] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(633),
  },
  [196] = {
    [aux_sym__commands_singleline_repeat2] = STATE(197),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(631),
  },
  [197] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(618),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(631),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_] = ACTIONS(5),
    [sym_macro_call_content] = ACTIONS(638),
    [sym__comment] = ACTIONS(5),
  },
  [199] = {
    [sym_interpret_arg] = STATE(68),
    [anon_sym_] = ACTIONS(5),
    [sym__any_command] = ACTIONS(640),
    [sym__comment] = ACTIONS(5),
  },
  [200] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(642),
    [anon_sym_GT_GT] = ACTIONS(644),
    [sym__comment] = ACTIONS(3),
  },
  [201] = {
    [sym__eq_sep_args] = STATE(56),
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_key] = ACTIONS(471),
    [sym__comment] = ACTIONS(5),
  },
  [202] = {
    [anon_sym_DQUOTE] = ACTIONS(646),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(648),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(650),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(652),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [206] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(654),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_val] = ACTIONS(656),
    [sym__comment] = ACTIONS(5),
  },
  [208] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(658),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [209] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(660),
    [sym__comment] = ACTIONS(5),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(664),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(666),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(668),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [215] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(670),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [217] = {
    [sym_grep_specifier] = ACTIONS(674),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [218] = {
    [anon_sym_DQUOTE] = ACTIONS(648),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(676),
    [sym__comment] = ACTIONS(5),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(678),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [221] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(680),
    [sym__comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_DQUOTE] = ACTIONS(682),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(682),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [225] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(686),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(688),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [227] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(690),
    [sym__comment] = ACTIONS(5),
  },
  [228] = {
    [anon_sym_DQUOTE] = ACTIONS(650),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [229] = {
    [anon_sym_DQUOTE] = ACTIONS(692),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(694),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [231] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(696),
    [sym__comment] = ACTIONS(5),
  },
  [232] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(698),
    [sym__comment] = ACTIONS(5),
  },
  [233] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(700),
    [sym__comment] = ACTIONS(5),
  },
  [234] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(702),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [235] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(704),
    [sym__comment] = ACTIONS(5),
  },
  [236] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(706),
    [sym__comment] = ACTIONS(5),
  },
  [237] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(708),
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
  [9] = {.count = 1, .reusable = true}, SHIFT(237),
  [11] = {.count = 1, .reusable = false}, SHIFT(182),
  [13] = {.count = 1, .reusable = true}, SHIFT(57),
  [15] = {.count = 1, .reusable = false}, SHIFT(2),
  [17] = {.count = 1, .reusable = true}, SHIFT(199),
  [19] = {.count = 1, .reusable = true}, SHIFT(232),
  [21] = {.count = 1, .reusable = true}, SHIFT(168),
  [23] = {.count = 1, .reusable = true}, SHIFT(109),
  [25] = {.count = 1, .reusable = false}, SHIFT(76),
  [27] = {.count = 1, .reusable = false}, SHIFT(42),
  [29] = {.count = 1, .reusable = true}, SHIFT(42),
  [31] = {.count = 1, .reusable = true}, SHIFT(77),
  [33] = {.count = 1, .reusable = true}, SHIFT(128),
  [35] = {.count = 1, .reusable = true}, SHIFT(201),
  [37] = {.count = 1, .reusable = false}, SHIFT(233),
  [39] = {.count = 1, .reusable = true}, SHIFT(5),
  [41] = {.count = 1, .reusable = true}, SHIFT(27),
  [43] = {.count = 1, .reusable = true}, SHIFT(127),
  [45] = {.count = 1, .reusable = true}, SHIFT(21),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [51] = {.count = 1, .reusable = true}, SHIFT(137),
  [53] = {.count = 1, .reusable = false}, SHIFT(3),
  [55] = {.count = 1, .reusable = true}, SHIFT(119),
  [57] = {.count = 1, .reusable = true}, SHIFT(112),
  [59] = {.count = 1, .reusable = true}, SHIFT(22),
  [61] = {.count = 1, .reusable = false}, SHIFT(4),
  [63] = {.count = 1, .reusable = true}, SHIFT(118),
  [65] = {.count = 1, .reusable = true}, SHIFT(117),
  [67] = {.count = 1, .reusable = true}, SHIFT(140),
  [69] = {.count = 1, .reusable = true}, SHIFT(36),
  [71] = {.count = 1, .reusable = true}, SHIFT(19),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [75] = {.count = 1, .reusable = false}, SHIFT(184),
  [77] = {.count = 1, .reusable = true}, SHIFT(124),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [81] = {.count = 1, .reusable = false}, SHIFT(186),
  [83] = {.count = 1, .reusable = false}, SHIFT(192),
  [85] = {.count = 1, .reusable = true}, SHIFT(132),
  [87] = {.count = 1, .reusable = true}, SHIFT(18),
  [89] = {.count = 1, .reusable = true}, SHIFT(130),
  [91] = {.count = 1, .reusable = false}, SHIFT(196),
  [93] = {.count = 1, .reusable = true}, SHIFT(15),
  [95] = {.count = 1, .reusable = false}, SHIFT(193),
  [97] = {.count = 1, .reusable = true}, SHIFT(125),
  [99] = {.count = 1, .reusable = false}, SHIFT(191),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [103] = {.count = 1, .reusable = false}, SHIFT(188),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [107] = {.count = 1, .reusable = false}, SHIFT(208),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [111] = {.count = 1, .reusable = false}, SHIFT(38),
  [113] = {.count = 1, .reusable = false}, SHIFT(209),
  [115] = {.count = 1, .reusable = false}, SHIFT(14),
  [117] = {.count = 1, .reusable = false}, SHIFT(13),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(208),
  [132] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [134] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(38),
  [137] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(209),
  [140] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(14),
  [143] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(13),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_identifier, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_identifier, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [182] = {.count = 1, .reusable = true}, SHIFT(236),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [188] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [190] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [192] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(236),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [197] = {.count = 1, .reusable = true}, SHIFT(217),
  [199] = {.count = 1, .reusable = false}, SHIFT(61),
  [201] = {.count = 1, .reusable = true}, SHIFT(62),
  [203] = {.count = 1, .reusable = true}, SHIFT(63),
  [205] = {.count = 1, .reusable = false}, SHIFT(149),
  [207] = {.count = 1, .reusable = false}, SHIFT(65),
  [209] = {.count = 1, .reusable = true}, SHIFT(65),
  [211] = {.count = 1, .reusable = true}, SHIFT(66),
  [213] = {.count = 1, .reusable = true}, SHIFT(52),
  [215] = {.count = 1, .reusable = true}, SHIFT(150),
  [217] = {.count = 1, .reusable = true}, SHIFT(141),
  [219] = {.count = 1, .reusable = true}, SHIFT(151),
  [221] = {.count = 1, .reusable = true}, SHIFT(70),
  [223] = {.count = 1, .reusable = true}, SHIFT(71),
  [225] = {.count = 1, .reusable = false}, SHIFT(72),
  [227] = {.count = 1, .reusable = true}, SHIFT(73),
  [229] = {.count = 1, .reusable = true}, SHIFT(51),
  [231] = {.count = 1, .reusable = true}, SHIFT(152),
  [233] = {.count = 1, .reusable = true}, SHIFT(23),
  [235] = {.count = 1, .reusable = false}, SHIFT(153),
  [237] = {.count = 1, .reusable = true}, SHIFT(154),
  [239] = {.count = 1, .reusable = true}, SHIFT(155),
  [241] = {.count = 1, .reusable = true}, SHIFT(156),
  [243] = {.count = 1, .reusable = true}, SHIFT(166),
  [245] = {.count = 1, .reusable = true}, SHIFT(148),
  [247] = {.count = 1, .reusable = true}, SHIFT(219),
  [249] = {.count = 1, .reusable = true}, SHIFT(146),
  [251] = {.count = 1, .reusable = true}, SHIFT(157),
  [253] = {.count = 1, .reusable = true}, SHIFT(164),
  [255] = {.count = 1, .reusable = true}, SHIFT(162),
  [257] = {.count = 1, .reusable = true}, SHIFT(158),
  [259] = {.count = 1, .reusable = true}, SHIFT(165),
  [261] = {.count = 1, .reusable = true}, SHIFT(147),
  [263] = {.count = 1, .reusable = true}, SHIFT(145),
  [265] = {.count = 1, .reusable = true}, SHIFT(90),
  [267] = {.count = 1, .reusable = false}, SHIFT(180),
  [269] = {.count = 1, .reusable = true}, SHIFT(177),
  [271] = {.count = 1, .reusable = false}, SHIFT(161),
  [273] = {.count = 1, .reusable = true}, SHIFT(161),
  [275] = {.count = 1, .reusable = true}, SHIFT(200),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(207),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [287] = {.count = 1, .reusable = true}, SHIFT(198),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(163),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [331] = {.count = 1, .reusable = false}, SHIFT(105),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [389] = {.count = 1, .reusable = false}, SHIFT(54),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 5),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [471] = {.count = 1, .reusable = false}, SHIFT(49),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1, .production_id = 1),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1, .production_id = 1),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [493] = {.count = 1, .reusable = false}, SHIFT(114),
  [495] = {.count = 1, .reusable = true}, SHIFT(20),
  [497] = {.count = 1, .reusable = false}, SHIFT(115),
  [499] = {.count = 1, .reusable = true}, SHIFT(142),
  [501] = {.count = 1, .reusable = true}, SHIFT(24),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym__env_command_identifier, 1),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym__env_command_identifier, 1),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [509] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [517] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [519] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(124),
  [522] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [524] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(125),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [531] = {.count = 1, .reusable = false}, SHIFT(226),
  [533] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [535] = {.count = 1, .reusable = false}, SHIFT(134),
  [537] = {.count = 1, .reusable = false}, SHIFT(227),
  [539] = {.count = 1, .reusable = false}, SHIFT(12),
  [541] = {.count = 1, .reusable = false}, SHIFT(11),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [547] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(226),
  [550] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(134),
  [553] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(227),
  [556] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(12),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(11),
  [562] = {.count = 1, .reusable = false}, SHIFT(230),
  [564] = {.count = 1, .reusable = false}, SHIFT(85),
  [566] = {.count = 1, .reusable = false}, SHIFT(231),
  [568] = {.count = 1, .reusable = false}, SHIFT(10),
  [570] = {.count = 1, .reusable = false}, SHIFT(9),
  [572] = {.count = 1, .reusable = false}, SHIFT(234),
  [574] = {.count = 1, .reusable = false}, SHIFT(171),
  [576] = {.count = 1, .reusable = false}, SHIFT(235),
  [578] = {.count = 1, .reusable = false}, SHIFT(8),
  [580] = {.count = 1, .reusable = false}, SHIFT(7),
  [582] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2),
  [584] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_search_identifier_repeat1, 2), SHIFT_REPEAT(167),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 1),
  [589] = {.count = 1, .reusable = false}, SHIFT(169),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_search_identifier, 2),
  [593] = {.count = 1, .reusable = false}, SHIFT(167),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 6),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_redirect_command, 3, .production_id = 7),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [607] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(6),
  [612] = {.count = 1, .reusable = true}, SHIFT(6),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [616] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [620] = {.count = 1, .reusable = true}, SHIFT(17),
  [622] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(17),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [631] = {.count = 1, .reusable = true}, SHIFT(16),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(16),
  [636] = {.count = 1, .reusable = false}, SHIFT(64),
  [638] = {.count = 1, .reusable = false}, SHIFT(211),
  [640] = {.count = 1, .reusable = false}, SHIFT(67),
  [642] = {.count = 1, .reusable = false}, SHIFT(170),
  [644] = {.count = 1, .reusable = true}, SHIFT(175),
  [646] = {.count = 1, .reusable = true}, SHIFT(136),
  [648] = {.count = 1, .reusable = true}, SHIFT(80),
  [650] = {.count = 1, .reusable = true}, SHIFT(40),
  [652] = {.count = 1, .reusable = true}, SHIFT(39),
  [654] = {.count = 1, .reusable = true}, SHIFT(41),
  [656] = {.count = 1, .reusable = false}, SHIFT(58),
  [658] = {.count = 1, .reusable = false}, SHIFT(228),
  [660] = {.count = 1, .reusable = false}, SHIFT(204),
  [662] = {.count = 1, .reusable = true}, SHIFT(102),
  [664] = {.count = 1, .reusable = true}, SHIFT(95),
  [666] = {.count = 1, .reusable = true}, SHIFT(135),
  [668] = {.count = 1, .reusable = true}, SHIFT(50),
  [670] = {.count = 1, .reusable = true}, SHIFT(133),
  [672] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [674] = {.count = 1, .reusable = false}, SHIFT(104),
  [676] = {.count = 1, .reusable = false}, SHIFT(44),
  [678] = {.count = 1, .reusable = true}, SHIFT(53),
  [680] = {.count = 1, .reusable = true}, SHIFT(78),
  [682] = {.count = 1, .reusable = true}, SHIFT(172),
  [684] = {.count = 1, .reusable = true}, SHIFT(176),
  [686] = {.count = 1, .reusable = true}, SHIFT(178),
  [688] = {.count = 1, .reusable = false}, SHIFT(202),
  [690] = {.count = 1, .reusable = false}, SHIFT(212),
  [692] = {.count = 1, .reusable = true}, SHIFT(174),
  [694] = {.count = 1, .reusable = false}, SHIFT(218),
  [696] = {.count = 1, .reusable = false}, SHIFT(203),
  [698] = {.count = 1, .reusable = false}, SHIFT(210),
  [700] = {.count = 1, .reusable = false}, SHIFT(214),
  [702] = {.count = 1, .reusable = false}, SHIFT(222),
  [704] = {.count = 1, .reusable = false}, SHIFT(223),
  [706] = {.count = 1, .reusable = false}, SHIFT(48),
  [708] = {.count = 1, .reusable = false}, SHIFT(229),
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
