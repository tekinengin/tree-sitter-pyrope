module.exports = grammar({
  name: 'pyrope',

  extras: $ => [],

  rules: {

    start: $ => repeat(choice(
      $.comment,
      $.lineterminator,
      $.lineterminatorsequence,
      $._whitespace,
      $.numericalconstant
    )),


/****************************NUMERIC CONSTANTS*****************************/    

    numericalconstant: $ => choice(
      $.boolean,
      $.hexadecimal,
      $.binary,
      $.decimalsigned,
      $.decimaldigit
    ),
  
    boolean: $ => choice(
      'true',
      'TRUE',
      'false',
      'FALSE'
    ),

    decimalsigned: $ => seq(
      $.decimaldigit,
      choice('s', 'u'),
      optional(seq(
        /[0-9_]+/,
        choice('bits', 'bit')
      )),
    ),

    decimaldigit: $ => choice(
      /\?/,
      /[-]?[0-9]{1}[0-9_]*/
    ),

    binary: $ => seq(
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

    hexadecimal: $ => seq(
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
      $.multilinecomment,
      $.singlelinecomment
    ),

    multilinecomment: $ => seq(
      '/*',
      /[a-zA-Z0-9 \s]*/,
      '*/'
    ),

    singlelinecomment: $ => seq(
      '//',
      /[a-zA-Z0-9 ]*/
    ),

  }
});

