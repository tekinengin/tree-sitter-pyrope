#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_DOT = 1,
  sym_RBRK = 2,
  sym_LBRK = 3,
  sym_overloadname = 4,
  sym_identifier = 5,
  aux_sym__stringconstant_token1 = 6,
  aux_sym__stringconstant_token2 = 7,
  anon_sym_true = 8,
  anon_sym_TRUE = 9,
  anon_sym_false = 10,
  anon_sym_FALSE = 11,
  sym__decimalsigned = 12,
  sym__decimaldigit = 13,
  sym__binary = 14,
  sym__hexadecimal = 15,
  sym__whitespace = 16,
  sym_lineterminator = 17,
  aux_sym_lineterminatorsequence_token1 = 18,
  aux_sym_lineterminatorsequence_token2 = 19,
  anon_sym_SLASH_STAR = 20,
  aux_sym__multilinecomment_token1 = 21,
  anon_sym_STAR_SLASH = 22,
  sym__singlelinecomment = 23,
  sym_start = 24,
  sym__lhsvarname = 25,
  sym__tupledotnotation = 26,
  sym__tuplearraynotation = 27,
  sym_constant = 28,
  sym__stringconstant = 29,
  sym__numericalconstant = 30,
  sym__boolean = 31,
  sym_lineterminatorsequence = 32,
  sym_comment = 33,
  sym__multilinecomment = 34,
  aux_sym_start_repeat1 = 35,
  aux_sym__tupledotnotation_repeat1 = 36,
  aux_sym__tuplearraynotation_repeat1 = 37,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [sym_RBRK] = "RBRK",
  [sym_LBRK] = "LBRK",
  [sym_overloadname] = "overloadname",
  [sym_identifier] = "identifier",
  [aux_sym__stringconstant_token1] = "_stringconstant_token1",
  [aux_sym__stringconstant_token2] = "_stringconstant_token2",
  [anon_sym_true] = "true",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_false] = "false",
  [anon_sym_FALSE] = "FALSE",
  [sym__decimalsigned] = "_decimalsigned",
  [sym__decimaldigit] = "_decimaldigit",
  [sym__binary] = "_binary",
  [sym__hexadecimal] = "_hexadecimal",
  [sym__whitespace] = "_whitespace",
  [sym_lineterminator] = "lineterminator",
  [aux_sym_lineterminatorsequence_token1] = "lineterminatorsequence_token1",
  [aux_sym_lineterminatorsequence_token2] = "lineterminatorsequence_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__multilinecomment_token1] = "_multilinecomment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__singlelinecomment] = "_singlelinecomment",
  [sym_start] = "start",
  [sym__lhsvarname] = "_lhsvarname",
  [sym__tupledotnotation] = "_tupledotnotation",
  [sym__tuplearraynotation] = "_tuplearraynotation",
  [sym_constant] = "constant",
  [sym__stringconstant] = "_stringconstant",
  [sym__numericalconstant] = "_numericalconstant",
  [sym__boolean] = "_boolean",
  [sym_lineterminatorsequence] = "lineterminatorsequence",
  [sym_comment] = "comment",
  [sym__multilinecomment] = "_multilinecomment",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym__tupledotnotation_repeat1] = "_tupledotnotation_repeat1",
  [aux_sym__tuplearraynotation_repeat1] = "_tuplearraynotation_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_RBRK] = sym_RBRK,
  [sym_LBRK] = sym_LBRK,
  [sym_overloadname] = sym_overloadname,
  [sym_identifier] = sym_identifier,
  [aux_sym__stringconstant_token1] = aux_sym__stringconstant_token1,
  [aux_sym__stringconstant_token2] = aux_sym__stringconstant_token2,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym__decimalsigned] = sym__decimalsigned,
  [sym__decimaldigit] = sym__decimaldigit,
  [sym__binary] = sym__binary,
  [sym__hexadecimal] = sym__hexadecimal,
  [sym__whitespace] = sym__whitespace,
  [sym_lineterminator] = sym_lineterminator,
  [aux_sym_lineterminatorsequence_token1] = aux_sym_lineterminatorsequence_token1,
  [aux_sym_lineterminatorsequence_token2] = aux_sym_lineterminatorsequence_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__multilinecomment_token1] = aux_sym__multilinecomment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__singlelinecomment] = sym__singlelinecomment,
  [sym_start] = sym_start,
  [sym__lhsvarname] = sym__lhsvarname,
  [sym__tupledotnotation] = sym__tupledotnotation,
  [sym__tuplearraynotation] = sym__tuplearraynotation,
  [sym_constant] = sym_constant,
  [sym__stringconstant] = sym__stringconstant,
  [sym__numericalconstant] = sym__numericalconstant,
  [sym__boolean] = sym__boolean,
  [sym_lineterminatorsequence] = sym_lineterminatorsequence,
  [sym_comment] = sym_comment,
  [sym__multilinecomment] = sym__multilinecomment,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym__tupledotnotation_repeat1] = aux_sym__tupledotnotation_repeat1,
  [aux_sym__tuplearraynotation_repeat1] = aux_sym__tuplearraynotation_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_RBRK] = {
    .visible = true,
    .named = true,
  },
  [sym_LBRK] = {
    .visible = true,
    .named = true,
  },
  [sym_overloadname] = {
    .visible = true,
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
  [sym__singlelinecomment] = {
    .visible = false,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym__lhsvarname] = {
    .visible = false,
    .named = true,
  },
  [sym__tupledotnotation] = {
    .visible = false,
    .named = true,
  },
  [sym__tuplearraynotation] = {
    .visible = false,
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
  [aux_sym_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tupledotnotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__tuplearraynotation_repeat1] = {
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

static inline bool sym_overloadname_character_set_1(int32_t lookahead) {
  return
    lookahead == 0 ||
    lookahead == '\t' ||
    lookahead == '\n' ||
    lookahead == '\r' ||
    (' ' <= lookahead && lookahead <= '#') ||
    ('\'' <= lookahead && lookahead <= ')') ||
    lookahead == ',' ||
    lookahead == '/' ||
    lookahead == ';' ||
    lookahead == '=' ||
    lookahead == '?' ||
    ('{' <= lookahead && lookahead <= '}') ||
    lookahead == 8232 ||
    lookahead == 8233;
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(73);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(76);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(30);
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(4);
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(62);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(72);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 22:
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(79);
      END_STATE();
    case 24:
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(5);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '?') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 't') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(71);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_RBRK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_LBRK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_overloadname);
      if (lookahead == '.') ADVANCE(30);
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(5);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'A') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'L') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'S') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'a') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__stringconstant_token1);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__stringconstant_token2);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '?') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '?') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '?') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '?') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__decimalsigned);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(7);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__binary);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(63);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(63);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(60);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__hexadecimal);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(65);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(9);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == 8232 ||
          lookahead == 8233) ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__whitespace);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\r') ADVANCE(75);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_lineterminator);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__multilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__singlelinecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 25},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_RBRK] = ACTIONS(1),
    [sym_LBRK] = ACTIONS(1),
    [sym_overloadname] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__stringconstant_token1] = ACTIONS(1),
    [aux_sym__stringconstant_token2] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym__decimalsigned] = ACTIONS(1),
    [sym__decimaldigit] = ACTIONS(1),
    [sym__binary] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(1),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(1),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__singlelinecomment] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(18),
    [sym__lhsvarname] = STATE(4),
    [sym__tupledotnotation] = STATE(2),
    [sym__tuplearraynotation] = STATE(8),
    [sym_constant] = STATE(4),
    [sym__stringconstant] = STATE(9),
    [sym__numericalconstant] = STATE(9),
    [sym__boolean] = STATE(9),
    [sym_lineterminatorsequence] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multilinecomment] = STATE(14),
    [aux_sym_start_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_overloadname] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [aux_sym__stringconstant_token1] = ACTIONS(11),
    [aux_sym__stringconstant_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(13),
    [sym__decimalsigned] = ACTIONS(13),
    [sym__decimaldigit] = ACTIONS(13),
    [sym__binary] = ACTIONS(11),
    [sym__hexadecimal] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(15),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(17),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [sym__singlelinecomment] = ACTIONS(21),
  },
  [2] = {
    [sym__lhsvarname] = STATE(4),
    [sym__tupledotnotation] = STATE(3),
    [sym__tuplearraynotation] = STATE(8),
    [sym_constant] = STATE(4),
    [sym__stringconstant] = STATE(9),
    [sym__numericalconstant] = STATE(9),
    [sym__boolean] = STATE(9),
    [sym_lineterminatorsequence] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multilinecomment] = STATE(14),
    [aux_sym_start_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_overloadname] = ACTIONS(25),
    [sym_identifier] = ACTIONS(9),
    [aux_sym__stringconstant_token1] = ACTIONS(11),
    [aux_sym__stringconstant_token2] = ACTIONS(11),
    [anon_sym_true] = ACTIONS(13),
    [anon_sym_TRUE] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(13),
    [anon_sym_FALSE] = ACTIONS(13),
    [sym__decimalsigned] = ACTIONS(13),
    [sym__decimaldigit] = ACTIONS(13),
    [sym__binary] = ACTIONS(11),
    [sym__hexadecimal] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(27),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(17),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [sym__singlelinecomment] = ACTIONS(21),
  },
  [3] = {
    [sym__lhsvarname] = STATE(4),
    [sym__tupledotnotation] = STATE(3),
    [sym__tuplearraynotation] = STATE(8),
    [sym_constant] = STATE(4),
    [sym__stringconstant] = STATE(9),
    [sym__numericalconstant] = STATE(9),
    [sym__boolean] = STATE(9),
    [sym_lineterminatorsequence] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multilinecomment] = STATE(14),
    [aux_sym_start_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_overloadname] = ACTIONS(31),
    [sym_identifier] = ACTIONS(34),
    [aux_sym__stringconstant_token1] = ACTIONS(37),
    [aux_sym__stringconstant_token2] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(40),
    [anon_sym_TRUE] = ACTIONS(40),
    [anon_sym_false] = ACTIONS(40),
    [anon_sym_FALSE] = ACTIONS(40),
    [sym__decimalsigned] = ACTIONS(40),
    [sym__decimaldigit] = ACTIONS(40),
    [sym__binary] = ACTIONS(37),
    [sym__hexadecimal] = ACTIONS(37),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(43),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(46),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(46),
    [anon_sym_SLASH_STAR] = ACTIONS(49),
    [sym__singlelinecomment] = ACTIONS(52),
  },
  [4] = {
    [aux_sym__tuplearraynotation_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_DOT] = ACTIONS(57),
    [sym_LBRK] = ACTIONS(59),
    [sym_overloadname] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [aux_sym__stringconstant_token1] = ACTIONS(55),
    [aux_sym__stringconstant_token2] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_TRUE] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_FALSE] = ACTIONS(57),
    [sym__decimalsigned] = ACTIONS(57),
    [sym__decimaldigit] = ACTIONS(57),
    [sym__binary] = ACTIONS(55),
    [sym__hexadecimal] = ACTIONS(55),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(57),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(57),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(57),
    [anon_sym_SLASH_STAR] = ACTIONS(55),
    [sym__singlelinecomment] = ACTIONS(55),
  },
  [5] = {
    [aux_sym__tuplearraynotation_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_DOT] = ACTIONS(63),
    [sym_LBRK] = ACTIONS(59),
    [sym_overloadname] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [aux_sym__stringconstant_token1] = ACTIONS(61),
    [aux_sym__stringconstant_token2] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_TRUE] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_FALSE] = ACTIONS(63),
    [sym__decimalsigned] = ACTIONS(63),
    [sym__decimaldigit] = ACTIONS(63),
    [sym__binary] = ACTIONS(61),
    [sym__hexadecimal] = ACTIONS(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(63),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(63),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(63),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__singlelinecomment] = ACTIONS(61),
  },
  [6] = {
    [aux_sym__tuplearraynotation_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_DOT] = ACTIONS(67),
    [sym_LBRK] = ACTIONS(69),
    [sym_overloadname] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [aux_sym__stringconstant_token1] = ACTIONS(65),
    [aux_sym__stringconstant_token2] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_TRUE] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_FALSE] = ACTIONS(67),
    [sym__decimalsigned] = ACTIONS(67),
    [sym__decimaldigit] = ACTIONS(67),
    [sym__binary] = ACTIONS(65),
    [sym__hexadecimal] = ACTIONS(65),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(67),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(67),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(65),
    [sym__singlelinecomment] = ACTIONS(65),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [anon_sym_DOT] = ACTIONS(74),
    [sym_LBRK] = ACTIONS(72),
    [sym_overloadname] = ACTIONS(72),
    [sym_identifier] = ACTIONS(74),
    [aux_sym__stringconstant_token1] = ACTIONS(72),
    [aux_sym__stringconstant_token2] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_TRUE] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [anon_sym_FALSE] = ACTIONS(74),
    [sym__decimalsigned] = ACTIONS(74),
    [sym__decimaldigit] = ACTIONS(74),
    [sym__binary] = ACTIONS(72),
    [sym__hexadecimal] = ACTIONS(72),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(74),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(74),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(74),
    [anon_sym_SLASH_STAR] = ACTIONS(72),
    [sym__singlelinecomment] = ACTIONS(72),
  },
  [8] = {
    [aux_sym__tupledotnotation_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(78),
    [sym_overloadname] = ACTIONS(76),
    [sym_identifier] = ACTIONS(80),
    [aux_sym__stringconstant_token1] = ACTIONS(76),
    [aux_sym__stringconstant_token2] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_TRUE] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_FALSE] = ACTIONS(80),
    [sym__decimalsigned] = ACTIONS(80),
    [sym__decimaldigit] = ACTIONS(80),
    [sym__binary] = ACTIONS(76),
    [sym__hexadecimal] = ACTIONS(76),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(80),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(80),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(80),
    [anon_sym_SLASH_STAR] = ACTIONS(76),
    [sym__singlelinecomment] = ACTIONS(76),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(84),
    [sym_LBRK] = ACTIONS(82),
    [sym_overloadname] = ACTIONS(82),
    [sym_identifier] = ACTIONS(84),
    [aux_sym__stringconstant_token1] = ACTIONS(82),
    [aux_sym__stringconstant_token2] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(84),
    [anon_sym_TRUE] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(84),
    [anon_sym_FALSE] = ACTIONS(84),
    [sym__decimalsigned] = ACTIONS(84),
    [sym__decimaldigit] = ACTIONS(84),
    [sym__binary] = ACTIONS(82),
    [sym__hexadecimal] = ACTIONS(82),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(84),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(84),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(84),
    [anon_sym_SLASH_STAR] = ACTIONS(82),
    [sym__singlelinecomment] = ACTIONS(82),
  },
  [10] = {
    [aux_sym__tupledotnotation_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(88),
    [sym_overloadname] = ACTIONS(86),
    [sym_identifier] = ACTIONS(91),
    [aux_sym__stringconstant_token1] = ACTIONS(86),
    [aux_sym__stringconstant_token2] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_TRUE] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_FALSE] = ACTIONS(91),
    [sym__decimalsigned] = ACTIONS(91),
    [sym__decimaldigit] = ACTIONS(91),
    [sym__binary] = ACTIONS(86),
    [sym__hexadecimal] = ACTIONS(86),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(91),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(91),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(86),
    [sym__singlelinecomment] = ACTIONS(86),
  },
  [11] = {
    [aux_sym__tupledotnotation_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(78),
    [sym_overloadname] = ACTIONS(93),
    [sym_identifier] = ACTIONS(95),
    [aux_sym__stringconstant_token1] = ACTIONS(93),
    [aux_sym__stringconstant_token2] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_TRUE] = ACTIONS(95),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_FALSE] = ACTIONS(95),
    [sym__decimalsigned] = ACTIONS(95),
    [sym__decimaldigit] = ACTIONS(95),
    [sym__binary] = ACTIONS(93),
    [sym__hexadecimal] = ACTIONS(93),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(95),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(95),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(95),
    [anon_sym_SLASH_STAR] = ACTIONS(93),
    [sym__singlelinecomment] = ACTIONS(93),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_overloadname] = ACTIONS(86),
    [sym_identifier] = ACTIONS(91),
    [aux_sym__stringconstant_token1] = ACTIONS(86),
    [aux_sym__stringconstant_token2] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_TRUE] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_FALSE] = ACTIONS(91),
    [sym__decimalsigned] = ACTIONS(91),
    [sym__decimaldigit] = ACTIONS(91),
    [sym__binary] = ACTIONS(86),
    [sym__hexadecimal] = ACTIONS(86),
    [sym__whitespace] = ACTIONS(3),
    [sym_lineterminator] = ACTIONS(91),
    [aux_sym_lineterminatorsequence_token1] = ACTIONS(91),
    [aux_sym_lineterminatorsequence_token2] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(86),
    [sym__singlelinecomment] = ACTIONS(86),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      sym_overloadname,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
      anon_sym_SLASH_STAR,
      sym__singlelinecomment,
    ACTIONS(99), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [26] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(101), 8,
      ts_builtin_sym_end,
      sym_overloadname,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
      anon_sym_SLASH_STAR,
      sym__singlelinecomment,
    ACTIONS(103), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [52] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(105), 8,
      ts_builtin_sym_end,
      sym_overloadname,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
      anon_sym_SLASH_STAR,
      sym__singlelinecomment,
    ACTIONS(107), 10,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
      sym_lineterminator,
      aux_sym_lineterminatorsequence_token1,
      aux_sym_lineterminatorsequence_token2,
  [78] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym__whitespace,
    STATE(12), 1,
      sym__tuplearraynotation,
    STATE(4), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(9), 3,
      sym__stringconstant,
      sym__numericalconstant,
      sym__boolean,
    ACTIONS(11), 4,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
    ACTIONS(13), 6,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
  [111] = 6,
    ACTIONS(109), 1,
      sym__whitespace,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(19), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(22), 3,
      sym__stringconstant,
      sym__numericalconstant,
      sym__boolean,
    ACTIONS(113), 4,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
    ACTIONS(115), 6,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
  [141] = 2,
    ACTIONS(109), 1,
      sym__whitespace,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [148] = 2,
    ACTIONS(109), 1,
      sym__whitespace,
    ACTIONS(119), 1,
      sym_RBRK,
  [155] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(121), 1,
      aux_sym__multilinecomment_token1,
  [162] = 2,
    ACTIONS(109), 1,
      sym__whitespace,
    ACTIONS(123), 1,
      anon_sym_STAR_SLASH,
  [169] = 2,
    ACTIONS(82), 1,
      sym_RBRK,
    ACTIONS(109), 1,
      sym__whitespace,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 26,
  [SMALL_STATE(15)] = 52,
  [SMALL_STATE(16)] = 78,
  [SMALL_STATE(17)] = 111,
  [SMALL_STATE(18)] = 141,
  [SMALL_STATE(19)] = 148,
  [SMALL_STATE(20)] = 155,
  [SMALL_STATE(21)] = 162,
  [SMALL_STATE(22)] = 169,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(3),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(4),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(3),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(20),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(14),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuplearraynotation, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuplearraynotation, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuplearraynotation, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuplearraynotation, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 2), SHIFT_REPEAT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tupledotnotation, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tupledotnotation, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tupledotnotation_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tupledotnotation_repeat1, 2), SHIFT_REPEAT(16),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tupledotnotation_repeat1, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tupledotnotation, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tupledotnotation, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lineterminatorsequence, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lineterminatorsequence, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multilinecomment, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multilinecomment, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
