
// Generated from SanParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SanParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SanParser.
 */
class  SanParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SanParser.
   */
    virtual antlrcpp::Any visitInstructions(SanParser::InstructionsContext *context) = 0;

    virtual antlrcpp::Any visitBody(SanParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitStatement(SanParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitInParenExpression(SanParser::InParenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperation(SanParser::BinaryOperationContext *context) = 0;

    virtual antlrcpp::Any visitBinaryMultiplicativeOperation(SanParser::BinaryMultiplicativeOperationContext *context) = 0;

    virtual antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOperatorStatement(SanParser::MultiplicativeOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitOperatorStatement(SanParser::OperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SanParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitFunction(SanParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(SanParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArguments(SanParser::FunctionArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgument(SanParser::FunctionArgumentContext *context) = 0;

    virtual antlrcpp::Any visitType(SanParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeDimensions(SanParser::TypeDimensionsContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryType(SanParser::PrimaryTypeContext *context) = 0;

    virtual antlrcpp::Any visitEos(SanParser::EosContext *context) = 0;


};

