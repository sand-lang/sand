
// Generated from SanParser.g4 by ANTLR 4.8


#include "SanParserVisitor.h"

#include "SanParser.h"


using namespace antlrcpp;
using namespace antlr4;

SanParser::SanParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SanParser::~SanParser() {
  delete _interpreter;
}

std::string SanParser::getGrammarFileName() const {
  return "SanParser.g4";
}

const std::vector<std::string>& SanParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SanParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InstructionsContext ------------------------------------------------------------------

SanParser::InstructionsContext::InstructionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::EosContext* SanParser::InstructionsContext::eos() {
  return getRuleContext<SanParser::EosContext>(0);
}

std::vector<SanParser::StatementContext *> SanParser::InstructionsContext::statement() {
  return getRuleContexts<SanParser::StatementContext>();
}

SanParser::StatementContext* SanParser::InstructionsContext::statement(size_t i) {
  return getRuleContext<SanParser::StatementContext>(i);
}


size_t SanParser::InstructionsContext::getRuleIndex() const {
  return SanParser::RuleInstructions;
}


antlrcpp::Any SanParser::InstructionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitInstructions(this);
  else
    return visitor->visitChildren(this);
}

SanParser::InstructionsContext* SanParser::instructions() {
  InstructionsContext *_localctx = _tracker.createInstance<InstructionsContext>(_ctx, getState());
  enterRule(_localctx, 0, SanParser::RuleInstructions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Add)
      | (1ULL << SanParser::Sub)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Class)
      | (1ULL << SanParser::Special)
      | (1ULL << SanParser::Union)
      | (1ULL << SanParser::Enum)
      | (1ULL << SanParser::Namespace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::If)
      | (1ULL << SanParser::While)
      | (1ULL << SanParser::Break)
      | (1ULL << SanParser::For)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::Alias)
      | (1ULL << SanParser::Attribute)
      | (1ULL << SanParser::Assembly)
      | (1ULL << SanParser::Import)
      | (1ULL << SanParser::True)
      | (1ULL << SanParser::False)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::CharLiteral - 64))
      | (1ULL << (SanParser::DecimalLiteral - 64))
      | (1ULL << (SanParser::FloatingLiteral - 64))
      | (1ULL << (SanParser::ZeroLiteral - 64))
      | (1ULL << (SanParser::HexadecimalLiteral - 64))
      | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
      setState(142);
      statement();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    eos();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

SanParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::BodyContext::OpeningBrace() {
  return getToken(SanParser::OpeningBrace, 0);
}

tree::TerminalNode* SanParser::BodyContext::ClosingBrace() {
  return getToken(SanParser::ClosingBrace, 0);
}

std::vector<SanParser::StatementContext *> SanParser::BodyContext::statement() {
  return getRuleContexts<SanParser::StatementContext>();
}

SanParser::StatementContext* SanParser::BodyContext::statement(size_t i) {
  return getRuleContext<SanParser::StatementContext>(i);
}


size_t SanParser::BodyContext::getRuleIndex() const {
  return SanParser::RuleBody;
}


antlrcpp::Any SanParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

SanParser::BodyContext* SanParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 2, SanParser::RuleBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(SanParser::OpeningBrace);
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Add)
      | (1ULL << SanParser::Sub)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Class)
      | (1ULL << SanParser::Special)
      | (1ULL << SanParser::Union)
      | (1ULL << SanParser::Enum)
      | (1ULL << SanParser::Namespace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::If)
      | (1ULL << SanParser::While)
      | (1ULL << SanParser::Break)
      | (1ULL << SanParser::For)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::Alias)
      | (1ULL << SanParser::Attribute)
      | (1ULL << SanParser::Assembly)
      | (1ULL << SanParser::Import)
      | (1ULL << SanParser::True)
      | (1ULL << SanParser::False)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::CharLiteral - 64))
      | (1ULL << (SanParser::DecimalLiteral - 64))
      | (1ULL << (SanParser::FloatingLiteral - 64))
      | (1ULL << (SanParser::ZeroLiteral - 64))
      | (1ULL << (SanParser::HexadecimalLiteral - 64))
      | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
      setState(151);
      statement();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
    match(SanParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SanParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::FunctionContext* SanParser::StatementContext::function() {
  return getRuleContext<SanParser::FunctionContext>(0);
}

SanParser::NamespaceStatementContext* SanParser::StatementContext::namespaceStatement() {
  return getRuleContext<SanParser::NamespaceStatementContext>(0);
}

SanParser::ExpressionContext* SanParser::StatementContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::StatementContext::InstructionsSeparator() {
  return getToken(SanParser::InstructionsSeparator, 0);
}

SanParser::BodyContext* SanParser::StatementContext::body() {
  return getRuleContext<SanParser::BodyContext>(0);
}

SanParser::VariableDeclarationContext* SanParser::StatementContext::variableDeclaration() {
  return getRuleContext<SanParser::VariableDeclarationContext>(0);
}

SanParser::ReturnStatementContext* SanParser::StatementContext::returnStatement() {
  return getRuleContext<SanParser::ReturnStatementContext>(0);
}

SanParser::IfStatementContext* SanParser::StatementContext::ifStatement() {
  return getRuleContext<SanParser::IfStatementContext>(0);
}

SanParser::WhileStatementContext* SanParser::StatementContext::whileStatement() {
  return getRuleContext<SanParser::WhileStatementContext>(0);
}

SanParser::ForStatementContext* SanParser::StatementContext::forStatement() {
  return getRuleContext<SanParser::ForStatementContext>(0);
}

SanParser::BreakStatementContext* SanParser::StatementContext::breakStatement() {
  return getRuleContext<SanParser::BreakStatementContext>(0);
}

SanParser::SpecialClassStatementContext* SanParser::StatementContext::specialClassStatement() {
  return getRuleContext<SanParser::SpecialClassStatementContext>(0);
}

SanParser::ClassStatementContext* SanParser::StatementContext::classStatement() {
  return getRuleContext<SanParser::ClassStatementContext>(0);
}

SanParser::UnionStatementContext* SanParser::StatementContext::unionStatement() {
  return getRuleContext<SanParser::UnionStatementContext>(0);
}

SanParser::EnumStatementContext* SanParser::StatementContext::enumStatement() {
  return getRuleContext<SanParser::EnumStatementContext>(0);
}

SanParser::ImportStatementContext* SanParser::StatementContext::importStatement() {
  return getRuleContext<SanParser::ImportStatementContext>(0);
}

SanParser::AssemblyStatementContext* SanParser::StatementContext::assemblyStatement() {
  return getRuleContext<SanParser::AssemblyStatementContext>(0);
}

SanParser::AliasContext* SanParser::StatementContext::alias() {
  return getRuleContext<SanParser::AliasContext>(0);
}


size_t SanParser::StatementContext::getRuleIndex() const {
  return SanParser::RuleStatement;
}


antlrcpp::Any SanParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::StatementContext* SanParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, SanParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(159);
      function();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(160);
      namespaceStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(161);
      expression(0);
      setState(162);
      match(SanParser::InstructionsSeparator);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(164);
      body();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(165);
      variableDeclaration();
      setState(166);
      match(SanParser::InstructionsSeparator);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(168);
      returnStatement();
      setState(169);
      match(SanParser::InstructionsSeparator);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(171);
      ifStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(172);
      whileStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(173);
      forStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(174);
      breakStatement();
      setState(175);
      match(SanParser::InstructionsSeparator);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(177);
      specialClassStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(178);
      classStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(179);
      unionStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(180);
      enumStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(181);
      importStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(182);
      assemblyStatement();
      setState(183);
      match(SanParser::InstructionsSeparator);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(185);
      alias();
      setState(186);
      match(SanParser::InstructionsSeparator);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SanParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SanParser::ExpressionContext::getRuleIndex() const {
  return SanParser::RuleExpression;
}

void SanParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SuffixUnaryNegationExpressionContext ------------------------------------------------------------------

SanParser::ExpressionContext* SanParser::SuffixUnaryNegationExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::SuffixUnaryNegationExpressionContext::Not() {
  return getToken(SanParser::Not, 0);
}

SanParser::SuffixUnaryNegationExpressionContext::SuffixUnaryNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::SuffixUnaryNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitSuffixUnaryNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InParenExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::InParenExpressionContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

SanParser::ExpressionContext* SanParser::InParenExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::InParenExpressionContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}

SanParser::InParenExpressionContext::InParenExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::InParenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitInParenExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::BinaryOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::BinaryOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::OperatorStatementContext* SanParser::BinaryOperationContext::operatorStatement() {
  return getRuleContext<SanParser::OperatorStatementContext>(0);
}

SanParser::BinaryOperationContext::BinaryOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::BinaryOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBinaryOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryBitwiseOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::BinaryBitwiseOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::BinaryBitwiseOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::BitwiseOperatorStatementContext* SanParser::BinaryBitwiseOperationContext::bitwiseOperatorStatement() {
  return getRuleContext<SanParser::BitwiseOperatorStatementContext>(0);
}

SanParser::BinaryBitwiseOperationContext::BinaryBitwiseOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::BinaryBitwiseOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBinaryBitwiseOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPositiveExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::UnaryPositiveExpressionContext::Add() {
  return getToken(SanParser::Add, 0);
}

SanParser::ExpressionContext* SanParser::UnaryPositiveExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::UnaryPositiveExpressionContext::UnaryPositiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::UnaryPositiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitUnaryPositiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NameExpressionContext ------------------------------------------------------------------

SanParser::ScopedNameContext* SanParser::NameExpressionContext::scopedName() {
  return getRuleContext<SanParser::ScopedNameContext>(0);
}

SanParser::NameExpressionContext::NameExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::NameExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitNameExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::EqualityOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::EqualityOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::EqualityOperatorStatementContext* SanParser::EqualityOperationContext::equalityOperatorStatement() {
  return getRuleContext<SanParser::EqualityOperatorStatementContext>(0);
}

SanParser::EqualityOperationContext::EqualityOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::EqualityOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::IndexContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::IndexContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

tree::TerminalNode* SanParser::IndexContext::OpeningBracket() {
  return getToken(SanParser::OpeningBracket, 0);
}

tree::TerminalNode* SanParser::IndexContext::ClosingBracket() {
  return getToken(SanParser::ClosingBracket, 0);
}

SanParser::IndexContext::IndexContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralDeclarationContext ------------------------------------------------------------------

SanParser::LiteralContext* SanParser::LiteralDeclarationContext::literal() {
  return getRuleContext<SanParser::LiteralContext>(0);
}

SanParser::LiteralDeclarationContext::LiteralDeclarationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::LiteralDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitLiteralDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

SanParser::ExpressionContext* SanParser::FunctionCallExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::FunctionCallExpressionContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

tree::TerminalNode* SanParser::FunctionCallExpressionContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}

SanParser::FunctionCallArgumentsContext* SanParser::FunctionCallExpressionContext::functionCallArguments() {
  return getRuleContext<SanParser::FunctionCallArgumentsContext>(0);
}

SanParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SizeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::SizeofExpressionContext::SizeOf() {
  return getToken(SanParser::SizeOf, 0);
}

SanParser::ExpressionContext* SanParser::SizeofExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::TypeContext* SanParser::SizeofExpressionContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

SanParser::SizeofExpressionContext::SizeofExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::SizeofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitSizeofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::UnaryNegationExpressionContext::Not() {
  return getToken(SanParser::Not, 0);
}

SanParser::ExpressionContext* SanParser::UnaryNegationExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::UnaryNegationExpressionContext::UnaryNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::UnaryNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitUnaryNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegativeExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::UnaryNegativeExpressionContext::Sub() {
  return getToken(SanParser::Sub, 0);
}

SanParser::ExpressionContext* SanParser::UnaryNegativeExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::UnaryNegativeExpressionContext::UnaryNegativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::UnaryNegativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitUnaryNegativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionExpressionContext ------------------------------------------------------------------

SanParser::FunctionContext* SanParser::FunctionExpressionContext::function() {
  return getRuleContext<SanParser::FunctionContext>(0);
}

SanParser::FunctionExpressionContext::FunctionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::FunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryMultiplicativeOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::BinaryMultiplicativeOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::BinaryMultiplicativeOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::MultiplicativeOperatorStatementContext* SanParser::BinaryMultiplicativeOperationContext::multiplicativeOperatorStatement() {
  return getRuleContext<SanParser::MultiplicativeOperatorStatementContext>(0);
}

SanParser::BinaryMultiplicativeOperationContext::BinaryMultiplicativeOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::BinaryMultiplicativeOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBinaryMultiplicativeOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyExpressionContext ------------------------------------------------------------------

SanParser::ExpressionContext* SanParser::PropertyExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::NameContext* SanParser::PropertyExpressionContext::name() {
  return getRuleContext<SanParser::NameContext>(0);
}

tree::TerminalNode* SanParser::PropertyExpressionContext::Dot() {
  return getToken(SanParser::Dot, 0);
}

tree::TerminalNode* SanParser::PropertyExpressionContext::Arrow() {
  return getToken(SanParser::Arrow, 0);
}

SanParser::PropertyExpressionContext::PropertyExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::PropertyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitPropertyExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryConditionalOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::BinaryConditionalOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::BinaryConditionalOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::ConditionalOperatorStatementContext* SanParser::BinaryConditionalOperationContext::conditionalOperatorStatement() {
  return getRuleContext<SanParser::ConditionalOperatorStatementContext>(0);
}

SanParser::BinaryConditionalOperationContext::BinaryConditionalOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::BinaryConditionalOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBinaryConditionalOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeCastContext ------------------------------------------------------------------

SanParser::ExpressionContext* SanParser::TypeCastContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::TypeCastContext::As() {
  return getToken(SanParser::As, 0);
}

SanParser::TypeContext* SanParser::TypeCastContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

SanParser::TypeCastContext::TypeCastContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::TypeCastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassInstantiationExpressionContext ------------------------------------------------------------------

SanParser::ClassTypeNameContext* SanParser::ClassInstantiationExpressionContext::classTypeName() {
  return getRuleContext<SanParser::ClassTypeNameContext>(0);
}

tree::TerminalNode* SanParser::ClassInstantiationExpressionContext::OpeningBrace() {
  return getToken(SanParser::OpeningBrace, 0);
}

tree::TerminalNode* SanParser::ClassInstantiationExpressionContext::ClosingBrace() {
  return getToken(SanParser::ClosingBrace, 0);
}

SanParser::ClassInstantiationPropertiesContext* SanParser::ClassInstantiationExpressionContext::classInstantiationProperties() {
  return getRuleContext<SanParser::ClassInstantiationPropertiesContext>(0);
}

SanParser::ClassInstantiationExpressionContext::ClassInstantiationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::ClassInstantiationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryComparisonOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::BinaryComparisonOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::BinaryComparisonOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::ComparisonOperatorStatementContext* SanParser::BinaryComparisonOperationContext::comparisonOperatorStatement() {
  return getRuleContext<SanParser::ComparisonOperatorStatementContext>(0);
}

SanParser::BinaryComparisonOperationContext::BinaryComparisonOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::BinaryComparisonOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBinaryComparisonOperation(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ExpressionContext* SanParser::expression() {
   return expression(0);
}

SanParser::ExpressionContext* SanParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SanParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SanParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, SanParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(216);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(191);
      match(SanParser::OpeningParen);
      setState(192);
      expression(0);
      setState(193);
      match(SanParser::ClosingParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SizeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(195);
      match(SanParser::SizeOf);
      setState(198);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(196);
        expression(0);
        break;
      }

      case 2: {
        setState(197);
        type();
        break;
      }

      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ClassInstantiationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(200);
      classTypeName();
      setState(201);
      match(SanParser::OpeningBrace);
      setState(203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SanParser::VariableName) {
        setState(202);
        classInstantiationProperties();
      }
      setState(205);
      match(SanParser::ClosingBrace);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UnaryNegativeExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(207);
      match(SanParser::Sub);
      setState(208);
      expression(14);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryPositiveExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(209);
      match(SanParser::Add);
      setState(210);
      expression(13);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UnaryNegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(211);
      match(SanParser::Not);
      setState(212);
      expression(12);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(213);
      function();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NameExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(214);
      scopedName();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<LiteralDeclarationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(215);
      literal();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(261);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(218);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(219);
          multiplicativeOperatorStatement();
          setState(220);
          expression(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(222);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(223);
          operatorStatement();
          setState(224);
          expression(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryBitwiseOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(226);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(227);
          bitwiseOperatorStatement();
          setState(228);
          expression(5);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryComparisonOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(230);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(231);
          comparisonOperatorStatement();
          setState(232);
          expression(4);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryConditionalOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(234);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(235);
          conditionalOperatorStatement();
          setState(236);
          expression(3);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EqualityOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(239);
          equalityOperatorStatement();
          setState(240);
          expression(2);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<PropertyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(243);
          _la = _input->LA(1);
          if (!(_la == SanParser::Dot

          || _la == SanParser::Arrow)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(244);
          name();
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(245);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(246);
          match(SanParser::OpeningParen);
          setState(248);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SanParser::Add)
            | (1ULL << SanParser::Sub)
            | (1ULL << SanParser::Not)
            | (1ULL << SanParser::OpeningParen)
            | (1ULL << SanParser::SizeOf)
            | (1ULL << SanParser::Function)
            | (1ULL << SanParser::Extern)
            | (1ULL << SanParser::Attribute)
            | (1ULL << SanParser::True)
            | (1ULL << SanParser::False)
            | (1ULL << SanParser::VariableName)
            | (1ULL << SanParser::StringLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (SanParser::CharLiteral - 64))
            | (1ULL << (SanParser::DecimalLiteral - 64))
            | (1ULL << (SanParser::FloatingLiteral - 64))
            | (1ULL << (SanParser::ZeroLiteral - 64))
            | (1ULL << (SanParser::HexadecimalLiteral - 64))
            | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
            setState(247);
            functionCallArguments();
          }
          setState(250);
          match(SanParser::ClosingParen);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<IndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(251);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(252);
          match(SanParser::OpeningBracket);
          setState(253);
          expression(0);
          setState(254);
          match(SanParser::ClosingBracket);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<SuffixUnaryNegationExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(256);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(257);
          match(SanParser::Not);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<TypeCastContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(258);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(259);
          match(SanParser::As);
          setState(260);
          type();
          break;
        }

        } 
      }
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ScopedNameContext ------------------------------------------------------------------

SanParser::ScopedNameContext::ScopedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::NameContext* SanParser::ScopedNameContext::name() {
  return getRuleContext<SanParser::NameContext>(0);
}

SanParser::ScopeResolverContext* SanParser::ScopedNameContext::scopeResolver() {
  return getRuleContext<SanParser::ScopeResolverContext>(0);
}


size_t SanParser::ScopedNameContext::getRuleIndex() const {
  return SanParser::RuleScopedName;
}


antlrcpp::Any SanParser::ScopedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitScopedName(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ScopedNameContext* SanParser::scopedName() {
  ScopedNameContext *_localctx = _tracker.createInstance<ScopedNameContext>(_ctx, getState());
  enterRule(_localctx, 8, SanParser::RuleScopedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(266);
      scopeResolver();
      break;
    }

    }
    setState(269);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

SanParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::NameContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ClassTypeNameGenericsContext* SanParser::NameContext::classTypeNameGenerics() {
  return getRuleContext<SanParser::ClassTypeNameGenericsContext>(0);
}


size_t SanParser::NameContext::getRuleIndex() const {
  return SanParser::RuleName;
}


antlrcpp::Any SanParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

SanParser::NameContext* SanParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 10, SanParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(271);
    match(SanParser::VariableName);
    setState(273);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(272);
      classTypeNameGenerics();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopedNameNoGenericContext ------------------------------------------------------------------

SanParser::ScopedNameNoGenericContext::ScopedNameNoGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::NameNoGenericContext* SanParser::ScopedNameNoGenericContext::nameNoGeneric() {
  return getRuleContext<SanParser::NameNoGenericContext>(0);
}

SanParser::ScopeResolverContext* SanParser::ScopedNameNoGenericContext::scopeResolver() {
  return getRuleContext<SanParser::ScopeResolverContext>(0);
}


size_t SanParser::ScopedNameNoGenericContext::getRuleIndex() const {
  return SanParser::RuleScopedNameNoGeneric;
}


antlrcpp::Any SanParser::ScopedNameNoGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitScopedNameNoGeneric(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ScopedNameNoGenericContext* SanParser::scopedNameNoGeneric() {
  ScopedNameNoGenericContext *_localctx = _tracker.createInstance<ScopedNameNoGenericContext>(_ctx, getState());
  enterRule(_localctx, 12, SanParser::RuleScopedNameNoGeneric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(275);
      scopeResolver();
      break;
    }

    }
    setState(278);
    nameNoGeneric();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameNoGenericContext ------------------------------------------------------------------

SanParser::NameNoGenericContext::NameNoGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::NameNoGenericContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}


size_t SanParser::NameNoGenericContext::getRuleIndex() const {
  return SanParser::RuleNameNoGeneric;
}


antlrcpp::Any SanParser::NameNoGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitNameNoGeneric(this);
  else
    return visitor->visitChildren(this);
}

SanParser::NameNoGenericContext* SanParser::nameNoGeneric() {
  NameNoGenericContext *_localctx = _tracker.createInstance<NameNoGenericContext>(_ctx, getState());
  enterRule(_localctx, 14, SanParser::RuleNameNoGeneric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    match(SanParser::VariableName);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeResolverContext ------------------------------------------------------------------

SanParser::ScopeResolverContext::ScopeResolverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::NameContext* SanParser::ScopeResolverContext::name() {
  return getRuleContext<SanParser::NameContext>(0);
}

tree::TerminalNode* SanParser::ScopeResolverContext::ScopeResolver() {
  return getToken(SanParser::ScopeResolver, 0);
}

SanParser::ScopeResolverContext* SanParser::ScopeResolverContext::scopeResolver() {
  return getRuleContext<SanParser::ScopeResolverContext>(0);
}


size_t SanParser::ScopeResolverContext::getRuleIndex() const {
  return SanParser::RuleScopeResolver;
}


antlrcpp::Any SanParser::ScopeResolverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitScopeResolver(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ScopeResolverContext* SanParser::scopeResolver() {
  ScopeResolverContext *_localctx = _tracker.createInstance<ScopeResolverContext>(_ctx, getState());
  enterRule(_localctx, 16, SanParser::RuleScopeResolver);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    name();
    setState(283);
    match(SanParser::ScopeResolver);
    setState(285);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(284);
      scopeResolver();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeOperatorStatementContext ------------------------------------------------------------------

SanParser::MultiplicativeOperatorStatementContext::MultiplicativeOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::MultiplicativeOperatorStatementContext::Mul() {
  return getToken(SanParser::Mul, 0);
}

tree::TerminalNode* SanParser::MultiplicativeOperatorStatementContext::Div() {
  return getToken(SanParser::Div, 0);
}

tree::TerminalNode* SanParser::MultiplicativeOperatorStatementContext::Mod() {
  return getToken(SanParser::Mod, 0);
}


size_t SanParser::MultiplicativeOperatorStatementContext::getRuleIndex() const {
  return SanParser::RuleMultiplicativeOperatorStatement;
}


antlrcpp::Any SanParser::MultiplicativeOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::MultiplicativeOperatorStatementContext* SanParser::multiplicativeOperatorStatement() {
  MultiplicativeOperatorStatementContext *_localctx = _tracker.createInstance<MultiplicativeOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, SanParser::RuleMultiplicativeOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Mul)
      | (1ULL << SanParser::Div)
      | (1ULL << SanParser::Mod))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorStatementContext ------------------------------------------------------------------

SanParser::OperatorStatementContext::OperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::OperatorStatementContext::Add() {
  return getToken(SanParser::Add, 0);
}

tree::TerminalNode* SanParser::OperatorStatementContext::Sub() {
  return getToken(SanParser::Sub, 0);
}


size_t SanParser::OperatorStatementContext::getRuleIndex() const {
  return SanParser::RuleOperatorStatement;
}


antlrcpp::Any SanParser::OperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::OperatorStatementContext* SanParser::operatorStatement() {
  OperatorStatementContext *_localctx = _tracker.createInstance<OperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SanParser::RuleOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    _la = _input->LA(1);
    if (!(_la == SanParser::Add

    || _la == SanParser::Sub)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitwiseOperatorStatementContext ------------------------------------------------------------------

SanParser::BitwiseOperatorStatementContext::BitwiseOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::BitwiseOperatorStatementContext::Xor() {
  return getToken(SanParser::Xor, 0);
}

tree::TerminalNode* SanParser::BitwiseOperatorStatementContext::BitwiseOr() {
  return getToken(SanParser::BitwiseOr, 0);
}

tree::TerminalNode* SanParser::BitwiseOperatorStatementContext::BitwiseAnd() {
  return getToken(SanParser::BitwiseAnd, 0);
}


size_t SanParser::BitwiseOperatorStatementContext::getRuleIndex() const {
  return SanParser::RuleBitwiseOperatorStatement;
}


antlrcpp::Any SanParser::BitwiseOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::BitwiseOperatorStatementContext* SanParser::bitwiseOperatorStatement() {
  BitwiseOperatorStatementContext *_localctx = _tracker.createInstance<BitwiseOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, SanParser::RuleBitwiseOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Xor)
      | (1ULL << SanParser::BitwiseOr)
      | (1ULL << SanParser::BitwiseAnd))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOperatorStatementContext ------------------------------------------------------------------

SanParser::ConditionalOperatorStatementContext::ConditionalOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ConditionalOperatorStatementContext::ConditionalOr() {
  return getToken(SanParser::ConditionalOr, 0);
}

tree::TerminalNode* SanParser::ConditionalOperatorStatementContext::ConditionalAnd() {
  return getToken(SanParser::ConditionalAnd, 0);
}


size_t SanParser::ConditionalOperatorStatementContext::getRuleIndex() const {
  return SanParser::RuleConditionalOperatorStatement;
}


antlrcpp::Any SanParser::ConditionalOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitConditionalOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ConditionalOperatorStatementContext* SanParser::conditionalOperatorStatement() {
  ConditionalOperatorStatementContext *_localctx = _tracker.createInstance<ConditionalOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, SanParser::RuleConditionalOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    _la = _input->LA(1);
    if (!(_la == SanParser::ConditionalOr

    || _la == SanParser::ConditionalAnd)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorStatementContext ------------------------------------------------------------------

SanParser::ComparisonOperatorStatementContext::ComparisonOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ComparisonOperatorStatementContext::EqualTo() {
  return getToken(SanParser::EqualTo, 0);
}

tree::TerminalNode* SanParser::ComparisonOperatorStatementContext::NotEqualTo() {
  return getToken(SanParser::NotEqualTo, 0);
}

tree::TerminalNode* SanParser::ComparisonOperatorStatementContext::LessThanOrEqualTo() {
  return getToken(SanParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* SanParser::ComparisonOperatorStatementContext::GreaterThanOrEqualTo() {
  return getToken(SanParser::GreaterThanOrEqualTo, 0);
}

tree::TerminalNode* SanParser::ComparisonOperatorStatementContext::LessThan() {
  return getToken(SanParser::LessThan, 0);
}

tree::TerminalNode* SanParser::ComparisonOperatorStatementContext::GreaterThan() {
  return getToken(SanParser::GreaterThan, 0);
}


size_t SanParser::ComparisonOperatorStatementContext::getRuleIndex() const {
  return SanParser::RuleComparisonOperatorStatement;
}


antlrcpp::Any SanParser::ComparisonOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ComparisonOperatorStatementContext* SanParser::comparisonOperatorStatement() {
  ComparisonOperatorStatementContext *_localctx = _tracker.createInstance<ComparisonOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, SanParser::RuleComparisonOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::EqualTo)
      | (1ULL << SanParser::NotEqualTo)
      | (1ULL << SanParser::LessThanOrEqualTo)
      | (1ULL << SanParser::GreaterThanOrEqualTo)
      | (1ULL << SanParser::LessThan)
      | (1ULL << SanParser::GreaterThan))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityOperatorStatementContext ------------------------------------------------------------------

SanParser::EqualityOperatorStatementContext::EqualityOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::Equal() {
  return getToken(SanParser::Equal, 0);
}


size_t SanParser::EqualityOperatorStatementContext::getRuleIndex() const {
  return SanParser::RuleEqualityOperatorStatement;
}


antlrcpp::Any SanParser::EqualityOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::EqualityOperatorStatementContext* SanParser::equalityOperatorStatement() {
  EqualityOperatorStatementContext *_localctx = _tracker.createInstance<EqualityOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, SanParser::RuleEqualityOperatorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(SanParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

SanParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::BooleanLiteralContext* SanParser::LiteralContext::booleanLiteral() {
  return getRuleContext<SanParser::BooleanLiteralContext>(0);
}

SanParser::IntegerLiteralContext* SanParser::LiteralContext::integerLiteral() {
  return getRuleContext<SanParser::IntegerLiteralContext>(0);
}

SanParser::FloatingLiteralContext* SanParser::LiteralContext::floatingLiteral() {
  return getRuleContext<SanParser::FloatingLiteralContext>(0);
}

SanParser::StringLiteralContext* SanParser::LiteralContext::stringLiteral() {
  return getRuleContext<SanParser::StringLiteralContext>(0);
}

tree::TerminalNode* SanParser::LiteralContext::CharLiteral() {
  return getToken(SanParser::CharLiteral, 0);
}


size_t SanParser::LiteralContext::getRuleIndex() const {
  return SanParser::RuleLiteral;
}


antlrcpp::Any SanParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

SanParser::LiteralContext* SanParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 30, SanParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::True:
      case SanParser::False: {
        enterOuterAlt(_localctx, 1);
        setState(299);
        booleanLiteral();
        break;
      }

      case SanParser::DecimalLiteral:
      case SanParser::ZeroLiteral:
      case SanParser::HexadecimalLiteral:
      case SanParser::BinaryLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(300);
        integerLiteral();
        break;
      }

      case SanParser::FloatingLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(301);
        floatingLiteral();
        break;
      }

      case SanParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(302);
        stringLiteral();
        break;
      }

      case SanParser::CharLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(303);
        match(SanParser::CharLiteral);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

SanParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::BooleanLiteralContext::True() {
  return getToken(SanParser::True, 0);
}

tree::TerminalNode* SanParser::BooleanLiteralContext::False() {
  return getToken(SanParser::False, 0);
}


size_t SanParser::BooleanLiteralContext::getRuleIndex() const {
  return SanParser::RuleBooleanLiteral;
}


antlrcpp::Any SanParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

SanParser::BooleanLiteralContext* SanParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 32, SanParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    _la = _input->LA(1);
    if (!(_la == SanParser::True

    || _la == SanParser::False)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

SanParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::IntegerLiteralContext::DecimalLiteral() {
  return getToken(SanParser::DecimalLiteral, 0);
}

tree::TerminalNode* SanParser::IntegerLiteralContext::ZeroLiteral() {
  return getToken(SanParser::ZeroLiteral, 0);
}

tree::TerminalNode* SanParser::IntegerLiteralContext::HexadecimalLiteral() {
  return getToken(SanParser::HexadecimalLiteral, 0);
}

tree::TerminalNode* SanParser::IntegerLiteralContext::BinaryLiteral() {
  return getToken(SanParser::BinaryLiteral, 0);
}


size_t SanParser::IntegerLiteralContext::getRuleIndex() const {
  return SanParser::RuleIntegerLiteral;
}


antlrcpp::Any SanParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

SanParser::IntegerLiteralContext* SanParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 34, SanParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    _la = _input->LA(1);
    if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SanParser::DecimalLiteral - 65))
      | (1ULL << (SanParser::ZeroLiteral - 65))
      | (1ULL << (SanParser::HexadecimalLiteral - 65))
      | (1ULL << (SanParser::BinaryLiteral - 65)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatingLiteralContext ------------------------------------------------------------------

SanParser::FloatingLiteralContext::FloatingLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FloatingLiteralContext::FloatingLiteral() {
  return getToken(SanParser::FloatingLiteral, 0);
}


size_t SanParser::FloatingLiteralContext::getRuleIndex() const {
  return SanParser::RuleFloatingLiteral;
}


antlrcpp::Any SanParser::FloatingLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFloatingLiteral(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FloatingLiteralContext* SanParser::floatingLiteral() {
  FloatingLiteralContext *_localctx = _tracker.createInstance<FloatingLiteralContext>(_ctx, getState());
  enterRule(_localctx, 36, SanParser::RuleFloatingLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    match(SanParser::FloatingLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

SanParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SanParser::StringLiteralContext::StringLiteral() {
  return getTokens(SanParser::StringLiteral);
}

tree::TerminalNode* SanParser::StringLiteralContext::StringLiteral(size_t i) {
  return getToken(SanParser::StringLiteral, i);
}


size_t SanParser::StringLiteralContext::getRuleIndex() const {
  return SanParser::RuleStringLiteral;
}


antlrcpp::Any SanParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

SanParser::StringLiteralContext* SanParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 38, SanParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(313); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(312);
              match(SanParser::StringLiteral);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(315); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

SanParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::VariableDeclarationContext::VariableDeclarator() {
  return getToken(SanParser::VariableDeclarator, 0);
}

tree::TerminalNode* SanParser::VariableDeclarationContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::VariableDeclarationContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::VariableDeclarationContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::VariableDeclarationContext::Equal() {
  return getToken(SanParser::Equal, 0);
}

SanParser::ExpressionContext* SanParser::VariableDeclarationContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}


size_t SanParser::VariableDeclarationContext::getRuleIndex() const {
  return SanParser::RuleVariableDeclaration;
}


antlrcpp::Any SanParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SanParser::VariableDeclarationContext* SanParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, SanParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(SanParser::VariableDeclarator);
    setState(318);
    match(SanParser::VariableName);
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Colon: {
        setState(319);
        match(SanParser::Colon);
        setState(320);
        type();
        setState(323);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Equal) {
          setState(321);
          match(SanParser::Equal);
          setState(322);
          expression(0);
        }
        break;
      }

      case SanParser::Equal: {
        setState(325);
        match(SanParser::Equal);
        setState(326);
        expression(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallArgumentsContext ------------------------------------------------------------------

SanParser::FunctionCallArgumentsContext::FunctionCallArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SanParser::FunctionCallArgumentContext *> SanParser::FunctionCallArgumentsContext::functionCallArgument() {
  return getRuleContexts<SanParser::FunctionCallArgumentContext>();
}

SanParser::FunctionCallArgumentContext* SanParser::FunctionCallArgumentsContext::functionCallArgument(size_t i) {
  return getRuleContext<SanParser::FunctionCallArgumentContext>(i);
}

std::vector<tree::TerminalNode *> SanParser::FunctionCallArgumentsContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::FunctionCallArgumentsContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::FunctionCallArgumentsContext::getRuleIndex() const {
  return SanParser::RuleFunctionCallArguments;
}


antlrcpp::Any SanParser::FunctionCallArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArguments(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionCallArgumentsContext* SanParser::functionCallArguments() {
  FunctionCallArgumentsContext *_localctx = _tracker.createInstance<FunctionCallArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 42, SanParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    functionCallArgument();
    setState(334);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(330);
      match(SanParser::Comma);
      setState(331);
      functionCallArgument();
      setState(336);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallArgumentContext ------------------------------------------------------------------

SanParser::FunctionCallArgumentContext::FunctionCallArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::ExpressionContext* SanParser::FunctionCallArgumentContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}


size_t SanParser::FunctionCallArgumentContext::getRuleIndex() const {
  return SanParser::RuleFunctionCallArgument;
}


antlrcpp::Any SanParser::FunctionCallArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArgument(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionCallArgumentContext* SanParser::functionCallArgument() {
  FunctionCallArgumentContext *_localctx = _tracker.createInstance<FunctionCallArgumentContext>(_ctx, getState());
  enterRule(_localctx, 44, SanParser::RuleFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OverloadableOperatorContext ------------------------------------------------------------------

SanParser::OverloadableOperatorContext::OverloadableOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Add() {
  return getToken(SanParser::Add, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Sub() {
  return getToken(SanParser::Sub, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Mul() {
  return getToken(SanParser::Mul, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Div() {
  return getToken(SanParser::Div, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Mod() {
  return getToken(SanParser::Mod, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Not() {
  return getToken(SanParser::Not, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::Xor() {
  return getToken(SanParser::Xor, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::BitwiseOr() {
  return getToken(SanParser::BitwiseOr, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::BitwiseAnd() {
  return getToken(SanParser::BitwiseAnd, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::EqualTo() {
  return getToken(SanParser::EqualTo, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::NotEqualTo() {
  return getToken(SanParser::NotEqualTo, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::LessThan() {
  return getToken(SanParser::LessThan, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::LessThanOrEqualTo() {
  return getToken(SanParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::GreaterThan() {
  return getToken(SanParser::GreaterThan, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::GreaterThanOrEqualTo() {
  return getToken(SanParser::GreaterThanOrEqualTo, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::OpeningBracket() {
  return getToken(SanParser::OpeningBracket, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::ClosingBracket() {
  return getToken(SanParser::ClosingBracket, 0);
}


size_t SanParser::OverloadableOperatorContext::getRuleIndex() const {
  return SanParser::RuleOverloadableOperator;
}


antlrcpp::Any SanParser::OverloadableOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitOverloadableOperator(this);
  else
    return visitor->visitChildren(this);
}

SanParser::OverloadableOperatorContext* SanParser::overloadableOperator() {
  OverloadableOperatorContext *_localctx = _tracker.createInstance<OverloadableOperatorContext>(_ctx, getState());
  enterRule(_localctx, 46, SanParser::RuleOverloadableOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(358);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(339);
      match(SanParser::Add);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(340);
      match(SanParser::Sub);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(341);
      match(SanParser::Mul);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(342);
      match(SanParser::Div);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(343);
      match(SanParser::Mod);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(344);
      match(SanParser::Not);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(345);
      match(SanParser::Add);
      setState(346);
      match(SanParser::Not);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(347);
      match(SanParser::Xor);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(348);
      match(SanParser::BitwiseOr);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(349);
      match(SanParser::BitwiseAnd);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(350);
      match(SanParser::EqualTo);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(351);
      match(SanParser::NotEqualTo);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(352);
      match(SanParser::LessThan);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(353);
      match(SanParser::LessThanOrEqualTo);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(354);
      match(SanParser::GreaterThan);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(355);
      match(SanParser::GreaterThanOrEqualTo);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(356);
      match(SanParser::OpeningBracket);
      setState(357);
      match(SanParser::ClosingBracket);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

SanParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::AttributesContext* SanParser::FunctionContext::attributes() {
  return getRuleContext<SanParser::AttributesContext>(0);
}

SanParser::FunctionDeclarationContext* SanParser::FunctionContext::functionDeclaration() {
  return getRuleContext<SanParser::FunctionDeclarationContext>(0);
}

SanParser::BodyContext* SanParser::FunctionContext::body() {
  return getRuleContext<SanParser::BodyContext>(0);
}

tree::TerminalNode* SanParser::FunctionContext::InstructionsSeparator() {
  return getToken(SanParser::InstructionsSeparator, 0);
}

tree::TerminalNode* SanParser::FunctionContext::Extern() {
  return getToken(SanParser::Extern, 0);
}


size_t SanParser::FunctionContext::getRuleIndex() const {
  return SanParser::RuleFunction;
}


antlrcpp::Any SanParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionContext* SanParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 48, SanParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    attributes();
    setState(362);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extern) {
      setState(361);
      match(SanParser::Extern);
    }
    setState(364);
    functionDeclaration();
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::OpeningBrace: {
        setState(365);
        body();
        break;
      }

      case SanParser::InstructionsSeparator: {
        setState(366);
        match(SanParser::InstructionsSeparator);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

SanParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Function() {
  return getToken(SanParser::Function, 0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Destructor() {
  return getToken(SanParser::Destructor, 0);
}

SanParser::FunctionArgumentsContext* SanParser::FunctionDeclarationContext::functionArguments() {
  return getRuleContext<SanParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ClassGenericsContext* SanParser::FunctionDeclarationContext::classGenerics() {
  return getRuleContext<SanParser::ClassGenericsContext>(0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::FunctionDeclarationContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

SanParser::OverloadableOperatorContext* SanParser::FunctionDeclarationContext::overloadableOperator() {
  return getRuleContext<SanParser::OverloadableOperatorContext>(0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Cast() {
  return getToken(SanParser::Cast, 0);
}

SanParser::CastFunctionTypeContext* SanParser::FunctionDeclarationContext::castFunctionType() {
  return getRuleContext<SanParser::CastFunctionTypeContext>(0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Comma() {
  return getToken(SanParser::Comma, 0);
}

SanParser::FunctionVariadicArgumentContext* SanParser::FunctionDeclarationContext::functionVariadicArgument() {
  return getRuleContext<SanParser::FunctionVariadicArgumentContext>(0);
}


size_t SanParser::FunctionDeclarationContext::getRuleIndex() const {
  return SanParser::RuleFunctionDeclaration;
}


antlrcpp::Any SanParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionDeclarationContext* SanParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 50, SanParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    match(SanParser::Function);
    setState(398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Add:
      case SanParser::Sub:
      case SanParser::Mul:
      case SanParser::Div:
      case SanParser::Mod:
      case SanParser::Not:
      case SanParser::EqualTo:
      case SanParser::NotEqualTo:
      case SanParser::LessThanOrEqualTo:
      case SanParser::GreaterThanOrEqualTo:
      case SanParser::LessThan:
      case SanParser::GreaterThan:
      case SanParser::Xor:
      case SanParser::BitwiseOr:
      case SanParser::BitwiseAnd:
      case SanParser::OpeningParen:
      case SanParser::OpeningBracket:
      case SanParser::Cast:
      case SanParser::VariableName: {
        setState(374);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          setState(370);
          overloadableOperator();
          break;
        }

        case 2: {
          setState(371);
          match(SanParser::Cast);
          setState(372);
          castFunctionType();
          break;
        }

        case 3: {
          setState(373);
          match(SanParser::VariableName);
          break;
        }

        }
        setState(377);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::LessThan) {
          setState(376);
          classGenerics();
        }
        setState(379);
        match(SanParser::OpeningParen);
        setState(388);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SanParser::Const:
          case SanParser::Function:
          case SanParser::VariableName: {
            setState(380);
            functionArguments();
            setState(383);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SanParser::Comma) {
              setState(381);
              match(SanParser::Comma);
              setState(382);
              functionVariadicArgument();
            }
            break;
          }

          case SanParser::ClosingParen:
          case SanParser::Variadic: {
            setState(386);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SanParser::Variadic) {
              setState(385);
              functionVariadicArgument();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(390);
        match(SanParser::ClosingParen);
        setState(393);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Colon) {
          setState(391);
          match(SanParser::Colon);
          setState(392);
          type();
        }
        break;
      }

      case SanParser::Destructor: {
        setState(395);
        match(SanParser::Destructor);
        setState(396);
        match(SanParser::OpeningParen);
        setState(397);
        match(SanParser::ClosingParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastFunctionTypeContext ------------------------------------------------------------------

SanParser::CastFunctionTypeContext::CastFunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::TypeContext* SanParser::CastFunctionTypeContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}


size_t SanParser::CastFunctionTypeContext::getRuleIndex() const {
  return SanParser::RuleCastFunctionType;
}


antlrcpp::Any SanParser::CastFunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitCastFunctionType(this);
  else
    return visitor->visitChildren(this);
}

SanParser::CastFunctionTypeContext* SanParser::castFunctionType() {
  CastFunctionTypeContext *_localctx = _tracker.createInstance<CastFunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 52, SanParser::RuleCastFunctionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(400);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionVariadicArgumentContext ------------------------------------------------------------------

SanParser::FunctionVariadicArgumentContext::FunctionVariadicArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FunctionVariadicArgumentContext::Variadic() {
  return getToken(SanParser::Variadic, 0);
}


size_t SanParser::FunctionVariadicArgumentContext::getRuleIndex() const {
  return SanParser::RuleFunctionVariadicArgument;
}


antlrcpp::Any SanParser::FunctionVariadicArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionVariadicArgument(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionVariadicArgumentContext* SanParser::functionVariadicArgument() {
  FunctionVariadicArgumentContext *_localctx = _tracker.createInstance<FunctionVariadicArgumentContext>(_ctx, getState());
  enterRule(_localctx, 54, SanParser::RuleFunctionVariadicArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(SanParser::Variadic);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentsContext ------------------------------------------------------------------

SanParser::FunctionArgumentsContext::FunctionArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SanParser::FunctionArgumentContext *> SanParser::FunctionArgumentsContext::functionArgument() {
  return getRuleContexts<SanParser::FunctionArgumentContext>();
}

SanParser::FunctionArgumentContext* SanParser::FunctionArgumentsContext::functionArgument(size_t i) {
  return getRuleContext<SanParser::FunctionArgumentContext>(i);
}

std::vector<tree::TerminalNode *> SanParser::FunctionArgumentsContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::FunctionArgumentsContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::FunctionArgumentsContext::getRuleIndex() const {
  return SanParser::RuleFunctionArguments;
}


antlrcpp::Any SanParser::FunctionArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArguments(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionArgumentsContext* SanParser::functionArguments() {
  FunctionArgumentsContext *_localctx = _tracker.createInstance<FunctionArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 56, SanParser::RuleFunctionArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(404);
    functionArgument();
    setState(409);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(405);
        match(SanParser::Comma);
        setState(406);
        functionArgument(); 
      }
      setState(411);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentContext ------------------------------------------------------------------

SanParser::FunctionArgumentContext::FunctionArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::TypeContext* SanParser::FunctionArgumentContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::FunctionArgumentContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::FunctionArgumentContext::Colon() {
  return getToken(SanParser::Colon, 0);
}


size_t SanParser::FunctionArgumentContext::getRuleIndex() const {
  return SanParser::RuleFunctionArgument;
}


antlrcpp::Any SanParser::FunctionArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgument(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionArgumentContext* SanParser::functionArgument() {
  FunctionArgumentContext *_localctx = _tracker.createInstance<FunctionArgumentContext>(_ctx, getState());
  enterRule(_localctx, 58, SanParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(412);
      match(SanParser::VariableName);
      setState(413);
      match(SanParser::Colon);
      break;
    }

    }
    setState(416);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

SanParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ReturnStatementContext::Return() {
  return getToken(SanParser::Return, 0);
}

SanParser::ExpressionContext* SanParser::ReturnStatementContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}


size_t SanParser::ReturnStatementContext::getRuleIndex() const {
  return SanParser::RuleReturnStatement;
}


antlrcpp::Any SanParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ReturnStatementContext* SanParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 60, SanParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(SanParser::Return);
    setState(420);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Add)
      | (1ULL << SanParser::Sub)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Attribute)
      | (1ULL << SanParser::True)
      | (1ULL << SanParser::False)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::CharLiteral - 64))
      | (1ULL << (SanParser::DecimalLiteral - 64))
      | (1ULL << (SanParser::FloatingLiteral - 64))
      | (1ULL << (SanParser::ZeroLiteral - 64))
      | (1ULL << (SanParser::HexadecimalLiteral - 64))
      | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
      setState(419);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

SanParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::IfStatementContext::If() {
  return getToken(SanParser::If, 0);
}

SanParser::StatementContext* SanParser::IfStatementContext::statement() {
  return getRuleContext<SanParser::StatementContext>(0);
}

SanParser::ExpressionContext* SanParser::IfStatementContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::VariableDeclarationContext* SanParser::IfStatementContext::variableDeclaration() {
  return getRuleContext<SanParser::VariableDeclarationContext>(0);
}

SanParser::ElseStatementContext* SanParser::IfStatementContext::elseStatement() {
  return getRuleContext<SanParser::ElseStatementContext>(0);
}


size_t SanParser::IfStatementContext::getRuleIndex() const {
  return SanParser::RuleIfStatement;
}


antlrcpp::Any SanParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::IfStatementContext* SanParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 62, SanParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    match(SanParser::If);
    setState(425);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Add:
      case SanParser::Sub:
      case SanParser::Not:
      case SanParser::OpeningParen:
      case SanParser::SizeOf:
      case SanParser::Function:
      case SanParser::Extern:
      case SanParser::Attribute:
      case SanParser::True:
      case SanParser::False:
      case SanParser::VariableName:
      case SanParser::StringLiteral:
      case SanParser::CharLiteral:
      case SanParser::DecimalLiteral:
      case SanParser::FloatingLiteral:
      case SanParser::ZeroLiteral:
      case SanParser::HexadecimalLiteral:
      case SanParser::BinaryLiteral: {
        setState(423);
        expression(0);
        break;
      }

      case SanParser::VariableDeclarator: {
        setState(424);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(427);
    statement();
    setState(429);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(428);
      elseStatement();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

SanParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ElseStatementContext::Else() {
  return getToken(SanParser::Else, 0);
}

SanParser::StatementContext* SanParser::ElseStatementContext::statement() {
  return getRuleContext<SanParser::StatementContext>(0);
}


size_t SanParser::ElseStatementContext::getRuleIndex() const {
  return SanParser::RuleElseStatement;
}


antlrcpp::Any SanParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ElseStatementContext* SanParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 64, SanParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(SanParser::Else);
    setState(432);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

SanParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::WhileStatementContext::While() {
  return getToken(SanParser::While, 0);
}

SanParser::ExpressionContext* SanParser::WhileStatementContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::StatementContext* SanParser::WhileStatementContext::statement() {
  return getRuleContext<SanParser::StatementContext>(0);
}


size_t SanParser::WhileStatementContext::getRuleIndex() const {
  return SanParser::RuleWhileStatement;
}


antlrcpp::Any SanParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::WhileStatementContext* SanParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 66, SanParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(SanParser::While);
    setState(435);
    expression(0);
    setState(436);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStatementContext ------------------------------------------------------------------

SanParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ForStatementContext::For() {
  return getToken(SanParser::For, 0);
}

tree::TerminalNode* SanParser::ForStatementContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::ForStatementContext::In() {
  return getToken(SanParser::In, 0);
}

SanParser::ExpressionContext* SanParser::ForStatementContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::StatementContext* SanParser::ForStatementContext::statement() {
  return getRuleContext<SanParser::StatementContext>(0);
}


size_t SanParser::ForStatementContext::getRuleIndex() const {
  return SanParser::RuleForStatement;
}


antlrcpp::Any SanParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ForStatementContext* SanParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 68, SanParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(SanParser::For);
    setState(439);
    match(SanParser::VariableName);
    setState(440);
    match(SanParser::In);
    setState(441);
    expression(0);
    setState(442);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreakStatementContext ------------------------------------------------------------------

SanParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::BreakStatementContext::Break() {
  return getToken(SanParser::Break, 0);
}


size_t SanParser::BreakStatementContext::getRuleIndex() const {
  return SanParser::RuleBreakStatement;
}


antlrcpp::Any SanParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::BreakStatementContext* SanParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 70, SanParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    match(SanParser::Break);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionStatementContext ------------------------------------------------------------------

SanParser::UnionStatementContext::UnionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::AttributesContext* SanParser::UnionStatementContext::attributes() {
  return getRuleContext<SanParser::AttributesContext>(0);
}

tree::TerminalNode* SanParser::UnionStatementContext::Union() {
  return getToken(SanParser::Union, 0);
}

tree::TerminalNode* SanParser::UnionStatementContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::UnionBodyContext* SanParser::UnionStatementContext::unionBody() {
  return getRuleContext<SanParser::UnionBodyContext>(0);
}


size_t SanParser::UnionStatementContext::getRuleIndex() const {
  return SanParser::RuleUnionStatement;
}


antlrcpp::Any SanParser::UnionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitUnionStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::UnionStatementContext* SanParser::unionStatement() {
  UnionStatementContext *_localctx = _tracker.createInstance<UnionStatementContext>(_ctx, getState());
  enterRule(_localctx, 72, SanParser::RuleUnionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    attributes();
    setState(447);
    match(SanParser::Union);
    setState(448);
    match(SanParser::VariableName);
    setState(449);
    unionBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionBodyContext ------------------------------------------------------------------

SanParser::UnionBodyContext::UnionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::UnionBodyContext::OpeningBrace() {
  return getToken(SanParser::OpeningBrace, 0);
}

tree::TerminalNode* SanParser::UnionBodyContext::ClosingBrace() {
  return getToken(SanParser::ClosingBrace, 0);
}

std::vector<SanParser::UnionPropertyContext *> SanParser::UnionBodyContext::unionProperty() {
  return getRuleContexts<SanParser::UnionPropertyContext>();
}

SanParser::UnionPropertyContext* SanParser::UnionBodyContext::unionProperty(size_t i) {
  return getRuleContext<SanParser::UnionPropertyContext>(i);
}


size_t SanParser::UnionBodyContext::getRuleIndex() const {
  return SanParser::RuleUnionBody;
}


antlrcpp::Any SanParser::UnionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitUnionBody(this);
  else
    return visitor->visitChildren(this);
}

SanParser::UnionBodyContext* SanParser::unionBody() {
  UnionBodyContext *_localctx = _tracker.createInstance<UnionBodyContext>(_ctx, getState());
  enterRule(_localctx, 74, SanParser::RuleUnionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(SanParser::OpeningBrace);
    setState(455);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::VariableName) {
      setState(452);
      unionProperty();
      setState(457);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(458);
    match(SanParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionPropertyContext ------------------------------------------------------------------

SanParser::UnionPropertyContext::UnionPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::UnionPropertyContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::UnionPropertyContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::UnionPropertyContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::UnionPropertyContext::InstructionsSeparator() {
  return getToken(SanParser::InstructionsSeparator, 0);
}


size_t SanParser::UnionPropertyContext::getRuleIndex() const {
  return SanParser::RuleUnionProperty;
}


antlrcpp::Any SanParser::UnionPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitUnionProperty(this);
  else
    return visitor->visitChildren(this);
}

SanParser::UnionPropertyContext* SanParser::unionProperty() {
  UnionPropertyContext *_localctx = _tracker.createInstance<UnionPropertyContext>(_ctx, getState());
  enterRule(_localctx, 76, SanParser::RuleUnionProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(SanParser::VariableName);
    setState(461);
    match(SanParser::Colon);
    setState(462);
    type();
    setState(463);
    match(SanParser::InstructionsSeparator);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumStatementContext ------------------------------------------------------------------

SanParser::EnumStatementContext::EnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::AttributesContext* SanParser::EnumStatementContext::attributes() {
  return getRuleContext<SanParser::AttributesContext>(0);
}

tree::TerminalNode* SanParser::EnumStatementContext::Enum() {
  return getToken(SanParser::Enum, 0);
}

tree::TerminalNode* SanParser::EnumStatementContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::EnumBodyContext* SanParser::EnumStatementContext::enumBody() {
  return getRuleContext<SanParser::EnumBodyContext>(0);
}


size_t SanParser::EnumStatementContext::getRuleIndex() const {
  return SanParser::RuleEnumStatement;
}


antlrcpp::Any SanParser::EnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::EnumStatementContext* SanParser::enumStatement() {
  EnumStatementContext *_localctx = _tracker.createInstance<EnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, SanParser::RuleEnumStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    attributes();
    setState(466);
    match(SanParser::Enum);
    setState(467);
    match(SanParser::VariableName);
    setState(468);
    enumBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumBodyContext ------------------------------------------------------------------

SanParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::EnumBodyContext::OpeningBrace() {
  return getToken(SanParser::OpeningBrace, 0);
}

tree::TerminalNode* SanParser::EnumBodyContext::ClosingBrace() {
  return getToken(SanParser::ClosingBrace, 0);
}

std::vector<SanParser::EnumPropertyContext *> SanParser::EnumBodyContext::enumProperty() {
  return getRuleContexts<SanParser::EnumPropertyContext>();
}

SanParser::EnumPropertyContext* SanParser::EnumBodyContext::enumProperty(size_t i) {
  return getRuleContext<SanParser::EnumPropertyContext>(i);
}

std::vector<tree::TerminalNode *> SanParser::EnumBodyContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::EnumBodyContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::EnumBodyContext::getRuleIndex() const {
  return SanParser::RuleEnumBody;
}


antlrcpp::Any SanParser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

SanParser::EnumBodyContext* SanParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 80, SanParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(SanParser::OpeningBrace);
    setState(482);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::VariableName) {
      setState(471);
      enumProperty();
      setState(476);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(472);
          match(SanParser::Comma);
          setState(473);
          enumProperty(); 
        }
        setState(478);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      }
      setState(480);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SanParser::Comma) {
        setState(479);
        match(SanParser::Comma);
      }
    }
    setState(484);
    match(SanParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumPropertyContext ------------------------------------------------------------------

SanParser::EnumPropertyContext::EnumPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::EnumPropertyContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::EnumPropertyContext::Equal() {
  return getToken(SanParser::Equal, 0);
}

SanParser::ExpressionContext* SanParser::EnumPropertyContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}


size_t SanParser::EnumPropertyContext::getRuleIndex() const {
  return SanParser::RuleEnumProperty;
}


antlrcpp::Any SanParser::EnumPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitEnumProperty(this);
  else
    return visitor->visitChildren(this);
}

SanParser::EnumPropertyContext* SanParser::enumProperty() {
  EnumPropertyContext *_localctx = _tracker.createInstance<EnumPropertyContext>(_ctx, getState());
  enterRule(_localctx, 82, SanParser::RuleEnumProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(SanParser::VariableName);
    setState(489);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(487);
      match(SanParser::Equal);
      setState(488);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpecialClassStatementContext ------------------------------------------------------------------

SanParser::SpecialClassStatementContext::SpecialClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::AttributesContext* SanParser::SpecialClassStatementContext::attributes() {
  return getRuleContext<SanParser::AttributesContext>(0);
}

tree::TerminalNode* SanParser::SpecialClassStatementContext::Special() {
  return getToken(SanParser::Special, 0);
}

tree::TerminalNode* SanParser::SpecialClassStatementContext::Class() {
  return getToken(SanParser::Class, 0);
}

SanParser::ScopedNameNoGenericContext* SanParser::SpecialClassStatementContext::scopedNameNoGeneric() {
  return getRuleContext<SanParser::ScopedNameNoGenericContext>(0);
}

SanParser::ClassTypeNameGenericsContext* SanParser::SpecialClassStatementContext::classTypeNameGenerics() {
  return getRuleContext<SanParser::ClassTypeNameGenericsContext>(0);
}

SanParser::ClassBodyContext* SanParser::SpecialClassStatementContext::classBody() {
  return getRuleContext<SanParser::ClassBodyContext>(0);
}

tree::TerminalNode* SanParser::SpecialClassStatementContext::Extends() {
  return getToken(SanParser::Extends, 0);
}

SanParser::ClassExtendsContext* SanParser::SpecialClassStatementContext::classExtends() {
  return getRuleContext<SanParser::ClassExtendsContext>(0);
}


size_t SanParser::SpecialClassStatementContext::getRuleIndex() const {
  return SanParser::RuleSpecialClassStatement;
}


antlrcpp::Any SanParser::SpecialClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitSpecialClassStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::SpecialClassStatementContext* SanParser::specialClassStatement() {
  SpecialClassStatementContext *_localctx = _tracker.createInstance<SpecialClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, SanParser::RuleSpecialClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(491);
    attributes();
    setState(492);
    match(SanParser::Special);
    setState(493);
    match(SanParser::Class);
    setState(494);
    scopedNameNoGeneric();
    setState(495);
    classTypeNameGenerics();
    setState(498);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extends) {
      setState(496);
      match(SanParser::Extends);
      setState(497);
      classExtends();
    }
    setState(500);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassStatementContext ------------------------------------------------------------------

SanParser::ClassStatementContext::ClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::AttributesContext* SanParser::ClassStatementContext::attributes() {
  return getRuleContext<SanParser::AttributesContext>(0);
}

tree::TerminalNode* SanParser::ClassStatementContext::Class() {
  return getToken(SanParser::Class, 0);
}

tree::TerminalNode* SanParser::ClassStatementContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ClassBodyContext* SanParser::ClassStatementContext::classBody() {
  return getRuleContext<SanParser::ClassBodyContext>(0);
}

SanParser::ClassGenericsContext* SanParser::ClassStatementContext::classGenerics() {
  return getRuleContext<SanParser::ClassGenericsContext>(0);
}

tree::TerminalNode* SanParser::ClassStatementContext::Extends() {
  return getToken(SanParser::Extends, 0);
}

SanParser::ClassExtendsContext* SanParser::ClassStatementContext::classExtends() {
  return getRuleContext<SanParser::ClassExtendsContext>(0);
}


size_t SanParser::ClassStatementContext::getRuleIndex() const {
  return SanParser::RuleClassStatement;
}


antlrcpp::Any SanParser::ClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassStatementContext* SanParser::classStatement() {
  ClassStatementContext *_localctx = _tracker.createInstance<ClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, SanParser::RuleClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    attributes();
    setState(503);
    match(SanParser::Class);
    setState(504);
    match(SanParser::VariableName);
    setState(506);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(505);
      classGenerics();
    }
    setState(510);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extends) {
      setState(508);
      match(SanParser::Extends);
      setState(509);
      classExtends();
    }
    setState(512);
    classBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassGenericsContext ------------------------------------------------------------------

SanParser::ClassGenericsContext::ClassGenericsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ClassGenericsContext::LessThan() {
  return getToken(SanParser::LessThan, 0);
}

std::vector<tree::TerminalNode *> SanParser::ClassGenericsContext::VariableName() {
  return getTokens(SanParser::VariableName);
}

tree::TerminalNode* SanParser::ClassGenericsContext::VariableName(size_t i) {
  return getToken(SanParser::VariableName, i);
}

tree::TerminalNode* SanParser::ClassGenericsContext::GreaterThan() {
  return getToken(SanParser::GreaterThan, 0);
}

std::vector<tree::TerminalNode *> SanParser::ClassGenericsContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::ClassGenericsContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::ClassGenericsContext::getRuleIndex() const {
  return SanParser::RuleClassGenerics;
}


antlrcpp::Any SanParser::ClassGenericsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassGenerics(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassGenericsContext* SanParser::classGenerics() {
  ClassGenericsContext *_localctx = _tracker.createInstance<ClassGenericsContext>(_ctx, getState());
  enterRule(_localctx, 88, SanParser::RuleClassGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(SanParser::LessThan);
    setState(515);
    match(SanParser::VariableName);
    setState(520);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(516);
      match(SanParser::Comma);
      setState(517);
      match(SanParser::VariableName);
      setState(522);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(523);
    match(SanParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassExtendsContext ------------------------------------------------------------------

SanParser::ClassExtendsContext::ClassExtendsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SanParser::ClassTypeNameContext *> SanParser::ClassExtendsContext::classTypeName() {
  return getRuleContexts<SanParser::ClassTypeNameContext>();
}

SanParser::ClassTypeNameContext* SanParser::ClassExtendsContext::classTypeName(size_t i) {
  return getRuleContext<SanParser::ClassTypeNameContext>(i);
}

std::vector<tree::TerminalNode *> SanParser::ClassExtendsContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::ClassExtendsContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::ClassExtendsContext::getRuleIndex() const {
  return SanParser::RuleClassExtends;
}


antlrcpp::Any SanParser::ClassExtendsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassExtends(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassExtendsContext* SanParser::classExtends() {
  ClassExtendsContext *_localctx = _tracker.createInstance<ClassExtendsContext>(_ctx, getState());
  enterRule(_localctx, 90, SanParser::RuleClassExtends);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    classTypeName();
    setState(530);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(526);
      match(SanParser::Comma);
      setState(527);
      classTypeName();
      setState(532);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyContext ------------------------------------------------------------------

SanParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ClassBodyContext::OpeningBrace() {
  return getToken(SanParser::OpeningBrace, 0);
}

tree::TerminalNode* SanParser::ClassBodyContext::ClosingBrace() {
  return getToken(SanParser::ClosingBrace, 0);
}

std::vector<SanParser::ClassPropertyContext *> SanParser::ClassBodyContext::classProperty() {
  return getRuleContexts<SanParser::ClassPropertyContext>();
}

SanParser::ClassPropertyContext* SanParser::ClassBodyContext::classProperty(size_t i) {
  return getRuleContext<SanParser::ClassPropertyContext>(i);
}

std::vector<SanParser::ClassMethodContext *> SanParser::ClassBodyContext::classMethod() {
  return getRuleContexts<SanParser::ClassMethodContext>();
}

SanParser::ClassMethodContext* SanParser::ClassBodyContext::classMethod(size_t i) {
  return getRuleContext<SanParser::ClassMethodContext>(i);
}


size_t SanParser::ClassBodyContext::getRuleIndex() const {
  return SanParser::RuleClassBody;
}


antlrcpp::Any SanParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassBodyContext* SanParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 92, SanParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    match(SanParser::OpeningBrace);
    setState(538);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Static)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Attribute)
      | (1ULL << SanParser::VariableName))) != 0)) {
      setState(536);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
      case 1: {
        setState(534);
        classProperty();
        break;
      }

      case 2: {
        setState(535);
        classMethod();
        break;
      }

      }
      setState(540);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(541);
    match(SanParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassPropertyContext ------------------------------------------------------------------

SanParser::ClassPropertyContext::ClassPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ClassPropertyContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::ClassPropertyContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::ClassPropertyContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::ClassPropertyContext::InstructionsSeparator() {
  return getToken(SanParser::InstructionsSeparator, 0);
}

tree::TerminalNode* SanParser::ClassPropertyContext::Static() {
  return getToken(SanParser::Static, 0);
}

tree::TerminalNode* SanParser::ClassPropertyContext::Equal() {
  return getToken(SanParser::Equal, 0);
}

SanParser::ExpressionContext* SanParser::ClassPropertyContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}


size_t SanParser::ClassPropertyContext::getRuleIndex() const {
  return SanParser::RuleClassProperty;
}


antlrcpp::Any SanParser::ClassPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassProperty(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassPropertyContext* SanParser::classProperty() {
  ClassPropertyContext *_localctx = _tracker.createInstance<ClassPropertyContext>(_ctx, getState());
  enterRule(_localctx, 94, SanParser::RuleClassProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Static) {
      setState(543);
      match(SanParser::Static);
    }
    setState(546);
    match(SanParser::VariableName);
    setState(547);
    match(SanParser::Colon);
    setState(548);
    type();
    setState(551);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(549);
      match(SanParser::Equal);
      setState(550);
      expression(0);
    }
    setState(553);
    match(SanParser::InstructionsSeparator);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMethodContext ------------------------------------------------------------------

SanParser::ClassMethodContext::ClassMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::FunctionContext* SanParser::ClassMethodContext::function() {
  return getRuleContext<SanParser::FunctionContext>(0);
}

tree::TerminalNode* SanParser::ClassMethodContext::Static() {
  return getToken(SanParser::Static, 0);
}


size_t SanParser::ClassMethodContext::getRuleIndex() const {
  return SanParser::RuleClassMethod;
}


antlrcpp::Any SanParser::ClassMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassMethod(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassMethodContext* SanParser::classMethod() {
  ClassMethodContext *_localctx = _tracker.createInstance<ClassMethodContext>(_ctx, getState());
  enterRule(_localctx, 96, SanParser::RuleClassMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Static) {
      setState(555);
      match(SanParser::Static);
    }
    setState(558);
    function();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstantiationPropertiesContext ------------------------------------------------------------------

SanParser::ClassInstantiationPropertiesContext::ClassInstantiationPropertiesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SanParser::ClassInstantiationPropertyContext *> SanParser::ClassInstantiationPropertiesContext::classInstantiationProperty() {
  return getRuleContexts<SanParser::ClassInstantiationPropertyContext>();
}

SanParser::ClassInstantiationPropertyContext* SanParser::ClassInstantiationPropertiesContext::classInstantiationProperty(size_t i) {
  return getRuleContext<SanParser::ClassInstantiationPropertyContext>(i);
}

std::vector<tree::TerminalNode *> SanParser::ClassInstantiationPropertiesContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::ClassInstantiationPropertiesContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::ClassInstantiationPropertiesContext::getRuleIndex() const {
  return SanParser::RuleClassInstantiationProperties;
}


antlrcpp::Any SanParser::ClassInstantiationPropertiesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationProperties(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassInstantiationPropertiesContext* SanParser::classInstantiationProperties() {
  ClassInstantiationPropertiesContext *_localctx = _tracker.createInstance<ClassInstantiationPropertiesContext>(_ctx, getState());
  enterRule(_localctx, 98, SanParser::RuleClassInstantiationProperties);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(560);
    classInstantiationProperty();
    setState(565);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(561);
        match(SanParser::Comma);
        setState(562);
        classInstantiationProperty(); 
      }
      setState(567);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
    setState(569);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Comma) {
      setState(568);
      match(SanParser::Comma);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassInstantiationPropertyContext ------------------------------------------------------------------

SanParser::ClassInstantiationPropertyContext::ClassInstantiationPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ClassInstantiationPropertyContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::ClassInstantiationPropertyContext::Equal() {
  return getToken(SanParser::Equal, 0);
}

SanParser::ExpressionContext* SanParser::ClassInstantiationPropertyContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}


size_t SanParser::ClassInstantiationPropertyContext::getRuleIndex() const {
  return SanParser::RuleClassInstantiationProperty;
}


antlrcpp::Any SanParser::ClassInstantiationPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationProperty(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassInstantiationPropertyContext* SanParser::classInstantiationProperty() {
  ClassInstantiationPropertyContext *_localctx = _tracker.createInstance<ClassInstantiationPropertyContext>(_ctx, getState());
  enterRule(_localctx, 100, SanParser::RuleClassInstantiationProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    match(SanParser::VariableName);
    setState(574);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(572);
      match(SanParser::Equal);
      setState(573);
      expression(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

SanParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::TypeNameContext* SanParser::TypeContext::typeName() {
  return getRuleContext<SanParser::TypeNameContext>(0);
}

std::vector<SanParser::TypeQualifierContext *> SanParser::TypeContext::typeQualifier() {
  return getRuleContexts<SanParser::TypeQualifierContext>();
}

SanParser::TypeQualifierContext* SanParser::TypeContext::typeQualifier(size_t i) {
  return getRuleContext<SanParser::TypeQualifierContext>(i);
}

std::vector<SanParser::TypeDimensionsContext *> SanParser::TypeContext::typeDimensions() {
  return getRuleContexts<SanParser::TypeDimensionsContext>();
}

SanParser::TypeDimensionsContext* SanParser::TypeContext::typeDimensions(size_t i) {
  return getRuleContext<SanParser::TypeDimensionsContext>(i);
}

std::vector<SanParser::TypePointerContext *> SanParser::TypeContext::typePointer() {
  return getRuleContexts<SanParser::TypePointerContext>();
}

SanParser::TypePointerContext* SanParser::TypeContext::typePointer(size_t i) {
  return getRuleContext<SanParser::TypePointerContext>(i);
}

SanParser::TypeReferenceContext* SanParser::TypeContext::typeReference() {
  return getRuleContext<SanParser::TypeReferenceContext>(0);
}


size_t SanParser::TypeContext::getRuleIndex() const {
  return SanParser::RuleType;
}


antlrcpp::Any SanParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypeContext* SanParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 102, SanParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(579);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Const) {
      setState(576);
      typeQualifier();
      setState(581);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(582);
    typeName();
    setState(586);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(583);
        typeDimensions(); 
      }
      setState(588);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx);
    }
    setState(592);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(589);
        typePointer(); 
      }
      setState(594);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(596);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(595);
      typeReference();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeQualifierContext ------------------------------------------------------------------

SanParser::TypeQualifierContext::TypeQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::TypeQualifierContext::Const() {
  return getToken(SanParser::Const, 0);
}


size_t SanParser::TypeQualifierContext::getRuleIndex() const {
  return SanParser::RuleTypeQualifier;
}


antlrcpp::Any SanParser::TypeQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeQualifier(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypeQualifierContext* SanParser::typeQualifier() {
  TypeQualifierContext *_localctx = _tracker.createInstance<TypeQualifierContext>(_ctx, getState());
  enterRule(_localctx, 104, SanParser::RuleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    match(SanParser::Const);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeDimensionsContext ------------------------------------------------------------------

SanParser::TypeDimensionsContext::TypeDimensionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::TypeDimensionsContext::OpeningBracket() {
  return getToken(SanParser::OpeningBracket, 0);
}

SanParser::ExpressionContext* SanParser::TypeDimensionsContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::TypeDimensionsContext::ClosingBracket() {
  return getToken(SanParser::ClosingBracket, 0);
}


size_t SanParser::TypeDimensionsContext::getRuleIndex() const {
  return SanParser::RuleTypeDimensions;
}


antlrcpp::Any SanParser::TypeDimensionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeDimensions(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypeDimensionsContext* SanParser::typeDimensions() {
  TypeDimensionsContext *_localctx = _tracker.createInstance<TypeDimensionsContext>(_ctx, getState());
  enterRule(_localctx, 106, SanParser::RuleTypeDimensions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(SanParser::OpeningBracket);
    setState(601);
    expression(0);
    setState(602);
    match(SanParser::ClosingBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypePointerContext ------------------------------------------------------------------

SanParser::TypePointerContext::TypePointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::TypePointerContext::Mul() {
  return getToken(SanParser::Mul, 0);
}


size_t SanParser::TypePointerContext::getRuleIndex() const {
  return SanParser::RuleTypePointer;
}


antlrcpp::Any SanParser::TypePointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypePointer(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypePointerContext* SanParser::typePointer() {
  TypePointerContext *_localctx = _tracker.createInstance<TypePointerContext>(_ctx, getState());
  enterRule(_localctx, 108, SanParser::RuleTypePointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(SanParser::Mul);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeReferenceContext ------------------------------------------------------------------

SanParser::TypeReferenceContext::TypeReferenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::TypeReferenceContext::BitwiseAnd() {
  return getToken(SanParser::BitwiseAnd, 0);
}


size_t SanParser::TypeReferenceContext::getRuleIndex() const {
  return SanParser::RuleTypeReference;
}


antlrcpp::Any SanParser::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypeReferenceContext* SanParser::typeReference() {
  TypeReferenceContext *_localctx = _tracker.createInstance<TypeReferenceContext>(_ctx, getState());
  enterRule(_localctx, 110, SanParser::RuleTypeReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    match(SanParser::BitwiseAnd);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

SanParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::ScopedNameContext* SanParser::TypeNameContext::scopedName() {
  return getRuleContext<SanParser::ScopedNameContext>(0);
}

SanParser::FunctionTypeContext* SanParser::TypeNameContext::functionType() {
  return getRuleContext<SanParser::FunctionTypeContext>(0);
}


size_t SanParser::TypeNameContext::getRuleIndex() const {
  return SanParser::RuleTypeName;
}


antlrcpp::Any SanParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypeNameContext* SanParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 112, SanParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(610);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::VariableName: {
        enterOuterAlt(_localctx, 1);
        setState(608);
        scopedName();
        break;
      }

      case SanParser::Function: {
        enterOuterAlt(_localctx, 2);
        setState(609);
        functionType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionTypeContext ------------------------------------------------------------------

SanParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FunctionTypeContext::Function() {
  return getToken(SanParser::Function, 0);
}

tree::TerminalNode* SanParser::FunctionTypeContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

tree::TerminalNode* SanParser::FunctionTypeContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}

SanParser::FunctionArgumentsContext* SanParser::FunctionTypeContext::functionArguments() {
  return getRuleContext<SanParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* SanParser::FunctionTypeContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::FunctionTypeContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::FunctionTypeContext::Comma() {
  return getToken(SanParser::Comma, 0);
}

SanParser::FunctionVariadicArgumentContext* SanParser::FunctionTypeContext::functionVariadicArgument() {
  return getRuleContext<SanParser::FunctionVariadicArgumentContext>(0);
}


size_t SanParser::FunctionTypeContext::getRuleIndex() const {
  return SanParser::RuleFunctionType;
}


antlrcpp::Any SanParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionTypeContext* SanParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 114, SanParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(SanParser::Function);
    setState(613);
    match(SanParser::OpeningParen);
    setState(622);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Const:
      case SanParser::Function:
      case SanParser::VariableName: {
        setState(614);
        functionArguments();
        setState(617);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Comma) {
          setState(615);
          match(SanParser::Comma);
          setState(616);
          functionVariadicArgument();
        }
        break;
      }

      case SanParser::ClosingParen:
      case SanParser::Variadic: {
        setState(620);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Variadic) {
          setState(619);
          functionVariadicArgument();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(624);
    match(SanParser::ClosingParen);
    setState(627);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(625);
      match(SanParser::Colon);
      setState(626);
      type();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeNameContext ------------------------------------------------------------------

SanParser::ClassTypeNameContext::ClassTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::ScopedNameContext* SanParser::ClassTypeNameContext::scopedName() {
  return getRuleContext<SanParser::ScopedNameContext>(0);
}


size_t SanParser::ClassTypeNameContext::getRuleIndex() const {
  return SanParser::RuleClassTypeName;
}


antlrcpp::Any SanParser::ClassTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeName(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassTypeNameContext* SanParser::classTypeName() {
  ClassTypeNameContext *_localctx = _tracker.createInstance<ClassTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 116, SanParser::RuleClassTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
    scopedName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassTypeNameGenericsContext ------------------------------------------------------------------

SanParser::ClassTypeNameGenericsContext::ClassTypeNameGenericsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ClassTypeNameGenericsContext::LessThan() {
  return getToken(SanParser::LessThan, 0);
}

std::vector<SanParser::TypeContext *> SanParser::ClassTypeNameGenericsContext::type() {
  return getRuleContexts<SanParser::TypeContext>();
}

SanParser::TypeContext* SanParser::ClassTypeNameGenericsContext::type(size_t i) {
  return getRuleContext<SanParser::TypeContext>(i);
}

tree::TerminalNode* SanParser::ClassTypeNameGenericsContext::GreaterThan() {
  return getToken(SanParser::GreaterThan, 0);
}

std::vector<tree::TerminalNode *> SanParser::ClassTypeNameGenericsContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::ClassTypeNameGenericsContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::ClassTypeNameGenericsContext::getRuleIndex() const {
  return SanParser::RuleClassTypeNameGenerics;
}


antlrcpp::Any SanParser::ClassTypeNameGenericsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeNameGenerics(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassTypeNameGenericsContext* SanParser::classTypeNameGenerics() {
  ClassTypeNameGenericsContext *_localctx = _tracker.createInstance<ClassTypeNameGenericsContext>(_ctx, getState());
  enterRule(_localctx, 118, SanParser::RuleClassTypeNameGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(SanParser::LessThan);
    setState(632);
    type();
    setState(637);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(633);
      match(SanParser::Comma);
      setState(634);
      type();
      setState(639);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(640);
    match(SanParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceStatementContext ------------------------------------------------------------------

SanParser::NamespaceStatementContext::NamespaceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::AttributesContext* SanParser::NamespaceStatementContext::attributes() {
  return getRuleContext<SanParser::AttributesContext>(0);
}

tree::TerminalNode* SanParser::NamespaceStatementContext::Namespace() {
  return getToken(SanParser::Namespace, 0);
}

tree::TerminalNode* SanParser::NamespaceStatementContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::NamespaceStatementContext::OpeningBrace() {
  return getToken(SanParser::OpeningBrace, 0);
}

tree::TerminalNode* SanParser::NamespaceStatementContext::ClosingBrace() {
  return getToken(SanParser::ClosingBrace, 0);
}

std::vector<SanParser::StatementContext *> SanParser::NamespaceStatementContext::statement() {
  return getRuleContexts<SanParser::StatementContext>();
}

SanParser::StatementContext* SanParser::NamespaceStatementContext::statement(size_t i) {
  return getRuleContext<SanParser::StatementContext>(i);
}


size_t SanParser::NamespaceStatementContext::getRuleIndex() const {
  return SanParser::RuleNamespaceStatement;
}


antlrcpp::Any SanParser::NamespaceStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::NamespaceStatementContext* SanParser::namespaceStatement() {
  NamespaceStatementContext *_localctx = _tracker.createInstance<NamespaceStatementContext>(_ctx, getState());
  enterRule(_localctx, 120, SanParser::RuleNamespaceStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(642);
    attributes();
    setState(643);
    match(SanParser::Namespace);
    setState(644);
    match(SanParser::VariableName);
    setState(645);
    match(SanParser::OpeningBrace);
    setState(649);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Add)
      | (1ULL << SanParser::Sub)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Class)
      | (1ULL << SanParser::Special)
      | (1ULL << SanParser::Union)
      | (1ULL << SanParser::Enum)
      | (1ULL << SanParser::Namespace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::If)
      | (1ULL << SanParser::While)
      | (1ULL << SanParser::Break)
      | (1ULL << SanParser::For)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::Alias)
      | (1ULL << SanParser::Attribute)
      | (1ULL << SanParser::Assembly)
      | (1ULL << SanParser::Import)
      | (1ULL << SanParser::True)
      | (1ULL << SanParser::False)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::CharLiteral - 64))
      | (1ULL << (SanParser::DecimalLiteral - 64))
      | (1ULL << (SanParser::FloatingLiteral - 64))
      | (1ULL << (SanParser::ZeroLiteral - 64))
      | (1ULL << (SanParser::HexadecimalLiteral - 64))
      | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
      setState(646);
      statement();
      setState(651);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(652);
    match(SanParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

SanParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::ImportStatementContext::Import() {
  return getToken(SanParser::Import, 0);
}

tree::TerminalNode* SanParser::ImportStatementContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
}


size_t SanParser::ImportStatementContext::getRuleIndex() const {
  return SanParser::RuleImportStatement;
}


antlrcpp::Any SanParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ImportStatementContext* SanParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 122, SanParser::RuleImportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(654);
    match(SanParser::Import);
    setState(655);
    match(SanParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributesContext ------------------------------------------------------------------

SanParser::AttributesContext::AttributesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SanParser::AttributeContext *> SanParser::AttributesContext::attribute() {
  return getRuleContexts<SanParser::AttributeContext>();
}

SanParser::AttributeContext* SanParser::AttributesContext::attribute(size_t i) {
  return getRuleContext<SanParser::AttributeContext>(i);
}


size_t SanParser::AttributesContext::getRuleIndex() const {
  return SanParser::RuleAttributes;
}


antlrcpp::Any SanParser::AttributesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAttributes(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AttributesContext* SanParser::attributes() {
  AttributesContext *_localctx = _tracker.createInstance<AttributesContext>(_ctx, getState());
  enterRule(_localctx, 124, SanParser::RuleAttributes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(660);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Attribute) {
      setState(657);
      attribute();
      setState(662);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributeContext ------------------------------------------------------------------

SanParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::AttributeContext::Attribute() {
  return getToken(SanParser::Attribute, 0);
}

tree::TerminalNode* SanParser::AttributeContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::AttributeContext::ClosingBracket() {
  return getToken(SanParser::ClosingBracket, 0);
}

tree::TerminalNode* SanParser::AttributeContext::Equal() {
  return getToken(SanParser::Equal, 0);
}

tree::TerminalNode* SanParser::AttributeContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
}


size_t SanParser::AttributeContext::getRuleIndex() const {
  return SanParser::RuleAttribute;
}


antlrcpp::Any SanParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AttributeContext* SanParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 126, SanParser::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(SanParser::Attribute);
    setState(664);
    match(SanParser::VariableName);
    setState(667);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(665);
      match(SanParser::Equal);
      setState(666);
      match(SanParser::StringLiteral);
    }
    setState(669);
    match(SanParser::ClosingBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasContext ------------------------------------------------------------------

SanParser::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::AliasContext::Alias() {
  return getToken(SanParser::Alias, 0);
}

tree::TerminalNode* SanParser::AliasContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::AliasContext::Equal() {
  return getToken(SanParser::Equal, 0);
}

SanParser::ScopedNameContext* SanParser::AliasContext::scopedName() {
  return getRuleContext<SanParser::ScopedNameContext>(0);
}

SanParser::TypeContext* SanParser::AliasContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

SanParser::LiteralContext* SanParser::AliasContext::literal() {
  return getRuleContext<SanParser::LiteralContext>(0);
}

SanParser::ClassGenericsContext* SanParser::AliasContext::classGenerics() {
  return getRuleContext<SanParser::ClassGenericsContext>(0);
}


size_t SanParser::AliasContext::getRuleIndex() const {
  return SanParser::RuleAlias;
}


antlrcpp::Any SanParser::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AliasContext* SanParser::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 128, SanParser::RuleAlias);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    match(SanParser::Alias);
    setState(672);
    match(SanParser::VariableName);
    setState(674);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(673);
      classGenerics();
    }
    setState(676);
    match(SanParser::Equal);
    setState(680);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(677);
      scopedName();
      break;
    }

    case 2: {
      setState(678);
      type();
      break;
    }

    case 3: {
      setState(679);
      literal();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyStatementContext ------------------------------------------------------------------

SanParser::AssemblyStatementContext::AssemblyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::AssemblyStatementContext::Assembly() {
  return getToken(SanParser::Assembly, 0);
}

tree::TerminalNode* SanParser::AssemblyStatementContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

SanParser::StringLiteralContext* SanParser::AssemblyStatementContext::stringLiteral() {
  return getRuleContext<SanParser::StringLiteralContext>(0);
}

tree::TerminalNode* SanParser::AssemblyStatementContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}

std::vector<tree::TerminalNode *> SanParser::AssemblyStatementContext::Colon() {
  return getTokens(SanParser::Colon);
}

tree::TerminalNode* SanParser::AssemblyStatementContext::Colon(size_t i) {
  return getToken(SanParser::Colon, i);
}

std::vector<SanParser::AssemblyOutputContext *> SanParser::AssemblyStatementContext::assemblyOutput() {
  return getRuleContexts<SanParser::AssemblyOutputContext>();
}

SanParser::AssemblyOutputContext* SanParser::AssemblyStatementContext::assemblyOutput(size_t i) {
  return getRuleContext<SanParser::AssemblyOutputContext>(i);
}

std::vector<SanParser::AssemblyInputContext *> SanParser::AssemblyStatementContext::assemblyInput() {
  return getRuleContexts<SanParser::AssemblyInputContext>();
}

SanParser::AssemblyInputContext* SanParser::AssemblyStatementContext::assemblyInput(size_t i) {
  return getRuleContext<SanParser::AssemblyInputContext>(i);
}

std::vector<SanParser::AssemblyClobberContext *> SanParser::AssemblyStatementContext::assemblyClobber() {
  return getRuleContexts<SanParser::AssemblyClobberContext>();
}

SanParser::AssemblyClobberContext* SanParser::AssemblyStatementContext::assemblyClobber(size_t i) {
  return getRuleContext<SanParser::AssemblyClobberContext>(i);
}

std::vector<tree::TerminalNode *> SanParser::AssemblyStatementContext::Comma() {
  return getTokens(SanParser::Comma);
}

tree::TerminalNode* SanParser::AssemblyStatementContext::Comma(size_t i) {
  return getToken(SanParser::Comma, i);
}


size_t SanParser::AssemblyStatementContext::getRuleIndex() const {
  return SanParser::RuleAssemblyStatement;
}


antlrcpp::Any SanParser::AssemblyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyStatement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AssemblyStatementContext* SanParser::assemblyStatement() {
  AssemblyStatementContext *_localctx = _tracker.createInstance<AssemblyStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, SanParser::RuleAssemblyStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    match(SanParser::Assembly);
    setState(683);
    match(SanParser::OpeningParen);
    setState(684);
    stringLiteral();

    setState(685);
    match(SanParser::Colon);
    setState(694);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::StringLiteral) {
      setState(686);
      assemblyOutput();
      setState(691);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SanParser::Comma) {
        setState(687);
        match(SanParser::Comma);
        setState(688);
        assemblyOutput();
        setState(693);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(696);
    match(SanParser::Colon);
    setState(705);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::StringLiteral) {
      setState(697);
      assemblyInput();
      setState(702);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SanParser::Comma) {
        setState(698);
        match(SanParser::Comma);
        setState(699);
        assemblyInput();
        setState(704);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(716);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Colon) {
      setState(707);
      match(SanParser::Colon);
      setState(708);
      assemblyClobber();
      setState(713);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SanParser::Comma) {
        setState(709);
        match(SanParser::Comma);
        setState(710);
        assemblyClobber();
        setState(715);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(718);
    match(SanParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyTemplateContext ------------------------------------------------------------------

SanParser::AssemblyTemplateContext::AssemblyTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::StringLiteralContext* SanParser::AssemblyTemplateContext::stringLiteral() {
  return getRuleContext<SanParser::StringLiteralContext>(0);
}


size_t SanParser::AssemblyTemplateContext::getRuleIndex() const {
  return SanParser::RuleAssemblyTemplate;
}


antlrcpp::Any SanParser::AssemblyTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyTemplate(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AssemblyTemplateContext* SanParser::assemblyTemplate() {
  AssemblyTemplateContext *_localctx = _tracker.createInstance<AssemblyTemplateContext>(_ctx, getState());
  enterRule(_localctx, 132, SanParser::RuleAssemblyTemplate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    stringLiteral();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyOutputContext ------------------------------------------------------------------

SanParser::AssemblyOutputContext::AssemblyOutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::AssemblyOutputContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
}

tree::TerminalNode* SanParser::AssemblyOutputContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

SanParser::ExpressionContext* SanParser::AssemblyOutputContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::AssemblyOutputContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}


size_t SanParser::AssemblyOutputContext::getRuleIndex() const {
  return SanParser::RuleAssemblyOutput;
}


antlrcpp::Any SanParser::AssemblyOutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyOutput(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AssemblyOutputContext* SanParser::assemblyOutput() {
  AssemblyOutputContext *_localctx = _tracker.createInstance<AssemblyOutputContext>(_ctx, getState());
  enterRule(_localctx, 134, SanParser::RuleAssemblyOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(722);
    match(SanParser::StringLiteral);
    setState(723);
    match(SanParser::OpeningParen);
    setState(724);
    expression(0);
    setState(725);
    match(SanParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyInputContext ------------------------------------------------------------------

SanParser::AssemblyInputContext::AssemblyInputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::AssemblyInputContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
}

tree::TerminalNode* SanParser::AssemblyInputContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

SanParser::ExpressionContext* SanParser::AssemblyInputContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::AssemblyInputContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}


size_t SanParser::AssemblyInputContext::getRuleIndex() const {
  return SanParser::RuleAssemblyInput;
}


antlrcpp::Any SanParser::AssemblyInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyInput(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AssemblyInputContext* SanParser::assemblyInput() {
  AssemblyInputContext *_localctx = _tracker.createInstance<AssemblyInputContext>(_ctx, getState());
  enterRule(_localctx, 136, SanParser::RuleAssemblyInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(727);
    match(SanParser::StringLiteral);
    setState(728);
    match(SanParser::OpeningParen);
    setState(729);
    expression(0);
    setState(730);
    match(SanParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyClobberContext ------------------------------------------------------------------

SanParser::AssemblyClobberContext::AssemblyClobberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::AssemblyClobberContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
}


size_t SanParser::AssemblyClobberContext::getRuleIndex() const {
  return SanParser::RuleAssemblyClobber;
}


antlrcpp::Any SanParser::AssemblyClobberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyClobber(this);
  else
    return visitor->visitChildren(this);
}

SanParser::AssemblyClobberContext* SanParser::assemblyClobber() {
  AssemblyClobberContext *_localctx = _tracker.createInstance<AssemblyClobberContext>(_ctx, getState());
  enterRule(_localctx, 138, SanParser::RuleAssemblyClobber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    match(SanParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

SanParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::EosContext::EOF() {
  return getToken(SanParser::EOF, 0);
}

tree::TerminalNode* SanParser::EosContext::LineTerminator() {
  return getToken(SanParser::LineTerminator, 0);
}


size_t SanParser::EosContext::getRuleIndex() const {
  return SanParser::RuleEos;
}


antlrcpp::Any SanParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

SanParser::EosContext* SanParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 140, SanParser::RuleEos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(734);
    _la = _input->LA(1);
    if (!(_la == SanParser::EOF || _la == SanParser::LineTerminator)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SanParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SanParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);
    case 5: return precpred(_ctx, 1);
    case 6: return precpred(_ctx, 17);
    case 7: return precpred(_ctx, 16);
    case 8: return precpred(_ctx, 15);
    case 9: return precpred(_ctx, 11);
    case 10: return precpred(_ctx, 10);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SanParser::_decisionToDFA;
atn::PredictionContextCache SanParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SanParser::_atn;
std::vector<uint16_t> SanParser::_serializedATN;

std::vector<std::string> SanParser::_ruleNames = {
  "instructions", "body", "statement", "expression", "scopedName", "name", 
  "scopedNameNoGeneric", "nameNoGeneric", "scopeResolver", "multiplicativeOperatorStatement", 
  "operatorStatement", "bitwiseOperatorStatement", "conditionalOperatorStatement", 
  "comparisonOperatorStatement", "equalityOperatorStatement", "literal", 
  "booleanLiteral", "integerLiteral", "floatingLiteral", "stringLiteral", 
  "variableDeclaration", "functionCallArguments", "functionCallArgument", 
  "overloadableOperator", "function", "functionDeclaration", "castFunctionType", 
  "functionVariadicArgument", "functionArguments", "functionArgument", "returnStatement", 
  "ifStatement", "elseStatement", "whileStatement", "forStatement", "breakStatement", 
  "unionStatement", "unionBody", "unionProperty", "enumStatement", "enumBody", 
  "enumProperty", "specialClassStatement", "classStatement", "classGenerics", 
  "classExtends", "classBody", "classProperty", "classMethod", "classInstantiationProperties", 
  "classInstantiationProperty", "type", "typeQualifier", "typeDimensions", 
  "typePointer", "typeReference", "typeName", "functionType", "classTypeName", 
  "classTypeNameGenerics", "namespaceStatement", "importStatement", "attributes", 
  "attribute", "alias", "assemblyStatement", "assemblyTemplate", "assemblyOutput", 
  "assemblyInput", "assemblyClobber", "eos"
};

std::vector<std::string> SanParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'||'", "'&&'", "'=='", 
  "'!='", "'<='", "'>='", "'<'", "'>'", "'^'", "'|'", "'&'", "'='", "'('", 
  "')'", "'{'", "'}'", "'['", "']'", "'...'", "'..='", "'..'", "'as'", "'sizeof'", 
  "'const'", "'class'", "'extends'", "'special'", "'static'", "'.'", "'->'", 
  "'union'", "'enum'", "'@destructor'", "'namespace'", "'::'", "'let'", 
  "'if'", "'else'", "'while'", "'break'", "'for'", "'in'", "'fn'", "'extern'", 
  "'return'", "'cast'", "'alias'", "','", "':'", "'#['", "'asm'", "'import'", 
  "'true'", "'false'", "", "", "", "", "", "", "'0'"
};

std::vector<std::string> SanParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "Not", "ConditionalOr", "ConditionalAnd", 
  "EqualTo", "NotEqualTo", "LessThanOrEqualTo", "GreaterThanOrEqualTo", 
  "LessThan", "GreaterThan", "Xor", "BitwiseOr", "BitwiseAnd", "Equal", 
  "OpeningParen", "ClosingParen", "OpeningBrace", "ClosingBrace", "OpeningBracket", 
  "ClosingBracket", "Variadic", "InclusiveRange", "ExclusiveRange", "As", 
  "SizeOf", "Const", "Class", "Extends", "Special", "Static", "Dot", "Arrow", 
  "Union", "Enum", "Destructor", "Namespace", "ScopeResolver", "VariableDeclarator", 
  "If", "Else", "While", "Break", "For", "In", "Function", "Extern", "Return", 
  "Cast", "Alias", "Comma", "Colon", "Attribute", "Assembly", "Import", 
  "True", "False", "InstructionsSeparator", "VariableName", "StringLiteral", 
  "CharLiteral", "DecimalLiteral", "FloatingLiteral", "ZeroLiteral", "HexadecimalLiteral", 
  "BinaryLiteral", "Comment", "WhiteSpace", "LineTerminator"
};

dfa::Vocabulary SanParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SanParser::_tokenNames;

SanParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x4a, 0x2e3, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x3, 0x2, 
    0x7, 0x2, 0x92, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x95, 0xb, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x9b, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x9e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xbf, 0xa, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0xc9, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0xce, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0xdb, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xfb, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x108, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x10b, 0xb, 0x5, 0x3, 0x6, 0x5, 0x6, 0x10e, 0xa, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x114, 0xa, 0x7, 0x3, 0x8, 
    0x5, 0x8, 0x117, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x120, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x133, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x6, 0x15, 0x13c, 
    0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0x13d, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x146, 0xa, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x5, 0x16, 0x14a, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x7, 0x17, 0x14f, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x152, 0xb, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0x169, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x5, 0x1a, 0x16d, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 
    0x172, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x179, 0xa, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x17c, 0xa, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x182, 0xa, 0x1b, 
    0x3, 0x1b, 0x5, 0x1b, 0x185, 0xa, 0x1b, 0x5, 0x1b, 0x187, 0xa, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x18c, 0xa, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x191, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x19a, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x19d, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x1a1, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x5, 0x20, 0x1a7, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 
    0x1ac, 0xa, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1b0, 0xa, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 
    0x26, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x1c8, 0xa, 0x27, 0xc, 0x27, 
    0xe, 0x27, 0x1cb, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x7, 0x2a, 
    0x1dd, 0xa, 0x2a, 0xc, 0x2a, 0xe, 0x2a, 0x1e0, 0xb, 0x2a, 0x3, 0x2a, 
    0x5, 0x2a, 0x1e3, 0xa, 0x2a, 0x5, 0x2a, 0x1e5, 0xa, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1ec, 0xa, 0x2b, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x5, 0x2c, 0x1f5, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1fd, 0xa, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x5, 0x2d, 0x201, 0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x209, 0xa, 0x2e, 0xc, 0x2e, 
    0xe, 0x2e, 0x20c, 0xb, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x7, 0x2f, 0x213, 0xa, 0x2f, 0xc, 0x2f, 0xe, 0x2f, 0x216, 
    0xb, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x7, 0x30, 0x21b, 0xa, 0x30, 
    0xc, 0x30, 0xe, 0x30, 0x21e, 0xb, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x5, 0x31, 0x223, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x22a, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x5, 0x32, 0x22f, 0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x7, 0x33, 0x236, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x239, 
    0xb, 0x33, 0x3, 0x33, 0x5, 0x33, 0x23c, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x241, 0xa, 0x34, 0x3, 0x35, 0x7, 0x35, 0x244, 
    0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x247, 0xb, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x7, 0x35, 0x24b, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x24e, 0xb, 0x35, 
    0x3, 0x35, 0x7, 0x35, 0x251, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x254, 
    0xb, 0x35, 0x3, 0x35, 0x5, 0x35, 0x257, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x265, 0xa, 0x3a, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x26c, 
    0xa, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x26f, 0xa, 0x3b, 0x5, 0x3b, 0x271, 
    0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x276, 0xa, 0x3b, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 
    0x3d, 0x27e, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x281, 0xb, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x7, 0x3e, 0x28a, 0xa, 0x3e, 0xc, 0x3e, 0xe, 0x3e, 0x28d, 0xb, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x7, 
    0x40, 0x295, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 0x298, 0xb, 0x40, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x29e, 0xa, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x2a5, 
    0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x2ab, 
    0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
    0x43, 0x3, 0x43, 0x7, 0x43, 0x2b4, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
    0x2b7, 0xb, 0x43, 0x5, 0x43, 0x2b9, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2bf, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
    0x2c2, 0xb, 0x43, 0x5, 0x43, 0x2c4, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2ca, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
    0x2cd, 0xb, 0x43, 0x5, 0x43, 0x2cf, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x2, 0x3, 0x8, 0x49, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
    0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
    0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 
    0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
    0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 
    0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x2, 0xb, 0x3, 
    0x2, 0x25, 0x26, 0x3, 0x2, 0x5, 0x7, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x11, 
    0x13, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0x10, 0x3, 0x2, 0x3d, 0x3e, 
    0x4, 0x2, 0x43, 0x43, 0x45, 0x47, 0x3, 0x3, 0x4a, 0x4a, 0x2, 0x317, 
    0x2, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4, 0x98, 0x3, 0x2, 0x2, 0x2, 0x6, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xa, 0x10d, 0x3, 
    0x2, 0x2, 0x2, 0xc, 0x111, 0x3, 0x2, 0x2, 0x2, 0xe, 0x116, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x11c, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x121, 0x3, 0x2, 0x2, 0x2, 0x16, 0x123, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x125, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x127, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x129, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x20, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x134, 0x3, 0x2, 0x2, 0x2, 0x24, 0x136, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x138, 0x3, 0x2, 0x2, 0x2, 0x28, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x14b, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x153, 0x3, 0x2, 0x2, 0x2, 0x30, 0x168, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x34, 0x173, 0x3, 0x2, 0x2, 0x2, 0x36, 
    0x192, 0x3, 0x2, 0x2, 0x2, 0x38, 0x194, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x196, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1b1, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1b8, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1c0, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1e8, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1f8, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x204, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x217, 0x3, 0x2, 0x2, 0x2, 0x60, 0x222, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x64, 0x232, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x68, 0x245, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x258, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x25e, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x260, 0x3, 0x2, 0x2, 0x2, 0x72, 0x264, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x266, 0x3, 0x2, 0x2, 0x2, 0x76, 0x277, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x279, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x284, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x290, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x296, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x299, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x88, 0x2d4, 
    0x3, 0x2, 0x2, 0x2, 0x8a, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x2de, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x5, 0x6, 
    0x4, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x97, 0x5, 0x8e, 0x48, 0x2, 0x97, 0x3, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9c, 
    0x7, 0x17, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x6, 0x4, 0x2, 0x9a, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x18, 0x2, 0x2, 
    0xa0, 0x5, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xbf, 0x5, 0x32, 0x1a, 0x2, 0xa2, 
    0xbf, 0x5, 0x7a, 0x3e, 0x2, 0xa3, 0xa4, 0x5, 0x8, 0x5, 0x2, 0xa4, 0xa5, 
    0x7, 0x3f, 0x2, 0x2, 0xa5, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xbf, 0x5, 
    0x4, 0x3, 0x2, 0xa7, 0xa8, 0x5, 0x2a, 0x16, 0x2, 0xa8, 0xa9, 0x7, 0x3f, 
    0x2, 0x2, 0xa9, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x3e, 0x20, 
    0x2, 0xab, 0xac, 0x7, 0x3f, 0x2, 0x2, 0xac, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xbf, 0x5, 0x40, 0x21, 0x2, 0xae, 0xbf, 0x5, 0x44, 0x23, 0x2, 
    0xaf, 0xbf, 0x5, 0x46, 0x24, 0x2, 0xb0, 0xb1, 0x5, 0x48, 0x25, 0x2, 
    0xb1, 0xb2, 0x7, 0x3f, 0x2, 0x2, 0xb2, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xbf, 0x5, 0x56, 0x2c, 0x2, 0xb4, 0xbf, 0x5, 0x58, 0x2d, 0x2, 0xb5, 
    0xbf, 0x5, 0x4a, 0x26, 0x2, 0xb6, 0xbf, 0x5, 0x50, 0x29, 0x2, 0xb7, 
    0xbf, 0x5, 0x7c, 0x3f, 0x2, 0xb8, 0xb9, 0x5, 0x84, 0x43, 0x2, 0xb9, 
    0xba, 0x7, 0x3f, 0x2, 0x2, 0xba, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 
    0x5, 0x82, 0x42, 0x2, 0xbc, 0xbd, 0x7, 0x3f, 0x2, 0x2, 0xbd, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xad, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xae, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb5, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0xbf, 0x7, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x8, 0x5, 0x1, 0x2, 
    0xc1, 0xc2, 0x7, 0x15, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x8, 0x5, 0x2, 0xc3, 
    0xc4, 0x7, 0x16, 0x2, 0x2, 0xc4, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 
    0x7, 0x1f, 0x2, 0x2, 0xc6, 0xc9, 0x5, 0x8, 0x5, 0x2, 0xc7, 0xc9, 0x5, 
    0x68, 0x35, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 
    0x2, 0x2, 0xc9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x5, 0x76, 0x3c, 
    0x2, 0xcb, 0xcd, 0x7, 0x17, 0x2, 0x2, 0xcc, 0xce, 0x5, 0x64, 0x33, 0x2, 
    0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x18, 0x2, 0x2, 0xd0, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x4, 0x2, 0x2, 0xd2, 0xdb, 0x5, 
    0x8, 0x5, 0x10, 0xd3, 0xd4, 0x7, 0x3, 0x2, 0x2, 0xd4, 0xdb, 0x5, 0x8, 
    0x5, 0xf, 0xd5, 0xd6, 0x7, 0x8, 0x2, 0x2, 0xd6, 0xdb, 0x5, 0x8, 0x5, 
    0xe, 0xd7, 0xdb, 0x5, 0x32, 0x1a, 0x2, 0xd8, 0xdb, 0x5, 0xa, 0x6, 0x2, 
    0xd9, 0xdb, 0x5, 0x20, 0x11, 0x2, 0xda, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xda, 0xca, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xdd, 0xc, 0x8, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x14, 0xb, 0x2, 
    0xde, 0xdf, 0x5, 0x8, 0x5, 0x9, 0xdf, 0x108, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0xc, 0x7, 0x2, 0x2, 0xe1, 0xe2, 0x5, 0x16, 0xc, 0x2, 0xe2, 0xe3, 
    0x5, 0x8, 0x5, 0x8, 0xe3, 0x108, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0xc, 
    0x6, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x18, 0xd, 0x2, 0xe6, 0xe7, 0x5, 0x8, 
    0x5, 0x7, 0xe7, 0x108, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0xc, 0x5, 0x2, 
    0x2, 0xe9, 0xea, 0x5, 0x1c, 0xf, 0x2, 0xea, 0xeb, 0x5, 0x8, 0x5, 0x6, 
    0xeb, 0x108, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0xc, 0x4, 0x2, 0x2, 0xed, 
    0xee, 0x5, 0x1a, 0xe, 0x2, 0xee, 0xef, 0x5, 0x8, 0x5, 0x5, 0xef, 0x108, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0xc, 0x3, 0x2, 0x2, 0xf1, 0xf2, 0x5, 
    0x1e, 0x10, 0x2, 0xf2, 0xf3, 0x5, 0x8, 0x5, 0x4, 0xf3, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0xf4, 0xf5, 0xc, 0x13, 0x2, 0x2, 0xf5, 0xf6, 0x9, 0x2, 0x2, 
    0x2, 0xf6, 0x108, 0x5, 0xc, 0x7, 0x2, 0xf7, 0xf8, 0xc, 0x12, 0x2, 0x2, 
    0xf8, 0xfa, 0x7, 0x15, 0x2, 0x2, 0xf9, 0xfb, 0x5, 0x2c, 0x17, 0x2, 0xfa, 
    0xf9, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0x108, 0x7, 0x16, 0x2, 0x2, 0xfd, 0xfe, 0xc, 
    0x11, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x19, 0x2, 0x2, 0xff, 0x100, 0x5, 0x8, 
    0x5, 0x2, 0x100, 0x101, 0x7, 0x1a, 0x2, 0x2, 0x101, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x103, 0xc, 0xd, 0x2, 0x2, 0x103, 0x108, 0x7, 0x8, 
    0x2, 0x2, 0x104, 0x105, 0xc, 0xc, 0x2, 0x2, 0x105, 0x106, 0x7, 0x1e, 
    0x2, 0x2, 0x106, 0x108, 0x5, 0x68, 0x35, 0x2, 0x107, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0x107, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x107, 0xe4, 0x3, 0x2, 0x2, 
    0x2, 0x107, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x107, 0xec, 0x3, 0x2, 0x2, 0x2, 
    0x107, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x107, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x107, 
    0xf7, 0x3, 0x2, 0x2, 0x2, 0x107, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x107, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x104, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x10c, 0x10e, 0x5, 0x12, 0xa, 0x2, 0x10d, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x110, 0x5, 0xc, 0x7, 0x2, 0x110, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x113, 0x7, 0x40, 0x2, 0x2, 0x112, 0x114, 0x5, 0x78, 
    0x3d, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0xd, 0x3, 0x2, 0x2, 0x2, 0x115, 0x117, 0x5, 0x12, 0xa, 
    0x2, 0x116, 0x115, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x5, 0x10, 0x9, 
    0x2, 0x119, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x40, 0x2, 0x2, 
    0x11b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x5, 0xc, 0x7, 0x2, 0x11d, 
    0x11f, 0x7, 0x2b, 0x2, 0x2, 0x11e, 0x120, 0x5, 0x12, 0xa, 0x2, 0x11f, 
    0x11e, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x9, 0x3, 0x2, 0x2, 0x122, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x9, 0x4, 0x2, 0x2, 0x124, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x126, 0x9, 0x5, 0x2, 0x2, 0x126, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x128, 0x9, 0x6, 0x2, 0x2, 0x128, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x12a, 0x9, 0x7, 0x2, 0x2, 0x12a, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x12b, 0x12c, 0x7, 0x14, 0x2, 0x2, 0x12c, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x133, 0x5, 0x22, 0x12, 0x2, 0x12e, 0x133, 0x5, 0x24, 0x13, 0x2, 
    0x12f, 0x133, 0x5, 0x26, 0x14, 0x2, 0x130, 0x133, 0x5, 0x28, 0x15, 0x2, 
    0x131, 0x133, 0x7, 0x42, 0x2, 0x2, 0x132, 0x12d, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x132, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x133, 0x21, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x9, 0x8, 0x2, 0x2, 0x135, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x9, 0x9, 0x2, 0x2, 0x137, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x7, 0x44, 0x2, 0x2, 0x139, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x13c, 0x7, 0x41, 0x2, 0x2, 0x13b, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x140, 0x7, 0x2c, 0x2, 0x2, 0x140, 0x149, 0x7, 
    0x40, 0x2, 0x2, 0x141, 0x142, 0x7, 0x39, 0x2, 0x2, 0x142, 0x145, 0x5, 
    0x68, 0x35, 0x2, 0x143, 0x144, 0x7, 0x14, 0x2, 0x2, 0x144, 0x146, 0x5, 
    0x8, 0x5, 0x2, 0x145, 0x143, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x146, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 
    0x14, 0x2, 0x2, 0x148, 0x14a, 0x5, 0x8, 0x5, 0x2, 0x149, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x14b, 0x150, 0x5, 0x2e, 0x18, 0x2, 0x14c, 0x14d, 0x7, 0x38, 
    0x2, 0x2, 0x14d, 0x14f, 0x5, 0x2e, 0x18, 0x2, 0x14e, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x152, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x5, 0x8, 0x5, 
    0x2, 0x154, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x155, 0x169, 0x7, 0x3, 0x2, 0x2, 
    0x156, 0x169, 0x7, 0x4, 0x2, 0x2, 0x157, 0x169, 0x7, 0x5, 0x2, 0x2, 
    0x158, 0x169, 0x7, 0x6, 0x2, 0x2, 0x159, 0x169, 0x7, 0x7, 0x2, 0x2, 
    0x15a, 0x169, 0x7, 0x8, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x3, 0x2, 0x2, 
    0x15c, 0x169, 0x7, 0x8, 0x2, 0x2, 0x15d, 0x169, 0x7, 0x11, 0x2, 0x2, 
    0x15e, 0x169, 0x7, 0x12, 0x2, 0x2, 0x15f, 0x169, 0x7, 0x13, 0x2, 0x2, 
    0x160, 0x169, 0x7, 0xb, 0x2, 0x2, 0x161, 0x169, 0x7, 0xc, 0x2, 0x2, 
    0x162, 0x169, 0x7, 0xf, 0x2, 0x2, 0x163, 0x169, 0x7, 0xd, 0x2, 0x2, 
    0x164, 0x169, 0x7, 0x10, 0x2, 0x2, 0x165, 0x169, 0x7, 0xe, 0x2, 0x2, 
    0x166, 0x167, 0x7, 0x19, 0x2, 0x2, 0x167, 0x169, 0x7, 0x1a, 0x2, 0x2, 
    0x168, 0x155, 0x3, 0x2, 0x2, 0x2, 0x168, 0x156, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x157, 0x3, 0x2, 0x2, 0x2, 0x168, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x159, 0x3, 0x2, 0x2, 0x2, 0x168, 0x15a, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x168, 0x15d, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x168, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x160, 0x3, 0x2, 0x2, 0x2, 0x168, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x162, 0x3, 0x2, 0x2, 0x2, 0x168, 0x163, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x164, 0x3, 0x2, 0x2, 0x2, 0x168, 0x165, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x169, 0x31, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x16c, 0x5, 0x7e, 0x40, 0x2, 0x16b, 0x16d, 0x7, 0x34, 0x2, 0x2, 0x16c, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16d, 
    0x16e, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 0x5, 0x34, 0x1b, 0x2, 0x16f, 
    0x172, 0x5, 0x4, 0x3, 0x2, 0x170, 0x172, 0x7, 0x3f, 0x2, 0x2, 0x171, 
    0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x173, 0x190, 0x7, 0x33, 0x2, 0x2, 0x174, 
    0x179, 0x5, 0x30, 0x19, 0x2, 0x175, 0x176, 0x7, 0x36, 0x2, 0x2, 0x176, 
    0x179, 0x5, 0x36, 0x1c, 0x2, 0x177, 0x179, 0x7, 0x40, 0x2, 0x2, 0x178, 
    0x174, 0x3, 0x2, 0x2, 0x2, 0x178, 0x175, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x177, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x3, 0x2, 0x2, 0x2, 0x179, 
    0x17b, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17c, 0x5, 0x5a, 0x2e, 0x2, 0x17b, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17c, 
    0x17d, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x186, 0x7, 0x15, 0x2, 0x2, 0x17e, 
    0x181, 0x5, 0x3a, 0x1e, 0x2, 0x17f, 0x180, 0x7, 0x38, 0x2, 0x2, 0x180, 
    0x182, 0x5, 0x38, 0x1d, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 0x187, 0x3, 0x2, 0x2, 0x2, 0x183, 
    0x185, 0x5, 0x38, 0x1d, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x184, 
    0x185, 0x3, 0x2, 0x2, 0x2, 0x185, 0x187, 0x3, 0x2, 0x2, 0x2, 0x186, 
    0x17e, 0x3, 0x2, 0x2, 0x2, 0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x187, 
    0x188, 0x3, 0x2, 0x2, 0x2, 0x188, 0x18b, 0x7, 0x16, 0x2, 0x2, 0x189, 
    0x18a, 0x7, 0x39, 0x2, 0x2, 0x18a, 0x18c, 0x5, 0x68, 0x35, 0x2, 0x18b, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x191, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x29, 0x2, 0x2, 0x18e, 
    0x18f, 0x7, 0x15, 0x2, 0x2, 0x18f, 0x191, 0x7, 0x16, 0x2, 0x2, 0x190, 
    0x178, 0x3, 0x2, 0x2, 0x2, 0x190, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x191, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x5, 0x68, 0x35, 0x2, 0x193, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x7, 0x1b, 0x2, 0x2, 0x195, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x196, 0x19b, 0x5, 0x3c, 0x1f, 0x2, 0x197, 
    0x198, 0x7, 0x38, 0x2, 0x2, 0x198, 0x19a, 0x5, 0x3c, 0x1f, 0x2, 0x199, 
    0x197, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19b, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 
    0x7, 0x40, 0x2, 0x2, 0x19f, 0x1a1, 0x7, 0x39, 0x2, 0x2, 0x1a0, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 
    0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 0x68, 0x35, 0x2, 0x1a3, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x7, 0x35, 0x2, 0x2, 0x1a5, 0x1a7, 
    0x5, 0x8, 0x5, 0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 
    0x3, 0x2, 0x2, 0x2, 0x1a7, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1ab, 0x7, 
    0x2d, 0x2, 0x2, 0x1a9, 0x1ac, 0x5, 0x8, 0x5, 0x2, 0x1aa, 0x1ac, 0x5, 
    0x2a, 0x16, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1aa, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 0x5, 
    0x6, 0x4, 0x2, 0x1ae, 0x1b0, 0x5, 0x42, 0x22, 0x2, 0x1af, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x41, 0x3, 0x2, 
    0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x2e, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x6, 
    0x4, 0x2, 0x1b3, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x2f, 
    0x2, 0x2, 0x1b5, 0x1b6, 0x5, 0x8, 0x5, 0x2, 0x1b6, 0x1b7, 0x5, 0x6, 
    0x4, 0x2, 0x1b7, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x31, 
    0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x40, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x32, 
    0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x8, 0x5, 0x2, 0x1bc, 0x1bd, 0x5, 0x6, 
    0x4, 0x2, 0x1bd, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0x30, 
    0x2, 0x2, 0x1bf, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x5, 0x7e, 
    0x40, 0x2, 0x1c1, 0x1c2, 0x7, 0x27, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x40, 
    0x2, 0x2, 0x1c3, 0x1c4, 0x5, 0x4c, 0x27, 0x2, 0x1c4, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1c9, 0x7, 0x17, 0x2, 0x2, 0x1c6, 0x1c8, 0x5, 0x4e, 
    0x28, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1cb, 0x3, 0x2, 
    0x2, 0x2, 0x1c9, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x3, 0x2, 
    0x2, 0x2, 0x1ca, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 
    0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x18, 0x2, 0x2, 0x1cd, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x40, 0x2, 0x2, 0x1cf, 0x1d0, 0x7, 0x39, 
    0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0x68, 0x35, 0x2, 0x1d1, 0x1d2, 0x7, 0x3f, 
    0x2, 0x2, 0x1d2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x5, 0x7e, 
    0x40, 0x2, 0x1d4, 0x1d5, 0x7, 0x28, 0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0x40, 
    0x2, 0x2, 0x1d6, 0x1d7, 0x5, 0x52, 0x2a, 0x2, 0x1d7, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x1d8, 0x1e4, 0x7, 0x17, 0x2, 0x2, 0x1d9, 0x1de, 0x5, 0x54, 
    0x2b, 0x2, 0x1da, 0x1db, 0x7, 0x38, 0x2, 0x2, 0x1db, 0x1dd, 0x5, 0x54, 
    0x2b, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x1e3, 0x7, 0x38, 0x2, 0x2, 0x1e2, 0x1e1, 0x3, 0x2, 
    0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e4, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 
    0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x18, 
    0x2, 0x2, 0x1e7, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1eb, 0x7, 0x40, 
    0x2, 0x2, 0x1e9, 0x1ea, 0x7, 0x14, 0x2, 0x2, 0x1ea, 0x1ec, 0x5, 0x8, 
    0x5, 0x2, 0x1eb, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 
    0x2, 0x2, 0x1ec, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x5, 0x7e, 
    0x40, 0x2, 0x1ee, 0x1ef, 0x7, 0x23, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x21, 
    0x2, 0x2, 0x1f0, 0x1f1, 0x5, 0xe, 0x8, 0x2, 0x1f1, 0x1f4, 0x5, 0x78, 
    0x3d, 0x2, 0x1f2, 0x1f3, 0x7, 0x22, 0x2, 0x2, 0x1f3, 0x1f5, 0x5, 0x5c, 
    0x2f, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x5, 0x5e, 
    0x30, 0x2, 0x1f7, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x5, 0x7e, 
    0x40, 0x2, 0x1f9, 0x1fa, 0x7, 0x21, 0x2, 0x2, 0x1fa, 0x1fc, 0x7, 0x40, 
    0x2, 0x2, 0x1fb, 0x1fd, 0x5, 0x5a, 0x2e, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x200, 0x3, 0x2, 
    0x2, 0x2, 0x1fe, 0x1ff, 0x7, 0x22, 0x2, 0x2, 0x1ff, 0x201, 0x5, 0x5c, 
    0x2f, 0x2, 0x200, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x5, 0x5e, 
    0x30, 0x2, 0x203, 0x59, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 0xf, 
    0x2, 0x2, 0x205, 0x20a, 0x7, 0x40, 0x2, 0x2, 0x206, 0x207, 0x7, 0x38, 
    0x2, 0x2, 0x207, 0x209, 0x7, 0x40, 0x2, 0x2, 0x208, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x10, 
    0x2, 0x2, 0x20e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x214, 0x5, 0x76, 
    0x3c, 0x2, 0x210, 0x211, 0x7, 0x38, 0x2, 0x2, 0x211, 0x213, 0x5, 0x76, 
    0x3c, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x213, 0x216, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 
    0x2, 0x217, 0x21c, 0x7, 0x17, 0x2, 0x2, 0x218, 0x21b, 0x5, 0x60, 0x31, 
    0x2, 0x219, 0x21b, 0x5, 0x62, 0x32, 0x2, 0x21a, 0x218, 0x3, 0x2, 0x2, 
    0x2, 0x21a, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21e, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x21d, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 
    0x2, 0x21f, 0x220, 0x7, 0x18, 0x2, 0x2, 0x220, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x221, 0x223, 0x7, 0x24, 0x2, 0x2, 0x222, 0x221, 0x3, 0x2, 0x2, 
    0x2, 0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 
    0x2, 0x224, 0x225, 0x7, 0x40, 0x2, 0x2, 0x225, 0x226, 0x7, 0x39, 0x2, 
    0x2, 0x226, 0x229, 0x5, 0x68, 0x35, 0x2, 0x227, 0x228, 0x7, 0x14, 0x2, 
    0x2, 0x228, 0x22a, 0x5, 0x8, 0x5, 0x2, 0x229, 0x227, 0x3, 0x2, 0x2, 
    0x2, 0x229, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 
    0x2, 0x22b, 0x22c, 0x7, 0x3f, 0x2, 0x2, 0x22c, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x22d, 0x22f, 0x7, 0x24, 0x2, 0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x3, 0x2, 0x2, 
    0x2, 0x230, 0x231, 0x5, 0x32, 0x1a, 0x2, 0x231, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x232, 0x237, 0x5, 0x66, 0x34, 0x2, 0x233, 0x234, 0x7, 0x38, 0x2, 
    0x2, 0x234, 0x236, 0x5, 0x66, 0x34, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 
    0x2, 0x236, 0x239, 0x3, 0x2, 0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 0x238, 0x23b, 0x3, 0x2, 0x2, 
    0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23c, 0x7, 0x38, 0x2, 
    0x2, 0x23b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 
    0x2, 0x23c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x240, 0x7, 0x40, 0x2, 
    0x2, 0x23e, 0x23f, 0x7, 0x14, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x8, 0x5, 
    0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x67, 0x3, 0x2, 0x2, 0x2, 0x242, 0x244, 0x5, 0x6a, 0x36, 
    0x2, 0x243, 0x242, 0x3, 0x2, 0x2, 0x2, 0x244, 0x247, 0x3, 0x2, 0x2, 
    0x2, 0x245, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x246, 0x248, 0x3, 0x2, 0x2, 0x2, 0x247, 0x245, 0x3, 0x2, 0x2, 
    0x2, 0x248, 0x24c, 0x5, 0x72, 0x3a, 0x2, 0x249, 0x24b, 0x5, 0x6c, 0x37, 
    0x2, 0x24a, 0x249, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24e, 0x3, 0x2, 0x2, 
    0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x3, 0x2, 0x2, 
    0x2, 0x24d, 0x252, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 
    0x2, 0x24f, 0x251, 0x5, 0x6e, 0x38, 0x2, 0x250, 0x24f, 0x3, 0x2, 0x2, 
    0x2, 0x251, 0x254, 0x3, 0x2, 0x2, 0x2, 0x252, 0x250, 0x3, 0x2, 0x2, 
    0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x256, 0x3, 0x2, 0x2, 
    0x2, 0x254, 0x252, 0x3, 0x2, 0x2, 0x2, 0x255, 0x257, 0x5, 0x70, 0x39, 
    0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 
    0x2, 0x257, 0x69, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x7, 0x20, 0x2, 
    0x2, 0x259, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x19, 0x2, 
    0x2, 0x25b, 0x25c, 0x5, 0x8, 0x5, 0x2, 0x25c, 0x25d, 0x7, 0x1a, 0x2, 
    0x2, 0x25d, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0x5, 0x2, 0x2, 
    0x25f, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 0x13, 0x2, 0x2, 
    0x261, 0x71, 0x3, 0x2, 0x2, 0x2, 0x262, 0x265, 0x5, 0xa, 0x6, 0x2, 0x263, 
    0x265, 0x5, 0x74, 0x3b, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 
    0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x73, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
    0x7, 0x33, 0x2, 0x2, 0x267, 0x270, 0x7, 0x15, 0x2, 0x2, 0x268, 0x26b, 
    0x5, 0x3a, 0x1e, 0x2, 0x269, 0x26a, 0x7, 0x38, 0x2, 0x2, 0x26a, 0x26c, 
    0x5, 0x38, 0x1d, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
    0x3, 0x2, 0x2, 0x2, 0x26c, 0x271, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 
    0x5, 0x38, 0x1d, 0x2, 0x26e, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 
    0x3, 0x2, 0x2, 0x2, 0x26f, 0x271, 0x3, 0x2, 0x2, 0x2, 0x270, 0x268, 
    0x3, 0x2, 0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 
    0x3, 0x2, 0x2, 0x2, 0x272, 0x275, 0x7, 0x16, 0x2, 0x2, 0x273, 0x274, 
    0x7, 0x39, 0x2, 0x2, 0x274, 0x276, 0x5, 0x68, 0x35, 0x2, 0x275, 0x273, 
    0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 0x2, 0x276, 0x75, 0x3, 
    0x2, 0x2, 0x2, 0x277, 0x278, 0x5, 0xa, 0x6, 0x2, 0x278, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x279, 0x27a, 0x7, 0xf, 0x2, 0x2, 0x27a, 0x27f, 0x5, 0x68, 
    0x35, 0x2, 0x27b, 0x27c, 0x7, 0x38, 0x2, 0x2, 0x27c, 0x27e, 0x5, 0x68, 
    0x35, 0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27e, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x27f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 
    0x2, 0x2, 0x280, 0x282, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27f, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x283, 0x7, 0x10, 0x2, 0x2, 0x283, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x284, 0x285, 0x5, 0x7e, 0x40, 0x2, 0x285, 0x286, 0x7, 0x2a, 
    0x2, 0x2, 0x286, 0x287, 0x7, 0x40, 0x2, 0x2, 0x287, 0x28b, 0x7, 0x17, 
    0x2, 0x2, 0x288, 0x28a, 0x5, 0x6, 0x4, 0x2, 0x289, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x289, 0x3, 0x2, 
    0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28e, 0x3, 0x2, 
    0x2, 0x2, 0x28d, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x7, 0x18, 
    0x2, 0x2, 0x28f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 0x3c, 
    0x2, 0x2, 0x291, 0x292, 0x7, 0x41, 0x2, 0x2, 0x292, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x293, 0x295, 0x5, 0x80, 0x41, 0x2, 0x294, 0x293, 0x3, 0x2, 
    0x2, 0x2, 0x295, 0x298, 0x3, 0x2, 0x2, 0x2, 0x296, 0x294, 0x3, 0x2, 
    0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 0x297, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x298, 0x296, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x7, 0x3a, 0x2, 
    0x2, 0x29a, 0x29d, 0x7, 0x40, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x14, 0x2, 
    0x2, 0x29c, 0x29e, 0x7, 0x41, 0x2, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 0x2, 
    0x2, 0x29f, 0x2a0, 0x7, 0x1a, 0x2, 0x2, 0x2a0, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x2a1, 0x2a2, 0x7, 0x37, 0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x40, 0x2, 
    0x2, 0x2a3, 0x2a5, 0x5, 0x5a, 0x2e, 0x2, 0x2a4, 0x2a3, 0x3, 0x2, 0x2, 
    0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 0x2, 
    0x2, 0x2a6, 0x2aa, 0x7, 0x14, 0x2, 0x2, 0x2a7, 0x2ab, 0x5, 0xa, 0x6, 
    0x2, 0x2a8, 0x2ab, 0x5, 0x68, 0x35, 0x2, 0x2a9, 0x2ab, 0x5, 0x20, 0x11, 
    0x2, 0x2aa, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a8, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x83, 0x3, 0x2, 0x2, 0x2, 
    0x2ac, 0x2ad, 0x7, 0x3b, 0x2, 0x2, 0x2ad, 0x2ae, 0x7, 0x15, 0x2, 0x2, 
    0x2ae, 0x2af, 0x5, 0x28, 0x15, 0x2, 0x2af, 0x2b8, 0x7, 0x39, 0x2, 0x2, 
    0x2b0, 0x2b5, 0x5, 0x88, 0x45, 0x2, 0x2b1, 0x2b2, 0x7, 0x38, 0x2, 0x2, 
    0x2b2, 0x2b4, 0x5, 0x88, 0x45, 0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 
    0x2b4, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b3, 0x3, 0x2, 0x2, 0x2, 
    0x2b5, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 
    0x2b7, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b0, 0x3, 0x2, 0x2, 0x2, 
    0x2b8, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 
    0x2ba, 0x2c3, 0x7, 0x39, 0x2, 0x2, 0x2bb, 0x2c0, 0x5, 0x8a, 0x46, 0x2, 
    0x2bc, 0x2bd, 0x7, 0x38, 0x2, 0x2, 0x2bd, 0x2bf, 0x5, 0x8a, 0x46, 0x2, 
    0x2be, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c2, 0x3, 0x2, 0x2, 0x2, 
    0x2c0, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 0x2, 0x2, 
    0x2c1, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 
    0x2c3, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 
    0x2c4, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x39, 0x2, 0x2, 
    0x2c6, 0x2cb, 0x5, 0x8c, 0x47, 0x2, 0x2c7, 0x2c8, 0x7, 0x38, 0x2, 0x2, 
    0x2c8, 0x2ca, 0x5, 0x8c, 0x47, 0x2, 0x2c9, 0x2c7, 0x3, 0x2, 0x2, 0x2, 
    0x2ca, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2c9, 0x3, 0x2, 0x2, 0x2, 
    0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cf, 0x3, 0x2, 0x2, 0x2, 
    0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2c5, 0x3, 0x2, 0x2, 0x2, 
    0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x3, 0x2, 0x2, 0x2, 
    0x2d0, 0x2d1, 0x7, 0x16, 0x2, 0x2, 0x2d1, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x2d2, 0x2d3, 0x5, 0x28, 0x15, 0x2, 0x2d3, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x2d4, 0x2d5, 0x7, 0x41, 0x2, 0x2, 0x2d5, 0x2d6, 0x7, 0x15, 0x2, 0x2, 
    0x2d6, 0x2d7, 0x5, 0x8, 0x5, 0x2, 0x2d7, 0x2d8, 0x7, 0x16, 0x2, 0x2, 
    0x2d8, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 0x41, 0x2, 0x2, 
    0x2da, 0x2db, 0x7, 0x15, 0x2, 0x2, 0x2db, 0x2dc, 0x5, 0x8, 0x5, 0x2, 
    0x2dc, 0x2dd, 0x7, 0x16, 0x2, 0x2, 0x2dd, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x2de, 0x2df, 0x7, 0x41, 0x2, 0x2, 0x2df, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x2e0, 0x2e1, 0x9, 0xa, 0x2, 0x2, 0x2e1, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x93, 0x9c, 0xbe, 0xc8, 0xcd, 0xda, 0xfa, 0x107, 0x109, 0x10d, 0x113, 
    0x116, 0x11f, 0x132, 0x13d, 0x145, 0x149, 0x150, 0x168, 0x16c, 0x171, 
    0x178, 0x17b, 0x181, 0x184, 0x186, 0x18b, 0x190, 0x19b, 0x1a0, 0x1a6, 
    0x1ab, 0x1af, 0x1c9, 0x1de, 0x1e2, 0x1e4, 0x1eb, 0x1f4, 0x1fc, 0x200, 
    0x20a, 0x214, 0x21a, 0x21c, 0x222, 0x229, 0x22e, 0x237, 0x23b, 0x240, 
    0x245, 0x24c, 0x252, 0x256, 0x264, 0x26b, 0x26e, 0x270, 0x275, 0x27f, 
    0x28b, 0x296, 0x29d, 0x2a4, 0x2aa, 0x2b5, 0x2b8, 0x2c0, 0x2c3, 0x2cb, 
    0x2ce, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SanParser::Initializer SanParser::_init;
