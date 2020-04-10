lexer grammar SanLexer;

// Operators
Add: '+';
Sub: '-';
Mul: '*';
Div: '/';
Mod: '%';

ConditionalOr: '||';
ConditionalAnd: '&&';

EqualTo: '==';
NotEqualTo: '!=';
LessThanOrEqualTo: '<=';
GreaterThanOrEqualTo: '>=';
LessThan: '<';
GreaterThan: '>';

Xor: '^';
BitwiseOr: '|';
BitwiseAnd: '&';

Equal: '=';

// Pairs
OpeningParen: '(';
ClosingParen: ')';
OpeningBrace: '{';
ClosingBrace: '}';
OpeningBracket: '[';
ClosingBracket: ']';

// Ranges
Variadic: '...';

// Types
Void: 'void';
Bool: 'bool' | 'i1';

Int8: 'i8';
Int16: 'i16';
Int32: 'i32';
Int64: 'i64';

UInt8: 'u8';
UInt16: 'u16';
UInt32: 'u32';
UInt64: 'u64';

Float32: 'f32';
Float64: 'f64';

// Casting
As: 'as';

// Sizeof
SizeOf: 'sizeof';

// Qualifiers
Const: 'const';

// Classes
Class: 'class';

// Variable
VariableDeclarator: 'let';

// Loops and conditions
If: 'if';
Else: 'else';

While: 'while';
Break: 'break';

// Others
Function: 'fn';
Extern: 'extern';
Return: 'return';
Comma: ',';
Colon: ':';

InstructionsSeparator: ';'+;

VariableName: Name;
fragment Name: [a-zA-Z_] [a-zA-Z0-9_]*;

// Literals
StringLiteral: '"' StringChar* '"';
CharLiteral: '\'' StringChar+ '\'';

fragment StringChar: ~ ["\\\r\n] | Escape;

IntegerLiteral:
	DecimalLiteral
	| ZeroLiteral
	| HexadecimalLiteral
	| BinaryLiteral;

DecimalLiteral: NONZERODIGIT (DIGITSEPARATOR? DIGIT)*;

ZeroLiteral: '0';

HexadecimalLiteral: ('0x' | '0X') HEXADECIMALDIGIT (
		DIGITSEPARATOR? HEXADECIMALDIGIT
	)*;

BinaryLiteral: ('0b' | '0B') BINARYDIGIT (
		DIGITSEPARATOR? BINARYDIGIT
	)*;

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
