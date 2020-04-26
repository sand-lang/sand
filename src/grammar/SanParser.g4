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
	| breakStatement InstructionsSeparator
	| classStatement;

expression:
	'(' expression ')'										# InParenExpression
	| 'sizeof' type											# SizeofExpression
	| classTypeName '{' classInstantiationProperties? '}'	# ClassInstantiationExpression
	| expression '.' VariableName classTypeNameGenerics?	# PropertyExpression
	| expression '(' functionCallArguments? ')'				# FunctionCallExpression
	| expression '[' expression ']'							# Index
	| expression multiplicativeOperatorStatement expression	# BinaryMultiplicativeOperation
	| expression operatorStatement expression				# BinaryOperation
	| expression bitwiseOperatorStatement expression		# BinaryBitwiseOperation
	| expression comparisonOperatorStatement expression		# BinaryComparisonOperation
	| expression conditionalOperatorStatement expression	# BinaryConditionalOperation
	| expression equalityOperatorStatement expression		# EqualityOperation
	| expression 'as' type									# TypeCast
	| 'this'												# ThisExpression
	| scopeResolver? VariableName classTypeNameGenerics?	# VariableExpression
	| literal												# LiteralDeclaration;

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
equalityOperatorStatement: Equal;

literal:
	integerLiteral
	| floatingLiteral
	| StringLiteral
	| CharLiteral;

integerLiteral:
	Sub? (
		DecimalLiteral
		| ZeroLiteral
		| HexadecimalLiteral
		| BinaryLiteral
	);

floatingLiteral: Sub? FloatingLiteral;

variableDeclaration:
	VariableDeclarator VariableName (
		':' type ('=' expression)?
		| '=' expression
	);

functionCallArguments:
	functionCallArgument (',' functionCallArgument)*;
functionCallArgument: expression;

function: functionDeclaration body?;
functionDeclaration:
	Extern? Function VariableName classGenerics? '(' functionArguments? ')' (
		':' type
	)?;

functionArguments: functionArgument (',' functionArgument)*;
functionArgument:
	functionArgumentVariable
	| functionArgumentVariadic;
functionArgumentVariable: (VariableName ':')? type;
functionArgumentVariadic: '...';

returnStatement: 'return' expression?;

ifStatement:
	'if' (expression | variableDeclaration) statement elseStatement?;
elseStatement: 'else' statement;

whileStatement: 'while' expression statement;
breakStatement: 'break';

classStatement:
	'class' VariableName classGenerics? (Extends classExtends)? classBody;
classGenerics: '<' VariableName (',' VariableName)* '>';
classExtends: classTypeName (',' classTypeName)*;
classBody: '{' (classProperty | classMethod)* '}';
classProperty:
	Static? VariableName ':' type ('=' expression)? InstructionsSeparator;
classMethod: Static? function;

classInstantiationProperties:
	classInstantiationProperty (',' classInstantiationProperty)* ','?;
classInstantiationProperty: VariableName ('=' expression)?;

type: typeQualifier* typeName typeDimensions* typeReference?;
typeQualifier: Const;
typeDimensions: '[' ']';
typeReference: '&';

typeName:
	primaryTypeName
	| functionType
	| (scopeResolver? classTypeName);

primaryTypeName:
	Int8
	| Int16
	| Int32
	| Int64
	| UInt8
	| UInt16
	| UInt32
	| UInt64
	| Float32
	| Float64
	| Void
	| Bool;

functionType: 'fn' '(' functionArguments? ')' (':' type)?;

classTypeName: VariableName classTypeNameGenerics?;
classTypeNameGenerics: '<' type (',' type)* '>';

namespaceStatement: Namespace VariableName '{' statement* '}';

scopeResolver: (VariableName | classTypeName) '::' scopeResolver?;

eos: (EOF | LineTerminator);
