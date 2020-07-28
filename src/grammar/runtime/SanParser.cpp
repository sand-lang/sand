
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
      | (1ULL << SanParser::Mul)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::BitwiseAnd)
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
      | (1ULL << SanParser::Alias))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::Attribute - 64))
      | (1ULL << (SanParser::Assembly - 64))
      | (1ULL << (SanParser::Import - 64))
      | (1ULL << (SanParser::True - 64))
      | (1ULL << (SanParser::False - 64))
      | (1ULL << (SanParser::NullLiteral - 64))
      | (1ULL << (SanParser::VariableName - 64))
      | (1ULL << (SanParser::StringLiteral - 64))
      | (1ULL << (SanParser::CharLiteral - 64))
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
      | (1ULL << SanParser::Mul)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::BitwiseAnd)
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
      | (1ULL << SanParser::Alias))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::Attribute - 64))
      | (1ULL << (SanParser::Assembly - 64))
      | (1ULL << (SanParser::Import - 64))
      | (1ULL << (SanParser::True - 64))
      | (1ULL << (SanParser::False - 64))
      | (1ULL << (SanParser::NullLiteral - 64))
      | (1ULL << (SanParser::VariableName - 64))
      | (1ULL << (SanParser::StringLiteral - 64))
      | (1ULL << (SanParser::CharLiteral - 64))
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
//----------------- BinaryShiftOperationContext ------------------------------------------------------------------

std::vector<SanParser::ExpressionContext *> SanParser::BinaryShiftOperationContext::expression() {
  return getRuleContexts<SanParser::ExpressionContext>();
}

SanParser::ExpressionContext* SanParser::BinaryShiftOperationContext::expression(size_t i) {
  return getRuleContext<SanParser::ExpressionContext>(i);
}

SanParser::ShiftOperatorContext* SanParser::BinaryShiftOperationContext::shiftOperator() {
  return getRuleContext<SanParser::ShiftOperatorContext>(0);
}

SanParser::BinaryShiftOperationContext::BinaryShiftOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::BinaryShiftOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitBinaryShiftOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DereferenceExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::DereferenceExpressionContext::Mul() {
  return getToken(SanParser::Mul, 0);
}

SanParser::ExpressionContext* SanParser::DereferenceExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::DereferenceExpressionContext::DereferenceExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::DereferenceExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitDereferenceExpression(this);
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
//----------------- PointerExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::PointerExpressionContext::BitwiseAnd() {
  return getToken(SanParser::BitwiseAnd, 0);
}

SanParser::ExpressionContext* SanParser::PointerExpressionContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

SanParser::PointerExpressionContext::PointerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::PointerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitPointerExpression(this);
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
    setState(220);
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
        type(0);
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
      expression(17);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryPositiveExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(209);
      match(SanParser::Add);
      setState(210);
      expression(16);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UnaryNegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(211);
      match(SanParser::Not);
      setState(212);
      expression(15);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<PointerExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(213);
      match(SanParser::BitwiseAnd);
      setState(214);
      expression(14);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<DereferenceExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(215);
      match(SanParser::Mul);
      setState(216);
      expression(13);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<FunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      function();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<NameExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(218);
      scopedName();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<LiteralDeclarationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      literal();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(269);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(222);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(223);
          multiplicativeOperatorStatement();
          setState(224);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(226);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(227);
          operatorStatement();
          setState(228);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryBitwiseOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(230);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(231);
          bitwiseOperatorStatement();
          setState(232);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryShiftOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(234);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(235);
          shiftOperator();
          setState(236);
          expression(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryComparisonOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(239);
          comparisonOperatorStatement();
          setState(240);
          expression(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryConditionalOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(243);
          conditionalOperatorStatement();
          setState(244);
          expression(3);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(246);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(247);
          equalityOperatorStatement();
          setState(248);
          expression(2);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<PropertyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(250);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(251);
          _la = _input->LA(1);
          if (!(_la == SanParser::Dot

          || _la == SanParser::Arrow)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(252);
          name();
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(253);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(254);
          match(SanParser::OpeningParen);
          setState(256);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SanParser::Add)
            | (1ULL << SanParser::Sub)
            | (1ULL << SanParser::Mul)
            | (1ULL << SanParser::Not)
            | (1ULL << SanParser::BitwiseAnd)
            | (1ULL << SanParser::OpeningParen)
            | (1ULL << SanParser::SizeOf)
            | (1ULL << SanParser::Function)
            | (1ULL << SanParser::Extern))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (SanParser::Attribute - 64))
            | (1ULL << (SanParser::True - 64))
            | (1ULL << (SanParser::False - 64))
            | (1ULL << (SanParser::NullLiteral - 64))
            | (1ULL << (SanParser::VariableName - 64))
            | (1ULL << (SanParser::StringLiteral - 64))
            | (1ULL << (SanParser::CharLiteral - 64))
            | (1ULL << (SanParser::DecimalLiteral - 64))
            | (1ULL << (SanParser::FloatingLiteral - 64))
            | (1ULL << (SanParser::ZeroLiteral - 64))
            | (1ULL << (SanParser::HexadecimalLiteral - 64))
            | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
            setState(255);
            functionCallArguments();
          }
          setState(258);
          match(SanParser::ClosingParen);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<IndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(259);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(260);
          match(SanParser::OpeningBracket);
          setState(261);
          expression(0);
          setState(262);
          match(SanParser::ClosingBracket);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<SuffixUnaryNegationExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(264);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(265);
          match(SanParser::Not);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<TypeCastContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(266);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(267);
          match(SanParser::As);
          setState(268);
          type(0);
          break;
        }

        } 
      }
      setState(273);
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
    setState(275);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(274);
      scopeResolver();
      break;
    }

    }
    setState(277);
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

std::vector<SanParser::ClassTypeNameGenericsContext *> SanParser::NameContext::classTypeNameGenerics() {
  return getRuleContexts<SanParser::ClassTypeNameGenericsContext>();
}

SanParser::ClassTypeNameGenericsContext* SanParser::NameContext::classTypeNameGenerics(size_t i) {
  return getRuleContext<SanParser::ClassTypeNameGenericsContext>(i);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(SanParser::VariableName);
    setState(283);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(280);
        classTypeNameGenerics(); 
      }
      setState(285);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
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
    setState(287);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(286);
      scopeResolver();
      break;
    }

    }
    setState(289);
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
    setState(291);
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
    setState(293);
    name();
    setState(294);
    match(SanParser::ScopeResolver);
    setState(296);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(295);
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
    setState(298);
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
    setState(300);
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
    setState(302);
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

//----------------- ShiftOperatorContext ------------------------------------------------------------------

SanParser::ShiftOperatorContext::ShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::ArithmeticRightShiftOperatorContext* SanParser::ShiftOperatorContext::arithmeticRightShiftOperator() {
  return getRuleContext<SanParser::ArithmeticRightShiftOperatorContext>(0);
}

SanParser::LogicalRightShiftOperatorContext* SanParser::ShiftOperatorContext::logicalRightShiftOperator() {
  return getRuleContext<SanParser::LogicalRightShiftOperatorContext>(0);
}

SanParser::LeftShiftOperatorContext* SanParser::ShiftOperatorContext::leftShiftOperator() {
  return getRuleContext<SanParser::LeftShiftOperatorContext>(0);
}


size_t SanParser::ShiftOperatorContext::getRuleIndex() const {
  return SanParser::RuleShiftOperator;
}


antlrcpp::Any SanParser::ShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ShiftOperatorContext* SanParser::shiftOperator() {
  ShiftOperatorContext *_localctx = _tracker.createInstance<ShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 24, SanParser::RuleShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(304);
      arithmeticRightShiftOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(305);
      logicalRightShiftOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(306);
      leftShiftOperator();
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

//----------------- ArithmeticRightShiftOperatorContext ------------------------------------------------------------------

SanParser::ArithmeticRightShiftOperatorContext::ArithmeticRightShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SanParser::ArithmeticRightShiftOperatorContext::GreaterThan() {
  return getTokens(SanParser::GreaterThan);
}

tree::TerminalNode* SanParser::ArithmeticRightShiftOperatorContext::GreaterThan(size_t i) {
  return getToken(SanParser::GreaterThan, i);
}


size_t SanParser::ArithmeticRightShiftOperatorContext::getRuleIndex() const {
  return SanParser::RuleArithmeticRightShiftOperator;
}


antlrcpp::Any SanParser::ArithmeticRightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ArithmeticRightShiftOperatorContext* SanParser::arithmeticRightShiftOperator() {
  ArithmeticRightShiftOperatorContext *_localctx = _tracker.createInstance<ArithmeticRightShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 26, SanParser::RuleArithmeticRightShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(SanParser::GreaterThan);
    setState(310);
    match(SanParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalRightShiftOperatorContext ------------------------------------------------------------------

SanParser::LogicalRightShiftOperatorContext::LogicalRightShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SanParser::LogicalRightShiftOperatorContext::GreaterThan() {
  return getTokens(SanParser::GreaterThan);
}

tree::TerminalNode* SanParser::LogicalRightShiftOperatorContext::GreaterThan(size_t i) {
  return getToken(SanParser::GreaterThan, i);
}


size_t SanParser::LogicalRightShiftOperatorContext::getRuleIndex() const {
  return SanParser::RuleLogicalRightShiftOperator;
}


antlrcpp::Any SanParser::LogicalRightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitLogicalRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SanParser::LogicalRightShiftOperatorContext* SanParser::logicalRightShiftOperator() {
  LogicalRightShiftOperatorContext *_localctx = _tracker.createInstance<LogicalRightShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, SanParser::RuleLogicalRightShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    match(SanParser::GreaterThan);
    setState(313);
    match(SanParser::GreaterThan);
    setState(314);
    match(SanParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftShiftOperatorContext ------------------------------------------------------------------

SanParser::LeftShiftOperatorContext::LeftShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SanParser::LeftShiftOperatorContext::LessThan() {
  return getTokens(SanParser::LessThan);
}

tree::TerminalNode* SanParser::LeftShiftOperatorContext::LessThan(size_t i) {
  return getToken(SanParser::LessThan, i);
}


size_t SanParser::LeftShiftOperatorContext::getRuleIndex() const {
  return SanParser::RuleLeftShiftOperator;
}


antlrcpp::Any SanParser::LeftShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitLeftShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SanParser::LeftShiftOperatorContext* SanParser::leftShiftOperator() {
  LeftShiftOperatorContext *_localctx = _tracker.createInstance<LeftShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 30, SanParser::RuleLeftShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(SanParser::LessThan);
    setState(317);
    match(SanParser::LessThan);
   
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
  enterRule(_localctx, 32, SanParser::RuleConditionalOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(319);
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
  enterRule(_localctx, 34, SanParser::RuleComparisonOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
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

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::AddEqual() {
  return getToken(SanParser::AddEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::SubEqual() {
  return getToken(SanParser::SubEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::MulEqual() {
  return getToken(SanParser::MulEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::DivEqual() {
  return getToken(SanParser::DivEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::ModEqual() {
  return getToken(SanParser::ModEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::XorEqual() {
  return getToken(SanParser::XorEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::OrEqual() {
  return getToken(SanParser::OrEqual, 0);
}

tree::TerminalNode* SanParser::EqualityOperatorStatementContext::AndEqual() {
  return getToken(SanParser::AndEqual, 0);
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
  enterRule(_localctx, 36, SanParser::RuleEqualityOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Equal)
      | (1ULL << SanParser::AddEqual)
      | (1ULL << SanParser::SubEqual)
      | (1ULL << SanParser::MulEqual)
      | (1ULL << SanParser::DivEqual)
      | (1ULL << SanParser::ModEqual)
      | (1ULL << SanParser::XorEqual)
      | (1ULL << SanParser::OrEqual)
      | (1ULL << SanParser::AndEqual))) != 0))) {
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

tree::TerminalNode* SanParser::LiteralContext::NullLiteral() {
  return getToken(SanParser::NullLiteral, 0);
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
  enterRule(_localctx, 38, SanParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(331);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::True:
      case SanParser::False: {
        enterOuterAlt(_localctx, 1);
        setState(325);
        booleanLiteral();
        break;
      }

      case SanParser::DecimalLiteral:
      case SanParser::ZeroLiteral:
      case SanParser::HexadecimalLiteral:
      case SanParser::BinaryLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(326);
        integerLiteral();
        break;
      }

      case SanParser::FloatingLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(327);
        floatingLiteral();
        break;
      }

      case SanParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(328);
        stringLiteral();
        break;
      }

      case SanParser::CharLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(329);
        match(SanParser::CharLiteral);
        break;
      }

      case SanParser::NullLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(330);
        match(SanParser::NullLiteral);
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
  enterRule(_localctx, 40, SanParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
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
  enterRule(_localctx, 42, SanParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    _la = _input->LA(1);
    if (!(((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (SanParser::DecimalLiteral - 74))
      | (1ULL << (SanParser::ZeroLiteral - 74))
      | (1ULL << (SanParser::HexadecimalLiteral - 74))
      | (1ULL << (SanParser::BinaryLiteral - 74)))) != 0))) {
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
  enterRule(_localctx, 44, SanParser::RuleFloatingLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
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
  enterRule(_localctx, 46, SanParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(340); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(339);
              match(SanParser::StringLiteral);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(342); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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
  enterRule(_localctx, 48, SanParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    match(SanParser::VariableDeclarator);
    setState(345);
    match(SanParser::VariableName);
    setState(354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Colon: {
        setState(346);
        match(SanParser::Colon);
        setState(347);
        type(0);
        setState(350);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Equal) {
          setState(348);
          match(SanParser::Equal);
          setState(349);
          expression(0);
        }
        break;
      }

      case SanParser::Equal: {
        setState(352);
        match(SanParser::Equal);
        setState(353);
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
  enterRule(_localctx, 50, SanParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    functionCallArgument();
    setState(361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(357);
      match(SanParser::Comma);
      setState(358);
      functionCallArgument();
      setState(363);
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
  enterRule(_localctx, 52, SanParser::RuleFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
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

tree::TerminalNode* SanParser::OverloadableOperatorContext::AddEqual() {
  return getToken(SanParser::AddEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::SubEqual() {
  return getToken(SanParser::SubEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::MulEqual() {
  return getToken(SanParser::MulEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::DivEqual() {
  return getToken(SanParser::DivEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::ModEqual() {
  return getToken(SanParser::ModEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::XorEqual() {
  return getToken(SanParser::XorEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::OrEqual() {
  return getToken(SanParser::OrEqual, 0);
}

tree::TerminalNode* SanParser::OverloadableOperatorContext::AndEqual() {
  return getToken(SanParser::AndEqual, 0);
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

SanParser::ShiftOperatorContext* SanParser::OverloadableOperatorContext::shiftOperator() {
  return getRuleContext<SanParser::ShiftOperatorContext>(0);
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
  enterRule(_localctx, 54, SanParser::RuleOverloadableOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(366);
      match(SanParser::Add);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(367);
      match(SanParser::Sub);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(368);
      match(SanParser::Mul);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(369);
      match(SanParser::Div);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(370);
      match(SanParser::Mod);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(371);
      match(SanParser::Not);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(372);
      match(SanParser::Add);
      setState(373);
      match(SanParser::Not);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(374);
      match(SanParser::Xor);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(375);
      match(SanParser::BitwiseOr);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(376);
      match(SanParser::BitwiseAnd);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(377);
      match(SanParser::AddEqual);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(378);
      match(SanParser::SubEqual);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(379);
      match(SanParser::MulEqual);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(380);
      match(SanParser::DivEqual);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(381);
      match(SanParser::ModEqual);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(382);
      match(SanParser::XorEqual);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(383);
      match(SanParser::OrEqual);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(384);
      match(SanParser::AndEqual);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(385);
      match(SanParser::EqualTo);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(386);
      match(SanParser::NotEqualTo);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(387);
      match(SanParser::LessThan);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(388);
      match(SanParser::LessThanOrEqualTo);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(389);
      match(SanParser::GreaterThan);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(390);
      match(SanParser::GreaterThanOrEqualTo);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(391);
      match(SanParser::OpeningBracket);
      setState(392);
      match(SanParser::ClosingBracket);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(393);
      shiftOperator();
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
  enterRule(_localctx, 56, SanParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(396);
    attributes();
    setState(398);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extern) {
      setState(397);
      match(SanParser::Extern);
    }
    setState(400);
    functionDeclaration();
    setState(403);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::OpeningBrace: {
        setState(401);
        body();
        break;
      }

      case SanParser::InstructionsSeparator: {
        setState(402);
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
  enterRule(_localctx, 58, SanParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(SanParser::Function);
    setState(434);
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
      case SanParser::AddEqual:
      case SanParser::SubEqual:
      case SanParser::MulEqual:
      case SanParser::DivEqual:
      case SanParser::ModEqual:
      case SanParser::XorEqual:
      case SanParser::OrEqual:
      case SanParser::AndEqual:
      case SanParser::OpeningParen:
      case SanParser::OpeningBracket:
      case SanParser::Cast:
      case SanParser::VariableName: {
        setState(410);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
        case 1: {
          setState(406);
          overloadableOperator();
          break;
        }

        case 2: {
          setState(407);
          match(SanParser::Cast);
          setState(408);
          castFunctionType();
          break;
        }

        case 3: {
          setState(409);
          match(SanParser::VariableName);
          break;
        }

        }
        setState(413);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::LessThan) {
          setState(412);
          classGenerics();
        }
        setState(415);
        match(SanParser::OpeningParen);
        setState(424);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SanParser::Const:
          case SanParser::Function:
          case SanParser::VariableName: {
            setState(416);
            functionArguments();
            setState(419);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SanParser::Comma) {
              setState(417);
              match(SanParser::Comma);
              setState(418);
              functionVariadicArgument();
            }
            break;
          }

          case SanParser::ClosingParen:
          case SanParser::Variadic: {
            setState(422);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SanParser::Variadic) {
              setState(421);
              functionVariadicArgument();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(426);
        match(SanParser::ClosingParen);
        setState(429);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Colon) {
          setState(427);
          match(SanParser::Colon);
          setState(428);
          type(0);
        }
        break;
      }

      case SanParser::Destructor: {
        setState(431);
        match(SanParser::Destructor);
        setState(432);
        match(SanParser::OpeningParen);
        setState(433);
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
  enterRule(_localctx, 60, SanParser::RuleCastFunctionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    type(0);
   
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
  enterRule(_localctx, 62, SanParser::RuleFunctionVariadicArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
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
  enterRule(_localctx, 64, SanParser::RuleFunctionArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(440);
    functionArgument();
    setState(445);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(441);
        match(SanParser::Comma);
        setState(442);
        functionArgument(); 
      }
      setState(447);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
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
  enterRule(_localctx, 66, SanParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(448);
      match(SanParser::VariableName);
      setState(449);
      match(SanParser::Colon);
      break;
    }

    }
    setState(452);
    type(0);
   
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
  enterRule(_localctx, 68, SanParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(454);
    match(SanParser::Return);
    setState(456);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Add)
      | (1ULL << SanParser::Sub)
      | (1ULL << SanParser::Mul)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::BitwiseAnd)
      | (1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::Attribute - 64))
      | (1ULL << (SanParser::True - 64))
      | (1ULL << (SanParser::False - 64))
      | (1ULL << (SanParser::NullLiteral - 64))
      | (1ULL << (SanParser::VariableName - 64))
      | (1ULL << (SanParser::StringLiteral - 64))
      | (1ULL << (SanParser::CharLiteral - 64))
      | (1ULL << (SanParser::DecimalLiteral - 64))
      | (1ULL << (SanParser::FloatingLiteral - 64))
      | (1ULL << (SanParser::ZeroLiteral - 64))
      | (1ULL << (SanParser::HexadecimalLiteral - 64))
      | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
      setState(455);
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
  enterRule(_localctx, 70, SanParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(SanParser::If);
    setState(461);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Add:
      case SanParser::Sub:
      case SanParser::Mul:
      case SanParser::Not:
      case SanParser::BitwiseAnd:
      case SanParser::OpeningParen:
      case SanParser::SizeOf:
      case SanParser::Function:
      case SanParser::Extern:
      case SanParser::Attribute:
      case SanParser::True:
      case SanParser::False:
      case SanParser::NullLiteral:
      case SanParser::VariableName:
      case SanParser::StringLiteral:
      case SanParser::CharLiteral:
      case SanParser::DecimalLiteral:
      case SanParser::FloatingLiteral:
      case SanParser::ZeroLiteral:
      case SanParser::HexadecimalLiteral:
      case SanParser::BinaryLiteral: {
        setState(459);
        expression(0);
        break;
      }

      case SanParser::VariableDeclarator: {
        setState(460);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(463);
    statement();
    setState(465);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(464);
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
  enterRule(_localctx, 72, SanParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    match(SanParser::Else);
    setState(468);
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
  enterRule(_localctx, 74, SanParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(SanParser::While);
    setState(471);
    expression(0);
    setState(472);
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
  enterRule(_localctx, 76, SanParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(SanParser::For);
    setState(475);
    match(SanParser::VariableName);
    setState(476);
    match(SanParser::In);
    setState(477);
    expression(0);
    setState(478);
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
  enterRule(_localctx, 78, SanParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
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

SanParser::ClassGenericsContext* SanParser::UnionStatementContext::classGenerics() {
  return getRuleContext<SanParser::ClassGenericsContext>(0);
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
  enterRule(_localctx, 80, SanParser::RuleUnionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(482);
    attributes();
    setState(483);
    match(SanParser::Union);
    setState(484);
    match(SanParser::VariableName);
    setState(486);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(485);
      classGenerics();
    }
    setState(488);
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
  enterRule(_localctx, 82, SanParser::RuleUnionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    match(SanParser::OpeningBrace);
    setState(494);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::VariableName) {
      setState(491);
      unionProperty();
      setState(496);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(497);
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
  enterRule(_localctx, 84, SanParser::RuleUnionProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(499);
    match(SanParser::VariableName);
    setState(500);
    match(SanParser::Colon);
    setState(501);
    type(0);
    setState(502);
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
  enterRule(_localctx, 86, SanParser::RuleEnumStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    attributes();
    setState(505);
    match(SanParser::Enum);
    setState(506);
    match(SanParser::VariableName);
    setState(507);
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
  enterRule(_localctx, 88, SanParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(SanParser::OpeningBrace);
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::VariableName) {
      setState(510);
      enumProperty();
      setState(515);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(511);
          match(SanParser::Comma);
          setState(512);
          enumProperty(); 
        }
        setState(517);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
      }
      setState(519);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SanParser::Comma) {
        setState(518);
        match(SanParser::Comma);
      }
    }
    setState(523);
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
  enterRule(_localctx, 90, SanParser::RuleEnumProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(SanParser::VariableName);
    setState(528);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(526);
      match(SanParser::Equal);
      setState(527);
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
  enterRule(_localctx, 92, SanParser::RuleSpecialClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    attributes();
    setState(531);
    match(SanParser::Special);
    setState(532);
    match(SanParser::Class);
    setState(533);
    scopedNameNoGeneric();
    setState(534);
    classTypeNameGenerics();
    setState(537);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extends) {
      setState(535);
      match(SanParser::Extends);
      setState(536);
      classExtends();
    }
    setState(539);
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
  enterRule(_localctx, 94, SanParser::RuleClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    attributes();
    setState(542);
    match(SanParser::Class);
    setState(543);
    match(SanParser::VariableName);
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(544);
      classGenerics();
    }
    setState(549);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extends) {
      setState(547);
      match(SanParser::Extends);
      setState(548);
      classExtends();
    }
    setState(551);
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
  enterRule(_localctx, 96, SanParser::RuleClassGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(SanParser::LessThan);
    setState(554);
    match(SanParser::VariableName);
    setState(559);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(555);
      match(SanParser::Comma);
      setState(556);
      match(SanParser::VariableName);
      setState(561);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(562);
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
  enterRule(_localctx, 98, SanParser::RuleClassExtends);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    classTypeName();
    setState(569);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(565);
      match(SanParser::Comma);
      setState(566);
      classTypeName();
      setState(571);
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

std::vector<SanParser::ClassBodyElementContext *> SanParser::ClassBodyContext::classBodyElement() {
  return getRuleContexts<SanParser::ClassBodyElementContext>();
}

SanParser::ClassBodyElementContext* SanParser::ClassBodyContext::classBodyElement(size_t i) {
  return getRuleContext<SanParser::ClassBodyElementContext>(i);
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
  enterRule(_localctx, 100, SanParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(SanParser::OpeningBrace);
    setState(576);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & ((1ULL << (SanParser::Class - 39))
      | (1ULL << (SanParser::Static - 39))
      | (1ULL << (SanParser::Union - 39))
      | (1ULL << (SanParser::Function - 39))
      | (1ULL << (SanParser::Extern - 39))
      | (1ULL << (SanParser::Alias - 39))
      | (1ULL << (SanParser::Attribute - 39))
      | (1ULL << (SanParser::VariableName - 39)))) != 0)) {
      setState(573);
      classBodyElement();
      setState(578);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(579);
    match(SanParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyElementContext ------------------------------------------------------------------

SanParser::ClassBodyElementContext::ClassBodyElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::ClassPropertyContext* SanParser::ClassBodyElementContext::classProperty() {
  return getRuleContext<SanParser::ClassPropertyContext>(0);
}

SanParser::ClassMethodContext* SanParser::ClassBodyElementContext::classMethod() {
  return getRuleContext<SanParser::ClassMethodContext>(0);
}

SanParser::ClassStatementContext* SanParser::ClassBodyElementContext::classStatement() {
  return getRuleContext<SanParser::ClassStatementContext>(0);
}

SanParser::UnionStatementContext* SanParser::ClassBodyElementContext::unionStatement() {
  return getRuleContext<SanParser::UnionStatementContext>(0);
}

SanParser::AliasContext* SanParser::ClassBodyElementContext::alias() {
  return getRuleContext<SanParser::AliasContext>(0);
}


size_t SanParser::ClassBodyElementContext::getRuleIndex() const {
  return SanParser::RuleClassBodyElement;
}


antlrcpp::Any SanParser::ClassBodyElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyElement(this);
  else
    return visitor->visitChildren(this);
}

SanParser::ClassBodyElementContext* SanParser::classBodyElement() {
  ClassBodyElementContext *_localctx = _tracker.createInstance<ClassBodyElementContext>(_ctx, getState());
  enterRule(_localctx, 102, SanParser::RuleClassBodyElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(581);
      classProperty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(582);
      classMethod();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(583);
      classStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(584);
      unionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(585);
      alias();
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
  enterRule(_localctx, 104, SanParser::RuleClassProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Static) {
      setState(588);
      match(SanParser::Static);
    }
    setState(591);
    match(SanParser::VariableName);
    setState(592);
    match(SanParser::Colon);
    setState(593);
    type(0);
    setState(596);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(594);
      match(SanParser::Equal);
      setState(595);
      expression(0);
    }
    setState(598);
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
  enterRule(_localctx, 106, SanParser::RuleClassMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(601);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Static) {
      setState(600);
      match(SanParser::Static);
    }
    setState(603);
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
  enterRule(_localctx, 108, SanParser::RuleClassInstantiationProperties);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(605);
    classInstantiationProperty();
    setState(610);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(606);
        match(SanParser::Comma);
        setState(607);
        classInstantiationProperty(); 
      }
      setState(612);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
    setState(614);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Comma) {
      setState(613);
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
  enterRule(_localctx, 110, SanParser::RuleClassInstantiationProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    match(SanParser::VariableName);
    setState(619);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(617);
      match(SanParser::Equal);
      setState(618);
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


size_t SanParser::TypeContext::getRuleIndex() const {
  return SanParser::RuleType;
}

void SanParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeArrayContext ------------------------------------------------------------------

SanParser::TypeContext* SanParser::TypeArrayContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::TypeArrayContext::OpeningBracket() {
  return getToken(SanParser::OpeningBracket, 0);
}

SanParser::ExpressionContext* SanParser::TypeArrayContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
}

tree::TerminalNode* SanParser::TypeArrayContext::ClosingBracket() {
  return getToken(SanParser::ClosingBracket, 0);
}

SanParser::TypeArrayContext::TypeArrayContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::TypeArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeNameContext ------------------------------------------------------------------

SanParser::ScopedNameContext* SanParser::TypeNameContext::scopedName() {
  return getRuleContext<SanParser::ScopedNameContext>(0);
}

SanParser::FunctionTypeContext* SanParser::TypeNameContext::functionType() {
  return getRuleContext<SanParser::FunctionTypeContext>(0);
}

tree::TerminalNode* SanParser::TypeNameContext::Const() {
  return getToken(SanParser::Const, 0);
}

SanParser::TypeNameContext::TypeNameContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypePointerContext ------------------------------------------------------------------

SanParser::TypeContext* SanParser::TypePointerContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::TypePointerContext::Mul() {
  return getToken(SanParser::Mul, 0);
}

tree::TerminalNode* SanParser::TypePointerContext::Const() {
  return getToken(SanParser::Const, 0);
}

SanParser::TypePointerContext::TypePointerContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::TypePointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypePointer(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeReferenceContext ------------------------------------------------------------------

SanParser::TypeContext* SanParser::TypeReferenceContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::TypeReferenceContext::BitwiseAnd() {
  return getToken(SanParser::BitwiseAnd, 0);
}

tree::TerminalNode* SanParser::TypeReferenceContext::Const() {
  return getToken(SanParser::Const, 0);
}

SanParser::TypeReferenceContext::TypeReferenceContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}

SanParser::TypeContext* SanParser::type() {
   return type(0);
}

SanParser::TypeContext* SanParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SanParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  SanParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 112;
  enterRecursionRule(_localctx, 112, SanParser::RuleType, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<TypeNameContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(623);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Const) {
      setState(622);
      match(SanParser::Const);
    }
    setState(627);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::VariableName: {
        setState(625);
        scopedName();
        break;
      }

      case SanParser::Function: {
        setState(626);
        functionType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(646);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(644);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<TypeArrayContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(629);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(630);
          match(SanParser::OpeningBracket);
          setState(631);
          expression(0);
          setState(632);
          match(SanParser::ClosingBracket);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TypePointerContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(634);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(636);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SanParser::Const) {
            setState(635);
            match(SanParser::Const);
          }
          setState(638);
          match(SanParser::Mul);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<TypeReferenceContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(639);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(641);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SanParser::Const) {
            setState(640);
            match(SanParser::Const);
          }
          setState(643);
          match(SanParser::BitwiseAnd);
          break;
        }

        } 
      }
      setState(648);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
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
    setState(649);
    match(SanParser::Function);
    setState(650);
    match(SanParser::OpeningParen);
    setState(659);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Const:
      case SanParser::Function:
      case SanParser::VariableName: {
        setState(651);
        functionArguments();
        setState(654);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Comma) {
          setState(652);
          match(SanParser::Comma);
          setState(653);
          functionVariadicArgument();
        }
        break;
      }

      case SanParser::ClosingParen:
      case SanParser::Variadic: {
        setState(657);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Variadic) {
          setState(656);
          functionVariadicArgument();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(661);
    match(SanParser::ClosingParen);
    setState(664);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(662);
      match(SanParser::Colon);
      setState(663);
      type(0);
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
    setState(666);
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
    setState(668);
    match(SanParser::LessThan);
    setState(669);
    type(0);
    setState(674);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(670);
      match(SanParser::Comma);
      setState(671);
      type(0);
      setState(676);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(677);
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
    setState(679);
    attributes();
    setState(680);
    match(SanParser::Namespace);
    setState(681);
    match(SanParser::VariableName);
    setState(682);
    match(SanParser::OpeningBrace);
    setState(686);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Add)
      | (1ULL << SanParser::Sub)
      | (1ULL << SanParser::Mul)
      | (1ULL << SanParser::Not)
      | (1ULL << SanParser::BitwiseAnd)
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
      | (1ULL << SanParser::Alias))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (SanParser::Attribute - 64))
      | (1ULL << (SanParser::Assembly - 64))
      | (1ULL << (SanParser::Import - 64))
      | (1ULL << (SanParser::True - 64))
      | (1ULL << (SanParser::False - 64))
      | (1ULL << (SanParser::NullLiteral - 64))
      | (1ULL << (SanParser::VariableName - 64))
      | (1ULL << (SanParser::StringLiteral - 64))
      | (1ULL << (SanParser::CharLiteral - 64))
      | (1ULL << (SanParser::DecimalLiteral - 64))
      | (1ULL << (SanParser::FloatingLiteral - 64))
      | (1ULL << (SanParser::ZeroLiteral - 64))
      | (1ULL << (SanParser::HexadecimalLiteral - 64))
      | (1ULL << (SanParser::BinaryLiteral - 64)))) != 0)) {
      setState(683);
      statement();
      setState(688);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(689);
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
    setState(691);
    match(SanParser::Import);
    setState(692);
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
    setState(697);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Attribute) {
      setState(694);
      attribute();
      setState(699);
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
    setState(700);
    match(SanParser::Attribute);
    setState(701);
    match(SanParser::VariableName);
    setState(704);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(702);
      match(SanParser::Equal);
      setState(703);
      match(SanParser::StringLiteral);
    }
    setState(706);
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
    setState(708);
    match(SanParser::Alias);
    setState(709);
    match(SanParser::VariableName);
    setState(711);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(710);
      classGenerics();
    }
    setState(713);
    match(SanParser::Equal);
    setState(717);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      setState(714);
      scopedName();
      break;
    }

    case 2: {
      setState(715);
      type(0);
      break;
    }

    case 3: {
      setState(716);
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
    setState(719);
    match(SanParser::Assembly);
    setState(720);
    match(SanParser::OpeningParen);
    setState(721);
    stringLiteral();

    setState(722);
    match(SanParser::Colon);
    setState(731);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::StringLiteral) {
      setState(723);
      assemblyOutput();
      setState(728);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SanParser::Comma) {
        setState(724);
        match(SanParser::Comma);
        setState(725);
        assemblyOutput();
        setState(730);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(733);
    match(SanParser::Colon);
    setState(742);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::StringLiteral) {
      setState(734);
      assemblyInput();
      setState(739);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SanParser::Comma) {
        setState(735);
        match(SanParser::Comma);
        setState(736);
        assemblyInput();
        setState(741);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(753);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Colon) {
      setState(744);
      match(SanParser::Colon);
      setState(745);
      assemblyClobber();
      setState(750);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SanParser::Comma) {
        setState(746);
        match(SanParser::Comma);
        setState(747);
        assemblyClobber();
        setState(752);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(755);
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
    setState(757);
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
    setState(759);
    match(SanParser::StringLiteral);
    setState(760);
    match(SanParser::OpeningParen);
    setState(761);
    expression(0);
    setState(762);
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
    setState(764);
    match(SanParser::StringLiteral);
    setState(765);
    match(SanParser::OpeningParen);
    setState(766);
    expression(0);
    setState(767);
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
    setState(769);
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
    setState(771);
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
    case 56: return typeSempred(dynamic_cast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SanParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);
    case 7: return precpred(_ctx, 20);
    case 8: return precpred(_ctx, 19);
    case 9: return precpred(_ctx, 18);
    case 10: return precpred(_ctx, 12);
    case 11: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

bool SanParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 4);
    case 13: return precpred(_ctx, 3);
    case 14: return precpred(_ctx, 2);

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
  "operatorStatement", "bitwiseOperatorStatement", "shiftOperator", "arithmeticRightShiftOperator", 
  "logicalRightShiftOperator", "leftShiftOperator", "conditionalOperatorStatement", 
  "comparisonOperatorStatement", "equalityOperatorStatement", "literal", 
  "booleanLiteral", "integerLiteral", "floatingLiteral", "stringLiteral", 
  "variableDeclaration", "functionCallArguments", "functionCallArgument", 
  "overloadableOperator", "function", "functionDeclaration", "castFunctionType", 
  "functionVariadicArgument", "functionArguments", "functionArgument", "returnStatement", 
  "ifStatement", "elseStatement", "whileStatement", "forStatement", "breakStatement", 
  "unionStatement", "unionBody", "unionProperty", "enumStatement", "enumBody", 
  "enumProperty", "specialClassStatement", "classStatement", "classGenerics", 
  "classExtends", "classBody", "classBodyElement", "classProperty", "classMethod", 
  "classInstantiationProperties", "classInstantiationProperty", "type", 
  "functionType", "classTypeName", "classTypeNameGenerics", "namespaceStatement", 
  "importStatement", "attributes", "attribute", "alias", "assemblyStatement", 
  "assemblyTemplate", "assemblyOutput", "assemblyInput", "assemblyClobber", 
  "eos"
};

std::vector<std::string> SanParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'||'", "'&&'", "'=='", 
  "'!='", "'<='", "'>='", "'<'", "'>'", "'^'", "'|'", "'&'", "'='", "'+='", 
  "'-='", "'*='", "'/='", "'%='", "'^='", "'|='", "'&='", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "'...'", "'..='", "'..'", "'as'", "'sizeof'", 
  "'const'", "'class'", "'extends'", "'special'", "'static'", "'.'", "'->'", 
  "'union'", "'enum'", "'@destructor'", "'namespace'", "'::'", "'let'", 
  "'if'", "'else'", "'while'", "'break'", "'for'", "'in'", "'fn'", "'extern'", 
  "'return'", "'cast'", "'alias'", "','", "':'", "'#['", "'asm'", "'import'", 
  "'true'", "'false'", "'null'", "", "", "", "", "", "", "'0'"
};

std::vector<std::string> SanParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "Not", "ConditionalOr", "ConditionalAnd", 
  "EqualTo", "NotEqualTo", "LessThanOrEqualTo", "GreaterThanOrEqualTo", 
  "LessThan", "GreaterThan", "Xor", "BitwiseOr", "BitwiseAnd", "Equal", 
  "AddEqual", "SubEqual", "MulEqual", "DivEqual", "ModEqual", "XorEqual", 
  "OrEqual", "AndEqual", "OpeningParen", "ClosingParen", "OpeningBrace", 
  "ClosingBrace", "OpeningBracket", "ClosingBracket", "Variadic", "InclusiveRange", 
  "ExclusiveRange", "As", "SizeOf", "Const", "Class", "Extends", "Special", 
  "Static", "Dot", "Arrow", "Union", "Enum", "Destructor", "Namespace", 
  "ScopeResolver", "VariableDeclarator", "If", "Else", "While", "Break", 
  "For", "In", "Function", "Extern", "Return", "Cast", "Alias", "Comma", 
  "Colon", "Attribute", "Assembly", "Import", "True", "False", "NullLiteral", 
  "InstructionsSeparator", "VariableName", "StringLiteral", "CharLiteral", 
  "DecimalLiteral", "FloatingLiteral", "ZeroLiteral", "HexadecimalLiteral", 
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
    0x3, 0x53, 0x308, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xdf, 0xa, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x103, 0xa, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x110, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x113, 0xb, 0x5, 0x3, 0x6, 0x5, 0x6, 0x116, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x11c, 0xa, 0x7, 
    0xc, 0x7, 0xe, 0x7, 0x11f, 0xb, 0x7, 0x3, 0x8, 0x5, 0x8, 0x122, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x12b, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x136, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x14e, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x6, 
    0x19, 0x157, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x158, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x161, 
    0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x165, 0xa, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x16a, 0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 
    0x16d, 0xb, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
    0x18d, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x191, 0xa, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x196, 0xa, 0x1e, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x19d, 0xa, 0x1f, 
    0x3, 0x1f, 0x5, 0x1f, 0x1a0, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x5, 0x1f, 0x1a6, 0xa, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1a9, 
    0xa, 0x1f, 0x5, 0x1f, 0x1ab, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x1b0, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 
    0x1b5, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x1be, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 
    0x1c1, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1c5, 0xa, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1cb, 0xa, 0x24, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1d0, 0xa, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x1d4, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1e9, 0xa, 0x2a, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1ef, 0xa, 0x2b, 0xc, 0x2b, 
    0xe, 0x2b, 0x1f2, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 
    0x204, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x207, 0xb, 0x2e, 0x3, 0x2e, 
    0x5, 0x2e, 0x20a, 0xa, 0x2e, 0x5, 0x2e, 0x20c, 0xa, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x213, 0xa, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 
    0x30, 0x5, 0x30, 0x21c, 0xa, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x224, 0xa, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x228, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x7, 0x32, 0x230, 0xa, 0x32, 0xc, 0x32, 
    0xe, 0x32, 0x233, 0xb, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x7, 0x33, 0x23a, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 0x23d, 
    0xb, 0x33, 0x3, 0x34, 0x3, 0x34, 0x7, 0x34, 0x241, 0xa, 0x34, 0xc, 0x34, 
    0xe, 0x34, 0x244, 0xb, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x24d, 0xa, 0x35, 0x3, 0x36, 
    0x5, 0x36, 0x250, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x5, 0x36, 0x257, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 
    0x5, 0x37, 0x25c, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x7, 0x38, 0x263, 0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x266, 
    0xb, 0x38, 0x3, 0x38, 0x5, 0x38, 0x269, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x5, 0x39, 0x26e, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 
    0x272, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x276, 0xa, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x5, 0x3a, 0x27f, 0xa, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x5, 0x3a, 0x284, 0xa, 0x3a, 0x3, 0x3a, 0x7, 0x3a, 0x287, 0xa, 0x3a, 
    0xc, 0x3a, 0xe, 0x3a, 0x28a, 0xb, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x291, 0xa, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 
    0x294, 0xa, 0x3b, 0x5, 0x3b, 0x296, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x5, 0x3b, 0x29b, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 0x3d, 0x2a3, 0xa, 0x3d, 0xc, 0x3d, 
    0xe, 0x3d, 0x2a6, 0xb, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x7, 0x3e, 0x2af, 0xa, 0x3e, 0xc, 0x3e, 
    0xe, 0x3e, 0x2b2, 0xb, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x40, 0x7, 0x40, 0x2ba, 0xa, 0x40, 0xc, 0x40, 0xe, 0x40, 
    0x2bd, 0xb, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x2c3, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x5, 0x42, 0x2ca, 0xa, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x5, 0x42, 0x2d0, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2d9, 0xa, 0x43, 0xc, 0x43, 
    0xe, 0x43, 0x2dc, 0xb, 0x43, 0x5, 0x43, 0x2de, 0xa, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2e4, 0xa, 0x43, 0xc, 0x43, 
    0xe, 0x43, 0x2e7, 0xb, 0x43, 0x5, 0x43, 0x2e9, 0xa, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2ef, 0xa, 0x43, 0xc, 0x43, 
    0xe, 0x43, 0x2f2, 0xb, 0x43, 0x5, 0x43, 0x2f4, 0xa, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x2, 0x4, 0x8, 
    0x72, 0x49, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x2, 0xc, 0x3, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x5, 0x7, 0x3, 0x2, 0x3, 0x4, 
    0x3, 0x2, 0x11, 0x13, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0x10, 0x3, 
    0x2, 0x14, 0x1c, 0x3, 0x2, 0x45, 0x46, 0x4, 0x2, 0x4c, 0x4c, 0x4e, 0x50, 
    0x3, 0x3, 0x53, 0x53, 0x2, 0x351, 0x2, 0x93, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x6, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x8, 0xde, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x115, 0x3, 0x2, 0x2, 0x2, 0xc, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0xe, 0x121, 0x3, 0x2, 0x2, 0x2, 0x10, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x12, 0x127, 0x3, 0x2, 0x2, 0x2, 0x14, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x16, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x130, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x135, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x137, 0x3, 0x2, 0x2, 0x2, 0x1e, 
    0x13a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x22, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x143, 0x3, 0x2, 0x2, 0x2, 0x26, 0x145, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x151, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x156, 0x3, 0x2, 0x2, 0x2, 0x32, 0x15a, 0x3, 0x2, 0x2, 0x2, 
    0x34, 0x166, 0x3, 0x2, 0x2, 0x2, 0x36, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x18c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x197, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1b8, 0x3, 
    0x2, 0x2, 0x2, 0x42, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1c4, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1cc, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1d8, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x1e4, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1f5, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1ff, 0x3, 
    0x2, 0x2, 0x2, 0x5c, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x22b, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x236, 0x3, 0x2, 0x2, 0x2, 0x66, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x25b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x26a, 
    0x3, 0x2, 0x2, 0x2, 0x72, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x74, 0x28b, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x78, 0x29e, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x2b5, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x80, 0x2be, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x84, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x2f7, 0x3, 0x2, 0x2, 0x2, 0x88, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2fe, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x303, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x305, 0x3, 
    0x2, 0x2, 0x2, 0x90, 0x92, 0x5, 0x6, 0x4, 0x2, 0x91, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x8e, 0x48, 0x2, 0x97, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9c, 0x7, 0x1f, 0x2, 0x2, 0x99, 0x9b, 
    0x5, 0x6, 0x4, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0xa0, 0x7, 0x20, 0x2, 0x2, 0xa0, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0xbf, 0x5, 0x3a, 0x1e, 0x2, 0xa2, 0xbf, 0x5, 0x7a, 0x3e, 0x2, 
    0xa3, 0xa4, 0x5, 0x8, 0x5, 0x2, 0xa4, 0xa5, 0x7, 0x48, 0x2, 0x2, 0xa5, 
    0xbf, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xbf, 0x5, 0x4, 0x3, 0x2, 0xa7, 0xa8, 
    0x5, 0x32, 0x1a, 0x2, 0xa8, 0xa9, 0x7, 0x48, 0x2, 0x2, 0xa9, 0xbf, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x46, 0x24, 0x2, 0xab, 0xac, 0x7, 0x48, 
    0x2, 0x2, 0xac, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xad, 0xbf, 0x5, 0x48, 0x25, 
    0x2, 0xae, 0xbf, 0x5, 0x4c, 0x27, 0x2, 0xaf, 0xbf, 0x5, 0x4e, 0x28, 
    0x2, 0xb0, 0xb1, 0x5, 0x50, 0x29, 0x2, 0xb1, 0xb2, 0x7, 0x48, 0x2, 0x2, 
    0xb2, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xbf, 0x5, 0x5e, 0x30, 0x2, 0xb4, 
    0xbf, 0x5, 0x60, 0x31, 0x2, 0xb5, 0xbf, 0x5, 0x52, 0x2a, 0x2, 0xb6, 
    0xbf, 0x5, 0x58, 0x2d, 0x2, 0xb7, 0xbf, 0x5, 0x7c, 0x3f, 0x2, 0xb8, 
    0xb9, 0x5, 0x84, 0x43, 0x2, 0xb9, 0xba, 0x7, 0x48, 0x2, 0x2, 0xba, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x82, 0x42, 0x2, 0xbc, 0xbd, 0x7, 
    0x48, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xad, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xbe, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xbe, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb8, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xc1, 0x8, 0x5, 0x1, 0x2, 0xc1, 0xc2, 0x7, 0x1d, 0x2, 0x2, 0xc2, 
    0xc3, 0x5, 0x8, 0x5, 0x2, 0xc3, 0xc4, 0x7, 0x1e, 0x2, 0x2, 0xc4, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x7, 0x27, 0x2, 0x2, 0xc6, 0xc9, 0x5, 
    0x8, 0x5, 0x2, 0xc7, 0xc9, 0x5, 0x72, 0x3a, 0x2, 0xc8, 0xc6, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xca, 0xcb, 0x5, 0x76, 0x3c, 0x2, 0xcb, 0xcd, 0x7, 0x1f, 0x2, 0x2, 
    0xcc, 0xce, 0x5, 0x6e, 0x38, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 
    0x7, 0x20, 0x2, 0x2, 0xd0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 
    0x4, 0x2, 0x2, 0xd2, 0xdf, 0x5, 0x8, 0x5, 0x13, 0xd3, 0xd4, 0x7, 0x3, 
    0x2, 0x2, 0xd4, 0xdf, 0x5, 0x8, 0x5, 0x12, 0xd5, 0xd6, 0x7, 0x8, 0x2, 
    0x2, 0xd6, 0xdf, 0x5, 0x8, 0x5, 0x11, 0xd7, 0xd8, 0x7, 0x13, 0x2, 0x2, 
    0xd8, 0xdf, 0x5, 0x8, 0x5, 0x10, 0xd9, 0xda, 0x7, 0x5, 0x2, 0x2, 0xda, 
    0xdf, 0x5, 0x8, 0x5, 0xf, 0xdb, 0xdf, 0x5, 0x3a, 0x1e, 0x2, 0xdc, 0xdf, 
    0x5, 0xa, 0x6, 0x2, 0xdd, 0xdf, 0x5, 0x28, 0x15, 0x2, 0xde, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xde, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xde, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd3, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0x111, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0xc, 0x9, 0x2, 0x2, 0xe1, 0xe2, 0x5, 
    0x14, 0xb, 0x2, 0xe2, 0xe3, 0x5, 0x8, 0x5, 0xa, 0xe3, 0x110, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe5, 0xc, 0x8, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x16, 0xc, 
    0x2, 0xe6, 0xe7, 0x5, 0x8, 0x5, 0x9, 0xe7, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe9, 0xc, 0x7, 0x2, 0x2, 0xe9, 0xea, 0x5, 0x18, 0xd, 0x2, 0xea, 
    0xeb, 0x5, 0x8, 0x5, 0x8, 0xeb, 0x110, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 
    0xc, 0x6, 0x2, 0x2, 0xed, 0xee, 0x5, 0x1a, 0xe, 0x2, 0xee, 0xef, 0x5, 
    0x8, 0x5, 0x7, 0xef, 0x110, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0xc, 0x5, 
    0x2, 0x2, 0xf1, 0xf2, 0x5, 0x24, 0x13, 0x2, 0xf2, 0xf3, 0x5, 0x8, 0x5, 
    0x6, 0xf3, 0x110, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0xc, 0x4, 0x2, 0x2, 
    0xf5, 0xf6, 0x5, 0x22, 0x12, 0x2, 0xf6, 0xf7, 0x5, 0x8, 0x5, 0x5, 0xf7, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0xc, 0x3, 0x2, 0x2, 0xf9, 0xfa, 
    0x5, 0x26, 0x14, 0x2, 0xfa, 0xfb, 0x5, 0x8, 0x5, 0x4, 0xfb, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0xfd, 0xc, 0x16, 0x2, 0x2, 0xfd, 0xfe, 0x9, 0x2, 
    0x2, 0x2, 0xfe, 0x110, 0x5, 0xc, 0x7, 0x2, 0xff, 0x100, 0xc, 0x15, 0x2, 
    0x2, 0x100, 0x102, 0x7, 0x1d, 0x2, 0x2, 0x101, 0x103, 0x5, 0x34, 0x1b, 
    0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 
    0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x110, 0x7, 0x1e, 0x2, 
    0x2, 0x105, 0x106, 0xc, 0x14, 0x2, 0x2, 0x106, 0x107, 0x7, 0x21, 0x2, 
    0x2, 0x107, 0x108, 0x5, 0x8, 0x5, 0x2, 0x108, 0x109, 0x7, 0x22, 0x2, 
    0x2, 0x109, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0xc, 0xe, 0x2, 
    0x2, 0x10b, 0x110, 0x7, 0x8, 0x2, 0x2, 0x10c, 0x10d, 0xc, 0xd, 0x2, 
    0x2, 0x10d, 0x10e, 0x7, 0x26, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x72, 0x3a, 
    0x2, 0x10f, 0xe0, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0x10f, 0xe8, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xec, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xf8, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x10f, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x105, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x112, 0x9, 0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x114, 0x116, 0x5, 0x12, 0xa, 0x2, 0x115, 0x114, 0x3, 0x2, 
    0x2, 0x2, 0x115, 0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x117, 0x118, 0x5, 0xc, 0x7, 0x2, 0x118, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x119, 0x11d, 0x7, 0x49, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x78, 0x3d, 
    0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 0x3, 0x2, 0x2, 
    0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x11e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x120, 0x122, 0x5, 0x12, 0xa, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 
    0x123, 0x124, 0x5, 0x10, 0x9, 0x2, 0x124, 0xf, 0x3, 0x2, 0x2, 0x2, 0x125, 
    0x126, 0x7, 0x49, 0x2, 0x2, 0x126, 0x11, 0x3, 0x2, 0x2, 0x2, 0x127, 
    0x128, 0x5, 0xc, 0x7, 0x2, 0x128, 0x12a, 0x7, 0x33, 0x2, 0x2, 0x129, 
    0x12b, 0x5, 0x12, 0xa, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12a, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x9, 0x3, 0x2, 0x2, 0x12d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x9, 
    0x4, 0x2, 0x2, 0x12f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x9, 0x5, 
    0x2, 0x2, 0x131, 0x19, 0x3, 0x2, 0x2, 0x2, 0x132, 0x136, 0x5, 0x1c, 
    0xf, 0x2, 0x133, 0x136, 0x5, 0x1e, 0x10, 0x2, 0x134, 0x136, 0x5, 0x20, 
    0x11, 0x2, 0x135, 0x132, 0x3, 0x2, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x135, 0x134, 0x3, 0x2, 0x2, 0x2, 0x136, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x137, 0x138, 0x7, 0x10, 0x2, 0x2, 0x138, 0x139, 0x7, 0x10, 0x2, 
    0x2, 0x139, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x10, 0x2, 
    0x2, 0x13b, 0x13c, 0x7, 0x10, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x10, 0x2, 
    0x2, 0x13d, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0xf, 0x2, 0x2, 
    0x13f, 0x140, 0x7, 0xf, 0x2, 0x2, 0x140, 0x21, 0x3, 0x2, 0x2, 0x2, 0x141, 
    0x142, 0x9, 0x6, 0x2, 0x2, 0x142, 0x23, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
    0x9, 0x7, 0x2, 0x2, 0x144, 0x25, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x9, 
    0x8, 0x2, 0x2, 0x146, 0x27, 0x3, 0x2, 0x2, 0x2, 0x147, 0x14e, 0x5, 0x2a, 
    0x16, 0x2, 0x148, 0x14e, 0x5, 0x2c, 0x17, 0x2, 0x149, 0x14e, 0x5, 0x2e, 
    0x18, 0x2, 0x14a, 0x14e, 0x5, 0x30, 0x19, 0x2, 0x14b, 0x14e, 0x7, 0x4b, 
    0x2, 0x2, 0x14c, 0x14e, 0x7, 0x47, 0x2, 0x2, 0x14d, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14b, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x150, 0x9, 0x9, 0x2, 0x2, 0x150, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x151, 0x152, 0x9, 0xa, 0x2, 0x2, 0x152, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x153, 
    0x154, 0x7, 0x4d, 0x2, 0x2, 0x154, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x155, 
    0x157, 0x7, 0x4a, 0x2, 0x2, 0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 
    0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x158, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x31, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 
    0x7, 0x34, 0x2, 0x2, 0x15b, 0x164, 0x7, 0x49, 0x2, 0x2, 0x15c, 0x15d, 
    0x7, 0x41, 0x2, 0x2, 0x15d, 0x160, 0x5, 0x72, 0x3a, 0x2, 0x15e, 0x15f, 
    0x7, 0x14, 0x2, 0x2, 0x15f, 0x161, 0x5, 0x8, 0x5, 0x2, 0x160, 0x15e, 
    0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x7, 0x14, 0x2, 0x2, 0x163, 0x165, 
    0x5, 0x8, 0x5, 0x2, 0x164, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 
    0x3, 0x2, 0x2, 0x2, 0x165, 0x33, 0x3, 0x2, 0x2, 0x2, 0x166, 0x16b, 0x5, 
    0x36, 0x1c, 0x2, 0x167, 0x168, 0x7, 0x40, 0x2, 0x2, 0x168, 0x16a, 0x5, 
    0x36, 0x1c, 0x2, 0x169, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 0x3, 
    0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x16c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 
    0x2, 0x2, 0x16e, 0x16f, 0x5, 0x8, 0x5, 0x2, 0x16f, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x170, 0x18d, 0x7, 0x3, 0x2, 0x2, 0x171, 0x18d, 0x7, 0x4, 0x2, 
    0x2, 0x172, 0x18d, 0x7, 0x5, 0x2, 0x2, 0x173, 0x18d, 0x7, 0x6, 0x2, 
    0x2, 0x174, 0x18d, 0x7, 0x7, 0x2, 0x2, 0x175, 0x18d, 0x7, 0x8, 0x2, 
    0x2, 0x176, 0x177, 0x7, 0x3, 0x2, 0x2, 0x177, 0x18d, 0x7, 0x8, 0x2, 
    0x2, 0x178, 0x18d, 0x7, 0x11, 0x2, 0x2, 0x179, 0x18d, 0x7, 0x12, 0x2, 
    0x2, 0x17a, 0x18d, 0x7, 0x13, 0x2, 0x2, 0x17b, 0x18d, 0x7, 0x15, 0x2, 
    0x2, 0x17c, 0x18d, 0x7, 0x16, 0x2, 0x2, 0x17d, 0x18d, 0x7, 0x17, 0x2, 
    0x2, 0x17e, 0x18d, 0x7, 0x18, 0x2, 0x2, 0x17f, 0x18d, 0x7, 0x19, 0x2, 
    0x2, 0x180, 0x18d, 0x7, 0x1a, 0x2, 0x2, 0x181, 0x18d, 0x7, 0x1b, 0x2, 
    0x2, 0x182, 0x18d, 0x7, 0x1c, 0x2, 0x2, 0x183, 0x18d, 0x7, 0xb, 0x2, 
    0x2, 0x184, 0x18d, 0x7, 0xc, 0x2, 0x2, 0x185, 0x18d, 0x7, 0xf, 0x2, 
    0x2, 0x186, 0x18d, 0x7, 0xd, 0x2, 0x2, 0x187, 0x18d, 0x7, 0x10, 0x2, 
    0x2, 0x188, 0x18d, 0x7, 0xe, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x21, 0x2, 
    0x2, 0x18a, 0x18d, 0x7, 0x22, 0x2, 0x2, 0x18b, 0x18d, 0x5, 0x1a, 0xe, 
    0x2, 0x18c, 0x170, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x171, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x172, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x174, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x176, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x179, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x17a, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x17e, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x180, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x181, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x182, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x183, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x185, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x186, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x18c, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x190, 0x5, 0x7e, 0x40, 
    0x2, 0x18f, 0x191, 0x7, 0x3c, 0x2, 0x2, 0x190, 0x18f, 0x3, 0x2, 0x2, 
    0x2, 0x190, 0x191, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x195, 0x5, 0x3c, 0x1f, 0x2, 0x193, 0x196, 0x5, 0x4, 0x3, 
    0x2, 0x194, 0x196, 0x7, 0x48, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x197, 0x1b4, 0x7, 0x3b, 0x2, 0x2, 0x198, 0x19d, 0x5, 0x38, 0x1d, 0x2, 
    0x199, 0x19a, 0x7, 0x3e, 0x2, 0x2, 0x19a, 0x19d, 0x5, 0x3e, 0x20, 0x2, 
    0x19b, 0x19d, 0x7, 0x49, 0x2, 0x2, 0x19c, 0x198, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19f, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x1a0, 0x5, 0x62, 0x32, 0x2, 0x19f, 0x19e, 0x3, 0x2, 0x2, 0x2, 
    0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x1aa, 0x7, 0x1d, 0x2, 0x2, 0x1a2, 0x1a5, 0x5, 0x42, 0x22, 0x2, 
    0x1a3, 0x1a4, 0x7, 0x40, 0x2, 0x2, 0x1a4, 0x1a6, 0x5, 0x40, 0x21, 0x2, 
    0x1a5, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a9, 0x5, 0x40, 0x21, 0x2, 
    0x1a8, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1a9, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 
    0x1ac, 0x1af, 0x7, 0x1e, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x41, 0x2, 0x2, 
    0x1ae, 0x1b0, 0x5, 0x72, 0x3a, 0x2, 0x1af, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1b2, 0x7, 0x31, 0x2, 0x2, 0x1b2, 0x1b3, 0x7, 0x1d, 0x2, 0x2, 
    0x1b3, 0x1b5, 0x7, 0x1e, 0x2, 0x2, 0x1b4, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1b6, 
    0x1b7, 0x5, 0x72, 0x3a, 0x2, 0x1b7, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
    0x1b9, 0x7, 0x23, 0x2, 0x2, 0x1b9, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x1bf, 0x5, 0x44, 0x23, 0x2, 0x1bb, 0x1bc, 0x7, 0x40, 0x2, 0x2, 0x1bc, 
    0x1be, 0x5, 0x44, 0x23, 0x2, 0x1bd, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1be, 
    0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 
    0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1bf, 
    0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x49, 0x2, 0x2, 0x1c3, 0x1c5, 
    0x7, 0x41, 0x2, 0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 
    0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 
    0x5, 0x72, 0x3a, 0x2, 0x1c7, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1ca, 
    0x7, 0x3d, 0x2, 0x2, 0x1c9, 0x1cb, 0x5, 0x8, 0x5, 0x2, 0x1ca, 0x1c9, 
    0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x1cc, 0x1cf, 0x7, 0x35, 0x2, 0x2, 0x1cd, 0x1d0, 0x5, 
    0x8, 0x5, 0x2, 0x1ce, 0x1d0, 0x5, 0x32, 0x1a, 0x2, 0x1cf, 0x1cd, 0x3, 
    0x2, 0x2, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x3, 
    0x2, 0x2, 0x2, 0x1d1, 0x1d3, 0x5, 0x6, 0x4, 0x2, 0x1d2, 0x1d4, 0x5, 
    0x4a, 0x26, 0x2, 0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 
    0x2, 0x2, 0x2, 0x1d4, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0x36, 
    0x2, 0x2, 0x1d6, 0x1d7, 0x5, 0x6, 0x4, 0x2, 0x1d7, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x1d8, 0x1d9, 0x7, 0x37, 0x2, 0x2, 0x1d9, 0x1da, 0x5, 0x8, 0x5, 
    0x2, 0x1da, 0x1db, 0x5, 0x6, 0x4, 0x2, 0x1db, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x1dd, 0x7, 0x39, 0x2, 0x2, 0x1dd, 0x1de, 0x7, 0x49, 0x2, 0x2, 
    0x1de, 0x1df, 0x7, 0x3a, 0x2, 0x2, 0x1df, 0x1e0, 0x5, 0x8, 0x5, 0x2, 
    0x1e0, 0x1e1, 0x5, 0x6, 0x4, 0x2, 0x1e1, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
    0x1e3, 0x7, 0x38, 0x2, 0x2, 0x1e3, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e5, 0x5, 0x7e, 0x40, 0x2, 0x1e5, 0x1e6, 0x7, 0x2f, 0x2, 0x2, 0x1e6, 
    0x1e8, 0x7, 0x49, 0x2, 0x2, 0x1e7, 0x1e9, 0x5, 0x62, 0x32, 0x2, 0x1e8, 
    0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
    0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x5, 0x54, 0x2b, 0x2, 0x1eb, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1f0, 0x7, 0x1f, 0x2, 0x2, 0x1ed, 
    0x1ef, 0x5, 0x56, 0x2c, 0x2, 0x1ee, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 
    0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x20, 0x2, 0x2, 0x1f4, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x7, 0x49, 0x2, 0x2, 0x1f6, 
    0x1f7, 0x7, 0x41, 0x2, 0x2, 0x1f7, 0x1f8, 0x5, 0x72, 0x3a, 0x2, 0x1f8, 
    0x1f9, 0x7, 0x48, 0x2, 0x2, 0x1f9, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
    0x1fb, 0x5, 0x7e, 0x40, 0x2, 0x1fb, 0x1fc, 0x7, 0x30, 0x2, 0x2, 0x1fc, 
    0x1fd, 0x7, 0x49, 0x2, 0x2, 0x1fd, 0x1fe, 0x5, 0x5a, 0x2e, 0x2, 0x1fe, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x20b, 0x7, 0x1f, 0x2, 0x2, 0x200, 
    0x205, 0x5, 0x5c, 0x2f, 0x2, 0x201, 0x202, 0x7, 0x40, 0x2, 0x2, 0x202, 
    0x204, 0x5, 0x5c, 0x2f, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x204, 
    0x207, 0x3, 0x2, 0x2, 0x2, 0x205, 0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 
    0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x209, 0x3, 0x2, 0x2, 0x2, 0x207, 
    0x205, 0x3, 0x2, 0x2, 0x2, 0x208, 0x20a, 0x7, 0x40, 0x2, 0x2, 0x209, 
    0x208, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 
    0x20c, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x200, 0x3, 0x2, 0x2, 0x2, 0x20b, 
    0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 
    0x20e, 0x7, 0x20, 0x2, 0x2, 0x20e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x20f, 
    0x212, 0x7, 0x49, 0x2, 0x2, 0x210, 0x211, 0x7, 0x14, 0x2, 0x2, 0x211, 
    0x213, 0x5, 0x8, 0x5, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 
    0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 
    0x5, 0x7e, 0x40, 0x2, 0x215, 0x216, 0x7, 0x2b, 0x2, 0x2, 0x216, 0x217, 
    0x7, 0x29, 0x2, 0x2, 0x217, 0x218, 0x5, 0xe, 0x8, 0x2, 0x218, 0x21b, 
    0x5, 0x78, 0x3d, 0x2, 0x219, 0x21a, 0x7, 0x2a, 0x2, 0x2, 0x21a, 0x21c, 
    0x5, 0x64, 0x33, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 
    0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 
    0x5, 0x66, 0x34, 0x2, 0x21e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 
    0x5, 0x7e, 0x40, 0x2, 0x220, 0x221, 0x7, 0x29, 0x2, 0x2, 0x221, 0x223, 
    0x7, 0x49, 0x2, 0x2, 0x222, 0x224, 0x5, 0x62, 0x32, 0x2, 0x223, 0x222, 
    0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x227, 
    0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0x2a, 0x2, 0x2, 0x226, 0x228, 
    0x5, 0x64, 0x33, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 
    0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 
    0x5, 0x66, 0x34, 0x2, 0x22a, 0x61, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 
    0x7, 0xf, 0x2, 0x2, 0x22c, 0x231, 0x7, 0x49, 0x2, 0x2, 0x22d, 0x22e, 
    0x7, 0x40, 0x2, 0x2, 0x22e, 0x230, 0x7, 0x49, 0x2, 0x2, 0x22f, 0x22d, 
    0x3, 0x2, 0x2, 0x2, 0x230, 0x233, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 
    0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x234, 
    0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 
    0x7, 0x10, 0x2, 0x2, 0x235, 0x63, 0x3, 0x2, 0x2, 0x2, 0x236, 0x23b, 
    0x5, 0x76, 0x3c, 0x2, 0x237, 0x238, 0x7, 0x40, 0x2, 0x2, 0x238, 0x23a, 
    0x5, 0x76, 0x3c, 0x2, 0x239, 0x237, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23d, 
    0x3, 0x2, 0x2, 0x2, 0x23b, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x23c, 0x65, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23b, 0x3, 
    0x2, 0x2, 0x2, 0x23e, 0x242, 0x7, 0x1f, 0x2, 0x2, 0x23f, 0x241, 0x5, 
    0x68, 0x35, 0x2, 0x240, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x244, 0x3, 
    0x2, 0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 
    0x2, 0x2, 0x2, 0x243, 0x245, 0x3, 0x2, 0x2, 0x2, 0x244, 0x242, 0x3, 
    0x2, 0x2, 0x2, 0x245, 0x246, 0x7, 0x20, 0x2, 0x2, 0x246, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x247, 0x24d, 0x5, 0x6a, 0x36, 0x2, 0x248, 0x24d, 0x5, 
    0x6c, 0x37, 0x2, 0x249, 0x24d, 0x5, 0x60, 0x31, 0x2, 0x24a, 0x24d, 0x5, 
    0x52, 0x2a, 0x2, 0x24b, 0x24d, 0x5, 0x82, 0x42, 0x2, 0x24c, 0x247, 0x3, 
    0x2, 0x2, 0x2, 0x24c, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x249, 0x3, 
    0x2, 0x2, 0x2, 0x24c, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24b, 0x3, 
    0x2, 0x2, 0x2, 0x24d, 0x69, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x250, 0x7, 0x2c, 
    0x2, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x7, 0x49, 
    0x2, 0x2, 0x252, 0x253, 0x7, 0x41, 0x2, 0x2, 0x253, 0x256, 0x5, 0x72, 
    0x3a, 0x2, 0x254, 0x255, 0x7, 0x14, 0x2, 0x2, 0x255, 0x257, 0x5, 0x8, 
    0x5, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x7, 0x48, 
    0x2, 0x2, 0x259, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25c, 0x7, 0x2c, 
    0x2, 0x2, 0x25b, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 
    0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x3a, 
    0x1e, 0x2, 0x25e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x264, 0x5, 0x70, 
    0x39, 0x2, 0x260, 0x261, 0x7, 0x40, 0x2, 0x2, 0x261, 0x263, 0x5, 0x70, 
    0x39, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x263, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 
    0x2, 0x2, 0x265, 0x268, 0x3, 0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x269, 0x7, 0x40, 0x2, 0x2, 0x268, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 0x2, 0x2, 0x269, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x26a, 0x26d, 0x7, 0x49, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x14, 0x2, 
    0x2, 0x26c, 0x26e, 0x5, 0x8, 0x5, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 
    0x2, 0x26d, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x26f, 0x271, 0x8, 0x3a, 0x1, 0x2, 0x270, 0x272, 0x7, 0x28, 0x2, 0x2, 
    0x271, 0x270, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 0x2, 0x2, 
    0x272, 0x275, 0x3, 0x2, 0x2, 0x2, 0x273, 0x276, 0x5, 0xa, 0x6, 0x2, 
    0x274, 0x276, 0x5, 0x74, 0x3b, 0x2, 0x275, 0x273, 0x3, 0x2, 0x2, 0x2, 
    0x275, 0x274, 0x3, 0x2, 0x2, 0x2, 0x276, 0x288, 0x3, 0x2, 0x2, 0x2, 
    0x277, 0x278, 0xc, 0x6, 0x2, 0x2, 0x278, 0x279, 0x7, 0x21, 0x2, 0x2, 
    0x279, 0x27a, 0x5, 0x8, 0x5, 0x2, 0x27a, 0x27b, 0x7, 0x22, 0x2, 0x2, 
    0x27b, 0x287, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27e, 0xc, 0x5, 0x2, 0x2, 
    0x27d, 0x27f, 0x7, 0x28, 0x2, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 
    0x27e, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 0x2, 0x2, 
    0x280, 0x287, 0x7, 0x5, 0x2, 0x2, 0x281, 0x283, 0xc, 0x4, 0x2, 0x2, 
    0x282, 0x284, 0x7, 0x28, 0x2, 0x2, 0x283, 0x282, 0x3, 0x2, 0x2, 0x2, 
    0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 0x2, 0x2, 0x2, 
    0x285, 0x287, 0x7, 0x13, 0x2, 0x2, 0x286, 0x277, 0x3, 0x2, 0x2, 0x2, 
    0x286, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x286, 0x281, 0x3, 0x2, 0x2, 0x2, 
    0x287, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 
    0x288, 0x289, 0x3, 0x2, 0x2, 0x2, 0x289, 0x73, 0x3, 0x2, 0x2, 0x2, 0x28a, 
    0x288, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x3b, 0x2, 0x2, 0x28c, 
    0x295, 0x7, 0x1d, 0x2, 0x2, 0x28d, 0x290, 0x5, 0x42, 0x22, 0x2, 0x28e, 
    0x28f, 0x7, 0x40, 0x2, 0x2, 0x28f, 0x291, 0x5, 0x40, 0x21, 0x2, 0x290, 
    0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 
    0x296, 0x3, 0x2, 0x2, 0x2, 0x292, 0x294, 0x5, 0x40, 0x21, 0x2, 0x293, 
    0x292, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 0x2, 0x294, 
    0x296, 0x3, 0x2, 0x2, 0x2, 0x295, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x295, 
    0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 0x297, 
    0x29a, 0x7, 0x1e, 0x2, 0x2, 0x298, 0x299, 0x7, 0x41, 0x2, 0x2, 0x299, 
    0x29b, 0x5, 0x72, 0x3a, 0x2, 0x29a, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29a, 
    0x29b, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x75, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 
    0x5, 0xa, 0x6, 0x2, 0x29d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 
    0xf, 0x2, 0x2, 0x29f, 0x2a4, 0x5, 0x72, 0x3a, 0x2, 0x2a0, 0x2a1, 0x7, 
    0x40, 0x2, 0x2, 0x2a1, 0x2a3, 0x5, 0x72, 0x3a, 0x2, 0x2a2, 0x2a0, 0x3, 
    0x2, 0x2, 0x2, 0x2a3, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a2, 0x3, 
    0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a7, 0x3, 
    0x2, 0x2, 0x2, 0x2a6, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 
    0x10, 0x2, 0x2, 0x2a8, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x5, 
    0x7e, 0x40, 0x2, 0x2aa, 0x2ab, 0x7, 0x32, 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 
    0x49, 0x2, 0x2, 0x2ac, 0x2b0, 0x7, 0x1f, 0x2, 0x2, 0x2ad, 0x2af, 0x5, 
    0x6, 0x4, 0x2, 0x2ae, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b2, 0x3, 
    0x2, 0x2, 0x2, 0x2b0, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0x3, 
    0x2, 0x2, 0x2, 0x2b1, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b0, 0x3, 
    0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x20, 0x2, 0x2, 0x2b4, 0x7b, 0x3, 
    0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x44, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 
    0x4a, 0x2, 0x2, 0x2b7, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2ba, 0x5, 
    0x80, 0x41, 0x2, 0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bd, 0x3, 
    0x2, 0x2, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x3, 
    0x2, 0x2, 0x2, 0x2bc, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bb, 0x3, 0x2, 
    0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x42, 0x2, 0x2, 0x2bf, 0x2c2, 0x7, 0x49, 
    0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x14, 0x2, 0x2, 0x2c1, 0x2c3, 0x7, 0x4a, 
    0x2, 0x2, 0x2c2, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x3, 0x2, 
    0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x22, 
    0x2, 0x2, 0x2c5, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x3f, 
    0x2, 0x2, 0x2c7, 0x2c9, 0x7, 0x49, 0x2, 0x2, 0x2c8, 0x2ca, 0x5, 0x62, 
    0x32, 0x2, 0x2c9, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 
    0x2, 0x2, 0x2ca, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cf, 0x7, 0x14, 
    0x2, 0x2, 0x2cc, 0x2d0, 0x5, 0xa, 0x6, 0x2, 0x2cd, 0x2d0, 0x5, 0x72, 
    0x3a, 0x2, 0x2ce, 0x2d0, 0x5, 0x28, 0x15, 0x2, 0x2cf, 0x2cc, 0x3, 0x2, 
    0x2, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 
    0x2, 0x2, 0x2d0, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x7, 0x43, 
    0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x1d, 0x2, 0x2, 0x2d3, 0x2d4, 0x5, 0x30, 
    0x19, 0x2, 0x2d4, 0x2dd, 0x7, 0x41, 0x2, 0x2, 0x2d5, 0x2da, 0x5, 0x88, 
    0x45, 0x2, 0x2d6, 0x2d7, 0x7, 0x40, 0x2, 0x2, 0x2d7, 0x2d9, 0x5, 0x88, 
    0x45, 0x2, 0x2d8, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2dc, 0x3, 0x2, 
    0x2, 0x2, 0x2da, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x3, 0x2, 
    0x2, 0x2, 0x2db, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2da, 0x3, 0x2, 
    0x2, 0x2, 0x2dd, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x3, 0x2, 
    0x2, 0x2, 0x2de, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e8, 0x7, 0x41, 
    0x2, 0x2, 0x2e0, 0x2e5, 0x5, 0x8a, 0x46, 0x2, 0x2e1, 0x2e2, 0x7, 0x40, 
    0x2, 0x2, 0x2e2, 0x2e4, 0x5, 0x8a, 0x46, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 
    0x2, 0x2, 0x2e4, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 
    0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e9, 0x3, 0x2, 
    0x2, 0x2, 0x2e7, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e0, 0x3, 0x2, 
    0x2, 0x2, 0x2e8, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2f3, 0x3, 0x2, 
    0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x41, 0x2, 0x2, 0x2eb, 0x2f0, 0x5, 0x8c, 
    0x47, 0x2, 0x2ec, 0x2ed, 0x7, 0x40, 0x2, 0x2, 0x2ed, 0x2ef, 0x5, 0x8c, 
    0x47, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f2, 0x3, 0x2, 
    0x2, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x3, 0x2, 
    0x2, 0x2, 0x2f1, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f0, 0x3, 0x2, 
    0x2, 0x2, 0x2f3, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x3, 0x2, 
    0x2, 0x2, 0x2f4, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x7, 0x1e, 
    0x2, 0x2, 0x2f6, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x5, 0x30, 
    0x19, 0x2, 0x2f8, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x4a, 
    0x2, 0x2, 0x2fa, 0x2fb, 0x7, 0x1d, 0x2, 0x2, 0x2fb, 0x2fc, 0x5, 0x8, 
    0x5, 0x2, 0x2fc, 0x2fd, 0x7, 0x1e, 0x2, 0x2, 0x2fd, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x4a, 0x2, 0x2, 0x2ff, 0x300, 0x7, 0x1d, 
    0x2, 0x2, 0x300, 0x301, 0x5, 0x8, 0x5, 0x2, 0x301, 0x302, 0x7, 0x1e, 
    0x2, 0x2, 0x302, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x7, 0x4a, 
    0x2, 0x2, 0x304, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x305, 0x306, 0x9, 0xb, 0x2, 
    0x2, 0x306, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x93, 0x9c, 0xbe, 0xc8, 
    0xcd, 0xde, 0x102, 0x10f, 0x111, 0x115, 0x11d, 0x121, 0x12a, 0x135, 
    0x14d, 0x158, 0x160, 0x164, 0x16b, 0x18c, 0x190, 0x195, 0x19c, 0x19f, 
    0x1a5, 0x1a8, 0x1aa, 0x1af, 0x1b4, 0x1bf, 0x1c4, 0x1ca, 0x1cf, 0x1d3, 
    0x1e8, 0x1f0, 0x205, 0x209, 0x20b, 0x212, 0x21b, 0x223, 0x227, 0x231, 
    0x23b, 0x242, 0x24c, 0x24f, 0x256, 0x25b, 0x264, 0x268, 0x26d, 0x271, 
    0x275, 0x27e, 0x283, 0x286, 0x288, 0x290, 0x293, 0x295, 0x29a, 0x2a4, 
    0x2b0, 0x2bb, 0x2c2, 0x2c9, 0x2cf, 0x2da, 0x2dd, 0x2e5, 0x2e8, 0x2f0, 
    0x2f3, 
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
