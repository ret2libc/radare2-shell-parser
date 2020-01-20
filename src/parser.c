#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 230
#define SYMBOL_COUNT 160
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
  sym_number = 70,
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
  sym__question_mark_identifier = 81,
  sym__env_identifier = 82,
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
  sym_arged_command = 126,
  sym__simple_arged_command = 127,
  sym__math_arged_command = 128,
  sym__pointer_arged_command = 129,
  sym__macro_arged_command = 130,
  sym__system_command = 131,
  sym__interpret_command = 132,
  sym__env_command = 133,
  sym__last_command = 134,
  sym_last_command_identifier = 135,
  sym_interpret_identifier = 136,
  sym_interpret_arg = 137,
  sym_system_arg = 138,
  sym_question_mark_identifier = 139,
  sym_help_command = 140,
  sym_repeat_command = 141,
  sym__eq_sep_args = 142,
  sym_fd_redirect_command = 143,
  sym__fdn_operator = 144,
  sym_fdn_redirect_operator = 145,
  sym_fdn_append_operator = 146,
  sym_arg = 147,
  sym_arg_identifier = 148,
  sym_quoted_arg = 149,
  sym_cmd_substitution_arg = 150,
  aux_sym__spaces = 151,
  aux_sym_commands_repeat1 = 152,
  aux_sym_commands_repeat2 = 153,
  aux_sym_commands_repeat3 = 154,
  aux_sym__commands_singleline_repeat1 = 155,
  aux_sym__commands_singleline_repeat2 = 156,
  aux_sym_iter_offsets_command_repeat1 = 157,
  aux_sym_tmp_eval_command_repeat1 = 158,
  aux_sym__interpret_command_repeat1 = 159,
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
  [sym_number] = "number",
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
  [aux_sym__spaces] = "_spaces",
  [aux_sym_commands_repeat1] = "commands_repeat1",
  [aux_sym_commands_repeat2] = "commands_repeat2",
  [aux_sym_commands_repeat3] = "commands_repeat3",
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
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [aux_sym__spaces] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commands_repeat3] = {
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
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(1)
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '`') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(2)
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '!') ADVANCE(139);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(211);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(216);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(218);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') SKIP(4)
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '(') ADVANCE(126);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(172);
      END_STATE();
    case 6:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(184);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(206);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(210);
      END_STATE();
    case 7:
      if (lookahead == 0) ADVANCE(41);
      if (lookahead == '\t') ADVANCE(212);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(237);
      if (lookahead == ' ') ADVANCE(132);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == ')') ADVANCE(123);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '`') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|' &&
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(206);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(210);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(164);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(186);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(206);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(210);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(165);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(238);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(172);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(187);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(43);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 16:
      if (lookahead == '\t') ADVANCE(173);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(177);
      END_STATE();
    case 17:
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(183);
      END_STATE();
    case 18:
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(138);
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
      if (lookahead == '/') ADVANCE(233);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(105);
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
      if (lookahead == ':') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(88);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(61);
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
          lookahead == '\\') ADVANCE(235);
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
          lookahead != ';') ADVANCE(210);
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
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 52:
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
          lookahead == '}') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == 'H') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '.') ADVANCE(134);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPEH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPET);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PIPET);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '=') ADVANCE(72);
      if (lookahead == 'b') ADVANCE(78);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'k') ADVANCE(74);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(65);
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT_ATdbt);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT_ATdbta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AT_ATdbtb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AT_ATdbts);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT_AT_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AT_AT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AT_ATk);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT_ATt);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AT_ATb);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT_ATi);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_ATiS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AT_ATf);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AT_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT_ATc_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(92);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '@') ADVANCE(59);
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
    case 91:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_ATa_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATb_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATB_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ATe_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATF_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATi_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATk_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATo_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATr_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATf_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ATs_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_ATx_COLON);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(235);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_interpreter_command);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 125:
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
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOT_DASH);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT_BANG);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_PIPE_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '!') ADVANCE(129);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '*' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == ' ') ADVANCE(138);
      if (lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(20);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_interpret_identifier_token1);
      if (lookahead == ' ') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_system_identifier);
      if (('!' <= lookahead && lookahead <= '=')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_pointer_identifier);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_identifier);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '\t') ADVANCE(144);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '*') ADVANCE(146);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead == '(' ||
          lookahead == ')') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_call_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_html_redirect_operator);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_html_append_operator);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_html_append_operator);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '\t') ADVANCE(158);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_tmp_eval_arg);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 162:
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
          lookahead != '|') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(163);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == '~') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(164);
      if (lookahead == ')') ADVANCE(125);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == '~') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(165);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(170);
      if (lookahead == '`') ADVANCE(232);
      if (lookahead == '~') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '\t') ADVANCE(166);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_eq_sep_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 172:
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
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '\t') ADVANCE(173);
      if (lookahead == '/') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead == '*') ADVANCE(175);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '#' ||
          lookahead == ';' ||
          lookahead == '>' ||
          lookahead == '@' ||
          lookahead == '|') ADVANCE(23);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_eq_sep_val);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '>' &&
          lookahead != '@' &&
          lookahead != '|') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '\t') ADVANCE(178);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ')') ADVANCE(23);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_macro_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ')') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(184);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(206);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(185);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(206);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(186);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '@') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(206);
      if (lookahead == '`') ADVANCE(231);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead == '~') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '\t') ADVANCE(187);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '/') ADVANCE(210);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ';') ADVANCE(23);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == ';') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__any_command);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__any_command);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(211);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead == 'H') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
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
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '\t') ADVANCE(212);
      if (lookahead == '/') ADVANCE(213);
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
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(215);
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
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(214);
      if (lookahead == '/') ADVANCE(218);
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
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '*') ADVANCE(214);
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
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (lookahead == '>') ADVANCE(154);
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
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
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
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 218:
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
          lookahead != '~') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_arg_identifier_token2);
      if (lookahead == '(') ADVANCE(229);
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
          lookahead != '~') ADVANCE(220);
      END_STATE();
    case 220:
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
          lookahead != '~') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\t') ADVANCE(223);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '\r') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '\\') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead == '*') ADVANCE(226);
      if (lookahead == '\n' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_quoted_arg_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ';') ADVANCE(210);
      END_STATE();
    case 232:
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
          lookahead != '|') ADVANCE(172);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead == '!') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1, .external_lex_state = 1},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 2, .external_lex_state = 2},
  [15] = {.lex_state = 2, .external_lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 2},
  [17] = {.lex_state = 2, .external_lex_state = 2},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2, .external_lex_state = 2},
  [21] = {.lex_state = 2, .external_lex_state = 2},
  [22] = {.lex_state = 2, .external_lex_state = 2},
  [23] = {.lex_state = 2, .external_lex_state = 2},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 1, .external_lex_state = 1},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 2, .external_lex_state = 2},
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
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
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
  [197] = {.lex_state = 12},
  [198] = {.lex_state = 144},
  [199] = {.lex_state = 13},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 14},
  [203] = {.lex_state = 15},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 18},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 15},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 52},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 14},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 14},
  [226] = {.lex_state = 14},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
};

enum {
  ts_external_token_cmd_identifier = 0,
  ts_external_token__help_command = 1,
  ts_external_token__question_mark_identifier = 2,
  ts_external_token__env_identifier = 3,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_cmd_identifier] = sym_cmd_identifier,
  [ts_external_token__help_command] = sym__help_command,
  [ts_external_token__question_mark_identifier] = sym__question_mark_identifier,
  [ts_external_token__env_identifier] = sym__env_identifier,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__help_command] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
  },
  [2] = {
    [ts_external_token_cmd_identifier] = true,
    [ts_external_token__question_mark_identifier] = true,
    [ts_external_token__env_identifier] = true,
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
    [anon_sym_] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_cmd_identifier] = ACTIONS(1),
    [sym__help_command] = ACTIONS(1),
    [sym__question_mark_identifier] = ACTIONS(1),
    [sym__env_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_commands] = STATE(214),
    [sym__command] = STATE(175),
    [sym_legacy_quoted_command] = STATE(175),
    [sym__simple_command] = STATE(49),
    [sym__tmp_command] = STATE(49),
    [sym__iter_command] = STATE(49),
    [sym__pipe_command] = STATE(49),
    [sym_grep_command] = STATE(49),
    [sym_html_disable_command] = STATE(49),
    [sym_html_enable_command] = STATE(49),
    [sym_scr_tts_command] = STATE(49),
    [sym_pipe_command] = STATE(49),
    [sym_iter_flags_command] = STATE(49),
    [sym_iter_dbta_command] = STATE(49),
    [sym_iter_dbtb_command] = STATE(49),
    [sym_iter_dbts_command] = STATE(49),
    [sym_iter_file_lines_command] = STATE(49),
    [sym_iter_offsets_command] = STATE(49),
    [sym_iter_sdbquery_command] = STATE(49),
    [sym_iter_threads_command] = STATE(49),
    [sym_iter_bbs_command] = STATE(49),
    [sym_iter_instrs_command] = STATE(49),
    [sym_iter_sections_command] = STATE(49),
    [sym_iter_functions_command] = STATE(49),
    [sym_iter_step_command] = STATE(49),
    [sym_iter_interpret_command] = STATE(49),
    [sym_tmp_seek_command] = STATE(49),
    [sym_tmp_blksz_command] = STATE(49),
    [sym_tmp_fromto_command] = STATE(49),
    [sym_tmp_arch_command] = STATE(49),
    [sym_tmp_bits_command] = STATE(49),
    [sym_tmp_nthi_command] = STATE(49),
    [sym_tmp_eval_command] = STATE(49),
    [sym_tmp_fs_command] = STATE(49),
    [sym_tmp_reli_command] = STATE(49),
    [sym_tmp_kuery_command] = STATE(49),
    [sym_tmp_fd_command] = STATE(49),
    [sym_tmp_reg_command] = STATE(49),
    [sym_tmp_file_command] = STATE(49),
    [sym_tmp_string_command] = STATE(49),
    [sym_tmp_hex_command] = STATE(49),
    [sym_arged_command] = STATE(49),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(175),
    [sym_repeat_command] = STATE(49),
    [sym_fd_redirect_command] = STATE(175),
    [aux_sym__spaces] = STATE(180),
    [aux_sym_commands_repeat1] = STATE(183),
    [aux_sym_commands_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(9),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_CR] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(23),
  },
  [2] = {
    [sym__command] = STATE(174),
    [sym_legacy_quoted_command] = STATE(174),
    [sym__simple_command] = STATE(49),
    [sym__tmp_command] = STATE(49),
    [sym__iter_command] = STATE(49),
    [sym__pipe_command] = STATE(49),
    [sym_grep_command] = STATE(49),
    [sym_html_disable_command] = STATE(49),
    [sym_html_enable_command] = STATE(49),
    [sym_scr_tts_command] = STATE(49),
    [sym_pipe_command] = STATE(49),
    [sym_iter_flags_command] = STATE(49),
    [sym_iter_dbta_command] = STATE(49),
    [sym_iter_dbtb_command] = STATE(49),
    [sym_iter_dbts_command] = STATE(49),
    [sym_iter_file_lines_command] = STATE(49),
    [sym_iter_offsets_command] = STATE(49),
    [sym_iter_sdbquery_command] = STATE(49),
    [sym_iter_threads_command] = STATE(49),
    [sym_iter_bbs_command] = STATE(49),
    [sym_iter_instrs_command] = STATE(49),
    [sym_iter_sections_command] = STATE(49),
    [sym_iter_functions_command] = STATE(49),
    [sym_iter_step_command] = STATE(49),
    [sym_iter_interpret_command] = STATE(49),
    [sym_tmp_seek_command] = STATE(49),
    [sym_tmp_blksz_command] = STATE(49),
    [sym_tmp_fromto_command] = STATE(49),
    [sym_tmp_arch_command] = STATE(49),
    [sym_tmp_bits_command] = STATE(49),
    [sym_tmp_nthi_command] = STATE(49),
    [sym_tmp_eval_command] = STATE(49),
    [sym_tmp_fs_command] = STATE(49),
    [sym_tmp_reli_command] = STATE(49),
    [sym_tmp_kuery_command] = STATE(49),
    [sym_tmp_fd_command] = STATE(49),
    [sym_tmp_reg_command] = STATE(49),
    [sym_tmp_file_command] = STATE(49),
    [sym_tmp_string_command] = STATE(49),
    [sym_tmp_hex_command] = STATE(49),
    [sym_arged_command] = STATE(49),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(174),
    [sym_repeat_command] = STATE(49),
    [sym_fd_redirect_command] = STATE(174),
    [aux_sym_commands_repeat2] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(47),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(49),
    [anon_sym_CR] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(23),
  },
  [3] = {
    [sym__command] = STATE(182),
    [sym_legacy_quoted_command] = STATE(182),
    [sym__simple_command] = STATE(49),
    [sym__tmp_command] = STATE(49),
    [sym__iter_command] = STATE(49),
    [sym__pipe_command] = STATE(49),
    [sym_grep_command] = STATE(49),
    [sym_html_disable_command] = STATE(49),
    [sym_html_enable_command] = STATE(49),
    [sym_scr_tts_command] = STATE(49),
    [sym_pipe_command] = STATE(49),
    [sym_iter_flags_command] = STATE(49),
    [sym_iter_dbta_command] = STATE(49),
    [sym_iter_dbtb_command] = STATE(49),
    [sym_iter_dbts_command] = STATE(49),
    [sym_iter_file_lines_command] = STATE(49),
    [sym_iter_offsets_command] = STATE(49),
    [sym_iter_sdbquery_command] = STATE(49),
    [sym_iter_threads_command] = STATE(49),
    [sym_iter_bbs_command] = STATE(49),
    [sym_iter_instrs_command] = STATE(49),
    [sym_iter_sections_command] = STATE(49),
    [sym_iter_functions_command] = STATE(49),
    [sym_iter_step_command] = STATE(49),
    [sym_iter_interpret_command] = STATE(49),
    [sym_tmp_seek_command] = STATE(49),
    [sym_tmp_blksz_command] = STATE(49),
    [sym_tmp_fromto_command] = STATE(49),
    [sym_tmp_arch_command] = STATE(49),
    [sym_tmp_bits_command] = STATE(49),
    [sym_tmp_nthi_command] = STATE(49),
    [sym_tmp_eval_command] = STATE(49),
    [sym_tmp_fs_command] = STATE(49),
    [sym_tmp_reli_command] = STATE(49),
    [sym_tmp_kuery_command] = STATE(49),
    [sym_tmp_fd_command] = STATE(49),
    [sym_tmp_reg_command] = STATE(49),
    [sym_tmp_file_command] = STATE(49),
    [sym_tmp_string_command] = STATE(49),
    [sym_tmp_hex_command] = STATE(49),
    [sym_arged_command] = STATE(49),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(182),
    [sym_repeat_command] = STATE(49),
    [sym_fd_redirect_command] = STATE(182),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(53),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_CR] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(23),
  },
  [4] = {
    [sym__commands_singleline] = STATE(221),
    [sym__command] = STATE(184),
    [sym_legacy_quoted_command] = STATE(184),
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(184),
    [sym_repeat_command] = STATE(107),
    [sym_fd_redirect_command] = STATE(184),
    [aux_sym__commands_singleline_repeat1] = STATE(10),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(55),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(59),
  },
  [5] = {
    [sym__commands_singleline] = STATE(220),
    [sym__command] = STATE(189),
    [sym_legacy_quoted_command] = STATE(189),
    [sym__simple_command] = STATE(106),
    [sym__tmp_command] = STATE(106),
    [sym__iter_command] = STATE(106),
    [sym__pipe_command] = STATE(106),
    [sym_grep_command] = STATE(106),
    [sym_html_disable_command] = STATE(106),
    [sym_html_enable_command] = STATE(106),
    [sym_scr_tts_command] = STATE(106),
    [sym_pipe_command] = STATE(106),
    [sym_iter_flags_command] = STATE(106),
    [sym_iter_dbta_command] = STATE(106),
    [sym_iter_dbtb_command] = STATE(106),
    [sym_iter_dbts_command] = STATE(106),
    [sym_iter_file_lines_command] = STATE(106),
    [sym_iter_offsets_command] = STATE(106),
    [sym_iter_sdbquery_command] = STATE(106),
    [sym_iter_threads_command] = STATE(106),
    [sym_iter_bbs_command] = STATE(106),
    [sym_iter_instrs_command] = STATE(106),
    [sym_iter_sections_command] = STATE(106),
    [sym_iter_functions_command] = STATE(106),
    [sym_iter_step_command] = STATE(106),
    [sym_iter_interpret_command] = STATE(106),
    [sym_tmp_seek_command] = STATE(106),
    [sym_tmp_blksz_command] = STATE(106),
    [sym_tmp_fromto_command] = STATE(106),
    [sym_tmp_arch_command] = STATE(106),
    [sym_tmp_bits_command] = STATE(106),
    [sym_tmp_nthi_command] = STATE(106),
    [sym_tmp_eval_command] = STATE(106),
    [sym_tmp_fs_command] = STATE(106),
    [sym_tmp_reli_command] = STATE(106),
    [sym_tmp_kuery_command] = STATE(106),
    [sym_tmp_fd_command] = STATE(106),
    [sym_tmp_reg_command] = STATE(106),
    [sym_tmp_file_command] = STATE(106),
    [sym_tmp_string_command] = STATE(106),
    [sym_tmp_hex_command] = STATE(106),
    [sym_arged_command] = STATE(106),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(189),
    [sym_repeat_command] = STATE(106),
    [sym_fd_redirect_command] = STATE(189),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(73),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(75),
  },
  [6] = {
    [sym__commands_singleline] = STATE(201),
    [sym__command] = STATE(184),
    [sym_legacy_quoted_command] = STATE(184),
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(184),
    [sym_repeat_command] = STATE(107),
    [sym_fd_redirect_command] = STATE(184),
    [aux_sym__commands_singleline_repeat1] = STATE(10),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(55),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(59),
  },
  [7] = {
    [sym__commands_singleline] = STATE(213),
    [sym__command] = STATE(189),
    [sym_legacy_quoted_command] = STATE(189),
    [sym__simple_command] = STATE(106),
    [sym__tmp_command] = STATE(106),
    [sym__iter_command] = STATE(106),
    [sym__pipe_command] = STATE(106),
    [sym_grep_command] = STATE(106),
    [sym_html_disable_command] = STATE(106),
    [sym_html_enable_command] = STATE(106),
    [sym_scr_tts_command] = STATE(106),
    [sym_pipe_command] = STATE(106),
    [sym_iter_flags_command] = STATE(106),
    [sym_iter_dbta_command] = STATE(106),
    [sym_iter_dbtb_command] = STATE(106),
    [sym_iter_dbts_command] = STATE(106),
    [sym_iter_file_lines_command] = STATE(106),
    [sym_iter_offsets_command] = STATE(106),
    [sym_iter_sdbquery_command] = STATE(106),
    [sym_iter_threads_command] = STATE(106),
    [sym_iter_bbs_command] = STATE(106),
    [sym_iter_instrs_command] = STATE(106),
    [sym_iter_sections_command] = STATE(106),
    [sym_iter_functions_command] = STATE(106),
    [sym_iter_step_command] = STATE(106),
    [sym_iter_interpret_command] = STATE(106),
    [sym_tmp_seek_command] = STATE(106),
    [sym_tmp_blksz_command] = STATE(106),
    [sym_tmp_fromto_command] = STATE(106),
    [sym_tmp_arch_command] = STATE(106),
    [sym_tmp_bits_command] = STATE(106),
    [sym_tmp_nthi_command] = STATE(106),
    [sym_tmp_eval_command] = STATE(106),
    [sym_tmp_fs_command] = STATE(106),
    [sym_tmp_reli_command] = STATE(106),
    [sym_tmp_kuery_command] = STATE(106),
    [sym_tmp_fd_command] = STATE(106),
    [sym_tmp_reg_command] = STATE(106),
    [sym_tmp_file_command] = STATE(106),
    [sym_tmp_string_command] = STATE(106),
    [sym_tmp_hex_command] = STATE(106),
    [sym_arged_command] = STATE(106),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(189),
    [sym_repeat_command] = STATE(106),
    [sym_fd_redirect_command] = STATE(189),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(73),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(75),
  },
  [8] = {
    [sym__commands_singleline] = STATE(224),
    [sym__command] = STATE(189),
    [sym_legacy_quoted_command] = STATE(189),
    [sym__simple_command] = STATE(106),
    [sym__tmp_command] = STATE(106),
    [sym__iter_command] = STATE(106),
    [sym__pipe_command] = STATE(106),
    [sym_grep_command] = STATE(106),
    [sym_html_disable_command] = STATE(106),
    [sym_html_enable_command] = STATE(106),
    [sym_scr_tts_command] = STATE(106),
    [sym_pipe_command] = STATE(106),
    [sym_iter_flags_command] = STATE(106),
    [sym_iter_dbta_command] = STATE(106),
    [sym_iter_dbtb_command] = STATE(106),
    [sym_iter_dbts_command] = STATE(106),
    [sym_iter_file_lines_command] = STATE(106),
    [sym_iter_offsets_command] = STATE(106),
    [sym_iter_sdbquery_command] = STATE(106),
    [sym_iter_threads_command] = STATE(106),
    [sym_iter_bbs_command] = STATE(106),
    [sym_iter_instrs_command] = STATE(106),
    [sym_iter_sections_command] = STATE(106),
    [sym_iter_functions_command] = STATE(106),
    [sym_iter_step_command] = STATE(106),
    [sym_iter_interpret_command] = STATE(106),
    [sym_tmp_seek_command] = STATE(106),
    [sym_tmp_blksz_command] = STATE(106),
    [sym_tmp_fromto_command] = STATE(106),
    [sym_tmp_arch_command] = STATE(106),
    [sym_tmp_bits_command] = STATE(106),
    [sym_tmp_nthi_command] = STATE(106),
    [sym_tmp_eval_command] = STATE(106),
    [sym_tmp_fs_command] = STATE(106),
    [sym_tmp_reli_command] = STATE(106),
    [sym_tmp_kuery_command] = STATE(106),
    [sym_tmp_fd_command] = STATE(106),
    [sym_tmp_reg_command] = STATE(106),
    [sym_tmp_file_command] = STATE(106),
    [sym_tmp_string_command] = STATE(106),
    [sym_tmp_hex_command] = STATE(106),
    [sym_arged_command] = STATE(106),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(189),
    [sym_repeat_command] = STATE(106),
    [sym_fd_redirect_command] = STATE(189),
    [aux_sym__commands_singleline_repeat1] = STATE(13),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(73),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(75),
  },
  [9] = {
    [sym__commands_singleline] = STATE(228),
    [sym__command] = STATE(184),
    [sym_legacy_quoted_command] = STATE(184),
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(184),
    [sym_repeat_command] = STATE(107),
    [sym_fd_redirect_command] = STATE(184),
    [aux_sym__commands_singleline_repeat1] = STATE(10),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(55),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(59),
  },
  [10] = {
    [sym__command] = STATE(192),
    [sym_legacy_quoted_command] = STATE(192),
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(192),
    [sym_repeat_command] = STATE(107),
    [sym_fd_redirect_command] = STATE(192),
    [aux_sym__commands_singleline_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(83),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(59),
  },
  [11] = {
    [sym__command] = STATE(188),
    [sym_legacy_quoted_command] = STATE(188),
    [sym__simple_command] = STATE(106),
    [sym__tmp_command] = STATE(106),
    [sym__iter_command] = STATE(106),
    [sym__pipe_command] = STATE(106),
    [sym_grep_command] = STATE(106),
    [sym_html_disable_command] = STATE(106),
    [sym_html_enable_command] = STATE(106),
    [sym_scr_tts_command] = STATE(106),
    [sym_pipe_command] = STATE(106),
    [sym_iter_flags_command] = STATE(106),
    [sym_iter_dbta_command] = STATE(106),
    [sym_iter_dbtb_command] = STATE(106),
    [sym_iter_dbts_command] = STATE(106),
    [sym_iter_file_lines_command] = STATE(106),
    [sym_iter_offsets_command] = STATE(106),
    [sym_iter_sdbquery_command] = STATE(106),
    [sym_iter_threads_command] = STATE(106),
    [sym_iter_bbs_command] = STATE(106),
    [sym_iter_instrs_command] = STATE(106),
    [sym_iter_sections_command] = STATE(106),
    [sym_iter_functions_command] = STATE(106),
    [sym_iter_step_command] = STATE(106),
    [sym_iter_interpret_command] = STATE(106),
    [sym_tmp_seek_command] = STATE(106),
    [sym_tmp_blksz_command] = STATE(106),
    [sym_tmp_fromto_command] = STATE(106),
    [sym_tmp_arch_command] = STATE(106),
    [sym_tmp_bits_command] = STATE(106),
    [sym_tmp_nthi_command] = STATE(106),
    [sym_tmp_eval_command] = STATE(106),
    [sym_tmp_fs_command] = STATE(106),
    [sym_tmp_reli_command] = STATE(106),
    [sym_tmp_kuery_command] = STATE(106),
    [sym_tmp_fd_command] = STATE(106),
    [sym_tmp_reg_command] = STATE(106),
    [sym_tmp_file_command] = STATE(106),
    [sym_tmp_string_command] = STATE(106),
    [sym_tmp_hex_command] = STATE(106),
    [sym_arged_command] = STATE(106),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(188),
    [sym_repeat_command] = STATE(106),
    [sym_fd_redirect_command] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(75),
  },
  [12] = {
    [sym__command] = STATE(188),
    [sym_legacy_quoted_command] = STATE(188),
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_help_command] = STATE(188),
    [sym_repeat_command] = STATE(107),
    [sym_fd_redirect_command] = STATE(188),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(87),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(89),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__help_command] = ACTIONS(69),
    [sym__question_mark_identifier] = ACTIONS(71),
    [sym__env_identifier] = ACTIONS(59),
  },
  [13] = {
    [sym__command] = STATE(185),
    [sym_legacy_quoted_command] = STATE(185),
    [sym__simple_command] = STATE(106),
    [sym__tmp_command] = STATE(106),
    [sym__iter_command] = STATE(106),
    [sym__pipe_command] = STATE(106),
    [sym_grep_command] = STATE(106),
    [sym_html_disable_command] = STATE(106),
    [sym_html_enable_command] = STATE(106),
    [sym_scr_tts_command] = STATE(106),
    [sym_pipe_command] = STATE(106),
    [sym_iter_flags_command] = STATE(106),
    [sym_iter_dbta_command] = STATE(106),
    [sym_iter_dbtb_command] = STATE(106),
    [sym_iter_dbts_command] = STATE(106),
    [sym_iter_file_lines_command] = STATE(106),
    [sym_iter_offsets_command] = STATE(106),
    [sym_iter_sdbquery_command] = STATE(106),
    [sym_iter_threads_command] = STATE(106),
    [sym_iter_bbs_command] = STATE(106),
    [sym_iter_instrs_command] = STATE(106),
    [sym_iter_sections_command] = STATE(106),
    [sym_iter_functions_command] = STATE(106),
    [sym_iter_step_command] = STATE(106),
    [sym_iter_interpret_command] = STATE(106),
    [sym_tmp_seek_command] = STATE(106),
    [sym_tmp_blksz_command] = STATE(106),
    [sym_tmp_fromto_command] = STATE(106),
    [sym_tmp_arch_command] = STATE(106),
    [sym_tmp_bits_command] = STATE(106),
    [sym_tmp_nthi_command] = STATE(106),
    [sym_tmp_eval_command] = STATE(106),
    [sym_tmp_fs_command] = STATE(106),
    [sym_tmp_reli_command] = STATE(106),
    [sym_tmp_kuery_command] = STATE(106),
    [sym_tmp_fd_command] = STATE(106),
    [sym_tmp_reg_command] = STATE(106),
    [sym_tmp_file_command] = STATE(106),
    [sym_tmp_string_command] = STATE(106),
    [sym_tmp_hex_command] = STATE(106),
    [sym_arged_command] = STATE(106),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_help_command] = STATE(185),
    [sym_repeat_command] = STATE(106),
    [sym_fd_redirect_command] = STATE(185),
    [aux_sym__commands_singleline_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_interpreter_command] = ACTIONS(91),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__help_command] = ACTIONS(43),
    [sym__question_mark_identifier] = ACTIONS(45),
    [sym__env_identifier] = ACTIONS(75),
  },
  [14] = {
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(116),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(59),
  },
  [15] = {
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_repeat_command] = STATE(118),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(75),
  },
  [16] = {
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(140),
    [sym_repeat_command] = STATE(108),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
  },
  [17] = {
    [sym__simple_command] = STATE(115),
    [sym__tmp_command] = STATE(115),
    [sym__iter_command] = STATE(115),
    [sym__pipe_command] = STATE(115),
    [sym_grep_command] = STATE(115),
    [sym_html_disable_command] = STATE(115),
    [sym_html_enable_command] = STATE(115),
    [sym_scr_tts_command] = STATE(115),
    [sym_pipe_command] = STATE(115),
    [sym_iter_flags_command] = STATE(115),
    [sym_iter_dbta_command] = STATE(115),
    [sym_iter_dbtb_command] = STATE(115),
    [sym_iter_dbts_command] = STATE(115),
    [sym_iter_file_lines_command] = STATE(115),
    [sym_iter_offsets_command] = STATE(115),
    [sym_iter_sdbquery_command] = STATE(115),
    [sym_iter_threads_command] = STATE(115),
    [sym_iter_bbs_command] = STATE(115),
    [sym_iter_instrs_command] = STATE(115),
    [sym_iter_sections_command] = STATE(115),
    [sym_iter_functions_command] = STATE(115),
    [sym_iter_step_command] = STATE(115),
    [sym_iter_interpret_command] = STATE(115),
    [sym_tmp_seek_command] = STATE(115),
    [sym_tmp_blksz_command] = STATE(115),
    [sym_tmp_fromto_command] = STATE(115),
    [sym_tmp_arch_command] = STATE(115),
    [sym_tmp_bits_command] = STATE(115),
    [sym_tmp_nthi_command] = STATE(115),
    [sym_tmp_eval_command] = STATE(115),
    [sym_tmp_fs_command] = STATE(115),
    [sym_tmp_reli_command] = STATE(115),
    [sym_tmp_kuery_command] = STATE(115),
    [sym_tmp_fd_command] = STATE(115),
    [sym_tmp_reg_command] = STATE(115),
    [sym_tmp_file_command] = STATE(115),
    [sym_tmp_string_command] = STATE(115),
    [sym_tmp_hex_command] = STATE(115),
    [sym_arged_command] = STATE(115),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(140),
    [sym_repeat_command] = STATE(115),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
  },
  [18] = {
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
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_repeat_command] = STATE(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(75),
  },
  [19] = {
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(18),
    [sym_question_mark_identifier] = STATE(140),
    [sym_repeat_command] = STATE(117),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(77),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(79),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(75),
  },
  [20] = {
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
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(20),
    [sym_question_mark_identifier] = STATE(140),
    [sym_repeat_command] = STATE(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(19),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(31),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(37),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(41),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(23),
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
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(119),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(59),
  },
  [22] = {
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
    [sym_arged_command] = STATE(96),
    [sym__simple_arged_command] = STATE(105),
    [sym__math_arged_command] = STATE(105),
    [sym__pointer_arged_command] = STATE(105),
    [sym__macro_arged_command] = STATE(105),
    [sym__system_command] = STATE(105),
    [sym__interpret_command] = STATE(105),
    [sym__env_command] = STATE(105),
    [sym__last_command] = STATE(105),
    [sym_last_command_identifier] = STATE(104),
    [sym_interpret_identifier] = STATE(22),
    [sym_question_mark_identifier] = STATE(134),
    [sym_repeat_command] = STATE(96),
    [anon_sym_LPAREN_STAR] = ACTIONS(11),
    [anon_sym_DOT_DASH] = ACTIONS(13),
    [anon_sym_DOT_BANG] = ACTIONS(15),
    [anon_sym_DOT_LPAREN] = ACTIONS(17),
    [anon_sym_DOT_SLASH] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(27),
    [aux_sym_interpret_identifier_token1] = ACTIONS(29),
    [sym_system_identifier] = ACTIONS(61),
    [sym_pointer_identifier] = ACTIONS(33),
    [sym_macro_identifier] = ACTIONS(35),
    [sym_number] = ACTIONS(63),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(67),
    [sym__question_mark_identifier] = ACTIONS(95),
    [sym__env_identifier] = ACTIONS(59),
  },
  [23] = {
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
    [sym_number] = ACTIONS(101),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [sym_cmd_identifier] = ACTIONS(101),
    [sym__question_mark_identifier] = ACTIONS(101),
    [sym__env_identifier] = ACTIONS(101),
  },
  [24] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(110),
    [anon_sym_PIPEH] = ACTIONS(110),
    [anon_sym_PIPET] = ACTIONS(110),
    [anon_sym_AT_AT] = ACTIONS(110),
    [anon_sym_AT_ATdbt] = ACTIONS(110),
    [anon_sym_AT_ATdbta] = ACTIONS(110),
    [anon_sym_AT_ATdbtb] = ACTIONS(110),
    [anon_sym_AT_ATdbts] = ACTIONS(110),
    [anon_sym_AT_AT_DOT] = ACTIONS(110),
    [anon_sym_AT_AT_EQ] = ACTIONS(110),
    [anon_sym_AT_ATk] = ACTIONS(110),
    [anon_sym_AT_ATt] = ACTIONS(110),
    [anon_sym_AT_ATb] = ACTIONS(110),
    [anon_sym_AT_ATi] = ACTIONS(110),
    [anon_sym_AT_ATiS] = ACTIONS(110),
    [anon_sym_AT_ATf] = ACTIONS(110),
    [anon_sym_AT_ATs_COLON] = ACTIONS(110),
    [anon_sym_AT_ATc_COLON] = ACTIONS(110),
    [anon_sym_AT] = ACTIONS(110),
    [anon_sym_AT_BANG] = ACTIONS(110),
    [anon_sym_AT_LPAREN] = ACTIONS(110),
    [anon_sym_ATa_COLON] = ACTIONS(110),
    [anon_sym_ATb_COLON] = ACTIONS(110),
    [anon_sym_ATB_COLON] = ACTIONS(110),
    [anon_sym_ATe_COLON] = ACTIONS(110),
    [anon_sym_ATF_COLON] = ACTIONS(110),
    [anon_sym_ATi_COLON] = ACTIONS(110),
    [anon_sym_ATk_COLON] = ACTIONS(110),
    [anon_sym_ATo_COLON] = ACTIONS(110),
    [anon_sym_ATr_COLON] = ACTIONS(110),
    [anon_sym_ATf_COLON] = ACTIONS(110),
    [anon_sym_ATs_COLON] = ACTIONS(110),
    [anon_sym_ATx_COLON] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_PIPE_DOT] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_GT_GT] = ACTIONS(110),
    [sym_html_redirect_operator] = ACTIONS(110),
    [sym_html_append_operator] = ACTIONS(110),
    [aux_sym_arg_identifier_token1] = ACTIONS(112),
    [aux_sym_arg_identifier_token2] = ACTIONS(112),
    [sym_number] = ACTIONS(110),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(118),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(110),
    [anon_sym_CR] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
  },
  [25] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_PIPEH] = ACTIONS(128),
    [anon_sym_PIPET] = ACTIONS(128),
    [anon_sym_AT_AT] = ACTIONS(128),
    [anon_sym_AT_ATdbt] = ACTIONS(128),
    [anon_sym_AT_ATdbta] = ACTIONS(128),
    [anon_sym_AT_ATdbtb] = ACTIONS(128),
    [anon_sym_AT_ATdbts] = ACTIONS(128),
    [anon_sym_AT_AT_DOT] = ACTIONS(128),
    [anon_sym_AT_AT_EQ] = ACTIONS(128),
    [anon_sym_AT_ATk] = ACTIONS(128),
    [anon_sym_AT_ATt] = ACTIONS(128),
    [anon_sym_AT_ATb] = ACTIONS(128),
    [anon_sym_AT_ATi] = ACTIONS(128),
    [anon_sym_AT_ATiS] = ACTIONS(128),
    [anon_sym_AT_ATf] = ACTIONS(128),
    [anon_sym_AT_ATs_COLON] = ACTIONS(128),
    [anon_sym_AT_ATc_COLON] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_AT_BANG] = ACTIONS(128),
    [anon_sym_AT_LPAREN] = ACTIONS(128),
    [anon_sym_ATa_COLON] = ACTIONS(128),
    [anon_sym_ATb_COLON] = ACTIONS(128),
    [anon_sym_ATB_COLON] = ACTIONS(128),
    [anon_sym_ATe_COLON] = ACTIONS(128),
    [anon_sym_ATF_COLON] = ACTIONS(128),
    [anon_sym_ATi_COLON] = ACTIONS(128),
    [anon_sym_ATk_COLON] = ACTIONS(128),
    [anon_sym_ATo_COLON] = ACTIONS(128),
    [anon_sym_ATr_COLON] = ACTIONS(128),
    [anon_sym_ATf_COLON] = ACTIONS(128),
    [anon_sym_ATs_COLON] = ACTIONS(128),
    [anon_sym_ATx_COLON] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_PIPE_DOT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [sym_html_redirect_operator] = ACTIONS(128),
    [sym_html_append_operator] = ACTIONS(128),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_CR] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(128),
  },
  [26] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [sym_html_redirect_operator] = ACTIONS(140),
    [sym_html_append_operator] = ACTIONS(140),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(140),
    [anon_sym_CR] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [27] = {
    [sym_arg] = STATE(30),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [sym_html_redirect_operator] = ACTIONS(144),
    [sym_html_append_operator] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(144),
    [anon_sym_CR] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [28] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(148),
    [sym_html_append_operator] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(148),
    [anon_sym_CR] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [29] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(152),
    [anon_sym_CR] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [30] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(156),
    [sym_html_append_operator] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(156),
    [anon_sym_CR] = ACTIONS(156),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [31] = {
    [sym_arg] = STATE(33),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(33),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_PIPE_DOT] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [sym_html_redirect_operator] = ACTIONS(144),
    [sym_html_append_operator] = ACTIONS(144),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [32] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_GT] = ACTIONS(152),
    [anon_sym_GT_GT] = ACTIONS(152),
    [sym_html_redirect_operator] = ACTIONS(152),
    [sym_html_append_operator] = ACTIONS(152),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(152),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(152),
  },
  [33] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_GT] = ACTIONS(156),
    [anon_sym_GT_GT] = ACTIONS(156),
    [sym_html_redirect_operator] = ACTIONS(156),
    [sym_html_append_operator] = ACTIONS(156),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(156),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(156),
  },
  [34] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_TILDE] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(140),
    [anon_sym_PIPET] = ACTIONS(140),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(140),
    [anon_sym_AT_ATdbtb] = ACTIONS(140),
    [anon_sym_AT_ATdbts] = ACTIONS(140),
    [anon_sym_AT_AT_DOT] = ACTIONS(140),
    [anon_sym_AT_AT_EQ] = ACTIONS(140),
    [anon_sym_AT_ATk] = ACTIONS(140),
    [anon_sym_AT_ATt] = ACTIONS(140),
    [anon_sym_AT_ATb] = ACTIONS(140),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(140),
    [anon_sym_AT_ATf] = ACTIONS(140),
    [anon_sym_AT_ATs_COLON] = ACTIONS(140),
    [anon_sym_AT_ATc_COLON] = ACTIONS(140),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_PIPE_DOT] = ACTIONS(140),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [sym_html_redirect_operator] = ACTIONS(140),
    [sym_html_append_operator] = ACTIONS(140),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(140),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(140),
  },
  [35] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
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
    [anon_sym_GT] = ACTIONS(148),
    [anon_sym_GT_GT] = ACTIONS(148),
    [sym_html_redirect_operator] = ACTIONS(148),
    [sym_html_append_operator] = ACTIONS(148),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(148),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(148),
  },
  [36] = {
    [sym_arg] = STATE(24),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(24),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_TILDE] = ACTIONS(128),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_PIPEH] = ACTIONS(128),
    [anon_sym_PIPET] = ACTIONS(128),
    [anon_sym_AT_AT] = ACTIONS(128),
    [anon_sym_AT_ATdbt] = ACTIONS(128),
    [anon_sym_AT_ATdbta] = ACTIONS(128),
    [anon_sym_AT_ATdbtb] = ACTIONS(128),
    [anon_sym_AT_ATdbts] = ACTIONS(128),
    [anon_sym_AT_AT_DOT] = ACTIONS(128),
    [anon_sym_AT_AT_EQ] = ACTIONS(128),
    [anon_sym_AT_ATk] = ACTIONS(128),
    [anon_sym_AT_ATt] = ACTIONS(128),
    [anon_sym_AT_ATb] = ACTIONS(128),
    [anon_sym_AT_ATi] = ACTIONS(128),
    [anon_sym_AT_ATiS] = ACTIONS(128),
    [anon_sym_AT_ATf] = ACTIONS(128),
    [anon_sym_AT_ATs_COLON] = ACTIONS(128),
    [anon_sym_AT_ATc_COLON] = ACTIONS(128),
    [anon_sym_AT] = ACTIONS(128),
    [anon_sym_AT_BANG] = ACTIONS(128),
    [anon_sym_AT_LPAREN] = ACTIONS(128),
    [anon_sym_ATa_COLON] = ACTIONS(128),
    [anon_sym_ATb_COLON] = ACTIONS(128),
    [anon_sym_ATB_COLON] = ACTIONS(128),
    [anon_sym_ATe_COLON] = ACTIONS(128),
    [anon_sym_ATF_COLON] = ACTIONS(128),
    [anon_sym_ATi_COLON] = ACTIONS(128),
    [anon_sym_ATk_COLON] = ACTIONS(128),
    [anon_sym_ATo_COLON] = ACTIONS(128),
    [anon_sym_ATr_COLON] = ACTIONS(128),
    [anon_sym_ATf_COLON] = ACTIONS(128),
    [anon_sym_ATs_COLON] = ACTIONS(128),
    [anon_sym_ATx_COLON] = ACTIONS(128),
    [anon_sym_PIPE_DOT] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [anon_sym_GT_GT] = ACTIONS(128),
    [sym_html_redirect_operator] = ACTIONS(128),
    [sym_html_append_operator] = ACTIONS(128),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [sym_number] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(128),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(128),
  },
  [37] = {
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
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(160),
    [sym_html_redirect_operator] = ACTIONS(160),
    [sym_html_append_operator] = ACTIONS(160),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [sym_number] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [38] = {
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
    [anon_sym_GT] = ACTIONS(164),
    [anon_sym_GT_GT] = ACTIONS(164),
    [sym_html_redirect_operator] = ACTIONS(164),
    [sym_html_append_operator] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [sym_number] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [39] = {
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
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(168),
    [sym_html_redirect_operator] = ACTIONS(168),
    [sym_html_append_operator] = ACTIONS(168),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [sym_number] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
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
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(168),
    [sym_html_redirect_operator] = ACTIONS(168),
    [sym_html_append_operator] = ACTIONS(168),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [sym_number] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [41] = {
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
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(172),
    [sym_html_redirect_operator] = ACTIONS(172),
    [sym_html_append_operator] = ACTIONS(172),
    [aux_sym_arg_identifier_token1] = ACTIONS(172),
    [aux_sym_arg_identifier_token2] = ACTIONS(172),
    [sym_number] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [42] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(43),
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
    [anon_sym_PIPE_DOT] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(176),
    [anon_sym_GT_GT] = ACTIONS(174),
    [sym_html_redirect_operator] = ACTIONS(176),
    [sym_html_append_operator] = ACTIONS(174),
    [sym_number] = ACTIONS(174),
    [anon_sym_BQUOTE] = ACTIONS(174),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(174),
    [anon_sym_CR] = ACTIONS(174),
    [anon_sym_SEMI] = ACTIONS(174),
  },
  [43] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(180),
    [anon_sym_GT] = ACTIONS(182),
    [anon_sym_GT_GT] = ACTIONS(180),
    [sym_html_redirect_operator] = ACTIONS(182),
    [sym_html_append_operator] = ACTIONS(180),
    [sym_number] = ACTIONS(180),
    [anon_sym_BQUOTE] = ACTIONS(180),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(180),
    [anon_sym_CR] = ACTIONS(180),
    [anon_sym_SEMI] = ACTIONS(180),
  },
  [44] = {
    [aux_sym_tmp_eval_command_repeat1] = STATE(44),
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
    [anon_sym_PIPE_DOT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(184),
    [sym_html_redirect_operator] = ACTIONS(186),
    [sym_html_append_operator] = ACTIONS(184),
    [sym_number] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
  },
  [45] = {
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
    [anon_sym_EQ] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(193),
    [anon_sym_GT_GT] = ACTIONS(191),
    [sym_html_redirect_operator] = ACTIONS(193),
    [sym_html_append_operator] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [anon_sym_BQUOTE] = ACTIONS(191),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_CR] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(191),
  },
  [46] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(184),
    [anon_sym_GT] = ACTIONS(186),
    [anon_sym_GT_GT] = ACTIONS(184),
    [sym_html_redirect_operator] = ACTIONS(186),
    [sym_html_append_operator] = ACTIONS(184),
    [sym_number] = ACTIONS(184),
    [anon_sym_BQUOTE] = ACTIONS(184),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_CR] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
  },
  [47] = {
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
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_GT_GT] = ACTIONS(197),
    [sym_html_redirect_operator] = ACTIONS(199),
    [sym_html_append_operator] = ACTIONS(197),
    [sym_number] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(197),
    [anon_sym_CR] = ACTIONS(197),
    [anon_sym_SEMI] = ACTIONS(197),
  },
  [48] = {
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
    [anon_sym_COLON] = ACTIONS(207),
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
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_GT_GT] = ACTIONS(203),
    [sym_html_redirect_operator] = ACTIONS(205),
    [sym_html_append_operator] = ACTIONS(203),
    [sym_number] = ACTIONS(203),
    [anon_sym_BQUOTE] = ACTIONS(203),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(203),
    [anon_sym_CR] = ACTIONS(203),
    [anon_sym_SEMI] = ACTIONS(203),
  },
  [49] = {
    [sym__fdn_operator] = STATE(142),
    [sym_fdn_redirect_operator] = STATE(142),
    [sym_fdn_append_operator] = STATE(142),
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(283),
    [sym_html_redirect_operator] = ACTIONS(285),
    [sym_html_append_operator] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(209),
    [anon_sym_CR] = ACTIONS(209),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [50] = {
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
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_GT_GT] = ACTIONS(291),
    [sym_html_redirect_operator] = ACTIONS(293),
    [sym_html_append_operator] = ACTIONS(291),
    [sym_number] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(291),
    [anon_sym_CR] = ACTIONS(291),
    [anon_sym_SEMI] = ACTIONS(291),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(138),
    [anon_sym_PIPET] = ACTIONS(138),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(138),
    [anon_sym_AT_ATdbtb] = ACTIONS(138),
    [anon_sym_AT_ATdbts] = ACTIONS(138),
    [anon_sym_AT_AT_DOT] = ACTIONS(138),
    [anon_sym_AT_AT_EQ] = ACTIONS(138),
    [anon_sym_AT_ATk] = ACTIONS(138),
    [anon_sym_AT_ATt] = ACTIONS(138),
    [anon_sym_AT_ATb] = ACTIONS(138),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(138),
    [anon_sym_AT_ATf] = ACTIONS(138),
    [anon_sym_AT_ATs_COLON] = ACTIONS(138),
    [anon_sym_AT_ATc_COLON] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(138),
    [sym_html_redirect_operator] = ACTIONS(140),
    [sym_html_append_operator] = ACTIONS(138),
    [sym_number] = ACTIONS(138),
    [anon_sym_BQUOTE] = ACTIONS(138),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(138),
    [anon_sym_CR] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(138),
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
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(295),
    [sym_html_redirect_operator] = ACTIONS(297),
    [sym_html_append_operator] = ACTIONS(295),
    [sym_number] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(295),
    [anon_sym_CR] = ACTIONS(295),
    [anon_sym_SEMI] = ACTIONS(295),
  },
  [53] = {
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
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_GT_GT] = ACTIONS(299),
    [sym_html_redirect_operator] = ACTIONS(301),
    [sym_html_append_operator] = ACTIONS(299),
    [sym_number] = ACTIONS(299),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(299),
    [anon_sym_CR] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(299),
  },
  [54] = {
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
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_GT_GT] = ACTIONS(303),
    [sym_html_redirect_operator] = ACTIONS(305),
    [sym_html_append_operator] = ACTIONS(303),
    [sym_number] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(303),
    [anon_sym_CR] = ACTIONS(303),
    [anon_sym_SEMI] = ACTIONS(303),
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
    [anon_sym_GT] = ACTIONS(309),
    [anon_sym_GT_GT] = ACTIONS(307),
    [sym_html_redirect_operator] = ACTIONS(309),
    [sym_html_append_operator] = ACTIONS(307),
    [sym_number] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(307),
    [anon_sym_CR] = ACTIONS(307),
    [anon_sym_SEMI] = ACTIONS(307),
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
    [anon_sym_GT] = ACTIONS(313),
    [anon_sym_GT_GT] = ACTIONS(311),
    [sym_html_redirect_operator] = ACTIONS(313),
    [sym_html_append_operator] = ACTIONS(311),
    [sym_number] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_CR] = ACTIONS(311),
    [anon_sym_SEMI] = ACTIONS(311),
  },
  [57] = {
    [sym__eq_sep_args] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPEH] = ACTIONS(317),
    [anon_sym_PIPET] = ACTIONS(317),
    [anon_sym_AT_AT] = ACTIONS(317),
    [anon_sym_AT_ATdbt] = ACTIONS(317),
    [anon_sym_AT_ATdbta] = ACTIONS(317),
    [anon_sym_AT_ATdbtb] = ACTIONS(317),
    [anon_sym_AT_ATdbts] = ACTIONS(317),
    [anon_sym_AT_AT_DOT] = ACTIONS(317),
    [anon_sym_AT_AT_EQ] = ACTIONS(317),
    [anon_sym_AT_ATk] = ACTIONS(317),
    [anon_sym_AT_ATt] = ACTIONS(317),
    [anon_sym_AT_ATb] = ACTIONS(317),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(317),
    [anon_sym_AT_ATf] = ACTIONS(317),
    [anon_sym_AT_ATs_COLON] = ACTIONS(317),
    [anon_sym_AT_ATc_COLON] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
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
    [anon_sym_PIPE_DOT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(317),
    [sym_html_redirect_operator] = ACTIONS(317),
    [sym_html_append_operator] = ACTIONS(317),
    [sym_eq_sep_key] = ACTIONS(319),
    [sym_number] = ACTIONS(317),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(317),
    [anon_sym_CR] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
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
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_GT_GT] = ACTIONS(321),
    [sym_html_redirect_operator] = ACTIONS(323),
    [sym_html_append_operator] = ACTIONS(321),
    [sym_number] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(321),
    [anon_sym_CR] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(321),
  },
  [59] = {
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
    [anon_sym_GT] = ACTIONS(327),
    [anon_sym_GT_GT] = ACTIONS(325),
    [sym_html_redirect_operator] = ACTIONS(327),
    [sym_html_append_operator] = ACTIONS(325),
    [sym_number] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(325),
    [anon_sym_CR] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(325),
  },
  [60] = {
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
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_GT_GT] = ACTIONS(329),
    [sym_html_redirect_operator] = ACTIONS(331),
    [sym_html_append_operator] = ACTIONS(329),
    [sym_number] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(329),
    [anon_sym_CR] = ACTIONS(329),
    [anon_sym_SEMI] = ACTIONS(329),
  },
  [61] = {
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
    [anon_sym_GT] = ACTIONS(335),
    [anon_sym_GT_GT] = ACTIONS(333),
    [sym_html_redirect_operator] = ACTIONS(335),
    [sym_html_append_operator] = ACTIONS(333),
    [sym_number] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(333),
    [anon_sym_CR] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(333),
  },
  [62] = {
    [sym_pipe_second_command] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(337),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPEH] = ACTIONS(339),
    [anon_sym_PIPET] = ACTIONS(339),
    [anon_sym_AT_AT] = ACTIONS(339),
    [anon_sym_AT_ATdbt] = ACTIONS(339),
    [anon_sym_AT_ATdbta] = ACTIONS(339),
    [anon_sym_AT_ATdbtb] = ACTIONS(339),
    [anon_sym_AT_ATdbts] = ACTIONS(339),
    [anon_sym_AT_AT_DOT] = ACTIONS(339),
    [anon_sym_AT_AT_EQ] = ACTIONS(339),
    [anon_sym_AT_ATk] = ACTIONS(339),
    [anon_sym_AT_ATt] = ACTIONS(339),
    [anon_sym_AT_ATb] = ACTIONS(339),
    [anon_sym_AT_ATi] = ACTIONS(339),
    [anon_sym_AT_ATiS] = ACTIONS(339),
    [anon_sym_AT_ATf] = ACTIONS(339),
    [anon_sym_AT_ATs_COLON] = ACTIONS(339),
    [anon_sym_AT_ATc_COLON] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
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
    [anon_sym_PIPE_DOT] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_html_redirect_operator] = ACTIONS(339),
    [sym_html_append_operator] = ACTIONS(339),
    [sym__any_command] = ACTIONS(341),
    [sym_number] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(339),
    [anon_sym_CR] = ACTIONS(339),
    [anon_sym_SEMI] = ACTIONS(339),
  },
  [63] = {
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
    [anon_sym_GT] = ACTIONS(345),
    [anon_sym_GT_GT] = ACTIONS(343),
    [sym_html_redirect_operator] = ACTIONS(345),
    [sym_html_append_operator] = ACTIONS(343),
    [sym_number] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(343),
    [anon_sym_CR] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(343),
  },
  [64] = {
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
    [anon_sym_GT] = ACTIONS(349),
    [anon_sym_GT_GT] = ACTIONS(347),
    [sym_html_redirect_operator] = ACTIONS(349),
    [sym_html_append_operator] = ACTIONS(347),
    [sym_number] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(347),
    [anon_sym_CR] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(347),
  },
  [65] = {
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
    [anon_sym_GT] = ACTIONS(353),
    [anon_sym_GT_GT] = ACTIONS(351),
    [sym_html_redirect_operator] = ACTIONS(353),
    [sym_html_append_operator] = ACTIONS(351),
    [sym_number] = ACTIONS(351),
    [anon_sym_BQUOTE] = ACTIONS(351),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(351),
    [anon_sym_CR] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
  },
  [66] = {
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
    [anon_sym_GT] = ACTIONS(357),
    [anon_sym_GT_GT] = ACTIONS(355),
    [sym_html_redirect_operator] = ACTIONS(357),
    [sym_html_append_operator] = ACTIONS(355),
    [sym_number] = ACTIONS(355),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(355),
    [anon_sym_CR] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
  },
  [67] = {
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
    [anon_sym_GT] = ACTIONS(361),
    [anon_sym_GT_GT] = ACTIONS(359),
    [sym_html_redirect_operator] = ACTIONS(361),
    [sym_html_append_operator] = ACTIONS(359),
    [sym_number] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(359),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(359),
    [anon_sym_CR] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(359),
  },
  [68] = {
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
    [anon_sym_GT] = ACTIONS(365),
    [anon_sym_GT_GT] = ACTIONS(363),
    [sym_html_redirect_operator] = ACTIONS(365),
    [sym_html_append_operator] = ACTIONS(363),
    [sym_number] = ACTIONS(363),
    [anon_sym_BQUOTE] = ACTIONS(363),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(363),
    [anon_sym_CR] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(363),
  },
  [69] = {
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
    [anon_sym_GT] = ACTIONS(369),
    [anon_sym_GT_GT] = ACTIONS(367),
    [sym_html_redirect_operator] = ACTIONS(369),
    [sym_html_append_operator] = ACTIONS(367),
    [sym_number] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(367),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(367),
    [anon_sym_CR] = ACTIONS(367),
    [anon_sym_SEMI] = ACTIONS(367),
  },
  [70] = {
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
    [anon_sym_GT] = ACTIONS(373),
    [anon_sym_GT_GT] = ACTIONS(371),
    [sym_html_redirect_operator] = ACTIONS(373),
    [sym_html_append_operator] = ACTIONS(371),
    [sym_number] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(371),
    [anon_sym_CR] = ACTIONS(371),
    [anon_sym_SEMI] = ACTIONS(371),
  },
  [71] = {
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
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_GT_GT] = ACTIONS(375),
    [sym_html_redirect_operator] = ACTIONS(377),
    [sym_html_append_operator] = ACTIONS(375),
    [sym_number] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(375),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(375),
    [anon_sym_CR] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(375),
  },
  [72] = {
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
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_GT_GT] = ACTIONS(379),
    [sym_html_redirect_operator] = ACTIONS(381),
    [sym_html_append_operator] = ACTIONS(379),
    [sym_number] = ACTIONS(379),
    [anon_sym_BQUOTE] = ACTIONS(379),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(379),
    [anon_sym_CR] = ACTIONS(379),
    [anon_sym_SEMI] = ACTIONS(379),
  },
  [73] = {
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
    [anon_sym_GT] = ACTIONS(385),
    [anon_sym_GT_GT] = ACTIONS(383),
    [sym_html_redirect_operator] = ACTIONS(385),
    [sym_html_append_operator] = ACTIONS(383),
    [sym_number] = ACTIONS(383),
    [anon_sym_BQUOTE] = ACTIONS(383),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(383),
    [anon_sym_CR] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
  },
  [74] = {
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
    [anon_sym_GT] = ACTIONS(389),
    [anon_sym_GT_GT] = ACTIONS(387),
    [sym_html_redirect_operator] = ACTIONS(389),
    [sym_html_append_operator] = ACTIONS(387),
    [sym_number] = ACTIONS(387),
    [anon_sym_BQUOTE] = ACTIONS(387),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(387),
    [anon_sym_CR] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
  },
  [75] = {
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
    [anon_sym_GT] = ACTIONS(393),
    [anon_sym_GT_GT] = ACTIONS(391),
    [sym_html_redirect_operator] = ACTIONS(393),
    [sym_html_append_operator] = ACTIONS(391),
    [sym_number] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(391),
    [anon_sym_CR] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
  },
  [76] = {
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
    [anon_sym_GT] = ACTIONS(397),
    [anon_sym_GT_GT] = ACTIONS(395),
    [sym_html_redirect_operator] = ACTIONS(397),
    [sym_html_append_operator] = ACTIONS(395),
    [sym_number] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(395),
    [anon_sym_CR] = ACTIONS(395),
    [anon_sym_SEMI] = ACTIONS(395),
  },
  [77] = {
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
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_GT_GT] = ACTIONS(399),
    [sym_html_redirect_operator] = ACTIONS(401),
    [sym_html_append_operator] = ACTIONS(399),
    [sym_number] = ACTIONS(399),
    [anon_sym_BQUOTE] = ACTIONS(399),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(399),
    [anon_sym_CR] = ACTIONS(399),
    [anon_sym_SEMI] = ACTIONS(399),
  },
  [78] = {
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
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(166),
    [sym_html_redirect_operator] = ACTIONS(168),
    [sym_html_append_operator] = ACTIONS(166),
    [sym_number] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [79] = {
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
    [anon_sym_GT] = ACTIONS(168),
    [anon_sym_GT_GT] = ACTIONS(166),
    [sym_html_redirect_operator] = ACTIONS(168),
    [sym_html_append_operator] = ACTIONS(166),
    [sym_number] = ACTIONS(166),
    [anon_sym_BQUOTE] = ACTIONS(166),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(166),
    [anon_sym_CR] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
  },
  [80] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(170),
    [anon_sym_GT] = ACTIONS(172),
    [anon_sym_GT_GT] = ACTIONS(170),
    [sym_html_redirect_operator] = ACTIONS(172),
    [sym_html_append_operator] = ACTIONS(170),
    [sym_number] = ACTIONS(170),
    [anon_sym_BQUOTE] = ACTIONS(170),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(170),
    [anon_sym_CR] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
  },
  [81] = {
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
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_GT_GT] = ACTIONS(403),
    [sym_html_redirect_operator] = ACTIONS(405),
    [sym_html_append_operator] = ACTIONS(403),
    [sym_number] = ACTIONS(403),
    [anon_sym_BQUOTE] = ACTIONS(403),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(403),
    [anon_sym_CR] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(403),
  },
  [82] = {
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
    [anon_sym_GT] = ACTIONS(409),
    [anon_sym_GT_GT] = ACTIONS(407),
    [sym_html_redirect_operator] = ACTIONS(409),
    [sym_html_append_operator] = ACTIONS(407),
    [sym_number] = ACTIONS(407),
    [anon_sym_BQUOTE] = ACTIONS(407),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(407),
    [anon_sym_CR] = ACTIONS(407),
    [anon_sym_SEMI] = ACTIONS(407),
  },
  [83] = {
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
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_GT_GT] = ACTIONS(411),
    [sym_html_redirect_operator] = ACTIONS(413),
    [sym_html_append_operator] = ACTIONS(411),
    [sym_number] = ACTIONS(411),
    [anon_sym_BQUOTE] = ACTIONS(411),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(411),
    [anon_sym_CR] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(411),
  },
  [84] = {
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
    [sym_number] = ACTIONS(162),
    [anon_sym_BQUOTE] = ACTIONS(162),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(162),
    [anon_sym_CR] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(162),
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
    [anon_sym_GT] = ACTIONS(160),
    [anon_sym_GT_GT] = ACTIONS(158),
    [sym_html_redirect_operator] = ACTIONS(160),
    [sym_html_append_operator] = ACTIONS(158),
    [sym_number] = ACTIONS(158),
    [anon_sym_BQUOTE] = ACTIONS(158),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(158),
    [anon_sym_CR] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(158),
  },
  [86] = {
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
    [sym_number] = ACTIONS(415),
    [anon_sym_BQUOTE] = ACTIONS(415),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(415),
    [anon_sym_CR] = ACTIONS(415),
    [anon_sym_SEMI] = ACTIONS(415),
  },
  [87] = {
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
    [sym_number] = ACTIONS(419),
    [anon_sym_BQUOTE] = ACTIONS(419),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(419),
    [anon_sym_CR] = ACTIONS(419),
    [anon_sym_SEMI] = ACTIONS(419),
  },
  [88] = {
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
    [sym_number] = ACTIONS(423),
    [anon_sym_BQUOTE] = ACTIONS(423),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(423),
    [anon_sym_CR] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(423),
  },
  [89] = {
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
    [sym_number] = ACTIONS(427),
    [anon_sym_BQUOTE] = ACTIONS(427),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(427),
    [anon_sym_CR] = ACTIONS(427),
    [anon_sym_SEMI] = ACTIONS(427),
  },
  [90] = {
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
    [sym_number] = ACTIONS(431),
    [anon_sym_BQUOTE] = ACTIONS(431),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(431),
    [anon_sym_CR] = ACTIONS(431),
    [anon_sym_SEMI] = ACTIONS(431),
  },
  [91] = {
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
    [sym_number] = ACTIONS(435),
    [anon_sym_BQUOTE] = ACTIONS(435),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(435),
    [anon_sym_CR] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
  },
  [92] = {
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
    [sym_number] = ACTIONS(439),
    [anon_sym_BQUOTE] = ACTIONS(439),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(439),
    [anon_sym_CR] = ACTIONS(439),
    [anon_sym_SEMI] = ACTIONS(439),
  },
  [93] = {
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
    [sym_number] = ACTIONS(443),
    [anon_sym_BQUOTE] = ACTIONS(443),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(443),
    [anon_sym_CR] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(443),
  },
  [94] = {
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
    [anon_sym_PIPE_DOT] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_GT_GT] = ACTIONS(97),
    [sym_html_redirect_operator] = ACTIONS(99),
    [sym_html_append_operator] = ACTIONS(97),
    [sym_number] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_CR] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
  },
  [95] = {
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
    [sym_number] = ACTIONS(447),
    [anon_sym_BQUOTE] = ACTIONS(447),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(447),
    [anon_sym_CR] = ACTIONS(447),
    [anon_sym_SEMI] = ACTIONS(447),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_TILDE] = ACTIONS(138),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_PIPEH] = ACTIONS(138),
    [anon_sym_PIPET] = ACTIONS(138),
    [anon_sym_AT_AT] = ACTIONS(140),
    [anon_sym_AT_ATdbt] = ACTIONS(140),
    [anon_sym_AT_ATdbta] = ACTIONS(138),
    [anon_sym_AT_ATdbtb] = ACTIONS(138),
    [anon_sym_AT_ATdbts] = ACTIONS(138),
    [anon_sym_AT_AT_DOT] = ACTIONS(138),
    [anon_sym_AT_AT_EQ] = ACTIONS(138),
    [anon_sym_AT_ATk] = ACTIONS(138),
    [anon_sym_AT_ATt] = ACTIONS(138),
    [anon_sym_AT_ATb] = ACTIONS(138),
    [anon_sym_AT_ATi] = ACTIONS(140),
    [anon_sym_AT_ATiS] = ACTIONS(138),
    [anon_sym_AT_ATf] = ACTIONS(138),
    [anon_sym_AT_ATs_COLON] = ACTIONS(138),
    [anon_sym_AT_ATc_COLON] = ACTIONS(138),
    [anon_sym_AT] = ACTIONS(140),
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
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(138),
    [sym_html_redirect_operator] = ACTIONS(140),
    [sym_html_append_operator] = ACTIONS(138),
    [sym_number] = ACTIONS(138),
    [anon_sym_BQUOTE] = ACTIONS(138),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(138),
    [anon_sym_CR] = ACTIONS(138),
    [anon_sym_SEMI] = ACTIONS(138),
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
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_GT_GT] = ACTIONS(451),
    [sym_html_redirect_operator] = ACTIONS(453),
    [sym_html_append_operator] = ACTIONS(451),
    [sym_number] = ACTIONS(451),
    [anon_sym_BQUOTE] = ACTIONS(451),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(451),
    [anon_sym_CR] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(451),
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
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_GT_GT] = ACTIONS(455),
    [sym_html_redirect_operator] = ACTIONS(457),
    [sym_html_append_operator] = ACTIONS(455),
    [sym_number] = ACTIONS(455),
    [anon_sym_BQUOTE] = ACTIONS(455),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(455),
    [anon_sym_CR] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(455),
  },
  [99] = {
    [sym_system_arg] = STATE(55),
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_PIPEH] = ACTIONS(461),
    [anon_sym_PIPET] = ACTIONS(461),
    [anon_sym_AT_AT] = ACTIONS(461),
    [anon_sym_AT_ATdbt] = ACTIONS(461),
    [anon_sym_AT_ATdbta] = ACTIONS(461),
    [anon_sym_AT_ATdbtb] = ACTIONS(461),
    [anon_sym_AT_ATdbts] = ACTIONS(461),
    [anon_sym_AT_AT_DOT] = ACTIONS(461),
    [anon_sym_AT_AT_EQ] = ACTIONS(461),
    [anon_sym_AT_ATk] = ACTIONS(461),
    [anon_sym_AT_ATt] = ACTIONS(461),
    [anon_sym_AT_ATb] = ACTIONS(461),
    [anon_sym_AT_ATi] = ACTIONS(461),
    [anon_sym_AT_ATiS] = ACTIONS(461),
    [anon_sym_AT_ATf] = ACTIONS(461),
    [anon_sym_AT_ATs_COLON] = ACTIONS(461),
    [anon_sym_AT_ATc_COLON] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
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
    [anon_sym_PIPE_DOT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(461),
    [sym_html_redirect_operator] = ACTIONS(461),
    [sym_html_append_operator] = ACTIONS(461),
    [sym__any_command] = ACTIONS(463),
    [sym_number] = ACTIONS(461),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(461),
    [anon_sym_CR] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(461),
  },
  [100] = {
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
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_GT_GT] = ACTIONS(465),
    [sym_html_redirect_operator] = ACTIONS(467),
    [sym_html_append_operator] = ACTIONS(465),
    [sym_number] = ACTIONS(465),
    [anon_sym_BQUOTE] = ACTIONS(465),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(465),
    [anon_sym_CR] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(465),
  },
  [101] = {
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
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_GT_GT] = ACTIONS(469),
    [sym_html_redirect_operator] = ACTIONS(471),
    [sym_html_append_operator] = ACTIONS(469),
    [sym_number] = ACTIONS(469),
    [anon_sym_BQUOTE] = ACTIONS(469),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(469),
    [anon_sym_CR] = ACTIONS(469),
    [anon_sym_SEMI] = ACTIONS(469),
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
    [anon_sym_GT] = ACTIONS(475),
    [anon_sym_GT_GT] = ACTIONS(473),
    [sym_html_redirect_operator] = ACTIONS(475),
    [sym_html_append_operator] = ACTIONS(473),
    [sym_number] = ACTIONS(473),
    [anon_sym_BQUOTE] = ACTIONS(473),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(473),
    [anon_sym_CR] = ACTIONS(473),
    [anon_sym_SEMI] = ACTIONS(473),
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
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_GT_GT] = ACTIONS(477),
    [sym_html_redirect_operator] = ACTIONS(479),
    [sym_html_append_operator] = ACTIONS(477),
    [sym_number] = ACTIONS(477),
    [anon_sym_BQUOTE] = ACTIONS(477),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(477),
    [anon_sym_CR] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(477),
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
    [anon_sym_GT] = ACTIONS(483),
    [anon_sym_GT_GT] = ACTIONS(481),
    [sym_html_redirect_operator] = ACTIONS(483),
    [sym_html_append_operator] = ACTIONS(481),
    [sym_number] = ACTIONS(481),
    [anon_sym_BQUOTE] = ACTIONS(481),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(481),
    [anon_sym_CR] = ACTIONS(481),
    [anon_sym_SEMI] = ACTIONS(481),
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
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_GT_GT] = ACTIONS(485),
    [sym_html_redirect_operator] = ACTIONS(487),
    [sym_html_append_operator] = ACTIONS(485),
    [sym_number] = ACTIONS(485),
    [anon_sym_BQUOTE] = ACTIONS(485),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(485),
    [anon_sym_CR] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
  },
  [106] = {
    [sym__fdn_operator] = STATE(142),
    [sym_fdn_redirect_operator] = STATE(142),
    [sym_fdn_append_operator] = STATE(142),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(283),
    [sym_html_redirect_operator] = ACTIONS(285),
    [sym_html_append_operator] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [107] = {
    [sym__fdn_operator] = STATE(142),
    [sym_fdn_redirect_operator] = STATE(142),
    [sym_fdn_append_operator] = STATE(142),
    [anon_sym_TILDE] = ACTIONS(211),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(281),
    [anon_sym_GT_GT] = ACTIONS(283),
    [sym_html_redirect_operator] = ACTIONS(285),
    [sym_html_append_operator] = ACTIONS(287),
    [sym_number] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(209),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(209),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [sym_number] = ACTIONS(499),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(499),
    [anon_sym_CR] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
  },
  [109] = {
    [sym_system_arg] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_PIPEH] = ACTIONS(461),
    [anon_sym_PIPET] = ACTIONS(461),
    [anon_sym_AT_AT] = ACTIONS(461),
    [anon_sym_AT_ATdbt] = ACTIONS(461),
    [anon_sym_AT_ATdbta] = ACTIONS(461),
    [anon_sym_AT_ATdbtb] = ACTIONS(461),
    [anon_sym_AT_ATdbts] = ACTIONS(461),
    [anon_sym_AT_AT_DOT] = ACTIONS(461),
    [anon_sym_AT_AT_EQ] = ACTIONS(461),
    [anon_sym_AT_ATk] = ACTIONS(461),
    [anon_sym_AT_ATt] = ACTIONS(461),
    [anon_sym_AT_ATb] = ACTIONS(461),
    [anon_sym_AT_ATi] = ACTIONS(461),
    [anon_sym_AT_ATiS] = ACTIONS(461),
    [anon_sym_AT_ATf] = ACTIONS(461),
    [anon_sym_AT_ATs_COLON] = ACTIONS(461),
    [anon_sym_AT_ATc_COLON] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
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
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(461),
    [sym_html_redirect_operator] = ACTIONS(461),
    [sym_html_append_operator] = ACTIONS(461),
    [sym__any_command] = ACTIONS(463),
    [sym_number] = ACTIONS(461),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(461),
  },
  [110] = {
    [sym__eq_sep_args] = STATE(52),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPEH] = ACTIONS(317),
    [anon_sym_PIPET] = ACTIONS(317),
    [anon_sym_AT_AT] = ACTIONS(317),
    [anon_sym_AT_ATdbt] = ACTIONS(317),
    [anon_sym_AT_ATdbta] = ACTIONS(317),
    [anon_sym_AT_ATdbtb] = ACTIONS(317),
    [anon_sym_AT_ATdbts] = ACTIONS(317),
    [anon_sym_AT_AT_DOT] = ACTIONS(317),
    [anon_sym_AT_AT_EQ] = ACTIONS(317),
    [anon_sym_AT_ATk] = ACTIONS(317),
    [anon_sym_AT_ATt] = ACTIONS(317),
    [anon_sym_AT_ATb] = ACTIONS(317),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(317),
    [anon_sym_AT_ATf] = ACTIONS(317),
    [anon_sym_AT_ATs_COLON] = ACTIONS(317),
    [anon_sym_AT_ATc_COLON] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
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
    [anon_sym_PIPE_DOT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(317),
    [sym_html_redirect_operator] = ACTIONS(317),
    [sym_html_append_operator] = ACTIONS(317),
    [sym_eq_sep_key] = ACTIONS(319),
    [sym_number] = ACTIONS(317),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(317),
  },
  [111] = {
    [sym_pipe_second_command] = STATE(98),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPEH] = ACTIONS(339),
    [anon_sym_PIPET] = ACTIONS(339),
    [anon_sym_AT_AT] = ACTIONS(339),
    [anon_sym_AT_ATdbt] = ACTIONS(339),
    [anon_sym_AT_ATdbta] = ACTIONS(339),
    [anon_sym_AT_ATdbtb] = ACTIONS(339),
    [anon_sym_AT_ATdbts] = ACTIONS(339),
    [anon_sym_AT_AT_DOT] = ACTIONS(339),
    [anon_sym_AT_AT_EQ] = ACTIONS(339),
    [anon_sym_AT_ATk] = ACTIONS(339),
    [anon_sym_AT_ATt] = ACTIONS(339),
    [anon_sym_AT_ATb] = ACTIONS(339),
    [anon_sym_AT_ATi] = ACTIONS(339),
    [anon_sym_AT_ATiS] = ACTIONS(339),
    [anon_sym_AT_ATf] = ACTIONS(339),
    [anon_sym_AT_ATs_COLON] = ACTIONS(339),
    [anon_sym_AT_ATc_COLON] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
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
    [anon_sym_PIPE_DOT] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_html_redirect_operator] = ACTIONS(339),
    [sym_html_append_operator] = ACTIONS(339),
    [sym__any_command] = ACTIONS(341),
    [sym_number] = ACTIONS(339),
    [anon_sym_BQUOTE] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(339),
  },
  [112] = {
    [sym_pipe_second_command] = STATE(98),
    [anon_sym_TILDE] = ACTIONS(339),
    [anon_sym_PIPE] = ACTIONS(339),
    [anon_sym_PIPEH] = ACTIONS(339),
    [anon_sym_PIPET] = ACTIONS(339),
    [anon_sym_AT_AT] = ACTIONS(339),
    [anon_sym_AT_ATdbt] = ACTIONS(339),
    [anon_sym_AT_ATdbta] = ACTIONS(339),
    [anon_sym_AT_ATdbtb] = ACTIONS(339),
    [anon_sym_AT_ATdbts] = ACTIONS(339),
    [anon_sym_AT_AT_DOT] = ACTIONS(339),
    [anon_sym_AT_AT_EQ] = ACTIONS(339),
    [anon_sym_AT_ATk] = ACTIONS(339),
    [anon_sym_AT_ATt] = ACTIONS(339),
    [anon_sym_AT_ATb] = ACTIONS(339),
    [anon_sym_AT_ATi] = ACTIONS(339),
    [anon_sym_AT_ATiS] = ACTIONS(339),
    [anon_sym_AT_ATf] = ACTIONS(339),
    [anon_sym_AT_ATs_COLON] = ACTIONS(339),
    [anon_sym_AT_ATc_COLON] = ACTIONS(339),
    [anon_sym_AT] = ACTIONS(339),
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
    [anon_sym_GT] = ACTIONS(339),
    [anon_sym_GT_GT] = ACTIONS(339),
    [sym_html_redirect_operator] = ACTIONS(339),
    [sym_html_append_operator] = ACTIONS(339),
    [sym__any_command] = ACTIONS(341),
    [sym_number] = ACTIONS(339),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(339),
  },
  [113] = {
    [sym_system_arg] = STATE(55),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_PIPE] = ACTIONS(461),
    [anon_sym_PIPEH] = ACTIONS(461),
    [anon_sym_PIPET] = ACTIONS(461),
    [anon_sym_AT_AT] = ACTIONS(461),
    [anon_sym_AT_ATdbt] = ACTIONS(461),
    [anon_sym_AT_ATdbta] = ACTIONS(461),
    [anon_sym_AT_ATdbtb] = ACTIONS(461),
    [anon_sym_AT_ATdbts] = ACTIONS(461),
    [anon_sym_AT_AT_DOT] = ACTIONS(461),
    [anon_sym_AT_AT_EQ] = ACTIONS(461),
    [anon_sym_AT_ATk] = ACTIONS(461),
    [anon_sym_AT_ATt] = ACTIONS(461),
    [anon_sym_AT_ATb] = ACTIONS(461),
    [anon_sym_AT_ATi] = ACTIONS(461),
    [anon_sym_AT_ATiS] = ACTIONS(461),
    [anon_sym_AT_ATf] = ACTIONS(461),
    [anon_sym_AT_ATs_COLON] = ACTIONS(461),
    [anon_sym_AT_ATc_COLON] = ACTIONS(461),
    [anon_sym_AT] = ACTIONS(461),
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
    [anon_sym_PIPE_DOT] = ACTIONS(461),
    [anon_sym_GT] = ACTIONS(461),
    [anon_sym_GT_GT] = ACTIONS(461),
    [sym_html_redirect_operator] = ACTIONS(461),
    [sym_html_append_operator] = ACTIONS(461),
    [sym__any_command] = ACTIONS(463),
    [sym_number] = ACTIONS(461),
    [anon_sym_BQUOTE] = ACTIONS(461),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(461),
  },
  [114] = {
    [sym__eq_sep_args] = STATE(52),
    [anon_sym_TILDE] = ACTIONS(317),
    [anon_sym_PIPE] = ACTIONS(317),
    [anon_sym_PIPEH] = ACTIONS(317),
    [anon_sym_PIPET] = ACTIONS(317),
    [anon_sym_AT_AT] = ACTIONS(317),
    [anon_sym_AT_ATdbt] = ACTIONS(317),
    [anon_sym_AT_ATdbta] = ACTIONS(317),
    [anon_sym_AT_ATdbtb] = ACTIONS(317),
    [anon_sym_AT_ATdbts] = ACTIONS(317),
    [anon_sym_AT_AT_DOT] = ACTIONS(317),
    [anon_sym_AT_AT_EQ] = ACTIONS(317),
    [anon_sym_AT_ATk] = ACTIONS(317),
    [anon_sym_AT_ATt] = ACTIONS(317),
    [anon_sym_AT_ATb] = ACTIONS(317),
    [anon_sym_AT_ATi] = ACTIONS(317),
    [anon_sym_AT_ATiS] = ACTIONS(317),
    [anon_sym_AT_ATf] = ACTIONS(317),
    [anon_sym_AT_ATs_COLON] = ACTIONS(317),
    [anon_sym_AT_ATc_COLON] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
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
    [anon_sym_PIPE_DOT] = ACTIONS(317),
    [anon_sym_GT] = ACTIONS(317),
    [anon_sym_GT_GT] = ACTIONS(317),
    [sym_html_redirect_operator] = ACTIONS(317),
    [sym_html_append_operator] = ACTIONS(317),
    [sym_eq_sep_key] = ACTIONS(319),
    [sym_number] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(317),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(503),
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(247),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [sym_number] = ACTIONS(503),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(503),
    [anon_sym_CR] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(503),
  },
  [116] = {
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [sym_number] = ACTIONS(499),
    [anon_sym_BQUOTE] = ACTIONS(499),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(499),
  },
  [117] = {
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(503),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [sym_number] = ACTIONS(503),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(503),
  },
  [118] = {
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(501),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(231),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(491),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_GT_GT] = ACTIONS(499),
    [sym_html_redirect_operator] = ACTIONS(501),
    [sym_html_append_operator] = ACTIONS(499),
    [sym_number] = ACTIONS(499),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(499),
  },
  [119] = {
    [anon_sym_TILDE] = ACTIONS(503),
    [anon_sym_PIPE] = ACTIONS(505),
    [anon_sym_PIPEH] = ACTIONS(215),
    [anon_sym_PIPET] = ACTIONS(217),
    [anon_sym_AT_AT] = ACTIONS(219),
    [anon_sym_AT_ATdbt] = ACTIONS(221),
    [anon_sym_AT_ATdbta] = ACTIONS(223),
    [anon_sym_AT_ATdbtb] = ACTIONS(225),
    [anon_sym_AT_ATdbts] = ACTIONS(227),
    [anon_sym_AT_AT_DOT] = ACTIONS(229),
    [anon_sym_AT_AT_EQ] = ACTIONS(495),
    [anon_sym_AT_ATk] = ACTIONS(233),
    [anon_sym_AT_ATt] = ACTIONS(235),
    [anon_sym_AT_ATb] = ACTIONS(237),
    [anon_sym_AT_ATi] = ACTIONS(239),
    [anon_sym_AT_ATiS] = ACTIONS(241),
    [anon_sym_AT_ATf] = ACTIONS(243),
    [anon_sym_AT_ATs_COLON] = ACTIONS(245),
    [anon_sym_AT_ATc_COLON] = ACTIONS(497),
    [anon_sym_AT] = ACTIONS(249),
    [anon_sym_AT_BANG] = ACTIONS(251),
    [anon_sym_AT_LPAREN] = ACTIONS(253),
    [anon_sym_ATa_COLON] = ACTIONS(255),
    [anon_sym_ATb_COLON] = ACTIONS(257),
    [anon_sym_ATB_COLON] = ACTIONS(259),
    [anon_sym_ATe_COLON] = ACTIONS(261),
    [anon_sym_ATF_COLON] = ACTIONS(263),
    [anon_sym_ATi_COLON] = ACTIONS(265),
    [anon_sym_ATk_COLON] = ACTIONS(267),
    [anon_sym_ATo_COLON] = ACTIONS(269),
    [anon_sym_ATr_COLON] = ACTIONS(271),
    [anon_sym_ATf_COLON] = ACTIONS(273),
    [anon_sym_ATs_COLON] = ACTIONS(275),
    [anon_sym_ATx_COLON] = ACTIONS(277),
    [anon_sym_PIPE_DOT] = ACTIONS(279),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_GT_GT] = ACTIONS(503),
    [sym_html_redirect_operator] = ACTIONS(505),
    [sym_html_append_operator] = ACTIONS(503),
    [sym_number] = ACTIONS(503),
    [anon_sym_BQUOTE] = ACTIONS(503),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(503),
  },
  [120] = {
    [aux_sym_commands_repeat2] = STATE(120),
    [anon_sym_DQUOTE] = ACTIONS(507),
    [sym_interpreter_command] = ACTIONS(509),
    [anon_sym_LPAREN_STAR] = ACTIONS(507),
    [anon_sym_DOT_DASH] = ACTIONS(509),
    [anon_sym_DOT_BANG] = ACTIONS(507),
    [anon_sym_DOT_LPAREN] = ACTIONS(507),
    [anon_sym_DOT_SLASH] = ACTIONS(507),
    [anon_sym_PERCENT] = ACTIONS(507),
    [anon_sym_DOT] = ACTIONS(509),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(509),
    [aux_sym_interpret_identifier_token1] = ACTIONS(507),
    [sym_system_identifier] = ACTIONS(507),
    [sym_pointer_identifier] = ACTIONS(507),
    [sym_macro_identifier] = ACTIONS(509),
    [sym_number] = ACTIONS(507),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(511),
    [anon_sym_CR] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [sym_cmd_identifier] = ACTIONS(507),
    [sym__help_command] = ACTIONS(507),
    [sym__question_mark_identifier] = ACTIONS(507),
    [sym__env_identifier] = ACTIONS(507),
  },
  [121] = {
    [aux_sym__commands_singleline_repeat1] = STATE(121),
    [anon_sym_DQUOTE] = ACTIONS(514),
    [sym_interpreter_command] = ACTIONS(516),
    [anon_sym_LPAREN_STAR] = ACTIONS(514),
    [anon_sym_DOT_DASH] = ACTIONS(516),
    [anon_sym_DOT_BANG] = ACTIONS(514),
    [anon_sym_DOT_LPAREN] = ACTIONS(514),
    [anon_sym_DOT_SLASH] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(516),
    [aux_sym_interpret_identifier_token1] = ACTIONS(514),
    [sym_system_identifier] = ACTIONS(514),
    [sym_pointer_identifier] = ACTIONS(514),
    [sym_macro_identifier] = ACTIONS(516),
    [sym_number] = ACTIONS(514),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(518),
    [sym_cmd_identifier] = ACTIONS(514),
    [sym__help_command] = ACTIONS(514),
    [sym__question_mark_identifier] = ACTIONS(514),
    [sym__env_identifier] = ACTIONS(514),
  },
  [122] = {
    [sym_arg] = STATE(123),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [aux_sym_iter_offsets_command_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(525),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(525),
    [anon_sym_CR] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(525),
  },
  [123] = {
    [sym_arg] = STATE(125),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [aux_sym_iter_offsets_command_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(537),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(537),
    [anon_sym_CR] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(537),
  },
  [124] = {
    [anon_sym_LPAREN_STAR] = ACTIONS(101),
    [anon_sym_DOT_DASH] = ACTIONS(103),
    [anon_sym_DOT_BANG] = ACTIONS(101),
    [anon_sym_DOT_LPAREN] = ACTIONS(101),
    [anon_sym_DOT_SLASH] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(103),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(103),
    [aux_sym_interpret_identifier_token1] = ACTIONS(101),
    [sym_system_identifier] = ACTIONS(101),
    [sym_pointer_identifier] = ACTIONS(101),
    [sym_macro_identifier] = ACTIONS(103),
    [sym_number] = ACTIONS(101),
    [sym__comment] = ACTIONS(93),
    [sym_cmd_identifier] = ACTIONS(101),
    [sym__question_mark_identifier] = ACTIONS(101),
    [sym__env_identifier] = ACTIONS(101),
  },
  [125] = {
    [sym_arg] = STATE(125),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [aux_sym_iter_offsets_command_repeat1] = STATE(125),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(539),
    [anon_sym_RPAREN] = ACTIONS(110),
    [aux_sym_arg_identifier_token1] = ACTIONS(542),
    [aux_sym_arg_identifier_token2] = ACTIONS(542),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(548),
    [anon_sym_BQUOTE] = ACTIONS(551),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(110),
    [anon_sym_CR] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
  },
  [126] = {
    [sym_arg] = STATE(26),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(26),
    [aux_sym__interpret_command_repeat1] = STATE(128),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(554),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [127] = {
    [sym_arg] = STATE(34),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(34),
    [aux_sym__interpret_command_repeat1] = STATE(129),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(556),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [128] = {
    [sym_arg] = STATE(25),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(25),
    [aux_sym__interpret_command_repeat1] = STATE(165),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(558),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [129] = {
    [sym_arg] = STATE(36),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(36),
    [aux_sym__interpret_command_repeat1] = STATE(165),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_] = ACTIONS(558),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [130] = {
    [sym_arg] = STATE(131),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [aux_sym_iter_offsets_command_repeat1] = STATE(131),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(525),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(525),
  },
  [131] = {
    [sym_arg] = STATE(125),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [aux_sym_iter_offsets_command_repeat1] = STATE(125),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(537),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(537),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [133] = {
    [sym_arg] = STATE(29),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(29),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [134] = {
    [sym_arg] = STATE(35),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(35),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [135] = {
    [sym_arg] = STATE(32),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(32),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [aux_sym_arg_identifier_token1] = ACTIONS(164),
    [aux_sym_arg_identifier_token2] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(164),
    [anon_sym_BQUOTE] = ACTIONS(164),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(164),
    [anon_sym_CR] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [aux_sym_arg_identifier_token1] = ACTIONS(160),
    [aux_sym_arg_identifier_token2] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(160),
    [anon_sym_BQUOTE] = ACTIONS(160),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(160),
    [anon_sym_CR] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [aux_sym_arg_identifier_token1] = ACTIONS(168),
    [aux_sym_arg_identifier_token2] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(168),
    [anon_sym_BQUOTE] = ACTIONS(168),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(168),
    [anon_sym_CR] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(168),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [aux_sym_arg_identifier_token1] = ACTIONS(172),
    [aux_sym_arg_identifier_token2] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(172),
    [anon_sym_BQUOTE] = ACTIONS(172),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(172),
    [anon_sym_CR] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
  },
  [140] = {
    [sym_arg] = STATE(28),
    [sym_arg_identifier] = STATE(38),
    [sym_quoted_arg] = STATE(38),
    [sym_cmd_substitution_arg] = STATE(38),
    [aux_sym_iter_offsets_command_repeat1] = STATE(28),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [aux_sym_arg_identifier_token1] = ACTIONS(130),
    [aux_sym_arg_identifier_token2] = ACTIONS(130),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(134),
    [anon_sym_BQUOTE] = ACTIONS(136),
    [sym__comment] = ACTIONS(3),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(560),
    [anon_sym_DQUOTE] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(564),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(562),
    [sym__comment] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(564),
    [anon_sym_CR] = ACTIONS(564),
    [anon_sym_SEMI] = ACTIONS(564),
  },
  [142] = {
    [sym_arg] = STATE(168),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [143] = {
    [sym_arg] = STATE(76),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [144] = {
    [sym_arg] = STATE(97),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [145] = {
    [sym_arg] = STATE(95),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [146] = {
    [sym_arg] = STATE(93),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [147] = {
    [sym_arg] = STATE(161),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
  },
  [148] = {
    [sym_arg] = STATE(89),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [149] = {
    [sym_arg] = STATE(88),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [150] = {
    [sym_arg] = STATE(159),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
  },
  [151] = {
    [sym_arg] = STATE(86),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [152] = {
    [sym_arg] = STATE(92),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [153] = {
    [sym_arg] = STATE(83),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [154] = {
    [sym_arg] = STATE(81),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [155] = {
    [sym_arg] = STATE(60),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [156] = {
    [sym_arg] = STATE(75),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [157] = {
    [sym_arg] = STATE(70),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [158] = {
    [sym_arg] = STATE(69),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [159] = {
    [sym_arg] = STATE(87),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [160] = {
    [sym_arg] = STATE(68),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [161] = {
    [sym_arg] = STATE(152),
    [sym_arg_identifier] = STATE(136),
    [sym_quoted_arg] = STATE(136),
    [sym_cmd_substitution_arg] = STATE(136),
    [anon_sym_DQUOTE] = ACTIONS(523),
    [aux_sym_arg_identifier_token1] = ACTIONS(527),
    [aux_sym_arg_identifier_token2] = ACTIONS(527),
    [anon_sym_SQUOTE] = ACTIONS(529),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(531),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [sym__comment] = ACTIONS(3),
  },
  [162] = {
    [sym_arg] = STATE(65),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [163] = {
    [sym_arg] = STATE(61),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [164] = {
    [sym_arg] = STATE(59),
    [sym_arg_identifier] = STATE(84),
    [sym_quoted_arg] = STATE(84),
    [sym_cmd_substitution_arg] = STATE(84),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [aux_sym_arg_identifier_token1] = ACTIONS(568),
    [aux_sym_arg_identifier_token2] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(570),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(572),
    [anon_sym_BQUOTE] = ACTIONS(574),
    [sym__comment] = ACTIONS(3),
  },
  [165] = {
    [aux_sym__interpret_command_repeat1] = STATE(165),
    [anon_sym_DQUOTE] = ACTIONS(576),
    [anon_sym_] = ACTIONS(578),
    [aux_sym_arg_identifier_token1] = ACTIONS(576),
    [aux_sym_arg_identifier_token2] = ACTIONS(576),
    [anon_sym_SQUOTE] = ACTIONS(576),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(576),
    [anon_sym_BQUOTE] = ACTIONS(576),
    [sym__comment] = ACTIONS(3),
  },
  [166] = {
    [anon_sym_DQUOTE] = ACTIONS(562),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(564),
    [sym__comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(564),
  },
  [167] = {
    [anon_sym_DQUOTE] = ACTIONS(581),
    [aux_sym_arg_identifier_token1] = ACTIONS(581),
    [aux_sym_arg_identifier_token2] = ACTIONS(581),
    [anon_sym_SQUOTE] = ACTIONS(581),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [sym__comment] = ACTIONS(3),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(583),
    [anon_sym_CR] = ACTIONS(583),
    [anon_sym_SEMI] = ACTIONS(583),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_RPAREN] = ACTIONS(585),
    [anon_sym_BQUOTE] = ACTIONS(585),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(585),
    [anon_sym_CR] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(585),
  },
  [170] = {
    [anon_sym_DQUOTE] = ACTIONS(562),
    [aux_sym_arg_identifier_token1] = ACTIONS(562),
    [aux_sym_arg_identifier_token2] = ACTIONS(562),
    [anon_sym_SQUOTE] = ACTIONS(562),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(562),
    [anon_sym_BQUOTE] = ACTIONS(562),
    [sym__comment] = ACTIONS(3),
  },
  [171] = {
    [anon_sym_DQUOTE] = ACTIONS(587),
    [aux_sym_arg_identifier_token1] = ACTIONS(587),
    [aux_sym_arg_identifier_token2] = ACTIONS(587),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(587),
    [anon_sym_BQUOTE] = ACTIONS(587),
    [sym__comment] = ACTIONS(3),
  },
  [172] = {
    [anon_sym_DQUOTE] = ACTIONS(589),
    [aux_sym_arg_identifier_token1] = ACTIONS(589),
    [aux_sym_arg_identifier_token2] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [sym__comment] = ACTIONS(3),
  },
  [173] = {
    [anon_sym_DQUOTE] = ACTIONS(591),
    [aux_sym_arg_identifier_token1] = ACTIONS(591),
    [aux_sym_arg_identifier_token2] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(591),
    [sym__comment] = ACTIONS(3),
  },
  [174] = {
    [aux_sym_commands_repeat3] = STATE(178),
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_CR] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
  },
  [175] = {
    [aux_sym_commands_repeat3] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(597),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_CR] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
  },
  [176] = {
    [aux_sym_commands_repeat3] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(593),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_CR] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
  },
  [177] = {
    [aux_sym__spaces] = STATE(177),
    [anon_sym_] = ACTIONS(599),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(602),
    [anon_sym_CR] = ACTIONS(602),
    [anon_sym_SEMI] = ACTIONS(602),
  },
  [178] = {
    [aux_sym_commands_repeat3] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(604),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(595),
    [anon_sym_CR] = ACTIONS(595),
    [anon_sym_SEMI] = ACTIONS(595),
  },
  [179] = {
    [aux_sym_commands_repeat3] = STATE(179),
    [ts_builtin_sym_end] = ACTIONS(606),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(608),
    [anon_sym_CR] = ACTIONS(608),
    [anon_sym_SEMI] = ACTIONS(608),
  },
  [180] = {
    [aux_sym__spaces] = STATE(177),
    [anon_sym_] = ACTIONS(611),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(613),
    [anon_sym_CR] = ACTIONS(613),
    [anon_sym_SEMI] = ACTIONS(613),
  },
  [181] = {
    [aux_sym__spaces] = STATE(180),
    [aux_sym_commands_repeat1] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(615),
    [anon_sym_] = ACTIONS(617),
    [sym__comment] = ACTIONS(93),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(606),
    [sym__comment] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(606),
    [anon_sym_CR] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(606),
  },
  [183] = {
    [aux_sym__spaces] = STATE(180),
    [aux_sym_commands_repeat1] = STATE(181),
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_] = ACTIONS(21),
    [sym__comment] = ACTIONS(93),
  },
  [184] = {
    [aux_sym__commands_singleline_repeat2] = STATE(191),
    [anon_sym_BQUOTE] = ACTIONS(620),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(622),
  },
  [185] = {
    [aux_sym__commands_singleline_repeat2] = STATE(187),
    [anon_sym_RPAREN] = ACTIONS(624),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(626),
  },
  [186] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_RPAREN] = ACTIONS(624),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(626),
  },
  [187] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_RPAREN] = ACTIONS(628),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(626),
  },
  [188] = {
    [anon_sym_RPAREN] = ACTIONS(630),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(630),
  },
  [189] = {
    [aux_sym__commands_singleline_repeat2] = STATE(186),
    [anon_sym_RPAREN] = ACTIONS(620),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(626),
  },
  [190] = {
    [aux_sym__commands_singleline_repeat2] = STATE(190),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(632),
  },
  [191] = {
    [aux_sym__commands_singleline_repeat2] = STATE(193),
    [anon_sym_BQUOTE] = ACTIONS(624),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(622),
  },
  [192] = {
    [aux_sym__commands_singleline_repeat2] = STATE(194),
    [anon_sym_BQUOTE] = ACTIONS(624),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(622),
  },
  [193] = {
    [aux_sym__commands_singleline_repeat2] = STATE(193),
    [anon_sym_BQUOTE] = ACTIONS(630),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(635),
  },
  [194] = {
    [aux_sym__commands_singleline_repeat2] = STATE(193),
    [anon_sym_BQUOTE] = ACTIONS(628),
    [sym__comment] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(622),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(615),
    [anon_sym_] = ACTIONS(615),
    [sym__comment] = ACTIONS(93),
  },
  [196] = {
    [anon_sym_GT] = ACTIONS(638),
    [anon_sym_GT_GT] = ACTIONS(640),
    [sym__comment] = ACTIONS(93),
  },
  [197] = {
    [sym_interpret_arg] = STATE(51),
    [sym__any_command] = ACTIONS(642),
    [sym__comment] = ACTIONS(3),
  },
  [198] = {
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_macro_call_content] = ACTIONS(646),
    [sym__comment] = ACTIONS(3),
  },
  [199] = {
    [sym__eq_sep_args] = STATE(56),
    [sym_eq_sep_key] = ACTIONS(319),
    [sym__comment] = ACTIONS(3),
  },
  [200] = {
    [anon_sym_SQUOTE] = ACTIONS(648),
    [sym__comment] = ACTIONS(93),
  },
  [201] = {
    [anon_sym_BQUOTE] = ACTIONS(650),
    [sym__comment] = ACTIONS(93),
  },
  [202] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(652),
    [sym__comment] = ACTIONS(3),
  },
  [203] = {
    [sym_tmp_eval_arg] = ACTIONS(654),
    [sym__comment] = ACTIONS(3),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(656),
    [sym__comment] = ACTIONS(93),
  },
  [205] = {
    [anon_sym_DQUOTE] = ACTIONS(658),
    [sym__comment] = ACTIONS(93),
  },
  [206] = {
    [sym_eq_sep_val] = ACTIONS(660),
    [sym__comment] = ACTIONS(3),
  },
  [207] = {
    [sym_macro_content] = ACTIONS(662),
    [sym__comment] = ACTIONS(3),
  },
  [208] = {
    [aux_sym_quoted_arg_token1] = ACTIONS(664),
    [sym__comment] = ACTIONS(3),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(666),
    [sym__comment] = ACTIONS(93),
  },
  [210] = {
    [anon_sym_DQUOTE] = ACTIONS(668),
    [sym__comment] = ACTIONS(93),
  },
  [211] = {
    [anon_sym_DQUOTE] = ACTIONS(648),
    [sym__comment] = ACTIONS(93),
  },
  [212] = {
    [sym_macro_content] = ACTIONS(670),
    [sym__comment] = ACTIONS(3),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(672),
    [sym__comment] = ACTIONS(93),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(674),
    [sym__comment] = ACTIONS(93),
  },
  [215] = {
    [sym_tmp_eval_arg] = ACTIONS(676),
    [sym__comment] = ACTIONS(3),
  },
  [216] = {
    [anon_sym_SQUOTE] = ACTIONS(668),
    [sym__comment] = ACTIONS(93),
  },
  [217] = {
    [sym_grep_specifier] = ACTIONS(678),
    [sym__comment] = ACTIONS(3),
  },
  [218] = {
    [anon_sym_DQUOTE] = ACTIONS(680),
    [sym__comment] = ACTIONS(93),
  },
  [219] = {
    [anon_sym_SQUOTE] = ACTIONS(680),
    [sym__comment] = ACTIONS(93),
  },
  [220] = {
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym__comment] = ACTIONS(93),
  },
  [221] = {
    [anon_sym_BQUOTE] = ACTIONS(684),
    [sym__comment] = ACTIONS(93),
  },
  [222] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(686),
    [sym__comment] = ACTIONS(3),
  },
  [223] = {
    [aux_sym_quoted_arg_token1] = ACTIONS(688),
    [sym__comment] = ACTIONS(3),
  },
  [224] = {
    [anon_sym_RPAREN] = ACTIONS(690),
    [sym__comment] = ACTIONS(93),
  },
  [225] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(692),
    [sym__comment] = ACTIONS(3),
  },
  [226] = {
    [aux_sym_legacy_quoted_command_token1] = ACTIONS(694),
    [sym__comment] = ACTIONS(3),
  },
  [227] = {
    [aux_sym_quoted_arg_token1] = ACTIONS(696),
    [sym__comment] = ACTIONS(3),
  },
  [228] = {
    [anon_sym_BQUOTE] = ACTIONS(698),
    [sym__comment] = ACTIONS(93),
  },
  [229] = {
    [anon_sym_RPAREN] = ACTIONS(700),
    [sym__comment] = ACTIONS(93),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(225),
  [9] = {.count = 1, .reusable = false}, SHIFT(175),
  [11] = {.count = 1, .reusable = true}, SHIFT(58),
  [13] = {.count = 1, .reusable = false}, SHIFT(82),
  [15] = {.count = 1, .reusable = true}, SHIFT(197),
  [17] = {.count = 1, .reusable = true}, SHIFT(212),
  [19] = {.count = 1, .reusable = true}, SHIFT(126),
  [21] = {.count = 1, .reusable = true}, SHIFT(180),
  [23] = {.count = 1, .reusable = true}, SHIFT(57),
  [25] = {.count = 1, .reusable = false}, SHIFT(23),
  [27] = {.count = 1, .reusable = false}, SHIFT(94),
  [29] = {.count = 1, .reusable = true}, SHIFT(124),
  [31] = {.count = 1, .reusable = true}, SHIFT(99),
  [33] = {.count = 1, .reusable = true}, SHIFT(199),
  [35] = {.count = 1, .reusable = false}, SHIFT(207),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(2),
  [41] = {.count = 1, .reusable = true}, SHIFT(27),
  [43] = {.count = 1, .reusable = true}, SHIFT(122),
  [45] = {.count = 1, .reusable = true}, SHIFT(141),
  [47] = {.count = 1, .reusable = false}, SHIFT(174),
  [49] = {.count = 1, .reusable = true}, SHIFT(120),
  [51] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat3, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT(182),
  [55] = {.count = 1, .reusable = false}, SHIFT(184),
  [57] = {.count = 1, .reusable = true}, SHIFT(127),
  [59] = {.count = 1, .reusable = true}, SHIFT(114),
  [61] = {.count = 1, .reusable = true}, SHIFT(113),
  [63] = {.count = 1, .reusable = true}, SHIFT(21),
  [65] = {.count = 1, .reusable = true}, SHIFT(10),
  [67] = {.count = 1, .reusable = true}, SHIFT(31),
  [69] = {.count = 1, .reusable = true}, SHIFT(130),
  [71] = {.count = 1, .reusable = true}, SHIFT(166),
  [73] = {.count = 1, .reusable = false}, SHIFT(189),
  [75] = {.count = 1, .reusable = true}, SHIFT(110),
  [77] = {.count = 1, .reusable = true}, SHIFT(109),
  [79] = {.count = 1, .reusable = true}, SHIFT(19),
  [81] = {.count = 1, .reusable = true}, SHIFT(13),
  [83] = {.count = 1, .reusable = false}, SHIFT(192),
  [85] = {.count = 1, .reusable = true}, SHIFT(121),
  [87] = {.count = 1, .reusable = false}, SHIFT(188),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 1),
  [91] = {.count = 1, .reusable = false}, SHIFT(185),
  [93] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [95] = {.count = 1, .reusable = true}, SHIFT(170),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_last_command_identifier, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_last_command_identifier, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_identifier, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_identifier, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(202),
  [110] = {.count = 1, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(37),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(208),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(8),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(9),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 6),
  [126] = {.count = 1, .reusable = false}, SHIFT(202),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 6),
  [130] = {.count = 1, .reusable = false}, SHIFT(37),
  [132] = {.count = 1, .reusable = false}, SHIFT(208),
  [134] = {.count = 1, .reusable = false}, SHIFT(8),
  [136] = {.count = 1, .reusable = false}, SHIFT(9),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 1, .production_id = 1),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym__math_arged_command, 2, .production_id = 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_iter_offsets_command, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_iter_offsets_command, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__simple_arged_command, 2, .production_id = 3),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_arg_identifier, 1),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_arg_identifier, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_arg, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_arg, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_cmd_substitution_arg, 3),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_cmd_substitution_arg, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_quoted_arg, 3, .production_id = 5),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_quoted_arg, 3, .production_id = 5),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 3),
  [178] = {.count = 1, .reusable = true}, SHIFT(203),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_eval_command, 4),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_eval_command, 4),
  [184] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [186] = {.count = 1, .reusable = false}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2),
  [188] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tmp_eval_command_repeat1, 2), SHIFT_REPEAT(203),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 1),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 1),
  [195] = {.count = 1, .reusable = true}, SHIFT(206),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 3, .production_id = 3),
  [201] = {.count = 1, .reusable = true}, SHIFT(198),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(164),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__command, 1),
  [211] = {.count = 1, .reusable = true}, SHIFT(217),
  [213] = {.count = 1, .reusable = false}, SHIFT(62),
  [215] = {.count = 1, .reusable = true}, SHIFT(63),
  [217] = {.count = 1, .reusable = true}, SHIFT(64),
  [219] = {.count = 1, .reusable = false}, SHIFT(144),
  [221] = {.count = 1, .reusable = false}, SHIFT(50),
  [223] = {.count = 1, .reusable = true}, SHIFT(50),
  [225] = {.count = 1, .reusable = true}, SHIFT(66),
  [227] = {.count = 1, .reusable = true}, SHIFT(67),
  [229] = {.count = 1, .reusable = true}, SHIFT(145),
  [231] = {.count = 1, .reusable = true}, SHIFT(133),
  [233] = {.count = 1, .reusable = true}, SHIFT(146),
  [235] = {.count = 1, .reusable = true}, SHIFT(71),
  [237] = {.count = 1, .reusable = true}, SHIFT(72),
  [239] = {.count = 1, .reusable = false}, SHIFT(73),
  [241] = {.count = 1, .reusable = true}, SHIFT(74),
  [243] = {.count = 1, .reusable = true}, SHIFT(48),
  [245] = {.count = 1, .reusable = true}, SHIFT(147),
  [247] = {.count = 1, .reusable = true}, SHIFT(16),
  [249] = {.count = 1, .reusable = false}, SHIFT(148),
  [251] = {.count = 1, .reusable = true}, SHIFT(149),
  [253] = {.count = 1, .reusable = true}, SHIFT(150),
  [255] = {.count = 1, .reusable = true}, SHIFT(151),
  [257] = {.count = 1, .reusable = true}, SHIFT(153),
  [259] = {.count = 1, .reusable = true}, SHIFT(154),
  [261] = {.count = 1, .reusable = true}, SHIFT(215),
  [263] = {.count = 1, .reusable = true}, SHIFT(143),
  [265] = {.count = 1, .reusable = true}, SHIFT(156),
  [267] = {.count = 1, .reusable = true}, SHIFT(157),
  [269] = {.count = 1, .reusable = true}, SHIFT(158),
  [271] = {.count = 1, .reusable = true}, SHIFT(160),
  [273] = {.count = 1, .reusable = true}, SHIFT(162),
  [275] = {.count = 1, .reusable = true}, SHIFT(163),
  [277] = {.count = 1, .reusable = true}, SHIFT(155),
  [279] = {.count = 1, .reusable = true}, SHIFT(91),
  [281] = {.count = 1, .reusable = false}, SHIFT(167),
  [283] = {.count = 1, .reusable = true}, SHIFT(171),
  [285] = {.count = 1, .reusable = false}, SHIFT(142),
  [287] = {.count = 1, .reusable = true}, SHIFT(142),
  [289] = {.count = 1, .reusable = true}, SHIFT(196),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbta_command, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbta_command, 2),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 2, .production_id = 3),
  [297] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 2, .production_id = 3),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__eq_sep_args, 3),
  [301] = {.count = 1, .reusable = false}, REDUCE(sym__eq_sep_args, 3),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_system_arg, 1),
  [305] = {.count = 1, .reusable = false}, REDUCE(sym_system_arg, 1),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 2, .production_id = 3),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 2, .production_id = 3),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym__pointer_arged_command, 2, .production_id = 3),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__env_command, 1, .production_id = 1),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym__env_command, 1, .production_id = 1),
  [319] = {.count = 1, .reusable = false}, SHIFT(45),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 1, .production_id = 1),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_iter_functions_command, 4),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_iter_functions_command, 4),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_hex_command, 3),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_hex_command, 3),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_string_command, 3),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_string_command, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_html_disable_command, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_html_disable_command, 2),
  [341] = {.count = 1, .reusable = false}, SHIFT(100),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_html_enable_command, 2),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_html_enable_command, 2),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_scr_tts_command, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_scr_tts_command, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_file_command, 3),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_file_command, 3),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbtb_command, 2),
  [357] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbtb_command, 2),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_iter_dbts_command, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_iter_dbts_command, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reg_command, 3),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reg_command, 3),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fd_command, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fd_command, 3),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_kuery_command, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_kuery_command, 3),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_iter_threads_command, 2),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_iter_threads_command, 2),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_iter_bbs_command, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_iter_bbs_command, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_iter_instrs_command, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_iter_instrs_command, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sections_command, 2),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sections_command, 2),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_reli_command, 3),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_reli_command, 3),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fs_command, 3),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fs_command, 3),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_interpret_arg, 1),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_interpret_arg, 1),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_nthi_command, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_nthi_command, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 1, .production_id = 1),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_bits_command, 3),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_bits_command, 3),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_arch_command, 3),
  [417] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_arch_command, 3),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_fromto_command, 4),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_fromto_command, 4),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_blksz_command, 3),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_blksz_command, 3),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_tmp_seek_command, 3),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_tmp_seek_command, 3),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 5, .production_id = 3),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 2, .production_id = 4),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_iter_step_command, 5),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_iter_step_command, 5),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_iter_sdbquery_command, 3),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_iter_sdbquery_command, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_iter_file_lines_command, 3),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_iter_file_lines_command, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_iter_flags_command, 3),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_iter_flags_command, 3),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_command, 3),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_command, 3),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym__system_command, 1, .production_id = 1),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym__system_command, 1, .production_id = 1),
  [463] = {.count = 1, .reusable = false}, SHIFT(54),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_pipe_second_command, 1),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_pipe_second_command, 1),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_grep_command, 3, .production_id = 1),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym__macro_arged_command, 6, .production_id = 3),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym__interpret_command, 3, .production_id = 3),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym__last_command, 1, .production_id = 1),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym__last_command, 1, .production_id = 1),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_arged_command, 1, .production_id = 2),
  [489] = {.count = 1, .reusable = false}, SHIFT(112),
  [491] = {.count = 1, .reusable = true}, SHIFT(15),
  [493] = {.count = 1, .reusable = false}, SHIFT(111),
  [495] = {.count = 1, .reusable = true}, SHIFT(135),
  [497] = {.count = 1, .reusable = true}, SHIFT(14),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_iter_interpret_command, 3),
  [501] = {.count = 1, .reusable = false}, REDUCE(sym_iter_interpret_command, 3),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_repeat_command, 2),
  [505] = {.count = 1, .reusable = false}, REDUCE(sym_repeat_command, 2),
  [507] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2),
  [509] = {.count = 1, .reusable = false}, REDUCE(aux_sym_commands_repeat2, 2),
  [511] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat2, 2), SHIFT_REPEAT(120),
  [514] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [516] = {.count = 1, .reusable = false}, REDUCE(aux_sym__commands_singleline_repeat1, 2),
  [518] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat1, 2), SHIFT_REPEAT(121),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1, .production_id = 1),
  [523] = {.count = 1, .reusable = false}, SHIFT(222),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1, .production_id = 1),
  [527] = {.count = 1, .reusable = false}, SHIFT(137),
  [529] = {.count = 1, .reusable = false}, SHIFT(223),
  [531] = {.count = 1, .reusable = false}, SHIFT(7),
  [533] = {.count = 1, .reusable = false}, SHIFT(6),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 2, .production_id = 3),
  [537] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 2, .production_id = 3),
  [539] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(222),
  [542] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(137),
  [545] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(223),
  [548] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(7),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_iter_offsets_command_repeat1, 2), SHIFT_REPEAT(6),
  [554] = {.count = 1, .reusable = false}, SHIFT(128),
  [556] = {.count = 1, .reusable = false}, SHIFT(129),
  [558] = {.count = 1, .reusable = false}, SHIFT(165),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_help_command, 1),
  [562] = {.count = 1, .reusable = false}, REDUCE(sym_question_mark_identifier, 1),
  [564] = {.count = 1, .reusable = false}, REDUCE(sym_help_command, 1),
  [566] = {.count = 1, .reusable = false}, SHIFT(226),
  [568] = {.count = 1, .reusable = false}, SHIFT(85),
  [570] = {.count = 1, .reusable = false}, SHIFT(227),
  [572] = {.count = 1, .reusable = false}, SHIFT(5),
  [574] = {.count = 1, .reusable = false}, SHIFT(4),
  [576] = {.count = 1, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2),
  [578] = {.count = 2, .reusable = false}, REDUCE(aux_sym__interpret_command_repeat1, 2), SHIFT_REPEAT(165),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 1),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_fd_redirect_command, 3, .production_id = 7),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_legacy_quoted_command, 3, .production_id = 5),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 1),
  [589] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_redirect_operator, 2),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_fdn_append_operator, 2),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 2),
  [595] = {.count = 1, .reusable = true}, SHIFT(3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 1),
  [599] = {.count = 2, .reusable = true}, REDUCE(aux_sym__spaces, 2), SHIFT_REPEAT(177),
  [602] = {.count = 1, .reusable = true}, REDUCE(aux_sym__spaces, 2),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_commands, 3),
  [606] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat3, 2),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat3, 2), SHIFT_REPEAT(3),
  [611] = {.count = 1, .reusable = true}, SHIFT(177),
  [613] = {.count = 1, .reusable = true}, SHIFT(195),
  [615] = {.count = 1, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2),
  [617] = {.count = 2, .reusable = true}, REDUCE(aux_sym_commands_repeat1, 2), SHIFT_REPEAT(180),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 1),
  [622] = {.count = 1, .reusable = true}, SHIFT(12),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 2),
  [626] = {.count = 1, .reusable = true}, SHIFT(11),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym__commands_singleline, 3),
  [630] = {.count = 1, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(11),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym__commands_singleline_repeat2, 2), SHIFT_REPEAT(12),
  [638] = {.count = 1, .reusable = false}, SHIFT(172),
  [640] = {.count = 1, .reusable = true}, SHIFT(173),
  [642] = {.count = 1, .reusable = false}, SHIFT(77),
  [644] = {.count = 1, .reusable = false}, SHIFT(90),
  [646] = {.count = 1, .reusable = false}, SHIFT(204),
  [648] = {.count = 1, .reusable = true}, SHIFT(139),
  [650] = {.count = 1, .reusable = true}, SHIFT(132),
  [652] = {.count = 1, .reusable = false}, SHIFT(210),
  [654] = {.count = 1, .reusable = false}, SHIFT(46),
  [656] = {.count = 1, .reusable = true}, SHIFT(102),
  [658] = {.count = 1, .reusable = true}, SHIFT(169),
  [660] = {.count = 1, .reusable = false}, SHIFT(53),
  [662] = {.count = 1, .reusable = false}, SHIFT(229),
  [664] = {.count = 1, .reusable = false}, SHIFT(216),
  [666] = {.count = 1, .reusable = true}, SHIFT(103),
  [668] = {.count = 1, .reusable = true}, SHIFT(41),
  [670] = {.count = 1, .reusable = false}, SHIFT(209),
  [672] = {.count = 1, .reusable = true}, SHIFT(138),
  [674] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [676] = {.count = 1, .reusable = false}, SHIFT(42),
  [678] = {.count = 1, .reusable = true}, SHIFT(101),
  [680] = {.count = 1, .reusable = true}, SHIFT(80),
  [682] = {.count = 1, .reusable = true}, SHIFT(79),
  [684] = {.count = 1, .reusable = true}, SHIFT(78),
  [686] = {.count = 1, .reusable = false}, SHIFT(211),
  [688] = {.count = 1, .reusable = false}, SHIFT(200),
  [690] = {.count = 1, .reusable = true}, SHIFT(40),
  [692] = {.count = 1, .reusable = false}, SHIFT(205),
  [694] = {.count = 1, .reusable = false}, SHIFT(218),
  [696] = {.count = 1, .reusable = false}, SHIFT(219),
  [698] = {.count = 1, .reusable = true}, SHIFT(39),
  [700] = {.count = 1, .reusable = true}, SHIFT(47),
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
