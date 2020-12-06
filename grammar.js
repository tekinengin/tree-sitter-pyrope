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

  conflicts: $ => [
    [$.binaryoperator],
    [$._additiveoperator],
    [$.tupleconcat],
    [$.tupleconcat, $._additiveoperator],
  ],

  rules: {

    start: $ => optional($._codeblocks),

    _codeblocks: $ => repeat1(seq(
      $._statement,
      repeat(choice($._lineterminatorsequence, $._lineterminator, $._SEMICOLON))
      )), 

/**************************CODE BLOCK INSTRUCTIONS*****************************/
    _statement: $ => seq(
      //repeat($._comment),
      choice(
        $.ifstatement,
        $.whilestatement,
        $.forstatement,
        $.assignmentexpression,
        $.assertionstatement
        ),
      //repeat($._comment)
    ),

    ifstatement: $ => seq(
      'if',
      $._exspression,
      $.scopedeclaration,
      repeat(seq(
        'elif',
        $._exspression,
        $.scopedeclaration)),
      optional(
        $.scopeelse),
    ),

    whilestatement: $ => seq(
      'while',
      $._exspression,
      $.scopedeclaration
    ),

    forstatement: $ => prec.left(seq(
      'for',
      $.identifier,
      'in', 
      choice($.tuplenotation, $.rangenotation),
      repeat(seq(
        $._SEMICOLON,  
        $.identifier,
        'in', 
        choice($.tuplenotation, $.rangenotation))),
      $.scopedeclaration
    )),

    assignmentexpression: $ => seq(
      choice(
        //$.overloadnotation,
        $._exspression),
      $.assignmentoperator,
      choice($._exspression, $.scopedeclaration) // add fcallimplicit
    ),

    assertionstatement: $ => seq('I(',$._exspression,')'),


/************************** SCOPE DECLARATIONS ********************************/
    scopedeclaration: $ => seq(
      choice(
        optional(seq(':',optional($.scopeargument),':')),
        optional($._exspression)),
      $._LBRACE,
      choice($._codeblocks, $._exspression),
      $._RBRACE,
      optional($.scopeelse)
    ),

    scopeelse: $ => seq(
      'else',
      $._LBRACE,
      $._codeblocks,
      $._RBRACE
      ),

    scopeargument: $ => seq(
      '(',
      optional(seq(
        choice($.assignmentexpression, $._exspression),
        repeat(seq(',', choice($.assignmentexpression, $._exspression))),
        repeat(','))),
      ')'
      ),

    scopedec_compound_statement: $ =>  seq(
      $._LBRACE,
      $._codeblocks,
      $._RBRACE,
    ),

/**************************EXSPRESSIONS***************************/
    
    _exspression: $ => choice(
      $.unaryoperator,
      $.binaryoperator,
      $.tupleconcat,
      $.tuplenotation,
      $.rangenotation,
    ),

    unaryoperator: $ => prec.left(PREC.unary,choice(
      seq(
        choice('not' ,'!', '~'),
        $._exspression),
      seq(
        $._exspression,
        token.immediate('?'))
      )),

    binaryoperator: $ => choice(
      prec(PREC.logical,seq(
        $._exspression,
        choice('and', 'or', 'xor'),
        $._exspression)),
      prec(PREC.comparators,seq(
        $._exspression,
        choice($._EQUEQU, $._ISEQU, $._BANGEQU, $._LE, $._GE, $._LT, $._GT),
        $._exspression)),
      $._additiveoperator,
    ),

    _additiveoperator: $ => choice(
      prec(PREC.addtv, seq(
        $._exspression, 
        choice('|', '^', '&', '<<', '>>', '<<<', '>>>'),
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

    tupleconcat: $ => prec(PREC.addtv, seq(
      $._exspression, 
      choice('++', '--'),
      $._exspression
    )),

/************************ OPERATORS ******************************/

    _LT: $ => choice ('<', ':<'),
    _GT: $ => choice ('>', ':>'),
    _LE: $ => choice ('<=', ':<='),
    _GE: $ => choice ('>=', ':>='),

    _EQUEQU: $ => choice('==',':=='),
    _ISEQU: $ => 'is',

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

    _BANGEQU: $ => choice('!=', ':!='),
    _EQU: $ => choice('=', ':='),
    _AS: $ => 'as',
    _IN: $ => 'in',    

    _TPLUSEQU: $ => choice('++=', '++:='),
    _STAREQU: $ => choice('*=', '*:='),
    _DIVEQU: $ => choice('/=','/:='),
    _MODEQU: $ => choice('%=', '%:='),
    _PLUSEQU: $ => choice('+=', '+:='),
    _MINUSEQU: $ => choice('-=', '-:='),
    _LEFTEQU: $ => choice('<<=', '<<:='),
    _RIGHTEQU: $ => choice('>>=', '>>:='),

/************************* RANGE NOTATION ***********************/

    rangenotation: $ => prec.left(1,seq(
      optional($._lhsvarname),
      '..',
      optional(choice($._additiveoperator, $._bitselectionnotation)),
      optional($._tupleby)
    )),
    
/************************* TUPLE NOTATION ***********************/

    tuplenotation: $ => prec.left(choice(
      seq(
        '(',
        choice($._exspression, $.assignmentexpression),
        repeat(seq(/,+/, choice($._exspression, $.assignmentexpression))),
        /,*/,
        ')',
        optional(choice($._bitselectionbracket, $._tupleby))
        ),
      $._bitselectionnotation
    )),

    _tupleby: $ => seq('by', $._lhsvarname),

    _bitselectionnotation: $ => seq($._tupledotnotation, optional($._bitselectionbracket)),
    _bitselectionbracket: $ => repeat1(seq($._LLBRK, optional($._exspression), $._RRBRK)),

    _tupledotnotation: $ => seq(
      $._tuplearraynotation,
      repeat(seq('.', $._tuplearraynotation))
    ),

    _tuplearraynotation: $ => seq(
      $._lhsvarname, 
      repeat(seq($._LBRK, $._lhsvarname, $._RBRK)) // decimal to expression
    ),


    _lhsvarname: $ => prec.right(choice( 
      seq(
        optional(choice($._input, $._output, $._register)),
        choice($.identifier, $.constant)),
      choice($._input, $._output, $._register)
      )),

    _input: $ => '$',
    _output: $ => '%',
    _register: $ => '#',

/*************************** MISC *********************************/
    _LLBRK: $ => '[[',
    _RRBRK: $ => ']]',
    _LBRK: $ => '[',
    _RBRK: $ => ']',
    _LBRACE: $ => '{',
    _RBRACE: $ => '}',
    _SEMICOLON: $ => ';',

/*************************** OVERLOAD *****************************/

    overloadnotation: $ => prec.right(2,seq(
      '..',
      $.overloadname,
      '..'
      )),

    //overloadname: $ => prec(2,/\.\.[^\n\r\u2028\u2029\s#;,={}()/?!|'"]+\.\./), // [] will be added
    overloadname: $ => /[^\n\r\u2028\u2029\s#;,={}()/?!|'"]+/, // [] will be added

/***************************IDENTIFIER*****************************/
    
    identifier: $ => /[_]*[a-zA-Z]{1}[a-zA-Z0-9]*/,
    //idprefix: $ => /[!-]{1}/,
    //idnondigit: $ => /[a-zA-Z%$#]{1}/,
    //idchar: $ => /[a-zA-Z0-9]{1}/,

/****************************CONSTANTS*****************************/    

    constant: $ => choice($._stringconstant, $._numericalconstant),

    _stringconstant: $ => choice(
      /'(.*[^"\n\r\u2028\u2029])'/, //check this
      /"(.*[^'\n\r\u2028\u2029])"/ //check this
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

    //_decimalsigned: $ => /([-]?[0-9]{1}[0-9_]*)(s|u)?([0-9_]+(bit){1}s?)?/,
    _decimalsigned: $ => /([-]?[0-9]{1}[0-9_]*)(s|u)?[0-9_]+((bit){1}s?)?/,


    _decimaldigit: $ => /([-]?[0-9]{1}[0-9_]*)/,

    _binary: $ => /0b["0-1_]+(s|u)?[?0-9_]+((bit){1}s?)?/,

    _hexadecimal: $ => /0x["A-Fa-f0-9_]+(s|u)?[0-9_]+((bit){1}s?)?/,

/****************************LINE TERMINATOR*****************************/
    
    _whitespace: $ => /[ \n\t\u000B\u000C\uFEFF]+/, // /n ?????
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
      /[^\*\/]*/,
      '*/'
    ),

    _singlelinecomment: $ => /\/\/([^\n\r\u2028\u2029])*/,

  }
});