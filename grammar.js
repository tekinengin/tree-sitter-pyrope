const PREC = {
  logical: 10,
  relational: 11,
  additive: 12,
  bitwise: 13,
  multiplicative: 14,
  unary: 15,
  paranthesis: 1,
}

module.exports = grammar({
  name: 'pyrope',

  //word: $ => $.identifier,

  rules: {
    // TODO: add the actual grammar rules
    start: $ => seq(
      optional($._codeblocks),
      //$._SS
    ),

    _codeblocks: $ => seq(
      $._codeblockint,
      repeat(seq(
        $._EOS,
        $._codeblockint))
    ),

    _codeblockint: $ => seq(
      //$._SS,
      choice(
        $.ifstatement,
        $.assignmentexpression) // in progress)
    ),

    _scopedeclaration: $ => seq(
      $._scope,
      $,_LBRACE,
      chioce($._EOS),
      //$._SS,
      optional($._scopebody),
      choice($._EOS),
      //$._SS,
      $._RBRACE,
      optional($._scopeelse) // SS
    ),

    _scopeelse: $ => seq(
      $._ELSE,
      //$._S,
      $._LBRACE,
      choice($._EOS),
      //$._SS,
      $._scopebody,
      choice($._EOS),
      //$._SS,
      $._RBRACE
    ),

    assignmentexpression: $ => seq(
      choice(
        //$._overloadnotation,
        $._lhsexpression),
      //$._SS,
      $.assignmentoperator,
      //$._SS,
      choice($.logicalexpression) // add fcallimplicit
    ),

    logicalexpression: $ => prec(PREC.logical, seq(
      $.relationalexpression,
      optional(repeat(seq(
        seq(
          //$._SS,
          choice('or', 'and', 'xor'),
          //$._S
        ),
        $.relationalexpression)))
    )),

    relationalexpression: $ => prec.left(PREC.relational, seq(
      $.additiveexpression,
      optional(repeat(seq(
        seq(
          //$._SS,
          choice($._EQUEQU, $._ISEQU, $._BANGEQU, $._LE, $._GE, $._LT, $._GT),
          //$._S
          ),
        $.additiveexpression)))
    )),    

    additiveexpression: $ => prec.left(PREC.additive, seq(
      $.bitwiseexpression,
      optional(repeat(seq(choice(
        seq(
          //$._SS,
          choice('++', '+', '-', '<<', '>>', '**'), // add overloadnotation
          //$._S
          ),
        $.ddot),
        $.bitwiseexpression))),
      optional($.ddot)
    )),

    bitwiseexpression: $ => prec(PREC.bitwise, seq(
      $.multiplicativeexpression,
      optional(repeat(seq(
        seq(
          //$._SS,
          choice('|', '&', '^'),
          //$._S
          ),
        $.multiplicativeexpression)))
    )),    

    multiplicativeexpression: $ => prec.left(PREC.multiplicative, seq(
      $.unaryexpression,
      optional(repeat(seq(
        seq(
          //$._SS,
          choice('*', '/'),
          //$._S
          ),
        $.unaryexpression)))
    )), 

    unaryexpression: $ => prec(PREC.unary, seq(
      optional(choice('!', '-')),
      $._factor
    )),

    _factor: $ => choice(
      prec.left(PREC.paranthesis,seq(
        $._LPAR,
        //$._SS,
        $.logicalexpression,
        //$._SS,
        $._RPAR)), // optional($._bitselectionbracket) add to seq
      $._rhsexpression
    ),

    _tuplebynotation: $ => seq($._BY, $._lhsvarname), 

    _lhsexpression: $ => seq(
      optional('\\'),
      choice($._tuplenotation) // rangenotation will be added
    ), 

    _rhsexpression: $ => prec.left(choice(
      $._lhsexpression)), // fcallexplicit, scopedeclaration will be added

    _tuplenotation: $ => choice(
      seq(
        $._LPAR,
        choice(
          seq(
            choice($.assignmentexpression, $.logicalexpression),
            //$._S,
            optional(repeat(seq($._COMMA, choice($.assignmentexpression, $.logicalexpression)))), // $._SS 
            optional($._COMMA),
            $._RPAR,
            optional(choice($._tuplebynotation))), // will add bitselectionbracket //will add functionalpipe as option
          $._RPAR)),
      $._bitselectionnotation
    ), 

    /*_bitselectionbracket: $ => optional(repeat(seq(
      $._LBRK,
      $._LBRK,
      optional($._logicalexpression),
      $._RBRK,
      $._RBRK
    ))),*/

    _bitselectionnotation: $ => seq(
      $._tupledotnotation // will add bitselectionbracket
    ),

    /*_tupledotdot: $ => optional(repeat(seq(
      $.dot, 
      $._tuplearraynotation
    ))),*/

    _tupledotnotation: $ => seq(
      $._tuplearraynotation, // $._tupledotdot be added
    ),

    /*_tuplearraybracket: $ => optional(repeat(seq(
      $._LBRK,
      $._logicalexpression,
      $._RBRK
    ))),*/

    _tuplearraynotation: $ => seq(
      $._lhsvarname, // be added $._tuplearraybracket
    ),

    _lhsvarname: $ => prec.left(choice(
      $.identifier,
      $._constant
    )),

    _constant: $ => choice(
      $._stringconstant,
      $._numericalconstant
    ),

    /*_overloadnotation: $ => seq(
      $.dot,
      $.dot,
      //$._overloadname,
      $.dot,
      $.dot
    ),

    _overloadexception: $ => choice(
      $._lineterminator,
      $._whitespace,
      $.dot,
      '#', ';', ',', '=', '(', ')', '[', ']', '{', '}', '/', '?', '!', '|', "'", '"'
    ),*/

    /*_identifier: $ => seq(
      //optional($._idprefix),
      repeat1(/[a-zA-Z]/) 
      //$._idnondigit,
      //repeat($._idchar),
      //optional('?')
    ),*/
    identifier: $ => repeat1(/[a-zA-Z]/),

    /*_idprefix: $ => choice(
      '!', '-'
    ),*/

    _stringconstant: $ => choice(
      seq('"', repeat($._doublestring), '"'),
      seq("'", repeat($._singlestring), "'")
    ),

    _numericalconstant: $ => choice(
      $._boolean,
      //$._hexadecimal,
      //$._binary,
      //$._decimalsigned,
      $.decimaldigit
    ),

    _boolean: $ => choice(
      'true',
      'TRUE',
      'false',
      'FALSE'
    ),

    assignmentoperator: $ => choice(
      $._EQU,
      $._AS,
      $._TPLUSEQU,
      $._STAREQU,
      $._PLUSEQU,
      $._MINUSEQU,
      $._LEFTEQU,
      $._RIGHTEQU
    ),

    /*_SS: $ => optional(choice(
        seq(repeat1($._whitespace), optional($._comment, $._lineterminatorsequence))
        $._lineterminatorsequence,
        $._comment,
    )), 

    _S: $ => optional(choice(
      seq(repeat1($._whitespace), optional($._multilinecommentnolineterminator)),
      $._multilinecommentnolineterminator
    )),*/

    //_S: $ => repeat(choice($._whitespace, $._multilinecomment)), // take a closer look
    //_SS: $ => repeat(choice($._whitespace, $._lineterminatorsequence, $._comment)), 

    _EOS: $ => choice(
      seq(choice(repeat1($._SEMICOLON))), // $._SS to the begiing // $._EOF
      seq(optional($._singlelinecomment), $._lineterminatorsequence) // $._S to the beginning
    ),

    //_EOF: $ => '',

    _comment: $ => choice(
      $._multilinecomment,
      $._singlelinecomment
    ),

    _SEMICOLON: $ => seq(
      //repeat($._whitespace),
      ';'
      //repeat($._whitespace)
    ),

    _FUNCPIPE: $ => seq(
      '|',
      '>'
      //repeat($._whitespace)
    ),

    _LBRK: $ => seq('['),
    _RBRK: $ => seq(']'),
    _LPAR: $ => seq('('),
    _RPAR: $ => seq(')'), // $._S to the sequence
    _LBRACE: $ => seq('{'),
    _RBRACE: $ => seq('}'),

    _LT: $ => choice ('<', ':<'),
    _GT: $ => choice ('>', ':>'),
    _LE: $ => choice ('<=', ':<='),
    _GE: $ => choice ('>=', ':>='),

    _EQUEQU: $ => choice('==',':=='),
    _ISEQU: $ => seq(
      'is'
      //repeat($._whitespace)
    ),
    
    _BANGEQU: $ => seq(
      choice('!=', ':!=')
      //repeat($._whitespace)
    ),

    _EQU: $ => seq(
      choice('=', ':=')
      //repeat($._whitespace)
    ),

    _AS: $ => seq(
      'as'
      //repeat($._whitespace)
    ),

    _IN: $ => seq(
      //repeat($._whitespace),
      'in'
      //repeat1($._whitespace)
    ), 

    _TPLUSEQU: $ => seq('++', $._EQU),
    _STAREQU: $ => seq('*', $._EQU),

    _DIVEQU: $ => seq(
      '/='
      //repeat($._whitespace)
    ),

    _MODEQU: $ => seq(
      '%',
      '='
      //repeat($._whitespace)
    ),

    _PLUSEQU: $ => seq('+', $._EQU),
    _MINUSEQU: $ => seq('-', $._EQU),
    _LEFTEQU: $ => seq('<<', $._EQU),
    _RIGHTEQU: $ => seq('>>', $._EQU),

    _COMMA:$ => seq(
      //$._SS,
      repeat1(seq(',')) //  $._S to be added
    ),

    _BY: $ => seq(
      //repeat($._whitespace),
      'by'
      //repeat($._whitespace)
    ),

    /*_IF: $ => seq(
      'if',
      repeat('$._whitespace')
    ),

    _UNIQUEIF: $ => seq(
      'unique if',
      repeat($._whitespace)
    ),

    _ELIF: $ => seq(
      'elif',
      repeat($._whitespace)
    ),

    _ELSE: $ => seq(
      'else',
      repeat($._whitespace)
    ),

    _FOR: $ => seq(
      'for',
      repeat($._whitespace)
    ),

    _WHILE: $ => seq(
      'while',
      repeat($._whitespace)
    ),

    _TRY: $ => seq(
      'try',
      repeat($._whitespace)
    ),

    _WHEN: $ => seq(
      'when',
      repeat($._whitespace)
    ),

    _ASSERTION: $ => seq(
      'I',
      repeat($._whitespace)
    ),

    _RETURN: $ => seq('return'), // to be added $._S

    _PUNCH: $ => seq(
      'punch',
      repeat($._whitespace)
    ),*/

    //_overloadname: $ => optional('@'), // TO BE IMPLEMENTED

    /*_idnondigit: $ => choice(
      /[a-z]/,
      /[A-Z]/,
      //'%',
      //'$',
      //'#'
    ),

    _idchar: $ => choice(
      /[a-z]/,
      /[A-Z]/,
      /[0-9]/
    ),*/

    _doublestring: $ => /[a-zA-Z0-9][^"]/,  // To be Implemented
    _singlestring: $ => /[a-zA-Z0-9][^']/,  // To be implemented

    /*_hexadecimal: $ => seq(
      '0x',
      repeat1($._hexdigit) // To be Implemented an optional
    ),*/

    /*_binary: $ => seq(
      '0b',
      repeat1($._binarydigit) // To be Implemetned an optional
    ),*/

    /*_decimalsigned: $ => seq(
      $._decimaldigit,
      choice('s', 'u'),
      optional(seq(
        repeat1(choice(/[0-9]/, '_')), // probably wrong
        choice('bits', 'bit')
        ))
    ),*/

    decimaldigit: $ => prec.left(choice(
      seq(
        /[0-9]+/
        //optional('-'),
        ///[0-9]/,
        //repeat(choice(/[0-9]/, '_'))) // probably wrong
      //'?'
    ))),

    /*_binarydigit: $ => repeat1(choice(
      //'"',
      //'?',
      /[0-1]/,
      '_'
    )), 

    _hexdigit: $ => repeat1(choice(
      //'"',
      //'?',
      /[A-F]/,
      /[a-f]/,
      /[0-9]/
    )),*/

    /*_whitespace: $ => choice(
      ' ',
      String.fromCharCode(parseInt('9', 16)),
      String.fromCharCode(parseInt('B', 16)),
      String.fromCharCode(parseInt('C', 16)),
      String.fromCharCode(parseInt('A', 16)),
      String.fromCharCode(parseInt('FEFF', 16))
    ),*/

    _lineterminator: $ => choice(
      ' ',
      String.fromCharCode(parseInt('A', 16)),
      String.fromCharCode(parseInt('D', 16)),
      String.fromCharCode(parseInt('2028', 16)),
      String.fromCharCode(parseInt('2029', 16))
    ),    

    _lineterminatorsequence: $ => choice(
      ' ',
      String.fromCharCode(parseInt('A', 16)),
      String.fromCharCode(parseInt('2028', 16)),
      String.fromCharCode(parseInt('2029', 16)),
      seq(
        String.fromCharCode(parseInt('D', 16)),
        optional(String.fromCharCode(parseInt('A', 16))))
    ),

    _multilinecomment: $ => seq(
      '/*',
      /[a-zA-Z0-9]+/,
      '*/'
    ),

    _singlelinecomment: $ => seq(
      '//', 
      /[a-zA-Z0-9]+/ // ADD line terminator as exception
    ), 


    /*inc: $ => '++',
    add: $ => '+',
    minus: $ => '-',
    shftl: $ => '<<',
    shftr: $ => '>>',
    power: $ => '**',

    mltp: $ => '*',
    div: $ => '/',

    or: $ => 'or',
    and: $ => 'and',
    xor: $ => 'xor',

    bwiseor: $ => '|',
    bwiseand: $ => '&',
    bwisexor: $ => '^',

    not: $ => prec(PREC.unary,'!'),
    neg: $ => prec(PREC.unary,'-'),*/

    ddot: $ => '..',
    dot: $ => '.'

  }
});

