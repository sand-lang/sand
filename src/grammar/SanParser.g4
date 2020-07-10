parser grammar SanParser;

options {
	tokenVocab = SanLexer;
}

instructions: statement* eos;

body: '{' statement* '}';

statement:
	function
	| namespaceStatement
	| expression InstructionsSeparator
	| body
	| variableDeclaration InstructionsSeparator
	| returnStatement InstructionsSeparator
	| ifStatement
	| whileStatement
	| forStatement
	| breakStatement InstructionsSeparator
	| specialClassStatement
	| classStatement
	| unionStatement
	| enumStatement
	| importStatement
	| assemblyStatement InstructionsSeparator
	| alias InstructionsSeparator;

expression:
	'(' expression ')'										# InParenExpression
	| 'sizeof' (expression | type)							# SizeofExpression
	| classTypeName '{' classInstantiationProperties? '}'	# ClassInstantiationExpression
	| expression (Dot | Arrow) name							# PropertyExpression
	| expression '(' functionCallArguments? ')'				# FunctionCallExpression
	| expression '[' expression ']'							# Index
	| '-' expression										# UnaryNegativeExpression
	| '+' expression										# UnaryPositiveExpression
	| '!' expression										# UnaryNegationExpression
	| expression '!'										# SuffixUnaryNegationExpression
	| expression 'as' type									# TypeCast
	| function												# FunctionExpression
	| scopedName											# NameExpression
	| literal												# LiteralDeclaration
	| expression multiplicativeOperatorStatement expression	# BinaryMultiplicativeOperation
	| expression operatorStatement expression				# BinaryOperation
	| expression bitwiseOperatorStatement expression		# BinaryBitwiseOperation
	| expression comparisonOperatorStatement expression		# BinaryComparisonOperation
	| expression conditionalOperatorStatement expression	# BinaryConditionalOperation
	| expression equalityOperatorStatement expression		# EqualityOperation;

scopedName: scopeResolver? name;

name: VariableName classTypeNameGenerics?;

scopedNameNoGeneric: scopeResolver? nameNoGeneric;

nameNoGeneric: VariableName;

scopeResolver: name '::' scopeResolver?;

multiplicativeOperatorStatement: Mul | Div | Mod;

operatorStatement: Add | Sub;

bitwiseOperatorStatement: Xor | BitwiseOr | BitwiseAnd;

conditionalOperatorStatement: ConditionalOr | ConditionalAnd;

comparisonOperatorStatement:
	EqualTo
	| NotEqualTo
	| LessThanOrEqualTo
	| GreaterThanOrEqualTo
	| LessThan
	| GreaterThan;

equalityOperatorStatement: Equal | AddEqual | SubEqual | MulEqual | DivEqual | ModEqual | XorEqual | OrEqual | AndEqual;

literal:
	booleanLiteral
	| integerLiteral
	| floatingLiteral
	| stringLiteral
	| CharLiteral;

booleanLiteral: True | False;

integerLiteral:
	(
		DecimalLiteral
		| ZeroLiteral
		| HexadecimalLiteral
		| BinaryLiteral
	);

floatingLiteral: FloatingLiteral;

stringLiteral: StringLiteral+;

variableDeclaration:
	VariableDeclarator VariableName (
		':' type ('=' expression)?
		| '=' expression
	);

functionCallArguments:
	functionCallArgument (',' functionCallArgument)*;

functionCallArgument: expression;

overloadableOperator:
	'+'
	| '-'
	| '*'
	| '/'
	| '%'
	| '!'
	| '+' '!'
	| '^'
	| '|'
	| '&'
	| '+='
	| '-='
	| '*='
	| '/='
	| '%='
	| '^='
	| '|='
	| '&='
	| '=='
	| '!='
	| '<'
	| '<='
	| '>'
	| '>='
	| '[' ']';

function:
	attributes Extern? functionDeclaration (
		body
		| InstructionsSeparator
	);

functionDeclaration:
	Function (
		(
			(
				(overloadableOperator)
				| (Cast castFunctionType)
				| VariableName
			)? classGenerics? '(' (
				functionArguments (',' functionVariadicArgument)?
				| functionVariadicArgument?
			) ')' (':' type)?
		)
		| (Destructor '(' ')')
	);

castFunctionType: type;

functionVariadicArgument: '...';

functionArguments: functionArgument (',' functionArgument)*;

functionArgument: (VariableName ':')? type;

returnStatement: 'return' expression?;

ifStatement:
	'if' (expression | variableDeclaration) statement elseStatement?;

elseStatement: 'else' statement;

whileStatement: 'while' expression statement;

forStatement: 'for' VariableName 'in' expression statement;

breakStatement: 'break';

unionStatement: attributes 'union' VariableName unionBody;

unionBody: '{' unionProperty* '}';

unionProperty: VariableName ':' type InstructionsSeparator;

enumStatement: attributes 'enum' VariableName enumBody;

enumBody: '{' (enumProperty (',' enumProperty)* ','?)? '}';

enumProperty: VariableName ('=' expression)?;

specialClassStatement:
	attributes Special 'class' scopedNameNoGeneric classTypeNameGenerics (
		Extends classExtends
	)? classBody;

classStatement:
	attributes 'class' VariableName classGenerics? (
		Extends classExtends
	)? classBody;

classGenerics: '<' VariableName (',' VariableName)* '>';

classExtends: classTypeName (',' classTypeName)*;

classBody: '{' (classProperty | classMethod)* '}';

classProperty:
	Static? VariableName ':' type ('=' expression)? InstructionsSeparator;

classMethod: Static? function;

classInstantiationProperties:
	classInstantiationProperty (',' classInstantiationProperty)* ','?;

classInstantiationProperty: VariableName ('=' expression)?;

type:
	typeQualifier* typeName typeDimensions* typePointer* typeReference?;

typeQualifier: Const;

typeDimensions: '[' expression ']';

typePointer: '*';

typeReference: '&';

typeName: scopedName | functionType;

functionType:
	'fn' '(' (
		functionArguments (',' functionVariadicArgument)?
		| functionVariadicArgument?
	) ')' (':' type)?;

classTypeName: scopedName;

classTypeNameGenerics: '<' type (',' type)* '>';

namespaceStatement:
	attributes Namespace VariableName '{' statement* '}';

importStatement: Import StringLiteral;

attributes: attribute*;
attribute: '#[' VariableName ('=' StringLiteral)? ']';

alias:
	'alias' VariableName classGenerics? '=' (
		scopedName
		| type
		| literal
	);

assemblyStatement:
	'asm' '(' stringLiteral (
		':' (assemblyOutput ( ',' assemblyOutput)*)?
	) (':' (assemblyInput (',' assemblyInput)*)?) (
		(':' assemblyClobber (',' assemblyClobber)*)?
	) ')';

assemblyTemplate: stringLiteral;
assemblyOutput: StringLiteral '(' expression ')';
assemblyInput: StringLiteral '(' expression ')';
assemblyClobber: StringLiteral;

eos: (EOF | LineTerminator);
