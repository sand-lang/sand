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
	| returnStatement InstructionsSeparator
	| ifStatement
	| whileStatement
	| breakStatement InstructionsSeparator
	| classStatement;

expression:
	'(' expression ')'										# InParenExpression
	| 'sizeof' type											# SizeofExpression
	| classTypeName '{' classInstantiationProperties? '}'	# ClassInstantiationExpression
	| expression '(' functionCallArguments? ')'				# FunctionCallExpression
	| expression multiplicativeOperatorStatement expression	# BinaryMultiplicativeOperation
	| expression operatorStatement expression				# BinaryOperation
	| expression bitwiseOperatorStatement expression		# BinaryBitwiseOperation
	| expression comparisonOperatorStatement expression		# BinaryComparisonOperation
	| expression conditionalOperatorStatement expression	# BinaryConditionalOperation
	| expression equalityOperatorStatement expression		# EqualityOperation
	| expression '[' expression ']'							# Index
	| expression 'as' type									# TypeCast
	| VariableName											# VariableExpression
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

literal: IntegerLiteral | StringLiteral | CharLiteral;

variableDeclaration:
	VariableDeclarator VariableName ':' type ('=' expression)?;

functionCallArguments:
	functionCallArgument (',' functionCallArgument)*;
functionCallArgument: expression;

function: functionDeclaration body?;
functionDeclaration:
	Extern? Function VariableName '(' functionArguments? ')' (
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

classStatement: 'class' VariableName classBody;
classBody: '{' classProperty* '}';
classProperty:
	VariableName ':' type ('=' expression)? InstructionsSeparator;

classInstantiationProperties:
	classInstantiationProperty (',' classInstantiationProperty)* ','?;
classInstantiationProperty: VariableName (':' expression)?;

type: typeQualifier* typeName typeDimensions*;
typeQualifier: Const;
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
	| Void
	| Bool
	| classTypeName;

classTypeName: VariableName;

eos: (EOF | LineTerminator);
