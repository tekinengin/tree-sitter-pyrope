const PREC = {
  unary : 20,
  mult : 19,
  addtv : 19,
  addplusmns : 18,
  comparators : 17,
  logical : 16,
}

module.exports = grammar({
  name: 'pyrope',

  extras: $ => [$._whitespace],

  word: $ => $.identifier,

  //conflicts: $ => [[$.relationalexpression],[$.logicalexpression],[$.binaryexpression]],
  conflicts: $ => [[$.binaryexpression]],

  rules: {

    start: $ => repeat(prec.left(seq(
      
      choice(
        //$._lineterminator,
        //$._lineterminatorsequence,
        $.overloadname,
        //$.bitselectionnotation,
        $._exspression
      ),
      //repeat1(choice($._lineterminatorsequence, $._lineterminator, $._comment))
      repeat1(seq(repeat($._comment), choice($._lineterminatorsequence, $._lineterminator)))
    ))),

/**************************EXSPRESSIONS***************************/
    
    _exspression: $ => repeat1(choice(
      //$.logicalexpression,
      //$.relationalexpression,
      //$.binaryexpression,
      $.binaryexpression,
      $._bitselectionnotation
    )),

    /*logicalexpression: $ => prec(PREC.logical,seq(
      $._exspression,
      choice('and', 'or', 'xor'),
      $._exspression
    )),

    relationalexpression: $ => prec(PREC.comparators,seq(
      $._exspression,
      choice($._EQUEQU, $._ISEQU, $._BANGEQU, $._LE, $._GE, $._LT, $._GT),
      $._exspression
    )),*/

    binaryexpression: $ => choice(
      prec(PREC.logical,seq(
        $._exspression,
        choice('and', 'or', 'xor'),
        $._exspression)),
      prec(PREC.comparators,seq(
        $._exspression,
        choice($._EQUEQU, $._ISEQU, $._BANGEQU, $._LE, $._GE, $._LT, $._GT),
        $._exspression)),
      prec(PREC.addtv, seq(
        $._exspression, 
        choice('|', '^', '&','++', '--', '<<', '>>', '<<<', '>>>'),
        $._exspression)),
      prec.left(PREC.addplusmns, seq(
        $._exspression, 
        choice('+', '-'),
        $._exspression)),
      prec(PREC.mult, seq(
        $._exspression, 
        choice('*', '/'),
        $._exspression)),
    ),

















/************************ OPERATORS ******************************/

    _LT: $ => choice ('<', ':<'),
    _GT: $ => choice ('>', ':>'),
    _LE: $ => choice ('<=', ':<='),
    _GE: $ => choice ('>=', ':>='),

    _EQUEQU: $ => choice('==',':=='),
    _ISEQU: $ => 'is',
    
    _BANGEQU: $ => choice('!=', ':!='),

/************************ END OF STATEMENT ***********************/

  /*EOS:  $ => choice(
    seq(optional($.SS), repeat($.SEMICOLON)),
    seq(optional($.S), optional($._singlelinecomment), $.lineterminatorsequence)
  ),

  SS: $ => repeat1(choice(
    $.lineterminatorsequence,
    $.comment
  )),

  S: $ => repeat1(choice(
    $._multilinecomment  //????
  )),*/




    
/************************* TUPLE NOTATION ***********************/

    _bitselectionnotation: $ => seq($._tupledotnotation, optional($._bitselectionbracket)),
    _bitselectionbracket: $ => repeat1(seq($._LLBRK, optional($._lhsvarname), $._RRBRK)),

    _tupledotnotation: $ => seq(
      $._tuplearraynotation,
      repeat(seq('.', $._tuplearraynotation))
    ),

    _tuplearraynotation: $ => seq(
      $._lhsvarname, 
      repeat(seq($._LBRK, $._lhsvarname, $._RBRK)) // decimal to expression
    ),

    _lhsvarname: $ => choice($.identifier, $.constant),

/*************************** MISC *********************************/
    _LLBRK: $ => '[[',
    _RRBRK: $ => ']]',
    _LBRK: $ => '[',
    _RBRK: $ => ']',
    _SEMICOLON: $ => ';',

/*************************** OVERLOAD *****************************/

    overloadname: $ => /\.\.[^\n\r\u2028\u2029\s#;,={}()/?!|'"]+\.\./, // [] will be added

/***************************IDENTIFIER*****************************/
    
    identifier: $ => /[!_]?[a-zA-Z%$#]{1}[a-zA-Z0-9]*[?]?/,
    //idprefix: $ => /[!-]{1}/,
    //idnondigit: $ => /[a-zA-Z%$#]{1}/,
    //idchar: $ => /[a-zA-Z0-9]{1}/,

/****************************CONSTANTS*****************************/    

    constant: $ => choice($._stringconstant, $._numericalconstant),

    _stringconstant: $ => choice(
      /'(.*[^"\n\r\u2028\u2029])'/,
      /"(.*[^'\n\r\u2028\u2029])"/
    ),

    _numericalconstant: $ => choice(
      $._boolean,
      $._hexadecimal,
      $._binary,
      $._decimalsigned,
      $._decimaldigit
    ),
  
    _boolean: $ => choice(
      'true',
      'TRUE',
      'false',
      'FALSE'
    ),

    /*_decimalsigned: $ => seq(
      $._decimaldigit,
      seq(choice('s', 'u'),
      optional(seq(
        /[0-9_]+/,
        choice('bits', 'bit')
      ))),
    ),*/

    _decimalsigned: $ => /(\?)|([-]?[0-9]{1}[0-9_]*)(s|u)?([0-9_]+(bit){1}s?)?/,

    /*_decimaldigit: $ => choice(
      /\?/,
      /[-]?[0-9]{1}[0-9_]*/
    //),

    _decimaldigit: $ => /(\?)|([-]?[0-9]{1}[0-9_]*)/,

    _binary: $ => /0b["?0-1_]+(s|u)?(["?0-9_]+(bit){1}s?)?/,

    /*_binary: $ => seq(
      '0b',
      $._binarydigit,
      optional(seq(
        choice('s', 'u'),
        optional(seq( 
          /["?0-9_]+/, 
          choice('bits', 'bit')
        )),
      ))
    ), 

    _binarydigit: $ => /["?0-1_]+/,*/

    _hexadecimal: $ => /0x["?A-Fa-f0-9_]+(s|u)?(["?0-9_]+(bit){1}s?)?/,

    /*_hexadecimal: $ => seq(
      '0x',
      $._hexdigit,
      optional(seq(
        choice('s', 'u'),
        optional(seq(
          /["?0-9_]+/, // only " works
          choice('bits', 'bit')
        )),
      ))
    ),

    _hexdigit: $ => /["?A-Fa-f0-9_]+/,*/


/****************************LINE TERMINATOR*****************************/
    
    _whitespace: $ => /[ \t\u000B\u000C\uFEFF]+/, // /n ?????
    _lineterminator: $ => /[\n\r\u2028\u2029]+/,
    _lineterminatorsequence: $ => choice(
      /[\n\u2028\u2029]+/,
      /[\r][\n]?/,
    ),

/****************************COMMENT*****************************/
    _comment: $ => choice(
      $._multilinecomment,
      $._singlelinecomment
    ),

    //_multilinecomment: $ => /\/\*((.|\s)*?)\*\//, // is supposed to give */*/

    _multilinecomment: $ => seq( //DONT GIVE  * and / is not supported in the comment body
      '/*',
      /((.|\s)[^\*\/]*)/,
      '*/'
    ),

    /*_singlelinecomment: $ => seq(
      '//',
      /[\w\d ]*/
    //),*/

    _singlelinecomment: $ => /\/\/([^\n\r\u2028\u2029])*/,

  }
});