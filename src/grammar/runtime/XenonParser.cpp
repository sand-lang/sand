
// Generated from XenonParser.g4 by ANTLR 4.8


#include "XenonParserVisitor.h"

#include "XenonParser.h"


using namespace antlrcpp;
using namespace antlr4;

XenonParser::XenonParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

XenonParser::~XenonParser() {
  delete _interpreter;
}

std::string XenonParser::getGrammarFileName() const {
  return "XenonParser.g4";
}

const std::vector<std::string>& XenonParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& XenonParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InstructionsContext ------------------------------------------------------------------

XenonParser::InstructionsContext::InstructionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::EosContext* XenonParser::InstructionsContext::eos() {
  return getRuleContext<XenonParser::EosContext>(0);
}

std::vector<XenonParser::StatementContext *> XenonParser::InstructionsContext::statement() {
  return getRuleContexts<XenonParser::StatementContext>();
}

XenonParser::StatementContext* XenonParser::InstructionsContext::statement(size_t i) {
  return getRuleContext<XenonParser::StatementContext>(i);
}


size_t XenonParser::InstructionsContext::getRuleIndex() const {
  return XenonParser::RuleInstructions;
}


antlrcpp::Any XenonParser::InstructionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitInstructions(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::InstructionsContext* XenonParser::instructions() {
  InstructionsContext *_localctx = _tracker.createInstance<InstructionsContext>(_ctx, getState());
  enterRule(_localctx, 0, XenonParser::RuleInstructions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XenonParser::Add)
      | (1ULL << XenonParser::Sub)
      | (1ULL << XenonParser::Mul)
      | (1ULL << XenonParser::Not)
      | (1ULL << XenonParser::Neg)
      | (1ULL << XenonParser::BitwiseAnd)
      | (1ULL << XenonParser::OpeningParen)
      | (1ULL << XenonParser::OpeningBrace)
      | (1ULL << XenonParser::SizeOf)
      | (1ULL << XenonParser::Class)
      | (1ULL << XenonParser::Special)
      | (1ULL << XenonParser::Union)
      | (1ULL << XenonParser::Enum)
      | (1ULL << XenonParser::Namespace)
      | (1ULL << XenonParser::VariableDeclarator)
      | (1ULL << XenonParser::If)
      | (1ULL << XenonParser::While)
      | (1ULL << XenonParser::Break)
      | (1ULL << XenonParser::For)
      | (1ULL << XenonParser::Function)
      | (1ULL << XenonParser::Extern)
      | (1ULL << XenonParser::Return)
      | (1ULL << XenonParser::Alias))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (XenonParser::Attribute - 64))
      | (1ULL << (XenonParser::Assembly - 64))
      | (1ULL << (XenonParser::Import - 64))
      | (1ULL << (XenonParser::True - 64))
      | (1ULL << (XenonParser::False - 64))
      | (1ULL << (XenonParser::NullLiteral - 64))
      | (1ULL << (XenonParser::VariableName - 64))
      | (1ULL << (XenonParser::StringLiteral - 64))
      | (1ULL << (XenonParser::CharLiteral - 64))
      | (1ULL << (XenonParser::DecimalLiteral - 64))
      | (1ULL << (XenonParser::FloatingLiteral - 64))
      | (1ULL << (XenonParser::ZeroLiteral - 64))
      | (1ULL << (XenonParser::HexadecimalLiteral - 64))
      | (1ULL << (XenonParser::BinaryLiteral - 64)))) != 0)) {
      setState(152);
      statement();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
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

XenonParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::BodyContext::OpeningBrace() {
  return getToken(XenonParser::OpeningBrace, 0);
}

tree::TerminalNode* XenonParser::BodyContext::ClosingBrace() {
  return getToken(XenonParser::ClosingBrace, 0);
}

std::vector<XenonParser::StatementContext *> XenonParser::BodyContext::statement() {
  return getRuleContexts<XenonParser::StatementContext>();
}

XenonParser::StatementContext* XenonParser::BodyContext::statement(size_t i) {
  return getRuleContext<XenonParser::StatementContext>(i);
}


size_t XenonParser::BodyContext::getRuleIndex() const {
  return XenonParser::RuleBody;
}


antlrcpp::Any XenonParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::BodyContext* XenonParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 2, XenonParser::RuleBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(XenonParser::OpeningBrace);
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XenonParser::Add)
      | (1ULL << XenonParser::Sub)
      | (1ULL << XenonParser::Mul)
      | (1ULL << XenonParser::Not)
      | (1ULL << XenonParser::Neg)
      | (1ULL << XenonParser::BitwiseAnd)
      | (1ULL << XenonParser::OpeningParen)
      | (1ULL << XenonParser::OpeningBrace)
      | (1ULL << XenonParser::SizeOf)
      | (1ULL << XenonParser::Class)
      | (1ULL << XenonParser::Special)
      | (1ULL << XenonParser::Union)
      | (1ULL << XenonParser::Enum)
      | (1ULL << XenonParser::Namespace)
      | (1ULL << XenonParser::VariableDeclarator)
      | (1ULL << XenonParser::If)
      | (1ULL << XenonParser::While)
      | (1ULL << XenonParser::Break)
      | (1ULL << XenonParser::For)
      | (1ULL << XenonParser::Function)
      | (1ULL << XenonParser::Extern)
      | (1ULL << XenonParser::Return)
      | (1ULL << XenonParser::Alias))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (XenonParser::Attribute - 64))
      | (1ULL << (XenonParser::Assembly - 64))
      | (1ULL << (XenonParser::Import - 64))
      | (1ULL << (XenonParser::True - 64))
      | (1ULL << (XenonParser::False - 64))
      | (1ULL << (XenonParser::NullLiteral - 64))
      | (1ULL << (XenonParser::VariableName - 64))
      | (1ULL << (XenonParser::StringLiteral - 64))
      | (1ULL << (XenonParser::CharLiteral - 64))
      | (1ULL << (XenonParser::DecimalLiteral - 64))
      | (1ULL << (XenonParser::FloatingLiteral - 64))
      | (1ULL << (XenonParser::ZeroLiteral - 64))
      | (1ULL << (XenonParser::HexadecimalLiteral - 64))
      | (1ULL << (XenonParser::BinaryLiteral - 64)))) != 0)) {
      setState(161);
      statement();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(167);
    match(XenonParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

XenonParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::FunctionContext* XenonParser::StatementContext::function() {
  return getRuleContext<XenonParser::FunctionContext>(0);
}

XenonParser::NamespaceStatementContext* XenonParser::StatementContext::namespaceStatement() {
  return getRuleContext<XenonParser::NamespaceStatementContext>(0);
}

XenonParser::ExpressionContext* XenonParser::StatementContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::StatementContext::InstructionsSeparator() {
  return getToken(XenonParser::InstructionsSeparator, 0);
}

XenonParser::BodyContext* XenonParser::StatementContext::body() {
  return getRuleContext<XenonParser::BodyContext>(0);
}

XenonParser::VariableDeclarationContext* XenonParser::StatementContext::variableDeclaration() {
  return getRuleContext<XenonParser::VariableDeclarationContext>(0);
}

XenonParser::ReturnStatementContext* XenonParser::StatementContext::returnStatement() {
  return getRuleContext<XenonParser::ReturnStatementContext>(0);
}

XenonParser::IfStatementContext* XenonParser::StatementContext::ifStatement() {
  return getRuleContext<XenonParser::IfStatementContext>(0);
}

XenonParser::WhileStatementContext* XenonParser::StatementContext::whileStatement() {
  return getRuleContext<XenonParser::WhileStatementContext>(0);
}

XenonParser::ForStatementContext* XenonParser::StatementContext::forStatement() {
  return getRuleContext<XenonParser::ForStatementContext>(0);
}

XenonParser::BreakStatementContext* XenonParser::StatementContext::breakStatement() {
  return getRuleContext<XenonParser::BreakStatementContext>(0);
}

XenonParser::SpecialClassStatementContext* XenonParser::StatementContext::specialClassStatement() {
  return getRuleContext<XenonParser::SpecialClassStatementContext>(0);
}

XenonParser::ClassStatementContext* XenonParser::StatementContext::classStatement() {
  return getRuleContext<XenonParser::ClassStatementContext>(0);
}

XenonParser::UnionStatementContext* XenonParser::StatementContext::unionStatement() {
  return getRuleContext<XenonParser::UnionStatementContext>(0);
}

XenonParser::EnumStatementContext* XenonParser::StatementContext::enumStatement() {
  return getRuleContext<XenonParser::EnumStatementContext>(0);
}

XenonParser::ImportStatementContext* XenonParser::StatementContext::importStatement() {
  return getRuleContext<XenonParser::ImportStatementContext>(0);
}

XenonParser::AssemblyStatementContext* XenonParser::StatementContext::assemblyStatement() {
  return getRuleContext<XenonParser::AssemblyStatementContext>(0);
}

XenonParser::AliasContext* XenonParser::StatementContext::alias() {
  return getRuleContext<XenonParser::AliasContext>(0);
}


size_t XenonParser::StatementContext::getRuleIndex() const {
  return XenonParser::RuleStatement;
}


antlrcpp::Any XenonParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::StatementContext* XenonParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, XenonParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(169);
      function();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(170);
      namespaceStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(171);
      expression(0);
      setState(172);
      match(XenonParser::InstructionsSeparator);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(174);
      body();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(175);
      variableDeclaration();
      setState(176);
      match(XenonParser::InstructionsSeparator);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(178);
      returnStatement();
      setState(179);
      match(XenonParser::InstructionsSeparator);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(181);
      ifStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(182);
      whileStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(183);
      forStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(184);
      breakStatement();
      setState(185);
      match(XenonParser::InstructionsSeparator);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(187);
      specialClassStatement();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(188);
      classStatement();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(189);
      unionStatement();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(190);
      enumStatement();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(191);
      importStatement();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(192);
      assemblyStatement();
      setState(193);
      match(XenonParser::InstructionsSeparator);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(195);
      alias();
      setState(196);
      match(XenonParser::InstructionsSeparator);
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

XenonParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XenonParser::ExpressionContext::getRuleIndex() const {
  return XenonParser::RuleExpression;
}

void XenonParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SuffixUnaryNegationExpressionContext ------------------------------------------------------------------

XenonParser::ExpressionContext* XenonParser::SuffixUnaryNegationExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::SuffixUnaryNegationExpressionContext::Not() {
  return getToken(XenonParser::Not, 0);
}

XenonParser::SuffixUnaryNegationExpressionContext::SuffixUnaryNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::SuffixUnaryNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitSuffixUnaryNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryShiftOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::BinaryShiftOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::BinaryShiftOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::ShiftOperatorContext* XenonParser::BinaryShiftOperationContext::shiftOperator() {
  return getRuleContext<XenonParser::ShiftOperatorContext>(0);
}

XenonParser::BinaryShiftOperationContext::BinaryShiftOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BinaryShiftOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBinaryShiftOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DereferenceExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::DereferenceExpressionContext::Mul() {
  return getToken(XenonParser::Mul, 0);
}

XenonParser::ExpressionContext* XenonParser::DereferenceExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::DereferenceExpressionContext::DereferenceExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::DereferenceExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitDereferenceExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InParenExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::InParenExpressionContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

XenonParser::ExpressionContext* XenonParser::InParenExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::InParenExpressionContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}

XenonParser::InParenExpressionContext::InParenExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::InParenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitInParenExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::BinaryOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::BinaryOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::OperatorStatementContext* XenonParser::BinaryOperationContext::operatorStatement() {
  return getRuleContext<XenonParser::OperatorStatementContext>(0);
}

XenonParser::BinaryOperationContext::BinaryOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BinaryOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBinaryOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryBitwiseOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::BinaryBitwiseOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::BinaryBitwiseOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::BitwiseOperatorStatementContext* XenonParser::BinaryBitwiseOperationContext::bitwiseOperatorStatement() {
  return getRuleContext<XenonParser::BitwiseOperatorStatementContext>(0);
}

XenonParser::BinaryBitwiseOperationContext::BinaryBitwiseOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BinaryBitwiseOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBinaryBitwiseOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPositiveExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::UnaryPositiveExpressionContext::Add() {
  return getToken(XenonParser::Add, 0);
}

XenonParser::ExpressionContext* XenonParser::UnaryPositiveExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::UnaryPositiveExpressionContext::UnaryPositiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::UnaryPositiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitUnaryPositiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NameExpressionContext ------------------------------------------------------------------

XenonParser::ScopedNameContext* XenonParser::NameExpressionContext::scopedName() {
  return getRuleContext<XenonParser::ScopedNameContext>(0);
}

XenonParser::NameExpressionContext::NameExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::NameExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitNameExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::EqualityOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::EqualityOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::EqualityOperatorStatementContext* XenonParser::EqualityOperationContext::equalityOperatorStatement() {
  return getRuleContext<XenonParser::EqualityOperatorStatementContext>(0);
}

XenonParser::EqualityOperationContext::EqualityOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::EqualityOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseNegationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::BitwiseNegationExpressionContext::Neg() {
  return getToken(XenonParser::Neg, 0);
}

XenonParser::ExpressionContext* XenonParser::BitwiseNegationExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::BitwiseNegationExpressionContext::BitwiseNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BitwiseNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::IndexContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::IndexContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

tree::TerminalNode* XenonParser::IndexContext::OpeningBracket() {
  return getToken(XenonParser::OpeningBracket, 0);
}

tree::TerminalNode* XenonParser::IndexContext::ClosingBracket() {
  return getToken(XenonParser::ClosingBracket, 0);
}

XenonParser::IndexContext::IndexContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralDeclarationContext ------------------------------------------------------------------

XenonParser::LiteralContext* XenonParser::LiteralDeclarationContext::literal() {
  return getRuleContext<XenonParser::LiteralContext>(0);
}

XenonParser::LiteralDeclarationContext::LiteralDeclarationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::LiteralDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitLiteralDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

XenonParser::ExpressionContext* XenonParser::FunctionCallExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::FunctionCallExpressionContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

tree::TerminalNode* XenonParser::FunctionCallExpressionContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}

XenonParser::FunctionCallArgumentsContext* XenonParser::FunctionCallExpressionContext::functionCallArguments() {
  return getRuleContext<XenonParser::FunctionCallArgumentsContext>(0);
}

XenonParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PointerExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::PointerExpressionContext::BitwiseAnd() {
  return getToken(XenonParser::BitwiseAnd, 0);
}

XenonParser::ExpressionContext* XenonParser::PointerExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::PointerExpressionContext::PointerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::PointerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitPointerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SizeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::SizeofExpressionContext::SizeOf() {
  return getToken(XenonParser::SizeOf, 0);
}

XenonParser::ExpressionContext* XenonParser::SizeofExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::TypeContext* XenonParser::SizeofExpressionContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

XenonParser::SizeofExpressionContext::SizeofExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::SizeofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitSizeofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::UnaryNegationExpressionContext::Not() {
  return getToken(XenonParser::Not, 0);
}

XenonParser::ExpressionContext* XenonParser::UnaryNegationExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::UnaryNegationExpressionContext::UnaryNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::UnaryNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitUnaryNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegativeExpressionContext ------------------------------------------------------------------

tree::TerminalNode* XenonParser::UnaryNegativeExpressionContext::Sub() {
  return getToken(XenonParser::Sub, 0);
}

XenonParser::ExpressionContext* XenonParser::UnaryNegativeExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::UnaryNegativeExpressionContext::UnaryNegativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::UnaryNegativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitUnaryNegativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionExpressionContext ------------------------------------------------------------------

XenonParser::FunctionContext* XenonParser::FunctionExpressionContext::function() {
  return getRuleContext<XenonParser::FunctionContext>(0);
}

XenonParser::FunctionExpressionContext::FunctionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::FunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryMultiplicativeOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::BinaryMultiplicativeOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::BinaryMultiplicativeOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::MultiplicativeOperatorStatementContext* XenonParser::BinaryMultiplicativeOperationContext::multiplicativeOperatorStatement() {
  return getRuleContext<XenonParser::MultiplicativeOperatorStatementContext>(0);
}

XenonParser::BinaryMultiplicativeOperationContext::BinaryMultiplicativeOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BinaryMultiplicativeOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBinaryMultiplicativeOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyExpressionContext ------------------------------------------------------------------

XenonParser::ExpressionContext* XenonParser::PropertyExpressionContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::NameContext* XenonParser::PropertyExpressionContext::name() {
  return getRuleContext<XenonParser::NameContext>(0);
}

tree::TerminalNode* XenonParser::PropertyExpressionContext::Dot() {
  return getToken(XenonParser::Dot, 0);
}

tree::TerminalNode* XenonParser::PropertyExpressionContext::Arrow() {
  return getToken(XenonParser::Arrow, 0);
}

XenonParser::PropertyExpressionContext::PropertyExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::PropertyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitPropertyExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryConditionalOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::BinaryConditionalOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::BinaryConditionalOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::ConditionalOperatorStatementContext* XenonParser::BinaryConditionalOperationContext::conditionalOperatorStatement() {
  return getRuleContext<XenonParser::ConditionalOperatorStatementContext>(0);
}

XenonParser::BinaryConditionalOperationContext::BinaryConditionalOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BinaryConditionalOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBinaryConditionalOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeCastContext ------------------------------------------------------------------

XenonParser::ExpressionContext* XenonParser::TypeCastContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::TypeCastContext::As() {
  return getToken(XenonParser::As, 0);
}

XenonParser::TypeContext* XenonParser::TypeCastContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

XenonParser::TypeCastContext::TypeCastContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::TypeCastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitTypeCast(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassInstantiationExpressionContext ------------------------------------------------------------------

XenonParser::ClassTypeNameContext* XenonParser::ClassInstantiationExpressionContext::classTypeName() {
  return getRuleContext<XenonParser::ClassTypeNameContext>(0);
}

tree::TerminalNode* XenonParser::ClassInstantiationExpressionContext::OpeningBrace() {
  return getToken(XenonParser::OpeningBrace, 0);
}

tree::TerminalNode* XenonParser::ClassInstantiationExpressionContext::ClosingBrace() {
  return getToken(XenonParser::ClosingBrace, 0);
}

XenonParser::ClassInstantiationPropertiesContext* XenonParser::ClassInstantiationExpressionContext::classInstantiationProperties() {
  return getRuleContext<XenonParser::ClassInstantiationPropertiesContext>(0);
}

XenonParser::ClassInstantiationExpressionContext::ClassInstantiationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::ClassInstantiationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryComparisonOperationContext ------------------------------------------------------------------

std::vector<XenonParser::ExpressionContext *> XenonParser::BinaryComparisonOperationContext::expression() {
  return getRuleContexts<XenonParser::ExpressionContext>();
}

XenonParser::ExpressionContext* XenonParser::BinaryComparisonOperationContext::expression(size_t i) {
  return getRuleContext<XenonParser::ExpressionContext>(i);
}

XenonParser::ComparisonOperatorStatementContext* XenonParser::BinaryComparisonOperationContext::comparisonOperatorStatement() {
  return getRuleContext<XenonParser::ComparisonOperatorStatementContext>(0);
}

XenonParser::BinaryComparisonOperationContext::BinaryComparisonOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::BinaryComparisonOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBinaryComparisonOperation(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ExpressionContext* XenonParser::expression() {
   return expression(0);
}

XenonParser::ExpressionContext* XenonParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  XenonParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  XenonParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, XenonParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(201);
      match(XenonParser::OpeningParen);
      setState(202);
      expression(0);
      setState(203);
      match(XenonParser::ClosingParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SizeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      match(XenonParser::SizeOf);
      setState(208);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(206);
        expression(0);
        break;
      }

      case 2: {
        setState(207);
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
      setState(210);
      classTypeName();
      setState(211);
      match(XenonParser::OpeningBrace);
      setState(213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == XenonParser::VariableName) {
        setState(212);
        classInstantiationProperties();
      }
      setState(215);
      match(XenonParser::ClosingBrace);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UnaryNegativeExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      match(XenonParser::Sub);
      setState(218);
      expression(18);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryPositiveExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      match(XenonParser::Add);
      setState(220);
      expression(17);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UnaryNegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(221);
      match(XenonParser::Not);
      setState(222);
      expression(16);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BitwiseNegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(223);
      match(XenonParser::Neg);
      setState(224);
      expression(15);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PointerExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(225);
      match(XenonParser::BitwiseAnd);
      setState(226);
      expression(14);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<DereferenceExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(227);
      match(XenonParser::Mul);
      setState(228);
      expression(13);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<FunctionExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(229);
      function();
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<NameExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(230);
      scopedName();
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<LiteralDeclarationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(231);
      literal();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(283);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(281);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(234);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(235);
          multiplicativeOperatorStatement();
          setState(236);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(239);
          operatorStatement();
          setState(240);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryBitwiseOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(243);
          bitwiseOperatorStatement();
          setState(244);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryShiftOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(246);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(247);
          shiftOperator();
          setState(248);
          expression(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryComparisonOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(250);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(251);
          comparisonOperatorStatement();
          setState(252);
          expression(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryConditionalOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(254);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(255);
          conditionalOperatorStatement();
          setState(256);
          expression(3);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(258);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(259);
          equalityOperatorStatement();
          setState(260);
          expression(2);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<PropertyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(262);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(263);
          _la = _input->LA(1);
          if (!(_la == XenonParser::Dot

          || _la == XenonParser::Arrow)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(264);
          name();
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(265);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(266);
          match(XenonParser::OpeningParen);
          setState(268);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << XenonParser::Add)
            | (1ULL << XenonParser::Sub)
            | (1ULL << XenonParser::Mul)
            | (1ULL << XenonParser::Not)
            | (1ULL << XenonParser::Neg)
            | (1ULL << XenonParser::BitwiseAnd)
            | (1ULL << XenonParser::OpeningParen)
            | (1ULL << XenonParser::SizeOf)
            | (1ULL << XenonParser::Function)
            | (1ULL << XenonParser::Extern))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 64)) & ((1ULL << (XenonParser::Attribute - 64))
            | (1ULL << (XenonParser::True - 64))
            | (1ULL << (XenonParser::False - 64))
            | (1ULL << (XenonParser::NullLiteral - 64))
            | (1ULL << (XenonParser::VariableName - 64))
            | (1ULL << (XenonParser::StringLiteral - 64))
            | (1ULL << (XenonParser::CharLiteral - 64))
            | (1ULL << (XenonParser::DecimalLiteral - 64))
            | (1ULL << (XenonParser::FloatingLiteral - 64))
            | (1ULL << (XenonParser::ZeroLiteral - 64))
            | (1ULL << (XenonParser::HexadecimalLiteral - 64))
            | (1ULL << (XenonParser::BinaryLiteral - 64)))) != 0)) {
            setState(267);
            functionCallArguments();
          }
          setState(270);
          match(XenonParser::ClosingParen);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<IndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(271);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(272);
          match(XenonParser::OpeningBracket);
          setState(273);
          expression(0);
          setState(274);
          match(XenonParser::ClosingBracket);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<SuffixUnaryNegationExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(276);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(277);
          match(XenonParser::Not);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<TypeCastContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(278);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(279);
          match(XenonParser::As);
          setState(280);
          type(0);
          break;
        }

        } 
      }
      setState(285);
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

XenonParser::ScopedNameContext::ScopedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::NameContext* XenonParser::ScopedNameContext::name() {
  return getRuleContext<XenonParser::NameContext>(0);
}

XenonParser::ScopeResolverContext* XenonParser::ScopedNameContext::scopeResolver() {
  return getRuleContext<XenonParser::ScopeResolverContext>(0);
}


size_t XenonParser::ScopedNameContext::getRuleIndex() const {
  return XenonParser::RuleScopedName;
}


antlrcpp::Any XenonParser::ScopedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitScopedName(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ScopedNameContext* XenonParser::scopedName() {
  ScopedNameContext *_localctx = _tracker.createInstance<ScopedNameContext>(_ctx, getState());
  enterRule(_localctx, 8, XenonParser::RuleScopedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(287);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(286);
      scopeResolver();
      break;
    }

    }
    setState(289);
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

XenonParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::NameContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

std::vector<XenonParser::ClassTypeNameGenericsContext *> XenonParser::NameContext::classTypeNameGenerics() {
  return getRuleContexts<XenonParser::ClassTypeNameGenericsContext>();
}

XenonParser::ClassTypeNameGenericsContext* XenonParser::NameContext::classTypeNameGenerics(size_t i) {
  return getRuleContext<XenonParser::ClassTypeNameGenericsContext>(i);
}


size_t XenonParser::NameContext::getRuleIndex() const {
  return XenonParser::RuleName;
}


antlrcpp::Any XenonParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::NameContext* XenonParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 10, XenonParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(XenonParser::VariableName);
    setState(295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(292);
        classTypeNameGenerics(); 
      }
      setState(297);
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

XenonParser::ScopedNameNoGenericContext::ScopedNameNoGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::NameNoGenericContext* XenonParser::ScopedNameNoGenericContext::nameNoGeneric() {
  return getRuleContext<XenonParser::NameNoGenericContext>(0);
}

XenonParser::ScopeResolverContext* XenonParser::ScopedNameNoGenericContext::scopeResolver() {
  return getRuleContext<XenonParser::ScopeResolverContext>(0);
}


size_t XenonParser::ScopedNameNoGenericContext::getRuleIndex() const {
  return XenonParser::RuleScopedNameNoGeneric;
}


antlrcpp::Any XenonParser::ScopedNameNoGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitScopedNameNoGeneric(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ScopedNameNoGenericContext* XenonParser::scopedNameNoGeneric() {
  ScopedNameNoGenericContext *_localctx = _tracker.createInstance<ScopedNameNoGenericContext>(_ctx, getState());
  enterRule(_localctx, 12, XenonParser::RuleScopedNameNoGeneric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(298);
      scopeResolver();
      break;
    }

    }
    setState(301);
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

XenonParser::NameNoGenericContext::NameNoGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::NameNoGenericContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}


size_t XenonParser::NameNoGenericContext::getRuleIndex() const {
  return XenonParser::RuleNameNoGeneric;
}


antlrcpp::Any XenonParser::NameNoGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitNameNoGeneric(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::NameNoGenericContext* XenonParser::nameNoGeneric() {
  NameNoGenericContext *_localctx = _tracker.createInstance<NameNoGenericContext>(_ctx, getState());
  enterRule(_localctx, 14, XenonParser::RuleNameNoGeneric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    match(XenonParser::VariableName);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeResolverContext ------------------------------------------------------------------

XenonParser::ScopeResolverContext::ScopeResolverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::NameContext* XenonParser::ScopeResolverContext::name() {
  return getRuleContext<XenonParser::NameContext>(0);
}

tree::TerminalNode* XenonParser::ScopeResolverContext::ScopeResolver() {
  return getToken(XenonParser::ScopeResolver, 0);
}

XenonParser::ScopeResolverContext* XenonParser::ScopeResolverContext::scopeResolver() {
  return getRuleContext<XenonParser::ScopeResolverContext>(0);
}


size_t XenonParser::ScopeResolverContext::getRuleIndex() const {
  return XenonParser::RuleScopeResolver;
}


antlrcpp::Any XenonParser::ScopeResolverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitScopeResolver(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ScopeResolverContext* XenonParser::scopeResolver() {
  ScopeResolverContext *_localctx = _tracker.createInstance<ScopeResolverContext>(_ctx, getState());
  enterRule(_localctx, 16, XenonParser::RuleScopeResolver);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    name();
    setState(306);
    match(XenonParser::ScopeResolver);
    setState(308);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(307);
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

XenonParser::MultiplicativeOperatorStatementContext::MultiplicativeOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::MultiplicativeOperatorStatementContext::Mul() {
  return getToken(XenonParser::Mul, 0);
}

tree::TerminalNode* XenonParser::MultiplicativeOperatorStatementContext::Div() {
  return getToken(XenonParser::Div, 0);
}

tree::TerminalNode* XenonParser::MultiplicativeOperatorStatementContext::Mod() {
  return getToken(XenonParser::Mod, 0);
}


size_t XenonParser::MultiplicativeOperatorStatementContext::getRuleIndex() const {
  return XenonParser::RuleMultiplicativeOperatorStatement;
}


antlrcpp::Any XenonParser::MultiplicativeOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::MultiplicativeOperatorStatementContext* XenonParser::multiplicativeOperatorStatement() {
  MultiplicativeOperatorStatementContext *_localctx = _tracker.createInstance<MultiplicativeOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, XenonParser::RuleMultiplicativeOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XenonParser::Mul)
      | (1ULL << XenonParser::Div)
      | (1ULL << XenonParser::Mod))) != 0))) {
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

XenonParser::OperatorStatementContext::OperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::OperatorStatementContext::Add() {
  return getToken(XenonParser::Add, 0);
}

tree::TerminalNode* XenonParser::OperatorStatementContext::Sub() {
  return getToken(XenonParser::Sub, 0);
}


size_t XenonParser::OperatorStatementContext::getRuleIndex() const {
  return XenonParser::RuleOperatorStatement;
}


antlrcpp::Any XenonParser::OperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::OperatorStatementContext* XenonParser::operatorStatement() {
  OperatorStatementContext *_localctx = _tracker.createInstance<OperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, XenonParser::RuleOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    _la = _input->LA(1);
    if (!(_la == XenonParser::Add

    || _la == XenonParser::Sub)) {
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

XenonParser::BitwiseOperatorStatementContext::BitwiseOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::BitwiseOperatorStatementContext::Xor() {
  return getToken(XenonParser::Xor, 0);
}

tree::TerminalNode* XenonParser::BitwiseOperatorStatementContext::BitwiseOr() {
  return getToken(XenonParser::BitwiseOr, 0);
}

tree::TerminalNode* XenonParser::BitwiseOperatorStatementContext::BitwiseAnd() {
  return getToken(XenonParser::BitwiseAnd, 0);
}


size_t XenonParser::BitwiseOperatorStatementContext::getRuleIndex() const {
  return XenonParser::RuleBitwiseOperatorStatement;
}


antlrcpp::Any XenonParser::BitwiseOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::BitwiseOperatorStatementContext* XenonParser::bitwiseOperatorStatement() {
  BitwiseOperatorStatementContext *_localctx = _tracker.createInstance<BitwiseOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, XenonParser::RuleBitwiseOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XenonParser::Xor)
      | (1ULL << XenonParser::BitwiseOr)
      | (1ULL << XenonParser::BitwiseAnd))) != 0))) {
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

XenonParser::ShiftOperatorContext::ShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::ArithmeticRightShiftOperatorContext* XenonParser::ShiftOperatorContext::arithmeticRightShiftOperator() {
  return getRuleContext<XenonParser::ArithmeticRightShiftOperatorContext>(0);
}

XenonParser::LogicalRightShiftOperatorContext* XenonParser::ShiftOperatorContext::logicalRightShiftOperator() {
  return getRuleContext<XenonParser::LogicalRightShiftOperatorContext>(0);
}

XenonParser::LeftShiftOperatorContext* XenonParser::ShiftOperatorContext::leftShiftOperator() {
  return getRuleContext<XenonParser::LeftShiftOperatorContext>(0);
}


size_t XenonParser::ShiftOperatorContext::getRuleIndex() const {
  return XenonParser::RuleShiftOperator;
}


antlrcpp::Any XenonParser::ShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ShiftOperatorContext* XenonParser::shiftOperator() {
  ShiftOperatorContext *_localctx = _tracker.createInstance<ShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 24, XenonParser::RuleShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(319);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(316);
      arithmeticRightShiftOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(317);
      logicalRightShiftOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(318);
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

XenonParser::ArithmeticRightShiftOperatorContext::ArithmeticRightShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::ArithmeticRightShiftOperatorContext::GreaterThan() {
  return getTokens(XenonParser::GreaterThan);
}

tree::TerminalNode* XenonParser::ArithmeticRightShiftOperatorContext::GreaterThan(size_t i) {
  return getToken(XenonParser::GreaterThan, i);
}


size_t XenonParser::ArithmeticRightShiftOperatorContext::getRuleIndex() const {
  return XenonParser::RuleArithmeticRightShiftOperator;
}


antlrcpp::Any XenonParser::ArithmeticRightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ArithmeticRightShiftOperatorContext* XenonParser::arithmeticRightShiftOperator() {
  ArithmeticRightShiftOperatorContext *_localctx = _tracker.createInstance<ArithmeticRightShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 26, XenonParser::RuleArithmeticRightShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(XenonParser::GreaterThan);
    setState(322);
    match(XenonParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalRightShiftOperatorContext ------------------------------------------------------------------

XenonParser::LogicalRightShiftOperatorContext::LogicalRightShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::LogicalRightShiftOperatorContext::GreaterThan() {
  return getTokens(XenonParser::GreaterThan);
}

tree::TerminalNode* XenonParser::LogicalRightShiftOperatorContext::GreaterThan(size_t i) {
  return getToken(XenonParser::GreaterThan, i);
}


size_t XenonParser::LogicalRightShiftOperatorContext::getRuleIndex() const {
  return XenonParser::RuleLogicalRightShiftOperator;
}


antlrcpp::Any XenonParser::LogicalRightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitLogicalRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::LogicalRightShiftOperatorContext* XenonParser::logicalRightShiftOperator() {
  LogicalRightShiftOperatorContext *_localctx = _tracker.createInstance<LogicalRightShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, XenonParser::RuleLogicalRightShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(324);
    match(XenonParser::GreaterThan);
    setState(325);
    match(XenonParser::GreaterThan);
    setState(326);
    match(XenonParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftShiftOperatorContext ------------------------------------------------------------------

XenonParser::LeftShiftOperatorContext::LeftShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::LeftShiftOperatorContext::LessThan() {
  return getTokens(XenonParser::LessThan);
}

tree::TerminalNode* XenonParser::LeftShiftOperatorContext::LessThan(size_t i) {
  return getToken(XenonParser::LessThan, i);
}


size_t XenonParser::LeftShiftOperatorContext::getRuleIndex() const {
  return XenonParser::RuleLeftShiftOperator;
}


antlrcpp::Any XenonParser::LeftShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitLeftShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::LeftShiftOperatorContext* XenonParser::leftShiftOperator() {
  LeftShiftOperatorContext *_localctx = _tracker.createInstance<LeftShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 30, XenonParser::RuleLeftShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(XenonParser::LessThan);
    setState(329);
    match(XenonParser::LessThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftEqualOperatorContext ------------------------------------------------------------------

XenonParser::ShiftEqualOperatorContext::ShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::ArithmeticRightShiftEqualOperatorContext* XenonParser::ShiftEqualOperatorContext::arithmeticRightShiftEqualOperator() {
  return getRuleContext<XenonParser::ArithmeticRightShiftEqualOperatorContext>(0);
}

XenonParser::LogicalRightShiftEqualOperatorContext* XenonParser::ShiftEqualOperatorContext::logicalRightShiftEqualOperator() {
  return getRuleContext<XenonParser::LogicalRightShiftEqualOperatorContext>(0);
}

XenonParser::LeftShiftEqualOperatorContext* XenonParser::ShiftEqualOperatorContext::leftShiftEqualOperator() {
  return getRuleContext<XenonParser::LeftShiftEqualOperatorContext>(0);
}


size_t XenonParser::ShiftEqualOperatorContext::getRuleIndex() const {
  return XenonParser::RuleShiftEqualOperator;
}


antlrcpp::Any XenonParser::ShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ShiftEqualOperatorContext* XenonParser::shiftEqualOperator() {
  ShiftEqualOperatorContext *_localctx = _tracker.createInstance<ShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 32, XenonParser::RuleShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(331);
      arithmeticRightShiftEqualOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(332);
      logicalRightShiftEqualOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(333);
      leftShiftEqualOperator();
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

//----------------- ArithmeticRightShiftEqualOperatorContext ------------------------------------------------------------------

XenonParser::ArithmeticRightShiftEqualOperatorContext::ArithmeticRightShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::ArithmeticRightShiftEqualOperatorContext::GreaterThan() {
  return getTokens(XenonParser::GreaterThan);
}

tree::TerminalNode* XenonParser::ArithmeticRightShiftEqualOperatorContext::GreaterThan(size_t i) {
  return getToken(XenonParser::GreaterThan, i);
}

tree::TerminalNode* XenonParser::ArithmeticRightShiftEqualOperatorContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}


size_t XenonParser::ArithmeticRightShiftEqualOperatorContext::getRuleIndex() const {
  return XenonParser::RuleArithmeticRightShiftEqualOperator;
}


antlrcpp::Any XenonParser::ArithmeticRightShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticRightShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ArithmeticRightShiftEqualOperatorContext* XenonParser::arithmeticRightShiftEqualOperator() {
  ArithmeticRightShiftEqualOperatorContext *_localctx = _tracker.createInstance<ArithmeticRightShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 34, XenonParser::RuleArithmeticRightShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(XenonParser::GreaterThan);
    setState(337);
    match(XenonParser::GreaterThan);
    setState(338);
    match(XenonParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalRightShiftEqualOperatorContext ------------------------------------------------------------------

XenonParser::LogicalRightShiftEqualOperatorContext::LogicalRightShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::LogicalRightShiftEqualOperatorContext::GreaterThan() {
  return getTokens(XenonParser::GreaterThan);
}

tree::TerminalNode* XenonParser::LogicalRightShiftEqualOperatorContext::GreaterThan(size_t i) {
  return getToken(XenonParser::GreaterThan, i);
}

tree::TerminalNode* XenonParser::LogicalRightShiftEqualOperatorContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}


size_t XenonParser::LogicalRightShiftEqualOperatorContext::getRuleIndex() const {
  return XenonParser::RuleLogicalRightShiftEqualOperator;
}


antlrcpp::Any XenonParser::LogicalRightShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitLogicalRightShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::LogicalRightShiftEqualOperatorContext* XenonParser::logicalRightShiftEqualOperator() {
  LogicalRightShiftEqualOperatorContext *_localctx = _tracker.createInstance<LogicalRightShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 36, XenonParser::RuleLogicalRightShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(XenonParser::GreaterThan);
    setState(341);
    match(XenonParser::GreaterThan);
    setState(342);
    match(XenonParser::GreaterThan);
    setState(343);
    match(XenonParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftShiftEqualOperatorContext ------------------------------------------------------------------

XenonParser::LeftShiftEqualOperatorContext::LeftShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::LeftShiftEqualOperatorContext::LessThan() {
  return getTokens(XenonParser::LessThan);
}

tree::TerminalNode* XenonParser::LeftShiftEqualOperatorContext::LessThan(size_t i) {
  return getToken(XenonParser::LessThan, i);
}

tree::TerminalNode* XenonParser::LeftShiftEqualOperatorContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}


size_t XenonParser::LeftShiftEqualOperatorContext::getRuleIndex() const {
  return XenonParser::RuleLeftShiftEqualOperator;
}


antlrcpp::Any XenonParser::LeftShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitLeftShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::LeftShiftEqualOperatorContext* XenonParser::leftShiftEqualOperator() {
  LeftShiftEqualOperatorContext *_localctx = _tracker.createInstance<LeftShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 38, XenonParser::RuleLeftShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    match(XenonParser::LessThan);
    setState(346);
    match(XenonParser::LessThan);
    setState(347);
    match(XenonParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GreaterThanOrEqualToOperatorContext ------------------------------------------------------------------

XenonParser::GreaterThanOrEqualToOperatorContext::GreaterThanOrEqualToOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::GreaterThanOrEqualToOperatorContext::GreaterThan() {
  return getToken(XenonParser::GreaterThan, 0);
}

tree::TerminalNode* XenonParser::GreaterThanOrEqualToOperatorContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}


size_t XenonParser::GreaterThanOrEqualToOperatorContext::getRuleIndex() const {
  return XenonParser::RuleGreaterThanOrEqualToOperator;
}


antlrcpp::Any XenonParser::GreaterThanOrEqualToOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitGreaterThanOrEqualToOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::GreaterThanOrEqualToOperatorContext* XenonParser::greaterThanOrEqualToOperator() {
  GreaterThanOrEqualToOperatorContext *_localctx = _tracker.createInstance<GreaterThanOrEqualToOperatorContext>(_ctx, getState());
  enterRule(_localctx, 40, XenonParser::RuleGreaterThanOrEqualToOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    match(XenonParser::GreaterThan);
    setState(350);
    match(XenonParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOperatorStatementContext ------------------------------------------------------------------

XenonParser::ConditionalOperatorStatementContext::ConditionalOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ConditionalOperatorStatementContext::ConditionalOr() {
  return getToken(XenonParser::ConditionalOr, 0);
}

tree::TerminalNode* XenonParser::ConditionalOperatorStatementContext::ConditionalAnd() {
  return getToken(XenonParser::ConditionalAnd, 0);
}


size_t XenonParser::ConditionalOperatorStatementContext::getRuleIndex() const {
  return XenonParser::RuleConditionalOperatorStatement;
}


antlrcpp::Any XenonParser::ConditionalOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitConditionalOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ConditionalOperatorStatementContext* XenonParser::conditionalOperatorStatement() {
  ConditionalOperatorStatementContext *_localctx = _tracker.createInstance<ConditionalOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, XenonParser::RuleConditionalOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    _la = _input->LA(1);
    if (!(_la == XenonParser::ConditionalOr

    || _la == XenonParser::ConditionalAnd)) {
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

XenonParser::ComparisonOperatorStatementContext::ComparisonOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ComparisonOperatorStatementContext::EqualTo() {
  return getToken(XenonParser::EqualTo, 0);
}

tree::TerminalNode* XenonParser::ComparisonOperatorStatementContext::NotEqualTo() {
  return getToken(XenonParser::NotEqualTo, 0);
}

tree::TerminalNode* XenonParser::ComparisonOperatorStatementContext::LessThanOrEqualTo() {
  return getToken(XenonParser::LessThanOrEqualTo, 0);
}

XenonParser::GreaterThanOrEqualToOperatorContext* XenonParser::ComparisonOperatorStatementContext::greaterThanOrEqualToOperator() {
  return getRuleContext<XenonParser::GreaterThanOrEqualToOperatorContext>(0);
}

tree::TerminalNode* XenonParser::ComparisonOperatorStatementContext::LessThan() {
  return getToken(XenonParser::LessThan, 0);
}

tree::TerminalNode* XenonParser::ComparisonOperatorStatementContext::GreaterThan() {
  return getToken(XenonParser::GreaterThan, 0);
}


size_t XenonParser::ComparisonOperatorStatementContext::getRuleIndex() const {
  return XenonParser::RuleComparisonOperatorStatement;
}


antlrcpp::Any XenonParser::ComparisonOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ComparisonOperatorStatementContext* XenonParser::comparisonOperatorStatement() {
  ComparisonOperatorStatementContext *_localctx = _tracker.createInstance<ComparisonOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, XenonParser::RuleComparisonOperatorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(354);
      match(XenonParser::EqualTo);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(355);
      match(XenonParser::NotEqualTo);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(356);
      match(XenonParser::LessThanOrEqualTo);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(357);
      greaterThanOrEqualToOperator();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(358);
      match(XenonParser::LessThan);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(359);
      match(XenonParser::GreaterThan);
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

//----------------- EqualityOperatorStatementContext ------------------------------------------------------------------

XenonParser::EqualityOperatorStatementContext::EqualityOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::AddEqual() {
  return getToken(XenonParser::AddEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::SubEqual() {
  return getToken(XenonParser::SubEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::MulEqual() {
  return getToken(XenonParser::MulEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::DivEqual() {
  return getToken(XenonParser::DivEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::ModEqual() {
  return getToken(XenonParser::ModEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::XorEqual() {
  return getToken(XenonParser::XorEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::OrEqual() {
  return getToken(XenonParser::OrEqual, 0);
}

tree::TerminalNode* XenonParser::EqualityOperatorStatementContext::AndEqual() {
  return getToken(XenonParser::AndEqual, 0);
}

XenonParser::ShiftEqualOperatorContext* XenonParser::EqualityOperatorStatementContext::shiftEqualOperator() {
  return getRuleContext<XenonParser::ShiftEqualOperatorContext>(0);
}


size_t XenonParser::EqualityOperatorStatementContext::getRuleIndex() const {
  return XenonParser::RuleEqualityOperatorStatement;
}


antlrcpp::Any XenonParser::EqualityOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::EqualityOperatorStatementContext* XenonParser::equalityOperatorStatement() {
  EqualityOperatorStatementContext *_localctx = _tracker.createInstance<EqualityOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, XenonParser::RuleEqualityOperatorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(372);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::Equal: {
        enterOuterAlt(_localctx, 1);
        setState(362);
        match(XenonParser::Equal);
        break;
      }

      case XenonParser::AddEqual: {
        enterOuterAlt(_localctx, 2);
        setState(363);
        match(XenonParser::AddEqual);
        break;
      }

      case XenonParser::SubEqual: {
        enterOuterAlt(_localctx, 3);
        setState(364);
        match(XenonParser::SubEqual);
        break;
      }

      case XenonParser::MulEqual: {
        enterOuterAlt(_localctx, 4);
        setState(365);
        match(XenonParser::MulEqual);
        break;
      }

      case XenonParser::DivEqual: {
        enterOuterAlt(_localctx, 5);
        setState(366);
        match(XenonParser::DivEqual);
        break;
      }

      case XenonParser::ModEqual: {
        enterOuterAlt(_localctx, 6);
        setState(367);
        match(XenonParser::ModEqual);
        break;
      }

      case XenonParser::XorEqual: {
        enterOuterAlt(_localctx, 7);
        setState(368);
        match(XenonParser::XorEqual);
        break;
      }

      case XenonParser::OrEqual: {
        enterOuterAlt(_localctx, 8);
        setState(369);
        match(XenonParser::OrEqual);
        break;
      }

      case XenonParser::AndEqual: {
        enterOuterAlt(_localctx, 9);
        setState(370);
        match(XenonParser::AndEqual);
        break;
      }

      case XenonParser::LessThan:
      case XenonParser::GreaterThan: {
        enterOuterAlt(_localctx, 10);
        setState(371);
        shiftEqualOperator();
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

//----------------- LiteralContext ------------------------------------------------------------------

XenonParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::BooleanLiteralContext* XenonParser::LiteralContext::booleanLiteral() {
  return getRuleContext<XenonParser::BooleanLiteralContext>(0);
}

XenonParser::IntegerLiteralContext* XenonParser::LiteralContext::integerLiteral() {
  return getRuleContext<XenonParser::IntegerLiteralContext>(0);
}

XenonParser::FloatingLiteralContext* XenonParser::LiteralContext::floatingLiteral() {
  return getRuleContext<XenonParser::FloatingLiteralContext>(0);
}

XenonParser::StringLiteralContext* XenonParser::LiteralContext::stringLiteral() {
  return getRuleContext<XenonParser::StringLiteralContext>(0);
}

tree::TerminalNode* XenonParser::LiteralContext::CharLiteral() {
  return getToken(XenonParser::CharLiteral, 0);
}

tree::TerminalNode* XenonParser::LiteralContext::NullLiteral() {
  return getToken(XenonParser::NullLiteral, 0);
}


size_t XenonParser::LiteralContext::getRuleIndex() const {
  return XenonParser::RuleLiteral;
}


antlrcpp::Any XenonParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::LiteralContext* XenonParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, XenonParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(380);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::True:
      case XenonParser::False: {
        enterOuterAlt(_localctx, 1);
        setState(374);
        booleanLiteral();
        break;
      }

      case XenonParser::DecimalLiteral:
      case XenonParser::ZeroLiteral:
      case XenonParser::HexadecimalLiteral:
      case XenonParser::BinaryLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(375);
        integerLiteral();
        break;
      }

      case XenonParser::FloatingLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(376);
        floatingLiteral();
        break;
      }

      case XenonParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(377);
        stringLiteral();
        break;
      }

      case XenonParser::CharLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(378);
        match(XenonParser::CharLiteral);
        break;
      }

      case XenonParser::NullLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(379);
        match(XenonParser::NullLiteral);
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

XenonParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::BooleanLiteralContext::True() {
  return getToken(XenonParser::True, 0);
}

tree::TerminalNode* XenonParser::BooleanLiteralContext::False() {
  return getToken(XenonParser::False, 0);
}


size_t XenonParser::BooleanLiteralContext::getRuleIndex() const {
  return XenonParser::RuleBooleanLiteral;
}


antlrcpp::Any XenonParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::BooleanLiteralContext* XenonParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 50, XenonParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    _la = _input->LA(1);
    if (!(_la == XenonParser::True

    || _la == XenonParser::False)) {
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

XenonParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::IntegerLiteralContext::DecimalLiteral() {
  return getToken(XenonParser::DecimalLiteral, 0);
}

tree::TerminalNode* XenonParser::IntegerLiteralContext::ZeroLiteral() {
  return getToken(XenonParser::ZeroLiteral, 0);
}

tree::TerminalNode* XenonParser::IntegerLiteralContext::HexadecimalLiteral() {
  return getToken(XenonParser::HexadecimalLiteral, 0);
}

tree::TerminalNode* XenonParser::IntegerLiteralContext::BinaryLiteral() {
  return getToken(XenonParser::BinaryLiteral, 0);
}


size_t XenonParser::IntegerLiteralContext::getRuleIndex() const {
  return XenonParser::RuleIntegerLiteral;
}


antlrcpp::Any XenonParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::IntegerLiteralContext* XenonParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 52, XenonParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    _la = _input->LA(1);
    if (!(((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (XenonParser::DecimalLiteral - 74))
      | (1ULL << (XenonParser::ZeroLiteral - 74))
      | (1ULL << (XenonParser::HexadecimalLiteral - 74))
      | (1ULL << (XenonParser::BinaryLiteral - 74)))) != 0))) {
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

XenonParser::FloatingLiteralContext::FloatingLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::FloatingLiteralContext::FloatingLiteral() {
  return getToken(XenonParser::FloatingLiteral, 0);
}


size_t XenonParser::FloatingLiteralContext::getRuleIndex() const {
  return XenonParser::RuleFloatingLiteral;
}


antlrcpp::Any XenonParser::FloatingLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFloatingLiteral(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FloatingLiteralContext* XenonParser::floatingLiteral() {
  FloatingLiteralContext *_localctx = _tracker.createInstance<FloatingLiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, XenonParser::RuleFloatingLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(XenonParser::FloatingLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

XenonParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> XenonParser::StringLiteralContext::StringLiteral() {
  return getTokens(XenonParser::StringLiteral);
}

tree::TerminalNode* XenonParser::StringLiteralContext::StringLiteral(size_t i) {
  return getToken(XenonParser::StringLiteral, i);
}


size_t XenonParser::StringLiteralContext::getRuleIndex() const {
  return XenonParser::RuleStringLiteral;
}


antlrcpp::Any XenonParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::StringLiteralContext* XenonParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 56, XenonParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(389); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(388);
              match(XenonParser::StringLiteral);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(391); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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

XenonParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::VariableDeclarationContext::VariableDeclarator() {
  return getToken(XenonParser::VariableDeclarator, 0);
}

tree::TerminalNode* XenonParser::VariableDeclarationContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::VariableDeclarationContext::Colon() {
  return getToken(XenonParser::Colon, 0);
}

XenonParser::TypeContext* XenonParser::VariableDeclarationContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::VariableDeclarationContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

XenonParser::ExpressionContext* XenonParser::VariableDeclarationContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}


size_t XenonParser::VariableDeclarationContext::getRuleIndex() const {
  return XenonParser::RuleVariableDeclaration;
}


antlrcpp::Any XenonParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::VariableDeclarationContext* XenonParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 58, XenonParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(XenonParser::VariableDeclarator);
    setState(394);
    match(XenonParser::VariableName);
    setState(403);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::Colon: {
        setState(395);
        match(XenonParser::Colon);
        setState(396);
        type(0);
        setState(399);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == XenonParser::Equal) {
          setState(397);
          match(XenonParser::Equal);
          setState(398);
          expression(0);
        }
        break;
      }

      case XenonParser::Equal: {
        setState(401);
        match(XenonParser::Equal);
        setState(402);
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

XenonParser::FunctionCallArgumentsContext::FunctionCallArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XenonParser::FunctionCallArgumentContext *> XenonParser::FunctionCallArgumentsContext::functionCallArgument() {
  return getRuleContexts<XenonParser::FunctionCallArgumentContext>();
}

XenonParser::FunctionCallArgumentContext* XenonParser::FunctionCallArgumentsContext::functionCallArgument(size_t i) {
  return getRuleContext<XenonParser::FunctionCallArgumentContext>(i);
}

std::vector<tree::TerminalNode *> XenonParser::FunctionCallArgumentsContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::FunctionCallArgumentsContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::FunctionCallArgumentsContext::getRuleIndex() const {
  return XenonParser::RuleFunctionCallArguments;
}


antlrcpp::Any XenonParser::FunctionCallArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArguments(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionCallArgumentsContext* XenonParser::functionCallArguments() {
  FunctionCallArgumentsContext *_localctx = _tracker.createInstance<FunctionCallArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 60, XenonParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    functionCallArgument();
    setState(410);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XenonParser::Comma) {
      setState(406);
      match(XenonParser::Comma);
      setState(407);
      functionCallArgument();
      setState(412);
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

XenonParser::FunctionCallArgumentContext::FunctionCallArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::ExpressionContext* XenonParser::FunctionCallArgumentContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}


size_t XenonParser::FunctionCallArgumentContext::getRuleIndex() const {
  return XenonParser::RuleFunctionCallArgument;
}


antlrcpp::Any XenonParser::FunctionCallArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArgument(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionCallArgumentContext* XenonParser::functionCallArgument() {
  FunctionCallArgumentContext *_localctx = _tracker.createInstance<FunctionCallArgumentContext>(_ctx, getState());
  enterRule(_localctx, 62, XenonParser::RuleFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
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

XenonParser::OverloadableOperatorContext::OverloadableOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Add() {
  return getToken(XenonParser::Add, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Sub() {
  return getToken(XenonParser::Sub, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Mul() {
  return getToken(XenonParser::Mul, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Div() {
  return getToken(XenonParser::Div, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Mod() {
  return getToken(XenonParser::Mod, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Not() {
  return getToken(XenonParser::Not, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Xor() {
  return getToken(XenonParser::Xor, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::BitwiseOr() {
  return getToken(XenonParser::BitwiseOr, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::BitwiseAnd() {
  return getToken(XenonParser::BitwiseAnd, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::Neg() {
  return getToken(XenonParser::Neg, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::AddEqual() {
  return getToken(XenonParser::AddEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::SubEqual() {
  return getToken(XenonParser::SubEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::MulEqual() {
  return getToken(XenonParser::MulEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::DivEqual() {
  return getToken(XenonParser::DivEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::ModEqual() {
  return getToken(XenonParser::ModEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::XorEqual() {
  return getToken(XenonParser::XorEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::OrEqual() {
  return getToken(XenonParser::OrEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::AndEqual() {
  return getToken(XenonParser::AndEqual, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::EqualTo() {
  return getToken(XenonParser::EqualTo, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::NotEqualTo() {
  return getToken(XenonParser::NotEqualTo, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::LessThan() {
  return getToken(XenonParser::LessThan, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::LessThanOrEqualTo() {
  return getToken(XenonParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::GreaterThan() {
  return getToken(XenonParser::GreaterThan, 0);
}

XenonParser::GreaterThanOrEqualToOperatorContext* XenonParser::OverloadableOperatorContext::greaterThanOrEqualToOperator() {
  return getRuleContext<XenonParser::GreaterThanOrEqualToOperatorContext>(0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::OpeningBracket() {
  return getToken(XenonParser::OpeningBracket, 0);
}

tree::TerminalNode* XenonParser::OverloadableOperatorContext::ClosingBracket() {
  return getToken(XenonParser::ClosingBracket, 0);
}

XenonParser::ShiftOperatorContext* XenonParser::OverloadableOperatorContext::shiftOperator() {
  return getRuleContext<XenonParser::ShiftOperatorContext>(0);
}

XenonParser::ShiftEqualOperatorContext* XenonParser::OverloadableOperatorContext::shiftEqualOperator() {
  return getRuleContext<XenonParser::ShiftEqualOperatorContext>(0);
}


size_t XenonParser::OverloadableOperatorContext::getRuleIndex() const {
  return XenonParser::RuleOverloadableOperator;
}


antlrcpp::Any XenonParser::OverloadableOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitOverloadableOperator(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::OverloadableOperatorContext* XenonParser::overloadableOperator() {
  OverloadableOperatorContext *_localctx = _tracker.createInstance<OverloadableOperatorContext>(_ctx, getState());
  enterRule(_localctx, 64, XenonParser::RuleOverloadableOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(445);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(415);
      match(XenonParser::Add);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(416);
      match(XenonParser::Sub);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(417);
      match(XenonParser::Mul);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(418);
      match(XenonParser::Div);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(419);
      match(XenonParser::Mod);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(420);
      match(XenonParser::Not);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(421);
      match(XenonParser::Add);
      setState(422);
      match(XenonParser::Not);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(423);
      match(XenonParser::Xor);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(424);
      match(XenonParser::BitwiseOr);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(425);
      match(XenonParser::BitwiseAnd);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(426);
      match(XenonParser::Neg);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(427);
      match(XenonParser::AddEqual);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(428);
      match(XenonParser::SubEqual);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(429);
      match(XenonParser::MulEqual);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(430);
      match(XenonParser::DivEqual);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(431);
      match(XenonParser::ModEqual);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(432);
      match(XenonParser::XorEqual);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(433);
      match(XenonParser::OrEqual);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(434);
      match(XenonParser::AndEqual);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(435);
      match(XenonParser::EqualTo);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(436);
      match(XenonParser::NotEqualTo);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(437);
      match(XenonParser::LessThan);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(438);
      match(XenonParser::LessThanOrEqualTo);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(439);
      match(XenonParser::GreaterThan);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(440);
      greaterThanOrEqualToOperator();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(441);
      match(XenonParser::OpeningBracket);
      setState(442);
      match(XenonParser::ClosingBracket);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(443);
      shiftOperator();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(444);
      shiftEqualOperator();
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

XenonParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::AttributesContext* XenonParser::FunctionContext::attributes() {
  return getRuleContext<XenonParser::AttributesContext>(0);
}

XenonParser::FunctionDeclarationContext* XenonParser::FunctionContext::functionDeclaration() {
  return getRuleContext<XenonParser::FunctionDeclarationContext>(0);
}

XenonParser::BodyContext* XenonParser::FunctionContext::body() {
  return getRuleContext<XenonParser::BodyContext>(0);
}

tree::TerminalNode* XenonParser::FunctionContext::InstructionsSeparator() {
  return getToken(XenonParser::InstructionsSeparator, 0);
}

tree::TerminalNode* XenonParser::FunctionContext::Extern() {
  return getToken(XenonParser::Extern, 0);
}


size_t XenonParser::FunctionContext::getRuleIndex() const {
  return XenonParser::RuleFunction;
}


antlrcpp::Any XenonParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionContext* XenonParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 66, XenonParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    attributes();
    setState(449);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Extern) {
      setState(448);
      match(XenonParser::Extern);
    }
    setState(451);
    functionDeclaration();
    setState(454);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::OpeningBrace: {
        setState(452);
        body();
        break;
      }

      case XenonParser::InstructionsSeparator: {
        setState(453);
        match(XenonParser::InstructionsSeparator);
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

XenonParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::Function() {
  return getToken(XenonParser::Function, 0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::Destructor() {
  return getToken(XenonParser::Destructor, 0);
}

XenonParser::FunctionArgumentsContext* XenonParser::FunctionDeclarationContext::functionArguments() {
  return getRuleContext<XenonParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

XenonParser::ClassGenericsContext* XenonParser::FunctionDeclarationContext::classGenerics() {
  return getRuleContext<XenonParser::ClassGenericsContext>(0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::Colon() {
  return getToken(XenonParser::Colon, 0);
}

XenonParser::TypeContext* XenonParser::FunctionDeclarationContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

XenonParser::OverloadableOperatorContext* XenonParser::FunctionDeclarationContext::overloadableOperator() {
  return getRuleContext<XenonParser::OverloadableOperatorContext>(0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::Cast() {
  return getToken(XenonParser::Cast, 0);
}

XenonParser::CastFunctionTypeContext* XenonParser::FunctionDeclarationContext::castFunctionType() {
  return getRuleContext<XenonParser::CastFunctionTypeContext>(0);
}

tree::TerminalNode* XenonParser::FunctionDeclarationContext::Comma() {
  return getToken(XenonParser::Comma, 0);
}

XenonParser::FunctionVariadicArgumentContext* XenonParser::FunctionDeclarationContext::functionVariadicArgument() {
  return getRuleContext<XenonParser::FunctionVariadicArgumentContext>(0);
}


size_t XenonParser::FunctionDeclarationContext::getRuleIndex() const {
  return XenonParser::RuleFunctionDeclaration;
}


antlrcpp::Any XenonParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionDeclarationContext* XenonParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 68, XenonParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(456);
    match(XenonParser::Function);
    setState(485);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::Add:
      case XenonParser::Sub:
      case XenonParser::Mul:
      case XenonParser::Div:
      case XenonParser::Mod:
      case XenonParser::Not:
      case XenonParser::Neg:
      case XenonParser::EqualTo:
      case XenonParser::NotEqualTo:
      case XenonParser::LessThanOrEqualTo:
      case XenonParser::LessThan:
      case XenonParser::GreaterThan:
      case XenonParser::Xor:
      case XenonParser::BitwiseOr:
      case XenonParser::BitwiseAnd:
      case XenonParser::AddEqual:
      case XenonParser::SubEqual:
      case XenonParser::MulEqual:
      case XenonParser::DivEqual:
      case XenonParser::ModEqual:
      case XenonParser::XorEqual:
      case XenonParser::OrEqual:
      case XenonParser::AndEqual:
      case XenonParser::OpeningParen:
      case XenonParser::OpeningBracket:
      case XenonParser::Cast:
      case XenonParser::VariableName: {
        setState(461);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(457);
          overloadableOperator();
          break;
        }

        case 2: {
          setState(458);
          match(XenonParser::Cast);
          setState(459);
          castFunctionType();
          break;
        }

        case 3: {
          setState(460);
          match(XenonParser::VariableName);
          break;
        }

        }
        setState(464);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == XenonParser::LessThan) {
          setState(463);
          classGenerics();
        }
        setState(466);
        match(XenonParser::OpeningParen);
        setState(475);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case XenonParser::Const:
          case XenonParser::Function:
          case XenonParser::VariableName: {
            setState(467);
            functionArguments();
            setState(470);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == XenonParser::Comma) {
              setState(468);
              match(XenonParser::Comma);
              setState(469);
              functionVariadicArgument();
            }
            break;
          }

          case XenonParser::ClosingParen:
          case XenonParser::Variadic: {
            setState(473);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == XenonParser::Variadic) {
              setState(472);
              functionVariadicArgument();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(477);
        match(XenonParser::ClosingParen);
        setState(480);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == XenonParser::Colon) {
          setState(478);
          match(XenonParser::Colon);
          setState(479);
          type(0);
        }
        break;
      }

      case XenonParser::Destructor: {
        setState(482);
        match(XenonParser::Destructor);
        setState(483);
        match(XenonParser::OpeningParen);
        setState(484);
        match(XenonParser::ClosingParen);
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

XenonParser::CastFunctionTypeContext::CastFunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::TypeContext* XenonParser::CastFunctionTypeContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}


size_t XenonParser::CastFunctionTypeContext::getRuleIndex() const {
  return XenonParser::RuleCastFunctionType;
}


antlrcpp::Any XenonParser::CastFunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitCastFunctionType(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::CastFunctionTypeContext* XenonParser::castFunctionType() {
  CastFunctionTypeContext *_localctx = _tracker.createInstance<CastFunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 70, XenonParser::RuleCastFunctionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
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

XenonParser::FunctionVariadicArgumentContext::FunctionVariadicArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::FunctionVariadicArgumentContext::Variadic() {
  return getToken(XenonParser::Variadic, 0);
}


size_t XenonParser::FunctionVariadicArgumentContext::getRuleIndex() const {
  return XenonParser::RuleFunctionVariadicArgument;
}


antlrcpp::Any XenonParser::FunctionVariadicArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionVariadicArgument(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionVariadicArgumentContext* XenonParser::functionVariadicArgument() {
  FunctionVariadicArgumentContext *_localctx = _tracker.createInstance<FunctionVariadicArgumentContext>(_ctx, getState());
  enterRule(_localctx, 72, XenonParser::RuleFunctionVariadicArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(489);
    match(XenonParser::Variadic);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentsContext ------------------------------------------------------------------

XenonParser::FunctionArgumentsContext::FunctionArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XenonParser::FunctionArgumentContext *> XenonParser::FunctionArgumentsContext::functionArgument() {
  return getRuleContexts<XenonParser::FunctionArgumentContext>();
}

XenonParser::FunctionArgumentContext* XenonParser::FunctionArgumentsContext::functionArgument(size_t i) {
  return getRuleContext<XenonParser::FunctionArgumentContext>(i);
}

std::vector<tree::TerminalNode *> XenonParser::FunctionArgumentsContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::FunctionArgumentsContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::FunctionArgumentsContext::getRuleIndex() const {
  return XenonParser::RuleFunctionArguments;
}


antlrcpp::Any XenonParser::FunctionArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArguments(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionArgumentsContext* XenonParser::functionArguments() {
  FunctionArgumentsContext *_localctx = _tracker.createInstance<FunctionArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 74, XenonParser::RuleFunctionArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(491);
    functionArgument();
    setState(496);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(492);
        match(XenonParser::Comma);
        setState(493);
        functionArgument(); 
      }
      setState(498);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
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

XenonParser::FunctionArgumentContext::FunctionArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::TypeContext* XenonParser::FunctionArgumentContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::FunctionArgumentContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::FunctionArgumentContext::Colon() {
  return getToken(XenonParser::Colon, 0);
}


size_t XenonParser::FunctionArgumentContext::getRuleIndex() const {
  return XenonParser::RuleFunctionArgument;
}


antlrcpp::Any XenonParser::FunctionArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgument(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionArgumentContext* XenonParser::functionArgument() {
  FunctionArgumentContext *_localctx = _tracker.createInstance<FunctionArgumentContext>(_ctx, getState());
  enterRule(_localctx, 76, XenonParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(499);
      match(XenonParser::VariableName);
      setState(500);
      match(XenonParser::Colon);
      break;
    }

    }
    setState(503);
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

XenonParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ReturnStatementContext::Return() {
  return getToken(XenonParser::Return, 0);
}

XenonParser::ExpressionContext* XenonParser::ReturnStatementContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}


size_t XenonParser::ReturnStatementContext::getRuleIndex() const {
  return XenonParser::RuleReturnStatement;
}


antlrcpp::Any XenonParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ReturnStatementContext* XenonParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, XenonParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(XenonParser::Return);
    setState(507);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XenonParser::Add)
      | (1ULL << XenonParser::Sub)
      | (1ULL << XenonParser::Mul)
      | (1ULL << XenonParser::Not)
      | (1ULL << XenonParser::Neg)
      | (1ULL << XenonParser::BitwiseAnd)
      | (1ULL << XenonParser::OpeningParen)
      | (1ULL << XenonParser::SizeOf)
      | (1ULL << XenonParser::Function)
      | (1ULL << XenonParser::Extern))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (XenonParser::Attribute - 64))
      | (1ULL << (XenonParser::True - 64))
      | (1ULL << (XenonParser::False - 64))
      | (1ULL << (XenonParser::NullLiteral - 64))
      | (1ULL << (XenonParser::VariableName - 64))
      | (1ULL << (XenonParser::StringLiteral - 64))
      | (1ULL << (XenonParser::CharLiteral - 64))
      | (1ULL << (XenonParser::DecimalLiteral - 64))
      | (1ULL << (XenonParser::FloatingLiteral - 64))
      | (1ULL << (XenonParser::ZeroLiteral - 64))
      | (1ULL << (XenonParser::HexadecimalLiteral - 64))
      | (1ULL << (XenonParser::BinaryLiteral - 64)))) != 0)) {
      setState(506);
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

XenonParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::IfStatementContext::If() {
  return getToken(XenonParser::If, 0);
}

XenonParser::StatementContext* XenonParser::IfStatementContext::statement() {
  return getRuleContext<XenonParser::StatementContext>(0);
}

XenonParser::ExpressionContext* XenonParser::IfStatementContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::VariableDeclarationContext* XenonParser::IfStatementContext::variableDeclaration() {
  return getRuleContext<XenonParser::VariableDeclarationContext>(0);
}

XenonParser::ElseStatementContext* XenonParser::IfStatementContext::elseStatement() {
  return getRuleContext<XenonParser::ElseStatementContext>(0);
}


size_t XenonParser::IfStatementContext::getRuleIndex() const {
  return XenonParser::RuleIfStatement;
}


antlrcpp::Any XenonParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::IfStatementContext* XenonParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, XenonParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(XenonParser::If);
    setState(512);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::Add:
      case XenonParser::Sub:
      case XenonParser::Mul:
      case XenonParser::Not:
      case XenonParser::Neg:
      case XenonParser::BitwiseAnd:
      case XenonParser::OpeningParen:
      case XenonParser::SizeOf:
      case XenonParser::Function:
      case XenonParser::Extern:
      case XenonParser::Attribute:
      case XenonParser::True:
      case XenonParser::False:
      case XenonParser::NullLiteral:
      case XenonParser::VariableName:
      case XenonParser::StringLiteral:
      case XenonParser::CharLiteral:
      case XenonParser::DecimalLiteral:
      case XenonParser::FloatingLiteral:
      case XenonParser::ZeroLiteral:
      case XenonParser::HexadecimalLiteral:
      case XenonParser::BinaryLiteral: {
        setState(510);
        expression(0);
        break;
      }

      case XenonParser::VariableDeclarator: {
        setState(511);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(514);
    statement();
    setState(516);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(515);
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

XenonParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ElseStatementContext::Else() {
  return getToken(XenonParser::Else, 0);
}

XenonParser::StatementContext* XenonParser::ElseStatementContext::statement() {
  return getRuleContext<XenonParser::StatementContext>(0);
}


size_t XenonParser::ElseStatementContext::getRuleIndex() const {
  return XenonParser::RuleElseStatement;
}


antlrcpp::Any XenonParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ElseStatementContext* XenonParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, XenonParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    match(XenonParser::Else);
    setState(519);
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

XenonParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::WhileStatementContext::While() {
  return getToken(XenonParser::While, 0);
}

XenonParser::ExpressionContext* XenonParser::WhileStatementContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::StatementContext* XenonParser::WhileStatementContext::statement() {
  return getRuleContext<XenonParser::StatementContext>(0);
}


size_t XenonParser::WhileStatementContext::getRuleIndex() const {
  return XenonParser::RuleWhileStatement;
}


antlrcpp::Any XenonParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::WhileStatementContext* XenonParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, XenonParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    match(XenonParser::While);
    setState(522);
    expression(0);
    setState(523);
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

XenonParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ForStatementContext::For() {
  return getToken(XenonParser::For, 0);
}

tree::TerminalNode* XenonParser::ForStatementContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::ForStatementContext::In() {
  return getToken(XenonParser::In, 0);
}

XenonParser::ExpressionContext* XenonParser::ForStatementContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

XenonParser::StatementContext* XenonParser::ForStatementContext::statement() {
  return getRuleContext<XenonParser::StatementContext>(0);
}


size_t XenonParser::ForStatementContext::getRuleIndex() const {
  return XenonParser::RuleForStatement;
}


antlrcpp::Any XenonParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ForStatementContext* XenonParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, XenonParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(XenonParser::For);
    setState(526);
    match(XenonParser::VariableName);
    setState(527);
    match(XenonParser::In);
    setState(528);
    expression(0);
    setState(529);
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

XenonParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::BreakStatementContext::Break() {
  return getToken(XenonParser::Break, 0);
}


size_t XenonParser::BreakStatementContext::getRuleIndex() const {
  return XenonParser::RuleBreakStatement;
}


antlrcpp::Any XenonParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::BreakStatementContext* XenonParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, XenonParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
    match(XenonParser::Break);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionStatementContext ------------------------------------------------------------------

XenonParser::UnionStatementContext::UnionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::AttributesContext* XenonParser::UnionStatementContext::attributes() {
  return getRuleContext<XenonParser::AttributesContext>(0);
}

tree::TerminalNode* XenonParser::UnionStatementContext::Union() {
  return getToken(XenonParser::Union, 0);
}

tree::TerminalNode* XenonParser::UnionStatementContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

XenonParser::UnionBodyContext* XenonParser::UnionStatementContext::unionBody() {
  return getRuleContext<XenonParser::UnionBodyContext>(0);
}

XenonParser::ClassGenericsContext* XenonParser::UnionStatementContext::classGenerics() {
  return getRuleContext<XenonParser::ClassGenericsContext>(0);
}


size_t XenonParser::UnionStatementContext::getRuleIndex() const {
  return XenonParser::RuleUnionStatement;
}


antlrcpp::Any XenonParser::UnionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitUnionStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::UnionStatementContext* XenonParser::unionStatement() {
  UnionStatementContext *_localctx = _tracker.createInstance<UnionStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, XenonParser::RuleUnionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    attributes();
    setState(534);
    match(XenonParser::Union);
    setState(535);
    match(XenonParser::VariableName);
    setState(537);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::LessThan) {
      setState(536);
      classGenerics();
    }
    setState(539);
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

XenonParser::UnionBodyContext::UnionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::UnionBodyContext::OpeningBrace() {
  return getToken(XenonParser::OpeningBrace, 0);
}

tree::TerminalNode* XenonParser::UnionBodyContext::ClosingBrace() {
  return getToken(XenonParser::ClosingBrace, 0);
}

std::vector<XenonParser::UnionPropertyContext *> XenonParser::UnionBodyContext::unionProperty() {
  return getRuleContexts<XenonParser::UnionPropertyContext>();
}

XenonParser::UnionPropertyContext* XenonParser::UnionBodyContext::unionProperty(size_t i) {
  return getRuleContext<XenonParser::UnionPropertyContext>(i);
}


size_t XenonParser::UnionBodyContext::getRuleIndex() const {
  return XenonParser::RuleUnionBody;
}


antlrcpp::Any XenonParser::UnionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitUnionBody(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::UnionBodyContext* XenonParser::unionBody() {
  UnionBodyContext *_localctx = _tracker.createInstance<UnionBodyContext>(_ctx, getState());
  enterRule(_localctx, 92, XenonParser::RuleUnionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    match(XenonParser::OpeningBrace);
    setState(545);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XenonParser::VariableName) {
      setState(542);
      unionProperty();
      setState(547);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(548);
    match(XenonParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionPropertyContext ------------------------------------------------------------------

XenonParser::UnionPropertyContext::UnionPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::UnionPropertyContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::UnionPropertyContext::Colon() {
  return getToken(XenonParser::Colon, 0);
}

XenonParser::TypeContext* XenonParser::UnionPropertyContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::UnionPropertyContext::InstructionsSeparator() {
  return getToken(XenonParser::InstructionsSeparator, 0);
}


size_t XenonParser::UnionPropertyContext::getRuleIndex() const {
  return XenonParser::RuleUnionProperty;
}


antlrcpp::Any XenonParser::UnionPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitUnionProperty(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::UnionPropertyContext* XenonParser::unionProperty() {
  UnionPropertyContext *_localctx = _tracker.createInstance<UnionPropertyContext>(_ctx, getState());
  enterRule(_localctx, 94, XenonParser::RuleUnionProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    match(XenonParser::VariableName);
    setState(551);
    match(XenonParser::Colon);
    setState(552);
    type(0);
    setState(553);
    match(XenonParser::InstructionsSeparator);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumStatementContext ------------------------------------------------------------------

XenonParser::EnumStatementContext::EnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::AttributesContext* XenonParser::EnumStatementContext::attributes() {
  return getRuleContext<XenonParser::AttributesContext>(0);
}

tree::TerminalNode* XenonParser::EnumStatementContext::Enum() {
  return getToken(XenonParser::Enum, 0);
}

tree::TerminalNode* XenonParser::EnumStatementContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

XenonParser::EnumBodyContext* XenonParser::EnumStatementContext::enumBody() {
  return getRuleContext<XenonParser::EnumBodyContext>(0);
}


size_t XenonParser::EnumStatementContext::getRuleIndex() const {
  return XenonParser::RuleEnumStatement;
}


antlrcpp::Any XenonParser::EnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::EnumStatementContext* XenonParser::enumStatement() {
  EnumStatementContext *_localctx = _tracker.createInstance<EnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, XenonParser::RuleEnumStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(555);
    attributes();
    setState(556);
    match(XenonParser::Enum);
    setState(557);
    match(XenonParser::VariableName);
    setState(558);
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

XenonParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::EnumBodyContext::OpeningBrace() {
  return getToken(XenonParser::OpeningBrace, 0);
}

tree::TerminalNode* XenonParser::EnumBodyContext::ClosingBrace() {
  return getToken(XenonParser::ClosingBrace, 0);
}

std::vector<XenonParser::EnumPropertyContext *> XenonParser::EnumBodyContext::enumProperty() {
  return getRuleContexts<XenonParser::EnumPropertyContext>();
}

XenonParser::EnumPropertyContext* XenonParser::EnumBodyContext::enumProperty(size_t i) {
  return getRuleContext<XenonParser::EnumPropertyContext>(i);
}

std::vector<tree::TerminalNode *> XenonParser::EnumBodyContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::EnumBodyContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::EnumBodyContext::getRuleIndex() const {
  return XenonParser::RuleEnumBody;
}


antlrcpp::Any XenonParser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::EnumBodyContext* XenonParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 98, XenonParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(560);
    match(XenonParser::OpeningBrace);
    setState(572);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::VariableName) {
      setState(561);
      enumProperty();
      setState(566);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(562);
          match(XenonParser::Comma);
          setState(563);
          enumProperty(); 
        }
        setState(568);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
      }
      setState(570);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == XenonParser::Comma) {
        setState(569);
        match(XenonParser::Comma);
      }
    }
    setState(574);
    match(XenonParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumPropertyContext ------------------------------------------------------------------

XenonParser::EnumPropertyContext::EnumPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::EnumPropertyContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::EnumPropertyContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

XenonParser::ExpressionContext* XenonParser::EnumPropertyContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}


size_t XenonParser::EnumPropertyContext::getRuleIndex() const {
  return XenonParser::RuleEnumProperty;
}


antlrcpp::Any XenonParser::EnumPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitEnumProperty(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::EnumPropertyContext* XenonParser::enumProperty() {
  EnumPropertyContext *_localctx = _tracker.createInstance<EnumPropertyContext>(_ctx, getState());
  enterRule(_localctx, 100, XenonParser::RuleEnumProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
    match(XenonParser::VariableName);
    setState(579);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Equal) {
      setState(577);
      match(XenonParser::Equal);
      setState(578);
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

XenonParser::SpecialClassStatementContext::SpecialClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::AttributesContext* XenonParser::SpecialClassStatementContext::attributes() {
  return getRuleContext<XenonParser::AttributesContext>(0);
}

tree::TerminalNode* XenonParser::SpecialClassStatementContext::Special() {
  return getToken(XenonParser::Special, 0);
}

tree::TerminalNode* XenonParser::SpecialClassStatementContext::Class() {
  return getToken(XenonParser::Class, 0);
}

XenonParser::ScopedNameNoGenericContext* XenonParser::SpecialClassStatementContext::scopedNameNoGeneric() {
  return getRuleContext<XenonParser::ScopedNameNoGenericContext>(0);
}

XenonParser::ClassTypeNameGenericsContext* XenonParser::SpecialClassStatementContext::classTypeNameGenerics() {
  return getRuleContext<XenonParser::ClassTypeNameGenericsContext>(0);
}

XenonParser::ClassBodyContext* XenonParser::SpecialClassStatementContext::classBody() {
  return getRuleContext<XenonParser::ClassBodyContext>(0);
}

tree::TerminalNode* XenonParser::SpecialClassStatementContext::Extends() {
  return getToken(XenonParser::Extends, 0);
}

XenonParser::ClassExtendsContext* XenonParser::SpecialClassStatementContext::classExtends() {
  return getRuleContext<XenonParser::ClassExtendsContext>(0);
}


size_t XenonParser::SpecialClassStatementContext::getRuleIndex() const {
  return XenonParser::RuleSpecialClassStatement;
}


antlrcpp::Any XenonParser::SpecialClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitSpecialClassStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::SpecialClassStatementContext* XenonParser::specialClassStatement() {
  SpecialClassStatementContext *_localctx = _tracker.createInstance<SpecialClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 102, XenonParser::RuleSpecialClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    attributes();
    setState(582);
    match(XenonParser::Special);
    setState(583);
    match(XenonParser::Class);
    setState(584);
    scopedNameNoGeneric();
    setState(585);
    classTypeNameGenerics();
    setState(588);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Extends) {
      setState(586);
      match(XenonParser::Extends);
      setState(587);
      classExtends();
    }
    setState(590);
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

XenonParser::ClassStatementContext::ClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::AttributesContext* XenonParser::ClassStatementContext::attributes() {
  return getRuleContext<XenonParser::AttributesContext>(0);
}

tree::TerminalNode* XenonParser::ClassStatementContext::Class() {
  return getToken(XenonParser::Class, 0);
}

tree::TerminalNode* XenonParser::ClassStatementContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

XenonParser::ClassBodyContext* XenonParser::ClassStatementContext::classBody() {
  return getRuleContext<XenonParser::ClassBodyContext>(0);
}

XenonParser::ClassGenericsContext* XenonParser::ClassStatementContext::classGenerics() {
  return getRuleContext<XenonParser::ClassGenericsContext>(0);
}

tree::TerminalNode* XenonParser::ClassStatementContext::Extends() {
  return getToken(XenonParser::Extends, 0);
}

XenonParser::ClassExtendsContext* XenonParser::ClassStatementContext::classExtends() {
  return getRuleContext<XenonParser::ClassExtendsContext>(0);
}


size_t XenonParser::ClassStatementContext::getRuleIndex() const {
  return XenonParser::RuleClassStatement;
}


antlrcpp::Any XenonParser::ClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassStatementContext* XenonParser::classStatement() {
  ClassStatementContext *_localctx = _tracker.createInstance<ClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, XenonParser::RuleClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    attributes();
    setState(593);
    match(XenonParser::Class);
    setState(594);
    match(XenonParser::VariableName);
    setState(596);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::LessThan) {
      setState(595);
      classGenerics();
    }
    setState(600);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Extends) {
      setState(598);
      match(XenonParser::Extends);
      setState(599);
      classExtends();
    }
    setState(602);
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

XenonParser::ClassGenericsContext::ClassGenericsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ClassGenericsContext::LessThan() {
  return getToken(XenonParser::LessThan, 0);
}

std::vector<tree::TerminalNode *> XenonParser::ClassGenericsContext::VariableName() {
  return getTokens(XenonParser::VariableName);
}

tree::TerminalNode* XenonParser::ClassGenericsContext::VariableName(size_t i) {
  return getToken(XenonParser::VariableName, i);
}

tree::TerminalNode* XenonParser::ClassGenericsContext::GreaterThan() {
  return getToken(XenonParser::GreaterThan, 0);
}

std::vector<tree::TerminalNode *> XenonParser::ClassGenericsContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::ClassGenericsContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::ClassGenericsContext::getRuleIndex() const {
  return XenonParser::RuleClassGenerics;
}


antlrcpp::Any XenonParser::ClassGenericsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassGenerics(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassGenericsContext* XenonParser::classGenerics() {
  ClassGenericsContext *_localctx = _tracker.createInstance<ClassGenericsContext>(_ctx, getState());
  enterRule(_localctx, 106, XenonParser::RuleClassGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(XenonParser::LessThan);
    setState(605);
    match(XenonParser::VariableName);
    setState(610);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XenonParser::Comma) {
      setState(606);
      match(XenonParser::Comma);
      setState(607);
      match(XenonParser::VariableName);
      setState(612);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(613);
    match(XenonParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassExtendsContext ------------------------------------------------------------------

XenonParser::ClassExtendsContext::ClassExtendsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XenonParser::ClassTypeNameContext *> XenonParser::ClassExtendsContext::classTypeName() {
  return getRuleContexts<XenonParser::ClassTypeNameContext>();
}

XenonParser::ClassTypeNameContext* XenonParser::ClassExtendsContext::classTypeName(size_t i) {
  return getRuleContext<XenonParser::ClassTypeNameContext>(i);
}

std::vector<tree::TerminalNode *> XenonParser::ClassExtendsContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::ClassExtendsContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::ClassExtendsContext::getRuleIndex() const {
  return XenonParser::RuleClassExtends;
}


antlrcpp::Any XenonParser::ClassExtendsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassExtends(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassExtendsContext* XenonParser::classExtends() {
  ClassExtendsContext *_localctx = _tracker.createInstance<ClassExtendsContext>(_ctx, getState());
  enterRule(_localctx, 108, XenonParser::RuleClassExtends);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    classTypeName();
    setState(620);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XenonParser::Comma) {
      setState(616);
      match(XenonParser::Comma);
      setState(617);
      classTypeName();
      setState(622);
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

XenonParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ClassBodyContext::OpeningBrace() {
  return getToken(XenonParser::OpeningBrace, 0);
}

tree::TerminalNode* XenonParser::ClassBodyContext::ClosingBrace() {
  return getToken(XenonParser::ClosingBrace, 0);
}

std::vector<XenonParser::ClassBodyElementContext *> XenonParser::ClassBodyContext::classBodyElement() {
  return getRuleContexts<XenonParser::ClassBodyElementContext>();
}

XenonParser::ClassBodyElementContext* XenonParser::ClassBodyContext::classBodyElement(size_t i) {
  return getRuleContext<XenonParser::ClassBodyElementContext>(i);
}


size_t XenonParser::ClassBodyContext::getRuleIndex() const {
  return XenonParser::RuleClassBody;
}


antlrcpp::Any XenonParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassBodyContext* XenonParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 110, XenonParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(XenonParser::OpeningBrace);
    setState(627);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 39) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 39)) & ((1ULL << (XenonParser::Class - 39))
      | (1ULL << (XenonParser::Static - 39))
      | (1ULL << (XenonParser::Union - 39))
      | (1ULL << (XenonParser::Function - 39))
      | (1ULL << (XenonParser::Extern - 39))
      | (1ULL << (XenonParser::Alias - 39))
      | (1ULL << (XenonParser::Attribute - 39))
      | (1ULL << (XenonParser::VariableName - 39)))) != 0)) {
      setState(624);
      classBodyElement();
      setState(629);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(630);
    match(XenonParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyElementContext ------------------------------------------------------------------

XenonParser::ClassBodyElementContext::ClassBodyElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::ClassPropertyContext* XenonParser::ClassBodyElementContext::classProperty() {
  return getRuleContext<XenonParser::ClassPropertyContext>(0);
}

XenonParser::ClassMethodContext* XenonParser::ClassBodyElementContext::classMethod() {
  return getRuleContext<XenonParser::ClassMethodContext>(0);
}

XenonParser::ClassStatementContext* XenonParser::ClassBodyElementContext::classStatement() {
  return getRuleContext<XenonParser::ClassStatementContext>(0);
}

XenonParser::UnionStatementContext* XenonParser::ClassBodyElementContext::unionStatement() {
  return getRuleContext<XenonParser::UnionStatementContext>(0);
}

XenonParser::AliasContext* XenonParser::ClassBodyElementContext::alias() {
  return getRuleContext<XenonParser::AliasContext>(0);
}


size_t XenonParser::ClassBodyElementContext::getRuleIndex() const {
  return XenonParser::RuleClassBodyElement;
}


antlrcpp::Any XenonParser::ClassBodyElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyElement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassBodyElementContext* XenonParser::classBodyElement() {
  ClassBodyElementContext *_localctx = _tracker.createInstance<ClassBodyElementContext>(_ctx, getState());
  enterRule(_localctx, 112, XenonParser::RuleClassBodyElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(637);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(632);
      classProperty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(633);
      classMethod();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(634);
      classStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(635);
      unionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(636);
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

XenonParser::ClassPropertyContext::ClassPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ClassPropertyContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::ClassPropertyContext::Colon() {
  return getToken(XenonParser::Colon, 0);
}

XenonParser::TypeContext* XenonParser::ClassPropertyContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::ClassPropertyContext::InstructionsSeparator() {
  return getToken(XenonParser::InstructionsSeparator, 0);
}

tree::TerminalNode* XenonParser::ClassPropertyContext::Static() {
  return getToken(XenonParser::Static, 0);
}

tree::TerminalNode* XenonParser::ClassPropertyContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

XenonParser::ExpressionContext* XenonParser::ClassPropertyContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}


size_t XenonParser::ClassPropertyContext::getRuleIndex() const {
  return XenonParser::RuleClassProperty;
}


antlrcpp::Any XenonParser::ClassPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassProperty(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassPropertyContext* XenonParser::classProperty() {
  ClassPropertyContext *_localctx = _tracker.createInstance<ClassPropertyContext>(_ctx, getState());
  enterRule(_localctx, 114, XenonParser::RuleClassProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(640);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Static) {
      setState(639);
      match(XenonParser::Static);
    }
    setState(642);
    match(XenonParser::VariableName);
    setState(643);
    match(XenonParser::Colon);
    setState(644);
    type(0);
    setState(647);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Equal) {
      setState(645);
      match(XenonParser::Equal);
      setState(646);
      expression(0);
    }
    setState(649);
    match(XenonParser::InstructionsSeparator);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMethodContext ------------------------------------------------------------------

XenonParser::ClassMethodContext::ClassMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::FunctionContext* XenonParser::ClassMethodContext::function() {
  return getRuleContext<XenonParser::FunctionContext>(0);
}

tree::TerminalNode* XenonParser::ClassMethodContext::Static() {
  return getToken(XenonParser::Static, 0);
}


size_t XenonParser::ClassMethodContext::getRuleIndex() const {
  return XenonParser::RuleClassMethod;
}


antlrcpp::Any XenonParser::ClassMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassMethod(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassMethodContext* XenonParser::classMethod() {
  ClassMethodContext *_localctx = _tracker.createInstance<ClassMethodContext>(_ctx, getState());
  enterRule(_localctx, 116, XenonParser::RuleClassMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(652);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Static) {
      setState(651);
      match(XenonParser::Static);
    }
    setState(654);
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

XenonParser::ClassInstantiationPropertiesContext::ClassInstantiationPropertiesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XenonParser::ClassInstantiationPropertyContext *> XenonParser::ClassInstantiationPropertiesContext::classInstantiationProperty() {
  return getRuleContexts<XenonParser::ClassInstantiationPropertyContext>();
}

XenonParser::ClassInstantiationPropertyContext* XenonParser::ClassInstantiationPropertiesContext::classInstantiationProperty(size_t i) {
  return getRuleContext<XenonParser::ClassInstantiationPropertyContext>(i);
}

std::vector<tree::TerminalNode *> XenonParser::ClassInstantiationPropertiesContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::ClassInstantiationPropertiesContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::ClassInstantiationPropertiesContext::getRuleIndex() const {
  return XenonParser::RuleClassInstantiationProperties;
}


antlrcpp::Any XenonParser::ClassInstantiationPropertiesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationProperties(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassInstantiationPropertiesContext* XenonParser::classInstantiationProperties() {
  ClassInstantiationPropertiesContext *_localctx = _tracker.createInstance<ClassInstantiationPropertiesContext>(_ctx, getState());
  enterRule(_localctx, 118, XenonParser::RuleClassInstantiationProperties);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(656);
    classInstantiationProperty();
    setState(661);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(657);
        match(XenonParser::Comma);
        setState(658);
        classInstantiationProperty(); 
      }
      setState(663);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(665);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Comma) {
      setState(664);
      match(XenonParser::Comma);
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

XenonParser::ClassInstantiationPropertyContext::ClassInstantiationPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ClassInstantiationPropertyContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::ClassInstantiationPropertyContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

XenonParser::ExpressionContext* XenonParser::ClassInstantiationPropertyContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}


size_t XenonParser::ClassInstantiationPropertyContext::getRuleIndex() const {
  return XenonParser::RuleClassInstantiationProperty;
}


antlrcpp::Any XenonParser::ClassInstantiationPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationProperty(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassInstantiationPropertyContext* XenonParser::classInstantiationProperty() {
  ClassInstantiationPropertyContext *_localctx = _tracker.createInstance<ClassInstantiationPropertyContext>(_ctx, getState());
  enterRule(_localctx, 120, XenonParser::RuleClassInstantiationProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(667);
    match(XenonParser::VariableName);
    setState(670);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Equal) {
      setState(668);
      match(XenonParser::Equal);
      setState(669);
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

XenonParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t XenonParser::TypeContext::getRuleIndex() const {
  return XenonParser::RuleType;
}

void XenonParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeArrayContext ------------------------------------------------------------------

XenonParser::TypeContext* XenonParser::TypeArrayContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::TypeArrayContext::OpeningBracket() {
  return getToken(XenonParser::OpeningBracket, 0);
}

XenonParser::ExpressionContext* XenonParser::TypeArrayContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::TypeArrayContext::ClosingBracket() {
  return getToken(XenonParser::ClosingBracket, 0);
}

XenonParser::TypeArrayContext::TypeArrayContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::TypeArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitTypeArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeNameContext ------------------------------------------------------------------

XenonParser::ScopedNameContext* XenonParser::TypeNameContext::scopedName() {
  return getRuleContext<XenonParser::ScopedNameContext>(0);
}

XenonParser::FunctionTypeContext* XenonParser::TypeNameContext::functionType() {
  return getRuleContext<XenonParser::FunctionTypeContext>(0);
}

tree::TerminalNode* XenonParser::TypeNameContext::Const() {
  return getToken(XenonParser::Const, 0);
}

XenonParser::TypeNameContext::TypeNameContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypePointerContext ------------------------------------------------------------------

XenonParser::TypeContext* XenonParser::TypePointerContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::TypePointerContext::Mul() {
  return getToken(XenonParser::Mul, 0);
}

tree::TerminalNode* XenonParser::TypePointerContext::Const() {
  return getToken(XenonParser::Const, 0);
}

XenonParser::TypePointerContext::TypePointerContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::TypePointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitTypePointer(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeReferenceContext ------------------------------------------------------------------

XenonParser::TypeContext* XenonParser::TypeReferenceContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::TypeReferenceContext::BitwiseAnd() {
  return getToken(XenonParser::BitwiseAnd, 0);
}

tree::TerminalNode* XenonParser::TypeReferenceContext::Const() {
  return getToken(XenonParser::Const, 0);
}

XenonParser::TypeReferenceContext::TypeReferenceContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any XenonParser::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::TypeContext* XenonParser::type() {
   return type(0);
}

XenonParser::TypeContext* XenonParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  XenonParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  XenonParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 122;
  enterRecursionRule(_localctx, 122, XenonParser::RuleType, precedence);

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

    setState(674);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Const) {
      setState(673);
      match(XenonParser::Const);
    }
    setState(678);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::VariableName: {
        setState(676);
        scopedName();
        break;
      }

      case XenonParser::Function: {
        setState(677);
        functionType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(697);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(695);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<TypeArrayContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(680);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(681);
          match(XenonParser::OpeningBracket);
          setState(682);
          expression(0);
          setState(683);
          match(XenonParser::ClosingBracket);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TypePointerContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(685);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(687);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == XenonParser::Const) {
            setState(686);
            match(XenonParser::Const);
          }
          setState(689);
          match(XenonParser::Mul);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<TypeReferenceContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(690);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(692);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == XenonParser::Const) {
            setState(691);
            match(XenonParser::Const);
          }
          setState(694);
          match(XenonParser::BitwiseAnd);
          break;
        }

        } 
      }
      setState(699);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
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

XenonParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::FunctionTypeContext::Function() {
  return getToken(XenonParser::Function, 0);
}

tree::TerminalNode* XenonParser::FunctionTypeContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

tree::TerminalNode* XenonParser::FunctionTypeContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}

XenonParser::FunctionArgumentsContext* XenonParser::FunctionTypeContext::functionArguments() {
  return getRuleContext<XenonParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* XenonParser::FunctionTypeContext::Colon() {
  return getToken(XenonParser::Colon, 0);
}

XenonParser::TypeContext* XenonParser::FunctionTypeContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

tree::TerminalNode* XenonParser::FunctionTypeContext::Comma() {
  return getToken(XenonParser::Comma, 0);
}

XenonParser::FunctionVariadicArgumentContext* XenonParser::FunctionTypeContext::functionVariadicArgument() {
  return getRuleContext<XenonParser::FunctionVariadicArgumentContext>(0);
}


size_t XenonParser::FunctionTypeContext::getRuleIndex() const {
  return XenonParser::RuleFunctionType;
}


antlrcpp::Any XenonParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::FunctionTypeContext* XenonParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, XenonParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    match(XenonParser::Function);
    setState(701);
    match(XenonParser::OpeningParen);
    setState(710);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case XenonParser::Const:
      case XenonParser::Function:
      case XenonParser::VariableName: {
        setState(702);
        functionArguments();
        setState(705);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == XenonParser::Comma) {
          setState(703);
          match(XenonParser::Comma);
          setState(704);
          functionVariadicArgument();
        }
        break;
      }

      case XenonParser::ClosingParen:
      case XenonParser::Variadic: {
        setState(708);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == XenonParser::Variadic) {
          setState(707);
          functionVariadicArgument();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(712);
    match(XenonParser::ClosingParen);
    setState(715);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(713);
      match(XenonParser::Colon);
      setState(714);
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

XenonParser::ClassTypeNameContext::ClassTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::ScopedNameContext* XenonParser::ClassTypeNameContext::scopedName() {
  return getRuleContext<XenonParser::ScopedNameContext>(0);
}


size_t XenonParser::ClassTypeNameContext::getRuleIndex() const {
  return XenonParser::RuleClassTypeName;
}


antlrcpp::Any XenonParser::ClassTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeName(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassTypeNameContext* XenonParser::classTypeName() {
  ClassTypeNameContext *_localctx = _tracker.createInstance<ClassTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 126, XenonParser::RuleClassTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(717);
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

XenonParser::ClassTypeNameGenericsContext::ClassTypeNameGenericsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ClassTypeNameGenericsContext::LessThan() {
  return getToken(XenonParser::LessThan, 0);
}

std::vector<XenonParser::TypeContext *> XenonParser::ClassTypeNameGenericsContext::type() {
  return getRuleContexts<XenonParser::TypeContext>();
}

XenonParser::TypeContext* XenonParser::ClassTypeNameGenericsContext::type(size_t i) {
  return getRuleContext<XenonParser::TypeContext>(i);
}

tree::TerminalNode* XenonParser::ClassTypeNameGenericsContext::GreaterThan() {
  return getToken(XenonParser::GreaterThan, 0);
}

std::vector<tree::TerminalNode *> XenonParser::ClassTypeNameGenericsContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::ClassTypeNameGenericsContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::ClassTypeNameGenericsContext::getRuleIndex() const {
  return XenonParser::RuleClassTypeNameGenerics;
}


antlrcpp::Any XenonParser::ClassTypeNameGenericsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeNameGenerics(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ClassTypeNameGenericsContext* XenonParser::classTypeNameGenerics() {
  ClassTypeNameGenericsContext *_localctx = _tracker.createInstance<ClassTypeNameGenericsContext>(_ctx, getState());
  enterRule(_localctx, 128, XenonParser::RuleClassTypeNameGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    match(XenonParser::LessThan);
    setState(720);
    type(0);
    setState(725);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XenonParser::Comma) {
      setState(721);
      match(XenonParser::Comma);
      setState(722);
      type(0);
      setState(727);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(728);
    match(XenonParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceStatementContext ------------------------------------------------------------------

XenonParser::NamespaceStatementContext::NamespaceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::AttributesContext* XenonParser::NamespaceStatementContext::attributes() {
  return getRuleContext<XenonParser::AttributesContext>(0);
}

tree::TerminalNode* XenonParser::NamespaceStatementContext::Namespace() {
  return getToken(XenonParser::Namespace, 0);
}

tree::TerminalNode* XenonParser::NamespaceStatementContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::NamespaceStatementContext::OpeningBrace() {
  return getToken(XenonParser::OpeningBrace, 0);
}

tree::TerminalNode* XenonParser::NamespaceStatementContext::ClosingBrace() {
  return getToken(XenonParser::ClosingBrace, 0);
}

std::vector<XenonParser::StatementContext *> XenonParser::NamespaceStatementContext::statement() {
  return getRuleContexts<XenonParser::StatementContext>();
}

XenonParser::StatementContext* XenonParser::NamespaceStatementContext::statement(size_t i) {
  return getRuleContext<XenonParser::StatementContext>(i);
}


size_t XenonParser::NamespaceStatementContext::getRuleIndex() const {
  return XenonParser::RuleNamespaceStatement;
}


antlrcpp::Any XenonParser::NamespaceStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::NamespaceStatementContext* XenonParser::namespaceStatement() {
  NamespaceStatementContext *_localctx = _tracker.createInstance<NamespaceStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, XenonParser::RuleNamespaceStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(730);
    attributes();
    setState(731);
    match(XenonParser::Namespace);
    setState(732);
    match(XenonParser::VariableName);
    setState(733);
    match(XenonParser::OpeningBrace);
    setState(737);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << XenonParser::Add)
      | (1ULL << XenonParser::Sub)
      | (1ULL << XenonParser::Mul)
      | (1ULL << XenonParser::Not)
      | (1ULL << XenonParser::Neg)
      | (1ULL << XenonParser::BitwiseAnd)
      | (1ULL << XenonParser::OpeningParen)
      | (1ULL << XenonParser::OpeningBrace)
      | (1ULL << XenonParser::SizeOf)
      | (1ULL << XenonParser::Class)
      | (1ULL << XenonParser::Special)
      | (1ULL << XenonParser::Union)
      | (1ULL << XenonParser::Enum)
      | (1ULL << XenonParser::Namespace)
      | (1ULL << XenonParser::VariableDeclarator)
      | (1ULL << XenonParser::If)
      | (1ULL << XenonParser::While)
      | (1ULL << XenonParser::Break)
      | (1ULL << XenonParser::For)
      | (1ULL << XenonParser::Function)
      | (1ULL << XenonParser::Extern)
      | (1ULL << XenonParser::Return)
      | (1ULL << XenonParser::Alias))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (XenonParser::Attribute - 64))
      | (1ULL << (XenonParser::Assembly - 64))
      | (1ULL << (XenonParser::Import - 64))
      | (1ULL << (XenonParser::True - 64))
      | (1ULL << (XenonParser::False - 64))
      | (1ULL << (XenonParser::NullLiteral - 64))
      | (1ULL << (XenonParser::VariableName - 64))
      | (1ULL << (XenonParser::StringLiteral - 64))
      | (1ULL << (XenonParser::CharLiteral - 64))
      | (1ULL << (XenonParser::DecimalLiteral - 64))
      | (1ULL << (XenonParser::FloatingLiteral - 64))
      | (1ULL << (XenonParser::ZeroLiteral - 64))
      | (1ULL << (XenonParser::HexadecimalLiteral - 64))
      | (1ULL << (XenonParser::BinaryLiteral - 64)))) != 0)) {
      setState(734);
      statement();
      setState(739);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(740);
    match(XenonParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

XenonParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::ImportStatementContext::Import() {
  return getToken(XenonParser::Import, 0);
}

tree::TerminalNode* XenonParser::ImportStatementContext::StringLiteral() {
  return getToken(XenonParser::StringLiteral, 0);
}


size_t XenonParser::ImportStatementContext::getRuleIndex() const {
  return XenonParser::RuleImportStatement;
}


antlrcpp::Any XenonParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::ImportStatementContext* XenonParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, XenonParser::RuleImportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(742);
    match(XenonParser::Import);
    setState(743);
    match(XenonParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributesContext ------------------------------------------------------------------

XenonParser::AttributesContext::AttributesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<XenonParser::AttributeContext *> XenonParser::AttributesContext::attribute() {
  return getRuleContexts<XenonParser::AttributeContext>();
}

XenonParser::AttributeContext* XenonParser::AttributesContext::attribute(size_t i) {
  return getRuleContext<XenonParser::AttributeContext>(i);
}


size_t XenonParser::AttributesContext::getRuleIndex() const {
  return XenonParser::RuleAttributes;
}


antlrcpp::Any XenonParser::AttributesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAttributes(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AttributesContext* XenonParser::attributes() {
  AttributesContext *_localctx = _tracker.createInstance<AttributesContext>(_ctx, getState());
  enterRule(_localctx, 134, XenonParser::RuleAttributes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == XenonParser::Attribute) {
      setState(745);
      attribute();
      setState(750);
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

XenonParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::AttributeContext::Attribute() {
  return getToken(XenonParser::Attribute, 0);
}

tree::TerminalNode* XenonParser::AttributeContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::AttributeContext::ClosingBracket() {
  return getToken(XenonParser::ClosingBracket, 0);
}

tree::TerminalNode* XenonParser::AttributeContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

tree::TerminalNode* XenonParser::AttributeContext::StringLiteral() {
  return getToken(XenonParser::StringLiteral, 0);
}


size_t XenonParser::AttributeContext::getRuleIndex() const {
  return XenonParser::RuleAttribute;
}


antlrcpp::Any XenonParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AttributeContext* XenonParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 136, XenonParser::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    match(XenonParser::Attribute);
    setState(752);
    match(XenonParser::VariableName);
    setState(755);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Equal) {
      setState(753);
      match(XenonParser::Equal);
      setState(754);
      match(XenonParser::StringLiteral);
    }
    setState(757);
    match(XenonParser::ClosingBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasContext ------------------------------------------------------------------

XenonParser::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::AliasContext::Alias() {
  return getToken(XenonParser::Alias, 0);
}

tree::TerminalNode* XenonParser::AliasContext::VariableName() {
  return getToken(XenonParser::VariableName, 0);
}

tree::TerminalNode* XenonParser::AliasContext::Equal() {
  return getToken(XenonParser::Equal, 0);
}

XenonParser::ScopedNameContext* XenonParser::AliasContext::scopedName() {
  return getRuleContext<XenonParser::ScopedNameContext>(0);
}

XenonParser::TypeContext* XenonParser::AliasContext::type() {
  return getRuleContext<XenonParser::TypeContext>(0);
}

XenonParser::LiteralContext* XenonParser::AliasContext::literal() {
  return getRuleContext<XenonParser::LiteralContext>(0);
}

XenonParser::ClassGenericsContext* XenonParser::AliasContext::classGenerics() {
  return getRuleContext<XenonParser::ClassGenericsContext>(0);
}


size_t XenonParser::AliasContext::getRuleIndex() const {
  return XenonParser::RuleAlias;
}


antlrcpp::Any XenonParser::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AliasContext* XenonParser::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 138, XenonParser::RuleAlias);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(759);
    match(XenonParser::Alias);
    setState(760);
    match(XenonParser::VariableName);
    setState(762);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::LessThan) {
      setState(761);
      classGenerics();
    }
    setState(764);
    match(XenonParser::Equal);
    setState(768);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      setState(765);
      scopedName();
      break;
    }

    case 2: {
      setState(766);
      type(0);
      break;
    }

    case 3: {
      setState(767);
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

XenonParser::AssemblyStatementContext::AssemblyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::AssemblyStatementContext::Assembly() {
  return getToken(XenonParser::Assembly, 0);
}

tree::TerminalNode* XenonParser::AssemblyStatementContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

XenonParser::StringLiteralContext* XenonParser::AssemblyStatementContext::stringLiteral() {
  return getRuleContext<XenonParser::StringLiteralContext>(0);
}

tree::TerminalNode* XenonParser::AssemblyStatementContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}

std::vector<tree::TerminalNode *> XenonParser::AssemblyStatementContext::Colon() {
  return getTokens(XenonParser::Colon);
}

tree::TerminalNode* XenonParser::AssemblyStatementContext::Colon(size_t i) {
  return getToken(XenonParser::Colon, i);
}

std::vector<XenonParser::AssemblyOutputContext *> XenonParser::AssemblyStatementContext::assemblyOutput() {
  return getRuleContexts<XenonParser::AssemblyOutputContext>();
}

XenonParser::AssemblyOutputContext* XenonParser::AssemblyStatementContext::assemblyOutput(size_t i) {
  return getRuleContext<XenonParser::AssemblyOutputContext>(i);
}

std::vector<XenonParser::AssemblyInputContext *> XenonParser::AssemblyStatementContext::assemblyInput() {
  return getRuleContexts<XenonParser::AssemblyInputContext>();
}

XenonParser::AssemblyInputContext* XenonParser::AssemblyStatementContext::assemblyInput(size_t i) {
  return getRuleContext<XenonParser::AssemblyInputContext>(i);
}

std::vector<XenonParser::AssemblyClobberContext *> XenonParser::AssemblyStatementContext::assemblyClobber() {
  return getRuleContexts<XenonParser::AssemblyClobberContext>();
}

XenonParser::AssemblyClobberContext* XenonParser::AssemblyStatementContext::assemblyClobber(size_t i) {
  return getRuleContext<XenonParser::AssemblyClobberContext>(i);
}

std::vector<tree::TerminalNode *> XenonParser::AssemblyStatementContext::Comma() {
  return getTokens(XenonParser::Comma);
}

tree::TerminalNode* XenonParser::AssemblyStatementContext::Comma(size_t i) {
  return getToken(XenonParser::Comma, i);
}


size_t XenonParser::AssemblyStatementContext::getRuleIndex() const {
  return XenonParser::RuleAssemblyStatement;
}


antlrcpp::Any XenonParser::AssemblyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyStatement(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AssemblyStatementContext* XenonParser::assemblyStatement() {
  AssemblyStatementContext *_localctx = _tracker.createInstance<AssemblyStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, XenonParser::RuleAssemblyStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(770);
    match(XenonParser::Assembly);
    setState(771);
    match(XenonParser::OpeningParen);
    setState(772);
    stringLiteral();

    setState(773);
    match(XenonParser::Colon);
    setState(782);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::StringLiteral) {
      setState(774);
      assemblyOutput();
      setState(779);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == XenonParser::Comma) {
        setState(775);
        match(XenonParser::Comma);
        setState(776);
        assemblyOutput();
        setState(781);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(784);
    match(XenonParser::Colon);
    setState(793);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::StringLiteral) {
      setState(785);
      assemblyInput();
      setState(790);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == XenonParser::Comma) {
        setState(786);
        match(XenonParser::Comma);
        setState(787);
        assemblyInput();
        setState(792);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(804);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == XenonParser::Colon) {
      setState(795);
      match(XenonParser::Colon);
      setState(796);
      assemblyClobber();
      setState(801);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == XenonParser::Comma) {
        setState(797);
        match(XenonParser::Comma);
        setState(798);
        assemblyClobber();
        setState(803);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(806);
    match(XenonParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyTemplateContext ------------------------------------------------------------------

XenonParser::AssemblyTemplateContext::AssemblyTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

XenonParser::StringLiteralContext* XenonParser::AssemblyTemplateContext::stringLiteral() {
  return getRuleContext<XenonParser::StringLiteralContext>(0);
}


size_t XenonParser::AssemblyTemplateContext::getRuleIndex() const {
  return XenonParser::RuleAssemblyTemplate;
}


antlrcpp::Any XenonParser::AssemblyTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyTemplate(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AssemblyTemplateContext* XenonParser::assemblyTemplate() {
  AssemblyTemplateContext *_localctx = _tracker.createInstance<AssemblyTemplateContext>(_ctx, getState());
  enterRule(_localctx, 142, XenonParser::RuleAssemblyTemplate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(808);
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

XenonParser::AssemblyOutputContext::AssemblyOutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::AssemblyOutputContext::StringLiteral() {
  return getToken(XenonParser::StringLiteral, 0);
}

tree::TerminalNode* XenonParser::AssemblyOutputContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

XenonParser::ExpressionContext* XenonParser::AssemblyOutputContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::AssemblyOutputContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}


size_t XenonParser::AssemblyOutputContext::getRuleIndex() const {
  return XenonParser::RuleAssemblyOutput;
}


antlrcpp::Any XenonParser::AssemblyOutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyOutput(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AssemblyOutputContext* XenonParser::assemblyOutput() {
  AssemblyOutputContext *_localctx = _tracker.createInstance<AssemblyOutputContext>(_ctx, getState());
  enterRule(_localctx, 144, XenonParser::RuleAssemblyOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    match(XenonParser::StringLiteral);
    setState(811);
    match(XenonParser::OpeningParen);
    setState(812);
    expression(0);
    setState(813);
    match(XenonParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyInputContext ------------------------------------------------------------------

XenonParser::AssemblyInputContext::AssemblyInputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::AssemblyInputContext::StringLiteral() {
  return getToken(XenonParser::StringLiteral, 0);
}

tree::TerminalNode* XenonParser::AssemblyInputContext::OpeningParen() {
  return getToken(XenonParser::OpeningParen, 0);
}

XenonParser::ExpressionContext* XenonParser::AssemblyInputContext::expression() {
  return getRuleContext<XenonParser::ExpressionContext>(0);
}

tree::TerminalNode* XenonParser::AssemblyInputContext::ClosingParen() {
  return getToken(XenonParser::ClosingParen, 0);
}


size_t XenonParser::AssemblyInputContext::getRuleIndex() const {
  return XenonParser::RuleAssemblyInput;
}


antlrcpp::Any XenonParser::AssemblyInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyInput(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AssemblyInputContext* XenonParser::assemblyInput() {
  AssemblyInputContext *_localctx = _tracker.createInstance<AssemblyInputContext>(_ctx, getState());
  enterRule(_localctx, 146, XenonParser::RuleAssemblyInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(815);
    match(XenonParser::StringLiteral);
    setState(816);
    match(XenonParser::OpeningParen);
    setState(817);
    expression(0);
    setState(818);
    match(XenonParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyClobberContext ------------------------------------------------------------------

XenonParser::AssemblyClobberContext::AssemblyClobberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::AssemblyClobberContext::StringLiteral() {
  return getToken(XenonParser::StringLiteral, 0);
}


size_t XenonParser::AssemblyClobberContext::getRuleIndex() const {
  return XenonParser::RuleAssemblyClobber;
}


antlrcpp::Any XenonParser::AssemblyClobberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyClobber(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::AssemblyClobberContext* XenonParser::assemblyClobber() {
  AssemblyClobberContext *_localctx = _tracker.createInstance<AssemblyClobberContext>(_ctx, getState());
  enterRule(_localctx, 148, XenonParser::RuleAssemblyClobber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(820);
    match(XenonParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

XenonParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* XenonParser::EosContext::EOF() {
  return getToken(XenonParser::EOF, 0);
}

tree::TerminalNode* XenonParser::EosContext::LineTerminator() {
  return getToken(XenonParser::LineTerminator, 0);
}


size_t XenonParser::EosContext::getRuleIndex() const {
  return XenonParser::RuleEos;
}


antlrcpp::Any XenonParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<XenonParserVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

XenonParser::EosContext* XenonParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 150, XenonParser::RuleEos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(822);
    _la = _input->LA(1);
    if (!(_la == XenonParser::EOF || _la == XenonParser::LineTerminator)) {
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

bool XenonParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 61: return typeSempred(dynamic_cast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool XenonParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);
    case 7: return precpred(_ctx, 21);
    case 8: return precpred(_ctx, 20);
    case 9: return precpred(_ctx, 19);
    case 10: return precpred(_ctx, 12);
    case 11: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

bool XenonParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> XenonParser::_decisionToDFA;
atn::PredictionContextCache XenonParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN XenonParser::_atn;
std::vector<uint16_t> XenonParser::_serializedATN;

std::vector<std::string> XenonParser::_ruleNames = {
  "instructions", "body", "statement", "expression", "scopedName", "name", 
  "scopedNameNoGeneric", "nameNoGeneric", "scopeResolver", "multiplicativeOperatorStatement", 
  "operatorStatement", "bitwiseOperatorStatement", "shiftOperator", "arithmeticRightShiftOperator", 
  "logicalRightShiftOperator", "leftShiftOperator", "shiftEqualOperator", 
  "arithmeticRightShiftEqualOperator", "logicalRightShiftEqualOperator", 
  "leftShiftEqualOperator", "greaterThanOrEqualToOperator", "conditionalOperatorStatement", 
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

std::vector<std::string> XenonParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'||'", "'&&'", "'=='", 
  "'!='", "'<='", "'<'", "'>'", "'^'", "'|'", "'&'", "'='", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'^='", "'|='", "'&='", "'('", "')'", "'{'", "'}'", 
  "'['", "']'", "'...'", "'..='", "'..'", "'as'", "'sizeof'", "'const'", 
  "'class'", "'extends'", "'special'", "'static'", "'.'", "'->'", "'union'", 
  "'enum'", "'@destructor'", "'namespace'", "'::'", "'let'", "'if'", "'else'", 
  "'while'", "'break'", "'for'", "'in'", "'fn'", "'extern'", "'return'", 
  "'cast'", "'alias'", "','", "':'", "'#['", "'asm'", "'import'", "'true'", 
  "'false'", "'null'", "", "", "", "", "", "", "'0'"
};

std::vector<std::string> XenonParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "Not", "Neg", "ConditionalOr", 
  "ConditionalAnd", "EqualTo", "NotEqualTo", "LessThanOrEqualTo", "LessThan", 
  "GreaterThan", "Xor", "BitwiseOr", "BitwiseAnd", "Equal", "AddEqual", 
  "SubEqual", "MulEqual", "DivEqual", "ModEqual", "XorEqual", "OrEqual", 
  "AndEqual", "OpeningParen", "ClosingParen", "OpeningBrace", "ClosingBrace", 
  "OpeningBracket", "ClosingBracket", "Variadic", "InclusiveRange", "ExclusiveRange", 
  "As", "SizeOf", "Const", "Class", "Extends", "Special", "Static", "Dot", 
  "Arrow", "Union", "Enum", "Destructor", "Namespace", "ScopeResolver", 
  "VariableDeclarator", "If", "Else", "While", "Break", "For", "In", "Function", 
  "Extern", "Return", "Cast", "Alias", "Comma", "Colon", "Attribute", "Assembly", 
  "Import", "True", "False", "NullLiteral", "InstructionsSeparator", "VariableName", 
  "StringLiteral", "CharLiteral", "DecimalLiteral", "FloatingLiteral", "ZeroLiteral", 
  "HexadecimalLiteral", "BinaryLiteral", "Comment", "WhiteSpace", "LineTerminator"
};

dfa::Vocabulary XenonParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> XenonParser::_tokenNames;

XenonParser::Initializer::Initializer() {
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
    0x3, 0x53, 0x33b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x3, 0x2, 0x7, 0x2, 0x9c, 0xa, 0x2, 0xc, 
    0x2, 0xe, 0x2, 0x9f, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x7, 0x3, 0xa5, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0xa8, 0xb, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xc9, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xd3, 
    0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xd8, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xeb, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x10f, 0xa, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x11c, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x11f, 0xb, 0x5, 0x3, 0x6, 0x5, 0x6, 0x122, 0xa, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x128, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x12b, 0xb, 0x7, 0x3, 0x8, 0x5, 0x8, 0x12e, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x137, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x142, 0xa, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0x151, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x5, 0x18, 0x16b, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
    0x19, 0x5, 0x19, 0x177, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x17f, 0xa, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x6, 
    0x1e, 0x188, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x189, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x192, 
    0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x196, 0xa, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x19b, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 
    0x19e, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x5, 0x22, 0x1c0, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 
    0x1c4, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1c9, 
    0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 
    0x24, 0x1d0, 0xa, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1d3, 0xa, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1d9, 0xa, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x1dc, 0xa, 0x24, 0x5, 0x24, 0x1de, 0xa, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1e3, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1e8, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x1f1, 
    0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x1f4, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x5, 0x28, 0x1f8, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x1fe, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x203, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x207, 0xa, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
    0x2f, 0x21c, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x7, 0x30, 0x222, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x225, 0xb, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 0x237, 0xa, 0x33, 0xc, 0x33, 
    0xe, 0x33, 0x23a, 0xb, 0x33, 0x3, 0x33, 0x5, 0x33, 0x23d, 0xa, 0x33, 
    0x5, 0x33, 0x23f, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x246, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x24f, 0xa, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 
    0x36, 0x257, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x25b, 0xa, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x7, 0x37, 0x263, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x266, 0xb, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x26d, 
    0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x270, 0xb, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x7, 0x39, 0x274, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x277, 0xb, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x5, 0x3a, 0x280, 0xa, 0x3a, 0x3, 0x3b, 0x5, 0x3b, 0x283, 0xa, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 
    0x28a, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x5, 0x3c, 0x28f, 
    0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 
    0x3d, 0x296, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x299, 0xb, 0x3d, 0x3, 
    0x3d, 0x5, 0x3d, 0x29c, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x2a1, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2a5, 
    0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2a9, 0xa, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
    0x3f, 0x2b2, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x2b7, 0xa, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x2ba, 0xa, 0x3f, 0xc, 0x3f, 
    0xe, 0x3f, 0x2bd, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x5, 0x40, 0x2c4, 0xa, 0x40, 0x3, 0x40, 0x5, 0x40, 0x2c7, 
    0xa, 0x40, 0x5, 0x40, 0x2c9, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x5, 0x40, 0x2ce, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x2d6, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 
    0x2d9, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2e2, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
    0x2e5, 0xb, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x45, 0x7, 0x45, 0x2ed, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x2f0, 
    0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x2f6, 
    0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 
    0x47, 0x2fd, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x5, 0x47, 0x303, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x30c, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x30f, 0xb, 0x48, 0x5, 0x48, 0x311, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x317, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x31a, 0xb, 0x48, 0x5, 0x48, 0x31c, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x322, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x325, 0xb, 0x48, 0x5, 0x48, 0x327, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x2, 0x4, 0x8, 
    0x7c, 0x4e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x2, 0xa, 0x3, 0x2, 0x2d, 0x2e, 0x3, 0x2, 
    0x5, 0x7, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x11, 0x13, 0x3, 0x2, 0xa, 0xb, 
    0x3, 0x2, 0x45, 0x46, 0x4, 0x2, 0x4c, 0x4c, 0x4e, 0x50, 0x3, 0x3, 0x53, 
    0x53, 0x2, 0x392, 0x2, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x4, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x8, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x121, 0x3, 0x2, 0x2, 0x2, 0xc, 0x125, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x12d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x138, 0x3, 0x2, 0x2, 0x2, 0x16, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x143, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x146, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x22, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x152, 0x3, 0x2, 0x2, 0x2, 0x26, 0x156, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x15b, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x162, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x176, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x34, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x182, 0x3, 0x2, 0x2, 0x2, 0x38, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x187, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x18b, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x197, 0x3, 0x2, 0x2, 0x2, 0x40, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x1bf, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1ca, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1eb, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1f7, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x208, 0x3, 0x2, 0x2, 0x2, 0x56, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x215, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x217, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x60, 0x228, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x64, 0x232, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x242, 0x3, 0x2, 0x2, 0x2, 0x68, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x252, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x25e, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x269, 0x3, 0x2, 0x2, 0x2, 0x70, 0x271, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x74, 0x282, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x28e, 0x3, 0x2, 0x2, 0x2, 0x78, 0x292, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x29d, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2be, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2e8, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x304, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x32a, 0x3, 0x2, 0x2, 0x2, 0x92, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x94, 0x331, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x336, 0x3, 0x2, 0x2, 0x2, 0x98, 0x338, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x9c, 0x5, 0x6, 0x4, 0x2, 0x9b, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x98, 0x4d, 0x2, 0xa1, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa6, 0x7, 0x1f, 0x2, 0x2, 0xa3, 0xa5, 
    0x5, 0x6, 0x4, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x7, 0x20, 0x2, 0x2, 0xaa, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xc9, 0x5, 0x44, 0x23, 0x2, 0xac, 0xc9, 0x5, 0x84, 0x43, 0x2, 
    0xad, 0xae, 0x5, 0x8, 0x5, 0x2, 0xae, 0xaf, 0x7, 0x48, 0x2, 0x2, 0xaf, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xc9, 0x5, 0x4, 0x3, 0x2, 0xb1, 0xb2, 
    0x5, 0x3c, 0x1f, 0x2, 0xb2, 0xb3, 0x7, 0x48, 0x2, 0x2, 0xb3, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x50, 0x29, 0x2, 0xb5, 0xb6, 0x7, 0x48, 
    0x2, 0x2, 0xb6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xc9, 0x5, 0x52, 0x2a, 
    0x2, 0xb8, 0xc9, 0x5, 0x56, 0x2c, 0x2, 0xb9, 0xc9, 0x5, 0x58, 0x2d, 
    0x2, 0xba, 0xbb, 0x5, 0x5a, 0x2e, 0x2, 0xbb, 0xbc, 0x7, 0x48, 0x2, 0x2, 
    0xbc, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc9, 0x5, 0x68, 0x35, 0x2, 0xbe, 
    0xc9, 0x5, 0x6a, 0x36, 0x2, 0xbf, 0xc9, 0x5, 0x5c, 0x2f, 0x2, 0xc0, 
    0xc9, 0x5, 0x62, 0x32, 0x2, 0xc1, 0xc9, 0x5, 0x86, 0x44, 0x2, 0xc2, 
    0xc3, 0x5, 0x8e, 0x48, 0x2, 0xc3, 0xc4, 0x7, 0x48, 0x2, 0x2, 0xc4, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x8c, 0x47, 0x2, 0xc6, 0xc7, 0x7, 
    0x48, 0x2, 0x2, 0xc7, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xac, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xcb, 0x8, 0x5, 0x1, 0x2, 0xcb, 0xcc, 0x7, 0x1d, 0x2, 0x2, 0xcc, 
    0xcd, 0x5, 0x8, 0x5, 0x2, 0xcd, 0xce, 0x7, 0x1e, 0x2, 0x2, 0xce, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd2, 0x7, 0x27, 0x2, 0x2, 0xd0, 0xd3, 0x5, 
    0x8, 0x5, 0x2, 0xd1, 0xd3, 0x5, 0x7c, 0x3f, 0x2, 0xd2, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd5, 0x5, 0x80, 0x41, 0x2, 0xd5, 0xd7, 0x7, 0x1f, 0x2, 0x2, 
    0xd6, 0xd8, 0x5, 0x78, 0x3d, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 
    0x7, 0x20, 0x2, 0x2, 0xda, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 
    0x4, 0x2, 0x2, 0xdc, 0xeb, 0x5, 0x8, 0x5, 0x14, 0xdd, 0xde, 0x7, 0x3, 
    0x2, 0x2, 0xde, 0xeb, 0x5, 0x8, 0x5, 0x13, 0xdf, 0xe0, 0x7, 0x8, 0x2, 
    0x2, 0xe0, 0xeb, 0x5, 0x8, 0x5, 0x12, 0xe1, 0xe2, 0x7, 0x9, 0x2, 0x2, 
    0xe2, 0xeb, 0x5, 0x8, 0x5, 0x11, 0xe3, 0xe4, 0x7, 0x13, 0x2, 0x2, 0xe4, 
    0xeb, 0x5, 0x8, 0x5, 0x10, 0xe5, 0xe6, 0x7, 0x5, 0x2, 0x2, 0xe6, 0xeb, 
    0x5, 0x8, 0x5, 0xf, 0xe7, 0xeb, 0x5, 0x44, 0x23, 0x2, 0xe8, 0xeb, 0x5, 
    0xa, 0x6, 0x2, 0xe9, 0xeb, 0x5, 0x32, 0x1a, 0x2, 0xea, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xea, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0x11d, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0xc, 0x9, 
    0x2, 0x2, 0xed, 0xee, 0x5, 0x14, 0xb, 0x2, 0xee, 0xef, 0x5, 0x8, 0x5, 
    0xa, 0xef, 0x11c, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0xc, 0x8, 0x2, 0x2, 
    0xf1, 0xf2, 0x5, 0x16, 0xc, 0x2, 0xf2, 0xf3, 0x5, 0x8, 0x5, 0x9, 0xf3, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0xc, 0x7, 0x2, 0x2, 0xf5, 0xf6, 
    0x5, 0x18, 0xd, 0x2, 0xf6, 0xf7, 0x5, 0x8, 0x5, 0x8, 0xf7, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0xc, 0x6, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x1a, 
    0xe, 0x2, 0xfa, 0xfb, 0x5, 0x8, 0x5, 0x7, 0xfb, 0x11c, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0xc, 0x5, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x2e, 0x18, 0x2, 
    0xfe, 0xff, 0x5, 0x8, 0x5, 0x6, 0xff, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0xc, 0x4, 0x2, 0x2, 0x101, 0x102, 0x5, 0x2c, 0x17, 0x2, 0x102, 
    0x103, 0x5, 0x8, 0x5, 0x5, 0x103, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0xc, 0x3, 0x2, 0x2, 0x105, 0x106, 0x5, 0x30, 0x19, 0x2, 0x106, 
    0x107, 0x5, 0x8, 0x5, 0x4, 0x107, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x108, 
    0x109, 0xc, 0x17, 0x2, 0x2, 0x109, 0x10a, 0x9, 0x2, 0x2, 0x2, 0x10a, 
    0x11c, 0x5, 0xc, 0x7, 0x2, 0x10b, 0x10c, 0xc, 0x16, 0x2, 0x2, 0x10c, 
    0x10e, 0x7, 0x1d, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0x3e, 0x20, 0x2, 0x10e, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10f, 
    0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x11c, 0x7, 0x1e, 0x2, 0x2, 0x111, 
    0x112, 0xc, 0x15, 0x2, 0x2, 0x112, 0x113, 0x7, 0x21, 0x2, 0x2, 0x113, 
    0x114, 0x5, 0x8, 0x5, 0x2, 0x114, 0x115, 0x7, 0x22, 0x2, 0x2, 0x115, 
    0x11c, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0xc, 0xe, 0x2, 0x2, 0x117, 
    0x11c, 0x7, 0x8, 0x2, 0x2, 0x118, 0x119, 0xc, 0xd, 0x2, 0x2, 0x119, 
    0x11a, 0x7, 0x26, 0x2, 0x2, 0x11a, 0x11c, 0x5, 0x7c, 0x3f, 0x2, 0x11b, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0x11b, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x11b, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x11b, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x100, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x108, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x10b, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x111, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x122, 0x5, 0x12, 0xa, 0x2, 0x121, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x123, 0x124, 0x5, 0xc, 0x7, 0x2, 0x124, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x125, 0x129, 0x7, 0x49, 0x2, 0x2, 0x126, 0x128, 0x5, 0x82, 0x42, 
    0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x128, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x129, 0x127, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x129, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12e, 0x5, 0x12, 0xa, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x12f, 0x130, 0x5, 0x10, 0x9, 0x2, 0x130, 0xf, 0x3, 0x2, 0x2, 0x2, 0x131, 
    0x132, 0x7, 0x49, 0x2, 0x2, 0x132, 0x11, 0x3, 0x2, 0x2, 0x2, 0x133, 
    0x134, 0x5, 0xc, 0x7, 0x2, 0x134, 0x136, 0x7, 0x33, 0x2, 0x2, 0x135, 
    0x137, 0x5, 0x12, 0xa, 0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 0x136, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x137, 0x13, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 
    0x9, 0x3, 0x2, 0x2, 0x139, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x9, 
    0x4, 0x2, 0x2, 0x13b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x9, 0x5, 
    0x2, 0x2, 0x13d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x142, 0x5, 0x1c, 
    0xf, 0x2, 0x13f, 0x142, 0x5, 0x1e, 0x10, 0x2, 0x140, 0x142, 0x5, 0x20, 
    0x11, 0x2, 0x141, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x143, 0x144, 0x7, 0x10, 0x2, 0x2, 0x144, 0x145, 0x7, 0x10, 0x2, 
    0x2, 0x145, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0x10, 0x2, 
    0x2, 0x147, 0x148, 0x7, 0x10, 0x2, 0x2, 0x148, 0x149, 0x7, 0x10, 0x2, 
    0x2, 0x149, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0xf, 0x2, 0x2, 
    0x14b, 0x14c, 0x7, 0xf, 0x2, 0x2, 0x14c, 0x21, 0x3, 0x2, 0x2, 0x2, 0x14d, 
    0x151, 0x5, 0x24, 0x13, 0x2, 0x14e, 0x151, 0x5, 0x26, 0x14, 0x2, 0x14f, 
    0x151, 0x5, 0x28, 0x15, 0x2, 0x150, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x150, 
    0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x10, 0x2, 0x2, 0x153, 
    0x154, 0x7, 0x10, 0x2, 0x2, 0x154, 0x155, 0x7, 0x14, 0x2, 0x2, 0x155, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x10, 0x2, 0x2, 0x157, 
    0x158, 0x7, 0x10, 0x2, 0x2, 0x158, 0x159, 0x7, 0x10, 0x2, 0x2, 0x159, 
    0x15a, 0x7, 0x14, 0x2, 0x2, 0x15a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x15c, 0x7, 0xf, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0xf, 0x2, 0x2, 0x15d, 
    0x15e, 0x7, 0x14, 0x2, 0x2, 0x15e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15f, 
    0x160, 0x7, 0x10, 0x2, 0x2, 0x160, 0x161, 0x7, 0x14, 0x2, 0x2, 0x161, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x9, 0x6, 0x2, 0x2, 0x163, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x16b, 0x7, 0xc, 0x2, 0x2, 0x165, 0x16b, 
    0x7, 0xd, 0x2, 0x2, 0x166, 0x16b, 0x7, 0xe, 0x2, 0x2, 0x167, 0x16b, 
    0x5, 0x2a, 0x16, 0x2, 0x168, 0x16b, 0x7, 0xf, 0x2, 0x2, 0x169, 0x16b, 
    0x7, 0x10, 0x2, 0x2, 0x16a, 0x164, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x165, 
    0x3, 0x2, 0x2, 0x2, 0x16a, 0x166, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x167, 
    0x3, 0x2, 0x2, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x169, 
    0x3, 0x2, 0x2, 0x2, 0x16b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x177, 0x7, 
    0x14, 0x2, 0x2, 0x16d, 0x177, 0x7, 0x15, 0x2, 0x2, 0x16e, 0x177, 0x7, 
    0x16, 0x2, 0x2, 0x16f, 0x177, 0x7, 0x17, 0x2, 0x2, 0x170, 0x177, 0x7, 
    0x18, 0x2, 0x2, 0x171, 0x177, 0x7, 0x19, 0x2, 0x2, 0x172, 0x177, 0x7, 
    0x1a, 0x2, 0x2, 0x173, 0x177, 0x7, 0x1b, 0x2, 0x2, 0x174, 0x177, 0x7, 
    0x1c, 0x2, 0x2, 0x175, 0x177, 0x5, 0x22, 0x12, 0x2, 0x176, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x176, 0x16e, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x176, 0x170, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x171, 0x3, 0x2, 0x2, 0x2, 0x176, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x173, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 0x2, 0x177, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x178, 0x17f, 0x5, 0x34, 0x1b, 0x2, 0x179, 0x17f, 0x5, 0x36, 
    0x1c, 0x2, 0x17a, 0x17f, 0x5, 0x38, 0x1d, 0x2, 0x17b, 0x17f, 0x5, 0x3a, 
    0x1e, 0x2, 0x17c, 0x17f, 0x7, 0x4b, 0x2, 0x2, 0x17d, 0x17f, 0x7, 0x47, 
    0x2, 0x2, 0x17e, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x17f, 0x33, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x9, 0x7, 0x2, 
    0x2, 0x181, 0x35, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x9, 0x8, 0x2, 0x2, 
    0x183, 0x37, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 0x4d, 0x2, 0x2, 
    0x185, 0x39, 0x3, 0x2, 0x2, 0x2, 0x186, 0x188, 0x7, 0x4a, 0x2, 0x2, 
    0x187, 0x186, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x3, 0x2, 0x2, 0x2, 
    0x189, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 0x2, 
    0x18a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x7, 0x34, 0x2, 0x2, 
    0x18c, 0x195, 0x7, 0x49, 0x2, 0x2, 0x18d, 0x18e, 0x7, 0x41, 0x2, 0x2, 
    0x18e, 0x191, 0x5, 0x7c, 0x3f, 0x2, 0x18f, 0x190, 0x7, 0x14, 0x2, 0x2, 
    0x190, 0x192, 0x5, 0x8, 0x5, 0x2, 0x191, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 0x192, 0x196, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x194, 0x7, 0x14, 0x2, 0x2, 0x194, 0x196, 0x5, 0x8, 0x5, 0x2, 
    0x195, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x196, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x197, 0x19c, 0x5, 0x40, 0x21, 0x2, 
    0x198, 0x199, 0x7, 0x40, 0x2, 0x2, 0x199, 0x19b, 0x5, 0x40, 0x21, 0x2, 
    0x19a, 0x198, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19e, 0x3, 0x2, 0x2, 0x2, 
    0x19c, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x19d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19f, 
    0x1a0, 0x5, 0x8, 0x5, 0x2, 0x1a0, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1c0, 
    0x7, 0x3, 0x2, 0x2, 0x1a2, 0x1c0, 0x7, 0x4, 0x2, 0x2, 0x1a3, 0x1c0, 
    0x7, 0x5, 0x2, 0x2, 0x1a4, 0x1c0, 0x7, 0x6, 0x2, 0x2, 0x1a5, 0x1c0, 
    0x7, 0x7, 0x2, 0x2, 0x1a6, 0x1c0, 0x7, 0x8, 0x2, 0x2, 0x1a7, 0x1a8, 
    0x7, 0x3, 0x2, 0x2, 0x1a8, 0x1c0, 0x7, 0x8, 0x2, 0x2, 0x1a9, 0x1c0, 
    0x7, 0x11, 0x2, 0x2, 0x1aa, 0x1c0, 0x7, 0x12, 0x2, 0x2, 0x1ab, 0x1c0, 
    0x7, 0x13, 0x2, 0x2, 0x1ac, 0x1c0, 0x7, 0x9, 0x2, 0x2, 0x1ad, 0x1c0, 
    0x7, 0x15, 0x2, 0x2, 0x1ae, 0x1c0, 0x7, 0x16, 0x2, 0x2, 0x1af, 0x1c0, 
    0x7, 0x17, 0x2, 0x2, 0x1b0, 0x1c0, 0x7, 0x18, 0x2, 0x2, 0x1b1, 0x1c0, 
    0x7, 0x19, 0x2, 0x2, 0x1b2, 0x1c0, 0x7, 0x1a, 0x2, 0x2, 0x1b3, 0x1c0, 
    0x7, 0x1b, 0x2, 0x2, 0x1b4, 0x1c0, 0x7, 0x1c, 0x2, 0x2, 0x1b5, 0x1c0, 
    0x7, 0xc, 0x2, 0x2, 0x1b6, 0x1c0, 0x7, 0xd, 0x2, 0x2, 0x1b7, 0x1c0, 
    0x7, 0xf, 0x2, 0x2, 0x1b8, 0x1c0, 0x7, 0xe, 0x2, 0x2, 0x1b9, 0x1c0, 
    0x7, 0x10, 0x2, 0x2, 0x1ba, 0x1c0, 0x5, 0x2a, 0x16, 0x2, 0x1bb, 0x1bc, 
    0x7, 0x21, 0x2, 0x2, 0x1bc, 0x1c0, 0x7, 0x22, 0x2, 0x2, 0x1bd, 0x1c0, 
    0x5, 0x1a, 0xe, 0x2, 0x1be, 0x1c0, 0x5, 0x22, 0x12, 0x2, 0x1bf, 0x1a1, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a7, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1aa, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1ac, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1ae, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b0, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b2, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b4, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b6, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b8, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1ba, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1bd, 
    0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 0x88, 0x45, 0x2, 0x1c2, 0x1c4, 0x7, 
    0x3c, 0x2, 0x2, 0x1c3, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x3, 
    0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c8, 0x5, 
    0x46, 0x24, 0x2, 0x1c6, 0x1c9, 0x5, 0x4, 0x3, 0x2, 0x1c7, 0x1c9, 0x7, 
    0x48, 0x2, 0x2, 0x1c8, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 
    0x2, 0x2, 0x2, 0x1c9, 0x45, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1e7, 0x7, 0x3b, 
    0x2, 0x2, 0x1cb, 0x1d0, 0x5, 0x42, 0x22, 0x2, 0x1cc, 0x1cd, 0x7, 0x3e, 
    0x2, 0x2, 0x1cd, 0x1d0, 0x5, 0x48, 0x25, 0x2, 0x1ce, 0x1d0, 0x7, 0x49, 
    0x2, 0x2, 0x1cf, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1cc, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 
    0x2, 0x2, 0x1d0, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d3, 0x5, 0x6c, 
    0x37, 0x2, 0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 0x3, 0x2, 
    0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1dd, 0x7, 0x1d, 
    0x2, 0x2, 0x1d5, 0x1d8, 0x5, 0x4c, 0x27, 0x2, 0x1d6, 0x1d7, 0x7, 0x40, 
    0x2, 0x2, 0x1d7, 0x1d9, 0x5, 0x4a, 0x26, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1d8, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1da, 0x1dc, 0x5, 0x4a, 0x26, 0x2, 0x1db, 0x1da, 0x3, 0x2, 
    0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1de, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 
    0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e2, 0x7, 0x1e, 
    0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0x41, 0x2, 0x2, 0x1e1, 0x1e3, 0x5, 0x7c, 
    0x3f, 0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0x31, 
    0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x1d, 0x2, 0x2, 0x1e6, 0x1e8, 0x7, 0x1e, 
    0x2, 0x2, 0x1e7, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1e8, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x5, 0x7c, 
    0x3f, 0x2, 0x1ea, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x23, 
    0x2, 0x2, 0x1ec, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1f2, 0x5, 0x4e, 
    0x28, 0x2, 0x1ee, 0x1ef, 0x7, 0x40, 0x2, 0x2, 0x1ef, 0x1f1, 0x5, 0x4e, 
    0x28, 0x2, 0x1f0, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f4, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f3, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 
    0x2, 0x1f5, 0x1f6, 0x7, 0x49, 0x2, 0x2, 0x1f6, 0x1f8, 0x7, 0x41, 0x2, 
    0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1fa, 0x5, 0x7c, 0x3f, 
    0x2, 0x1fa, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fd, 0x7, 0x3d, 0x2, 
    0x2, 0x1fc, 0x1fe, 0x5, 0x8, 0x5, 0x2, 0x1fd, 0x1fc, 0x3, 0x2, 0x2, 
    0x2, 0x1fd, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x1ff, 0x202, 0x7, 0x35, 0x2, 0x2, 0x200, 0x203, 0x5, 0x8, 0x5, 0x2, 
    0x201, 0x203, 0x5, 0x3c, 0x1f, 0x2, 0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 
    0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 0x2, 0x2, 
    0x204, 0x206, 0x5, 0x6, 0x4, 0x2, 0x205, 0x207, 0x5, 0x54, 0x2b, 0x2, 
    0x206, 0x205, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 
    0x207, 0x53, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x7, 0x36, 0x2, 0x2, 
    0x209, 0x20a, 0x5, 0x6, 0x4, 0x2, 0x20a, 0x55, 0x3, 0x2, 0x2, 0x2, 0x20b, 
    0x20c, 0x7, 0x37, 0x2, 0x2, 0x20c, 0x20d, 0x5, 0x8, 0x5, 0x2, 0x20d, 
    0x20e, 0x5, 0x6, 0x4, 0x2, 0x20e, 0x57, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 
    0x7, 0x39, 0x2, 0x2, 0x210, 0x211, 0x7, 0x49, 0x2, 0x2, 0x211, 0x212, 
    0x7, 0x3a, 0x2, 0x2, 0x212, 0x213, 0x5, 0x8, 0x5, 0x2, 0x213, 0x214, 
    0x5, 0x6, 0x4, 0x2, 0x214, 0x59, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x7, 
    0x38, 0x2, 0x2, 0x216, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x5, 
    0x88, 0x45, 0x2, 0x218, 0x219, 0x7, 0x2f, 0x2, 0x2, 0x219, 0x21b, 0x7, 
    0x49, 0x2, 0x2, 0x21a, 0x21c, 0x5, 0x6c, 0x37, 0x2, 0x21b, 0x21a, 0x3, 
    0x2, 0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 
    0x2, 0x2, 0x2, 0x21d, 0x21e, 0x5, 0x5e, 0x30, 0x2, 0x21e, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x21f, 0x223, 0x7, 0x1f, 0x2, 0x2, 0x220, 0x222, 0x5, 
    0x60, 0x31, 0x2, 0x221, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x225, 0x3, 
    0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 
    0x2, 0x2, 0x2, 0x224, 0x226, 0x3, 0x2, 0x2, 0x2, 0x225, 0x223, 0x3, 
    0x2, 0x2, 0x2, 0x226, 0x227, 0x7, 0x20, 0x2, 0x2, 0x227, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x228, 0x229, 0x7, 0x49, 0x2, 0x2, 0x229, 0x22a, 0x7, 
    0x41, 0x2, 0x2, 0x22a, 0x22b, 0x5, 0x7c, 0x3f, 0x2, 0x22b, 0x22c, 0x7, 
    0x48, 0x2, 0x2, 0x22c, 0x61, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x5, 
    0x88, 0x45, 0x2, 0x22e, 0x22f, 0x7, 0x30, 0x2, 0x2, 0x22f, 0x230, 0x7, 
    0x49, 0x2, 0x2, 0x230, 0x231, 0x5, 0x64, 0x33, 0x2, 0x231, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x232, 0x23e, 0x7, 0x1f, 0x2, 0x2, 0x233, 0x238, 0x5, 
    0x66, 0x34, 0x2, 0x234, 0x235, 0x7, 0x40, 0x2, 0x2, 0x235, 0x237, 0x5, 
    0x66, 0x34, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x237, 0x23a, 0x3, 
    0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x3, 
    0x2, 0x2, 0x2, 0x239, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x23b, 0x23d, 0x7, 0x40, 0x2, 0x2, 0x23c, 0x23b, 0x3, 
    0x2, 0x2, 0x2, 0x23c, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x23e, 0x233, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x23f, 0x240, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x7, 
    0x20, 0x2, 0x2, 0x241, 0x65, 0x3, 0x2, 0x2, 0x2, 0x242, 0x245, 0x7, 
    0x49, 0x2, 0x2, 0x243, 0x244, 0x7, 0x14, 0x2, 0x2, 0x244, 0x246, 0x5, 
    0x8, 0x5, 0x2, 0x245, 0x243, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 
    0x2, 0x2, 0x2, 0x246, 0x67, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x5, 0x88, 
    0x45, 0x2, 0x248, 0x249, 0x7, 0x2b, 0x2, 0x2, 0x249, 0x24a, 0x7, 0x29, 
    0x2, 0x2, 0x24a, 0x24b, 0x5, 0xe, 0x8, 0x2, 0x24b, 0x24e, 0x5, 0x82, 
    0x42, 0x2, 0x24c, 0x24d, 0x7, 0x2a, 0x2, 0x2, 0x24d, 0x24f, 0x5, 0x6e, 
    0x38, 0x2, 0x24e, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x5, 0x70, 
    0x39, 0x2, 0x251, 0x69, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x5, 0x88, 
    0x45, 0x2, 0x253, 0x254, 0x7, 0x29, 0x2, 0x2, 0x254, 0x256, 0x7, 0x49, 
    0x2, 0x2, 0x255, 0x257, 0x5, 0x6c, 0x37, 0x2, 0x256, 0x255, 0x3, 0x2, 
    0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 0x2, 0x2, 0x257, 0x25a, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x259, 0x7, 0x2a, 0x2, 0x2, 0x259, 0x25b, 0x5, 0x6e, 
    0x38, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 
    0x2, 0x2, 0x25b, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x5, 0x70, 
    0x39, 0x2, 0x25d, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0xf, 
    0x2, 0x2, 0x25f, 0x264, 0x7, 0x49, 0x2, 0x2, 0x260, 0x261, 0x7, 0x40, 
    0x2, 0x2, 0x261, 0x263, 0x7, 0x49, 0x2, 0x2, 0x262, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x263, 0x266, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 
    0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x7, 0x10, 
    0x2, 0x2, 0x268, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26e, 0x5, 0x80, 
    0x41, 0x2, 0x26a, 0x26b, 0x7, 0x40, 0x2, 0x2, 0x26b, 0x26d, 0x5, 0x80, 
    0x41, 0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x270, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 
    0x2, 0x2, 0x26f, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26e, 0x3, 0x2, 0x2, 
    0x2, 0x271, 0x275, 0x7, 0x1f, 0x2, 0x2, 0x272, 0x274, 0x5, 0x72, 0x3a, 
    0x2, 0x273, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x277, 0x3, 0x2, 0x2, 
    0x2, 0x275, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x278, 0x3, 0x2, 0x2, 0x2, 0x277, 0x275, 0x3, 0x2, 0x2, 
    0x2, 0x278, 0x279, 0x7, 0x20, 0x2, 0x2, 0x279, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x27a, 0x280, 0x5, 0x74, 0x3b, 0x2, 0x27b, 0x280, 0x5, 0x76, 0x3c, 
    0x2, 0x27c, 0x280, 0x5, 0x6a, 0x36, 0x2, 0x27d, 0x280, 0x5, 0x5c, 0x2f, 
    0x2, 0x27e, 0x280, 0x5, 0x8c, 0x47, 0x2, 0x27f, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x27f, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x27c, 0x3, 0x2, 0x2, 
    0x2, 0x27f, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x27e, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x73, 0x3, 0x2, 0x2, 0x2, 0x281, 0x283, 0x7, 0x2c, 0x2, 
    0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 0x2, 
    0x2, 0x283, 0x284, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x7, 0x49, 0x2, 
    0x2, 0x285, 0x286, 0x7, 0x41, 0x2, 0x2, 0x286, 0x289, 0x5, 0x7c, 0x3f, 
    0x2, 0x287, 0x288, 0x7, 0x14, 0x2, 0x2, 0x288, 0x28a, 0x5, 0x8, 0x5, 
    0x2, 0x289, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 0x2, 
    0x2, 0x28a, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x48, 0x2, 
    0x2, 0x28c, 0x75, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28f, 0x7, 0x2c, 0x2, 
    0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 0x2, 
    0x2, 0x28f, 0x290, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x5, 0x44, 0x23, 
    0x2, 0x291, 0x77, 0x3, 0x2, 0x2, 0x2, 0x292, 0x297, 0x5, 0x7a, 0x3e, 
    0x2, 0x293, 0x294, 0x7, 0x40, 0x2, 0x2, 0x294, 0x296, 0x5, 0x7a, 0x3e, 
    0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 0x299, 0x3, 0x2, 0x2, 
    0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0x3, 0x2, 0x2, 
    0x2, 0x298, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 0x2, 
    0x2, 0x29a, 0x29c, 0x7, 0x40, 0x2, 0x2, 0x29b, 0x29a, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x79, 0x3, 0x2, 0x2, 0x2, 
    0x29d, 0x2a0, 0x7, 0x49, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x14, 0x2, 0x2, 
    0x29f, 0x2a1, 0x5, 0x8, 0x5, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 0x2, 
    0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2a2, 
    0x2a4, 0x8, 0x3f, 0x1, 0x2, 0x2a3, 0x2a5, 0x7, 0x28, 0x2, 0x2, 0x2a4, 
    0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 
    0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a9, 0x5, 0xa, 0x6, 0x2, 0x2a7, 
    0x2a9, 0x5, 0x7e, 0x40, 0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
    0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
    0x2ab, 0xc, 0x6, 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x21, 0x2, 0x2, 0x2ac, 
    0x2ad, 0x5, 0x8, 0x5, 0x2, 0x2ad, 0x2ae, 0x7, 0x22, 0x2, 0x2, 0x2ae, 
    0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b1, 0xc, 0x5, 0x2, 0x2, 0x2b0, 
    0x2b2, 0x7, 0x28, 0x2, 0x2, 0x2b1, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
    0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b3, 
    0x2ba, 0x7, 0x5, 0x2, 0x2, 0x2b4, 0x2b6, 0xc, 0x4, 0x2, 0x2, 0x2b5, 
    0x2b7, 0x7, 0x28, 0x2, 0x2, 0x2b6, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
    0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2b8, 
    0x2ba, 0x7, 0x13, 0x2, 0x2, 0x2b9, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
    0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
    0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 
    0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bb, 
    0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x3b, 0x2, 0x2, 0x2bf, 0x2c8, 
    0x7, 0x1d, 0x2, 0x2, 0x2c0, 0x2c3, 0x5, 0x4c, 0x27, 0x2, 0x2c1, 0x2c2, 
    0x7, 0x40, 0x2, 0x2, 0x2c2, 0x2c4, 0x5, 0x4a, 0x26, 0x2, 0x2c3, 0x2c1, 
    0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x2c9, 
    0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c7, 0x5, 0x4a, 0x26, 0x2, 0x2c6, 0x2c5, 
    0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c9, 
    0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c6, 
    0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cd, 
    0x7, 0x1e, 0x2, 0x2, 0x2cb, 0x2cc, 0x7, 0x41, 0x2, 0x2, 0x2cc, 0x2ce, 
    0x5, 0x7c, 0x3f, 0x2, 0x2cd, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 
    0x3, 0x2, 0x2, 0x2, 0x2ce, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x5, 
    0xa, 0x6, 0x2, 0x2d0, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x7, 0xf, 
    0x2, 0x2, 0x2d2, 0x2d7, 0x5, 0x7c, 0x3f, 0x2, 0x2d3, 0x2d4, 0x7, 0x40, 
    0x2, 0x2, 0x2d4, 0x2d6, 0x5, 0x7c, 0x3f, 0x2, 0x2d5, 0x2d3, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d5, 0x3, 0x2, 
    0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2da, 0x3, 0x2, 
    0x2, 0x2, 0x2d9, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x7, 0x10, 
    0x2, 0x2, 0x2db, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2dd, 0x5, 0x88, 
    0x45, 0x2, 0x2dd, 0x2de, 0x7, 0x32, 0x2, 0x2, 0x2de, 0x2df, 0x7, 0x49, 
    0x2, 0x2, 0x2df, 0x2e3, 0x7, 0x1f, 0x2, 0x2, 0x2e0, 0x2e2, 0x5, 0x6, 
    0x4, 0x2, 0x2e1, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x3, 0x2, 
    0x2, 0x2, 0x2e3, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 
    0x2, 0x2, 0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e3, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2e7, 0x7, 0x20, 0x2, 0x2, 0x2e7, 0x85, 0x3, 0x2, 
    0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x44, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 0x4a, 
    0x2, 0x2, 0x2ea, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ed, 0x5, 0x8a, 
    0x46, 0x2, 0x2ec, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2f0, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0x3, 0x2, 
    0x2, 0x2, 0x2ef, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 
    0x2, 0x2f1, 0x2f2, 0x7, 0x42, 0x2, 0x2, 0x2f2, 0x2f5, 0x7, 0x49, 0x2, 
    0x2, 0x2f3, 0x2f4, 0x7, 0x14, 0x2, 0x2, 0x2f4, 0x2f6, 0x7, 0x4a, 0x2, 
    0x2, 0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x3, 0x2, 0x2, 
    0x2, 0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x7, 0x22, 0x2, 
    0x2, 0x2f8, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x3f, 0x2, 
    0x2, 0x2fa, 0x2fc, 0x7, 0x49, 0x2, 0x2, 0x2fb, 0x2fd, 0x5, 0x6c, 0x37, 
    0x2, 0x2fc, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fd, 0x3, 0x2, 0x2, 
    0x2, 0x2fd, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x302, 0x7, 0x14, 0x2, 
    0x2, 0x2ff, 0x303, 0x5, 0xa, 0x6, 0x2, 0x300, 0x303, 0x5, 0x7c, 0x3f, 
    0x2, 0x301, 0x303, 0x5, 0x32, 0x1a, 0x2, 0x302, 0x2ff, 0x3, 0x2, 0x2, 
    0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x301, 0x3, 0x2, 0x2, 
    0x2, 0x303, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x304, 0x305, 0x7, 0x43, 0x2, 
    0x2, 0x305, 0x306, 0x7, 0x1d, 0x2, 0x2, 0x306, 0x307, 0x5, 0x3a, 0x1e, 
    0x2, 0x307, 0x310, 0x7, 0x41, 0x2, 0x2, 0x308, 0x30d, 0x5, 0x92, 0x4a, 
    0x2, 0x309, 0x30a, 0x7, 0x40, 0x2, 0x2, 0x30a, 0x30c, 0x5, 0x92, 0x4a, 
    0x2, 0x30b, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30f, 0x3, 0x2, 0x2, 
    0x2, 0x30d, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x30e, 0x311, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x308, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x312, 0x3, 0x2, 0x2, 0x2, 0x312, 0x31b, 0x7, 0x41, 0x2, 
    0x2, 0x313, 0x318, 0x5, 0x94, 0x4b, 0x2, 0x314, 0x315, 0x7, 0x40, 0x2, 
    0x2, 0x315, 0x317, 0x5, 0x94, 0x4b, 0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 
    0x2, 0x317, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x318, 0x316, 0x3, 0x2, 0x2, 
    0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31c, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x313, 0x3, 0x2, 0x2, 
    0x2, 0x31b, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x326, 0x3, 0x2, 0x2, 
    0x2, 0x31d, 0x31e, 0x7, 0x41, 0x2, 0x2, 0x31e, 0x323, 0x5, 0x96, 0x4c, 
    0x2, 0x31f, 0x320, 0x7, 0x40, 0x2, 0x2, 0x320, 0x322, 0x5, 0x96, 0x4c, 
    0x2, 0x321, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x322, 0x325, 0x3, 0x2, 0x2, 
    0x2, 0x323, 0x321, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 0x2, 
    0x2, 0x324, 0x327, 0x3, 0x2, 0x2, 0x2, 0x325, 0x323, 0x3, 0x2, 0x2, 
    0x2, 0x326, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 0x3, 0x2, 0x2, 
    0x2, 0x327, 0x328, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 0x7, 0x1e, 0x2, 
    0x2, 0x329, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 0x5, 0x3a, 0x1e, 
    0x2, 0x32b, 0x91, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x7, 0x4a, 0x2, 
    0x2, 0x32d, 0x32e, 0x7, 0x1d, 0x2, 0x2, 0x32e, 0x32f, 0x5, 0x8, 0x5, 
    0x2, 0x32f, 0x330, 0x7, 0x1e, 0x2, 0x2, 0x330, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x331, 0x332, 0x7, 0x4a, 0x2, 0x2, 0x332, 0x333, 0x7, 0x1d, 0x2, 
    0x2, 0x333, 0x334, 0x5, 0x8, 0x5, 0x2, 0x334, 0x335, 0x7, 0x1e, 0x2, 
    0x2, 0x335, 0x95, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x7, 0x4a, 0x2, 
    0x2, 0x337, 0x97, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 0x9, 0x9, 0x2, 0x2, 
    0x339, 0x99, 0x3, 0x2, 0x2, 0x2, 0x50, 0x9d, 0xa6, 0xc8, 0xd2, 0xd7, 
    0xea, 0x10e, 0x11b, 0x11d, 0x121, 0x129, 0x12d, 0x136, 0x141, 0x150, 
    0x16a, 0x176, 0x17e, 0x189, 0x191, 0x195, 0x19c, 0x1bf, 0x1c3, 0x1c8, 
    0x1cf, 0x1d2, 0x1d8, 0x1db, 0x1dd, 0x1e2, 0x1e7, 0x1f2, 0x1f7, 0x1fd, 
    0x202, 0x206, 0x21b, 0x223, 0x238, 0x23c, 0x23e, 0x245, 0x24e, 0x256, 
    0x25a, 0x264, 0x26e, 0x275, 0x27f, 0x282, 0x289, 0x28e, 0x297, 0x29b, 
    0x2a0, 0x2a4, 0x2a8, 0x2b1, 0x2b6, 0x2b9, 0x2bb, 0x2c3, 0x2c6, 0x2c8, 
    0x2cd, 0x2d7, 0x2e3, 0x2ee, 0x2f5, 0x2fc, 0x302, 0x30d, 0x310, 0x318, 
    0x31b, 0x323, 0x326, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

XenonParser::Initializer XenonParser::_init;
