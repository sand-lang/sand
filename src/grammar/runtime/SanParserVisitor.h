
// Generated from SanParser.g4 by ANTLR 4.7.2

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

    virtual antlrcpp::Any visitStatement(SanParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperation(SanParser::BinaryOperationContext *context) = 0;

    virtual antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitOperatorStatement(SanParser::OperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SanParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitEos(SanParser::EosContext *context) = 0;


};

