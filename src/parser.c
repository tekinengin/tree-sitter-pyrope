#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym_identifier = 1,
  anon_sym_and = 2,
  anon_sym_or = 3,
  anon_sym_xor = 4,
  anon_sym_PIPE = 5,
  anon_sym_CARET = 6,
  anon_sym_AMP = 7,
  anon_sym_PLUS_PLUS = 8,
  anon_sym_DASH_DASH = 9,
  anon_sym_LT_LT = 10,
  anon_sym_GT_GT = 11,
  anon_sym_LT_LT_LT = 12,
  anon_sym_GT_GT_GT = 13,
  anon_sym_PLUS = 14,
  anon_sym_DASH = 15,
  anon_sym_STAR = 16,
  anon_sym_SLASH = 17,
  anon_sym_LT = 18,
  anon_sym_COLON_LT = 19,
  anon_sym_GT = 20,
  anon_sym_COLON_GT = 21,
  anon_sym_LT_EQ = 22,
  anon_sym_COLON_LT_EQ = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_COLON_GT_EQ = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_COLON_EQ_EQ = 27,
  sym__ISEQU = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_COLON_BANG_EQ = 30,
  anon_sym_DOT = 31,
  sym__LLBRK = 32,
  sym__RRBRK = 33,
  sym__LBRK = 34,
  sym__RBRK = 35,
  sym__SEMICOLON = 36,
  sym_overloadname = 37,
  aux_sym__stringconstant_token1 = 38,
  aux_sym__stringconstant_token2 = 39,
  anon_sym_true = 40,
  anon_sym_TRUE = 41,
  anon_sym_false = 42,
  anon_sym_FALSE = 43,
  sym__decimalsigned = 44,
  sym__decimaldigit = 45,
  sym__binary = 46,
  sym__hexadecimal = 47,
  sym__whitespace = 48,
  sym__lineterminator = 49,
  aux_sym__lineterminatorsequence_token1 = 50,
  aux_sym__lineterminatorsequence_token2 = 51,
  anon_sym_SLASH_STAR = 52,
  aux_sym__multilinecomment_token1 = 53,
  anon_sym_STAR_SLASH = 54,
  sym__singlelinecomment = 55,
  sym_start = 56,
  aux_sym__exspression = 57,
  sym_binaryexpression = 58,
  sym__LT = 59,
  sym__GT = 60,
  sym__LE = 61,
  sym__GE = 62,
  sym__EQUEQU = 63,
  sym__BANGEQU = 64,
  sym__bitselectionnotation = 65,
  aux_sym__bitselectionbracket = 66,
  sym__tupledotnotation = 67,
  sym__tuplearraynotation = 68,
  sym__lhsvarname = 69,
  sym_constant = 70,
  sym__stringconstant = 71,
  sym__numericalconstant = 72,
  sym__boolean = 73,
  sym__lineterminatorsequence = 74,
  sym__comment = 75,
  sym__multilinecomment = 76,
  aux_sym_start_repeat1 = 77,
  aux_sym_start_repeat2 = 78,
  aux_sym_start_repeat3 = 79,
  aux_sym__tupledotnotation_repeat1 = 80,
  aux_sym__tuplearraynotation_repeat1 = 81,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_COLON_LT] = ":<",
  [anon_sym_GT] = ">",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_COLON_LT_EQ] = ":<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_COLON_GT_EQ] = ":>=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_COLON_EQ_EQ] = ":==",
  [sym__ISEQU] = "_ISEQU",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_COLON_BANG_EQ] = ":!=",
  [anon_sym_DOT] = ".",
  [sym__LLBRK] = "_LLBRK",
  [sym__RRBRK] = "_RRBRK",
  [sym__LBRK] = "_LBRK",
  [sym__RBRK] = "_RBRK",
  [sym__SEMICOLON] = "_SEMICOLON",
  [sym_overloadname] = "overloadname",
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
  [sym__lineterminator] = "_lineterminator",
  [aux_sym__lineterminatorsequence_token1] = "_lineterminatorsequence_token1",
  [aux_sym__lineterminatorsequence_token2] = "_lineterminatorsequence_token2",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__multilinecomment_token1] = "_multilinecomment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [sym__singlelinecomment] = "_singlelinecomment",
  [sym_start] = "start",
  [aux_sym__exspression] = "_exspression",
  [sym_binaryexpression] = "binaryexpression",
  [sym__LT] = "_LT",
  [sym__GT] = "_GT",
  [sym__LE] = "_LE",
  [sym__GE] = "_GE",
  [sym__EQUEQU] = "_EQUEQU",
  [sym__BANGEQU] = "_BANGEQU",
  [sym__bitselectionnotation] = "_bitselectionnotation",
  [aux_sym__bitselectionbracket] = "_bitselectionbracket",
  [sym__tupledotnotation] = "_tupledotnotation",
  [sym__tuplearraynotation] = "_tuplearraynotation",
  [sym__lhsvarname] = "_lhsvarname",
  [sym_constant] = "constant",
  [sym__stringconstant] = "_stringconstant",
  [sym__numericalconstant] = "_numericalconstant",
  [sym__boolean] = "_boolean",
  [sym__lineterminatorsequence] = "_lineterminatorsequence",
  [sym__comment] = "_comment",
  [sym__multilinecomment] = "_multilinecomment",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_start_repeat2] = "start_repeat2",
  [aux_sym_start_repeat3] = "start_repeat3",
  [aux_sym__tupledotnotation_repeat1] = "_tupledotnotation_repeat1",
  [aux_sym__tuplearraynotation_repeat1] = "_tuplearraynotation_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COLON_LT] = anon_sym_COLON_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_COLON_LT_EQ] = anon_sym_COLON_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_COLON_GT_EQ] = anon_sym_COLON_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_COLON_EQ_EQ] = anon_sym_COLON_EQ_EQ,
  [sym__ISEQU] = sym__ISEQU,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_COLON_BANG_EQ] = anon_sym_COLON_BANG_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__LLBRK] = sym__LLBRK,
  [sym__RRBRK] = sym__RRBRK,
  [sym__LBRK] = sym__LBRK,
  [sym__RBRK] = sym__RBRK,
  [sym__SEMICOLON] = sym__SEMICOLON,
  [sym_overloadname] = sym_overloadname,
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
  [sym__lineterminator] = sym__lineterminator,
  [aux_sym__lineterminatorsequence_token1] = aux_sym__lineterminatorsequence_token1,
  [aux_sym__lineterminatorsequence_token2] = aux_sym__lineterminatorsequence_token2,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__multilinecomment_token1] = aux_sym__multilinecomment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym__singlelinecomment] = sym__singlelinecomment,
  [sym_start] = sym_start,
  [aux_sym__exspression] = aux_sym__exspression,
  [sym_binaryexpression] = sym_binaryexpression,
  [sym__LT] = sym__LT,
  [sym__GT] = sym__GT,
  [sym__LE] = sym__LE,
  [sym__GE] = sym__GE,
  [sym__EQUEQU] = sym__EQUEQU,
  [sym__BANGEQU] = sym__BANGEQU,
  [sym__bitselectionnotation] = sym__bitselectionnotation,
  [aux_sym__bitselectionbracket] = aux_sym__bitselectionbracket,
  [sym__tupledotnotation] = sym__tupledotnotation,
  [sym__tuplearraynotation] = sym__tuplearraynotation,
  [sym__lhsvarname] = sym__lhsvarname,
  [sym_constant] = sym_constant,
  [sym__stringconstant] = sym__stringconstant,
  [sym__numericalconstant] = sym__numericalconstant,
  [sym__boolean] = sym__boolean,
  [sym__lineterminatorsequence] = sym__lineterminatorsequence,
  [sym__comment] = sym__comment,
  [sym__multilinecomment] = sym__multilinecomment,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_start_repeat2] = aux_sym_start_repeat2,
  [aux_sym_start_repeat3] = aux_sym_start_repeat3,
  [aux_sym__tupledotnotation_repeat1] = aux_sym__tupledotnotation_repeat1,
  [aux_sym__tuplearraynotation_repeat1] = aux_sym__tuplearraynotation_repeat1,
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__ISEQU] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__LLBRK] = {
    .visible = false,
    .named = true,
  },
  [sym__RRBRK] = {
    .visible = false,
    .named = true,
  },
  [sym__LBRK] = {
    .visible = false,
    .named = true,
  },
  [sym__RBRK] = {
    .visible = false,
    .named = true,
  },
  [sym__SEMICOLON] = {
    .visible = false,
    .named = true,
  },
  [sym_overloadname] = {
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
  [sym__lineterminator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__lineterminatorsequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lineterminatorsequence_token2] = {
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
  [aux_sym__exspression] = {
    .visible = false,
    .named = false,
  },
  [sym_binaryexpression] = {
    .visible = true,
    .named = true,
  },
  [sym__LT] = {
    .visible = false,
    .named = true,
  },
  [sym__GT] = {
    .visible = false,
    .named = true,
  },
  [sym__LE] = {
    .visible = false,
    .named = true,
  },
  [sym__GE] = {
    .visible = false,
    .named = true,
  },
  [sym__EQUEQU] = {
    .visible = false,
    .named = true,
  },
  [sym__BANGEQU] = {
    .visible = false,
    .named = true,
  },
  [sym__bitselectionnotation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__bitselectionbracket] = {
    .visible = false,
    .named = false,
  },
  [sym__tupledotnotation] = {
    .visible = false,
    .named = true,
  },
  [sym__tuplearraynotation] = {
    .visible = false,
    .named = true,
  },
  [sym__lhsvarname] = {
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
  [sym__lineterminatorsequence] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
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
  [aux_sym_start_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_repeat3] = {
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
      if (eof) ADVANCE(33);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '[') ADVANCE(64);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == ']') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(68);
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(7);
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(58);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == '[') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(63);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 26:
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 27:
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 29:
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != 11 &&
          lookahead != '\f' &&
          lookahead != ' ' &&
          lookahead != 65279) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(91);
      END_STATE();
    case 31:
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '&') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == '?') ADVANCE(73);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == '|') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('#' <= lookahead && lookahead <= '%') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '<') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(37);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(97);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(98);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__LLBRK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__RRBRK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__LBRK);
      if (lookahead == '[') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__RBRK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__RBRK);
      if (lookahead == ']') ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__SEMICOLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_overloadname);
      if (lookahead == '.') ADVANCE(68);
      if (!sym_overloadname_character_set_1(lookahead)) ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '?') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__stringconstant_token1);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__stringconstant_token2);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\r' ||
          lookahead == '\'' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__decimalsigned);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(75);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__decimalsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__binary);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(83);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(80);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(83);
      if (lookahead == '"' ||
          lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(80);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__binary);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(17);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__hexadecimal);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 'i') ADVANCE(24);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == 's' ||
          lookahead == 'u') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(18);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ' ||
          lookahead == 65279) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__lineterminator);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__lineterminator);
      if (lookahead == '\r') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__lineterminator);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__multilinecomment_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__singlelinecomment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 8232 &&
          lookahead != 8233) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'F') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__ISEQU);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 32},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 30},
  [42] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COLON_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_COLON_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_COLON_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(1),
    [sym__ISEQU] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__LLBRK] = ACTIONS(1),
    [sym__RRBRK] = ACTIONS(1),
    [sym__LBRK] = ACTIONS(1),
    [sym__RBRK] = ACTIONS(1),
    [sym__SEMICOLON] = ACTIONS(1),
    [sym_overloadname] = ACTIONS(1),
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
    [sym__lineterminator] = ACTIONS(1),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(1),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym__singlelinecomment] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(42),
    [aux_sym__exspression] = STATE(2),
    [sym_binaryexpression] = STATE(2),
    [sym__bitselectionnotation] = STATE(2),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [aux_sym_start_repeat3] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_overloadname] = ACTIONS(9),
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
  },
  [2] = {
    [aux_sym__exspression] = STATE(3),
    [sym_binaryexpression] = STATE(3),
    [sym__LT] = STATE(29),
    [sym__GT] = STATE(29),
    [sym__LE] = STATE(29),
    [sym__GE] = STATE(29),
    [sym__EQUEQU] = STATE(29),
    [sym__BANGEQU] = STATE(29),
    [sym__bitselectionnotation] = STATE(3),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [sym__lineterminatorsequence] = STATE(24),
    [sym__comment] = STATE(35),
    [sym__multilinecomment] = STATE(35),
    [aux_sym_start_repeat1] = STATE(35),
    [aux_sym_start_repeat2] = STATE(24),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PLUS_PLUS] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT_GT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_COLON_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_COLON_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_COLON_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_COLON_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(25),
    [sym__ISEQU] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(25),
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
    [sym__lineterminator] = ACTIONS(27),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(29),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(29),
    [anon_sym_SLASH_STAR] = ACTIONS(31),
    [sym__singlelinecomment] = ACTIONS(33),
  },
  [3] = {
    [aux_sym__exspression] = STATE(3),
    [sym_binaryexpression] = STATE(3),
    [sym__LT] = STATE(29),
    [sym__GT] = STATE(29),
    [sym__LE] = STATE(29),
    [sym__GE] = STATE(29),
    [sym__EQUEQU] = STATE(29),
    [sym__BANGEQU] = STATE(29),
    [sym__bitselectionnotation] = STATE(3),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_and] = ACTIONS(15),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PLUS_PLUS] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT_GT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_COLON_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_COLON_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_COLON_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_COLON_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(25),
    [sym__ISEQU] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(25),
    [aux_sym__stringconstant_token1] = ACTIONS(38),
    [aux_sym__stringconstant_token2] = ACTIONS(38),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_TRUE] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_FALSE] = ACTIONS(41),
    [sym__decimalsigned] = ACTIONS(41),
    [sym__decimaldigit] = ACTIONS(41),
    [sym__binary] = ACTIONS(38),
    [sym__hexadecimal] = ACTIONS(38),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(44),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(46),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(46),
    [anon_sym_SLASH_STAR] = ACTIONS(44),
    [sym__singlelinecomment] = ACTIONS(44),
  },
  [4] = {
    [aux_sym__exspression] = STATE(3),
    [sym_binaryexpression] = STATE(3),
    [sym__LT] = STATE(29),
    [sym__GT] = STATE(29),
    [sym__LE] = STATE(29),
    [sym__GE] = STATE(29),
    [sym__EQUEQU] = STATE(29),
    [sym__BANGEQU] = STATE(29),
    [sym__bitselectionnotation] = STATE(3),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_or] = ACTIONS(48),
    [anon_sym_xor] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PLUS_PLUS] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT_GT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(50),
    [anon_sym_COLON_LT] = ACTIONS(50),
    [anon_sym_GT] = ACTIONS(50),
    [anon_sym_COLON_GT] = ACTIONS(50),
    [anon_sym_LT_EQ] = ACTIONS(53),
    [anon_sym_COLON_LT_EQ] = ACTIONS(53),
    [anon_sym_GT_EQ] = ACTIONS(53),
    [anon_sym_COLON_GT_EQ] = ACTIONS(53),
    [anon_sym_EQ_EQ] = ACTIONS(53),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(53),
    [sym__ISEQU] = ACTIONS(50),
    [anon_sym_BANG_EQ] = ACTIONS(53),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(53),
    [aux_sym__stringconstant_token1] = ACTIONS(56),
    [aux_sym__stringconstant_token2] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_TRUE] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_FALSE] = ACTIONS(48),
    [sym__decimalsigned] = ACTIONS(48),
    [sym__decimaldigit] = ACTIONS(48),
    [sym__binary] = ACTIONS(56),
    [sym__hexadecimal] = ACTIONS(56),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(56),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(48),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(48),
    [anon_sym_SLASH_STAR] = ACTIONS(56),
    [sym__singlelinecomment] = ACTIONS(56),
  },
  [5] = {
    [aux_sym__exspression] = STATE(3),
    [sym_binaryexpression] = STATE(3),
    [sym__LT] = STATE(29),
    [sym__GT] = STATE(29),
    [sym__LE] = STATE(29),
    [sym__GE] = STATE(29),
    [sym__EQUEQU] = STATE(29),
    [sym__BANGEQU] = STATE(29),
    [sym__bitselectionnotation] = STATE(3),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_or] = ACTIONS(48),
    [anon_sym_xor] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PLUS_PLUS] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT_GT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(48),
    [anon_sym_COLON_LT] = ACTIONS(48),
    [anon_sym_GT] = ACTIONS(48),
    [anon_sym_COLON_GT] = ACTIONS(48),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_COLON_LT_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_COLON_GT_EQ] = ACTIONS(56),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(56),
    [sym__ISEQU] = ACTIONS(48),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(56),
    [aux_sym__stringconstant_token1] = ACTIONS(56),
    [aux_sym__stringconstant_token2] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_TRUE] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_FALSE] = ACTIONS(48),
    [sym__decimalsigned] = ACTIONS(48),
    [sym__decimaldigit] = ACTIONS(48),
    [sym__binary] = ACTIONS(56),
    [sym__hexadecimal] = ACTIONS(56),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(56),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(48),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(48),
    [anon_sym_SLASH_STAR] = ACTIONS(56),
    [sym__singlelinecomment] = ACTIONS(56),
  },
  [6] = {
    [aux_sym__exspression] = STATE(3),
    [sym_binaryexpression] = STATE(3),
    [sym__LT] = STATE(29),
    [sym__GT] = STATE(29),
    [sym__LE] = STATE(29),
    [sym__GE] = STATE(29),
    [sym__EQUEQU] = STATE(29),
    [sym__BANGEQU] = STATE(29),
    [sym__bitselectionnotation] = STATE(3),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(48),
    [anon_sym_or] = ACTIONS(48),
    [anon_sym_xor] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(58),
    [anon_sym_CARET] = ACTIONS(58),
    [anon_sym_AMP] = ACTIONS(58),
    [anon_sym_PLUS_PLUS] = ACTIONS(58),
    [anon_sym_DASH_DASH] = ACTIONS(58),
    [anon_sym_LT_LT] = ACTIONS(61),
    [anon_sym_GT_GT] = ACTIONS(61),
    [anon_sym_LT_LT_LT] = ACTIONS(58),
    [anon_sym_GT_GT_GT] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(48),
    [anon_sym_COLON_LT] = ACTIONS(48),
    [anon_sym_GT] = ACTIONS(48),
    [anon_sym_COLON_GT] = ACTIONS(48),
    [anon_sym_LT_EQ] = ACTIONS(56),
    [anon_sym_COLON_LT_EQ] = ACTIONS(56),
    [anon_sym_GT_EQ] = ACTIONS(56),
    [anon_sym_COLON_GT_EQ] = ACTIONS(56),
    [anon_sym_EQ_EQ] = ACTIONS(56),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(56),
    [sym__ISEQU] = ACTIONS(48),
    [anon_sym_BANG_EQ] = ACTIONS(56),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(56),
    [aux_sym__stringconstant_token1] = ACTIONS(56),
    [aux_sym__stringconstant_token2] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_TRUE] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_FALSE] = ACTIONS(48),
    [sym__decimalsigned] = ACTIONS(48),
    [sym__decimaldigit] = ACTIONS(48),
    [sym__binary] = ACTIONS(56),
    [sym__hexadecimal] = ACTIONS(56),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(56),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(48),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(48),
    [anon_sym_SLASH_STAR] = ACTIONS(56),
    [sym__singlelinecomment] = ACTIONS(56),
  },
  [7] = {
    [aux_sym__exspression] = STATE(3),
    [sym_binaryexpression] = STATE(3),
    [sym__LT] = STATE(29),
    [sym__GT] = STATE(29),
    [sym__LE] = STATE(29),
    [sym__GE] = STATE(29),
    [sym__EQUEQU] = STATE(29),
    [sym__BANGEQU] = STATE(29),
    [sym__bitselectionnotation] = STATE(3),
    [sym__tupledotnotation] = STATE(19),
    [sym__tuplearraynotation] = STATE(15),
    [sym__lhsvarname] = STATE(9),
    [sym_constant] = STATE(9),
    [sym__stringconstant] = STATE(8),
    [sym__numericalconstant] = STATE(8),
    [sym__boolean] = STATE(8),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_and] = ACTIONS(64),
    [anon_sym_or] = ACTIONS(64),
    [anon_sym_xor] = ACTIONS(64),
    [anon_sym_PIPE] = ACTIONS(17),
    [anon_sym_CARET] = ACTIONS(17),
    [anon_sym_AMP] = ACTIONS(17),
    [anon_sym_PLUS_PLUS] = ACTIONS(17),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_LT_LT] = ACTIONS(19),
    [anon_sym_GT_GT] = ACTIONS(19),
    [anon_sym_LT_LT_LT] = ACTIONS(17),
    [anon_sym_GT_GT_GT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_COLON_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_COLON_GT] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(25),
    [anon_sym_COLON_LT_EQ] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(25),
    [anon_sym_COLON_GT_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(25),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(25),
    [sym__ISEQU] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(25),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(25),
    [aux_sym__stringconstant_token1] = ACTIONS(56),
    [aux_sym__stringconstant_token2] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(48),
    [anon_sym_TRUE] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(48),
    [anon_sym_FALSE] = ACTIONS(48),
    [sym__decimalsigned] = ACTIONS(48),
    [sym__decimaldigit] = ACTIONS(48),
    [sym__binary] = ACTIONS(56),
    [sym__hexadecimal] = ACTIONS(56),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(56),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(48),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(48),
    [anon_sym_SLASH_STAR] = ACTIONS(56),
    [sym__singlelinecomment] = ACTIONS(56),
  },
  [8] = {
    [sym_identifier] = ACTIONS(67),
    [anon_sym_and] = ACTIONS(67),
    [anon_sym_or] = ACTIONS(67),
    [anon_sym_xor] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [anon_sym_COLON_LT] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(67),
    [anon_sym_COLON_GT] = ACTIONS(67),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_COLON_LT_EQ] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_COLON_GT_EQ] = ACTIONS(69),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(69),
    [sym__ISEQU] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [sym__LLBRK] = ACTIONS(69),
    [sym__RRBRK] = ACTIONS(69),
    [sym__LBRK] = ACTIONS(67),
    [sym__RBRK] = ACTIONS(67),
    [aux_sym__stringconstant_token1] = ACTIONS(69),
    [aux_sym__stringconstant_token2] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(67),
    [anon_sym_TRUE] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_FALSE] = ACTIONS(67),
    [sym__decimalsigned] = ACTIONS(67),
    [sym__decimaldigit] = ACTIONS(67),
    [sym__binary] = ACTIONS(69),
    [sym__hexadecimal] = ACTIONS(69),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(69),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(67),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [sym__singlelinecomment] = ACTIONS(69),
  },
  [9] = {
    [aux_sym__tuplearraynotation_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_xor] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_PLUS_PLUS] = ACTIONS(73),
    [anon_sym_DASH_DASH] = ACTIONS(73),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_LT_LT_LT] = ACTIONS(73),
    [anon_sym_GT_GT_GT] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_COLON_LT] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_COLON_GT] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_COLON_LT_EQ] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_COLON_GT_EQ] = ACTIONS(73),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(73),
    [sym__ISEQU] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(73),
    [sym__LLBRK] = ACTIONS(73),
    [sym__LBRK] = ACTIONS(75),
    [aux_sym__stringconstant_token1] = ACTIONS(73),
    [aux_sym__stringconstant_token2] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_TRUE] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [anon_sym_FALSE] = ACTIONS(71),
    [sym__decimalsigned] = ACTIONS(71),
    [sym__decimaldigit] = ACTIONS(71),
    [sym__binary] = ACTIONS(73),
    [sym__hexadecimal] = ACTIONS(73),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(73),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(71),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(71),
    [anon_sym_SLASH_STAR] = ACTIONS(73),
    [sym__singlelinecomment] = ACTIONS(73),
  },
  [10] = {
    [aux_sym__tuplearraynotation_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_and] = ACTIONS(77),
    [anon_sym_or] = ACTIONS(77),
    [anon_sym_xor] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_CARET] = ACTIONS(79),
    [anon_sym_AMP] = ACTIONS(79),
    [anon_sym_PLUS_PLUS] = ACTIONS(79),
    [anon_sym_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(79),
    [anon_sym_GT_GT_GT] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_COLON_LT] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_COLON_GT] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_COLON_LT_EQ] = ACTIONS(79),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_COLON_GT_EQ] = ACTIONS(79),
    [anon_sym_EQ_EQ] = ACTIONS(79),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(79),
    [sym__ISEQU] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [sym__LLBRK] = ACTIONS(79),
    [sym__LBRK] = ACTIONS(75),
    [aux_sym__stringconstant_token1] = ACTIONS(79),
    [aux_sym__stringconstant_token2] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_TRUE] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_FALSE] = ACTIONS(77),
    [sym__decimalsigned] = ACTIONS(77),
    [sym__decimaldigit] = ACTIONS(77),
    [sym__binary] = ACTIONS(79),
    [sym__hexadecimal] = ACTIONS(79),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(79),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(77),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(77),
    [anon_sym_SLASH_STAR] = ACTIONS(79),
    [sym__singlelinecomment] = ACTIONS(79),
  },
  [11] = {
    [aux_sym__tuplearraynotation_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_and] = ACTIONS(81),
    [anon_sym_or] = ACTIONS(81),
    [anon_sym_xor] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(83),
    [anon_sym_CARET] = ACTIONS(83),
    [anon_sym_AMP] = ACTIONS(83),
    [anon_sym_PLUS_PLUS] = ACTIONS(83),
    [anon_sym_DASH_DASH] = ACTIONS(83),
    [anon_sym_LT_LT] = ACTIONS(81),
    [anon_sym_GT_GT] = ACTIONS(81),
    [anon_sym_LT_LT_LT] = ACTIONS(83),
    [anon_sym_GT_GT_GT] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_COLON_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_COLON_GT] = ACTIONS(81),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_COLON_LT_EQ] = ACTIONS(83),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_COLON_GT_EQ] = ACTIONS(83),
    [anon_sym_EQ_EQ] = ACTIONS(83),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(83),
    [sym__ISEQU] = ACTIONS(81),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(83),
    [sym__LLBRK] = ACTIONS(83),
    [sym__LBRK] = ACTIONS(85),
    [aux_sym__stringconstant_token1] = ACTIONS(83),
    [aux_sym__stringconstant_token2] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_TRUE] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_FALSE] = ACTIONS(81),
    [sym__decimalsigned] = ACTIONS(81),
    [sym__decimaldigit] = ACTIONS(81),
    [sym__binary] = ACTIONS(83),
    [sym__hexadecimal] = ACTIONS(83),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(83),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(81),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(81),
    [anon_sym_SLASH_STAR] = ACTIONS(83),
    [sym__singlelinecomment] = ACTIONS(83),
  },
  [12] = {
    [aux_sym__tupledotnotation_repeat1] = STATE(14),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_and] = ACTIONS(88),
    [anon_sym_or] = ACTIONS(88),
    [anon_sym_xor] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_AMP] = ACTIONS(90),
    [anon_sym_PLUS_PLUS] = ACTIONS(90),
    [anon_sym_DASH_DASH] = ACTIONS(90),
    [anon_sym_LT_LT] = ACTIONS(88),
    [anon_sym_GT_GT] = ACTIONS(88),
    [anon_sym_LT_LT_LT] = ACTIONS(90),
    [anon_sym_GT_GT_GT] = ACTIONS(90),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [anon_sym_COLON_LT] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [anon_sym_COLON_GT] = ACTIONS(88),
    [anon_sym_LT_EQ] = ACTIONS(90),
    [anon_sym_COLON_LT_EQ] = ACTIONS(90),
    [anon_sym_GT_EQ] = ACTIONS(90),
    [anon_sym_COLON_GT_EQ] = ACTIONS(90),
    [anon_sym_EQ_EQ] = ACTIONS(90),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(90),
    [sym__ISEQU] = ACTIONS(88),
    [anon_sym_BANG_EQ] = ACTIONS(90),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(92),
    [sym__LLBRK] = ACTIONS(90),
    [aux_sym__stringconstant_token1] = ACTIONS(90),
    [aux_sym__stringconstant_token2] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_TRUE] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_FALSE] = ACTIONS(88),
    [sym__decimalsigned] = ACTIONS(88),
    [sym__decimaldigit] = ACTIONS(88),
    [sym__binary] = ACTIONS(90),
    [sym__hexadecimal] = ACTIONS(90),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(90),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(88),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(88),
    [anon_sym_SLASH_STAR] = ACTIONS(90),
    [sym__singlelinecomment] = ACTIONS(90),
  },
  [13] = {
    [sym_identifier] = ACTIONS(94),
    [anon_sym_and] = ACTIONS(94),
    [anon_sym_or] = ACTIONS(94),
    [anon_sym_xor] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_CARET] = ACTIONS(96),
    [anon_sym_AMP] = ACTIONS(96),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [anon_sym_LT_LT] = ACTIONS(94),
    [anon_sym_GT_GT] = ACTIONS(94),
    [anon_sym_LT_LT_LT] = ACTIONS(96),
    [anon_sym_GT_GT_GT] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [anon_sym_STAR] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(94),
    [anon_sym_LT] = ACTIONS(94),
    [anon_sym_COLON_LT] = ACTIONS(94),
    [anon_sym_GT] = ACTIONS(94),
    [anon_sym_COLON_GT] = ACTIONS(94),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_COLON_LT_EQ] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_COLON_GT_EQ] = ACTIONS(96),
    [anon_sym_EQ_EQ] = ACTIONS(96),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(96),
    [sym__ISEQU] = ACTIONS(94),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(96),
    [anon_sym_DOT] = ACTIONS(96),
    [sym__LLBRK] = ACTIONS(96),
    [sym__LBRK] = ACTIONS(94),
    [aux_sym__stringconstant_token1] = ACTIONS(96),
    [aux_sym__stringconstant_token2] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_TRUE] = ACTIONS(94),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_FALSE] = ACTIONS(94),
    [sym__decimalsigned] = ACTIONS(94),
    [sym__decimaldigit] = ACTIONS(94),
    [sym__binary] = ACTIONS(96),
    [sym__hexadecimal] = ACTIONS(96),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(96),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(94),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(94),
    [anon_sym_SLASH_STAR] = ACTIONS(96),
    [sym__singlelinecomment] = ACTIONS(96),
  },
  [14] = {
    [aux_sym__tupledotnotation_repeat1] = STATE(14),
    [sym_identifier] = ACTIONS(98),
    [anon_sym_and] = ACTIONS(98),
    [anon_sym_or] = ACTIONS(98),
    [anon_sym_xor] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PLUS_PLUS] = ACTIONS(100),
    [anon_sym_DASH_DASH] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_LT_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT_GT] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_COLON_LT] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_COLON_GT] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_COLON_LT_EQ] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_COLON_GT_EQ] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(100),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(100),
    [sym__ISEQU] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(100),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(102),
    [sym__LLBRK] = ACTIONS(100),
    [aux_sym__stringconstant_token1] = ACTIONS(100),
    [aux_sym__stringconstant_token2] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(98),
    [anon_sym_TRUE] = ACTIONS(98),
    [anon_sym_false] = ACTIONS(98),
    [anon_sym_FALSE] = ACTIONS(98),
    [sym__decimalsigned] = ACTIONS(98),
    [sym__decimaldigit] = ACTIONS(98),
    [sym__binary] = ACTIONS(100),
    [sym__hexadecimal] = ACTIONS(100),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(100),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(98),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(98),
    [anon_sym_SLASH_STAR] = ACTIONS(100),
    [sym__singlelinecomment] = ACTIONS(100),
  },
  [15] = {
    [aux_sym__tupledotnotation_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_xor] = ACTIONS(105),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(105),
    [anon_sym_GT_GT] = ACTIONS(105),
    [anon_sym_LT_LT_LT] = ACTIONS(107),
    [anon_sym_GT_GT_GT] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_COLON_LT] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_COLON_GT] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_COLON_LT_EQ] = ACTIONS(107),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_COLON_GT_EQ] = ACTIONS(107),
    [anon_sym_EQ_EQ] = ACTIONS(107),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(107),
    [sym__ISEQU] = ACTIONS(105),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(92),
    [sym__LLBRK] = ACTIONS(107),
    [aux_sym__stringconstant_token1] = ACTIONS(107),
    [aux_sym__stringconstant_token2] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_TRUE] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_FALSE] = ACTIONS(105),
    [sym__decimalsigned] = ACTIONS(105),
    [sym__decimaldigit] = ACTIONS(105),
    [sym__binary] = ACTIONS(107),
    [sym__hexadecimal] = ACTIONS(107),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(107),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(105),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(105),
    [anon_sym_SLASH_STAR] = ACTIONS(107),
    [sym__singlelinecomment] = ACTIONS(107),
  },
  [16] = {
    [sym_identifier] = ACTIONS(98),
    [anon_sym_and] = ACTIONS(98),
    [anon_sym_or] = ACTIONS(98),
    [anon_sym_xor] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(100),
    [anon_sym_CARET] = ACTIONS(100),
    [anon_sym_AMP] = ACTIONS(100),
    [anon_sym_PLUS_PLUS] = ACTIONS(100),
    [anon_sym_DASH_DASH] = ACTIONS(100),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_LT_LT_LT] = ACTIONS(100),
    [anon_sym_GT_GT_GT] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_COLON_LT] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_COLON_GT] = ACTIONS(98),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_COLON_LT_EQ] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_COLON_GT_EQ] = ACTIONS(100),
    [anon_sym_EQ_EQ] = ACTIONS(100),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(100),
    [sym__ISEQU] = ACTIONS(98),
    [anon_sym_BANG_EQ] = ACTIONS(100),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(100),
    [sym__LLBRK] = ACTIONS(100),
    [aux_sym__stringconstant_token1] = ACTIONS(100),
    [aux_sym__stringconstant_token2] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(98),
    [anon_sym_TRUE] = ACTIONS(98),
    [anon_sym_false] = ACTIONS(98),
    [anon_sym_FALSE] = ACTIONS(98),
    [sym__decimalsigned] = ACTIONS(98),
    [sym__decimaldigit] = ACTIONS(98),
    [sym__binary] = ACTIONS(100),
    [sym__hexadecimal] = ACTIONS(100),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(100),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(98),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(98),
    [anon_sym_SLASH_STAR] = ACTIONS(100),
    [sym__singlelinecomment] = ACTIONS(100),
  },
  [17] = {
    [aux_sym__bitselectionbracket] = STATE(18),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_and] = ACTIONS(109),
    [anon_sym_or] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(111),
    [anon_sym_CARET] = ACTIONS(111),
    [anon_sym_AMP] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(111),
    [anon_sym_DASH_DASH] = ACTIONS(111),
    [anon_sym_LT_LT] = ACTIONS(109),
    [anon_sym_GT_GT] = ACTIONS(109),
    [anon_sym_LT_LT_LT] = ACTIONS(111),
    [anon_sym_GT_GT_GT] = ACTIONS(111),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_COLON_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_COLON_GT] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_COLON_LT_EQ] = ACTIONS(111),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_COLON_GT_EQ] = ACTIONS(111),
    [anon_sym_EQ_EQ] = ACTIONS(111),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(111),
    [sym__ISEQU] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(111),
    [sym__LLBRK] = ACTIONS(113),
    [aux_sym__stringconstant_token1] = ACTIONS(111),
    [aux_sym__stringconstant_token2] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_TRUE] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_FALSE] = ACTIONS(109),
    [sym__decimalsigned] = ACTIONS(109),
    [sym__decimaldigit] = ACTIONS(109),
    [sym__binary] = ACTIONS(111),
    [sym__hexadecimal] = ACTIONS(111),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(111),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(109),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(109),
    [anon_sym_SLASH_STAR] = ACTIONS(111),
    [sym__singlelinecomment] = ACTIONS(111),
  },
  [18] = {
    [aux_sym__bitselectionbracket] = STATE(18),
    [sym_identifier] = ACTIONS(115),
    [anon_sym_and] = ACTIONS(115),
    [anon_sym_or] = ACTIONS(115),
    [anon_sym_xor] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_PLUS_PLUS] = ACTIONS(117),
    [anon_sym_DASH_DASH] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_LT_LT_LT] = ACTIONS(117),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_COLON_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_COLON_GT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_COLON_LT_EQ] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_COLON_GT_EQ] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(117),
    [sym__ISEQU] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(117),
    [sym__LLBRK] = ACTIONS(119),
    [aux_sym__stringconstant_token1] = ACTIONS(117),
    [aux_sym__stringconstant_token2] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_TRUE] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_FALSE] = ACTIONS(115),
    [sym__decimalsigned] = ACTIONS(115),
    [sym__decimaldigit] = ACTIONS(115),
    [sym__binary] = ACTIONS(117),
    [sym__hexadecimal] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(117),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(115),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(115),
    [anon_sym_SLASH_STAR] = ACTIONS(117),
    [sym__singlelinecomment] = ACTIONS(117),
  },
  [19] = {
    [aux_sym__bitselectionbracket] = STATE(17),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_and] = ACTIONS(122),
    [anon_sym_or] = ACTIONS(122),
    [anon_sym_xor] = ACTIONS(122),
    [anon_sym_PIPE] = ACTIONS(124),
    [anon_sym_CARET] = ACTIONS(124),
    [anon_sym_AMP] = ACTIONS(124),
    [anon_sym_PLUS_PLUS] = ACTIONS(124),
    [anon_sym_DASH_DASH] = ACTIONS(124),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_LT_LT_LT] = ACTIONS(124),
    [anon_sym_GT_GT_GT] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [anon_sym_COLON_LT] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_COLON_GT] = ACTIONS(122),
    [anon_sym_LT_EQ] = ACTIONS(124),
    [anon_sym_COLON_LT_EQ] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(124),
    [anon_sym_COLON_GT_EQ] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(124),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(124),
    [sym__ISEQU] = ACTIONS(122),
    [anon_sym_BANG_EQ] = ACTIONS(124),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(124),
    [sym__LLBRK] = ACTIONS(113),
    [aux_sym__stringconstant_token1] = ACTIONS(124),
    [aux_sym__stringconstant_token2] = ACTIONS(124),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_TRUE] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_FALSE] = ACTIONS(122),
    [sym__decimalsigned] = ACTIONS(122),
    [sym__decimaldigit] = ACTIONS(122),
    [sym__binary] = ACTIONS(124),
    [sym__hexadecimal] = ACTIONS(124),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(124),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(122),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(122),
    [anon_sym_SLASH_STAR] = ACTIONS(124),
    [sym__singlelinecomment] = ACTIONS(124),
  },
  [20] = {
    [sym_identifier] = ACTIONS(126),
    [anon_sym_and] = ACTIONS(126),
    [anon_sym_or] = ACTIONS(126),
    [anon_sym_xor] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_CARET] = ACTIONS(128),
    [anon_sym_AMP] = ACTIONS(128),
    [anon_sym_PLUS_PLUS] = ACTIONS(128),
    [anon_sym_DASH_DASH] = ACTIONS(128),
    [anon_sym_LT_LT] = ACTIONS(126),
    [anon_sym_GT_GT] = ACTIONS(126),
    [anon_sym_LT_LT_LT] = ACTIONS(128),
    [anon_sym_GT_GT_GT] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [anon_sym_COLON_LT] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_COLON_GT] = ACTIONS(126),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [anon_sym_COLON_LT_EQ] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [anon_sym_COLON_GT_EQ] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(128),
    [sym__ISEQU] = ACTIONS(126),
    [anon_sym_BANG_EQ] = ACTIONS(128),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(128),
    [sym__LLBRK] = ACTIONS(128),
    [aux_sym__stringconstant_token1] = ACTIONS(128),
    [aux_sym__stringconstant_token2] = ACTIONS(128),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_TRUE] = ACTIONS(126),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_FALSE] = ACTIONS(126),
    [sym__decimalsigned] = ACTIONS(126),
    [sym__decimaldigit] = ACTIONS(126),
    [sym__binary] = ACTIONS(128),
    [sym__hexadecimal] = ACTIONS(128),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(128),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(126),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(126),
    [anon_sym_SLASH_STAR] = ACTIONS(128),
    [sym__singlelinecomment] = ACTIONS(128),
  },
  [21] = {
    [sym_identifier] = ACTIONS(115),
    [anon_sym_and] = ACTIONS(115),
    [anon_sym_or] = ACTIONS(115),
    [anon_sym_xor] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(117),
    [anon_sym_CARET] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(117),
    [anon_sym_PLUS_PLUS] = ACTIONS(117),
    [anon_sym_DASH_DASH] = ACTIONS(117),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_GT_GT] = ACTIONS(115),
    [anon_sym_LT_LT_LT] = ACTIONS(117),
    [anon_sym_GT_GT_GT] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(115),
    [anon_sym_DASH] = ACTIONS(115),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(115),
    [anon_sym_LT] = ACTIONS(115),
    [anon_sym_COLON_LT] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_COLON_GT] = ACTIONS(115),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_COLON_LT_EQ] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_COLON_GT_EQ] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(117),
    [sym__ISEQU] = ACTIONS(115),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(117),
    [sym__LLBRK] = ACTIONS(117),
    [aux_sym__stringconstant_token1] = ACTIONS(117),
    [aux_sym__stringconstant_token2] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_TRUE] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_FALSE] = ACTIONS(115),
    [sym__decimalsigned] = ACTIONS(115),
    [sym__decimaldigit] = ACTIONS(115),
    [sym__binary] = ACTIONS(117),
    [sym__hexadecimal] = ACTIONS(117),
    [sym__whitespace] = ACTIONS(3),
    [sym__lineterminator] = ACTIONS(117),
    [aux_sym__lineterminatorsequence_token1] = ACTIONS(115),
    [aux_sym__lineterminatorsequence_token2] = ACTIONS(115),
    [anon_sym_SLASH_STAR] = ACTIONS(117),
    [sym__singlelinecomment] = ACTIONS(117),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(135), 1,
      sym_overloadname,
    STATE(15), 1,
      sym__tuplearraynotation,
    STATE(19), 1,
      sym__tupledotnotation,
    STATE(22), 1,
      aux_sym_start_repeat3,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(2), 3,
      aux_sym__exspression,
      sym_binaryexpression,
      sym__bitselectionnotation,
    STATE(8), 3,
      sym__stringconstant,
      sym__numericalconstant,
      sym__boolean,
    ACTIONS(138), 4,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
    ACTIONS(141), 6,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
  [50] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_overloadname,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__tuplearraynotation,
    STATE(19), 1,
      sym__tupledotnotation,
    STATE(22), 1,
      aux_sym_start_repeat3,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(2), 3,
      aux_sym__exspression,
      sym_binaryexpression,
      sym__bitselectionnotation,
    STATE(8), 3,
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
  [100] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym__singlelinecomment,
    ACTIONS(148), 1,
      sym__lineterminator,
    ACTIONS(150), 2,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
    STATE(25), 2,
      sym__lineterminatorsequence,
      aux_sym_start_repeat2,
    STATE(35), 3,
      sym__comment,
      sym__multilinecomment,
      aux_sym_start_repeat1,
    ACTIONS(130), 6,
      ts_builtin_sym_end,
      sym_overloadname,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
    ACTIONS(146), 7,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
  [143] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(156), 1,
      sym__lineterminator,
    ACTIONS(162), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      sym__singlelinecomment,
    ACTIONS(159), 2,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
    STATE(25), 2,
      sym__lineterminatorsequence,
      aux_sym_start_repeat2,
    STATE(35), 3,
      sym__comment,
      sym__multilinecomment,
      aux_sym_start_repeat1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      sym_overloadname,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
    ACTIONS(154), 7,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
  [186] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(15), 1,
      sym__tuplearraynotation,
    STATE(19), 1,
      sym__tupledotnotation,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(7), 3,
      aux_sym__exspression,
      sym_binaryexpression,
      sym__bitselectionnotation,
    STATE(8), 3,
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
  [227] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(15), 1,
      sym__tuplearraynotation,
    STATE(19), 1,
      sym__tupledotnotation,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(6), 3,
      aux_sym__exspression,
      sym_binaryexpression,
      sym__bitselectionnotation,
    STATE(8), 3,
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
  [268] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(15), 1,
      sym__tuplearraynotation,
    STATE(19), 1,
      sym__tupledotnotation,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(5), 3,
      aux_sym__exspression,
      sym_binaryexpression,
      sym__bitselectionnotation,
    STATE(8), 3,
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
  [309] = 9,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(15), 1,
      sym__tuplearraynotation,
    STATE(19), 1,
      sym__tupledotnotation,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(4), 3,
      aux_sym__exspression,
      sym_binaryexpression,
      sym__bitselectionnotation,
    STATE(8), 3,
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
  [350] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      sym_overloadname,
      aux_sym__stringconstant_token1,
      aux_sym__stringconstant_token2,
      sym__binary,
      sym__hexadecimal,
      sym__lineterminator,
      anon_sym_SLASH_STAR,
      sym__singlelinecomment,
    ACTIONS(154), 9,
      sym_identifier,
      anon_sym_true,
      anon_sym_TRUE,
      anon_sym_false,
      anon_sym_FALSE,
      sym__decimalsigned,
      sym__decimaldigit,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
  [376] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(16), 1,
      sym__tuplearraynotation,
    STATE(9), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(8), 3,
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
  [409] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      sym__RRBRK,
    STATE(38), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(8), 3,
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
  [442] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(40), 2,
      sym__lhsvarname,
      sym_constant,
    STATE(8), 3,
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
  [472] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(27), 1,
      sym__lineterminator,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym__singlelinecomment,
    ACTIONS(29), 2,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
    STATE(24), 2,
      sym__lineterminatorsequence,
      aux_sym_start_repeat2,
    STATE(35), 3,
      sym__comment,
      sym__multilinecomment,
      aux_sym_start_repeat1,
  [498] = 7,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(31), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      sym__lineterminator,
    ACTIONS(178), 1,
      sym__singlelinecomment,
    STATE(30), 1,
      sym__lineterminatorsequence,
    ACTIONS(176), 2,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
    STATE(36), 3,
      sym__comment,
      sym__multilinecomment,
      aux_sym_start_repeat1,
  [523] = 6,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(180), 1,
      sym__lineterminator,
    ACTIONS(184), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      sym__singlelinecomment,
    ACTIONS(182), 2,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
    STATE(36), 3,
      sym__comment,
      sym__multilinecomment,
      aux_sym_start_repeat1,
  [545] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(192), 2,
      aux_sym__lineterminatorsequence_token1,
      aux_sym__lineterminatorsequence_token2,
    ACTIONS(190), 3,
      sym__lineterminator,
      anon_sym_SLASH_STAR,
      sym__singlelinecomment,
  [558] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(194), 1,
      sym__RRBRK,
  [565] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(196), 1,
      anon_sym_STAR_SLASH,
  [572] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(198), 1,
      sym__RBRK,
  [579] = 2,
    ACTIONS(200), 1,
      sym__whitespace,
    ACTIONS(202), 1,
      aux_sym__multilinecomment_token1,
  [586] = 2,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(22)] = 0,
  [SMALL_STATE(23)] = 50,
  [SMALL_STATE(24)] = 100,
  [SMALL_STATE(25)] = 143,
  [SMALL_STATE(26)] = 186,
  [SMALL_STATE(27)] = 227,
  [SMALL_STATE(28)] = 268,
  [SMALL_STATE(29)] = 309,
  [SMALL_STATE(30)] = 350,
  [SMALL_STATE(31)] = 376,
  [SMALL_STATE(32)] = 409,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 472,
  [SMALL_STATE(35)] = 498,
  [SMALL_STATE(36)] = 523,
  [SMALL_STATE(37)] = 545,
  [SMALL_STATE(38)] = 558,
  [SMALL_STATE(39)] = 565,
  [SMALL_STATE(40)] = 572,
  [SMALL_STATE(41)] = 579,
  [SMALL_STATE(42)] = 586,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__exspression, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exspression, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__exspression, 2), SHIFT_REPEAT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__exspression, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__exspression, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binaryexpression, 3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_binaryexpression, 3), SHIFT(29),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_binaryexpression, 3), SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binaryexpression, 3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_binaryexpression, 3), SHIFT(27),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_binaryexpression, 3), SHIFT(27),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_binaryexpression, 3), SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuplearraynotation, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuplearraynotation, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuplearraynotation, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuplearraynotation, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 2), SHIFT_REPEAT(33),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tupledotnotation, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tupledotnotation, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuplearraynotation_repeat1, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tupledotnotation_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tupledotnotation_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tupledotnotation_repeat1, 2), SHIFT_REPEAT(31),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tupledotnotation, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tupledotnotation, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitselectionnotation, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitselectionnotation, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bitselectionbracket, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bitselectionbracket, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__bitselectionbracket, 2), SHIFT_REPEAT(32),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitselectionnotation, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitselectionnotation, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__bitselectionbracket, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__bitselectionbracket, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat3, 2),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat3, 2), SHIFT_REPEAT(9),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat3, 2), SHIFT_REPEAT(34),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat3, 2), SHIFT_REPEAT(8),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat3, 2), SHIFT_REPEAT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat3, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat2, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat2, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat2, 2), SHIFT_REPEAT(25),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_start_repeat2, 2), SHIFT_REPEAT(25),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat2, 2), SHIFT_REPEAT(41),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat2, 2), SHIFT_REPEAT(35),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_start_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(41),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(36),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multilinecomment, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multilinecomment, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
