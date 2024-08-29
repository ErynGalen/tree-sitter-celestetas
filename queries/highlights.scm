(comment) @comment
(number) @number.float
(frame_count) @number

(action_input) @function.call
(directional_input) @function
(custom_input) @function.macro
(analog_input) @function.macro.call

(input_separator) @punctuation.special
(command_separator) @punctuation.delimiter

(command_part) @string
(command_word) @keyword.directive

(special_line) @character.special

(ERROR) @comment.error (#set! priority 105)
(ERROR (_) @comment.error (#set! priority 105))
