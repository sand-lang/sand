
// Generated from SanParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SanParserVisitor.h"


/**
 * This class provides an empty implementation of SanParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SanParserBaseVisitor : public SanParserVisitor {
public:

  virtual antlrcpp::Any visitInstructions(SanParser::InstructionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(SanParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(SanParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorStatement(SanParser::OperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(SanParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEos(SanParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }


};

