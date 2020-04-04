
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

    virtual antlrcpp::Any visitBinaryBitwiseOperation(SanParser::BinaryBitwiseOperationContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperation(SanParser::EqualityOperationContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpression(SanParser::VariableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryMultiplicativeOperation(SanParser::BinaryMultiplicativeOperationContext *context) = 0;

    virtual antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitBinaryConditionalOperation(SanParser::BinaryConditionalOperationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(SanParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparisonOperation(SanParser::BinaryComparisonOperationContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOperatorStatement(SanParser::MultiplicativeOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitOperatorStatement(SanParser::OperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOperatorStatement(SanParser::BitwiseOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalOperatorStatement(SanParser::ConditionalOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperatorStatement(SanParser::ComparisonOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperatorStatement(SanParser::EqualityOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SanParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(SanParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArguments(SanParser::FunctionCallArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArgument(SanParser::FunctionCallArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunction(SanParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(SanParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArguments(SanParser::FunctionArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgument(SanParser::FunctionArgumentContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(SanParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(SanParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(SanParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(SanParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitType(SanParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(SanParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeDimensions(SanParser::TypeDimensionsContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(SanParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitEos(SanParser::EosContext *context) = 0;


};

