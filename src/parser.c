#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  aux_sym__stringconstant_token1 = 2,
  aux_sym__stringconstant_token2 = 3,
  anon_sym_true = 4,
  anon_sym_TRUE = 5,
  anon_sym_false = 6,
  anon_sym_FALSE = 7,
  anon_sym_s = 8,
  anon_sym_u = 9,
  aux_sym__decimalsigned_token1 = 10,
  anon_sym_bits = 11,
  anon_sym_bit = 12,
  aux_sym__decimaldigit_token1 = 13,
  aux_sym__decimaldigit_token2 = 14,
  anon_sym_0b = 15,
  aux_sym__binary_token1 = 16,
  sym__binarydigit = 17,
  anon_sym_0x = 18,
  sym__hexdigit = 19,
  sym__whitespace = 20,
  sym_lineterminator = 21,
  aux_sym_lineterminatorsequence_token1 = 22,
  aux_sym_lineterminatorsequence_token2 = 23,
  anon_sym_SLASH_STAR = 24,
  aux_sym__multilinecomment_token1 = 25,
  anon_sym_STAR_SLASH = 26,
  anon_sym_SLASH_SLASH = 27,
  aux_sym__singlelinecomment_token1 = 28,
  sym_start = 29,
  sym_lhsvarname = 30,
  sym_constant = 31,
  sym__stringconstant = 32,
  sym__numericalconstant = 33,
  sym__boolean = 34,
  sym__decimalsigned = 35,
  sym__decimaldigit = 36,
  sym__binary = 37,
  sym__hexadecimal = 38,
  sym_lineterminatorsequence = 39,
  sym_comment = 40,
  sym__multilinecomment = 41,
  sym__singlelinecomment = 42,
  aux_sym_start_repeat1 = 43,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym__stringconstant_token1] = "_stringconstant_token1",
  [aux_sym__stringconstant_token2] = "_stringconstant_token2",
  [anon_sym_true] = "true",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_false] = "false",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_s] = "s",
  [anon_sym_u] = "u",
  [aux_sym__decimalsigned_token1] = "_decimalsigned_token1",
  [anon_sym_bits] = "bits",
  [anon_sym_bit] = "bit",
  [aux_sym__decimaldigit_token1] = "_decimaldigit_token1",
  [aux_sym__decimaldigit_token2] = "_decimaldigit_token2",
  [anon_sym_0b] = "0b",
  [aux_sym__binary_token1] = "_binary_token1",
  [sym__binarydigit] = "_binarydigit",
  [anon_sym_0x] = "0x",
  [sym__hexdigit] = "_hexdigit",
  [sym__whitespace] = "_whitespace",
  [sym_lineterminator] = "lineterminator",
  [aux_sym_lineterminatorsequence_token1] = "lineterminatorsequence_token1",
  [aux_sym_lineterminatorsequence_token2] = "lineterminatorsequence_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__multilinecomment_token1] = "_multilinecomment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__singlelinecomment_token1] = "_singlelinecomment_token1",
  [sym_start] = "start",
  [sym_lhsvarname] = "lhsvarname",
  [sym_constant] = "constant",
  [sym__stringconstant] = "_stringconstant",
  [sym__numericalconstant] = "_numericalconstant",
  [sym__boolean] = "_boolean",
  [sym__decimalsigned] = "_decimalsigned",
  [sym__decimaldigit] = "_decimaldigit",
  [sym__binary] = "_binary",
  [sym__hexadecimal] = "_hexadecimal",
  [sym_lineterminatorsequence] = "lineterminatorsequence",
  [sym_comment] = "comment",
  [sym__multilinecomment] = "_multilinecomment",
  [sym__singlelinecomment] = "_singlelinecomment",
  [aux_sym_start_repeat1] = "start_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym__stringconstant_token1] = aux_sym__stringconstant_token1,
  [aux_sym__stringconstant_token2] = aux_sym__stringconstant_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_u] = anon_sym_u,
  [aux_sym__decimalsigned_token1] = aux_sym__decimalsigned_token1,
  [anon_sym_bits] = anon_sym_bits,
  [anon_sym_bit] = anon_sym_bit,
  [aux_sym__decimaldigit_token1] = aux_sym__decimaldigit_token1,
  [aux_sym__decimaldigit_token2] = aux_sym__decimaldigit_token2,
  [anon_sym_0b] = anon_sym_0b,
  [aux_sym__binary_token1] = aux_sym__binary_token1,
  [sym__binarydigit] = sym__binarydigit,
  [anon_sym_0x] = anon_sym_0x,
  [sym__hexdigit] = sym__hexdigit,
  [sym__whitespace] = sym__whitespace,
  [sym_lineterminator] = sym_lineterminator,
  [aux_sym_lineterminatorsequence_token1] = aux_sym_lineterminatorsequence_token1,
  [aux_sym_lineterminatorsequence_token2] = aux_sym_lineterminatorsequence_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__multilinecomment_token1] = aux_sym__multilinecomment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__singlelinecomment_token1] = aux_sym__singlelinecomment_token1,
  [sym_start] = sym_start,
  [sym_lhsvarname] = sym_lhsvarname,
  [sym_constant] = sym_constant,
  [sym__stringconstant] = sym__stringconstant,
  [sym__numericalconstant] = sym__numericalconstant,
  [sym__boolean] = sym__boolean,
  [sym__decimalsigned] = sym__decimalsigned,
  [sym__decimaldigit] = sym__decimaldigit,
  [sym__binary] = sym__binary,
  [sym__hexadecimal] = sym__hexadecimal,
  [sym_lineterminatorsequence] = sym_lineterminatorsequence,
  [sym_comment] = sym_comment,
  [sym__multilinecomment] = sym__multilinecomment,
  [sym__singlelinecomment] = sym__singlelinecomment,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stringconstant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stringconstant_token2] = {
    .visible = false,
    .named = false,
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
  [aux_sym__decimalsigned_token1] = {
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
  [aux_sym__decimaldigit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimaldigit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__binary_token1] = {
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
  [aux_sym__multilinecomment_token1] = {
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
  [aux_sym__singlelinecomment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_lhsvarname] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__stringconstant] = {
    .visible = false,
    .named = true,
  },
  [sym__numericalconstant] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__decimalsigned] = {
    .visible = false,
    .named = true,
  },
  [sym__decimaldigit] = {
    .visible = false,
    .named = true,
  },
  [sym__binary] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal] = {
    .visible = false,
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
  [sym__multilinecomment] = {
    .visible = false,
    .named = true,
  },
  [sym__singlelinecomment] = {
    .visible = false,
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
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '1') ADVANCE(48);
      if (lookahead == '?') ADVANCE(56);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 12:
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '?') ADVANCE(57);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(74);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == '?') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(23);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'A') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'E') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'L') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'R') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'S') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'U') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__stringconstant_token1);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__stringconstant_token2);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(63);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__stringconstant_token2);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__stringconstant_token2);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_u);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__decimalsigned_token1);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(48);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__decimalsigned_token1);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__decimalsigned_token1);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(48);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__decimalsigned_token1);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__decimalsigned_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_bits);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_bits);
      if (lookahead == '?') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == '?') ADVANCE(18);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_bit);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token1);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(67);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token1);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token2);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token2);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token2);
      if (lookahead == '"' ||
          lookahead == '?') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__decimaldigit_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__binary_token1);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(63);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__binary_token1);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__binary_token1);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(63);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__binary_token1);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(9);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__binary_token1);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(67);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__binary_token1);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__binarydigit);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__hexdigit);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__multilinecomment_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__singlelinecomment_token1);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 15},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 78},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 5},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__stringconstant_token1] = ACTIONS(1),
    [aux_sym__stringconstant_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [aux_sym__decimalsigned_token1] = ACTIONS(1),
    [anon_sym_bits] = ACTIONS(1),
    [anon_sym_bit] = ACTIONS(1),
    [aux_sym__decimaldigit_token1] = ACTIONS(1),
    [aux_sym__decimaldigit_token2] = ACTIONS(1),
    [anon_sym_0b] = ACTIONS(1),
    [aux_sym__binary_token1] = ACTIONS(1),
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
    [sym_start] = STATE(22),
    [sym_lhsvarname] = STATE(3),
    [sym_constant] = STATE(12),
    [sym__stringconstant] = STATE(13),
    [sym__numericalconstant] = STATE(13),
    [sym__boolean] = STATE(13),
    [sym__decimalsigned] = STATE(13),
    [sym__decimaldigit] = STATE(4),
    [sym__binary] = STATE(13),
    [sym__hexadecimal] = STATE(13),
    [sym_lineterminatorsequence] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multilinecomment] = STATE(11),
    [sym__singlelinecomment] = STATE(11),
    [aux_sym_start_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [aux_sym__stringconstant_token1] = ACTIONS(7),
    [aux_sym__stringconstant_token2] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_TRUE] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_FALSE] = ACTIONS(9),
    [aux_sym__decimaldigit_token1] = ACTIONS(11),
    [aux_sym__decimaldigit_token2] = ACTIONS(13),
    [anon_sym_0b] = ACTIONS(15),
    [anon_sym_0x] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(19),
    [sym_lineterminator] = ACTIONS(19),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(21),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
  },
  [2] = {
    [sym_lhsvarname] = STATE(2),
    [sym_constant] = STATE(12),
    [sym__stringconstant] = STATE(13),
    [sym__numericalconstant] = STATE(13),
    [sym__boolean] = STATE(13),
    [sym__decimalsigned] = STATE(13),
    [sym__decimaldigit] = STATE(4),
    [sym__binary] = STATE(13),
    [sym__hexadecimal] = STATE(13),
    [sym_lineterminatorsequence] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multilinecomment] = STATE(11),
    [sym__singlelinecomment] = STATE(11),
    [aux_sym_start_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
    [aux_sym__stringconstant_token1] = ACTIONS(32),
    [aux_sym__stringconstant_token2] = ACTIONS(32),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_TRUE] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_FALSE] = ACTIONS(35),
    [aux_sym__decimaldigit_token1] = ACTIONS(38),
    [aux_sym__decimaldigit_token2] = ACTIONS(41),
    [anon_sym_0b] = ACTIONS(44),
    [anon_sym_0x] = ACTIONS(47),
    [sym__whitespace] = ACTIONS(50),
    [sym_lineterminator] = ACTIONS(50),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(53),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(53),
    [anon_sym_SLASH_STAR] = ACTIONS(56),
    [anon_sym_SLASH_SLASH] = ACTIONS(59),
  },
  [3] = {
    [sym_lhsvarname] = STATE(2),
    [sym_constant] = STATE(12),
    [sym__stringconstant] = STATE(13),
    [sym__numericalconstant] = STATE(13),
    [sym__boolean] = STATE(13),
    [sym__decimalsigned] = STATE(13),
    [sym__decimaldigit] = STATE(4),
    [sym__binary] = STATE(13),
    [sym__hexadecimal] = STATE(13),
    [sym_lineterminatorsequence] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multilinecomment] = STATE(11),
    [sym__singlelinecomment] = STATE(11),
    [aux_sym_start_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_identifier] = ACTIONS(5),
    [aux_sym__stringconstant_token1] = ACTIONS(7),
    [aux_sym__stringconstant_token2] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_TRUE] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_FALSE] = ACTIONS(9),
    [aux_sym__decimaldigit_token1] = ACTIONS(11),
    [aux_sym__decimaldigit_token2] = ACTIONS(13),
    [anon_sym_0b] = ACTIONS(15),
    [anon_sym_0x] = ACTIONS(17),
    [sym__whitespace] = ACTIONS(64),
    [sym_lineterminator] = ACTIONS(64),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(21),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(23),
    [anon_sym_SLASH_SLASH] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(70), 2,
      anon_sym_s,
      anon_sym_u,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(68), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [27] = 3,
    ACTIONS(76), 2,
      anon_sym_s,
      anon_sym_u,
    ACTIONS(72), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(74), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [54] = 3,
    ACTIONS(82), 2,
      anon_sym_s,
      anon_sym_u,
    ACTIONS(78), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [81] = 3,
    ACTIONS(88), 1,
      aux_sym__binary_token1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 11,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token1,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [107] = 3,
    ACTIONS(94), 1,
      aux_sym__binary_token1,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(92), 11,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token1,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [133] = 3,
    ACTIONS(100), 1,
      aux_sym__decimalsigned_token1,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [159] = 2,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [182] = 2,
    ACTIONS(106), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(108), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [205] = 2,
    ACTIONS(110), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(112), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [228] = 2,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(116), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [251] = 2,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(120), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [274] = 2,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(124), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [297] = 2,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(128), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [320] = 2,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(132), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [343] = 2,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      aux_sym__decimaldigit_token1,
      anon_sym_0b,
      anon_sym_0x,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
    ACTIONS(136), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      aux_sym__decimaldigit_token2,
      sym__whitespace,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [366] = 2,
    ACTIONS(138), 1,
      anon_sym_bits,
    ACTIONS(140), 1,
      anon_sym_bit,
  [373] = 2,
    ACTIONS(142), 1,
      anon_sym_bits,
    ACTIONS(144), 1,
      anon_sym_bit,
  [380] = 2,
    ACTIONS(146), 1,
      anon_sym_bits,
    ACTIONS(148), 1,
      anon_sym_bit,
  [387] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [391] = 1,
    ACTIONS(152), 1,
      anon_sym_STAR_SLASH,
  [395] = 1,
    ACTIONS(154), 1,
      aux_sym__singlelinecomment_token1,
  [399] = 1,
    ACTIONS(156), 1,
      aux_sym__multilinecomment_token1,
  [403] = 1,
    ACTIONS(158), 1,
      sym__hexdigit,
  [407] = 1,
    ACTIONS(160), 1,
      sym__binarydigit,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 27,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 107,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 205,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 251,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 320,
  [SMALL_STATE(18)] = 343,
  [SMALL_STATE(19)] = 366,
  [SMALL_STATE(20)] = 373,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 387,
  [SMALL_STATE(23)] = 391,
  [SMALL_STATE(24)] = 395,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 407,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(13),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(27),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(26),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(15),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numericalconstant, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numericalconstant, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hexadecimal, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hexadecimal, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimalsigned, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimalsigned, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multilinecomment, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multilinecomment, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhsvarname, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lhsvarname, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__singlelinecomment, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__singlelinecomment, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineterminatorsequence, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineterminatorsequence, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimalsigned, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimalsigned, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binary, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binary, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hexadecimal, 5),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hexadecimal, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
