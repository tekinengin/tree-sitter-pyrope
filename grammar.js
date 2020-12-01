module.exports = grammar({
  name: 'pyrope',

  extras: $ => [],

  rules: {

    start: $ => repeat(choice(
      $.comment,
      $.lineterminator,
      $.lineterminatorsequence,
      $._whitespace,
      $.lhsvarname
    )),

    lhsvarname: $ => choice($.identifier, $.constant),

/***************************IDENTIFIER*****************************/
    
    identifier: $ => /[!-]?[a-zA-Z%$#]{1}[a-zA-Z0-9]*[?]?/,
    //idprefix: $ => /[!-]{1}/,
    //idnondigit: $ => /[a-zA-Z%$#]{1}/,
    //idchar: $ => /[a-zA-Z0-9]{1}/,

/****************************CONSTANTS*****************************/    

    constant: $ => choice($._stringconstant, $._numericalconstant),

    _stringconstant: $ => choice(
      /'(.*[^'\n\r\u2028\u2029])'/,
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

    _decimalsigned: $ => seq(
      $._decimaldigit,
      choice('s', 'u'),
      optional(seq(
        /[0-9_]+/,
        choice('bits', 'bit')
      )),
    ),

    _decimaldigit: $ => choice(
      /\?/,
      /[-]?[0-9]{1}[0-9_]*/
    ),

    _binary: $ => seq(
      '0b',
      $._binarydigit,
      optional(seq(
        choice('s', 'u'),
        optional(seq( 
          /["?0-9_]+/, // only " works
          choice('bits', 'bit')
        )),
      ))
    ), 

    _binarydigit: $ => /["?0-1_]+/,

    _hexadecimal: $ => seq(
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

    _hexdigit: $ => /["?A-Fa-f0-9_]+/,


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

    _multilinecomment: $ => seq(
      '/*',
      /[\w\d\s]*/,
      '*/'
    ),

    _singlelinecomment: $ => seq(
      '//',
      /[\w\d ]*/
    ),

  }
});