parser grammar SanParser;

options {
	tokenVocab = SanLexer;
}

instructions: statement* eos;

statement: expression;

expression:
	expression multiplicativeOperatorStatement expression	# BinaryMultiplicativeOperation
	| expression operatorStatement expression				# BinaryOperation
	| literal												# LiteralDeclaration;

multiplicativeOperatorStatement: Mul | Div | Mod;
operatorStatement: Add | Sub;

literal: IntegerLiteral | StringLiteral;

eos: (EOF | LineTerminator);
