lexer grammar SanLexer;

// Operators
Add: '+';

// Pairs
OpeningParen: '(';
ClosingParen: ')';
OpeningBrace: '{';
ClosingBrace: '}';
OpeningBracket: '[';
ClosingBracket: ']';

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
