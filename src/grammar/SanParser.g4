parser grammar SanParser;

options {
	tokenVocab = SanLexer;
}

instructions: statement* eos;

body: '{' statement* '}';

statement:
	function
	| expression InstructionsSeparator
	| body
	| variableDeclaration InstructionsSeparator
	| returnStatement InstructionsSeparator;

expression:
	'(' expression ')'										# InParenExpression
	| expression multiplicativeOperatorStatement expression	# BinaryMultiplicativeOperation
	| expression operatorStatement expression				# BinaryOperation
	| expression bitwiseOperatorStatement expression		# BinaryBitwiseOperation
	| expression conditionalOperatorStatement expression	# BinaryConditionalOperation
	| expression comparisonOperatorStatement expression		# BinaryComparisonOperation
	| VariableName											# VariableExpression
	| expression '(' functionCallArguments? ')'				# FunctionCallExpression
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

literal: IntegerLiteral | StringLiteral;

variableDeclaration:
	variableQualifier VariableName ':' type ('=' expression)?;
variableQualifier: ConstQualifier | LetQualifier;

functionCallArguments:
	functionCallArgument (',' functionCallArgument)*;
functionCallArgument: expression;

function: functionDeclaration body?;
functionDeclaration:
	Function VariableName '(' functionArguments? ')' (':' type)?;

functionArguments: functionArgument (',' functionArgument)*;
functionArgument: VariableName ':' type;

returnStatement: 'return' expression?;

type: typeName typeDimensions*;
typeDimensions: '[' ']';

typeName:
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
	| VariableName;

eos: (EOF | LineTerminator);
