module.exports = grammar({
    name: 'r2cmd',

    extras: $ => [
	$._comment,
	/[\t ]/,
    ],

    externals: $ => [
	$.cmd_identifier,
	$._help_command,
	$._question_mark_identifier,
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
	    $.out_redirect_command,
	    $.err_redirect_command,
	    $.html_redirect_command,
	    $.out_append_redirect_command,
	    $.err_append_redirect_command,
	    $.help_command,
	    $._simple_command,
	    $.interpreter_command,
	),

	_simple_command: $ => choice(
	    $.repeat_command,
	    $.arged_command,
	    $._tmp_command,
	    $._iter_command,
	    $._pipe_command,
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

	html_disable_command: $ => prec.right(1, seq($._simple_command, '|')),
	html_enable_command: $ => prec.right(1, seq($._simple_command, '|H')),
	scr_tts_command: $ => prec.right(1, seq($._simple_command, '|T')),
	pipe_command: $ => seq($._simple_command, '|', $.pipe_second_command),
	pipe_second_command: $ => $._any_command,

	iter_flags_command: $ => prec.right(1, seq($._simple_command, '@@', $.arg)),
	iter_dbta_command: $ => prec.right(1, seq($._simple_command, choice('@@dbt', '@@dbta'))),
	iter_dbtb_command: $ => prec.right(1, seq($._simple_command, '@@dbtb')),
	iter_dbts_command: $ => prec.right(1, seq($._simple_command, '@@dbts')),
	iter_file_lines_command: $ => prec.right(1, seq($._simple_command, '@@.', $.arg)),
	iter_offsets_command: $ => prec.right(1, seq($._simple_command, '@@=', repeat1($.arg))),
	iter_sdbquery_command: $ => prec.right(1, seq($._simple_command, '@@k', $.arg)),
	iter_threads_command: $ => prec.right(1, seq($._simple_command, '@@t')),
	iter_bbs_command: $ => prec.right(1, seq($._simple_command, '@@b')),
	iter_instrs_command: $ => prec.right(1, seq($._simple_command, '@@i')),
	iter_sections_command: $ => prec.right(1, seq($._simple_command, '@@iS')),
	iter_functions_command: $ => prec.right(1, seq($._simple_command, '@@f', optional(seq(':', $.arg)))),
	iter_step_command: $ => prec.right(1, seq($._simple_command, '@@s:', $.arg, $.arg, $.arg)),
	iter_interpret_command: $ => prec.right(1, seq($._simple_command, '@@c:', $._simple_command)),

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

	interpreter_command: $ => /#![A-Za-z0-9]*( [^\r\n;]*)?/,

	arged_command: $ => choice(
	    $._simple_arged_command,
	    $._math_arged_command,
	    $._pointer_arged_command,
	    $._macro_arged_command,
	    $._system_command,
	    $._interpret_command,
	    $._env_command,
	    $._last_command,
	),

	_simple_arged_command: $ => prec.left(1, seq(
	    field('command', $.cmd_identifier),
	    field('args', repeat($.arg)),
	)),
	_math_arged_command: $ => prec.left(1, seq(
	    field('command', $.question_mark_identifier),
	    field('args', repeat1($.arg)),
	)),
	_pointer_arged_command: $ => prec.left(1, seq(
	    field('command', $.pointer_identifier),
	    field('args', $._eq_sep_args),
	)),
	_macro_arged_command: $ => prec.left(1, seq(
	    field('command', $.macro_identifier),
	    field('args', $.macro_content),
	    ')',
	    optional(
		seq(
		    '(',
		    optional($.macro_call_content),
		    ')',
		)
	    ),
	)),
	_system_command: $ => prec.left(1, seq(
	    field('command', $.system_identifier),
	    optional(field('args', $.system_arg)),
	)),
	_interpret_command: $ => prec.left(1, choice(
	    seq(
		field('command', $.interpret_identifier),
		field('args', $._simple_command),
	    ),
	    seq(
		field('command', '.!'),
		field('args', $.interpret_arg),
	    ),
	    seq(
		field('command', '.('),
		field('args', $.macro_content),
		')',
	    ),
	    seq(
		field('command', seq('./', optional(repeat(' ')))),
		field('args', repeat1($.arg)),
	    ),
	    prec.right(1, seq(
		field('args', $._simple_command),
		field('command', '|.'),
	    )),
	)),
	_env_command: $ => seq(
	    field('command', '%'),
	    optional($._eq_sep_args),
	),
	_last_command: $ => choice(
	    $._point_interpret_identifier,
	    '...',
	),


	interpret_identifier: $ => choice(
	    $._point_interpret_identifier,
	    /\.[\.:\-*]*[ ]+/,
	),
	_point_interpret_identifier: $ => '.',
	interpret_arg: $ => $._any_command,
	system_identifier: $ => /![\*!-=]*/,
	system_arg: $ => $._any_command,
	question_mark_identifier: $ => $._question_mark_identifier,
	help_command: $ => prec(1, choice(
	    $._question_mark_identifier,
	    $._help_command,
	)),
	repeat_command: $ => seq($.number, $._simple_command),

	pointer_identifier: $ => '*',
	_eq_sep_args: $ => seq(
	    $.eq_sep_key,
	    optional(seq(
		'=',
		$.eq_sep_val,
	    )),
	),
	macro_identifier: $ => /\([-\*]?/,
	macro_call_content: $ => /[^\r\n()]*/,

	out_redirect_command: $ => prec.right(2, seq($._simple_command, choice('>', '1>'), $.arg)),
	err_redirect_command: $ => prec.right(2, seq($._simple_command, '2>', $.arg)),
	html_redirect_command: $ => prec.right(2, seq($._simple_command, 'H>', $.arg)),
	out_append_redirect_command: $ => prec.right(2, seq($._simple_command, choice('>>', '1>>'), $.arg)),
	err_append_redirect_command: $ => prec.right(2, seq($._simple_command, '2>>', $.arg)),

	arg: $ => choice(
	    $.arg_identifier,
	    $.quoted_arg,
	    $.cmd_substitution_arg,
	),
	tmp_eval_arg: $ => /[^\r\n#@|>,; ]+/,

	eq_sep_key: $ => /[^\r\n#@|>=; ]+/,
	// TODO: this should accept a quoted_arg and a cmd_substitution_arg as well
	eq_sep_val: $ => /[^\r\n#@|>; ]+/,
	macro_content: $ => /[^\r\n)]+/,
	_any_command: $ => /[^\r\n;]+/,

	arg_identifier: $ => choice(
	    /[^\r\n#@|"'>;$()` ]+/,
	    /\$[^\r\n#@|"'>;(` ]*/,
	),
	number: $ => /[1-9]+[0-9]*/,
	quoted_arg: $ => choice(
	    seq(
		'"',
		field('string', /[^\\"\n]+/),
		'"',
	    ),
	    seq(
		'\'',
		field('string', /[^\\'\n]+/),
		'\'',
	    ),
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
