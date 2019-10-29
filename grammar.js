module.exports = grammar({
    name: 'r2cmd',

    extras: $ => [
	$._comment,
	/\\?\s/,
    ],

    inline: $ => [
	$.delimiter,
	$._comment,
    ],

    externals: $ => [
	$.eof
    ],

    rules: {
	commands: $ => repeat(seq($._command, $.delimiter)),

	_command: $ => choice(
	    $.out_redirect_command,
	    $.err_redirect_command,
	    $.html_redirect_command,
	    $.out_append_redirect_command,
	    $.err_append_redirect_command,
	    $._simple_command,
	),

	_simple_command: $ => choice(
	    $.repeat_command,
	    $.cmd_identifier,
	    $.arged_command,
	    $._tmp_command,
	    $._iter_command,
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
	),

	iter_flags_command: $ => prec.right(1, seq($._simple_command, '@@', $.arg)),
	iter_dbta_command: $ => prec.right(1, seq($._simple_command, choice('@@dbt', '@@dbta'))),
	iter_dbtb_command: $ => prec.right(1, seq($._simple_command, '@@dbtb')),
	iter_dbts_command: $ => prec.right(1, seq($._simple_command, '@@dbts')),

	tmp_seek_command: $ => prec.right(1, seq($._simple_command, '@', $.arg)),
	tmp_blksz_command: $ => prec.right(1, seq($._simple_command, '@!', $.arg)),
	tmp_fromto_command: $ => prec.right(1, seq($._simple_command, '@(', $.arg, $.arg)),
	tmp_arch_command: $ => prec.right(1, seq($._simple_command, '@a:', $.arg)),
	tmp_bits_command: $ => prec.right(1, seq($._simple_command, '@b:', $.arg)),
	tmp_nthi_command: $ => prec.right(1, seq($._simple_command, '@B:', $.arg)),
	tmp_eval_command: $ => prec.right(1, seq($._simple_command, '@e:', $.arg, repeat(seq(',', $.arg)))),
	tmp_fs_command: $ => prec.right(1, seq($._simple_command, '@F:', $.arg)),
	tmp_reli_command: $ => prec.right(1, seq($._simple_command, '@i:', $.arg)),
	tmp_kuery_command: $ => prec.right(1, seq($._simple_command, '@k:', $.arg)),
	tmp_fd_command: $ => prec.right(1, seq($._simple_command, '@o:', $.arg)),
	tmp_reg_command: $ => prec.right(1, seq($._simple_command, '@r:', $.arg)),
	tmp_file_command: $ => prec.right(1, seq($._simple_command, '@f:', $.arg)),
	tmp_string_command: $ => prec.right(1, seq($._simple_command, '@s:', $.arg)),
	tmp_hex_command: $ => prec.right(1, seq($._simple_command, '@x:', $.arg)),

	arged_command: $ => seq($.cmd_identifier, repeat1($.arg)),
	repeat_command: $ => seq($.number, $._simple_command),

	out_redirect_command: $ => prec.right(2, seq($._simple_command, choice('>', '1>'), $.arg)),
	err_redirect_command: $ => prec.right(2, seq($._simple_command, '2>', $.arg)),
	html_redirect_command: $ => prec.right(2, seq($._simple_command, 'H>', $.arg)),
	out_append_redirect_command: $ => prec.right(2, seq($._simple_command, choice('>>', '1>>'), $.arg)),
	err_append_redirect_command: $ => prec.right(2, seq($._simple_command, '2>>', $.arg)),

	arg: $ => choice(
	    $.arg_identifier
	),

	cmd_identifier: $ => /[a-zA-Z?!:\.+*=\/][a-zA-Z0-9?!:\.+*=\/]*/,
	arg_identifier: $ => /[^\r\n#@|>; ]+/,
	number: $ => /[1-9]+[0-9]*/,

	_comment: $ => token(choice(
	    /#[^\r\n]*/,
	    seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
	)),

	delimiter: $ => choice(
	    '\n',
	    '\r',
	    ';',
	    $.eof
	)
    }
});
