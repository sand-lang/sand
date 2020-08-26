lexer grammar SandLexer;

// Operators
Add: '+';
Sub: '-';
Mul: '*';
Div: '/';
Mod: '%';
Not: '!';
Neg: '~';

ConditionalOr: '||';
ConditionalAnd: '&&';

TernaryOperator: '?';

EqualTo: '==';
NotEqualTo: '!=';
LessThanOrEqualTo: '<=';
// GreaterThanOrEqualTo: '>=';
LessThan: '<';
GreaterThan: '>';

Xor: '^';
BitwiseOr: '|';
BitwiseAnd: '&';

Equal: '=';

AddEqual: '+=';
SubEqual: '-=';
MulEqual: '*=';
DivEqual: '/=';
ModEqual: '%=';
XorEqual: '^=';
OrEqual: '|=';
AndEqual: '&=';

// Pairs
OpeningParen: '(';
ClosingParen: ')';
OpeningBrace: '{';
ClosingBrace: '}';
OpeningBracket: '[';
ClosingBracket: ']';

// Ranges
Variadic: '...';
InclusiveRange: '..=';
ExclusiveRange: '..';

// Casting
As: 'as';

// Sizeof
SizeOf: 'sizeof';

// Typeof
TypeOf: 'typeof';

// Qualifiers
Const: 'const';

// Classes
Class: 'class';
Extends: 'extends';
Special: 'special';
Static: 'static';
Dot: '.';
Arrow: '->';

// Union
Union: 'union';

// Enum
Enum: 'enum';

Destructor: '@destructor';

// Namespaces
Namespace: 'namespace';
ScopeResolver: '::';

// Variable
VariableDeclarator: 'let';

// Loops and conditions
If: 'if';
Else: 'else';

While: 'while';
Break: 'break';

For: 'for';
In: 'in';

// Functions
Function: 'fn';
Extern: 'extern';
Return: 'return';

Cast: 'cast';

// Alias
Alias: 'alias';

// Others
Comma: ',';
Colon: ':';
Attribute: '#[';

Assembly: 'asm';

Import: 'import';

True: 'true';
False: 'false';
NullLiteral: 'null';

InstructionsSeparator: ';'+;

VariableName: Name;
fragment Name: [a-zA-Z_] [a-zA-Z0-9_]*;

// Literals
StringLiteral: '"' StringChar* '"';
CharLiteral: '\'' CharChar+ '\'';

fragment StringChar: ~ ["\r\n] | Escape;
fragment CharChar: ~ ['\r\n] | Escape;

DecimalLiteral:
	NONZERODIGIT (DIGITSEPARATOR? DIGIT)* IntegerType?;

FloatingLiteral:
	(DecimalLiteral | ZeroLiteral)? '.' DIGIT (
		DIGITSEPARATOR? DIGIT
	)*;

ZeroLiteral: '0' IntegerType?;

HexadecimalLiteral: ('0x' | '0X') HEXADECIMALDIGIT (
		DIGITSEPARATOR? HEXADECIMALDIGIT
	)* IntegerType?;

BinaryLiteral: ('0b' | '0B') BINARYDIGIT (
		DIGITSEPARATOR? BINARYDIGIT
	)* IntegerType?;

fragment IntegerType:
	'i8'
	| 'i16'
	| 'i32'
	| 'i64'
	| 'u8'
	| 'u16'
	| 'u32'
	| 'u64';

// Comments
Comment: '//' CommentLine* -> skip;
fragment CommentLine: ~ [\\\r\n] | Escape;

// Specials
WhiteSpace: [ \t]+ -> skip;
LineTerminator: [\r\n] -> channel(HIDDEN);

fragment Escape: '\\\'' | '\\"' | '\\\\' | '\\n' | '\\r';

fragment DIGITSEPARATOR: [_'];
fragment NONDIGIT: [a-zA-Z_];
fragment DIGIT: [0-9];
fragment NONZERODIGIT: [1-9];
fragment HEXADECIMALDIGIT: [0-9a-fA-F];
fragment BINARYDIGIT: [01];
