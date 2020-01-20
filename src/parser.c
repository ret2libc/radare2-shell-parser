#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 238
#define SYMBOL_COUNT 159
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 6
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
  anon_sym_DOT_DASH = 44,
  anon_sym_DOT_BANG = 45,
  anon_sym_DOT_LPAREN = 46,
  anon_sym_DOT_SLASH = 47,
  anon_sym_ = 48,
  anon_sym_PIPE_DOT = 49,
  anon_sym_PERCENT = 50,
  anon_sym_DOT = 51,
  anon_sym_DOT_DOT_DOT = 52,
  aux_sym_interpret_identifier_token1 = 53,
  sym_system_identifier = 54,
  sym_pointer_identifier = 55,
  anon_sym_EQ = 56,
  sym_macro_identifier = 57,
  sym_macro_call_content = 58,
  anon_sym_GT = 59,
  anon_sym_GT_GT = 60,
  sym_html_redirect_operator = 61,
  sym_html_append_operator = 62,
  sym_tmp_eval_arg = 63,
  sym_eq_sep_key = 64,
  sym_eq_sep_val = 65,
  sym_macro_content = 66,
  sym__any_command = 67,
  aux_sym_arg_identifier_token1 = 68,
  aux_sym_arg_identifier_token2 = 69,
  anon_sym_SQUOTE = 70,
  aux_sym_quoted_arg_token1 = 71,
  anon_sym_DOLLAR_LPAREN = 72,
  anon_sym_BQUOTE = 73,
  sym__comment = 74,
  anon_sym_LF = 75,
  anon_sym_CR = 76,
  anon_sym_SEMI = 77,
  sym_cmd_identifier = 78,
  sym__help_command = 79,
  sym__question_mark_identifier = 80,
  sym__env_identifier = 81,
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
  sym__env_command = 134,
  sym__last_command = 135,
  sym_last_command_identifier = 136,
  sym_interpret_identifier = 137,
  sym_interpret_arg = 138,
  sym_system_arg = 139,
  sym_question_mark_identifier = 140,
  sym_help_command = 141,
  sym_repeat_command = 142,
  sym__eq_sep_args = 143,
  sym_fd_redirect_command = 144,
  sym__fdn_operator = 145,
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
  aux_sym__interpret_command_repeat1 = 158,
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
  [anon_sym_LPAREN_STAR] = "(*",
  [anon_sym_DOT_DASH] = ".-",
  [anon_sym_DOT_BANG] = ".!",
  [anon_sym_DOT_LPAREN] = ".(",
  [anon_sym_DOT_SLASH] = "./",
  [anon_sym_] = " ",
  [anon_sym_PIPE_DOT] = "|.",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_interpret_identifier_token1] = "interpret_identifier_token1",
  [sym_system_identifier] = "system_identifier",
  [sym_pointer_identifier] = "pointer_identifier",
  [anon_sym_EQ] = "=",
  [sym_macro_identifier] = "macro_identifier",
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
  [sym__help_command] = "_help_command",
  [sym__question_mark_identifier] = "_question_mark_identifier",
  [sym__env_identifier] = "_env_identifier",
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
  [sym__env_command] = "_env_command",
  [sym__last_command] = "_last_command",
  [sym_last_command_identifier] = "last_command_identifier",
  [sym_interpret_identifier] = "interpret_identifier",
  [sym_interpret_arg] = "interpret_arg",
  [sym_system_arg] = "system_arg",
  [sym_question_mark_identifier] = "question_mark_identifier",
  [sym_help_command] = "help_command",
  [sym_repeat_command] = "repeat_command",
  [sym__eq_sep_args] = "_eq_sep_args",
  [sym_fd_redirect_command] = "fd_redirect_command",
  [sym__fdn_operator] = "_fdn_operator",
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
  [aux_sym__interpret_command_repeat1] = "_interpret_command_repeat1",
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
    .named = false,
  },
  [anon_sym_DOT_DASH] = {
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
  [anon_sym_DOT] = {
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
    .visible = false,
    .named = true,
  },
  [sym__question_mark_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__env_identifier] = {
    .visible = false,
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
  [sym__env_command] = {
    .visible = false,
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
  [sym_fd_redirect_command] = {
    .visible = true,
    .named = true,
  },
  [sym__fdn_operator] = {
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
  [aux_sym__interpret_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_args = 2,
  field_command = 3,
  field_fdn_operator = 4,
  field_string = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args] = "args",
  [field_command] = "command",
  [field_fdn_operator] = "fdn_operator",
  [field_string] = "string",
};

static const TSFieldMapSlice ts_field_map_slices[] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 3},
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
    {field_args, 2},
    {field_command, 0},
    {field_command, 1},
  [11] =
    {field_arg, 2},
    {field_command, 0},
    {field_fdn_operator, 1},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(0)
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '!') ADVANCE(146);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '!') ADVANCE(146);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '`') ADVANCE(233);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '!') ADVANCE(146);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '%') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '(') ADVANCE(222);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(170);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(178);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(190);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == '\n') ADVANCE(239);
      if (lookahead == '\r') ADVANCE(240);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '$') ADVANCE(223);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '`') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(222);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(191);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(171);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == '`') ADVANCE(235);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(178);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(192);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(215);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(172);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '=') ADVANCE(178);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(173);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(193);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(189);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(165);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(183);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(226);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(145);
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
      if (lookahead == '/') ADVANCE(236);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(116);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(118);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(89);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(62);
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
      if (lookahead == ' ') ADVANCE(137);
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
          lookahead == '\\') ADVANCE(238);
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
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_legacy_quoted_command_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(23);
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
          lookahead != ';') ADVANCE(215);
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_grep_specifier);
      if (lookahead == ' ') ADVANCE(134);
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
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == 'H') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(74);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'k') ADVANCE(75);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
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
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
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
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
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
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '@') ADVANCE(60);
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
    case 92:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '@') ADVANCE(61);
      if (lookahead == 'B') ADVANCE(197);
      if (lookahead == 'F') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 'x') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
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
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(238);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(238);
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
          lookahead != ';') ADVANCE(215);
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 134:
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
    case 135:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(189);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '!') ADVANCE(130);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '*' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '-') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(151);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead == '#') ADVANCE(155);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(165);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(168);
      END_STATE();
    case 169:
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
          lookahead != '|') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(170);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'H') ADVANCE(177);
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(171);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == '`') ADVANCE(235);
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(172);
      if (lookahead == ')') ADVANCE(126);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead == 'H') ADVANCE(177);
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(173);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '/') ADVANCE(178);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 178:
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(179);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(184);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '/') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(189);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(190);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(191);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(192);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'H') ADVANCE(212);
      if (lookahead == '|') ADVANCE(55);
      if (lookahead == '~') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(193);
      if (lookahead == ' ') ADVANCE(136);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '/') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '/') ADVANCE(215);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(195);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(216);
      if (lookahead == '/') ADVANCE(218);
      if (lookahead == 'H') ADVANCE(221);
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
          lookahead != '~') ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(217);
      if (lookahead == '/') ADVANCE(218);
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
          lookahead != '~') ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(220);
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
          lookahead != '~') ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(219);
      if (lookahead == '/') ADVANCE(222);
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
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(219);
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
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(161);
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
          lookahead != '~') ADVANCE(222);
      END_STATE();
    case 222:
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
          lookahead != '~') ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead == '(') ADVANCE(232);
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
          lookahead != '~') ADVANCE(224);
      END_STATE();
    case 224:
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
          lookahead != '~') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(226);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(215);
      END_STATE();
    case 235:
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
          lookahead != '|') ADVANCE(178);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 2},
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
  [16] = {.lex_state = 2, .external_lex_state = 3},
  [17] = {.lex_state = 2, .external_lex_state = 3},
  [18] = {.lex_state = 2, .external_lex_state = 3},
  [19] = {.lex_state = 2, .external_lex_state = 3},
  [20] = {.lex_state = 2, .external_lex_state = 3},
  [21] = {.lex_state = 2, .external_lex_state = 3},
  [22] = {.lex_state = 2, .external_lex_state = 3},
  [23] = {.lex_state = 2, .external_lex_state = 3},
  [24] = {.lex_state = 2, .external_lex_state = 3},
  [25] = {.lex_state = 2, .external_lex_state = 4},
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
  [50] = {.lex_state = 2, .external_lex_state = 5},
  [51] = {.lex_state = 4, .external_lex_state = 5},
  [52] = {.lex_state = 2, .external_lex_state = 5},
  [53] = {.lex_state = 2, .external_lex_state = 5},
  [54] = {.lex_state = 5, .external_lex_state = 5},
  [55] = {.lex_state = 2, .external_lex_state = 5},
  [56] = {.lex_state = 2, .external_lex_state = 5},
  [57] = {.lex_state = 2, .external_lex_state = 5},
  [58] = {.lex_state = 2, .external_lex_state = 5},
  [59] = {.lex_state = 2, .external_lex_state = 5},
  [60] = {.lex_state = 6, .external_lex_state = 5},
  [61] = {.lex_state = 2, .external_lex_state = 5},
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
  [75] = {.lex_state = 6, .external_lex_state = 5},
  [76] = {.lex_state = 2, .external_lex_state = 5},
  [77] = {.lex_state = 2, .external_lex_state = 5},
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
  [101] = {.lex_state = 2, .external_lex_state = 5},
  [102] = {.lex_state = 2, .external_lex_state = 5},
  [103] = {.lex_state = 2, .external_lex_state = 5},
  [104] = {.lex_state = 2, .external_lex_state = 5},
  [105] = {.lex_state = 2, .external_lex_state = 5},
  [106] = {.lex_state = 2, .external_lex_state = 5},
  [107] = {.lex_state = 2, .external_lex_state = 5},
  [108] = {.lex_state = 2, .external_lex_state = 5},
  [109] = {.lex_state = 2, .external_lex_state = 5},
  [110] = {.lex_state = 8, .external_lex_state = 5},
  [111] = {.lex_state = 9, .external_lex_state = 5},
  [112] = {.lex_state = 10, .external_lex_state = 5},
  [113] = {.lex_state = 10, .external_lex_state = 5},
  [114] = {.lex_state = 11, .external_lex_state = 5},
  [115] = {.lex_state = 8, .external_lex_state = 5},
  [116] = {.lex_state = 2, .external_lex_state = 5},
  [117] = {.lex_state = 2, .external_lex_state = 5},
  [118] = {.lex_state = 2, .external_lex_state = 5},
  [119] = {.lex_state = 2, .external_lex_state = 5},
  [120] = {.lex_state = 2, .external_lex_state = 5},
  [121] = {.lex_state = 2, .external_lex_state = 5},
  [122] = {.lex_state = 1, .external_lex_state = 2},
  [123] = {.lex_state = 1, .external_lex_state = 2},
  [124] = {.lex_state = 2, .external_lex_state = 3},
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
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
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
  [198] = {.lex_state = 12},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 13},
  [201] = {.lex_state = 151},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 14},
  [206] = {.lex_state = 15},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 52},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 15},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 18},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 18},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 18},
  [234] = {.lex_state = 18},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 2},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token__question_mark_identifier = 2,
  ts_external_token__env_identifier = 3,
  ts_external_token_file_descriptor = 4,
  ts_external_token_repeat_number = 5,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token__question_mark_identifier] = sym__question_mark_identifier,
  [ts_external_token__env_identifier] = sym__env_identifier,
  [ts_external_token_file_descriptor] = sym_file_descriptor,
  [ts_external_token_repeat_number] = sym_repeat_number,
};

static bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
    [ts_external_token_file_descriptor] = true,
    [ts_external_token_repeat_number] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
    [ts_external_token_repeat_number] = true,
  },
  [3] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
    [ts_external_token_repeat_number] = true,
  },
  [4] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
    [ts_external_token_file_descriptor] = true,
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
    [anon_sym_DOT_DASH] = ACTIONS(1),
    [anon_sym_DOT_BANG] = ACTIONS(1),
    [anon_sym_DOT_LPAREN] = ACTIONS(1),
    [anon_sym_DOT_SLASH] = ACTIONS(1),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [aux_sym_interpret_identifier_token1] = ACTIONS(1),
    [sym_system_identifier] = ACTIONS(1),
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
    [sym__question_mark_identifier] = ACTIONS(1),
    [sym__env_identifier] = ACTIONS(1),
    [sym_file_descriptor] = ACTIONS(1),
    [sym_repeat_number] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(232),
    [sym__command] = STATE(181),
    [sym_legacy_quoted_command] = STATE(181),
    [sym__simple_command] = STATE(50),
    [sym__tmp_command] = STATE(50),
    [sym__iter_command] = STATE(50),
    [sym__pipe_command] = STATE(50),
    [sym_grep_command] = STATE(50),
    [sym_html_disable_command] = STATE(50),
    [sym_html_enable_command] = STATE(50),
    [sym_scr_tts_command] = STATE(50),
    [sym_pipe_command] = STATE(50),
    [sym_iter_flags_command] = STATE(50),
    [sym_iter_dbta_command] = STATE(50),
    [sym_iter_dbtb_command] = STATE(50),
    [sym_iter_dbts_command] = STATE(50),
    [sym_iter_file_lines_command] = STATE(50),
    [sym_iter_offsets_command] = STATE(50),
    [sym_iter_sdbquery_command] = STATE(50),
    [sym_iter_threads_command] = STATE(50),
    [sym_iter_bbs_command] = STATE(50),
    [sym_iter_instrs_command] = STATE(50),
    [sym_iter_sections_command] = STATE(50),
    [sym_iter_functions_command] = STATE(50),
    [sym_iter_step_command] = STATE(50),
    [sym_iter_interpret_command] = STATE(50),
    [sym_tmp_seek_command] = STATE(50),
    [sym_tmp_blksz_command] = STATE(50),
    [sym_tmp_fromto_command] = STATE(50),
    [sym_tmp_arch_command] = STATE(50),
    [sym_tmp_bits_command] = STATE(50),
    [sym_tmp_nthi_command] = STATE(50),
    [sym_tmp_eval_command] = STATE(50),
    [sym_tmp_fs_command] = STATE(50),
    [sym_tmp_reli_command] = STATE(50),
    [sym_tmp_kuery_command] = STATE(50),
    [sym_tmp_fd_command] = STATE(50),
    [sym_tmp_reg_command] = STATE(50),
    [sym_tmp_file_command] = STATE(50),
    [sym_tmp_string_command] = STATE(50),
    [sym_tmp_hex_command] = STATE(50),
    [sym_arged_command] = STATE(50),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(23),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(181),
    [sym_repeat_command] = STATE(50),
    [sym_fd_redirect_command] = STATE(181),
    [aux_sym_commands_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(11),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(37),
    [anon_sym_CR] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(37),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(23),
    [sym_repeat_number] = ACTIONS(45),
  },
  [2] = {
    [sym__command] = STATE(183),
    [sym_legacy_quoted_command] = STATE(183),
    [sym__simple_command] = STATE(50),
    [sym__tmp_command] = STATE(50),
    [sym__iter_command] = STATE(50),
    [sym__pipe_command] = STATE(50),
    [sym_grep_command] = STATE(50),
    [sym_html_disable_command] = STATE(50),
    [sym_html_enable_command] = STATE(50),
    [sym_scr_tts_command] = STATE(50),
    [sym_pipe_command] = STATE(50),
    [sym_iter_flags_command] = STATE(50),
    [sym_iter_dbta_command] = STATE(50),
    [sym_iter_dbtb_command] = STATE(50),
    [sym_iter_dbts_command] = STATE(50),
    [sym_iter_file_lines_command] = STATE(50),
    [sym_iter_offsets_command] = STATE(50),
    [sym_iter_sdbquery_command] = STATE(50),
    [sym_iter_threads_command] = STATE(50),
    [sym_iter_bbs_command] = STATE(50),
    [sym_iter_instrs_command] = STATE(50),
    [sym_iter_sections_command] = STATE(50),
    [sym_iter_functions_command] = STATE(50),
    [sym_iter_step_command] = STATE(50),
    [sym_iter_interpret_command] = STATE(50),
    [sym_tmp_seek_command] = STATE(50),
    [sym_tmp_blksz_command] = STATE(50),
    [sym_tmp_fromto_command] = STATE(50),
    [sym_tmp_arch_command] = STATE(50),
    [sym_tmp_bits_command] = STATE(50),
    [sym_tmp_nthi_command] = STATE(50),
    [sym_tmp_eval_command] = STATE(50),
    [sym_tmp_fs_command] = STATE(50),
    [sym_tmp_reli_command] = STATE(50),
    [sym_tmp_kuery_command] = STATE(50),
    [sym_tmp_fd_command] = STATE(50),
    [sym_tmp_reg_command] = STATE(50),
    [sym_tmp_file_command] = STATE(50),
    [sym_tmp_string_command] = STATE(50),
    [sym_tmp_hex_command] = STATE(50),
    [sym_arged_command] = STATE(50),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(23),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(183),
    [sym_repeat_command] = STATE(50),
    [sym_fd_redirect_command] = STATE(183),
    [aux_sym_commands_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(49),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(23),
    [sym_repeat_number] = ACTIONS(45),
  },
  [3] = {
    [sym__command] = STATE(186),
    [sym_legacy_quoted_command] = STATE(186),
    [sym__simple_command] = STATE(50),
    [sym__tmp_command] = STATE(50),
    [sym__iter_command] = STATE(50),
    [sym__pipe_command] = STATE(50),
    [sym_grep_command] = STATE(50),
    [sym_html_disable_command] = STATE(50),
    [sym_html_enable_command] = STATE(50),
    [sym_scr_tts_command] = STATE(50),
    [sym_pipe_command] = STATE(50),
    [sym_iter_flags_command] = STATE(50),
    [sym_iter_dbta_command] = STATE(50),
    [sym_iter_dbtb_command] = STATE(50),
    [sym_iter_dbts_command] = STATE(50),
    [sym_iter_file_lines_command] = STATE(50),
    [sym_iter_offsets_command] = STATE(50),
    [sym_iter_sdbquery_command] = STATE(50),
    [sym_iter_threads_command] = STATE(50),
    [sym_iter_bbs_command] = STATE(50),
    [sym_iter_instrs_command] = STATE(50),
    [sym_iter_sections_command] = STATE(50),
    [sym_iter_functions_command] = STATE(50),
    [sym_iter_step_command] = STATE(50),
    [sym_iter_interpret_command] = STATE(50),
    [sym_tmp_seek_command] = STATE(50),
    [sym_tmp_blksz_command] = STATE(50),
    [sym_tmp_fromto_command] = STATE(50),
    [sym_tmp_arch_command] = STATE(50),
    [sym_tmp_bits_command] = STATE(50),
    [sym_tmp_nthi_command] = STATE(50),
    [sym_tmp_eval_command] = STATE(50),
    [sym_tmp_fs_command] = STATE(50),
    [sym_tmp_reli_command] = STATE(50),
    [sym_tmp_kuery_command] = STATE(50),
    [sym_tmp_fd_command] = STATE(50),
    [sym_tmp_reg_command] = STATE(50),
    [sym_tmp_file_command] = STATE(50),
    [sym_tmp_string_command] = STATE(50),
    [sym_tmp_hex_command] = STATE(50),
    [sym_arged_command] = STATE(50),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(23),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(186),
    [sym_repeat_command] = STATE(50),
    [sym_fd_redirect_command] = STATE(186),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(55),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_CR] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(23),
    [sym_repeat_number] = ACTIONS(45),
  },
  [4] = {
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_fd_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [5] = {
    [sym__commands_singleline] = STATE(224),
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_grep_command] = STATE(109),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(109),
    [sym_fd_redirect_command] = STATE(193),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(75),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [6] = {
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_fd_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [7] = {
    [sym__commands_singleline] = STATE(220),
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_grep_command] = STATE(109),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(109),
    [sym_fd_redirect_command] = STATE(193),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(75),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [8] = {
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_fd_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [9] = {
    [sym__commands_singleline] = STATE(213),
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_grep_command] = STATE(109),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(109),
    [sym_fd_redirect_command] = STATE(193),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(75),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [10] = {
    [sym__commands_singleline] = STATE(209),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(108),
    [sym_fd_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(12),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(57),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [11] = {
    [sym__commands_singleline] = STATE(202),
    [sym__command] = STATE(193),
    [sym_legacy_quoted_command] = STATE(193),
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_grep_command] = STATE(109),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(193),
    [sym_repeat_command] = STATE(109),
    [sym_fd_redirect_command] = STATE(193),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(75),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [12] = {
    [sym__command] = STATE(189),
    [sym_legacy_quoted_command] = STATE(189),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_help_command] = STATE(189),
    [sym_repeat_command] = STATE(108),
    [sym_fd_redirect_command] = STATE(189),
    [aux_sym__commands_singleline_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(85),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [13] = {
    [sym__command] = STATE(197),
    [sym_legacy_quoted_command] = STATE(197),
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_grep_command] = STATE(109),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(197),
    [sym_repeat_command] = STATE(109),
    [sym_fd_redirect_command] = STATE(197),
    [aux_sym__commands_singleline_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(89),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [14] = {
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
    [sym__simple_command] = STATE(109),
    [sym__tmp_command] = STATE(109),
    [sym__iter_command] = STATE(109),
    [sym__pipe_command] = STATE(109),
    [sym_grep_command] = STATE(109),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_help_command] = STATE(196),
    [sym_repeat_command] = STATE(109),
    [sym_fd_redirect_command] = STATE(196),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__help_command] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(43),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [15] = {
    [sym__command] = STATE(196),
    [sym_legacy_quoted_command] = STATE(196),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_help_command] = STATE(196),
    [sym_repeat_command] = STATE(108),
    [sym_fd_redirect_command] = STATE(196),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [16] = {
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_repeat_command] = STATE(121),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [17] = {
    [sym__simple_command] = STATE(116),
    [sym__tmp_command] = STATE(116),
    [sym__iter_command] = STATE(116),
    [sym__pipe_command] = STATE(116),
    [sym_grep_command] = STATE(116),
    [sym_html_disable_command] = STATE(116),
    [sym_html_enable_command] = STATE(116),
    [sym_scr_tts_command] = STATE(116),
    [sym_pipe_command] = STATE(116),
    [sym_iter_flags_command] = STATE(116),
    [sym_iter_dbta_command] = STATE(116),
    [sym_iter_dbtb_command] = STATE(116),
    [sym_iter_dbts_command] = STATE(116),
    [sym_iter_file_lines_command] = STATE(116),
    [sym_iter_offsets_command] = STATE(116),
    [sym_iter_sdbquery_command] = STATE(116),
    [sym_iter_threads_command] = STATE(116),
    [sym_iter_bbs_command] = STATE(116),
    [sym_iter_instrs_command] = STATE(116),
    [sym_iter_sections_command] = STATE(116),
    [sym_iter_functions_command] = STATE(116),
    [sym_iter_step_command] = STATE(116),
    [sym_iter_interpret_command] = STATE(116),
    [sym_tmp_seek_command] = STATE(116),
    [sym_tmp_blksz_command] = STATE(116),
    [sym_tmp_fromto_command] = STATE(116),
    [sym_tmp_arch_command] = STATE(116),
    [sym_tmp_bits_command] = STATE(116),
    [sym_tmp_nthi_command] = STATE(116),
    [sym_tmp_eval_command] = STATE(116),
    [sym_tmp_fs_command] = STATE(116),
    [sym_tmp_reli_command] = STATE(116),
    [sym_tmp_kuery_command] = STATE(116),
    [sym_tmp_fd_command] = STATE(116),
    [sym_tmp_reg_command] = STATE(116),
    [sym_tmp_file_command] = STATE(116),
    [sym_tmp_string_command] = STATE(116),
    [sym_tmp_hex_command] = STATE(116),
    [sym_arged_command] = STATE(116),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(23),
    [sym_question_mark_identifier] = STATE(139),
    [sym_repeat_command] = STATE(116),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
    [sym_repeat_number] = ACTIONS(45),
  },
  [18] = {
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_repeat_command] = STATE(118),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
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
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_repeat_command] = STATE(120),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [20] = {
    [sym__simple_command] = STATE(93),
    [sym__tmp_command] = STATE(93),
    [sym__iter_command] = STATE(93),
    [sym__pipe_command] = STATE(93),
    [sym_grep_command] = STATE(93),
    [sym_html_disable_command] = STATE(93),
    [sym_html_enable_command] = STATE(93),
    [sym_scr_tts_command] = STATE(93),
    [sym_pipe_command] = STATE(93),
    [sym_iter_flags_command] = STATE(93),
    [sym_iter_dbta_command] = STATE(93),
    [sym_iter_dbtb_command] = STATE(93),
    [sym_iter_dbts_command] = STATE(93),
    [sym_iter_file_lines_command] = STATE(93),
    [sym_iter_offsets_command] = STATE(93),
    [sym_iter_sdbquery_command] = STATE(93),
    [sym_iter_threads_command] = STATE(93),
    [sym_iter_bbs_command] = STATE(93),
    [sym_iter_instrs_command] = STATE(93),
    [sym_iter_sections_command] = STATE(93),
    [sym_iter_functions_command] = STATE(93),
    [sym_iter_step_command] = STATE(93),
    [sym_iter_interpret_command] = STATE(93),
    [sym_tmp_seek_command] = STATE(93),
    [sym_tmp_blksz_command] = STATE(93),
    [sym_tmp_fromto_command] = STATE(93),
    [sym_tmp_arch_command] = STATE(93),
    [sym_tmp_bits_command] = STATE(93),
    [sym_tmp_nthi_command] = STATE(93),
    [sym_tmp_eval_command] = STATE(93),
    [sym_tmp_fs_command] = STATE(93),
    [sym_tmp_reli_command] = STATE(93),
    [sym_tmp_kuery_command] = STATE(93),
    [sym_tmp_fd_command] = STATE(93),
    [sym_tmp_reg_command] = STATE(93),
    [sym_tmp_file_command] = STATE(93),
    [sym_tmp_string_command] = STATE(93),
    [sym_tmp_hex_command] = STATE(93),
    [sym_arged_command] = STATE(93),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_repeat_command] = STATE(93),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [21] = {
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
    [sym_arged_command] = STATE(119),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(143),
    [sym_repeat_command] = STATE(119),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(59),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(63),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(61),
    [sym_repeat_number] = ACTIONS(73),
  },
  [22] = {
    [sym__simple_command] = STATE(93),
    [sym__tmp_command] = STATE(93),
    [sym__iter_command] = STATE(93),
    [sym__pipe_command] = STATE(93),
    [sym_grep_command] = STATE(93),
    [sym_html_disable_command] = STATE(93),
    [sym_html_enable_command] = STATE(93),
    [sym_scr_tts_command] = STATE(93),
    [sym_pipe_command] = STATE(93),
    [sym_iter_flags_command] = STATE(93),
    [sym_iter_dbta_command] = STATE(93),
    [sym_iter_dbtb_command] = STATE(93),
    [sym_iter_dbts_command] = STATE(93),
    [sym_iter_file_lines_command] = STATE(93),
    [sym_iter_offsets_command] = STATE(93),
    [sym_iter_sdbquery_command] = STATE(93),
    [sym_iter_threads_command] = STATE(93),
    [sym_iter_bbs_command] = STATE(93),
    [sym_iter_instrs_command] = STATE(93),
    [sym_iter_sections_command] = STATE(93),
    [sym_iter_functions_command] = STATE(93),
    [sym_iter_step_command] = STATE(93),
    [sym_iter_interpret_command] = STATE(93),
    [sym_tmp_seek_command] = STATE(93),
    [sym_tmp_blksz_command] = STATE(93),
    [sym_tmp_fromto_command] = STATE(93),
    [sym_tmp_arch_command] = STATE(93),
    [sym_tmp_bits_command] = STATE(93),
    [sym_tmp_nthi_command] = STATE(93),
    [sym_tmp_eval_command] = STATE(93),
    [sym_tmp_fs_command] = STATE(93),
    [sym_tmp_reli_command] = STATE(93),
    [sym_tmp_kuery_command] = STATE(93),
    [sym_tmp_fd_command] = STATE(93),
    [sym_tmp_reg_command] = STATE(93),
    [sym_tmp_file_command] = STATE(93),
    [sym_tmp_string_command] = STATE(93),
    [sym_tmp_hex_command] = STATE(93),
    [sym_arged_command] = STATE(93),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(139),
    [sym_repeat_command] = STATE(93),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(79),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(77),
    [sym_repeat_number] = ACTIONS(83),
  },
  [23] = {
    [sym__simple_command] = STATE(93),
    [sym__tmp_command] = STATE(93),
    [sym__iter_command] = STATE(93),
    [sym__pipe_command] = STATE(93),
    [sym_grep_command] = STATE(93),
    [sym_html_disable_command] = STATE(93),
    [sym_html_enable_command] = STATE(93),
    [sym_scr_tts_command] = STATE(93),
    [sym_pipe_command] = STATE(93),
    [sym_iter_flags_command] = STATE(93),
    [sym_iter_dbta_command] = STATE(93),
    [sym_iter_dbtb_command] = STATE(93),
    [sym_iter_dbts_command] = STATE(93),
    [sym_iter_file_lines_command] = STATE(93),
    [sym_iter_offsets_command] = STATE(93),
    [sym_iter_sdbquery_command] = STATE(93),
    [sym_iter_threads_command] = STATE(93),
    [sym_iter_bbs_command] = STATE(93),
    [sym_iter_instrs_command] = STATE(93),
    [sym_iter_sections_command] = STATE(93),
    [sym_iter_functions_command] = STATE(93),
    [sym_iter_step_command] = STATE(93),
    [sym_iter_interpret_command] = STATE(93),
    [sym_tmp_seek_command] = STATE(93),
    [sym_tmp_blksz_command] = STATE(93),
    [sym_tmp_fromto_command] = STATE(93),
    [sym_tmp_arch_command] = STATE(93),
    [sym_tmp_bits_command] = STATE(93),
    [sym_tmp_nthi_command] = STATE(93),
    [sym_tmp_eval_command] = STATE(93),
    [sym_tmp_fs_command] = STATE(93),
    [sym_tmp_reli_command] = STATE(93),
    [sym_tmp_kuery_command] = STATE(93),
    [sym_tmp_fd_command] = STATE(93),
    [sym_tmp_reg_command] = STATE(93),
    [sym_tmp_file_command] = STATE(93),
    [sym_tmp_string_command] = STATE(93),
    [sym_tmp_hex_command] = STATE(93),
    [sym_arged_command] = STATE(93),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(23),
    [sym_question_mark_identifier] = STATE(139),
    [sym_repeat_command] = STATE(93),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
    [sym_repeat_number] = ACTIONS(45),
  },
  [24] = {
    [sym__simple_command] = STATE(117),
    [sym__tmp_command] = STATE(117),
    [sym__iter_command] = STATE(117),
    [sym__pipe_command] = STATE(117),
    [sym_grep_command] = STATE(117),
    [sym_html_disable_command] = STATE(117),
    [sym_html_enable_command] = STATE(117),
    [sym_scr_tts_command] = STATE(117),
    [sym_pipe_command] = STATE(117),
    [sym_iter_flags_command] = STATE(117),
    [sym_iter_dbta_command] = STATE(117),
    [sym_iter_dbtb_command] = STATE(117),
    [sym_iter_dbts_command] = STATE(117),
    [sym_iter_file_lines_command] = STATE(117),
    [sym_iter_offsets_command] = STATE(117),
    [sym_iter_sdbquery_command] = STATE(117),
    [sym_iter_threads_command] = STATE(117),
    [sym_iter_bbs_command] = STATE(117),
    [sym_iter_instrs_command] = STATE(117),
    [sym_iter_sections_command] = STATE(117),
    [sym_iter_functions_command] = STATE(117),
    [sym_iter_step_command] = STATE(117),
    [sym_iter_interpret_command] = STATE(117),
    [sym_tmp_seek_command] = STATE(117),
    [sym_tmp_blksz_command] = STATE(117),
    [sym_tmp_fromto_command] = STATE(117),
    [sym_tmp_arch_command] = STATE(117),
    [sym_tmp_bits_command] = STATE(117),
    [sym_tmp_nthi_command] = STATE(117),
    [sym_tmp_eval_command] = STATE(117),
    [sym_tmp_fs_command] = STATE(117),
    [sym_tmp_reli_command] = STATE(117),
    [sym_tmp_kuery_command] = STATE(117),
    [sym_tmp_fd_command] = STATE(117),
    [sym_tmp_reg_command] = STATE(117),
    [sym_tmp_file_command] = STATE(117),
    [sym_tmp_string_command] = STATE(117),
    [sym_tmp_hex_command] = STATE(117),
    [sym_arged_command] = STATE(117),
    [sym__simple_arged_command] = STATE(76),
    [sym__math_arged_command] = STATE(76),
    [sym__pointer_arged_command] = STATE(76),
    [sym__macro_arged_command] = STATE(76),
    [sym__system_command] = STATE(76),
    [sym__interpret_command] = STATE(76),
    [sym__env_command] = STATE(76),
    [sym__last_command] = STATE(76),
    [sym_last_command_identifier] = STATE(77),
    [sym_interpret_identifier] = STATE(23),
    [sym_question_mark_identifier] = STATE(139),
    [sym_repeat_command] = STATE(117),
    [anon_sym_LPAREN_STAR] = ACTIONS(13),
    [anon_sym_DOT_DASH] = ACTIONS(15),
    [anon_sym_DOT_BANG] = ACTIONS(17),
    [anon_sym_DOT_LPAREN] = ACTIONS(19),
    [anon_sym_DOT_SLASH] = ACTIONS(21),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(39),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
    [sym_repeat_number] = ACTIONS(45),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(97),
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
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [anon_sym_DOT_DASH] = ACTIONS(103),
    [anon_sym_DOT_BANG] = ACTIONS(101),
    [anon_sym_DOT_LPAREN] = ACTIONS(101),
    [anon_sym_DOT_SLASH] = ACTIONS(101),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(103),
    [aux_sym_interpret_identifier_token1] = ACTIONS(101),
    [sym_system_identifier] = ACTIONS(101),
    [sym_pointer_identifier] = ACTIONS(101),
    [sym_macro_identifier] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(97),
    [sym_html_redirect_operator] = ACTIONS(99),
    [sym_html_append_operator] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_cmd_identifier] = ACTIONS(101),
    [sym__question_mark_identifier] = ACTIONS(101),
    [sym__env_identifier] = ACTIONS(101),
    [sym_file_descriptor] = ACTIONS(97),
    [sym_repeat_number] = ACTIONS(101),
  },
  [26] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(109),
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
  [27] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(121),
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
  [28] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(125),
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
  [29] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_PIPEH] = ACTIONS(129),
    [anon_sym_PIPET] = ACTIONS(129),
    [anon_sym_AT_AT] = ACTIONS(129),
    [anon_sym_AT_ATdbt] = ACTIONS(129),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(129),
    [anon_sym_AT_AT_DOT] = ACTIONS(129),
    [anon_sym_AT_AT_EQ] = ACTIONS(129),
    [anon_sym_AT_ATk] = ACTIONS(129),
    [anon_sym_AT_ATt] = ACTIONS(129),
    [anon_sym_AT_ATb] = ACTIONS(129),
    [anon_sym_AT_ATi] = ACTIONS(129),
    [anon_sym_AT_ATiS] = ACTIONS(129),
    [anon_sym_AT_ATf] = ACTIONS(129),
    [anon_sym_AT_ATs_COLON] = ACTIONS(129),
    [anon_sym_AT_ATc_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [sym_html_redirect_operator] = ACTIONS(129),
    [sym_html_append_operator] = ACTIONS(129),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(129),
    [anon_sym_CR] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(127),
  },
  [30] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_PIPEH] = ACTIONS(133),
    [anon_sym_PIPET] = ACTIONS(133),
    [anon_sym_AT_AT] = ACTIONS(133),
    [anon_sym_AT_ATdbt] = ACTIONS(133),
    [anon_sym_AT_ATdbta] = ACTIONS(133),
    [anon_sym_AT_ATdbtb] = ACTIONS(133),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT_AT_DOT] = ACTIONS(133),
    [anon_sym_AT_AT_EQ] = ACTIONS(133),
    [anon_sym_AT_ATk] = ACTIONS(133),
    [anon_sym_AT_ATt] = ACTIONS(133),
    [anon_sym_AT_ATb] = ACTIONS(133),
    [anon_sym_AT_ATi] = ACTIONS(133),
    [anon_sym_AT_ATiS] = ACTIONS(133),
    [anon_sym_AT_ATf] = ACTIONS(133),
    [anon_sym_AT_ATs_COLON] = ACTIONS(133),
    [anon_sym_AT_ATc_COLON] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(133),
    [sym_html_redirect_operator] = ACTIONS(133),
    [sym_html_append_operator] = ACTIONS(133),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(133),
    [anon_sym_CR] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(131),
  },
  [31] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPEH] = ACTIONS(137),
    [anon_sym_PIPET] = ACTIONS(137),
    [anon_sym_AT_AT] = ACTIONS(137),
    [anon_sym_AT_ATdbt] = ACTIONS(137),
    [anon_sym_AT_ATdbta] = ACTIONS(137),
    [anon_sym_AT_ATdbtb] = ACTIONS(137),
    [anon_sym_AT_ATdbts] = ACTIONS(137),
    [anon_sym_AT_AT_DOT] = ACTIONS(137),
    [anon_sym_AT_AT_EQ] = ACTIONS(137),
    [anon_sym_AT_ATk] = ACTIONS(137),
    [anon_sym_AT_ATt] = ACTIONS(137),
    [anon_sym_AT_ATb] = ACTIONS(137),
    [anon_sym_AT_ATi] = ACTIONS(137),
    [anon_sym_AT_ATiS] = ACTIONS(137),
    [anon_sym_AT_ATf] = ACTIONS(137),
    [anon_sym_AT_ATs_COLON] = ACTIONS(137),
    [anon_sym_AT_ATc_COLON] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_AT_BANG] = ACTIONS(137),
    [anon_sym_AT_LPAREN] = ACTIONS(137),
    [anon_sym_ATa_COLON] = ACTIONS(137),
    [anon_sym_ATb_COLON] = ACTIONS(137),
    [anon_sym_ATB_COLON] = ACTIONS(137),
    [anon_sym_ATe_COLON] = ACTIONS(137),
    [anon_sym_ATF_COLON] = ACTIONS(137),
    [anon_sym_ATi_COLON] = ACTIONS(137),
    [anon_sym_ATk_COLON] = ACTIONS(137),
    [anon_sym_ATo_COLON] = ACTIONS(137),
    [anon_sym_ATr_COLON] = ACTIONS(137),
    [anon_sym_ATf_COLON] = ACTIONS(137),
    [anon_sym_ATs_COLON] = ACTIONS(137),
    [anon_sym_ATx_COLON] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(137),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(137),
    [sym_html_redirect_operator] = ACTIONS(137),
    [sym_html_append_operator] = ACTIONS(137),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(137),
    [anon_sym_CR] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_file_descriptor] = ACTIONS(135),
  },
  [32] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(144),
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
    [anon_sym_GT_GT] = ACTIONS(144),
    [sym_html_redirect_operator] = ACTIONS(144),
    [sym_html_append_operator] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(146),
    [aux_sym_arg_identifier_token2] = ACTIONS(146),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(152),
    [anon_sym_BQUOTE] = ACTIONS(155),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
    [sym_file_descriptor] = ACTIONS(139),
  },
  [33] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(133),
    [anon_sym_PIPE] = ACTIONS(133),
    [anon_sym_PIPEH] = ACTIONS(133),
    [anon_sym_PIPET] = ACTIONS(133),
    [anon_sym_AT_AT] = ACTIONS(133),
    [anon_sym_AT_ATdbt] = ACTIONS(133),
    [anon_sym_AT_ATdbta] = ACTIONS(133),
    [anon_sym_AT_ATdbtb] = ACTIONS(133),
    [anon_sym_AT_ATdbts] = ACTIONS(133),
    [anon_sym_AT_AT_DOT] = ACTIONS(133),
    [anon_sym_AT_AT_EQ] = ACTIONS(133),
    [anon_sym_AT_ATk] = ACTIONS(133),
    [anon_sym_AT_ATt] = ACTIONS(133),
    [anon_sym_AT_ATb] = ACTIONS(133),
    [anon_sym_AT_ATi] = ACTIONS(133),
    [anon_sym_AT_ATiS] = ACTIONS(133),
    [anon_sym_AT_ATf] = ACTIONS(133),
    [anon_sym_AT_ATs_COLON] = ACTIONS(133),
    [anon_sym_AT_ATc_COLON] = ACTIONS(133),
    [anon_sym_AT] = ACTIONS(133),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_GT_GT] = ACTIONS(133),
    [sym_html_redirect_operator] = ACTIONS(133),
    [sym_html_append_operator] = ACTIONS(133),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_file_descriptor] = ACTIONS(131),
  },
  [34] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(129),
    [anon_sym_PIPE] = ACTIONS(129),
    [anon_sym_PIPEH] = ACTIONS(129),
    [anon_sym_PIPET] = ACTIONS(129),
    [anon_sym_AT_AT] = ACTIONS(129),
    [anon_sym_AT_ATdbt] = ACTIONS(129),
    [anon_sym_AT_ATdbta] = ACTIONS(129),
    [anon_sym_AT_ATdbtb] = ACTIONS(129),
    [anon_sym_AT_ATdbts] = ACTIONS(129),
    [anon_sym_AT_AT_DOT] = ACTIONS(129),
    [anon_sym_AT_AT_EQ] = ACTIONS(129),
    [anon_sym_AT_ATk] = ACTIONS(129),
    [anon_sym_AT_ATt] = ACTIONS(129),
    [anon_sym_AT_ATb] = ACTIONS(129),
    [anon_sym_AT_ATi] = ACTIONS(129),
    [anon_sym_AT_ATiS] = ACTIONS(129),
    [anon_sym_AT_ATf] = ACTIONS(129),
    [anon_sym_AT_ATs_COLON] = ACTIONS(129),
    [anon_sym_AT_ATc_COLON] = ACTIONS(129),
    [anon_sym_AT] = ACTIONS(129),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(129),
    [sym_html_redirect_operator] = ACTIONS(129),
    [sym_html_append_operator] = ACTIONS(129),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(129),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(129),
    [sym_file_descriptor] = ACTIONS(127),
  },
  [35] = {
    [sym_arg] = STATE(37),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(37),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(121),
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
  [36] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(125),
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
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(109),
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
  [38] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [anon_sym_PIPEH] = ACTIONS(137),
    [anon_sym_PIPET] = ACTIONS(137),
    [anon_sym_AT_AT] = ACTIONS(137),
    [anon_sym_AT_ATdbt] = ACTIONS(137),
    [anon_sym_AT_ATdbta] = ACTIONS(137),
    [anon_sym_AT_ATdbtb] = ACTIONS(137),
    [anon_sym_AT_ATdbts] = ACTIONS(137),
    [anon_sym_AT_AT_DOT] = ACTIONS(137),
    [anon_sym_AT_AT_EQ] = ACTIONS(137),
    [anon_sym_AT_ATk] = ACTIONS(137),
    [anon_sym_AT_ATt] = ACTIONS(137),
    [anon_sym_AT_ATb] = ACTIONS(137),
    [anon_sym_AT_ATi] = ACTIONS(137),
    [anon_sym_AT_ATiS] = ACTIONS(137),
    [anon_sym_AT_ATf] = ACTIONS(137),
    [anon_sym_AT_ATs_COLON] = ACTIONS(137),
    [anon_sym_AT_ATc_COLON] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_AT_BANG] = ACTIONS(137),
    [anon_sym_AT_LPAREN] = ACTIONS(137),
    [anon_sym_ATa_COLON] = ACTIONS(137),
    [anon_sym_ATb_COLON] = ACTIONS(137),
    [anon_sym_ATB_COLON] = ACTIONS(137),
    [anon_sym_ATe_COLON] = ACTIONS(137),
    [anon_sym_ATF_COLON] = ACTIONS(137),
    [anon_sym_ATi_COLON] = ACTIONS(137),
    [anon_sym_ATk_COLON] = ACTIONS(137),
    [anon_sym_ATo_COLON] = ACTIONS(137),
    [anon_sym_ATr_COLON] = ACTIONS(137),
    [anon_sym_ATf_COLON] = ACTIONS(137),
    [anon_sym_ATs_COLON] = ACTIONS(137),
    [anon_sym_ATx_COLON] = ACTIONS(137),
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(137),
    [sym_html_redirect_operator] = ACTIONS(137),
    [sym_html_append_operator] = ACTIONS(137),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(137),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_file_descriptor] = ACTIONS(135),
  },
  [39] = {
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(160),
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
  [40] = {
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(160),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(164),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(168),
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
  [43] = {
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(172),
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
  [44] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(46),
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
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_ATF_COLON] = ACTIONS(174),
    [anon_sym_ATi_COLON] = ACTIONS(174),
    [anon_sym_ATk_COLON] = ACTIONS(174),
    [anon_sym_ATo_COLON] = ACTIONS(174),
    [anon_sym_ATr_COLON] = ACTIONS(174),
    [anon_sym_ATf_COLON] = ACTIONS(174),
    [anon_sym_ATs_COLON] = ACTIONS(174),
    [anon_sym_ATx_COLON] = ACTIONS(174),
    [anon_sym_RPAREN] = ACTIONS(174),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(174),
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
  [45] = {
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
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_ATF_COLON] = ACTIONS(180),
    [anon_sym_ATi_COLON] = ACTIONS(180),
    [anon_sym_ATk_COLON] = ACTIONS(180),
    [anon_sym_ATo_COLON] = ACTIONS(180),
    [anon_sym_ATr_COLON] = ACTIONS(180),
    [anon_sym_ATf_COLON] = ACTIONS(180),
    [anon_sym_ATs_COLON] = ACTIONS(180),
    [anon_sym_ATx_COLON] = ACTIONS(180),
    [anon_sym_RPAREN] = ACTIONS(180),
    [anon_sym_] = ACTIONS(3),
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
  [46] = {
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
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_ATF_COLON] = ACTIONS(184),
    [anon_sym_ATi_COLON] = ACTIONS(184),
    [anon_sym_ATk_COLON] = ACTIONS(184),
    [anon_sym_ATo_COLON] = ACTIONS(184),
    [anon_sym_ATr_COLON] = ACTIONS(184),
    [anon_sym_ATf_COLON] = ACTIONS(184),
    [anon_sym_ATs_COLON] = ACTIONS(184),
    [anon_sym_ATx_COLON] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(184),
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
  [47] = {
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
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_ATF_COLON] = ACTIONS(184),
    [anon_sym_ATi_COLON] = ACTIONS(184),
    [anon_sym_ATk_COLON] = ACTIONS(184),
    [anon_sym_ATo_COLON] = ACTIONS(184),
    [anon_sym_ATr_COLON] = ACTIONS(184),
    [anon_sym_ATf_COLON] = ACTIONS(184),
    [anon_sym_ATs_COLON] = ACTIONS(184),
    [anon_sym_ATx_COLON] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(184),
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
  [48] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(191),
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
  [49] = {
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
    [anon_sym_COLON] = ACTIONS(201),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(197),
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
  [50] = {
    [sym__fdn_operator] = STATE(165),
    [sym_fdn_redirect_operator] = STATE(165),
    [sym_fdn_append_operator] = STATE(165),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
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
  [51] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(285),
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
  [52] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(291),
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
  [53] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(295),
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
  [54] = {
    [sym__eq_sep_args] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_PIPEH] = ACTIONS(301),
    [anon_sym_PIPET] = ACTIONS(301),
    [anon_sym_AT_AT] = ACTIONS(301),
    [anon_sym_AT_ATdbt] = ACTIONS(301),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(301),
    [anon_sym_AT_ATdbts] = ACTIONS(301),
    [anon_sym_AT_AT_DOT] = ACTIONS(301),
    [anon_sym_AT_AT_EQ] = ACTIONS(301),
    [anon_sym_AT_ATk] = ACTIONS(301),
    [anon_sym_AT_ATt] = ACTIONS(301),
    [anon_sym_AT_ATb] = ACTIONS(301),
    [anon_sym_AT_ATi] = ACTIONS(301),
    [anon_sym_AT_ATiS] = ACTIONS(301),
    [anon_sym_AT_ATf] = ACTIONS(301),
    [anon_sym_AT_ATs_COLON] = ACTIONS(301),
    [anon_sym_AT_ATc_COLON] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [sym_html_redirect_operator] = ACTIONS(301),
    [sym_html_append_operator] = ACTIONS(301),
    [sym_eq_sep_key] = ACTIONS(303),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(301),
    [anon_sym_CR] = ACTIONS(301),
    [anon_sym_SEMI] = ACTIONS(301),
    [sym_file_descriptor] = ACTIONS(299),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
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
    [anon_sym_GT_GT] = ACTIONS(305),
    [sym_html_redirect_operator] = ACTIONS(307),
    [sym_html_append_operator] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(305),
    [anon_sym_CR] = ACTIONS(305),
    [anon_sym_SEMI] = ACTIONS(305),
    [sym_file_descriptor] = ACTIONS(305),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_TILDE] = ACTIONS(309),
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
    [anon_sym_GT_GT] = ACTIONS(309),
    [sym_html_redirect_operator] = ACTIONS(311),
    [sym_html_append_operator] = ACTIONS(309),
    [anon_sym_BQUOTE] = ACTIONS(309),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(309),
    [anon_sym_CR] = ACTIONS(309),
    [anon_sym_SEMI] = ACTIONS(309),
    [sym_file_descriptor] = ACTIONS(309),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
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
    [anon_sym_GT_GT] = ACTIONS(313),
    [sym_html_redirect_operator] = ACTIONS(315),
    [sym_html_append_operator] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(313),
    [anon_sym_CR] = ACTIONS(313),
    [anon_sym_SEMI] = ACTIONS(313),
    [sym_file_descriptor] = ACTIONS(313),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_PIPEH] = ACTIONS(317),
    [anon_sym_PIPET] = ACTIONS(317),
    [anon_sym_AT_AT] = ACTIONS(319),
    [anon_sym_AT_ATdbt] = ACTIONS(319),
    [anon_sym_AT_ATdbta] = ACTIONS(317),
    [anon_sym_AT_ATdbtb] = ACTIONS(317),
    [anon_sym_AT_ATdbts] = ACTIONS(317),
    [anon_sym_AT_AT_DOT] = ACTIONS(317),
    [anon_sym_AT_AT_EQ] = ACTIONS(317),
    [anon_sym_AT_ATk] = ACTIONS(317),
    [anon_sym_AT_ATt] = ACTIONS(317),
    [anon_sym_AT_ATb] = ACTIONS(317),
    [anon_sym_AT_ATi] = ACTIONS(319),
    [anon_sym_AT_ATiS] = ACTIONS(317),
    [anon_sym_AT_ATf] = ACTIONS(317),
    [anon_sym_AT_ATs_COLON] = ACTIONS(317),
    [anon_sym_AT_ATc_COLON] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym_AT_BANG] = ACTIONS(317),
    [anon_sym_AT_LPAREN] = ACTIONS(317),
    [anon_sym_ATa_COLON] = ACTIONS(317),
    [anon_sym_ATb_COLON] = ACTIONS(317),
    [anon_sym_ATB_COLON] = ACTIONS(317),
    [anon_sym_ATe_COLON] = ACTIONS(317),
    [anon_sym_ATF_COLON] = ACTIONS(317),
    [anon_sym_ATi_COLON] = ACTIONS(317),
    [anon_sym_ATk_COLON] = ACTIONS(317),
    [anon_sym_ATo_COLON] = ACTIONS(317),
    [anon_sym_ATr_COLON] = ACTIONS(317),
    [anon_sym_ATf_COLON] = ACTIONS(317),
    [anon_sym_ATs_COLON] = ACTIONS(317),
    [anon_sym_ATx_COLON] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_GT_GT] = ACTIONS(317),
    [sym_html_redirect_operator] = ACTIONS(319),
    [sym_html_append_operator] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(317),
    [anon_sym_CR] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [sym_file_descriptor] = ACTIONS(317),
  },
  [59] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(321),
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
  [60] = {
    [sym_pipe_second_command] = STATE(86),
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPEH] = ACTIONS(327),
    [anon_sym_PIPET] = ACTIONS(327),
    [anon_sym_AT_AT] = ACTIONS(327),
    [anon_sym_AT_ATdbt] = ACTIONS(327),
    [anon_sym_AT_ATdbta] = ACTIONS(327),
    [anon_sym_AT_ATdbtb] = ACTIONS(327),
    [anon_sym_AT_ATdbts] = ACTIONS(327),
    [anon_sym_AT_AT_DOT] = ACTIONS(327),
    [anon_sym_AT_AT_EQ] = ACTIONS(327),
    [anon_sym_AT_ATk] = ACTIONS(327),
    [anon_sym_AT_ATt] = ACTIONS(327),
    [anon_sym_AT_ATb] = ACTIONS(327),
    [anon_sym_AT_ATi] = ACTIONS(327),
    [anon_sym_AT_ATiS] = ACTIONS(327),
    [anon_sym_AT_ATf] = ACTIONS(327),
    [anon_sym_AT_ATs_COLON] = ACTIONS(327),
    [anon_sym_AT_ATc_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [sym_html_redirect_operator] = ACTIONS(327),
    [sym_html_append_operator] = ACTIONS(327),
    [sym__any_command] = ACTIONS(329),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(327),
    [anon_sym_CR] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_file_descriptor] = ACTIONS(325),
  },
  [61] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(331),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(335),
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [64] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [65] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(343),
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
  [66] = {
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [67] = {
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
    [anon_sym_] = ACTIONS(3),
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
  },
  [68] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(166),
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
  [69] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(347),
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
  [70] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(351),
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
  [71] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(355),
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
  [72] = {
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(359),
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
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_PIPEH] = ACTIONS(170),
    [anon_sym_PIPET] = ACTIONS(170),
    [anon_sym_AT_AT] = ACTIONS(172),
    [anon_sym_AT_ATdbt] = ACTIONS(172),
    [anon_sym_AT_ATdbta] = ACTIONS(170),
    [anon_sym_AT_ATdbtb] = ACTIONS(170),
    [anon_sym_AT_ATdbts] = ACTIONS(170),
    [anon_sym_AT_AT_DOT] = ACTIONS(170),
    [anon_sym_AT_AT_EQ] = ACTIONS(170),
    [anon_sym_AT_ATk] = ACTIONS(170),
    [anon_sym_AT_ATt] = ACTIONS(170),
    [anon_sym_AT_ATb] = ACTIONS(170),
    [anon_sym_AT_ATi] = ACTIONS(172),
    [anon_sym_AT_ATiS] = ACTIONS(170),
    [anon_sym_AT_ATf] = ACTIONS(170),
    [anon_sym_AT_ATs_COLON] = ACTIONS(170),
    [anon_sym_AT_ATc_COLON] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(172),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(170),
    [sym_html_redirect_operator] = ACTIONS(172),
    [sym_html_append_operator] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_CR] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_file_descriptor] = ACTIONS(170),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(97),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(97),
    [sym_html_redirect_operator] = ACTIONS(99),
    [sym_html_append_operator] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_file_descriptor] = ACTIONS(97),
  },
  [75] = {
    [sym_system_arg] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_TILDE] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_PIPEH] = ACTIONS(365),
    [anon_sym_PIPET] = ACTIONS(365),
    [anon_sym_AT_AT] = ACTIONS(365),
    [anon_sym_AT_ATdbt] = ACTIONS(365),
    [anon_sym_AT_ATdbta] = ACTIONS(365),
    [anon_sym_AT_ATdbtb] = ACTIONS(365),
    [anon_sym_AT_ATdbts] = ACTIONS(365),
    [anon_sym_AT_AT_DOT] = ACTIONS(365),
    [anon_sym_AT_AT_EQ] = ACTIONS(365),
    [anon_sym_AT_ATk] = ACTIONS(365),
    [anon_sym_AT_ATt] = ACTIONS(365),
    [anon_sym_AT_ATb] = ACTIONS(365),
    [anon_sym_AT_ATi] = ACTIONS(365),
    [anon_sym_AT_ATiS] = ACTIONS(365),
    [anon_sym_AT_ATf] = ACTIONS(365),
    [anon_sym_AT_ATs_COLON] = ACTIONS(365),
    [anon_sym_AT_ATc_COLON] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [sym_html_redirect_operator] = ACTIONS(365),
    [sym_html_append_operator] = ACTIONS(365),
    [sym__any_command] = ACTIONS(367),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(365),
    [anon_sym_CR] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_file_descriptor] = ACTIONS(363),
  },
  [76] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [77] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [78] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [79] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [80] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [81] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [82] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [83] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [84] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [85] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [86] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [87] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [88] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [89] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [90] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [91] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [92] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
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
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(135),
    [sym_html_redirect_operator] = ACTIONS(137),
    [sym_html_append_operator] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_CR] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(135),
  },
  [94] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [95] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [96] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [97] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [98] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [99] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [100] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_TILDE] = ACTIONS(135),
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
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(135),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_GT_GT] = ACTIONS(135),
    [sym_html_redirect_operator] = ACTIONS(137),
    [sym_html_append_operator] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_CR] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_file_descriptor] = ACTIONS(135),
  },
  [102] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [103] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [104] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [105] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [106] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [107] = {
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
    [anon_sym_] = ACTIONS(3),
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
  [108] = {
    [sym__fdn_operator] = STATE(165),
    [sym_fdn_redirect_operator] = STATE(165),
    [sym_fdn_append_operator] = STATE(165),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(491),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_html_redirect_operator] = ACTIONS(279),
    [sym_html_append_operator] = ACTIONS(281),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(283),
  },
  [109] = {
    [sym__fdn_operator] = STATE(165),
    [sym_fdn_redirect_operator] = STATE(165),
    [sym_fdn_append_operator] = STATE(165),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_PIPE] = ACTIONS(495),
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
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(275),
    [anon_sym_GT_GT] = ACTIONS(277),
    [sym_html_redirect_operator] = ACTIONS(279),
    [sym_html_append_operator] = ACTIONS(281),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(203),
    [sym_file_descriptor] = ACTIONS(283),
  },
  [110] = {
    [sym_system_arg] = STATE(56),
    [anon_sym_TILDE] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_PIPEH] = ACTIONS(365),
    [anon_sym_PIPET] = ACTIONS(365),
    [anon_sym_AT_AT] = ACTIONS(365),
    [anon_sym_AT_ATdbt] = ACTIONS(365),
    [anon_sym_AT_ATdbta] = ACTIONS(365),
    [anon_sym_AT_ATdbtb] = ACTIONS(365),
    [anon_sym_AT_ATdbts] = ACTIONS(365),
    [anon_sym_AT_AT_DOT] = ACTIONS(365),
    [anon_sym_AT_AT_EQ] = ACTIONS(365),
    [anon_sym_AT_ATk] = ACTIONS(365),
    [anon_sym_AT_ATt] = ACTIONS(365),
    [anon_sym_AT_ATb] = ACTIONS(365),
    [anon_sym_AT_ATi] = ACTIONS(365),
    [anon_sym_AT_ATiS] = ACTIONS(365),
    [anon_sym_AT_ATf] = ACTIONS(365),
    [anon_sym_AT_ATs_COLON] = ACTIONS(365),
    [anon_sym_AT_ATc_COLON] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [sym_html_redirect_operator] = ACTIONS(365),
    [sym_html_append_operator] = ACTIONS(365),
    [sym__any_command] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(365),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_file_descriptor] = ACTIONS(363),
  },
  [111] = {
    [sym__eq_sep_args] = STATE(79),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_PIPEH] = ACTIONS(301),
    [anon_sym_PIPET] = ACTIONS(301),
    [anon_sym_AT_AT] = ACTIONS(301),
    [anon_sym_AT_ATdbt] = ACTIONS(301),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(301),
    [anon_sym_AT_ATdbts] = ACTIONS(301),
    [anon_sym_AT_AT_DOT] = ACTIONS(301),
    [anon_sym_AT_AT_EQ] = ACTIONS(301),
    [anon_sym_AT_ATk] = ACTIONS(301),
    [anon_sym_AT_ATt] = ACTIONS(301),
    [anon_sym_AT_ATb] = ACTIONS(301),
    [anon_sym_AT_ATi] = ACTIONS(301),
    [anon_sym_AT_ATiS] = ACTIONS(301),
    [anon_sym_AT_ATf] = ACTIONS(301),
    [anon_sym_AT_ATs_COLON] = ACTIONS(301),
    [anon_sym_AT_ATc_COLON] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [sym_html_redirect_operator] = ACTIONS(301),
    [sym_html_append_operator] = ACTIONS(301),
    [sym_eq_sep_key] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(301),
    [sym_file_descriptor] = ACTIONS(299),
  },
  [112] = {
    [sym_pipe_second_command] = STATE(86),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPEH] = ACTIONS(327),
    [anon_sym_PIPET] = ACTIONS(327),
    [anon_sym_AT_AT] = ACTIONS(327),
    [anon_sym_AT_ATdbt] = ACTIONS(327),
    [anon_sym_AT_ATdbta] = ACTIONS(327),
    [anon_sym_AT_ATdbtb] = ACTIONS(327),
    [anon_sym_AT_ATdbts] = ACTIONS(327),
    [anon_sym_AT_AT_DOT] = ACTIONS(327),
    [anon_sym_AT_AT_EQ] = ACTIONS(327),
    [anon_sym_AT_ATk] = ACTIONS(327),
    [anon_sym_AT_ATt] = ACTIONS(327),
    [anon_sym_AT_ATb] = ACTIONS(327),
    [anon_sym_AT_ATi] = ACTIONS(327),
    [anon_sym_AT_ATiS] = ACTIONS(327),
    [anon_sym_AT_ATf] = ACTIONS(327),
    [anon_sym_AT_ATs_COLON] = ACTIONS(327),
    [anon_sym_AT_ATc_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [sym_html_redirect_operator] = ACTIONS(327),
    [sym_html_append_operator] = ACTIONS(327),
    [sym__any_command] = ACTIONS(329),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_file_descriptor] = ACTIONS(325),
  },
  [113] = {
    [sym_system_arg] = STATE(56),
    [anon_sym_TILDE] = ACTIONS(365),
    [anon_sym_PIPE] = ACTIONS(365),
    [anon_sym_PIPEH] = ACTIONS(365),
    [anon_sym_PIPET] = ACTIONS(365),
    [anon_sym_AT_AT] = ACTIONS(365),
    [anon_sym_AT_ATdbt] = ACTIONS(365),
    [anon_sym_AT_ATdbta] = ACTIONS(365),
    [anon_sym_AT_ATdbtb] = ACTIONS(365),
    [anon_sym_AT_ATdbts] = ACTIONS(365),
    [anon_sym_AT_AT_DOT] = ACTIONS(365),
    [anon_sym_AT_AT_EQ] = ACTIONS(365),
    [anon_sym_AT_ATk] = ACTIONS(365),
    [anon_sym_AT_ATt] = ACTIONS(365),
    [anon_sym_AT_ATb] = ACTIONS(365),
    [anon_sym_AT_ATi] = ACTIONS(365),
    [anon_sym_AT_ATiS] = ACTIONS(365),
    [anon_sym_AT_ATf] = ACTIONS(365),
    [anon_sym_AT_ATs_COLON] = ACTIONS(365),
    [anon_sym_AT_ATc_COLON] = ACTIONS(365),
    [anon_sym_AT] = ACTIONS(365),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(365),
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(365),
    [sym_html_redirect_operator] = ACTIONS(365),
    [sym_html_append_operator] = ACTIONS(365),
    [sym__any_command] = ACTIONS(367),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_file_descriptor] = ACTIONS(363),
  },
  [114] = {
    [sym__eq_sep_args] = STATE(79),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_PIPE] = ACTIONS(301),
    [anon_sym_PIPEH] = ACTIONS(301),
    [anon_sym_PIPET] = ACTIONS(301),
    [anon_sym_AT_AT] = ACTIONS(301),
    [anon_sym_AT_ATdbt] = ACTIONS(301),
    [anon_sym_AT_ATdbta] = ACTIONS(301),
    [anon_sym_AT_ATdbtb] = ACTIONS(301),
    [anon_sym_AT_ATdbts] = ACTIONS(301),
    [anon_sym_AT_AT_DOT] = ACTIONS(301),
    [anon_sym_AT_AT_EQ] = ACTIONS(301),
    [anon_sym_AT_ATk] = ACTIONS(301),
    [anon_sym_AT_ATt] = ACTIONS(301),
    [anon_sym_AT_ATb] = ACTIONS(301),
    [anon_sym_AT_ATi] = ACTIONS(301),
    [anon_sym_AT_ATiS] = ACTIONS(301),
    [anon_sym_AT_ATf] = ACTIONS(301),
    [anon_sym_AT_ATs_COLON] = ACTIONS(301),
    [anon_sym_AT_ATc_COLON] = ACTIONS(301),
    [anon_sym_AT] = ACTIONS(301),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(301),
    [sym_html_redirect_operator] = ACTIONS(301),
    [sym_html_append_operator] = ACTIONS(301),
    [sym_eq_sep_key] = ACTIONS(303),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(301),
    [sym_file_descriptor] = ACTIONS(299),
  },
  [115] = {
    [sym_pipe_second_command] = STATE(86),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_PIPEH] = ACTIONS(327),
    [anon_sym_PIPET] = ACTIONS(327),
    [anon_sym_AT_AT] = ACTIONS(327),
    [anon_sym_AT_ATdbt] = ACTIONS(327),
    [anon_sym_AT_ATdbta] = ACTIONS(327),
    [anon_sym_AT_ATdbtb] = ACTIONS(327),
    [anon_sym_AT_ATdbts] = ACTIONS(327),
    [anon_sym_AT_AT_DOT] = ACTIONS(327),
    [anon_sym_AT_AT_EQ] = ACTIONS(327),
    [anon_sym_AT_ATk] = ACTIONS(327),
    [anon_sym_AT_ATt] = ACTIONS(327),
    [anon_sym_AT_ATb] = ACTIONS(327),
    [anon_sym_AT_ATi] = ACTIONS(327),
    [anon_sym_AT_ATiS] = ACTIONS(327),
    [anon_sym_AT_ATf] = ACTIONS(327),
    [anon_sym_AT_ATs_COLON] = ACTIONS(327),
    [anon_sym_AT_ATc_COLON] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
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
    [anon_sym_] = ACTIONS(5),
    [anon_sym_PIPE_DOT] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(327),
    [sym_html_redirect_operator] = ACTIONS(327),
    [sym_html_append_operator] = ACTIONS(327),
    [sym__any_command] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_file_descriptor] = ACTIONS(325),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_CR] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_file_descriptor] = ACTIONS(499),
  },
  [117] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(503),
    [anon_sym_CR] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [118] = {
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
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
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
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
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(503),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [119] = {
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(491),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [anon_sym_BQUOTE] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_file_descriptor] = ACTIONS(499),
  },
  [120] = {
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(209),
    [anon_sym_PIPET] = ACTIONS(211),
    [anon_sym_AT_AT] = ACTIONS(213),
    [anon_sym_AT_ATdbt] = ACTIONS(215),
    [anon_sym_AT_ATdbta] = ACTIONS(217),
    [anon_sym_AT_ATdbtb] = ACTIONS(219),
    [anon_sym_AT_ATdbts] = ACTIONS(221),
    [anon_sym_AT_AT_DOT] = ACTIONS(223),
    [anon_sym_AT_AT_EQ] = ACTIONS(491),
    [anon_sym_AT_ATk] = ACTIONS(227),
    [anon_sym_AT_ATt] = ACTIONS(229),
    [anon_sym_AT_ATb] = ACTIONS(231),
    [anon_sym_AT_ATi] = ACTIONS(233),
    [anon_sym_AT_ATiS] = ACTIONS(235),
    [anon_sym_AT_ATf] = ACTIONS(237),
    [anon_sym_AT_ATs_COLON] = ACTIONS(239),
    [anon_sym_AT_ATc_COLON] = ACTIONS(493),
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
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(503),
    [sym_file_descriptor] = ACTIONS(503),
  },
  [121] = {
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
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
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
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
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PIPE_DOT] = ACTIONS(273),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(499),
    [sym_file_descriptor] = ACTIONS(499),
  },
  [122] = {
    [aux_sym_commands_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(507),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym_interpreter_command] = ACTIONS(509),
    [anon_sym_LPAREN_STAR] = ACTIONS(507),
    [anon_sym_DOT_DASH] = ACTIONS(509),
    [anon_sym_DOT_BANG] = ACTIONS(507),
    [anon_sym_DOT_LPAREN] = ACTIONS(507),
    [anon_sym_DOT_SLASH] = ACTIONS(507),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(509),
    [aux_sym_interpret_identifier_token1] = ACTIONS(507),
    [sym_system_identifier] = ACTIONS(507),
    [sym_pointer_identifier] = ACTIONS(507),
    [sym_macro_identifier] = ACTIONS(509),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_CR] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_cmd_identifier] = ACTIONS(507),
    [sym__help_command] = ACTIONS(507),
    [sym__question_mark_identifier] = ACTIONS(507),
    [sym__env_identifier] = ACTIONS(507),
    [sym_repeat_number] = ACTIONS(507),
  },
  [123] = {
    [aux_sym__commands_singleline_repeat1] = STATE(123),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [sym_interpreter_command] = ACTIONS(516),
    [anon_sym_LPAREN_STAR] = ACTIONS(514),
    [anon_sym_DOT_DASH] = ACTIONS(516),
    [anon_sym_DOT_BANG] = ACTIONS(514),
    [anon_sym_DOT_LPAREN] = ACTIONS(514),
    [anon_sym_DOT_SLASH] = ACTIONS(514),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(516),
    [aux_sym_interpret_identifier_token1] = ACTIONS(514),
    [sym_system_identifier] = ACTIONS(514),
    [sym_pointer_identifier] = ACTIONS(514),
    [sym_macro_identifier] = ACTIONS(516),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(518),
    [sym_cmd_identifier] = ACTIONS(514),
    [sym__help_command] = ACTIONS(514),
    [sym__question_mark_identifier] = ACTIONS(514),
    [sym__env_identifier] = ACTIONS(514),
    [sym_repeat_number] = ACTIONS(514),
  },
  [124] = {
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [anon_sym_DOT_DASH] = ACTIONS(103),
    [anon_sym_DOT_BANG] = ACTIONS(101),
    [anon_sym_DOT_LPAREN] = ACTIONS(101),
    [anon_sym_DOT_SLASH] = ACTIONS(101),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(103),
    [aux_sym_interpret_identifier_token1] = ACTIONS(101),
    [sym_system_identifier] = ACTIONS(101),
    [sym_pointer_identifier] = ACTIONS(101),
    [sym_macro_identifier] = ACTIONS(103),
    [sym__comment] = ACTIONS(3),
    [sym_cmd_identifier] = ACTIONS(101),
    [sym__question_mark_identifier] = ACTIONS(101),
    [sym__env_identifier] = ACTIONS(101),
    [sym_repeat_number] = ACTIONS(101),
  },
  [125] = {
    [sym_arg] = STATE(125),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [aux_sym_iter_offsets_command_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(524),
    [aux_sym_arg_identifier_token2] = ACTIONS(524),
    [anon_sym_SQUOTE] = ACTIONS(527),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(530),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [126] = {
    [sym_arg] = STATE(125),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [aux_sym_iter_offsets_command_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(540),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(540),
    [anon_sym_CR] = ACTIONS(540),
    [anon_sym_SEMI] = ACTIONS(540),
  },
  [127] = {
    [sym_arg] = STATE(126),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [aux_sym_iter_offsets_command_repeat1] = STATE(126),
    [ts_builtin_sym_end] = ACTIONS(550),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(552),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(552),
    [anon_sym_CR] = ACTIONS(552),
    [anon_sym_SEMI] = ACTIONS(552),
  },
  [128] = {
    [sym_arg] = STATE(129),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [aux_sym_iter_offsets_command_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(552),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(552),
  },
  [129] = {
    [sym_arg] = STATE(125),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [aux_sym_iter_offsets_command_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(540),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(540),
  },
  [130] = {
    [sym_arg] = STATE(38),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(38),
    [aux_sym__interpret_command_repeat1] = STATE(132),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(554),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [131] = {
    [sym_arg] = STATE(31),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(31),
    [aux_sym__interpret_command_repeat1] = STATE(133),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(556),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [132] = {
    [sym_arg] = STATE(33),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(33),
    [aux_sym__interpret_command_repeat1] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(558),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [133] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [aux_sym__interpret_command_repeat1] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(558),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [134] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
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
  [137] = {
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
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(172),
    [aux_sym_arg_identifier_token2] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [139] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(29),
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
    [ts_builtin_sym_end] = ACTIONS(560),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(564),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(562),
    [sym__comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_CR] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(564),
  },
  [141] = {
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
  [142] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(36),
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
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(42),
    [sym_quoted_arg] = STATE(42),
    [sym_cmd_substitution_arg] = STATE(42),
    [aux_sym_iter_offsets_command_repeat1] = STATE(34),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(111),
    [aux_sym_arg_identifier_token2] = ACTIONS(111),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [sym__comment] = ACTIONS(5),
  },
  [144] = {
    [sym_arg] = STATE(145),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [sym__comment] = ACTIONS(5),
  },
  [145] = {
    [sym_arg] = STATE(149),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [sym__comment] = ACTIONS(5),
  },
  [146] = {
    [sym_arg] = STATE(53),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [147] = {
    [sym_arg] = STATE(161),
    [sym_arg_identifier] = STATE(137),
    [sym_quoted_arg] = STATE(137),
    [sym_cmd_substitution_arg] = STATE(137),
    [anon_sym_DQUOTE] = ACTIONS(538),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(546),
    [anon_sym_BQUOTE] = ACTIONS(548),
    [sym__comment] = ACTIONS(5),
  },
  [148] = {
    [sym_arg] = STATE(88),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [149] = {
    [sym_arg] = STATE(80),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [150] = {
    [sym_arg] = STATE(105),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [151] = {
    [sym_arg] = STATE(91),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [152] = {
    [sym_arg] = STATE(90),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [153] = {
    [sym_arg] = STATE(107),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [154] = {
    [sym_arg] = STATE(104),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [155] = {
    [sym_arg] = STATE(87),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [156] = {
    [sym_arg] = STATE(102),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [157] = {
    [sym_arg] = STATE(95),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [158] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [159] = {
    [sym_arg] = STATE(100),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [160] = {
    [sym_arg] = STATE(106),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [161] = {
    [sym_arg] = STATE(82),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [162] = {
    [sym_arg] = STATE(98),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [163] = {
    [sym_arg] = STATE(99),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [164] = {
    [sym_arg] = STATE(96),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [165] = {
    [sym_arg] = STATE(174),
    [sym_arg_identifier] = STATE(179),
    [sym_quoted_arg] = STATE(179),
    [sym_cmd_substitution_arg] = STATE(179),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(578),
    [aux_sym_arg_identifier_token2] = ACTIONS(578),
    [anon_sym_SQUOTE] = ACTIONS(580),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(582),
    [anon_sym_BQUOTE] = ACTIONS(584),
    [sym__comment] = ACTIONS(5),
  },
  [166] = {
    [sym_arg] = STATE(83),
    [sym_arg_identifier] = STATE(68),
    [sym_quoted_arg] = STATE(68),
    [sym_cmd_substitution_arg] = STATE(68),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(5),
  },
  [167] = {
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(564),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(564),
  },
  [168] = {
    [aux_sym__interpret_command_repeat1] = STATE(168),
    [anon_sym_DQUOTE] = ACTIONS(586),
    [anon_sym_] = ACTIONS(588),
    [aux_sym_arg_identifier_token1] = ACTIONS(586),
    [aux_sym_arg_identifier_token2] = ACTIONS(586),
    [anon_sym_SQUOTE] = ACTIONS(586),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(586),
    [anon_sym_BQUOTE] = ACTIONS(586),
    [sym__comment] = ACTIONS(5),
  },
  [169] = {
    [anon_sym_DQUOTE] = ACTIONS(591),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(591),
    [aux_sym_arg_identifier_token2] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(591),
    [sym__comment] = ACTIONS(5),
  },
  [170] = {
    [anon_sym_DQUOTE] = ACTIONS(593),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(593),
    [aux_sym_arg_identifier_token2] = ACTIONS(593),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(593),
    [anon_sym_BQUOTE] = ACTIONS(593),
    [sym__comment] = ACTIONS(5),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
  },
  [173] = {
    [anon_sym_DQUOTE] = ACTIONS(595),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(595),
    [aux_sym_arg_identifier_token2] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(595),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(595),
    [anon_sym_BQUOTE] = ACTIONS(595),
    [sym__comment] = ACTIONS(5),
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
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
  },
  [177] = {
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_] = ACTIONS(5),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(562),
    [sym__comment] = ACTIONS(5),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_CR] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
  },
  [179] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(601),
    [anon_sym_CR] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(601),
  },
  [181] = {
    [aux_sym_commands_repeat2] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_CR] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
  },
  [182] = {
    [aux_sym_commands_repeat2] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(605),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_CR] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
  },
  [183] = {
    [aux_sym_commands_repeat2] = STATE(184),
    [ts_builtin_sym_end] = ACTIONS(605),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_CR] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
  },
  [184] = {
    [aux_sym_commands_repeat2] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(603),
    [anon_sym_CR] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(603),
  },
  [185] = {
    [aux_sym_commands_repeat2] = STATE(185),
    [ts_builtin_sym_end] = ACTIONS(609),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(611),
    [anon_sym_CR] = ACTIONS(611),
    [anon_sym_SEMI] = ACTIONS(611),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(609),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(609),
    [anon_sym_CR] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(609),
  },
  [187] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(616),
  },
  [188] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(614),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(618),
  },
  [189] = {
    [aux_sym__commands_singleline_repeat2] = STATE(191),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(614),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(618),
  },
  [190] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(622),
  },
  [191] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(625),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(618),
  },
  [192] = {
    [aux_sym__commands_singleline_repeat2] = STATE(188),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(618),
  },
  [193] = {
    [aux_sym__commands_singleline_repeat2] = STATE(187),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(616),
  },
  [194] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(625),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(616),
  },
  [195] = {
    [aux_sym__commands_singleline_repeat2] = STATE(195),
    [anon_sym_RPAREN] = ACTIONS(620),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(629),
  },
  [196] = {
    [anon_sym_RPAREN] = ACTIONS(620),
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(620),
  },
  [197] = {
    [aux_sym__commands_singleline_repeat2] = STATE(194),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(616),
  },
  [198] = {
    [sym__eq_sep_args] = STATE(57),
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_key] = ACTIONS(303),
    [sym__comment] = ACTIONS(5),
  },
  [199] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(632),
    [anon_sym_GT_GT] = ACTIONS(634),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [sym_interpret_arg] = STATE(101),
    [anon_sym_] = ACTIONS(5),
    [sym__any_command] = ACTIONS(636),
    [sym__comment] = ACTIONS(5),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_] = ACTIONS(5),
    [sym_macro_call_content] = ACTIONS(640),
    [sym__comment] = ACTIONS(5),
  },
  [202] = {
    [anon_sym_RPAREN] = ACTIONS(642),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(644),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(646),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [205] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(648),
    [sym__comment] = ACTIONS(5),
  },
  [206] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(650),
    [sym__comment] = ACTIONS(5),
  },
  [207] = {
    [anon_sym_DQUOTE] = ACTIONS(652),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [anon_sym_] = ACTIONS(5),
    [sym_eq_sep_val] = ACTIONS(654),
    [sym__comment] = ACTIONS(5),
  },
  [209] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(656),
    [sym__comment] = ACTIONS(3),
  },
  [210] = {
    [anon_sym_] = ACTIONS(5),
    [sym_macro_content] = ACTIONS(658),
    [sym__comment] = ACTIONS(5),
  },
  [211] = {
    [anon_sym_DQUOTE] = ACTIONS(660),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [212] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(660),
    [sym__comment] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(662),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [214] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(664),
    [sym__comment] = ACTIONS(5),
  },
  [215] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(666),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [sym_grep_specifier] = ACTIONS(668),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [217] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(670),
    [sym__comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_DQUOTE] = ACTIONS(644),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [219] = {
    [anon_sym_] = ACTIONS(5),
    [sym_tmp_eval_arg] = ACTIONS(672),
    [sym__comment] = ACTIONS(5),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [221] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(676),
    [sym__comment] = ACTIONS(3),
  },
  [222] = {
    [anon_sym_DQUOTE] = ACTIONS(678),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(678),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [225] = {
    [anon_sym_] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(682),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(684),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [227] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(686),
    [sym__comment] = ACTIONS(5),
  },
  [228] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(688),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(690),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [230] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(692),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [231] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(694),
    [sym__comment] = ACTIONS(5),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(696),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [233] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(698),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [234] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(700),
    [anon_sym_] = ACTIONS(5),
    [sym__comment] = ACTIONS(5),
  },
  [235] = {
    [anon_sym_] = ACTIONS(5),
    [aux_sym_quoted_arg_token1] = ACTIONS(702),
    [sym__comment] = ACTIONS(5),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(704),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
  [237] = {
    [anon_sym_DQUOTE] = ACTIONS(670),
    [anon_sym_] = ACTIONS(3),
    [sym__comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [7] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [9] = {.count = 1, .reusable = true}, SHIFT(233),
  [11] = {.count = 1, .reusable = false}, SHIFT(181),
  [13] = {.count = 1, .reusable = true}, SHIFT(58),
  [15] = {.count = 1, .reusable = false}, SHIFT(59),
  [17] = {.count = 1, .reusable = true}, SHIFT(200),
  [19] = {.count = 1, .reusable = true}, SHIFT(205),
  [21] = {.count = 1, .reusable = true}, SHIFT(131),
  [23] = {.count = 1, .reusable = true}, SHIFT(54),
  [25] = {.count = 1, .reusable = false}, SHIFT(25),
  [27] = {.count = 1, .reusable = false}, SHIFT(74),
  [29] = {.count = 1, .reusable = true}, SHIFT(124),
  [31] = {.count = 1, .reusable = true}, SHIFT(75),
  [33] = {.count = 1, .reusable = true}, SHIFT(198),
  [35] = {.count = 1, .reusable = false}, SHIFT(210),
  [37] = {.count = 1, .reusable = true}, SHIFT(2),
  [39] = {.count = 1, .reusable = true}, SHIFT(27),
  [41] = {.count = 1, .reusable = true}, SHIFT(127),
  [43] = {.count = 1, .reusable = true}, SHIFT(140),
  [45] = {.count = 1, .reusable = true}, SHIFT(17),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(183),
  [51] = {.count = 1, .reusable = true}, SHIFT(122),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 1),
  [55] = {.count = 1, .reusable = false}, SHIFT(186),
  [57] = {.count = 1, .reusable = false}, SHIFT(192),
  [59] = {.count = 1, .reusable = true}, SHIFT(130),
  [61] = {.count = 1, .reusable = true}, SHIFT(111),
  [63] = {.count = 1, .reusable = true}, SHIFT(110),
  [65] = {.count = 1, .reusable = true}, SHIFT(12),
  [67] = {.count = 1, .reusable = true}, SHIFT(35),
  [69] = {.count = 1, .reusable = true}, SHIFT(128),
  [71] = {.count = 1, .reusable = true}, SHIFT(167),
  [73] = {.count = 1, .reusable = true}, SHIFT(21),
  [75] = {.count = 1, .reusable = false}, SHIFT(193),
  [77] = {.count = 1, .reusable = true}, SHIFT(114),
  [79] = {.count = 1, .reusable = true}, SHIFT(113),
  [81] = {.count = 1, .reusable = true}, SHIFT(13),
  [83] = {.count = 1, .reusable = true}, SHIFT(16),
  [85] = {.count = 1, .reusable = false}, SHIFT(189),
  [87] = {.count = 1, .reusable = true}, SHIFT(123),
  [89] = {.count = 1, .reusable = false}, SHIFT(197),
  [91] = {.count = 1, .reusable = false}, SHIFT(196),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(177),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_identifier, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_identifier, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [107] = {.count = 1, .reusable = false}, SHIFT(228),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [111] = {.count = 1, .reusable = false}, SHIFT(43),
  [113] = {.count = 1, .reusable = false}, SHIFT(214),
  [115] = {.count = 1, .reusable = false}, SHIFT(11),
  [117] = {.count = 1, .reusable = false}, SHIFT(10),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 6),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 6),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [141] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(228),
  [144] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [146] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(43),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(214),
  [152] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(11),
  [155] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(10),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 5),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 5),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [178] = {.count = 1, .reusable = true}, SHIFT(206),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(206),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(208),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(166),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [205] = {.count = 1, .reusable = true}, SHIFT(216),
  [207] = {.count = 1, .reusable = false}, SHIFT(60),
  [209] = {.count = 1, .reusable = true}, SHIFT(61),
  [211] = {.count = 1, .reusable = true}, SHIFT(62),
  [213] = {.count = 1, .reusable = false}, SHIFT(155),
  [215] = {.count = 1, .reusable = false}, SHIFT(64),
  [217] = {.count = 1, .reusable = true}, SHIFT(64),
  [219] = {.count = 1, .reusable = true}, SHIFT(65),
  [221] = {.count = 1, .reusable = true}, SHIFT(52),
  [223] = {.count = 1, .reusable = true}, SHIFT(148),
  [225] = {.count = 1, .reusable = true}, SHIFT(134),
  [227] = {.count = 1, .reusable = true}, SHIFT(152),
  [229] = {.count = 1, .reusable = true}, SHIFT(69),
  [231] = {.count = 1, .reusable = true}, SHIFT(70),
  [233] = {.count = 1, .reusable = false}, SHIFT(71),
  [235] = {.count = 1, .reusable = true}, SHIFT(72),
  [237] = {.count = 1, .reusable = true}, SHIFT(49),
  [239] = {.count = 1, .reusable = true}, SHIFT(144),
  [241] = {.count = 1, .reusable = true}, SHIFT(24),
  [243] = {.count = 1, .reusable = false}, SHIFT(157),
  [245] = {.count = 1, .reusable = true}, SHIFT(164),
  [247] = {.count = 1, .reusable = true}, SHIFT(147),
  [249] = {.count = 1, .reusable = true}, SHIFT(162),
  [251] = {.count = 1, .reusable = true}, SHIFT(163),
  [253] = {.count = 1, .reusable = true}, SHIFT(159),
  [255] = {.count = 1, .reusable = true}, SHIFT(219),
  [257] = {.count = 1, .reusable = true}, SHIFT(156),
  [259] = {.count = 1, .reusable = true}, SHIFT(154),
  [261] = {.count = 1, .reusable = true}, SHIFT(150),
  [263] = {.count = 1, .reusable = true}, SHIFT(160),
  [265] = {.count = 1, .reusable = true}, SHIFT(153),
  [267] = {.count = 1, .reusable = true}, SHIFT(146),
  [269] = {.count = 1, .reusable = true}, SHIFT(151),
  [271] = {.count = 1, .reusable = true}, SHIFT(158),
  [273] = {.count = 1, .reusable = true}, SHIFT(89),
  [275] = {.count = 1, .reusable = false}, SHIFT(175),
  [277] = {.count = 1, .reusable = true}, SHIFT(173),
  [279] = {.count = 1, .reusable = false}, SHIFT(165),
  [281] = {.count = 1, .reusable = true}, SHIFT(165),
  [283] = {.count = 1, .reusable = true}, SHIFT(199),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(201),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [303] = {.count = 1, .reusable = false}, SHIFT(48),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [307] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [311] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [329] = {.count = 1, .reusable = false}, SHIFT(85),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [367] = {.count = 1, .reusable = false}, SHIFT(55),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1, .production_id = 1),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1, .production_id = 1),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [489] = {.count = 1, .reusable = false}, SHIFT(115),
  [491] = {.count = 1, .reusable = true}, SHIFT(142),
  [493] = {.count = 1, .reusable = true}, SHIFT(19),
  [495] = {.count = 1, .reusable = false}, SHIFT(112),
  [497] = {.count = 1, .reusable = true}, SHIFT(18),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [509] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat1, 2),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(122),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [516] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(123),
  [521] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(226),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(138),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(227),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(9),
  [533] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(8),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [538] = {.count = 1, .reusable = false}, SHIFT(226),
  [540] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [542] = {.count = 1, .reusable = false}, SHIFT(138),
  [544] = {.count = 1, .reusable = false}, SHIFT(227),
  [546] = {.count = 1, .reusable = false}, SHIFT(9),
  [548] = {.count = 1, .reusable = false}, SHIFT(8),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [554] = {.count = 1, .reusable = false}, SHIFT(132),
  [556] = {.count = 1, .reusable = false}, SHIFT(133),
  [558] = {.count = 1, .reusable = false}, SHIFT(168),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_question_mark_identifier, 1),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1),
  [566] = {.count = 1, .reusable = false}, SHIFT(230),
  [568] = {.count = 1, .reusable = false}, SHIFT(73),
  [570] = {.count = 1, .reusable = false}, SHIFT(231),
  [572] = {.count = 1, .reusable = false}, SHIFT(7),
  [574] = {.count = 1, .reusable = false}, SHIFT(6),
  [576] = {.count = 1, .reusable = false}, SHIFT(234),
  [578] = {.count = 1, .reusable = false}, SHIFT(178),
  [580] = {.count = 1, .reusable = false}, SHIFT(235),
  [582] = {.count = 1, .reusable = false}, SHIFT(5),
  [584] = {.count = 1, .reusable = false}, SHIFT(4),
  [586] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2),
  [588] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2), SHIFT_REPEAT(168),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_fd_redirect_command, 3, .production_id = 7),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 5),
  [603] = {.count = 1, .reusable = true}, SHIFT(3),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [609] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(3),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [616] = {.count = 1, .reusable = true}, SHIFT(14),
  [618] = {.count = 1, .reusable = true}, SHIFT(15),
  [620] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [622] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(15),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(14),
  [632] = {.count = 1, .reusable = false}, SHIFT(170),
  [634] = {.count = 1, .reusable = true}, SHIFT(169),
  [636] = {.count = 1, .reusable = false}, SHIFT(94),
  [638] = {.count = 1, .reusable = false}, SHIFT(81),
  [640] = {.count = 1, .reusable = false}, SHIFT(204),
  [642] = {.count = 1, .reusable = true}, SHIFT(40),
  [644] = {.count = 1, .reusable = true}, SHIFT(67),
  [646] = {.count = 1, .reusable = true}, SHIFT(78),
  [648] = {.count = 1, .reusable = false}, SHIFT(229),
  [650] = {.count = 1, .reusable = false}, SHIFT(47),
  [652] = {.count = 1, .reusable = true}, SHIFT(180),
  [654] = {.count = 1, .reusable = false}, SHIFT(97),
  [656] = {.count = 1, .reusable = true}, SHIFT(39),
  [658] = {.count = 1, .reusable = false}, SHIFT(236),
  [660] = {.count = 1, .reusable = true}, SHIFT(135),
  [662] = {.count = 1, .reusable = true}, SHIFT(141),
  [664] = {.count = 1, .reusable = false}, SHIFT(217),
  [666] = {.count = 1, .reusable = true}, SHIFT(136),
  [668] = {.count = 1, .reusable = false}, SHIFT(84),
  [670] = {.count = 1, .reusable = true}, SHIFT(41),
  [672] = {.count = 1, .reusable = false}, SHIFT(45),
  [674] = {.count = 1, .reusable = true}, SHIFT(66),
  [676] = {.count = 1, .reusable = true}, SHIFT(63),
  [678] = {.count = 1, .reusable = true}, SHIFT(171),
  [680] = {.count = 1, .reusable = true}, SHIFT(176),
  [682] = {.count = 1, .reusable = true}, SHIFT(172),
  [684] = {.count = 1, .reusable = false}, SHIFT(211),
  [686] = {.count = 1, .reusable = false}, SHIFT(212),
  [688] = {.count = 1, .reusable = false}, SHIFT(237),
  [690] = {.count = 1, .reusable = true}, SHIFT(103),
  [692] = {.count = 1, .reusable = false}, SHIFT(218),
  [694] = {.count = 1, .reusable = false}, SHIFT(203),
  [696] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [698] = {.count = 1, .reusable = false}, SHIFT(207),
  [700] = {.count = 1, .reusable = false}, SHIFT(222),
  [702] = {.count = 1, .reusable = false}, SHIFT(223),
  [704] = {.count = 1, .reusable = true}, SHIFT(51),
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
