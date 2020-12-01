#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_true = 1,
  anon_sym_TRUE = 2,
  anon_sym_false = 3,
  anon_sym_FALSE = 4,
  anon_sym_s = 5,
  anon_sym_u = 6,
  aux_sym_decimalsigned_token1 = 7,
  anon_sym_bits = 8,
  anon_sym_bit = 9,
  aux_sym_decimaldigit_token1 = 10,
  aux_sym_decimaldigit_token2 = 11,
  anon_sym_0b = 12,
  aux_sym_binary_token1 = 13,
  sym__binarydigit = 14,
  anon_sym_0x = 15,
  sym__hexdigit = 16,
  sym__whitespace = 17,
  sym_lineterminator = 18,
  aux_sym_lineterminatorsequence_token1 = 19,
  aux_sym_lineterminatorsequence_token2 = 20,
  anon_sym_SLASH_STAR = 21,
  aux_sym_multilinecomment_token1 = 22,
  anon_sym_STAR_SLASH = 23,
  anon_sym_SLASH_SLASH = 24,
  aux_sym_singlelinecomment_token1 = 25,
  sym_start = 26,
  sym_numericalconstant = 27,
  sym_boolean = 28,
  sym_decimalsigned = 29,
  sym_decimaldigit = 30,
  sym_binary = 31,
  sym_hexadecimal = 32,
  sym_lineterminatorsequence = 33,
  sym_comment = 34,
  sym_multilinecomment = 35,
  sym_singlelinecomment = 36,
  aux_sym_start_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_true] = "true",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_false] = "false",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_s] = "s",
  [anon_sym_u] = "u",
  [aux_sym_decimalsigned_token1] = "decimalsigned_token1",
  [anon_sym_bits] = "bits",
  [anon_sym_bit] = "bit",
  [aux_sym_decimaldigit_token1] = "decimaldigit_token1",
  [aux_sym_decimaldigit_token2] = "decimaldigit_token2",
  [anon_sym_0b] = "0b",
  [aux_sym_binary_token1] = "binary_token1",
  [sym__binarydigit] = "_binarydigit",
  [anon_sym_0x] = "0x",
  [sym__hexdigit] = "_hexdigit",
  [sym__whitespace] = "_whitespace",
  [sym_lineterminator] = "lineterminator",
  [aux_sym_lineterminatorsequence_token1] = "lineterminatorsequence_token1",
  [aux_sym_lineterminatorsequence_token2] = "lineterminatorsequence_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_multilinecomment_token1] = "multilinecomment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_singlelinecomment_token1] = "singlelinecomment_token1",
  [sym_start] = "start",
  [sym_numericalconstant] = "numericalconstant",
  [sym_boolean] = "boolean",
  [sym_decimalsigned] = "decimalsigned",
  [sym_decimaldigit] = "decimaldigit",
  [sym_binary] = "binary",
  [sym_hexadecimal] = "hexadecimal",
  [sym_lineterminatorsequence] = "lineterminatorsequence",
  [sym_comment] = "comment",
  [sym_multilinecomment] = "multilinecomment",
  [sym_singlelinecomment] = "singlelinecomment",
  [aux_sym_start_repeat1] = "start_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_u] = anon_sym_u,
  [aux_sym_decimalsigned_token1] = aux_sym_decimalsigned_token1,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_bit] = anon_sym_bit,
  [aux_sym_decimaldigit_token1] = aux_sym_decimaldigit_token1,
  [aux_sym_decimaldigit_token2] = aux_sym_decimaldigit_token2,
  [anon_sym_0b] = anon_sym_0b,
  [aux_sym_binary_token1] = aux_sym_binary_token1,
  [sym__binarydigit] = sym__binarydigit,
  [anon_sym_0x] = anon_sym_0x,
  [sym__hexdigit] = sym__hexdigit,
  [sym__whitespace] = sym__whitespace,
  [sym_lineterminator] = sym_lineterminator,
  [aux_sym_lineterminatorsequence_token1] = aux_sym_lineterminatorsequence_token1,
  [aux_sym_lineterminatorsequence_token2] = aux_sym_lineterminatorsequence_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_multilinecomment_token1] = aux_sym_multilinecomment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_singlelinecomment_token1] = aux_sym_singlelinecomment_token1,
  [sym_start] = sym_start,
  [sym_numericalconstant] = sym_numericalconstant,
  [sym_boolean] = sym_boolean,
  [sym_decimalsigned] = sym_decimalsigned,
  [sym_decimaldigit] = sym_decimaldigit,
  [sym_binary] = sym_binary,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_lineterminatorsequence] = sym_lineterminatorsequence,
  [sym_comment] = sym_comment,
  [sym_multilinecomment] = sym_multilinecomment,
  [sym_singlelinecomment] = sym_singlelinecomment,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimalsigned_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimaldigit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimaldigit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__binarydigit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [sym__hexdigit] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_lineterminator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lineterminatorsequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lineterminatorsequence_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multilinecomment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_singlelinecomment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_numericalconstant] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_decimalsigned] = {
    .visible = true,
    .named = true,
  },
  [sym_decimaldigit] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_lineterminatorsequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multilinecomment] = {
    .visible = true,
    .named = true,
  },
  [sym_singlelinecomment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_start_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '?') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(53);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == 'L') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == '?') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '"' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == 'F') ADVANCE(3);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_decimalsigned_token1);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(34);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_decimalsigned_token1);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_decimalsigned_token1);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(34);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_decimalsigned_token1);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_decimalsigned_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token1);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token1);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token2);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token2);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token2);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_decimaldigit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(47);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__binarydigit);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__hexdigit);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_multilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_singlelinecomment_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 22},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 58},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 19},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [aux_sym_decimalsigned_token1] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [aux_sym_decimaldigit_token1] = ACTIONS(1),
    [aux_sym_decimaldigit_token2] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [aux_sym_binary_token1] = ACTIONS(1),
    [sym__binarydigit] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_lineterminator] = ACTIONS(1),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(1),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(24),
    [sym_numericalconstant] = STATE(3),
    [sym_boolean] = STATE(11),
    [sym_decimalsigned] = STATE(11),
    [sym_decimaldigit] = STATE(4),
    [sym_binary] = STATE(11),
    [sym_hexadecimal] = STATE(11),
    [sym_lineterminatorsequence] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_multilinecomment] = STATE(12),
    [sym_singlelinecomment] = STATE(12),
    [aux_sym_start_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_FALSE] = ACTIONS(5),
    [aux_sym_decimaldigit_token1] = ACTIONS(7),
    [aux_sym_decimaldigit_token2] = ACTIONS(9),
    [anon_sym_0b] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(15),
    [sym_lineterminator] = ACTIONS(15),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(17),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
  },
  [2] = {
    [sym_numericalconstant] = STATE(2),
    [sym_boolean] = STATE(11),
    [sym_decimalsigned] = STATE(11),
    [sym_decimaldigit] = STATE(4),
    [sym_binary] = STATE(11),
    [sym_hexadecimal] = STATE(11),
    [sym_lineterminatorsequence] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_multilinecomment] = STATE(12),
    [sym_singlelinecomment] = STATE(12),
    [aux_sym_start_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_TRUE] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_FALSE] = ACTIONS(25),
    [aux_sym_decimaldigit_token1] = ACTIONS(28),
    [aux_sym_decimaldigit_token2] = ACTIONS(31),
    [anon_sym_0b] = ACTIONS(34),
    [anon_sym_0x] = ACTIONS(37),
    [sym__whitespace] = ACTIONS(40),
    [sym_lineterminator] = ACTIONS(40),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(43),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(43),
    [anon_sym_SLASH_STAR] = ACTIONS(46),
    [anon_sym_SLASH_SLASH] = ACTIONS(49),
  },
  [3] = {
    [sym_numericalconstant] = STATE(2),
    [sym_boolean] = STATE(11),
    [sym_decimalsigned] = STATE(11),
    [sym_decimaldigit] = STATE(4),
    [sym_binary] = STATE(11),
    [sym_hexadecimal] = STATE(11),
    [sym_lineterminatorsequence] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_multilinecomment] = STATE(12),
    [sym_singlelinecomment] = STATE(12),
    [aux_sym_start_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(5),
    [anon_sym_TRUE] = ACTIONS(5),
    [anon_sym_false] = ACTIONS(5),
    [anon_sym_FALSE] = ACTIONS(5),
    [aux_sym_decimaldigit_token1] = ACTIONS(7),
    [aux_sym_decimaldigit_token2] = ACTIONS(9),
    [anon_sym_0b] = ACTIONS(11),
    [anon_sym_0x] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(54),
    [sym_lineterminator] = ACTIONS(54),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(17),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [anon_sym_SLASH_SLASH] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(58), 2,
      anon_sym_s,
      anon_sym_u,
    ACTIONS(60), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(56), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [24] = 2,
    ACTIONS(64), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(62), 12,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      anon_sym_s,
      anon_sym_u,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [46] = 3,
    ACTIONS(68), 2,
      anon_sym_s,
      anon_sym_u,
    ACTIONS(70), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(66), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [70] = 3,
    ACTIONS(74), 2,
      anon_sym_s,
      anon_sym_u,
    ACTIONS(76), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(72), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [94] = 3,
    ACTIONS(82), 1,
      aux_sym_binary_token1,
    ACTIONS(80), 6,
      aux_sym_decimaldigit_token1,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [117] = 3,
    ACTIONS(86), 1,
      aux_sym_decimalsigned_token1,
    ACTIONS(88), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(84), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [140] = 3,
    ACTIONS(94), 1,
      aux_sym_binary_token1,
    ACTIONS(92), 6,
      aux_sym_decimaldigit_token1,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(90), 9,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [163] = 2,
    ACTIONS(60), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(56), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [183] = 2,
    ACTIONS(98), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(96), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [203] = 2,
    ACTIONS(102), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(100), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [223] = 2,
    ACTIONS(106), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [243] = 2,
    ACTIONS(110), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [263] = 2,
    ACTIONS(114), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(112), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [283] = 2,
    ACTIONS(118), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(116), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [303] = 2,
    ACTIONS(122), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(120), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [323] = 2,
    ACTIONS(126), 5,
      aux_sym_decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
    ACTIONS(124), 10,
      ts_builtin_sym_end,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym_decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
  [343] = 2,
    ACTIONS(128), 1,
      anon_sym_bits,
    ACTIONS(130), 1,
      anon_sym_bit,
  [350] = 2,
    ACTIONS(132), 1,
      anon_sym_bits,
    ACTIONS(134), 1,
      anon_sym_bit,
  [357] = 2,
    ACTIONS(136), 1,
      anon_sym_bits,
    ACTIONS(138), 1,
      anon_sym_bit,
  [364] = 1,
    ACTIONS(140), 1,
      aux_sym_singlelinecomment_token1,
  [368] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [372] = 1,
    ACTIONS(144), 1,
      aux_sym_multilinecomment_token1,
  [376] = 1,
    ACTIONS(146), 1,
      anon_sym_STAR_SLASH,
  [380] = 1,
    ACTIONS(148), 1,
      sym__hexdigit,
  [384] = 1,
    ACTIONS(150), 1,
      sym__binarydigit,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 70,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 140,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 303,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 343,
  [SMALL_STATE(21)] = 350,
  [SMALL_STATE(22)] = 357,
  [SMALL_STATE(23)] = 364,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 372,
  [SMALL_STATE(26)] = 376,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 384,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(13),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(5),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(28),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(27),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numericalconstant, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numericalconstant, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimaldigit, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimaldigit, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimalsigned, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimalsigned, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineterminatorsequence, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineterminatorsequence, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singlelinecomment, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singlelinecomment, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multilinecomment, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multilinecomment, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimalsigned, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimalsigned, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pyrope(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
