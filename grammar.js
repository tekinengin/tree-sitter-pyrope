module.exports = grammar({
  name: 'pyrope',

  extras: $ => [$._whitespace],

  rules: {

    start: $ => repeat(choice(
      $.lineterminator,
      $.lineterminatorsequence,
      //$._whitespace,
      $.comment,
      //$._lhsvarname,
      $.overloadname,
      $._tupledotnotation
    )),

/**************************EXSPRESSIONS***************************/
    
    exspression: $ => choice(

    ),



    _lhsvarname: $ => choice($.identifier, $.constant),


    /*bitselectionnotation: $ => seq(
      $._tupledotnotation,
      repeat(seq($.LBRK, $.LBRK, $._lhsvarname, $.RBRK, $.RBRK))
    ),*/

/************************* TUPLE NOTATION ***********************/

    _tupledotnotation: $ => seq(
      $._tuplearraynotation,
      repeat(seq('.', $._tuplearraynotation))
    ),

    _tuplearraynotation: $ => seq(
      $._lhsvarname, 
      repeat(seq($.LBRK, $._lhsvarname, $.RBRK)) // decimal to expression
    ),
/*************************** MISC *********************************/



    RBRK: $ => ']',
    LBRK: $ => '[',

/*************************** OVERLOAD *****************************/

    overloadname: $ => /\.\.[^\n\r\u2028\u2029\s#;,={}()/?!|'"]+\.\./,

/***************************IDENTIFIER*****************************/
    
    identifier: $ => /[!-]?[a-zA-Z%$#]{1}[a-zA-Z0-9]*[?]?/,
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
    
    _whitespace: $ => /[ \n\t\u000B\u000C\uFEFF]+/, // /n ?????
    lineterminator: $ => /[\n\r\u2028\u2029]+/,
    lineterminatorsequence: $ => choice(
      /[\n\u2028\u2029]+/,
      /[\r][\n]?/,
    ),

/****************************COMMENT*****************************/
    comment: $ => choice(
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

    _singlelinecomment: $ => /\/\/((.)[^\n\r\u2028\u2029])*/,

  }
});