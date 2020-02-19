const SPECIAL_CHARACTERS = [
    '\\s',
    '#', '@', '|',
    '"', '\'', '>',
    ';', '$', '(',
    ')', '`', '~', '\\'
];

const SPECIAL_CHARACTERS_EQUAL = SPECIAL_CHARACTERS.concat(['=']);

module.exports = grammar({
    name: 'r2cmd',

    extras: $ => [
	$._comment,
	/[ \t]*/,
    ],

    externals: $ => [
	$.cmd_identifier,
	$._help_command,
	$.file_descriptor,
	$.repeat_number,
	$.interpreter_identifier,
	$._eq_sep_concat,
    ],

    inline: $ => [
	$.cmd_delimiter,
	$.cmd_delimiter_singleline,
	$._comment,
    ],

    rules: {
	commands: $ => choice(
	    seq(),
	    seq(repeat($.cmd_delimiter)),
	    seq(
		repeat($.cmd_delimiter),
		$._command,
		repeat(seq($.cmd_delimiter, optional($._command)))
	    ),
	),
	_commands_singleline: $ => prec(1,seq(
	    repeat($.cmd_delimiter_singleline),
	    $._command,
	    repeat(seq($.cmd_delimiter_singleline, optional($._command)))
	)),

	_command: $ => choice(
	    $.redirect_command,
	    $._simple_command,
	),

	legacy_quoted_command: $ => seq(
	    '"',
	    field('string', /[^\\"\n]+/),
	    '"',
	),

	_simple_command: $ => choice(
	    $.help_command,
	    $.repeat_command,
	    $.arged_command,
	    $._tmp_command,
	    $._iter_command,
	    $._pipe_command,
	    $.grep_command,
	    $.last_command,
	    $.legacy_quoted_command,
	),

	_tmp_command: $ => choice(
	    $.tmp_seek_command,
	    $.tmp_blksz_command,
	    $.tmp_fromto_command,
	    $.tmp_arch_command,
	    $.tmp_bits_command,
	    $.tmp_nthi_command,
	    $.tmp_eval_command,
	    $.tmp_fs_command,
	    $.tmp_reli_command,
	    $.tmp_kuery_command,
	    $.tmp_fd_command,
	    $.tmp_reg_command,
	    $.tmp_file_command,
	    $.tmp_string_command,
	    $.tmp_hex_command,
	),

	_iter_command: $ => choice(
	    $.iter_flags_command,
	    $.iter_dbta_command,
	    $.iter_dbtb_command,
	    $.iter_dbts_command,
	    $.iter_file_lines_command,
	    $.iter_offsets_command,
	    $.iter_sdbquery_command,
	    $.iter_threads_command,
	    $.iter_bbs_command,
	    $.iter_instrs_command,
	    $.iter_sections_command,
	    $.iter_functions_command,
	    $.iter_step_command,
	    $.iter_interpret_command,
	),

	_pipe_command: $ => choice(
	    $.html_disable_command,
	    $.html_enable_command,
	    $.pipe_command,
	    $.scr_tts_command,
	),

	grep_command: $ => seq(
	    field('command', $._simple_command),
	    '~',
	    field('specifier', $.grep_specifier),
	),
	// FIXME: improve parser for grep specifier
	// grep_specifier also includes ~ because r2 does not support nested grep commands yet
	grep_specifier: $ => /[A-Za-z0-9 \.\&,$!+\^<?:{}\-_\[\]()~]*/,

	html_disable_command: $ => prec.right(1, seq($._simple_command, '|')),
	html_enable_command: $ => prec.right(1, seq($._simple_command, '|H')),
	scr_tts_command: $ => prec.right(1, seq($._simple_command, '|T')),
	pipe_command: $ => seq($._simple_command, '|', $.pipe_second_command),
	pipe_second_command: $ => /[^|\r\n;]+/,

	iter_flags_command: $ => prec.right(1, seq($._simple_command, '@@', $.arg)),
	iter_dbta_command: $ => prec.right(1, seq($._simple_command, choice('@@dbt', '@@dbta'))),
	iter_dbtb_command: $ => prec.right(1, seq($._simple_command, '@@dbtb')),
	iter_dbts_command: $ => prec.right(1, seq($._simple_command, '@@dbts')),
	iter_file_lines_command: $ => prec.right(1, seq($._simple_command, '@@.', $.arg)),
	iter_offsets_command: $ => prec.right(1, seq($._simple_command, '@@=', $.args)),
	iter_sdbquery_command: $ => prec.right(1, seq($._simple_command, '@@k', $.arg)),
	iter_threads_command: $ => prec.right(1, seq($._simple_command, '@@t')),
	iter_bbs_command: $ => prec.right(1, seq($._simple_command, '@@b')),
	iter_instrs_command: $ => prec.right(1, seq($._simple_command, '@@i')),
	iter_sections_command: $ => prec.right(1, seq($._simple_command, '@@iS')),
	iter_functions_command: $ => prec.right(1, seq($._simple_command, '@@f', optional(seq(':', $.arg)))),
	iter_step_command: $ => prec.right(1, seq($._simple_command, '@@s:', $.arg, $.arg, $.arg)),
	iter_interpret_command: $ => prec.right(1, seq($._simple_command, '@@c:', $._simple_command)),

	// tmp changes commands
	tmp_seek_command: $ => prec.right(1, seq($._simple_command, '@', $.arg)),
	tmp_blksz_command: $ => prec.right(1, seq($._simple_command, '@!', $.arg)),
	tmp_fromto_command: $ => prec.right(1, seq($._simple_command, '@(', $.arg, $.arg)),
	tmp_arch_command: $ => prec.right(1, seq($._simple_command, '@a:', $.arg)),
	tmp_bits_command: $ => prec.right(1, seq($._simple_command, '@b:', $.arg)),
	tmp_nthi_command: $ => prec.right(1, seq($._simple_command, '@B:', $.arg)),
	tmp_eval_command: $ => prec.right(1, seq($._simple_command, '@e:', $.tmp_eval_arg, repeat(seq(',', $.tmp_eval_arg)))),
	tmp_fs_command: $ => prec.right(1, seq($._simple_command, '@F:', $.arg)),
	tmp_reli_command: $ => prec.right(1, seq($._simple_command, '@i:', $.arg)),
	tmp_kuery_command: $ => prec.right(1, seq($._simple_command, '@k:', $.arg)),
	tmp_fd_command: $ => prec.right(1, seq($._simple_command, '@o:', $.arg)),
	tmp_reg_command: $ => prec.right(1, seq($._simple_command, '@r:', $.arg)),
	tmp_file_command: $ => prec.right(1, seq($._simple_command, '@f:', $.arg)),
	tmp_string_command: $ => prec.right(1, seq($._simple_command, '@s:', $.arg)),
	tmp_hex_command: $ => prec.right(1, seq($._simple_command, '@x:', $.arg)),

	_interpreter_command: $ => prec.right(1, seq(
	    field('command', alias($.interpreter_identifier, $.cmd_identifier)),
	    field('args', optional($.args)),
	)),

	// basic commands
	help_command: $ => prec.left(1, choice(
	    field('command', alias($.question_mark_identifier, $.cmd_identifier)),
	    seq(
		field('command', alias($._help_command, $.cmd_identifier)),
		field('args', optional($.args)),
	    ),
	)),
	arged_command: $ => choice(
	    $._simple_arged_command,
	    $._math_arged_command,
	    $._pointer_arged_command,
	    $._macro_arged_command,
	    $._system_command,
	    $._interpret_command,
	    $._env_command,
	    $._interpreter_command,
	),

	_simple_arged_command: $ => prec.left(1, seq(
	    field('command', $.cmd_identifier),
	    field('args', optional($.args)),
	)),
	_math_arged_command: $ => prec.left(1, seq(
	    field('command', alias($.question_mark_identifier, $.cmd_identifier)),
	    field('args', $.args),
	)),
	_pointer_arged_command: $ => prec.left(1, seq(
	    field('command', alias($.pointer_identifier, $.cmd_identifier)),
	    field('args', alias($.eq_sep_args, $.args)),
	)),
	_macro_arged_command: $ => prec.left(1, seq(
	    field('command', alias($.macro_identifier, $.cmd_identifier)),
	    field('args', seq(
		optional($.macro_content),
		optional(seq(
		    ')',
		    optional(
			seq(
			    '(',
			    optional($.macro_call_content),
			    ')',
			)
		    ),
		)),
	    )),
	)),
	_system_command: $ => prec.left(1, seq(
	    field('command', $.system_identifier),
	    optional(field('args', alias($.args, $.system_args))),
	)),
	_interpret_command: $ => prec.left(1, choice(
	    seq(
		field('command', alias('.', $.cmd_identifier)),
		field('args', $._simple_command),
	    ),
	    seq(
		field('command', alias($._interpret_identifier, $.cmd_identifier)),
		field('args', optional($.args)),
	    ),
	    seq(
		field('command', alias('.!', $.cmd_identifier)),
		field('args', $.interpret_arg),
	    ),
	    seq(
		field('command', alias('.(', $.cmd_identifier)),
		field('args', $.macro_content),
		')',
	    ),
	    seq(
		field('command', alias($._interpret_search_identifier, $.cmd_identifier)),
		field('args', $.args),
	    ),
	    prec.right(1, seq(
		field('args', $._simple_command),
		field('command', '|.'),
	    )),
	)),
	_interpret_search_identifier: $ => seq('./'),
	_env_command: $ => prec.left(seq(
	    field('command', alias($._env_command_identifier, $.cmd_identifier)),
	    field('args', optional(alias($.eq_sep_args, $.args))),
	)),
	_env_command_identifier: $ => choice('%', 'env'),
	last_command: $ => seq(
	    field('command', alias($.last_command_identifier, $.cmd_identifier)),
	),

	last_command_identifier: $ => choice('.', '...'),
	_interpret_identifier: $ => prec(1, choice(
	    /\.[\.:\-*]+[ ]*/,
	    /\.[ ]+/,
	)),
	interpret_arg: $ => $._any_command,
	system_identifier: $ => /![\*!-=]*/,
	question_mark_identifier: $ => '?',

	repeat_command: $ => prec.right(1, seq(
	    field('arg', $.repeat_number),
	    field('command', $._simple_command),
	)),

	pointer_identifier: $ => '*',
	eq_sep_args: $ => seq(
	    alias($.eq_sep_key, $.args),
	    optional(seq(
		alias('=', $.arg_identifier),
		alias($.eq_sep_val, $.args)
	    )),
	),
	macro_identifier: $ => /\([-\*]?/,
	macro_call_content: $ => /[^\r\n()]*/,

	redirect_command: $ => prec.right(2, seq(
	    field('command', $._simple_command),
	    field('redirect_operator', $._redirect_operator),
	    field('arg', $.arg),
	)),
	_redirect_operator: $ => choice(
	    $.fdn_redirect_operator,
	    $.fdn_append_operator,
	    $.html_redirect_operator,
	    $.html_append_operator,
	),
	fdn_redirect_operator: $ => seq(optional($.file_descriptor), '>'),
	fdn_append_operator: $ => seq(optional($.file_descriptor), '>>'),
	html_redirect_operator: $ => 'H>',
	html_append_operator: $ => 'H>>',

	arg: $ => choice(
	    $.arg_identifier,
	    $.double_quoted_arg,
	    $.single_quoted_arg,
	    $.cmd_substitution_arg,
	),
	args: $ => prec.left(repeat1($.arg)),
	// TODO: this should accept a quoted_arg and a cmd_substitution_arg as well
	tmp_eval_arg: $ => /[^\r\n#@|>,; ]+/,

	_eq_sep_key_single: $ => choice(
	    alias ($._eq_sep_key_identifier, $.arg_identifier),
	    $.double_quoted_arg,
	    $.single_quoted_arg,
	    $.cmd_substitution_arg,
	),
	eq_sep_key: $ => prec.left(seq(
	    alias($._eq_sep_key_single, $.arg),
	    repeat(seq(
		$._eq_sep_concat,
		alias($._eq_sep_key_single, $.arg),
	    )),
	)),
	_eq_sep_key_identifier: $ => token(repeat1(
	    choice(
		repeat1(noneOf(...SPECIAL_CHARACTERS_EQUAL)),
		/\$[^({]/,
		/\${[^\r\n $}]+}/,
		escape(...SPECIAL_CHARACTERS_EQUAL),
	    )
	)),
	eq_sep_val: $ => prec.left(seq(
	    $.arg,
	    repeat(seq(
		$._eq_sep_concat,
		$.arg,
	    )),
	)),
	macro_content: $ => /[^\r\n)]+/,
	_any_command: $ => /[^\r\n;~|]+/,

	arg_identifier: $ => token(repeat1(
	    choice(
		repeat1(noneOf(...SPECIAL_CHARACTERS)),
		/\$[^({]/,
		/\${[^\r\n $}]+}/,
		escape(...SPECIAL_CHARACTERS),
	    )
	)),
	double_quoted_arg: $ => seq(
	    '"',
	    repeat(choice(
		/[^\\"\n$`]+/,
		/\$[^("]?/,
		/\\[\\"\n$`]?/,
		$.cmd_substitution_arg,
	    )),
	    '"',
	),
	single_quoted_arg: $ => seq(
	    '\'',
	    repeat(choice(
		/[^\\'\n]+/,
		/\\[\\'\n]?/,
	    )),
	    '\'',
	),
	cmd_substitution_arg: $ => choice(
	    seq('$(', $._commands_singleline, ')'),
	    prec(1, seq('`', $._commands_singleline, '`')),
	),


	_comment: $ => token(choice(
	    '#',
	    /#[^\r\n]*/,
	    seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
	)),

	cmd_delimiter: $ => choice(
	    '\n',
	    '\r',
	    $.cmd_delimiter_singleline,
	),
	cmd_delimiter_singleline: $ => choice(';'),
    }
});

function noneOf(...characters) {
    const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
    return new RegExp('[^' + negatedString + ']')
}

function escape(...characters) {
    const s = characters.map(c => c == '\\' ? '\\\\' : c).join('')
    return new RegExp('\\\\[' + s + ']')
}
