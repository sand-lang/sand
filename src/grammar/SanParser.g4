parser grammar SanParser;

options {
	tokenVocab = SanLexer;
}

instructions: statement* eos;

body: '{' statement* '}';

statement: function | expression | body;

expression:
	'(' expression ')'										# InParenExpression
	| expression multiplicativeOperatorStatement expression	# BinaryMultiplicativeOperation
	| expression operatorStatement expression				# BinaryOperation
	| literal												# LiteralDeclaration;

multiplicativeOperatorStatement: Mul | Div | Mod;
operatorStatement: Add | Sub;

literal: IntegerLiteral | StringLiteral;

function: functionDeclaration body?;
functionDeclaration:
	Function VariableName '(' functionArguments? ')' (':' type)?;

functionArguments: functionArgument (',' functionArguments)*;
functionArgument: VariableName ':' type;

// fn main(a: i8[][][][], b: i32[][]) : f64[][][][][][][]
type: primaryType typeDimensions*;
typeDimensions: '[' ']';

primaryType:
	Int8
	| Int16
	| Int32
	| Int64
	| UInt8
	| UInt16
	| UInt32
	| UInt64
	| Float32
	| Float64;

eos: (EOF | LineTerminator);
