#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_number_token1 = 1,
  aux_sym_number_token2 = 2,
  anon_sym_J = 3,
  anon_sym_K = 4,
  anon_sym_X = 5,
  anon_sym_C = 6,
  anon_sym_Z = 7,
  anon_sym_V = 8,
  anon_sym_G = 9,
  anon_sym_H = 10,
  anon_sym_S = 11,
  anon_sym_Q = 12,
  anon_sym_O = 13,
  anon_sym_N = 14,
  anon_sym_R = 15,
  anon_sym_L = 16,
  anon_sym_U = 17,
  anon_sym_D = 18,
  anon_sym_AR = 19,
  anon_sym_AL = 20,
  anon_sym_AU = 21,
  anon_sym_AD = 22,
  anon_sym_MR = 23,
  anon_sym_ML = 24,
  anon_sym_MU = 25,
  anon_sym_MD = 26,
  sym_custom_input = 27,
  sym_analog_input = 28,
  anon_sym_POUND = 29,
  aux_sym__comment_content_token1 = 30,
  anon_sym_COMMA = 31,
  sym_command_word = 32,
  aux_sym__command_part_comma_sep_token1 = 33,
  aux_sym__command_part_space_sep_token1 = 34,
  anon_sym_STAR_STAR_STAR = 35,
  anon_sym_STAR_STAR_STARs = 36,
  anon_sym_STAR_STAR_STARS = 37,
  anon_sym_LF = 38,
  anon_sym_CR_LF = 39,
  sym_source_file = 40,
  sym_number = 41,
  sym_frame_count = 42,
  sym_action_input = 43,
  sym_directional_input = 44,
  sym_analog_argument = 45,
  sym__line = 46,
  sym_comment = 47,
  sym__comment_content = 48,
  sym_action_line = 49,
  sym__inputs_no_analog = 50,
  sym__inputs_analog = 51,
  sym_input_separator = 52,
  sym_command = 53,
  sym_command_separator = 54,
  sym__command_part_comma_sep = 55,
  sym__command_part_space_sep = 56,
  sym_special_line = 57,
  sym_breakpoint = 58,
  sym__line_ending = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_command_repeat1 = 61,
  aux_sym_command_repeat2 = 62,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [anon_sym_J] = "J",
  [anon_sym_K] = "K",
  [anon_sym_X] = "X",
  [anon_sym_C] = "C",
  [anon_sym_Z] = "Z",
  [anon_sym_V] = "V",
  [anon_sym_G] = "G",
  [anon_sym_H] = "H",
  [anon_sym_S] = "S",
  [anon_sym_Q] = "Q",
  [anon_sym_O] = "O",
  [anon_sym_N] = "N",
  [anon_sym_R] = "R",
  [anon_sym_L] = "L",
  [anon_sym_U] = "U",
  [anon_sym_D] = "D",
  [anon_sym_AR] = "AR",
  [anon_sym_AL] = "AL",
  [anon_sym_AU] = "AU",
  [anon_sym_AD] = "AD",
  [anon_sym_MR] = "MR",
  [anon_sym_ML] = "ML",
  [anon_sym_MU] = "MU",
  [anon_sym_MD] = "MD",
  [sym_custom_input] = "custom_input",
  [sym_analog_input] = "analog_input",
  [anon_sym_POUND] = "#",
  [aux_sym__comment_content_token1] = "_comment_content_token1",
  [anon_sym_COMMA] = ",",
  [sym_command_word] = "command_word",
  [aux_sym__command_part_comma_sep_token1] = "_command_part_comma_sep_token1",
  [aux_sym__command_part_space_sep_token1] = "_command_part_space_sep_token1",
  [anon_sym_STAR_STAR_STAR] = "***",
  [anon_sym_STAR_STAR_STARs] = "***s",
  [anon_sym_STAR_STAR_STARS] = "***S",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_source_file] = "source_file",
  [sym_number] = "number",
  [sym_frame_count] = "frame_count",
  [sym_action_input] = "action_input",
  [sym_directional_input] = "directional_input",
  [sym_analog_argument] = "analog_argument",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym__comment_content] = "_comment_content",
  [sym_action_line] = "action_line",
  [sym__inputs_no_analog] = "_inputs_no_analog",
  [sym__inputs_analog] = "_inputs_analog",
  [sym_input_separator] = "input_separator",
  [sym_command] = "command",
  [sym_command_separator] = "command_separator",
  [sym__command_part_comma_sep] = "command_part",
  [sym__command_part_space_sep] = "command_part",
  [sym_special_line] = "special_line",
  [sym_breakpoint] = "breakpoint",
  [sym__line_ending] = "_line_ending",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_command_repeat2] = "command_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [anon_sym_J] = anon_sym_J,
  [anon_sym_K] = anon_sym_K,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_G] = anon_sym_G,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_Q] = anon_sym_Q,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_R] = anon_sym_R,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_U] = anon_sym_U,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_AR] = anon_sym_AR,
  [anon_sym_AL] = anon_sym_AL,
  [anon_sym_AU] = anon_sym_AU,
  [anon_sym_AD] = anon_sym_AD,
  [anon_sym_MR] = anon_sym_MR,
  [anon_sym_ML] = anon_sym_ML,
  [anon_sym_MU] = anon_sym_MU,
  [anon_sym_MD] = anon_sym_MD,
  [sym_custom_input] = sym_custom_input,
  [sym_analog_input] = sym_analog_input,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym__comment_content_token1] = aux_sym__comment_content_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_command_word] = sym_command_word,
  [aux_sym__command_part_comma_sep_token1] = aux_sym__command_part_comma_sep_token1,
  [aux_sym__command_part_space_sep_token1] = aux_sym__command_part_space_sep_token1,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [anon_sym_STAR_STAR_STARs] = anon_sym_STAR_STAR_STARs,
  [anon_sym_STAR_STAR_STARS] = anon_sym_STAR_STAR_STARS,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_source_file] = sym_source_file,
  [sym_number] = sym_number,
  [sym_frame_count] = sym_frame_count,
  [sym_action_input] = sym_action_input,
  [sym_directional_input] = sym_directional_input,
  [sym_analog_argument] = sym_analog_argument,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym__comment_content] = sym__comment_content,
  [sym_action_line] = sym_action_line,
  [sym__inputs_no_analog] = sym__inputs_no_analog,
  [sym__inputs_analog] = sym__inputs_analog,
  [sym_input_separator] = sym_input_separator,
  [sym_command] = sym_command,
  [sym_command_separator] = sym_command_separator,
  [sym__command_part_comma_sep] = sym__command_part_comma_sep,
  [sym__command_part_space_sep] = sym__command_part_comma_sep,
  [sym_special_line] = sym_special_line,
  [sym_breakpoint] = sym_breakpoint,
  [sym__line_ending] = sym__line_ending,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_command_repeat2] = aux_sym_command_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_J] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_G] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MD] = {
    .visible = true,
    .named = false,
  },
  [sym_custom_input] = {
    .visible = true,
    .named = true,
  },
  [sym_analog_input] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_command_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__command_part_comma_sep_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_part_space_sep_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_STARs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_STARS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_frame_count] = {
    .visible = true,
    .named = true,
  },
  [sym_action_input] = {
    .visible = true,
    .named = true,
  },
  [sym_directional_input] = {
    .visible = true,
    .named = true,
  },
  [sym_analog_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_content] = {
    .visible = false,
    .named = true,
  },
  [sym_action_line] = {
    .visible = true,
    .named = true,
  },
  [sym__inputs_no_analog] = {
    .visible = false,
    .named = true,
  },
  [sym__inputs_analog] = {
    .visible = false,
    .named = true,
  },
  [sym_input_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_separator] = {
    .visible = true,
    .named = true,
  },
  [sym__command_part_comma_sep] = {
    .visible = true,
    .named = true,
  },
  [sym__command_part_space_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_special_line] = {
    .visible = true,
    .named = true,
  },
  [sym_breakpoint] = {
    .visible = true,
    .named = true,
  },
  [sym__line_ending] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 61,
        '\r', 2,
        '#', 44,
        '*', 4,
        ',', 46,
        '.', 8,
        'A', 6,
        'C', 21,
        'D', 33,
        'F', 43,
        'G', 24,
        'H', 25,
        'J', 18,
        'K', 19,
        'L', 31,
        'M', 7,
        'N', 29,
        'O', 28,
        'P', 9,
        'Q', 27,
        'R', 30,
        'S', 26,
        'U', 32,
        'V', 23,
        'X', 20,
        'Z', 22,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(41);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_J);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_K);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_G);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Q);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_R);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_AR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_AL);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AU);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AD);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_MR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_ML);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_MU);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_MD);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_custom_input);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_analog_input);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__comment_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_command_word);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_command_word);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_command_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__command_part_comma_sep_token1);
      if (lookahead == '.') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__command_part_comma_sep_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__command_part_comma_sep_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__command_part_space_sep_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__command_part_space_sep_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STARs);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STARs);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STARS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STARS);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',') ADVANCE(49);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [anon_sym_J] = ACTIONS(1),
    [anon_sym_K] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_G] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_Q] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_AR] = ACTIONS(1),
    [anon_sym_AL] = ACTIONS(1),
    [anon_sym_AU] = ACTIONS(1),
    [anon_sym_AD] = ACTIONS(1),
    [anon_sym_MR] = ACTIONS(1),
    [anon_sym_ML] = ACTIONS(1),
    [anon_sym_MU] = ACTIONS(1),
    [anon_sym_MD] = ACTIONS(1),
    [sym_custom_input] = ACTIONS(1),
    [sym_analog_input] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR_STARs] = ACTIONS(1),
    [anon_sym_STAR_STAR_STARS] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(39),
    [sym_frame_count] = STATE(21),
    [sym__line] = STATE(9),
    [sym_comment] = STATE(28),
    [sym_action_line] = STATE(28),
    [sym_command] = STATE(28),
    [sym_special_line] = STATE(28),
    [sym_breakpoint] = STATE(33),
    [sym__line_ending] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_number_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [sym_command_word] = ACTIONS(9),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(11),
    [anon_sym_STAR_STAR_STARs] = ACTIONS(11),
    [anon_sym_STAR_STAR_STARS] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_CR_LF] = ACTIONS(13),
  },
  [2] = {
    [sym_number] = STATE(30),
    [sym_action_input] = STATE(20),
    [sym_directional_input] = STATE(20),
    [sym_analog_argument] = STATE(19),
    [sym__inputs_analog] = STATE(38),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(17),
    [anon_sym_J] = ACTIONS(19),
    [anon_sym_K] = ACTIONS(19),
    [anon_sym_X] = ACTIONS(19),
    [anon_sym_C] = ACTIONS(19),
    [anon_sym_Z] = ACTIONS(19),
    [anon_sym_V] = ACTIONS(19),
    [anon_sym_G] = ACTIONS(19),
    [anon_sym_H] = ACTIONS(19),
    [anon_sym_S] = ACTIONS(19),
    [anon_sym_Q] = ACTIONS(19),
    [anon_sym_O] = ACTIONS(19),
    [anon_sym_N] = ACTIONS(19),
    [anon_sym_R] = ACTIONS(21),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_U] = ACTIONS(21),
    [anon_sym_D] = ACTIONS(21),
    [anon_sym_AR] = ACTIONS(21),
    [anon_sym_AL] = ACTIONS(21),
    [anon_sym_AU] = ACTIONS(21),
    [anon_sym_AD] = ACTIONS(21),
    [anon_sym_MR] = ACTIONS(21),
    [anon_sym_ML] = ACTIONS(21),
    [anon_sym_MU] = ACTIONS(21),
    [anon_sym_MD] = ACTIONS(21),
    [sym_custom_input] = ACTIONS(23),
  },
  [3] = {
    [sym_number] = STATE(30),
    [sym_action_input] = STATE(20),
    [sym_directional_input] = STATE(20),
    [sym_analog_argument] = STATE(19),
    [sym__inputs_analog] = STATE(35),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(17),
    [anon_sym_J] = ACTIONS(19),
    [anon_sym_K] = ACTIONS(19),
    [anon_sym_X] = ACTIONS(19),
    [anon_sym_C] = ACTIONS(19),
    [anon_sym_Z] = ACTIONS(19),
    [anon_sym_V] = ACTIONS(19),
    [anon_sym_G] = ACTIONS(19),
    [anon_sym_H] = ACTIONS(19),
    [anon_sym_S] = ACTIONS(19),
    [anon_sym_Q] = ACTIONS(19),
    [anon_sym_O] = ACTIONS(19),
    [anon_sym_N] = ACTIONS(19),
    [anon_sym_R] = ACTIONS(21),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_U] = ACTIONS(21),
    [anon_sym_D] = ACTIONS(21),
    [anon_sym_AR] = ACTIONS(21),
    [anon_sym_AL] = ACTIONS(21),
    [anon_sym_AU] = ACTIONS(21),
    [anon_sym_AD] = ACTIONS(21),
    [anon_sym_MR] = ACTIONS(21),
    [anon_sym_ML] = ACTIONS(21),
    [anon_sym_MU] = ACTIONS(21),
    [anon_sym_MD] = ACTIONS(21),
    [sym_custom_input] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(25), 1,
      sym_custom_input,
    ACTIONS(27), 1,
      sym_analog_input,
    STATE(34), 1,
      sym__inputs_no_analog,
    STATE(23), 2,
      sym_action_input,
      sym_directional_input,
    ACTIONS(19), 12,
      anon_sym_J,
      anon_sym_K,
      anon_sym_X,
      anon_sym_C,
      anon_sym_Z,
      anon_sym_V,
      anon_sym_G,
      anon_sym_H,
      anon_sym_S,
      anon_sym_Q,
      anon_sym_O,
      anon_sym_N,
    ACTIONS(21), 12,
      anon_sym_R,
      anon_sym_L,
      anon_sym_U,
      anon_sym_D,
      anon_sym_AR,
      anon_sym_AL,
      anon_sym_AU,
      anon_sym_AD,
      anon_sym_MR,
      anon_sym_ML,
      anon_sym_MU,
      anon_sym_MD,
  [42] = 6,
    ACTIONS(25), 1,
      sym_custom_input,
    ACTIONS(27), 1,
      sym_analog_input,
    STATE(38), 1,
      sym__inputs_no_analog,
    STATE(23), 2,
      sym_action_input,
      sym_directional_input,
    ACTIONS(19), 12,
      anon_sym_J,
      anon_sym_K,
      anon_sym_X,
      anon_sym_C,
      anon_sym_Z,
      anon_sym_V,
      anon_sym_G,
      anon_sym_H,
      anon_sym_S,
      anon_sym_Q,
      anon_sym_O,
      anon_sym_N,
    ACTIONS(21), 12,
      anon_sym_R,
      anon_sym_L,
      anon_sym_U,
      anon_sym_D,
      anon_sym_AR,
      anon_sym_AL,
      anon_sym_AU,
      anon_sym_AD,
      anon_sym_MR,
      anon_sym_ML,
      anon_sym_MU,
      anon_sym_MD,
  [84] = 6,
    ACTIONS(25), 1,
      sym_custom_input,
    ACTIONS(27), 1,
      sym_analog_input,
    STATE(35), 1,
      sym__inputs_no_analog,
    STATE(23), 2,
      sym_action_input,
      sym_directional_input,
    ACTIONS(19), 12,
      anon_sym_J,
      anon_sym_K,
      anon_sym_X,
      anon_sym_C,
      anon_sym_Z,
      anon_sym_V,
      anon_sym_G,
      anon_sym_H,
      anon_sym_S,
      anon_sym_Q,
      anon_sym_O,
      anon_sym_N,
    ACTIONS(21), 12,
      anon_sym_R,
      anon_sym_L,
      anon_sym_U,
      anon_sym_D,
      anon_sym_AR,
      anon_sym_AL,
      anon_sym_AU,
      anon_sym_AD,
      anon_sym_MR,
      anon_sym_ML,
      anon_sym_MU,
      anon_sym_MD,
  [126] = 2,
    ACTIONS(29), 1,
      aux_sym_number_token1,
    ACTIONS(31), 27,
      aux_sym_number_token2,
      anon_sym_J,
      anon_sym_K,
      anon_sym_X,
      anon_sym_C,
      anon_sym_Z,
      anon_sym_V,
      anon_sym_G,
      anon_sym_H,
      anon_sym_S,
      anon_sym_Q,
      anon_sym_O,
      anon_sym_N,
      anon_sym_R,
      anon_sym_L,
      anon_sym_U,
      anon_sym_D,
      anon_sym_AR,
      anon_sym_AL,
      anon_sym_AU,
      anon_sym_AD,
      anon_sym_MR,
      anon_sym_ML,
      anon_sym_MU,
      anon_sym_MD,
      sym_custom_input,
      sym_analog_input,
  [159] = 10,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(38), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      sym_command_word,
    STATE(21), 1,
      sym_frame_count,
    STATE(33), 1,
      sym_breakpoint,
    ACTIONS(47), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(44), 3,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR_STARs,
      anon_sym_STAR_STAR_STARS,
    STATE(8), 3,
      sym__line,
      sym__line_ending,
      aux_sym_source_file_repeat1,
    STATE(28), 4,
      sym_comment,
      sym_action_line,
      sym_command,
      sym_special_line,
  [198] = 10,
    ACTIONS(5), 1,
      aux_sym_number_token1,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_command_word,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_frame_count,
    STATE(33), 1,
      sym_breakpoint,
    ACTIONS(52), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(11), 3,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR_STARs,
      anon_sym_STAR_STAR_STARS,
    STATE(8), 3,
      sym__line,
      sym__line_ending,
      aux_sym_source_file_repeat1,
    STATE(28), 4,
      sym_comment,
      sym_action_line,
      sym_command,
      sym_special_line,
  [237] = 7,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      aux_sym__command_part_space_sep_token1,
    STATE(17), 1,
      sym_command_separator,
    STATE(18), 1,
      aux_sym_command_repeat1,
    ACTIONS(15), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    ACTIONS(58), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(12), 3,
      sym_number,
      sym__command_part_space_sep,
      aux_sym_command_repeat2,
  [263] = 2,
    ACTIONS(62), 4,
      sym_command_word,
      anon_sym_STAR_STAR_STAR,
      anon_sym_STAR_STAR_STARs,
      anon_sym_STAR_STAR_STARS,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      aux_sym_number_token1,
      anon_sym_POUND,
      anon_sym_LF,
      anon_sym_CR_LF,
  [277] = 4,
    ACTIONS(56), 1,
      aux_sym__command_part_space_sep_token1,
    ACTIONS(15), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    ACTIONS(64), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(13), 3,
      sym_number,
      sym__command_part_space_sep,
      aux_sym_command_repeat2,
  [294] = 4,
    ACTIONS(69), 1,
      aux_sym__command_part_space_sep_token1,
    ACTIONS(66), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    ACTIONS(72), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(13), 3,
      sym_number,
      sym__command_part_space_sep,
      aux_sym_command_repeat2,
  [311] = 2,
    ACTIONS(74), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym__command_part_space_sep_token1,
    ACTIONS(76), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [322] = 4,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_command_repeat1,
    STATE(17), 1,
      sym_command_separator,
    ACTIONS(81), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [336] = 2,
    ACTIONS(85), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(83), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym__command_part_space_sep_token1,
  [346] = 3,
    ACTIONS(87), 1,
      aux_sym__command_part_comma_sep_token1,
    ACTIONS(15), 2,
      aux_sym_number_token1,
      aux_sym_number_token2,
    STATE(26), 2,
      sym_number,
      sym__command_part_comma_sep,
  [358] = 4,
    ACTIONS(54), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_command_repeat1,
    STATE(17), 1,
      sym_command_separator,
    ACTIONS(64), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [372] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(2), 1,
      sym_input_separator,
    ACTIONS(91), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [383] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      sym_input_separator,
    ACTIONS(91), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [394] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      sym_input_separator,
    ACTIONS(93), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [405] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      sym_input_separator,
    ACTIONS(95), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [416] = 3,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      sym_input_separator,
    ACTIONS(95), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [427] = 1,
    ACTIONS(97), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [433] = 1,
    ACTIONS(99), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [439] = 1,
    ACTIONS(81), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [445] = 1,
    ACTIONS(101), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [451] = 2,
    STATE(11), 1,
      sym__line_ending,
    ACTIONS(103), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [459] = 1,
    ACTIONS(105), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [465] = 1,
    ACTIONS(107), 3,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [471] = 1,
    ACTIONS(109), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym__command_part_comma_sep_token1,
  [477] = 1,
    ACTIONS(111), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [482] = 1,
    ACTIONS(113), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [487] = 1,
    ACTIONS(115), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [492] = 1,
    ACTIONS(117), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [497] = 1,
    ACTIONS(119), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [502] = 2,
    ACTIONS(121), 1,
      aux_sym__comment_content_token1,
    STATE(32), 1,
      sym__comment_content,
  [509] = 1,
    ACTIONS(123), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [514] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 277,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 322,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 346,
  [SMALL_STATE(18)] = 358,
  [SMALL_STATE(19)] = 372,
  [SMALL_STATE(20)] = 383,
  [SMALL_STATE(21)] = 394,
  [SMALL_STATE(22)] = 405,
  [SMALL_STATE(23)] = 416,
  [SMALL_STATE(24)] = 427,
  [SMALL_STATE(25)] = 433,
  [SMALL_STATE(26)] = 439,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 451,
  [SMALL_STATE(29)] = 459,
  [SMALL_STATE(30)] = 465,
  [SMALL_STATE(31)] = 471,
  [SMALL_STATE(32)] = 477,
  [SMALL_STATE(33)] = 482,
  [SMALL_STATE(34)] = 487,
  [SMALL_STATE(35)] = 492,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 502,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 514,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_separator, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_separator, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(14),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0), SHIFT_REPEAT(16),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat2, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__command_part_space_sep, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_part_space_sep, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inputs_analog, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_line, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inputs_no_analog, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_input, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directional_input, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_part_comma_sep, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frame_count, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_analog_argument, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_separator, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_line, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_line, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inputs_no_analog, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_breakpoint, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inputs_analog, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_celestetas(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
