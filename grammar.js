/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const action_inputs = [
  'J', 'K', 'X', 'C', 'Z', 'V',
  'G', 'H', 'S', 'Q', 'O', 'N',
];

function directional_inputs() {
  const directions = [ 'R', 'L', 'U', 'D' ];
  const prefixes = [ '', 'A', 'M' ];

  return prefixes.flatMap(p => directions.map(d => p + d));
}

module.exports = grammar({
  name: 'celestetas',

  rules: {
    source_file: $ => repeat($._line),

    // Data types
    number: $ => choice(/\d+/, /\d*\.\d+/),
    frame_count: $ => /\d+/,

    action_input: $ => choice(...action_inputs),
    directional_input: $ => choice(...directional_inputs()),
    custom_input: $ => /P./,
    analog_input: $ => 'F',
    analog_argument: $ => $.number,

    // Lines
    _line: $ => seq(
      optional(
        choice(
          $.action_line,
          $.comment,
          $.command,
          $.special_line,
        )
      ),
      $._line_ending
    ),

    comment: $ => seq('#', $._comment_content),
    _comment_content: $ => prec(2, token.immediate(/.*/)),

    action_line: $ => seq(
      $.frame_count,
      optional(
        seq(
          $.input_separator,
          $._inputs_no_analog,
        )
      )
    ),

    _inputs_no_analog: $ => choice(
      seq($.action_input, optional(seq($.input_separator, $._inputs_no_analog))),
      seq($.directional_input, optional(seq($.input_separator, $._inputs_no_analog))),
      seq($.custom_input, optional(seq($.input_separator, $._inputs_no_analog))),
      seq($.analog_input, optional(seq($.input_separator, $._inputs_analog)))
    ),
    _inputs_analog: $ => choice(
      seq($.action_input, optional(seq($.input_separator, $._inputs_no_analog))),
      seq($.directional_input, optional(seq($.input_separator, $._inputs_no_analog))),
      seq($.custom_input, optional(seq($.input_separator, $._inputs_no_analog))),
      seq($.analog_argument, optional(seq($.input_separator, $._inputs_analog)))
    ),

    input_separator: $ => ',',

    command: $ => seq(
      $.command_word,
      choice(
        repeat(
          seq(
            $.command_separator,
            choice($.number, alias($._command_part_comma_sep, $.command_part))
          )
        ),
        repeat(
          choice($.number, alias($._command_part_space_sep, $.command_part)),
        )
      )
    ),

    command_word: $ => /[^\d#\s,][^\s,]*/,
    command_separator: $ => ',',
    _command_part_comma_sep: $ => prec(2, /[^\d,\r\n][^,\r\n]*/),
    _command_part_space_sep: $ => prec(2, /[^\d,\s][^\s]*/),

    special_line: $ => $.breakpoint,
    breakpoint: $ => choice(
      '***',
      '***s',
      '***S',
    ),

    _line_ending: $ => choice('\n', '\r\n'),
  },

  extras: $ => [
    ' ',
    '\t',
  ],
});
