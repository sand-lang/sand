
// Generated from SandParser.g4 by ANTLR 4.8


#include "SandParserVisitor.h"

#include "SandParser.h"


using namespace antlrcpp;
using namespace antlr4;

SandParser::SandParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SandParser::~SandParser() {
  delete _interpreter;
}

std::string SandParser::getGrammarFileName() const {
  return "SandParser.g4";
}

const std::vector<std::string>& SandParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SandParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InstructionsContext ------------------------------------------------------------------

SandParser::InstructionsContext::InstructionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::EosContext* SandParser::InstructionsContext::eos() {
  return getRuleContext<SandParser::EosContext>(0);
}

std::vector<SandParser::StatementContext *> SandParser::InstructionsContext::statement() {
  return getRuleContexts<SandParser::StatementContext>();
}

SandParser::StatementContext* SandParser::InstructionsContext::statement(size_t i) {
  return getRuleContext<SandParser::StatementContext>(i);
}


size_t SandParser::InstructionsContext::getRuleIndex() const {
  return SandParser::RuleInstructions;
}


antlrcpp::Any SandParser::InstructionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitInstructions(this);
  else
    return visitor->visitChildren(this);
}

SandParser::InstructionsContext* SandParser::instructions() {
  InstructionsContext *_localctx = _tracker.createInstance<InstructionsContext>(_ctx, getState());
  enterRule(_localctx, 0, SandParser::RuleInstructions);
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
      ((1ULL << _la) & ((1ULL << SandParser::Add)
      | (1ULL << SandParser::Sub)
      | (1ULL << SandParser::Mul)
      | (1ULL << SandParser::Not)
      | (1ULL << SandParser::Neg)
      | (1ULL << SandParser::BitwiseAnd)
      | (1ULL << SandParser::OpeningParen)
      | (1ULL << SandParser::OpeningBrace)
      | (1ULL << SandParser::SizeOf)
      | (1ULL << SandParser::Class)
      | (1ULL << SandParser::Special)
      | (1ULL << SandParser::Union)
      | (1ULL << SandParser::Enum)
      | (1ULL << SandParser::Namespace)
      | (1ULL << SandParser::VariableDeclarator)
      | (1ULL << SandParser::If)
      | (1ULL << SandParser::While)
      | (1ULL << SandParser::Break)
      | (1ULL << SandParser::For)
      | (1ULL << SandParser::Function)
      | (1ULL << SandParser::Extern)
      | (1ULL << SandParser::Return)
      | (1ULL << SandParser::Alias))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SandParser::Attribute - 65))
      | (1ULL << (SandParser::Assembly - 65))
      | (1ULL << (SandParser::Import - 65))
      | (1ULL << (SandParser::True - 65))
      | (1ULL << (SandParser::False - 65))
      | (1ULL << (SandParser::NullLiteral - 65))
      | (1ULL << (SandParser::VariableName - 65))
      | (1ULL << (SandParser::StringLiteral - 65))
      | (1ULL << (SandParser::CharLiteral - 65))
      | (1ULL << (SandParser::DecimalLiteral - 65))
      | (1ULL << (SandParser::FloatingLiteral - 65))
      | (1ULL << (SandParser::ZeroLiteral - 65))
      | (1ULL << (SandParser::HexadecimalLiteral - 65))
      | (1ULL << (SandParser::BinaryLiteral - 65)))) != 0)) {
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

SandParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::BodyContext::OpeningBrace() {
  return getToken(SandParser::OpeningBrace, 0);
}

tree::TerminalNode* SandParser::BodyContext::ClosingBrace() {
  return getToken(SandParser::ClosingBrace, 0);
}

std::vector<SandParser::StatementContext *> SandParser::BodyContext::statement() {
  return getRuleContexts<SandParser::StatementContext>();
}

SandParser::StatementContext* SandParser::BodyContext::statement(size_t i) {
  return getRuleContext<SandParser::StatementContext>(i);
}


size_t SandParser::BodyContext::getRuleIndex() const {
  return SandParser::RuleBody;
}


antlrcpp::Any SandParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

SandParser::BodyContext* SandParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 2, SandParser::RuleBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(SandParser::OpeningBrace);
    setState(164);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SandParser::Add)
      | (1ULL << SandParser::Sub)
      | (1ULL << SandParser::Mul)
      | (1ULL << SandParser::Not)
      | (1ULL << SandParser::Neg)
      | (1ULL << SandParser::BitwiseAnd)
      | (1ULL << SandParser::OpeningParen)
      | (1ULL << SandParser::OpeningBrace)
      | (1ULL << SandParser::SizeOf)
      | (1ULL << SandParser::Class)
      | (1ULL << SandParser::Special)
      | (1ULL << SandParser::Union)
      | (1ULL << SandParser::Enum)
      | (1ULL << SandParser::Namespace)
      | (1ULL << SandParser::VariableDeclarator)
      | (1ULL << SandParser::If)
      | (1ULL << SandParser::While)
      | (1ULL << SandParser::Break)
      | (1ULL << SandParser::For)
      | (1ULL << SandParser::Function)
      | (1ULL << SandParser::Extern)
      | (1ULL << SandParser::Return)
      | (1ULL << SandParser::Alias))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SandParser::Attribute - 65))
      | (1ULL << (SandParser::Assembly - 65))
      | (1ULL << (SandParser::Import - 65))
      | (1ULL << (SandParser::True - 65))
      | (1ULL << (SandParser::False - 65))
      | (1ULL << (SandParser::NullLiteral - 65))
      | (1ULL << (SandParser::VariableName - 65))
      | (1ULL << (SandParser::StringLiteral - 65))
      | (1ULL << (SandParser::CharLiteral - 65))
      | (1ULL << (SandParser::DecimalLiteral - 65))
      | (1ULL << (SandParser::FloatingLiteral - 65))
      | (1ULL << (SandParser::ZeroLiteral - 65))
      | (1ULL << (SandParser::HexadecimalLiteral - 65))
      | (1ULL << (SandParser::BinaryLiteral - 65)))) != 0)) {
      setState(161);
      statement();
      setState(166);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(167);
    match(SandParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SandParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::FunctionContext* SandParser::StatementContext::function() {
  return getRuleContext<SandParser::FunctionContext>(0);
}

SandParser::NamespaceStatementContext* SandParser::StatementContext::namespaceStatement() {
  return getRuleContext<SandParser::NamespaceStatementContext>(0);
}

SandParser::ExpressionContext* SandParser::StatementContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::StatementContext::InstructionsSeparator() {
  return getToken(SandParser::InstructionsSeparator, 0);
}

SandParser::BodyContext* SandParser::StatementContext::body() {
  return getRuleContext<SandParser::BodyContext>(0);
}

SandParser::VariableDeclarationContext* SandParser::StatementContext::variableDeclaration() {
  return getRuleContext<SandParser::VariableDeclarationContext>(0);
}

SandParser::ReturnStatementContext* SandParser::StatementContext::returnStatement() {
  return getRuleContext<SandParser::ReturnStatementContext>(0);
}

SandParser::IfStatementContext* SandParser::StatementContext::ifStatement() {
  return getRuleContext<SandParser::IfStatementContext>(0);
}

SandParser::WhileStatementContext* SandParser::StatementContext::whileStatement() {
  return getRuleContext<SandParser::WhileStatementContext>(0);
}

SandParser::ForStatementContext* SandParser::StatementContext::forStatement() {
  return getRuleContext<SandParser::ForStatementContext>(0);
}

SandParser::BreakStatementContext* SandParser::StatementContext::breakStatement() {
  return getRuleContext<SandParser::BreakStatementContext>(0);
}

SandParser::SpecialClassStatementContext* SandParser::StatementContext::specialClassStatement() {
  return getRuleContext<SandParser::SpecialClassStatementContext>(0);
}

SandParser::ClassStatementContext* SandParser::StatementContext::classStatement() {
  return getRuleContext<SandParser::ClassStatementContext>(0);
}

SandParser::UnionStatementContext* SandParser::StatementContext::unionStatement() {
  return getRuleContext<SandParser::UnionStatementContext>(0);
}

SandParser::EnumStatementContext* SandParser::StatementContext::enumStatement() {
  return getRuleContext<SandParser::EnumStatementContext>(0);
}

SandParser::ImportStatementContext* SandParser::StatementContext::importStatement() {
  return getRuleContext<SandParser::ImportStatementContext>(0);
}

SandParser::AssemblyStatementContext* SandParser::StatementContext::assemblyStatement() {
  return getRuleContext<SandParser::AssemblyStatementContext>(0);
}

SandParser::AliasContext* SandParser::StatementContext::alias() {
  return getRuleContext<SandParser::AliasContext>(0);
}


size_t SandParser::StatementContext::getRuleIndex() const {
  return SandParser::RuleStatement;
}


antlrcpp::Any SandParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::StatementContext* SandParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, SandParser::RuleStatement);

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
      match(SandParser::InstructionsSeparator);
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
      match(SandParser::InstructionsSeparator);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(178);
      returnStatement();
      setState(179);
      match(SandParser::InstructionsSeparator);
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
      match(SandParser::InstructionsSeparator);
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
      match(SandParser::InstructionsSeparator);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(195);
      alias();
      setState(196);
      match(SandParser::InstructionsSeparator);
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

SandParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SandParser::ExpressionContext::getRuleIndex() const {
  return SandParser::RuleExpression;
}

void SandParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SuffixUnaryNegationExpressionContext ------------------------------------------------------------------

SandParser::ExpressionContext* SandParser::SuffixUnaryNegationExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::SuffixUnaryNegationExpressionContext::Not() {
  return getToken(SandParser::Not, 0);
}

SandParser::SuffixUnaryNegationExpressionContext::SuffixUnaryNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::SuffixUnaryNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitSuffixUnaryNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TernaryExpressionContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::TernaryExpressionContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::TernaryExpressionContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

tree::TerminalNode* SandParser::TernaryExpressionContext::TernaryOperator() {
  return getToken(SandParser::TernaryOperator, 0);
}

tree::TerminalNode* SandParser::TernaryExpressionContext::Colon() {
  return getToken(SandParser::Colon, 0);
}

SandParser::TernaryExpressionContext::TernaryExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::TernaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitTernaryExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryShiftOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::BinaryShiftOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::BinaryShiftOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::ShiftOperatorContext* SandParser::BinaryShiftOperationContext::shiftOperator() {
  return getRuleContext<SandParser::ShiftOperatorContext>(0);
}

SandParser::BinaryShiftOperationContext::BinaryShiftOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BinaryShiftOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBinaryShiftOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InParenExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::InParenExpressionContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

SandParser::ExpressionContext* SandParser::InParenExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::InParenExpressionContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}

SandParser::InParenExpressionContext::InParenExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::InParenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitInParenExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::BinaryOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::BinaryOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::OperatorStatementContext* SandParser::BinaryOperationContext::operatorStatement() {
  return getRuleContext<SandParser::OperatorStatementContext>(0);
}

SandParser::BinaryOperationContext::BinaryOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BinaryOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBinaryOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryBitwiseOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::BinaryBitwiseOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::BinaryBitwiseOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::BitwiseOperatorStatementContext* SandParser::BinaryBitwiseOperationContext::bitwiseOperatorStatement() {
  return getRuleContext<SandParser::BitwiseOperatorStatementContext>(0);
}

SandParser::BinaryBitwiseOperationContext::BinaryBitwiseOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BinaryBitwiseOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBinaryBitwiseOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryPositiveExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::UnaryPositiveExpressionContext::Add() {
  return getToken(SandParser::Add, 0);
}

SandParser::ExpressionContext* SandParser::UnaryPositiveExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::UnaryPositiveExpressionContext::UnaryPositiveExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::UnaryPositiveExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitUnaryPositiveExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NameExpressionContext ------------------------------------------------------------------

SandParser::ScopedNameContext* SandParser::NameExpressionContext::scopedName() {
  return getRuleContext<SandParser::ScopedNameContext>(0);
}

SandParser::NameExpressionContext::NameExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::NameExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitNameExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitwiseNegationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::BitwiseNegationExpressionContext::Neg() {
  return getToken(SandParser::Neg, 0);
}

SandParser::ExpressionContext* SandParser::BitwiseNegationExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::BitwiseNegationExpressionContext::BitwiseNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BitwiseNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IndexContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::IndexContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::IndexContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

tree::TerminalNode* SandParser::IndexContext::OpeningBracket() {
  return getToken(SandParser::OpeningBracket, 0);
}

tree::TerminalNode* SandParser::IndexContext::ClosingBracket() {
  return getToken(SandParser::ClosingBracket, 0);
}

SandParser::IndexContext::IndexContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

SandParser::ExpressionContext* SandParser::FunctionCallExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::FunctionCallExpressionContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

tree::TerminalNode* SandParser::FunctionCallExpressionContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}

SandParser::FunctionCallArgumentsContext* SandParser::FunctionCallExpressionContext::functionCallArguments() {
  return getRuleContext<SandParser::FunctionCallArgumentsContext>(0);
}

SandParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SizeofExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::SizeofExpressionContext::SizeOf() {
  return getToken(SandParser::SizeOf, 0);
}

SandParser::ExpressionContext* SandParser::SizeofExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::TypeContext* SandParser::SizeofExpressionContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

SandParser::SizeofExpressionContext::SizeofExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::SizeofExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitSizeofExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegationExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::UnaryNegationExpressionContext::Not() {
  return getToken(SandParser::Not, 0);
}

SandParser::ExpressionContext* SandParser::UnaryNegationExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::UnaryNegationExpressionContext::UnaryNegationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::UnaryNegationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitUnaryNegationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionExpressionContext ------------------------------------------------------------------

SandParser::FunctionContext* SandParser::FunctionExpressionContext::function() {
  return getRuleContext<SandParser::FunctionContext>(0);
}

SandParser::FunctionExpressionContext::FunctionExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::FunctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PropertyExpressionContext ------------------------------------------------------------------

SandParser::ExpressionContext* SandParser::PropertyExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::NameContext* SandParser::PropertyExpressionContext::name() {
  return getRuleContext<SandParser::NameContext>(0);
}

tree::TerminalNode* SandParser::PropertyExpressionContext::Dot() {
  return getToken(SandParser::Dot, 0);
}

tree::TerminalNode* SandParser::PropertyExpressionContext::Arrow() {
  return getToken(SandParser::Arrow, 0);
}

SandParser::PropertyExpressionContext::PropertyExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::PropertyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitPropertyExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassInstantiationExpressionContext ------------------------------------------------------------------

SandParser::ClassTypeNameContext* SandParser::ClassInstantiationExpressionContext::classTypeName() {
  return getRuleContext<SandParser::ClassTypeNameContext>(0);
}

tree::TerminalNode* SandParser::ClassInstantiationExpressionContext::OpeningBrace() {
  return getToken(SandParser::OpeningBrace, 0);
}

tree::TerminalNode* SandParser::ClassInstantiationExpressionContext::ClosingBrace() {
  return getToken(SandParser::ClosingBrace, 0);
}

SandParser::ClassInstantiationPropertiesContext* SandParser::ClassInstantiationExpressionContext::classInstantiationProperties() {
  return getRuleContext<SandParser::ClassInstantiationPropertiesContext>(0);
}

SandParser::ClassInstantiationExpressionContext::ClassInstantiationExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::ClassInstantiationExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryComparisonOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::BinaryComparisonOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::BinaryComparisonOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::ComparisonOperatorStatementContext* SandParser::BinaryComparisonOperationContext::comparisonOperatorStatement() {
  return getRuleContext<SandParser::ComparisonOperatorStatementContext>(0);
}

SandParser::BinaryComparisonOperationContext::BinaryComparisonOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BinaryComparisonOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBinaryComparisonOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DereferenceExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::DereferenceExpressionContext::Mul() {
  return getToken(SandParser::Mul, 0);
}

SandParser::ExpressionContext* SandParser::DereferenceExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::DereferenceExpressionContext::DereferenceExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::DereferenceExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitDereferenceExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::EqualityOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::EqualityOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::EqualityOperatorStatementContext* SandParser::EqualityOperationContext::equalityOperatorStatement() {
  return getRuleContext<SandParser::EqualityOperatorStatementContext>(0);
}

SandParser::EqualityOperationContext::EqualityOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::EqualityOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LiteralDeclarationContext ------------------------------------------------------------------

SandParser::LiteralContext* SandParser::LiteralDeclarationContext::literal() {
  return getRuleContext<SandParser::LiteralContext>(0);
}

SandParser::LiteralDeclarationContext::LiteralDeclarationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::LiteralDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitLiteralDeclaration(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PointerExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::PointerExpressionContext::BitwiseAnd() {
  return getToken(SandParser::BitwiseAnd, 0);
}

SandParser::ExpressionContext* SandParser::PointerExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::PointerExpressionContext::PointerExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::PointerExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitPointerExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryNegativeExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SandParser::UnaryNegativeExpressionContext::Sub() {
  return getToken(SandParser::Sub, 0);
}

SandParser::ExpressionContext* SandParser::UnaryNegativeExpressionContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::UnaryNegativeExpressionContext::UnaryNegativeExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::UnaryNegativeExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitUnaryNegativeExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryMultiplicativeOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::BinaryMultiplicativeOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::BinaryMultiplicativeOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::MultiplicativeOperatorStatementContext* SandParser::BinaryMultiplicativeOperationContext::multiplicativeOperatorStatement() {
  return getRuleContext<SandParser::MultiplicativeOperatorStatementContext>(0);
}

SandParser::BinaryMultiplicativeOperationContext::BinaryMultiplicativeOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BinaryMultiplicativeOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBinaryMultiplicativeOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BinaryConditionalOperationContext ------------------------------------------------------------------

std::vector<SandParser::ExpressionContext *> SandParser::BinaryConditionalOperationContext::expression() {
  return getRuleContexts<SandParser::ExpressionContext>();
}

SandParser::ExpressionContext* SandParser::BinaryConditionalOperationContext::expression(size_t i) {
  return getRuleContext<SandParser::ExpressionContext>(i);
}

SandParser::ConditionalOperatorStatementContext* SandParser::BinaryConditionalOperationContext::conditionalOperatorStatement() {
  return getRuleContext<SandParser::ConditionalOperatorStatementContext>(0);
}

SandParser::BinaryConditionalOperationContext::BinaryConditionalOperationContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::BinaryConditionalOperationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBinaryConditionalOperation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeCastContext ------------------------------------------------------------------

SandParser::ExpressionContext* SandParser::TypeCastContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::TypeCastContext::As() {
  return getToken(SandParser::As, 0);
}

SandParser::TypeContext* SandParser::TypeCastContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

SandParser::TypeCastContext::TypeCastContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::TypeCastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitTypeCast(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ExpressionContext* SandParser::expression() {
   return expression(0);
}

SandParser::ExpressionContext* SandParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SandParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  SandParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, SandParser::RuleExpression, precedence);

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
      match(SandParser::OpeningParen);
      setState(202);
      expression(0);
      setState(203);
      match(SandParser::ClosingParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SizeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(205);
      match(SandParser::SizeOf);
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
      match(SandParser::OpeningBrace);
      setState(213);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SandParser::VariableName) {
        setState(212);
        classInstantiationProperties();
      }
      setState(215);
      match(SandParser::ClosingBrace);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<UnaryNegativeExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(217);
      match(SandParser::Sub);
      setState(218);
      expression(19);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<UnaryPositiveExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(219);
      match(SandParser::Add);
      setState(220);
      expression(18);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<UnaryNegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(221);
      match(SandParser::Not);
      setState(222);
      expression(17);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BitwiseNegationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(223);
      match(SandParser::Neg);
      setState(224);
      expression(16);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<PointerExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(225);
      match(SandParser::BitwiseAnd);
      setState(226);
      expression(15);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<DereferenceExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(227);
      match(SandParser::Mul);
      setState(228);
      expression(14);
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
    setState(289);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(287);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(234);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(235);
          multiplicativeOperatorStatement();
          setState(236);
          expression(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(239);
          operatorStatement();
          setState(240);
          expression(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryBitwiseOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(242);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(243);
          bitwiseOperatorStatement();
          setState(244);
          expression(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryShiftOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(246);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(247);
          shiftOperator();
          setState(248);
          expression(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryComparisonOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(250);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(251);
          comparisonOperatorStatement();
          setState(252);
          expression(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BinaryConditionalOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(254);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(255);
          conditionalOperatorStatement();
          setState(256);
          expression(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<TernaryExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(258);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(259);
          match(SandParser::TernaryOperator);
          setState(260);
          expression(0);
          setState(261);
          match(SandParser::Colon);
          setState(262);
          expression(2);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<EqualityOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(264);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(265);
          equalityOperatorStatement();
          setState(266);
          expression(1);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<PropertyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(268);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(269);
          _la = _input->LA(1);
          if (!(_la == SandParser::Dot

          || _la == SandParser::Arrow)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(270);
          name();
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(271);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(272);
          match(SandParser::OpeningParen);
          setState(274);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SandParser::Add)
            | (1ULL << SandParser::Sub)
            | (1ULL << SandParser::Mul)
            | (1ULL << SandParser::Not)
            | (1ULL << SandParser::Neg)
            | (1ULL << SandParser::BitwiseAnd)
            | (1ULL << SandParser::OpeningParen)
            | (1ULL << SandParser::SizeOf)
            | (1ULL << SandParser::Function)
            | (1ULL << SandParser::Extern))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (SandParser::Attribute - 65))
            | (1ULL << (SandParser::True - 65))
            | (1ULL << (SandParser::False - 65))
            | (1ULL << (SandParser::NullLiteral - 65))
            | (1ULL << (SandParser::VariableName - 65))
            | (1ULL << (SandParser::StringLiteral - 65))
            | (1ULL << (SandParser::CharLiteral - 65))
            | (1ULL << (SandParser::DecimalLiteral - 65))
            | (1ULL << (SandParser::FloatingLiteral - 65))
            | (1ULL << (SandParser::ZeroLiteral - 65))
            | (1ULL << (SandParser::HexadecimalLiteral - 65))
            | (1ULL << (SandParser::BinaryLiteral - 65)))) != 0)) {
            setState(273);
            functionCallArguments();
          }
          setState(276);
          match(SandParser::ClosingParen);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<IndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(277);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(278);
          match(SandParser::OpeningBracket);
          setState(279);
          expression(0);
          setState(280);
          match(SandParser::ClosingBracket);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<SuffixUnaryNegationExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(282);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(283);
          match(SandParser::Not);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<TypeCastContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(284);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(285);
          match(SandParser::As);
          setState(286);
          type(0);
          break;
        }

        } 
      }
      setState(291);
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

SandParser::ScopedNameContext::ScopedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::NameContext* SandParser::ScopedNameContext::name() {
  return getRuleContext<SandParser::NameContext>(0);
}

SandParser::ScopeResolverContext* SandParser::ScopedNameContext::scopeResolver() {
  return getRuleContext<SandParser::ScopeResolverContext>(0);
}


size_t SandParser::ScopedNameContext::getRuleIndex() const {
  return SandParser::RuleScopedName;
}


antlrcpp::Any SandParser::ScopedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitScopedName(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ScopedNameContext* SandParser::scopedName() {
  ScopedNameContext *_localctx = _tracker.createInstance<ScopedNameContext>(_ctx, getState());
  enterRule(_localctx, 8, SandParser::RuleScopedName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(292);
      scopeResolver();
      break;
    }

    }
    setState(295);
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

SandParser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::NameContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

std::vector<SandParser::ClassTypeNameGenericsContext *> SandParser::NameContext::classTypeNameGenerics() {
  return getRuleContexts<SandParser::ClassTypeNameGenericsContext>();
}

SandParser::ClassTypeNameGenericsContext* SandParser::NameContext::classTypeNameGenerics(size_t i) {
  return getRuleContext<SandParser::ClassTypeNameGenericsContext>(i);
}


size_t SandParser::NameContext::getRuleIndex() const {
  return SandParser::RuleName;
}


antlrcpp::Any SandParser::NameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitName(this);
  else
    return visitor->visitChildren(this);
}

SandParser::NameContext* SandParser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 10, SandParser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(297);
    match(SandParser::VariableName);
    setState(301);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(298);
        classTypeNameGenerics(); 
      }
      setState(303);
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

SandParser::ScopedNameNoGenericContext::ScopedNameNoGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::NameNoGenericContext* SandParser::ScopedNameNoGenericContext::nameNoGeneric() {
  return getRuleContext<SandParser::NameNoGenericContext>(0);
}

SandParser::ScopeResolverContext* SandParser::ScopedNameNoGenericContext::scopeResolver() {
  return getRuleContext<SandParser::ScopeResolverContext>(0);
}


size_t SandParser::ScopedNameNoGenericContext::getRuleIndex() const {
  return SandParser::RuleScopedNameNoGeneric;
}


antlrcpp::Any SandParser::ScopedNameNoGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitScopedNameNoGeneric(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ScopedNameNoGenericContext* SandParser::scopedNameNoGeneric() {
  ScopedNameNoGenericContext *_localctx = _tracker.createInstance<ScopedNameNoGenericContext>(_ctx, getState());
  enterRule(_localctx, 12, SandParser::RuleScopedNameNoGeneric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(304);
      scopeResolver();
      break;
    }

    }
    setState(307);
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

SandParser::NameNoGenericContext::NameNoGenericContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::NameNoGenericContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}


size_t SandParser::NameNoGenericContext::getRuleIndex() const {
  return SandParser::RuleNameNoGeneric;
}


antlrcpp::Any SandParser::NameNoGenericContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitNameNoGeneric(this);
  else
    return visitor->visitChildren(this);
}

SandParser::NameNoGenericContext* SandParser::nameNoGeneric() {
  NameNoGenericContext *_localctx = _tracker.createInstance<NameNoGenericContext>(_ctx, getState());
  enterRule(_localctx, 14, SandParser::RuleNameNoGeneric);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(309);
    match(SandParser::VariableName);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeResolverContext ------------------------------------------------------------------

SandParser::ScopeResolverContext::ScopeResolverContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::NameContext* SandParser::ScopeResolverContext::name() {
  return getRuleContext<SandParser::NameContext>(0);
}

tree::TerminalNode* SandParser::ScopeResolverContext::ScopeResolver() {
  return getToken(SandParser::ScopeResolver, 0);
}

SandParser::ScopeResolverContext* SandParser::ScopeResolverContext::scopeResolver() {
  return getRuleContext<SandParser::ScopeResolverContext>(0);
}


size_t SandParser::ScopeResolverContext::getRuleIndex() const {
  return SandParser::RuleScopeResolver;
}


antlrcpp::Any SandParser::ScopeResolverContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitScopeResolver(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ScopeResolverContext* SandParser::scopeResolver() {
  ScopeResolverContext *_localctx = _tracker.createInstance<ScopeResolverContext>(_ctx, getState());
  enterRule(_localctx, 16, SandParser::RuleScopeResolver);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    name();
    setState(312);
    match(SandParser::ScopeResolver);
    setState(314);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(313);
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

SandParser::MultiplicativeOperatorStatementContext::MultiplicativeOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::MultiplicativeOperatorStatementContext::Mul() {
  return getToken(SandParser::Mul, 0);
}

tree::TerminalNode* SandParser::MultiplicativeOperatorStatementContext::Div() {
  return getToken(SandParser::Div, 0);
}

tree::TerminalNode* SandParser::MultiplicativeOperatorStatementContext::Mod() {
  return getToken(SandParser::Mod, 0);
}


size_t SandParser::MultiplicativeOperatorStatementContext::getRuleIndex() const {
  return SandParser::RuleMultiplicativeOperatorStatement;
}


antlrcpp::Any SandParser::MultiplicativeOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::MultiplicativeOperatorStatementContext* SandParser::multiplicativeOperatorStatement() {
  MultiplicativeOperatorStatementContext *_localctx = _tracker.createInstance<MultiplicativeOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, SandParser::RuleMultiplicativeOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SandParser::Mul)
      | (1ULL << SandParser::Div)
      | (1ULL << SandParser::Mod))) != 0))) {
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

SandParser::OperatorStatementContext::OperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::OperatorStatementContext::Add() {
  return getToken(SandParser::Add, 0);
}

tree::TerminalNode* SandParser::OperatorStatementContext::Sub() {
  return getToken(SandParser::Sub, 0);
}


size_t SandParser::OperatorStatementContext::getRuleIndex() const {
  return SandParser::RuleOperatorStatement;
}


antlrcpp::Any SandParser::OperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::OperatorStatementContext* SandParser::operatorStatement() {
  OperatorStatementContext *_localctx = _tracker.createInstance<OperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, SandParser::RuleOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    _la = _input->LA(1);
    if (!(_la == SandParser::Add

    || _la == SandParser::Sub)) {
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

SandParser::BitwiseOperatorStatementContext::BitwiseOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::BitwiseOperatorStatementContext::Xor() {
  return getToken(SandParser::Xor, 0);
}

tree::TerminalNode* SandParser::BitwiseOperatorStatementContext::BitwiseOr() {
  return getToken(SandParser::BitwiseOr, 0);
}

tree::TerminalNode* SandParser::BitwiseOperatorStatementContext::BitwiseAnd() {
  return getToken(SandParser::BitwiseAnd, 0);
}


size_t SandParser::BitwiseOperatorStatementContext::getRuleIndex() const {
  return SandParser::RuleBitwiseOperatorStatement;
}


antlrcpp::Any SandParser::BitwiseOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBitwiseOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::BitwiseOperatorStatementContext* SandParser::bitwiseOperatorStatement() {
  BitwiseOperatorStatementContext *_localctx = _tracker.createInstance<BitwiseOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, SandParser::RuleBitwiseOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SandParser::Xor)
      | (1ULL << SandParser::BitwiseOr)
      | (1ULL << SandParser::BitwiseAnd))) != 0))) {
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

SandParser::ShiftOperatorContext::ShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::ArithmeticRightShiftOperatorContext* SandParser::ShiftOperatorContext::arithmeticRightShiftOperator() {
  return getRuleContext<SandParser::ArithmeticRightShiftOperatorContext>(0);
}

SandParser::LogicalRightShiftOperatorContext* SandParser::ShiftOperatorContext::logicalRightShiftOperator() {
  return getRuleContext<SandParser::LogicalRightShiftOperatorContext>(0);
}

SandParser::LeftShiftOperatorContext* SandParser::ShiftOperatorContext::leftShiftOperator() {
  return getRuleContext<SandParser::LeftShiftOperatorContext>(0);
}


size_t SandParser::ShiftOperatorContext::getRuleIndex() const {
  return SandParser::RuleShiftOperator;
}


antlrcpp::Any SandParser::ShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ShiftOperatorContext* SandParser::shiftOperator() {
  ShiftOperatorContext *_localctx = _tracker.createInstance<ShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 24, SandParser::RuleShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(322);
      arithmeticRightShiftOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(323);
      logicalRightShiftOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(324);
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

SandParser::ArithmeticRightShiftOperatorContext::ArithmeticRightShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::ArithmeticRightShiftOperatorContext::GreaterThan() {
  return getTokens(SandParser::GreaterThan);
}

tree::TerminalNode* SandParser::ArithmeticRightShiftOperatorContext::GreaterThan(size_t i) {
  return getToken(SandParser::GreaterThan, i);
}


size_t SandParser::ArithmeticRightShiftOperatorContext::getRuleIndex() const {
  return SandParser::RuleArithmeticRightShiftOperator;
}


antlrcpp::Any SandParser::ArithmeticRightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ArithmeticRightShiftOperatorContext* SandParser::arithmeticRightShiftOperator() {
  ArithmeticRightShiftOperatorContext *_localctx = _tracker.createInstance<ArithmeticRightShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 26, SandParser::RuleArithmeticRightShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(SandParser::GreaterThan);
    setState(328);
    match(SandParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalRightShiftOperatorContext ------------------------------------------------------------------

SandParser::LogicalRightShiftOperatorContext::LogicalRightShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::LogicalRightShiftOperatorContext::GreaterThan() {
  return getTokens(SandParser::GreaterThan);
}

tree::TerminalNode* SandParser::LogicalRightShiftOperatorContext::GreaterThan(size_t i) {
  return getToken(SandParser::GreaterThan, i);
}


size_t SandParser::LogicalRightShiftOperatorContext::getRuleIndex() const {
  return SandParser::RuleLogicalRightShiftOperator;
}


antlrcpp::Any SandParser::LogicalRightShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitLogicalRightShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::LogicalRightShiftOperatorContext* SandParser::logicalRightShiftOperator() {
  LogicalRightShiftOperatorContext *_localctx = _tracker.createInstance<LogicalRightShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 28, SandParser::RuleLogicalRightShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(SandParser::GreaterThan);
    setState(331);
    match(SandParser::GreaterThan);
    setState(332);
    match(SandParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftShiftOperatorContext ------------------------------------------------------------------

SandParser::LeftShiftOperatorContext::LeftShiftOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::LeftShiftOperatorContext::LessThan() {
  return getTokens(SandParser::LessThan);
}

tree::TerminalNode* SandParser::LeftShiftOperatorContext::LessThan(size_t i) {
  return getToken(SandParser::LessThan, i);
}


size_t SandParser::LeftShiftOperatorContext::getRuleIndex() const {
  return SandParser::RuleLeftShiftOperator;
}


antlrcpp::Any SandParser::LeftShiftOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitLeftShiftOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::LeftShiftOperatorContext* SandParser::leftShiftOperator() {
  LeftShiftOperatorContext *_localctx = _tracker.createInstance<LeftShiftOperatorContext>(_ctx, getState());
  enterRule(_localctx, 30, SandParser::RuleLeftShiftOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    match(SandParser::LessThan);
    setState(335);
    match(SandParser::LessThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftEqualOperatorContext ------------------------------------------------------------------

SandParser::ShiftEqualOperatorContext::ShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::ArithmeticRightShiftEqualOperatorContext* SandParser::ShiftEqualOperatorContext::arithmeticRightShiftEqualOperator() {
  return getRuleContext<SandParser::ArithmeticRightShiftEqualOperatorContext>(0);
}

SandParser::LogicalRightShiftEqualOperatorContext* SandParser::ShiftEqualOperatorContext::logicalRightShiftEqualOperator() {
  return getRuleContext<SandParser::LogicalRightShiftEqualOperatorContext>(0);
}

SandParser::LeftShiftEqualOperatorContext* SandParser::ShiftEqualOperatorContext::leftShiftEqualOperator() {
  return getRuleContext<SandParser::LeftShiftEqualOperatorContext>(0);
}


size_t SandParser::ShiftEqualOperatorContext::getRuleIndex() const {
  return SandParser::RuleShiftEqualOperator;
}


antlrcpp::Any SandParser::ShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ShiftEqualOperatorContext* SandParser::shiftEqualOperator() {
  ShiftEqualOperatorContext *_localctx = _tracker.createInstance<ShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 32, SandParser::RuleShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(340);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(337);
      arithmeticRightShiftEqualOperator();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(338);
      logicalRightShiftEqualOperator();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(339);
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

SandParser::ArithmeticRightShiftEqualOperatorContext::ArithmeticRightShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::ArithmeticRightShiftEqualOperatorContext::GreaterThan() {
  return getTokens(SandParser::GreaterThan);
}

tree::TerminalNode* SandParser::ArithmeticRightShiftEqualOperatorContext::GreaterThan(size_t i) {
  return getToken(SandParser::GreaterThan, i);
}

tree::TerminalNode* SandParser::ArithmeticRightShiftEqualOperatorContext::Equal() {
  return getToken(SandParser::Equal, 0);
}


size_t SandParser::ArithmeticRightShiftEqualOperatorContext::getRuleIndex() const {
  return SandParser::RuleArithmeticRightShiftEqualOperator;
}


antlrcpp::Any SandParser::ArithmeticRightShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitArithmeticRightShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ArithmeticRightShiftEqualOperatorContext* SandParser::arithmeticRightShiftEqualOperator() {
  ArithmeticRightShiftEqualOperatorContext *_localctx = _tracker.createInstance<ArithmeticRightShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 34, SandParser::RuleArithmeticRightShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(SandParser::GreaterThan);
    setState(343);
    match(SandParser::GreaterThan);
    setState(344);
    match(SandParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalRightShiftEqualOperatorContext ------------------------------------------------------------------

SandParser::LogicalRightShiftEqualOperatorContext::LogicalRightShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::LogicalRightShiftEqualOperatorContext::GreaterThan() {
  return getTokens(SandParser::GreaterThan);
}

tree::TerminalNode* SandParser::LogicalRightShiftEqualOperatorContext::GreaterThan(size_t i) {
  return getToken(SandParser::GreaterThan, i);
}

tree::TerminalNode* SandParser::LogicalRightShiftEqualOperatorContext::Equal() {
  return getToken(SandParser::Equal, 0);
}


size_t SandParser::LogicalRightShiftEqualOperatorContext::getRuleIndex() const {
  return SandParser::RuleLogicalRightShiftEqualOperator;
}


antlrcpp::Any SandParser::LogicalRightShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitLogicalRightShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::LogicalRightShiftEqualOperatorContext* SandParser::logicalRightShiftEqualOperator() {
  LogicalRightShiftEqualOperatorContext *_localctx = _tracker.createInstance<LogicalRightShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 36, SandParser::RuleLogicalRightShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(SandParser::GreaterThan);
    setState(347);
    match(SandParser::GreaterThan);
    setState(348);
    match(SandParser::GreaterThan);
    setState(349);
    match(SandParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LeftShiftEqualOperatorContext ------------------------------------------------------------------

SandParser::LeftShiftEqualOperatorContext::LeftShiftEqualOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::LeftShiftEqualOperatorContext::LessThan() {
  return getTokens(SandParser::LessThan);
}

tree::TerminalNode* SandParser::LeftShiftEqualOperatorContext::LessThan(size_t i) {
  return getToken(SandParser::LessThan, i);
}

tree::TerminalNode* SandParser::LeftShiftEqualOperatorContext::Equal() {
  return getToken(SandParser::Equal, 0);
}


size_t SandParser::LeftShiftEqualOperatorContext::getRuleIndex() const {
  return SandParser::RuleLeftShiftEqualOperator;
}


antlrcpp::Any SandParser::LeftShiftEqualOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitLeftShiftEqualOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::LeftShiftEqualOperatorContext* SandParser::leftShiftEqualOperator() {
  LeftShiftEqualOperatorContext *_localctx = _tracker.createInstance<LeftShiftEqualOperatorContext>(_ctx, getState());
  enterRule(_localctx, 38, SandParser::RuleLeftShiftEqualOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    match(SandParser::LessThan);
    setState(352);
    match(SandParser::LessThan);
    setState(353);
    match(SandParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GreaterThanOrEqualToOperatorContext ------------------------------------------------------------------

SandParser::GreaterThanOrEqualToOperatorContext::GreaterThanOrEqualToOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::GreaterThanOrEqualToOperatorContext::GreaterThan() {
  return getToken(SandParser::GreaterThan, 0);
}

tree::TerminalNode* SandParser::GreaterThanOrEqualToOperatorContext::Equal() {
  return getToken(SandParser::Equal, 0);
}


size_t SandParser::GreaterThanOrEqualToOperatorContext::getRuleIndex() const {
  return SandParser::RuleGreaterThanOrEqualToOperator;
}


antlrcpp::Any SandParser::GreaterThanOrEqualToOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitGreaterThanOrEqualToOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::GreaterThanOrEqualToOperatorContext* SandParser::greaterThanOrEqualToOperator() {
  GreaterThanOrEqualToOperatorContext *_localctx = _tracker.createInstance<GreaterThanOrEqualToOperatorContext>(_ctx, getState());
  enterRule(_localctx, 40, SandParser::RuleGreaterThanOrEqualToOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
    match(SandParser::GreaterThan);
    setState(356);
    match(SandParser::Equal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOperatorStatementContext ------------------------------------------------------------------

SandParser::ConditionalOperatorStatementContext::ConditionalOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ConditionalOperatorStatementContext::ConditionalOr() {
  return getToken(SandParser::ConditionalOr, 0);
}

tree::TerminalNode* SandParser::ConditionalOperatorStatementContext::ConditionalAnd() {
  return getToken(SandParser::ConditionalAnd, 0);
}


size_t SandParser::ConditionalOperatorStatementContext::getRuleIndex() const {
  return SandParser::RuleConditionalOperatorStatement;
}


antlrcpp::Any SandParser::ConditionalOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitConditionalOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ConditionalOperatorStatementContext* SandParser::conditionalOperatorStatement() {
  ConditionalOperatorStatementContext *_localctx = _tracker.createInstance<ConditionalOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 42, SandParser::RuleConditionalOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    _la = _input->LA(1);
    if (!(_la == SandParser::ConditionalOr

    || _la == SandParser::ConditionalAnd)) {
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

SandParser::ComparisonOperatorStatementContext::ComparisonOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ComparisonOperatorStatementContext::EqualTo() {
  return getToken(SandParser::EqualTo, 0);
}

tree::TerminalNode* SandParser::ComparisonOperatorStatementContext::NotEqualTo() {
  return getToken(SandParser::NotEqualTo, 0);
}

tree::TerminalNode* SandParser::ComparisonOperatorStatementContext::LessThanOrEqualTo() {
  return getToken(SandParser::LessThanOrEqualTo, 0);
}

SandParser::GreaterThanOrEqualToOperatorContext* SandParser::ComparisonOperatorStatementContext::greaterThanOrEqualToOperator() {
  return getRuleContext<SandParser::GreaterThanOrEqualToOperatorContext>(0);
}

tree::TerminalNode* SandParser::ComparisonOperatorStatementContext::LessThan() {
  return getToken(SandParser::LessThan, 0);
}

tree::TerminalNode* SandParser::ComparisonOperatorStatementContext::GreaterThan() {
  return getToken(SandParser::GreaterThan, 0);
}


size_t SandParser::ComparisonOperatorStatementContext::getRuleIndex() const {
  return SandParser::RuleComparisonOperatorStatement;
}


antlrcpp::Any SandParser::ComparisonOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitComparisonOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ComparisonOperatorStatementContext* SandParser::comparisonOperatorStatement() {
  ComparisonOperatorStatementContext *_localctx = _tracker.createInstance<ComparisonOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 44, SandParser::RuleComparisonOperatorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(366);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(360);
      match(SandParser::EqualTo);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(361);
      match(SandParser::NotEqualTo);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(362);
      match(SandParser::LessThanOrEqualTo);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(363);
      greaterThanOrEqualToOperator();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(364);
      match(SandParser::LessThan);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(365);
      match(SandParser::GreaterThan);
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

SandParser::EqualityOperatorStatementContext::EqualityOperatorStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::AddEqual() {
  return getToken(SandParser::AddEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::SubEqual() {
  return getToken(SandParser::SubEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::MulEqual() {
  return getToken(SandParser::MulEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::DivEqual() {
  return getToken(SandParser::DivEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::ModEqual() {
  return getToken(SandParser::ModEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::XorEqual() {
  return getToken(SandParser::XorEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::OrEqual() {
  return getToken(SandParser::OrEqual, 0);
}

tree::TerminalNode* SandParser::EqualityOperatorStatementContext::AndEqual() {
  return getToken(SandParser::AndEqual, 0);
}

SandParser::ShiftEqualOperatorContext* SandParser::EqualityOperatorStatementContext::shiftEqualOperator() {
  return getRuleContext<SandParser::ShiftEqualOperatorContext>(0);
}


size_t SandParser::EqualityOperatorStatementContext::getRuleIndex() const {
  return SandParser::RuleEqualityOperatorStatement;
}


antlrcpp::Any SandParser::EqualityOperatorStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitEqualityOperatorStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::EqualityOperatorStatementContext* SandParser::equalityOperatorStatement() {
  EqualityOperatorStatementContext *_localctx = _tracker.createInstance<EqualityOperatorStatementContext>(_ctx, getState());
  enterRule(_localctx, 46, SandParser::RuleEqualityOperatorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::Equal: {
        enterOuterAlt(_localctx, 1);
        setState(368);
        match(SandParser::Equal);
        break;
      }

      case SandParser::AddEqual: {
        enterOuterAlt(_localctx, 2);
        setState(369);
        match(SandParser::AddEqual);
        break;
      }

      case SandParser::SubEqual: {
        enterOuterAlt(_localctx, 3);
        setState(370);
        match(SandParser::SubEqual);
        break;
      }

      case SandParser::MulEqual: {
        enterOuterAlt(_localctx, 4);
        setState(371);
        match(SandParser::MulEqual);
        break;
      }

      case SandParser::DivEqual: {
        enterOuterAlt(_localctx, 5);
        setState(372);
        match(SandParser::DivEqual);
        break;
      }

      case SandParser::ModEqual: {
        enterOuterAlt(_localctx, 6);
        setState(373);
        match(SandParser::ModEqual);
        break;
      }

      case SandParser::XorEqual: {
        enterOuterAlt(_localctx, 7);
        setState(374);
        match(SandParser::XorEqual);
        break;
      }

      case SandParser::OrEqual: {
        enterOuterAlt(_localctx, 8);
        setState(375);
        match(SandParser::OrEqual);
        break;
      }

      case SandParser::AndEqual: {
        enterOuterAlt(_localctx, 9);
        setState(376);
        match(SandParser::AndEqual);
        break;
      }

      case SandParser::LessThan:
      case SandParser::GreaterThan: {
        enterOuterAlt(_localctx, 10);
        setState(377);
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

SandParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::BooleanLiteralContext* SandParser::LiteralContext::booleanLiteral() {
  return getRuleContext<SandParser::BooleanLiteralContext>(0);
}

SandParser::IntegerLiteralContext* SandParser::LiteralContext::integerLiteral() {
  return getRuleContext<SandParser::IntegerLiteralContext>(0);
}

SandParser::FloatingLiteralContext* SandParser::LiteralContext::floatingLiteral() {
  return getRuleContext<SandParser::FloatingLiteralContext>(0);
}

SandParser::StringLiteralContext* SandParser::LiteralContext::stringLiteral() {
  return getRuleContext<SandParser::StringLiteralContext>(0);
}

tree::TerminalNode* SandParser::LiteralContext::CharLiteral() {
  return getToken(SandParser::CharLiteral, 0);
}

tree::TerminalNode* SandParser::LiteralContext::NullLiteral() {
  return getToken(SandParser::NullLiteral, 0);
}


size_t SandParser::LiteralContext::getRuleIndex() const {
  return SandParser::RuleLiteral;
}


antlrcpp::Any SandParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

SandParser::LiteralContext* SandParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 48, SandParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(386);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::True:
      case SandParser::False: {
        enterOuterAlt(_localctx, 1);
        setState(380);
        booleanLiteral();
        break;
      }

      case SandParser::DecimalLiteral:
      case SandParser::ZeroLiteral:
      case SandParser::HexadecimalLiteral:
      case SandParser::BinaryLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(381);
        integerLiteral();
        break;
      }

      case SandParser::FloatingLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(382);
        floatingLiteral();
        break;
      }

      case SandParser::StringLiteral: {
        enterOuterAlt(_localctx, 4);
        setState(383);
        stringLiteral();
        break;
      }

      case SandParser::CharLiteral: {
        enterOuterAlt(_localctx, 5);
        setState(384);
        match(SandParser::CharLiteral);
        break;
      }

      case SandParser::NullLiteral: {
        enterOuterAlt(_localctx, 6);
        setState(385);
        match(SandParser::NullLiteral);
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

SandParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::BooleanLiteralContext::True() {
  return getToken(SandParser::True, 0);
}

tree::TerminalNode* SandParser::BooleanLiteralContext::False() {
  return getToken(SandParser::False, 0);
}


size_t SandParser::BooleanLiteralContext::getRuleIndex() const {
  return SandParser::RuleBooleanLiteral;
}


antlrcpp::Any SandParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

SandParser::BooleanLiteralContext* SandParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 50, SandParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    _la = _input->LA(1);
    if (!(_la == SandParser::True

    || _la == SandParser::False)) {
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

SandParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::IntegerLiteralContext::DecimalLiteral() {
  return getToken(SandParser::DecimalLiteral, 0);
}

tree::TerminalNode* SandParser::IntegerLiteralContext::ZeroLiteral() {
  return getToken(SandParser::ZeroLiteral, 0);
}

tree::TerminalNode* SandParser::IntegerLiteralContext::HexadecimalLiteral() {
  return getToken(SandParser::HexadecimalLiteral, 0);
}

tree::TerminalNode* SandParser::IntegerLiteralContext::BinaryLiteral() {
  return getToken(SandParser::BinaryLiteral, 0);
}


size_t SandParser::IntegerLiteralContext::getRuleIndex() const {
  return SandParser::RuleIntegerLiteral;
}


antlrcpp::Any SandParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

SandParser::IntegerLiteralContext* SandParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 52, SandParser::RuleIntegerLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    _la = _input->LA(1);
    if (!(((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (SandParser::DecimalLiteral - 75))
      | (1ULL << (SandParser::ZeroLiteral - 75))
      | (1ULL << (SandParser::HexadecimalLiteral - 75))
      | (1ULL << (SandParser::BinaryLiteral - 75)))) != 0))) {
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

SandParser::FloatingLiteralContext::FloatingLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::FloatingLiteralContext::FloatingLiteral() {
  return getToken(SandParser::FloatingLiteral, 0);
}


size_t SandParser::FloatingLiteralContext::getRuleIndex() const {
  return SandParser::RuleFloatingLiteral;
}


antlrcpp::Any SandParser::FloatingLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFloatingLiteral(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FloatingLiteralContext* SandParser::floatingLiteral() {
  FloatingLiteralContext *_localctx = _tracker.createInstance<FloatingLiteralContext>(_ctx, getState());
  enterRule(_localctx, 54, SandParser::RuleFloatingLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    match(SandParser::FloatingLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringLiteralContext ------------------------------------------------------------------

SandParser::StringLiteralContext::StringLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SandParser::StringLiteralContext::StringLiteral() {
  return getTokens(SandParser::StringLiteral);
}

tree::TerminalNode* SandParser::StringLiteralContext::StringLiteral(size_t i) {
  return getToken(SandParser::StringLiteral, i);
}


size_t SandParser::StringLiteralContext::getRuleIndex() const {
  return SandParser::RuleStringLiteral;
}


antlrcpp::Any SandParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}

SandParser::StringLiteralContext* SandParser::stringLiteral() {
  StringLiteralContext *_localctx = _tracker.createInstance<StringLiteralContext>(_ctx, getState());
  enterRule(_localctx, 56, SandParser::RuleStringLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(395); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(394);
              match(SandParser::StringLiteral);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(397); 
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

SandParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::VariableDeclarationContext::VariableDeclarator() {
  return getToken(SandParser::VariableDeclarator, 0);
}

tree::TerminalNode* SandParser::VariableDeclarationContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::VariableDeclarationContext::Colon() {
  return getToken(SandParser::Colon, 0);
}

SandParser::TypeContext* SandParser::VariableDeclarationContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::VariableDeclarationContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

SandParser::ExpressionContext* SandParser::VariableDeclarationContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}


size_t SandParser::VariableDeclarationContext::getRuleIndex() const {
  return SandParser::RuleVariableDeclaration;
}


antlrcpp::Any SandParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SandParser::VariableDeclarationContext* SandParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 58, SandParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    match(SandParser::VariableDeclarator);
    setState(400);
    match(SandParser::VariableName);
    setState(409);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::Colon: {
        setState(401);
        match(SandParser::Colon);
        setState(402);
        type(0);
        setState(405);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SandParser::Equal) {
          setState(403);
          match(SandParser::Equal);
          setState(404);
          expression(0);
        }
        break;
      }

      case SandParser::Equal: {
        setState(407);
        match(SandParser::Equal);
        setState(408);
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

SandParser::FunctionCallArgumentsContext::FunctionCallArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SandParser::FunctionCallArgumentContext *> SandParser::FunctionCallArgumentsContext::functionCallArgument() {
  return getRuleContexts<SandParser::FunctionCallArgumentContext>();
}

SandParser::FunctionCallArgumentContext* SandParser::FunctionCallArgumentsContext::functionCallArgument(size_t i) {
  return getRuleContext<SandParser::FunctionCallArgumentContext>(i);
}

std::vector<tree::TerminalNode *> SandParser::FunctionCallArgumentsContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::FunctionCallArgumentsContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::FunctionCallArgumentsContext::getRuleIndex() const {
  return SandParser::RuleFunctionCallArguments;
}


antlrcpp::Any SandParser::FunctionCallArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArguments(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionCallArgumentsContext* SandParser::functionCallArguments() {
  FunctionCallArgumentsContext *_localctx = _tracker.createInstance<FunctionCallArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 60, SandParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    functionCallArgument();
    setState(416);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SandParser::Comma) {
      setState(412);
      match(SandParser::Comma);
      setState(413);
      functionCallArgument();
      setState(418);
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

SandParser::FunctionCallArgumentContext::FunctionCallArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::ExpressionContext* SandParser::FunctionCallArgumentContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}


size_t SandParser::FunctionCallArgumentContext::getRuleIndex() const {
  return SandParser::RuleFunctionCallArgument;
}


antlrcpp::Any SandParser::FunctionCallArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallArgument(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionCallArgumentContext* SandParser::functionCallArgument() {
  FunctionCallArgumentContext *_localctx = _tracker.createInstance<FunctionCallArgumentContext>(_ctx, getState());
  enterRule(_localctx, 62, SandParser::RuleFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(419);
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

SandParser::OverloadableOperatorContext::OverloadableOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Add() {
  return getToken(SandParser::Add, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Sub() {
  return getToken(SandParser::Sub, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Mul() {
  return getToken(SandParser::Mul, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Div() {
  return getToken(SandParser::Div, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Mod() {
  return getToken(SandParser::Mod, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Not() {
  return getToken(SandParser::Not, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Xor() {
  return getToken(SandParser::Xor, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::BitwiseOr() {
  return getToken(SandParser::BitwiseOr, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::BitwiseAnd() {
  return getToken(SandParser::BitwiseAnd, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Neg() {
  return getToken(SandParser::Neg, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::AddEqual() {
  return getToken(SandParser::AddEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::SubEqual() {
  return getToken(SandParser::SubEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::MulEqual() {
  return getToken(SandParser::MulEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::DivEqual() {
  return getToken(SandParser::DivEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::ModEqual() {
  return getToken(SandParser::ModEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::XorEqual() {
  return getToken(SandParser::XorEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::OrEqual() {
  return getToken(SandParser::OrEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::AndEqual() {
  return getToken(SandParser::AndEqual, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::EqualTo() {
  return getToken(SandParser::EqualTo, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::NotEqualTo() {
  return getToken(SandParser::NotEqualTo, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::LessThan() {
  return getToken(SandParser::LessThan, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::LessThanOrEqualTo() {
  return getToken(SandParser::LessThanOrEqualTo, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::GreaterThan() {
  return getToken(SandParser::GreaterThan, 0);
}

SandParser::GreaterThanOrEqualToOperatorContext* SandParser::OverloadableOperatorContext::greaterThanOrEqualToOperator() {
  return getRuleContext<SandParser::GreaterThanOrEqualToOperatorContext>(0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::OpeningBracket() {
  return getToken(SandParser::OpeningBracket, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::ClosingBracket() {
  return getToken(SandParser::ClosingBracket, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Arrow() {
  return getToken(SandParser::Arrow, 0);
}

tree::TerminalNode* SandParser::OverloadableOperatorContext::Dot() {
  return getToken(SandParser::Dot, 0);
}

SandParser::ShiftOperatorContext* SandParser::OverloadableOperatorContext::shiftOperator() {
  return getRuleContext<SandParser::ShiftOperatorContext>(0);
}

SandParser::ShiftEqualOperatorContext* SandParser::OverloadableOperatorContext::shiftEqualOperator() {
  return getRuleContext<SandParser::ShiftEqualOperatorContext>(0);
}


size_t SandParser::OverloadableOperatorContext::getRuleIndex() const {
  return SandParser::RuleOverloadableOperator;
}


antlrcpp::Any SandParser::OverloadableOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitOverloadableOperator(this);
  else
    return visitor->visitChildren(this);
}

SandParser::OverloadableOperatorContext* SandParser::overloadableOperator() {
  OverloadableOperatorContext *_localctx = _tracker.createInstance<OverloadableOperatorContext>(_ctx, getState());
  enterRule(_localctx, 64, SandParser::RuleOverloadableOperator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(421);
      match(SandParser::Add);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(422);
      match(SandParser::Sub);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(423);
      match(SandParser::Mul);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(424);
      match(SandParser::Div);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(425);
      match(SandParser::Mod);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(426);
      match(SandParser::Not);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(427);
      match(SandParser::Add);
      setState(428);
      match(SandParser::Not);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(429);
      match(SandParser::Xor);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(430);
      match(SandParser::BitwiseOr);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(431);
      match(SandParser::BitwiseAnd);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(432);
      match(SandParser::Neg);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(433);
      match(SandParser::AddEqual);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(434);
      match(SandParser::SubEqual);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(435);
      match(SandParser::MulEqual);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(436);
      match(SandParser::DivEqual);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(437);
      match(SandParser::ModEqual);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(438);
      match(SandParser::XorEqual);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(439);
      match(SandParser::OrEqual);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(440);
      match(SandParser::AndEqual);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(441);
      match(SandParser::EqualTo);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(442);
      match(SandParser::NotEqualTo);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(443);
      match(SandParser::LessThan);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(444);
      match(SandParser::LessThanOrEqualTo);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(445);
      match(SandParser::GreaterThan);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(446);
      greaterThanOrEqualToOperator();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(447);
      match(SandParser::OpeningBracket);
      setState(448);
      match(SandParser::ClosingBracket);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(449);
      match(SandParser::Arrow);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(450);
      match(SandParser::Dot);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(451);
      shiftOperator();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(452);
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

SandParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::FunctionContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

SandParser::FunctionDeclarationContext* SandParser::FunctionContext::functionDeclaration() {
  return getRuleContext<SandParser::FunctionDeclarationContext>(0);
}

SandParser::BodyContext* SandParser::FunctionContext::body() {
  return getRuleContext<SandParser::BodyContext>(0);
}

tree::TerminalNode* SandParser::FunctionContext::InstructionsSeparator() {
  return getToken(SandParser::InstructionsSeparator, 0);
}

tree::TerminalNode* SandParser::FunctionContext::Extern() {
  return getToken(SandParser::Extern, 0);
}


size_t SandParser::FunctionContext::getRuleIndex() const {
  return SandParser::RuleFunction;
}


antlrcpp::Any SandParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionContext* SandParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 66, SandParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    attributes();
    setState(457);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Extern) {
      setState(456);
      match(SandParser::Extern);
    }
    setState(459);
    functionDeclaration();
    setState(462);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::OpeningBrace: {
        setState(460);
        body();
        break;
      }

      case SandParser::InstructionsSeparator: {
        setState(461);
        match(SandParser::InstructionsSeparator);
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

SandParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::Function() {
  return getToken(SandParser::Function, 0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::Destructor() {
  return getToken(SandParser::Destructor, 0);
}

SandParser::FunctionArgumentsContext* SandParser::FunctionDeclarationContext::functionArguments() {
  return getRuleContext<SandParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

SandParser::ClassGenericsContext* SandParser::FunctionDeclarationContext::classGenerics() {
  return getRuleContext<SandParser::ClassGenericsContext>(0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::Colon() {
  return getToken(SandParser::Colon, 0);
}

SandParser::TypeContext* SandParser::FunctionDeclarationContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

SandParser::OverloadableOperatorContext* SandParser::FunctionDeclarationContext::overloadableOperator() {
  return getRuleContext<SandParser::OverloadableOperatorContext>(0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::Cast() {
  return getToken(SandParser::Cast, 0);
}

SandParser::CastFunctionTypeContext* SandParser::FunctionDeclarationContext::castFunctionType() {
  return getRuleContext<SandParser::CastFunctionTypeContext>(0);
}

tree::TerminalNode* SandParser::FunctionDeclarationContext::Comma() {
  return getToken(SandParser::Comma, 0);
}

SandParser::FunctionVariadicArgumentContext* SandParser::FunctionDeclarationContext::functionVariadicArgument() {
  return getRuleContext<SandParser::FunctionVariadicArgumentContext>(0);
}


size_t SandParser::FunctionDeclarationContext::getRuleIndex() const {
  return SandParser::RuleFunctionDeclaration;
}


antlrcpp::Any SandParser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionDeclarationContext* SandParser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 68, SandParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    match(SandParser::Function);
    setState(493);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::Add:
      case SandParser::Sub:
      case SandParser::Mul:
      case SandParser::Div:
      case SandParser::Mod:
      case SandParser::Not:
      case SandParser::Neg:
      case SandParser::EqualTo:
      case SandParser::NotEqualTo:
      case SandParser::LessThanOrEqualTo:
      case SandParser::LessThan:
      case SandParser::GreaterThan:
      case SandParser::Xor:
      case SandParser::BitwiseOr:
      case SandParser::BitwiseAnd:
      case SandParser::AddEqual:
      case SandParser::SubEqual:
      case SandParser::MulEqual:
      case SandParser::DivEqual:
      case SandParser::ModEqual:
      case SandParser::XorEqual:
      case SandParser::OrEqual:
      case SandParser::AndEqual:
      case SandParser::OpeningParen:
      case SandParser::OpeningBracket:
      case SandParser::Dot:
      case SandParser::Arrow:
      case SandParser::Cast:
      case SandParser::VariableName: {
        setState(469);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
        case 1: {
          setState(465);
          overloadableOperator();
          break;
        }

        case 2: {
          setState(466);
          match(SandParser::Cast);
          setState(467);
          castFunctionType();
          break;
        }

        case 3: {
          setState(468);
          match(SandParser::VariableName);
          break;
        }

        }
        setState(472);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SandParser::LessThan) {
          setState(471);
          classGenerics();
        }
        setState(474);
        match(SandParser::OpeningParen);
        setState(483);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SandParser::Const:
          case SandParser::Function:
          case SandParser::VariableName: {
            setState(475);
            functionArguments();
            setState(478);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SandParser::Comma) {
              setState(476);
              match(SandParser::Comma);
              setState(477);
              functionVariadicArgument();
            }
            break;
          }

          case SandParser::ClosingParen:
          case SandParser::Variadic: {
            setState(481);
            _errHandler->sync(this);

            _la = _input->LA(1);
            if (_la == SandParser::Variadic) {
              setState(480);
              functionVariadicArgument();
            }
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(485);
        match(SandParser::ClosingParen);
        setState(488);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SandParser::Colon) {
          setState(486);
          match(SandParser::Colon);
          setState(487);
          type(0);
        }
        break;
      }

      case SandParser::Destructor: {
        setState(490);
        match(SandParser::Destructor);
        setState(491);
        match(SandParser::OpeningParen);
        setState(492);
        match(SandParser::ClosingParen);
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

SandParser::CastFunctionTypeContext::CastFunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::TypeContext* SandParser::CastFunctionTypeContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}


size_t SandParser::CastFunctionTypeContext::getRuleIndex() const {
  return SandParser::RuleCastFunctionType;
}


antlrcpp::Any SandParser::CastFunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitCastFunctionType(this);
  else
    return visitor->visitChildren(this);
}

SandParser::CastFunctionTypeContext* SandParser::castFunctionType() {
  CastFunctionTypeContext *_localctx = _tracker.createInstance<CastFunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 70, SandParser::RuleCastFunctionType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
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

SandParser::FunctionVariadicArgumentContext::FunctionVariadicArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::FunctionVariadicArgumentContext::Variadic() {
  return getToken(SandParser::Variadic, 0);
}


size_t SandParser::FunctionVariadicArgumentContext::getRuleIndex() const {
  return SandParser::RuleFunctionVariadicArgument;
}


antlrcpp::Any SandParser::FunctionVariadicArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionVariadicArgument(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionVariadicArgumentContext* SandParser::functionVariadicArgument() {
  FunctionVariadicArgumentContext *_localctx = _tracker.createInstance<FunctionVariadicArgumentContext>(_ctx, getState());
  enterRule(_localctx, 72, SandParser::RuleFunctionVariadicArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(SandParser::Variadic);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentsContext ------------------------------------------------------------------

SandParser::FunctionArgumentsContext::FunctionArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SandParser::FunctionArgumentContext *> SandParser::FunctionArgumentsContext::functionArgument() {
  return getRuleContexts<SandParser::FunctionArgumentContext>();
}

SandParser::FunctionArgumentContext* SandParser::FunctionArgumentsContext::functionArgument(size_t i) {
  return getRuleContext<SandParser::FunctionArgumentContext>(i);
}

std::vector<tree::TerminalNode *> SandParser::FunctionArgumentsContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::FunctionArgumentsContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::FunctionArgumentsContext::getRuleIndex() const {
  return SandParser::RuleFunctionArguments;
}


antlrcpp::Any SandParser::FunctionArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArguments(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionArgumentsContext* SandParser::functionArguments() {
  FunctionArgumentsContext *_localctx = _tracker.createInstance<FunctionArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 74, SandParser::RuleFunctionArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(499);
    functionArgument();
    setState(504);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(500);
        match(SandParser::Comma);
        setState(501);
        functionArgument(); 
      }
      setState(506);
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

SandParser::FunctionArgumentContext::FunctionArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::TypeContext* SandParser::FunctionArgumentContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::FunctionArgumentContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::FunctionArgumentContext::Colon() {
  return getToken(SandParser::Colon, 0);
}


size_t SandParser::FunctionArgumentContext::getRuleIndex() const {
  return SandParser::RuleFunctionArgument;
}


antlrcpp::Any SandParser::FunctionArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgument(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionArgumentContext* SandParser::functionArgument() {
  FunctionArgumentContext *_localctx = _tracker.createInstance<FunctionArgumentContext>(_ctx, getState());
  enterRule(_localctx, 76, SandParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      setState(507);
      match(SandParser::VariableName);
      setState(508);
      match(SandParser::Colon);
      break;
    }

    }
    setState(511);
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

SandParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ReturnStatementContext::Return() {
  return getToken(SandParser::Return, 0);
}

SandParser::ExpressionContext* SandParser::ReturnStatementContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}


size_t SandParser::ReturnStatementContext::getRuleIndex() const {
  return SandParser::RuleReturnStatement;
}


antlrcpp::Any SandParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ReturnStatementContext* SandParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 78, SandParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(SandParser::Return);
    setState(515);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SandParser::Add)
      | (1ULL << SandParser::Sub)
      | (1ULL << SandParser::Mul)
      | (1ULL << SandParser::Not)
      | (1ULL << SandParser::Neg)
      | (1ULL << SandParser::BitwiseAnd)
      | (1ULL << SandParser::OpeningParen)
      | (1ULL << SandParser::SizeOf)
      | (1ULL << SandParser::Function)
      | (1ULL << SandParser::Extern))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SandParser::Attribute - 65))
      | (1ULL << (SandParser::True - 65))
      | (1ULL << (SandParser::False - 65))
      | (1ULL << (SandParser::NullLiteral - 65))
      | (1ULL << (SandParser::VariableName - 65))
      | (1ULL << (SandParser::StringLiteral - 65))
      | (1ULL << (SandParser::CharLiteral - 65))
      | (1ULL << (SandParser::DecimalLiteral - 65))
      | (1ULL << (SandParser::FloatingLiteral - 65))
      | (1ULL << (SandParser::ZeroLiteral - 65))
      | (1ULL << (SandParser::HexadecimalLiteral - 65))
      | (1ULL << (SandParser::BinaryLiteral - 65)))) != 0)) {
      setState(514);
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

SandParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::IfStatementContext::If() {
  return getToken(SandParser::If, 0);
}

SandParser::StatementContext* SandParser::IfStatementContext::statement() {
  return getRuleContext<SandParser::StatementContext>(0);
}

SandParser::ExpressionContext* SandParser::IfStatementContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::VariableDeclarationContext* SandParser::IfStatementContext::variableDeclaration() {
  return getRuleContext<SandParser::VariableDeclarationContext>(0);
}

SandParser::ElseStatementContext* SandParser::IfStatementContext::elseStatement() {
  return getRuleContext<SandParser::ElseStatementContext>(0);
}


size_t SandParser::IfStatementContext::getRuleIndex() const {
  return SandParser::RuleIfStatement;
}


antlrcpp::Any SandParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::IfStatementContext* SandParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 80, SandParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(517);
    match(SandParser::If);
    setState(520);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::Add:
      case SandParser::Sub:
      case SandParser::Mul:
      case SandParser::Not:
      case SandParser::Neg:
      case SandParser::BitwiseAnd:
      case SandParser::OpeningParen:
      case SandParser::SizeOf:
      case SandParser::Function:
      case SandParser::Extern:
      case SandParser::Attribute:
      case SandParser::True:
      case SandParser::False:
      case SandParser::NullLiteral:
      case SandParser::VariableName:
      case SandParser::StringLiteral:
      case SandParser::CharLiteral:
      case SandParser::DecimalLiteral:
      case SandParser::FloatingLiteral:
      case SandParser::ZeroLiteral:
      case SandParser::HexadecimalLiteral:
      case SandParser::BinaryLiteral: {
        setState(518);
        expression(0);
        break;
      }

      case SandParser::VariableDeclarator: {
        setState(519);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(522);
    statement();
    setState(524);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(523);
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

SandParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ElseStatementContext::Else() {
  return getToken(SandParser::Else, 0);
}

SandParser::StatementContext* SandParser::ElseStatementContext::statement() {
  return getRuleContext<SandParser::StatementContext>(0);
}


size_t SandParser::ElseStatementContext::getRuleIndex() const {
  return SandParser::RuleElseStatement;
}


antlrcpp::Any SandParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ElseStatementContext* SandParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 82, SandParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(526);
    match(SandParser::Else);
    setState(527);
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

SandParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::WhileStatementContext::While() {
  return getToken(SandParser::While, 0);
}

SandParser::ExpressionContext* SandParser::WhileStatementContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::StatementContext* SandParser::WhileStatementContext::statement() {
  return getRuleContext<SandParser::StatementContext>(0);
}


size_t SandParser::WhileStatementContext::getRuleIndex() const {
  return SandParser::RuleWhileStatement;
}


antlrcpp::Any SandParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::WhileStatementContext* SandParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 84, SandParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    match(SandParser::While);
    setState(530);
    expression(0);
    setState(531);
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

SandParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ForStatementContext::For() {
  return getToken(SandParser::For, 0);
}

tree::TerminalNode* SandParser::ForStatementContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::ForStatementContext::In() {
  return getToken(SandParser::In, 0);
}

SandParser::ExpressionContext* SandParser::ForStatementContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::StatementContext* SandParser::ForStatementContext::statement() {
  return getRuleContext<SandParser::StatementContext>(0);
}


size_t SandParser::ForStatementContext::getRuleIndex() const {
  return SandParser::RuleForStatement;
}


antlrcpp::Any SandParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ForStatementContext* SandParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 86, SandParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(533);
    match(SandParser::For);
    setState(534);
    match(SandParser::VariableName);
    setState(535);
    match(SandParser::In);
    setState(536);
    expression(0);
    setState(537);
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

SandParser::BreakStatementContext::BreakStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::BreakStatementContext::Break() {
  return getToken(SandParser::Break, 0);
}


size_t SandParser::BreakStatementContext::getRuleIndex() const {
  return SandParser::RuleBreakStatement;
}


antlrcpp::Any SandParser::BreakStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitBreakStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::BreakStatementContext* SandParser::breakStatement() {
  BreakStatementContext *_localctx = _tracker.createInstance<BreakStatementContext>(_ctx, getState());
  enterRule(_localctx, 88, SandParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    match(SandParser::Break);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionStatementContext ------------------------------------------------------------------

SandParser::UnionStatementContext::UnionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::UnionStatementContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

tree::TerminalNode* SandParser::UnionStatementContext::Union() {
  return getToken(SandParser::Union, 0);
}

tree::TerminalNode* SandParser::UnionStatementContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

SandParser::UnionBodyContext* SandParser::UnionStatementContext::unionBody() {
  return getRuleContext<SandParser::UnionBodyContext>(0);
}

SandParser::ClassGenericsContext* SandParser::UnionStatementContext::classGenerics() {
  return getRuleContext<SandParser::ClassGenericsContext>(0);
}


size_t SandParser::UnionStatementContext::getRuleIndex() const {
  return SandParser::RuleUnionStatement;
}


antlrcpp::Any SandParser::UnionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitUnionStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::UnionStatementContext* SandParser::unionStatement() {
  UnionStatementContext *_localctx = _tracker.createInstance<UnionStatementContext>(_ctx, getState());
  enterRule(_localctx, 90, SandParser::RuleUnionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(541);
    attributes();
    setState(542);
    match(SandParser::Union);
    setState(543);
    match(SandParser::VariableName);
    setState(545);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::LessThan) {
      setState(544);
      classGenerics();
    }
    setState(547);
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

SandParser::UnionBodyContext::UnionBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::UnionBodyContext::OpeningBrace() {
  return getToken(SandParser::OpeningBrace, 0);
}

tree::TerminalNode* SandParser::UnionBodyContext::ClosingBrace() {
  return getToken(SandParser::ClosingBrace, 0);
}

std::vector<SandParser::UnionPropertyContext *> SandParser::UnionBodyContext::unionProperty() {
  return getRuleContexts<SandParser::UnionPropertyContext>();
}

SandParser::UnionPropertyContext* SandParser::UnionBodyContext::unionProperty(size_t i) {
  return getRuleContext<SandParser::UnionPropertyContext>(i);
}


size_t SandParser::UnionBodyContext::getRuleIndex() const {
  return SandParser::RuleUnionBody;
}


antlrcpp::Any SandParser::UnionBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitUnionBody(this);
  else
    return visitor->visitChildren(this);
}

SandParser::UnionBodyContext* SandParser::unionBody() {
  UnionBodyContext *_localctx = _tracker.createInstance<UnionBodyContext>(_ctx, getState());
  enterRule(_localctx, 92, SandParser::RuleUnionBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(SandParser::OpeningBrace);
    setState(553);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SandParser::VariableName) {
      setState(550);
      unionProperty();
      setState(555);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(556);
    match(SandParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnionPropertyContext ------------------------------------------------------------------

SandParser::UnionPropertyContext::UnionPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::UnionPropertyContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::UnionPropertyContext::Colon() {
  return getToken(SandParser::Colon, 0);
}

SandParser::TypeContext* SandParser::UnionPropertyContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::UnionPropertyContext::InstructionsSeparator() {
  return getToken(SandParser::InstructionsSeparator, 0);
}


size_t SandParser::UnionPropertyContext::getRuleIndex() const {
  return SandParser::RuleUnionProperty;
}


antlrcpp::Any SandParser::UnionPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitUnionProperty(this);
  else
    return visitor->visitChildren(this);
}

SandParser::UnionPropertyContext* SandParser::unionProperty() {
  UnionPropertyContext *_localctx = _tracker.createInstance<UnionPropertyContext>(_ctx, getState());
  enterRule(_localctx, 94, SandParser::RuleUnionProperty);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(SandParser::VariableName);
    setState(559);
    match(SandParser::Colon);
    setState(560);
    type(0);
    setState(561);
    match(SandParser::InstructionsSeparator);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumStatementContext ------------------------------------------------------------------

SandParser::EnumStatementContext::EnumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::EnumStatementContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

tree::TerminalNode* SandParser::EnumStatementContext::Enum() {
  return getToken(SandParser::Enum, 0);
}

tree::TerminalNode* SandParser::EnumStatementContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

SandParser::EnumBodyContext* SandParser::EnumStatementContext::enumBody() {
  return getRuleContext<SandParser::EnumBodyContext>(0);
}


size_t SandParser::EnumStatementContext::getRuleIndex() const {
  return SandParser::RuleEnumStatement;
}


antlrcpp::Any SandParser::EnumStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitEnumStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::EnumStatementContext* SandParser::enumStatement() {
  EnumStatementContext *_localctx = _tracker.createInstance<EnumStatementContext>(_ctx, getState());
  enterRule(_localctx, 96, SandParser::RuleEnumStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    attributes();
    setState(564);
    match(SandParser::Enum);
    setState(565);
    match(SandParser::VariableName);
    setState(566);
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

SandParser::EnumBodyContext::EnumBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::EnumBodyContext::OpeningBrace() {
  return getToken(SandParser::OpeningBrace, 0);
}

tree::TerminalNode* SandParser::EnumBodyContext::ClosingBrace() {
  return getToken(SandParser::ClosingBrace, 0);
}

std::vector<SandParser::EnumPropertyContext *> SandParser::EnumBodyContext::enumProperty() {
  return getRuleContexts<SandParser::EnumPropertyContext>();
}

SandParser::EnumPropertyContext* SandParser::EnumBodyContext::enumProperty(size_t i) {
  return getRuleContext<SandParser::EnumPropertyContext>(i);
}

std::vector<tree::TerminalNode *> SandParser::EnumBodyContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::EnumBodyContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::EnumBodyContext::getRuleIndex() const {
  return SandParser::RuleEnumBody;
}


antlrcpp::Any SandParser::EnumBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitEnumBody(this);
  else
    return visitor->visitChildren(this);
}

SandParser::EnumBodyContext* SandParser::enumBody() {
  EnumBodyContext *_localctx = _tracker.createInstance<EnumBodyContext>(_ctx, getState());
  enterRule(_localctx, 98, SandParser::RuleEnumBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(568);
    match(SandParser::OpeningBrace);
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::VariableName) {
      setState(569);
      enumProperty();
      setState(574);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(570);
          match(SandParser::Comma);
          setState(571);
          enumProperty(); 
        }
        setState(576);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
      }
      setState(578);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SandParser::Comma) {
        setState(577);
        match(SandParser::Comma);
      }
    }
    setState(582);
    match(SandParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnumPropertyContext ------------------------------------------------------------------

SandParser::EnumPropertyContext::EnumPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::EnumPropertyContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::EnumPropertyContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

SandParser::ExpressionContext* SandParser::EnumPropertyContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}


size_t SandParser::EnumPropertyContext::getRuleIndex() const {
  return SandParser::RuleEnumProperty;
}


antlrcpp::Any SandParser::EnumPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitEnumProperty(this);
  else
    return visitor->visitChildren(this);
}

SandParser::EnumPropertyContext* SandParser::enumProperty() {
  EnumPropertyContext *_localctx = _tracker.createInstance<EnumPropertyContext>(_ctx, getState());
  enterRule(_localctx, 100, SandParser::RuleEnumProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(SandParser::VariableName);
    setState(587);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Equal) {
      setState(585);
      match(SandParser::Equal);
      setState(586);
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

SandParser::SpecialClassStatementContext::SpecialClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::SpecialClassStatementContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

tree::TerminalNode* SandParser::SpecialClassStatementContext::Special() {
  return getToken(SandParser::Special, 0);
}

tree::TerminalNode* SandParser::SpecialClassStatementContext::Class() {
  return getToken(SandParser::Class, 0);
}

SandParser::ScopedNameNoGenericContext* SandParser::SpecialClassStatementContext::scopedNameNoGeneric() {
  return getRuleContext<SandParser::ScopedNameNoGenericContext>(0);
}

SandParser::ClassTypeNameGenericsContext* SandParser::SpecialClassStatementContext::classTypeNameGenerics() {
  return getRuleContext<SandParser::ClassTypeNameGenericsContext>(0);
}

SandParser::ClassBodyContext* SandParser::SpecialClassStatementContext::classBody() {
  return getRuleContext<SandParser::ClassBodyContext>(0);
}

tree::TerminalNode* SandParser::SpecialClassStatementContext::Extends() {
  return getToken(SandParser::Extends, 0);
}

SandParser::ClassExtendsContext* SandParser::SpecialClassStatementContext::classExtends() {
  return getRuleContext<SandParser::ClassExtendsContext>(0);
}


size_t SandParser::SpecialClassStatementContext::getRuleIndex() const {
  return SandParser::RuleSpecialClassStatement;
}


antlrcpp::Any SandParser::SpecialClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitSpecialClassStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::SpecialClassStatementContext* SandParser::specialClassStatement() {
  SpecialClassStatementContext *_localctx = _tracker.createInstance<SpecialClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 102, SandParser::RuleSpecialClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    attributes();
    setState(590);
    match(SandParser::Special);
    setState(591);
    match(SandParser::Class);
    setState(592);
    scopedNameNoGeneric();
    setState(593);
    classTypeNameGenerics();
    setState(596);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Extends) {
      setState(594);
      match(SandParser::Extends);
      setState(595);
      classExtends();
    }
    setState(598);
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

SandParser::ClassStatementContext::ClassStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::ClassStatementContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

tree::TerminalNode* SandParser::ClassStatementContext::Class() {
  return getToken(SandParser::Class, 0);
}

tree::TerminalNode* SandParser::ClassStatementContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

SandParser::ClassBodyContext* SandParser::ClassStatementContext::classBody() {
  return getRuleContext<SandParser::ClassBodyContext>(0);
}

SandParser::ClassGenericsContext* SandParser::ClassStatementContext::classGenerics() {
  return getRuleContext<SandParser::ClassGenericsContext>(0);
}

tree::TerminalNode* SandParser::ClassStatementContext::Extends() {
  return getToken(SandParser::Extends, 0);
}

SandParser::ClassExtendsContext* SandParser::ClassStatementContext::classExtends() {
  return getRuleContext<SandParser::ClassExtendsContext>(0);
}


size_t SandParser::ClassStatementContext::getRuleIndex() const {
  return SandParser::RuleClassStatement;
}


antlrcpp::Any SandParser::ClassStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassStatementContext* SandParser::classStatement() {
  ClassStatementContext *_localctx = _tracker.createInstance<ClassStatementContext>(_ctx, getState());
  enterRule(_localctx, 104, SandParser::RuleClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    attributes();
    setState(601);
    match(SandParser::Class);
    setState(602);
    match(SandParser::VariableName);
    setState(604);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::LessThan) {
      setState(603);
      classGenerics();
    }
    setState(608);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Extends) {
      setState(606);
      match(SandParser::Extends);
      setState(607);
      classExtends();
    }
    setState(610);
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

SandParser::ClassGenericsContext::ClassGenericsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ClassGenericsContext::LessThan() {
  return getToken(SandParser::LessThan, 0);
}

std::vector<tree::TerminalNode *> SandParser::ClassGenericsContext::VariableName() {
  return getTokens(SandParser::VariableName);
}

tree::TerminalNode* SandParser::ClassGenericsContext::VariableName(size_t i) {
  return getToken(SandParser::VariableName, i);
}

tree::TerminalNode* SandParser::ClassGenericsContext::GreaterThan() {
  return getToken(SandParser::GreaterThan, 0);
}

std::vector<tree::TerminalNode *> SandParser::ClassGenericsContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::ClassGenericsContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::ClassGenericsContext::getRuleIndex() const {
  return SandParser::RuleClassGenerics;
}


antlrcpp::Any SandParser::ClassGenericsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassGenerics(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassGenericsContext* SandParser::classGenerics() {
  ClassGenericsContext *_localctx = _tracker.createInstance<ClassGenericsContext>(_ctx, getState());
  enterRule(_localctx, 106, SandParser::RuleClassGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(SandParser::LessThan);
    setState(613);
    match(SandParser::VariableName);
    setState(618);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SandParser::Comma) {
      setState(614);
      match(SandParser::Comma);
      setState(615);
      match(SandParser::VariableName);
      setState(620);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(621);
    match(SandParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassExtendsContext ------------------------------------------------------------------

SandParser::ClassExtendsContext::ClassExtendsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SandParser::ClassTypeNameContext *> SandParser::ClassExtendsContext::classTypeName() {
  return getRuleContexts<SandParser::ClassTypeNameContext>();
}

SandParser::ClassTypeNameContext* SandParser::ClassExtendsContext::classTypeName(size_t i) {
  return getRuleContext<SandParser::ClassTypeNameContext>(i);
}

std::vector<tree::TerminalNode *> SandParser::ClassExtendsContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::ClassExtendsContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::ClassExtendsContext::getRuleIndex() const {
  return SandParser::RuleClassExtends;
}


antlrcpp::Any SandParser::ClassExtendsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassExtends(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassExtendsContext* SandParser::classExtends() {
  ClassExtendsContext *_localctx = _tracker.createInstance<ClassExtendsContext>(_ctx, getState());
  enterRule(_localctx, 108, SandParser::RuleClassExtends);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    classTypeName();
    setState(628);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SandParser::Comma) {
      setState(624);
      match(SandParser::Comma);
      setState(625);
      classTypeName();
      setState(630);
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

SandParser::ClassBodyContext::ClassBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ClassBodyContext::OpeningBrace() {
  return getToken(SandParser::OpeningBrace, 0);
}

tree::TerminalNode* SandParser::ClassBodyContext::ClosingBrace() {
  return getToken(SandParser::ClosingBrace, 0);
}

std::vector<SandParser::ClassBodyElementContext *> SandParser::ClassBodyContext::classBodyElement() {
  return getRuleContexts<SandParser::ClassBodyElementContext>();
}

SandParser::ClassBodyElementContext* SandParser::ClassBodyContext::classBodyElement(size_t i) {
  return getRuleContext<SandParser::ClassBodyElementContext>(i);
}


size_t SandParser::ClassBodyContext::getRuleIndex() const {
  return SandParser::RuleClassBody;
}


antlrcpp::Any SandParser::ClassBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassBody(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassBodyContext* SandParser::classBody() {
  ClassBodyContext *_localctx = _tracker.createInstance<ClassBodyContext>(_ctx, getState());
  enterRule(_localctx, 110, SandParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(SandParser::OpeningBrace);
    setState(635);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 40) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 40)) & ((1ULL << (SandParser::Class - 40))
      | (1ULL << (SandParser::Static - 40))
      | (1ULL << (SandParser::Union - 40))
      | (1ULL << (SandParser::Function - 40))
      | (1ULL << (SandParser::Extern - 40))
      | (1ULL << (SandParser::Alias - 40))
      | (1ULL << (SandParser::Attribute - 40))
      | (1ULL << (SandParser::VariableName - 40)))) != 0)) {
      setState(632);
      classBodyElement();
      setState(637);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(638);
    match(SandParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassBodyElementContext ------------------------------------------------------------------

SandParser::ClassBodyElementContext::ClassBodyElementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::ClassPropertyContext* SandParser::ClassBodyElementContext::classProperty() {
  return getRuleContext<SandParser::ClassPropertyContext>(0);
}

SandParser::ClassMethodContext* SandParser::ClassBodyElementContext::classMethod() {
  return getRuleContext<SandParser::ClassMethodContext>(0);
}

SandParser::ClassStatementContext* SandParser::ClassBodyElementContext::classStatement() {
  return getRuleContext<SandParser::ClassStatementContext>(0);
}

SandParser::UnionStatementContext* SandParser::ClassBodyElementContext::unionStatement() {
  return getRuleContext<SandParser::UnionStatementContext>(0);
}

SandParser::AliasContext* SandParser::ClassBodyElementContext::alias() {
  return getRuleContext<SandParser::AliasContext>(0);
}


size_t SandParser::ClassBodyElementContext::getRuleIndex() const {
  return SandParser::RuleClassBodyElement;
}


antlrcpp::Any SandParser::ClassBodyElementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassBodyElement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassBodyElementContext* SandParser::classBodyElement() {
  ClassBodyElementContext *_localctx = _tracker.createInstance<ClassBodyElementContext>(_ctx, getState());
  enterRule(_localctx, 112, SandParser::RuleClassBodyElement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(645);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(640);
      classProperty();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(641);
      classMethod();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(642);
      classStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(643);
      unionStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(644);
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

SandParser::ClassPropertyContext::ClassPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ClassPropertyContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::ClassPropertyContext::Colon() {
  return getToken(SandParser::Colon, 0);
}

SandParser::TypeContext* SandParser::ClassPropertyContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::ClassPropertyContext::InstructionsSeparator() {
  return getToken(SandParser::InstructionsSeparator, 0);
}

tree::TerminalNode* SandParser::ClassPropertyContext::Static() {
  return getToken(SandParser::Static, 0);
}

tree::TerminalNode* SandParser::ClassPropertyContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

SandParser::ExpressionContext* SandParser::ClassPropertyContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}


size_t SandParser::ClassPropertyContext::getRuleIndex() const {
  return SandParser::RuleClassProperty;
}


antlrcpp::Any SandParser::ClassPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassProperty(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassPropertyContext* SandParser::classProperty() {
  ClassPropertyContext *_localctx = _tracker.createInstance<ClassPropertyContext>(_ctx, getState());
  enterRule(_localctx, 114, SandParser::RuleClassProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Static) {
      setState(647);
      match(SandParser::Static);
    }
    setState(650);
    match(SandParser::VariableName);
    setState(651);
    match(SandParser::Colon);
    setState(652);
    type(0);
    setState(655);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Equal) {
      setState(653);
      match(SandParser::Equal);
      setState(654);
      expression(0);
    }
    setState(657);
    match(SandParser::InstructionsSeparator);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMethodContext ------------------------------------------------------------------

SandParser::ClassMethodContext::ClassMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::FunctionContext* SandParser::ClassMethodContext::function() {
  return getRuleContext<SandParser::FunctionContext>(0);
}

tree::TerminalNode* SandParser::ClassMethodContext::Static() {
  return getToken(SandParser::Static, 0);
}


size_t SandParser::ClassMethodContext::getRuleIndex() const {
  return SandParser::RuleClassMethod;
}


antlrcpp::Any SandParser::ClassMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassMethod(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassMethodContext* SandParser::classMethod() {
  ClassMethodContext *_localctx = _tracker.createInstance<ClassMethodContext>(_ctx, getState());
  enterRule(_localctx, 116, SandParser::RuleClassMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(660);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Static) {
      setState(659);
      match(SandParser::Static);
    }
    setState(662);
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

SandParser::ClassInstantiationPropertiesContext::ClassInstantiationPropertiesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SandParser::ClassInstantiationPropertyContext *> SandParser::ClassInstantiationPropertiesContext::classInstantiationProperty() {
  return getRuleContexts<SandParser::ClassInstantiationPropertyContext>();
}

SandParser::ClassInstantiationPropertyContext* SandParser::ClassInstantiationPropertiesContext::classInstantiationProperty(size_t i) {
  return getRuleContext<SandParser::ClassInstantiationPropertyContext>(i);
}

std::vector<tree::TerminalNode *> SandParser::ClassInstantiationPropertiesContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::ClassInstantiationPropertiesContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::ClassInstantiationPropertiesContext::getRuleIndex() const {
  return SandParser::RuleClassInstantiationProperties;
}


antlrcpp::Any SandParser::ClassInstantiationPropertiesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationProperties(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassInstantiationPropertiesContext* SandParser::classInstantiationProperties() {
  ClassInstantiationPropertiesContext *_localctx = _tracker.createInstance<ClassInstantiationPropertiesContext>(_ctx, getState());
  enterRule(_localctx, 118, SandParser::RuleClassInstantiationProperties);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(664);
    classInstantiationProperty();
    setState(669);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(665);
        match(SandParser::Comma);
        setState(666);
        classInstantiationProperty(); 
      }
      setState(671);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
    }
    setState(673);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Comma) {
      setState(672);
      match(SandParser::Comma);
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

SandParser::ClassInstantiationPropertyContext::ClassInstantiationPropertyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ClassInstantiationPropertyContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::ClassInstantiationPropertyContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

SandParser::ExpressionContext* SandParser::ClassInstantiationPropertyContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}


size_t SandParser::ClassInstantiationPropertyContext::getRuleIndex() const {
  return SandParser::RuleClassInstantiationProperty;
}


antlrcpp::Any SandParser::ClassInstantiationPropertyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassInstantiationProperty(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassInstantiationPropertyContext* SandParser::classInstantiationProperty() {
  ClassInstantiationPropertyContext *_localctx = _tracker.createInstance<ClassInstantiationPropertyContext>(_ctx, getState());
  enterRule(_localctx, 120, SandParser::RuleClassInstantiationProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(675);
    match(SandParser::VariableName);
    setState(678);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Equal) {
      setState(676);
      match(SandParser::Equal);
      setState(677);
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

SandParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SandParser::TypeContext::getRuleIndex() const {
  return SandParser::RuleType;
}

void SandParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeArrayContext ------------------------------------------------------------------

SandParser::TypeContext* SandParser::TypeArrayContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::TypeArrayContext::OpeningBracket() {
  return getToken(SandParser::OpeningBracket, 0);
}

SandParser::ExpressionContext* SandParser::TypeArrayContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::TypeArrayContext::ClosingBracket() {
  return getToken(SandParser::ClosingBracket, 0);
}

SandParser::TypeArrayContext::TypeArrayContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::TypeArrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitTypeArray(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeNameContext ------------------------------------------------------------------

SandParser::ScopedNameContext* SandParser::TypeNameContext::scopedName() {
  return getRuleContext<SandParser::ScopedNameContext>(0);
}

SandParser::FunctionTypeContext* SandParser::TypeNameContext::functionType() {
  return getRuleContext<SandParser::FunctionTypeContext>(0);
}

tree::TerminalNode* SandParser::TypeNameContext::Const() {
  return getToken(SandParser::Const, 0);
}

SandParser::TypeNameContext::TypeNameContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypePointerContext ------------------------------------------------------------------

SandParser::TypeContext* SandParser::TypePointerContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::TypePointerContext::Mul() {
  return getToken(SandParser::Mul, 0);
}

tree::TerminalNode* SandParser::TypePointerContext::Const() {
  return getToken(SandParser::Const, 0);
}

SandParser::TypePointerContext::TypePointerContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::TypePointerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitTypePointer(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeReferenceContext ------------------------------------------------------------------

SandParser::TypeContext* SandParser::TypeReferenceContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::TypeReferenceContext::BitwiseAnd() {
  return getToken(SandParser::BitwiseAnd, 0);
}

tree::TerminalNode* SandParser::TypeReferenceContext::Const() {
  return getToken(SandParser::Const, 0);
}

SandParser::TypeReferenceContext::TypeReferenceContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SandParser::TypeReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitTypeReference(this);
  else
    return visitor->visitChildren(this);
}

SandParser::TypeContext* SandParser::type() {
   return type(0);
}

SandParser::TypeContext* SandParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SandParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  SandParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 122;
  enterRecursionRule(_localctx, 122, SandParser::RuleType, precedence);

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

    setState(682);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Const) {
      setState(681);
      match(SandParser::Const);
    }
    setState(686);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::VariableName: {
        setState(684);
        scopedName();
        break;
      }

      case SandParser::Function: {
        setState(685);
        functionType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(705);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(703);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<TypeArrayContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(688);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(689);
          match(SandParser::OpeningBracket);
          setState(690);
          expression(0);
          setState(691);
          match(SandParser::ClosingBracket);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TypePointerContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(693);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(695);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SandParser::Const) {
            setState(694);
            match(SandParser::Const);
          }
          setState(697);
          match(SandParser::Mul);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<TypeReferenceContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleType);
          setState(698);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(700);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == SandParser::Const) {
            setState(699);
            match(SandParser::Const);
          }
          setState(702);
          match(SandParser::BitwiseAnd);
          break;
        }

        } 
      }
      setState(707);
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

SandParser::FunctionTypeContext::FunctionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::FunctionTypeContext::Function() {
  return getToken(SandParser::Function, 0);
}

tree::TerminalNode* SandParser::FunctionTypeContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

tree::TerminalNode* SandParser::FunctionTypeContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}

SandParser::FunctionArgumentsContext* SandParser::FunctionTypeContext::functionArguments() {
  return getRuleContext<SandParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* SandParser::FunctionTypeContext::Colon() {
  return getToken(SandParser::Colon, 0);
}

SandParser::TypeContext* SandParser::FunctionTypeContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

tree::TerminalNode* SandParser::FunctionTypeContext::Comma() {
  return getToken(SandParser::Comma, 0);
}

SandParser::FunctionVariadicArgumentContext* SandParser::FunctionTypeContext::functionVariadicArgument() {
  return getRuleContext<SandParser::FunctionVariadicArgumentContext>(0);
}


size_t SandParser::FunctionTypeContext::getRuleIndex() const {
  return SandParser::RuleFunctionType;
}


antlrcpp::Any SandParser::FunctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitFunctionType(this);
  else
    return visitor->visitChildren(this);
}

SandParser::FunctionTypeContext* SandParser::functionType() {
  FunctionTypeContext *_localctx = _tracker.createInstance<FunctionTypeContext>(_ctx, getState());
  enterRule(_localctx, 124, SandParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(708);
    match(SandParser::Function);
    setState(709);
    match(SandParser::OpeningParen);
    setState(718);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SandParser::Const:
      case SandParser::Function:
      case SandParser::VariableName: {
        setState(710);
        functionArguments();
        setState(713);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SandParser::Comma) {
          setState(711);
          match(SandParser::Comma);
          setState(712);
          functionVariadicArgument();
        }
        break;
      }

      case SandParser::ClosingParen:
      case SandParser::Variadic: {
        setState(716);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SandParser::Variadic) {
          setState(715);
          functionVariadicArgument();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(720);
    match(SandParser::ClosingParen);
    setState(723);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      setState(721);
      match(SandParser::Colon);
      setState(722);
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

SandParser::ClassTypeNameContext::ClassTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::ScopedNameContext* SandParser::ClassTypeNameContext::scopedName() {
  return getRuleContext<SandParser::ScopedNameContext>(0);
}


size_t SandParser::ClassTypeNameContext::getRuleIndex() const {
  return SandParser::RuleClassTypeName;
}


antlrcpp::Any SandParser::ClassTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeName(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassTypeNameContext* SandParser::classTypeName() {
  ClassTypeNameContext *_localctx = _tracker.createInstance<ClassTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 126, SandParser::RuleClassTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(725);
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

SandParser::ClassTypeNameGenericsContext::ClassTypeNameGenericsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ClassTypeNameGenericsContext::LessThan() {
  return getToken(SandParser::LessThan, 0);
}

std::vector<SandParser::TypeContext *> SandParser::ClassTypeNameGenericsContext::type() {
  return getRuleContexts<SandParser::TypeContext>();
}

SandParser::TypeContext* SandParser::ClassTypeNameGenericsContext::type(size_t i) {
  return getRuleContext<SandParser::TypeContext>(i);
}

tree::TerminalNode* SandParser::ClassTypeNameGenericsContext::GreaterThan() {
  return getToken(SandParser::GreaterThan, 0);
}

std::vector<tree::TerminalNode *> SandParser::ClassTypeNameGenericsContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::ClassTypeNameGenericsContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::ClassTypeNameGenericsContext::getRuleIndex() const {
  return SandParser::RuleClassTypeNameGenerics;
}


antlrcpp::Any SandParser::ClassTypeNameGenericsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitClassTypeNameGenerics(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ClassTypeNameGenericsContext* SandParser::classTypeNameGenerics() {
  ClassTypeNameGenericsContext *_localctx = _tracker.createInstance<ClassTypeNameGenericsContext>(_ctx, getState());
  enterRule(_localctx, 128, SandParser::RuleClassTypeNameGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(727);
    match(SandParser::LessThan);
    setState(728);
    type(0);
    setState(733);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SandParser::Comma) {
      setState(729);
      match(SandParser::Comma);
      setState(730);
      type(0);
      setState(735);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(736);
    match(SandParser::GreaterThan);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamespaceStatementContext ------------------------------------------------------------------

SandParser::NamespaceStatementContext::NamespaceStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::NamespaceStatementContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

tree::TerminalNode* SandParser::NamespaceStatementContext::Namespace() {
  return getToken(SandParser::Namespace, 0);
}

tree::TerminalNode* SandParser::NamespaceStatementContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::NamespaceStatementContext::OpeningBrace() {
  return getToken(SandParser::OpeningBrace, 0);
}

tree::TerminalNode* SandParser::NamespaceStatementContext::ClosingBrace() {
  return getToken(SandParser::ClosingBrace, 0);
}

std::vector<SandParser::StatementContext *> SandParser::NamespaceStatementContext::statement() {
  return getRuleContexts<SandParser::StatementContext>();
}

SandParser::StatementContext* SandParser::NamespaceStatementContext::statement(size_t i) {
  return getRuleContext<SandParser::StatementContext>(i);
}


size_t SandParser::NamespaceStatementContext::getRuleIndex() const {
  return SandParser::RuleNamespaceStatement;
}


antlrcpp::Any SandParser::NamespaceStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitNamespaceStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::NamespaceStatementContext* SandParser::namespaceStatement() {
  NamespaceStatementContext *_localctx = _tracker.createInstance<NamespaceStatementContext>(_ctx, getState());
  enterRule(_localctx, 130, SandParser::RuleNamespaceStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(738);
    attributes();
    setState(739);
    match(SandParser::Namespace);
    setState(740);
    match(SandParser::VariableName);
    setState(741);
    match(SandParser::OpeningBrace);
    setState(745);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SandParser::Add)
      | (1ULL << SandParser::Sub)
      | (1ULL << SandParser::Mul)
      | (1ULL << SandParser::Not)
      | (1ULL << SandParser::Neg)
      | (1ULL << SandParser::BitwiseAnd)
      | (1ULL << SandParser::OpeningParen)
      | (1ULL << SandParser::OpeningBrace)
      | (1ULL << SandParser::SizeOf)
      | (1ULL << SandParser::Class)
      | (1ULL << SandParser::Special)
      | (1ULL << SandParser::Union)
      | (1ULL << SandParser::Enum)
      | (1ULL << SandParser::Namespace)
      | (1ULL << SandParser::VariableDeclarator)
      | (1ULL << SandParser::If)
      | (1ULL << SandParser::While)
      | (1ULL << SandParser::Break)
      | (1ULL << SandParser::For)
      | (1ULL << SandParser::Function)
      | (1ULL << SandParser::Extern)
      | (1ULL << SandParser::Return)
      | (1ULL << SandParser::Alias))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SandParser::Attribute - 65))
      | (1ULL << (SandParser::Assembly - 65))
      | (1ULL << (SandParser::Import - 65))
      | (1ULL << (SandParser::True - 65))
      | (1ULL << (SandParser::False - 65))
      | (1ULL << (SandParser::NullLiteral - 65))
      | (1ULL << (SandParser::VariableName - 65))
      | (1ULL << (SandParser::StringLiteral - 65))
      | (1ULL << (SandParser::CharLiteral - 65))
      | (1ULL << (SandParser::DecimalLiteral - 65))
      | (1ULL << (SandParser::FloatingLiteral - 65))
      | (1ULL << (SandParser::ZeroLiteral - 65))
      | (1ULL << (SandParser::HexadecimalLiteral - 65))
      | (1ULL << (SandParser::BinaryLiteral - 65)))) != 0)) {
      setState(742);
      statement();
      setState(747);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(748);
    match(SandParser::ClosingBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ImportStatementContext ------------------------------------------------------------------

SandParser::ImportStatementContext::ImportStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::ImportStatementContext::Import() {
  return getToken(SandParser::Import, 0);
}

tree::TerminalNode* SandParser::ImportStatementContext::StringLiteral() {
  return getToken(SandParser::StringLiteral, 0);
}


size_t SandParser::ImportStatementContext::getRuleIndex() const {
  return SandParser::RuleImportStatement;
}


antlrcpp::Any SandParser::ImportStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitImportStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::ImportStatementContext* SandParser::importStatement() {
  ImportStatementContext *_localctx = _tracker.createInstance<ImportStatementContext>(_ctx, getState());
  enterRule(_localctx, 132, SandParser::RuleImportStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    match(SandParser::Import);
    setState(751);
    match(SandParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttributesContext ------------------------------------------------------------------

SandParser::AttributesContext::AttributesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SandParser::AttributeContext *> SandParser::AttributesContext::attribute() {
  return getRuleContexts<SandParser::AttributeContext>();
}

SandParser::AttributeContext* SandParser::AttributesContext::attribute(size_t i) {
  return getRuleContext<SandParser::AttributeContext>(i);
}


size_t SandParser::AttributesContext::getRuleIndex() const {
  return SandParser::RuleAttributes;
}


antlrcpp::Any SandParser::AttributesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAttributes(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AttributesContext* SandParser::attributes() {
  AttributesContext *_localctx = _tracker.createInstance<AttributesContext>(_ctx, getState());
  enterRule(_localctx, 134, SandParser::RuleAttributes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(756);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SandParser::Attribute) {
      setState(753);
      attribute();
      setState(758);
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

SandParser::AttributeContext::AttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::AttributeContext::Attribute() {
  return getToken(SandParser::Attribute, 0);
}

tree::TerminalNode* SandParser::AttributeContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::AttributeContext::ClosingBracket() {
  return getToken(SandParser::ClosingBracket, 0);
}

tree::TerminalNode* SandParser::AttributeContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

tree::TerminalNode* SandParser::AttributeContext::StringLiteral() {
  return getToken(SandParser::StringLiteral, 0);
}


size_t SandParser::AttributeContext::getRuleIndex() const {
  return SandParser::RuleAttribute;
}


antlrcpp::Any SandParser::AttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAttribute(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AttributeContext* SandParser::attribute() {
  AttributeContext *_localctx = _tracker.createInstance<AttributeContext>(_ctx, getState());
  enterRule(_localctx, 136, SandParser::RuleAttribute);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(759);
    match(SandParser::Attribute);
    setState(760);
    match(SandParser::VariableName);
    setState(763);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Equal) {
      setState(761);
      match(SandParser::Equal);
      setState(762);
      match(SandParser::StringLiteral);
    }
    setState(765);
    match(SandParser::ClosingBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasContext ------------------------------------------------------------------

SandParser::AliasContext::AliasContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::AttributesContext* SandParser::AliasContext::attributes() {
  return getRuleContext<SandParser::AttributesContext>(0);
}

tree::TerminalNode* SandParser::AliasContext::Alias() {
  return getToken(SandParser::Alias, 0);
}

tree::TerminalNode* SandParser::AliasContext::VariableName() {
  return getToken(SandParser::VariableName, 0);
}

tree::TerminalNode* SandParser::AliasContext::Equal() {
  return getToken(SandParser::Equal, 0);
}

SandParser::ExpressionContext* SandParser::AliasContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

SandParser::TypeContext* SandParser::AliasContext::type() {
  return getRuleContext<SandParser::TypeContext>(0);
}

SandParser::ClassGenericsContext* SandParser::AliasContext::classGenerics() {
  return getRuleContext<SandParser::ClassGenericsContext>(0);
}


size_t SandParser::AliasContext::getRuleIndex() const {
  return SandParser::RuleAlias;
}


antlrcpp::Any SandParser::AliasContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAlias(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AliasContext* SandParser::alias() {
  AliasContext *_localctx = _tracker.createInstance<AliasContext>(_ctx, getState());
  enterRule(_localctx, 138, SandParser::RuleAlias);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(767);
    attributes();
    setState(768);
    match(SandParser::Alias);
    setState(769);
    match(SandParser::VariableName);
    setState(771);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::LessThan) {
      setState(770);
      classGenerics();
    }
    setState(773);
    match(SandParser::Equal);
    setState(776);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      setState(774);
      expression(0);
      break;
    }

    case 2: {
      setState(775);
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

//----------------- AssemblyStatementContext ------------------------------------------------------------------

SandParser::AssemblyStatementContext::AssemblyStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::AssemblyStatementContext::Assembly() {
  return getToken(SandParser::Assembly, 0);
}

tree::TerminalNode* SandParser::AssemblyStatementContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

SandParser::StringLiteralContext* SandParser::AssemblyStatementContext::stringLiteral() {
  return getRuleContext<SandParser::StringLiteralContext>(0);
}

tree::TerminalNode* SandParser::AssemblyStatementContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}

std::vector<tree::TerminalNode *> SandParser::AssemblyStatementContext::Colon() {
  return getTokens(SandParser::Colon);
}

tree::TerminalNode* SandParser::AssemblyStatementContext::Colon(size_t i) {
  return getToken(SandParser::Colon, i);
}

std::vector<SandParser::AssemblyOutputContext *> SandParser::AssemblyStatementContext::assemblyOutput() {
  return getRuleContexts<SandParser::AssemblyOutputContext>();
}

SandParser::AssemblyOutputContext* SandParser::AssemblyStatementContext::assemblyOutput(size_t i) {
  return getRuleContext<SandParser::AssemblyOutputContext>(i);
}

std::vector<SandParser::AssemblyInputContext *> SandParser::AssemblyStatementContext::assemblyInput() {
  return getRuleContexts<SandParser::AssemblyInputContext>();
}

SandParser::AssemblyInputContext* SandParser::AssemblyStatementContext::assemblyInput(size_t i) {
  return getRuleContext<SandParser::AssemblyInputContext>(i);
}

std::vector<SandParser::AssemblyClobberContext *> SandParser::AssemblyStatementContext::assemblyClobber() {
  return getRuleContexts<SandParser::AssemblyClobberContext>();
}

SandParser::AssemblyClobberContext* SandParser::AssemblyStatementContext::assemblyClobber(size_t i) {
  return getRuleContext<SandParser::AssemblyClobberContext>(i);
}

std::vector<tree::TerminalNode *> SandParser::AssemblyStatementContext::Comma() {
  return getTokens(SandParser::Comma);
}

tree::TerminalNode* SandParser::AssemblyStatementContext::Comma(size_t i) {
  return getToken(SandParser::Comma, i);
}


size_t SandParser::AssemblyStatementContext::getRuleIndex() const {
  return SandParser::RuleAssemblyStatement;
}


antlrcpp::Any SandParser::AssemblyStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyStatement(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AssemblyStatementContext* SandParser::assemblyStatement() {
  AssemblyStatementContext *_localctx = _tracker.createInstance<AssemblyStatementContext>(_ctx, getState());
  enterRule(_localctx, 140, SandParser::RuleAssemblyStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(778);
    match(SandParser::Assembly);
    setState(779);
    match(SandParser::OpeningParen);
    setState(780);
    stringLiteral();

    setState(781);
    match(SandParser::Colon);
    setState(790);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::StringLiteral) {
      setState(782);
      assemblyOutput();
      setState(787);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SandParser::Comma) {
        setState(783);
        match(SandParser::Comma);
        setState(784);
        assemblyOutput();
        setState(789);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(792);
    match(SandParser::Colon);
    setState(801);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::StringLiteral) {
      setState(793);
      assemblyInput();
      setState(798);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SandParser::Comma) {
        setState(794);
        match(SandParser::Comma);
        setState(795);
        assemblyInput();
        setState(800);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }

    setState(812);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SandParser::Colon) {
      setState(803);
      match(SandParser::Colon);
      setState(804);
      assemblyClobber();
      setState(809);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SandParser::Comma) {
        setState(805);
        match(SandParser::Comma);
        setState(806);
        assemblyClobber();
        setState(811);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(814);
    match(SandParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyTemplateContext ------------------------------------------------------------------

SandParser::AssemblyTemplateContext::AssemblyTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SandParser::StringLiteralContext* SandParser::AssemblyTemplateContext::stringLiteral() {
  return getRuleContext<SandParser::StringLiteralContext>(0);
}


size_t SandParser::AssemblyTemplateContext::getRuleIndex() const {
  return SandParser::RuleAssemblyTemplate;
}


antlrcpp::Any SandParser::AssemblyTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyTemplate(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AssemblyTemplateContext* SandParser::assemblyTemplate() {
  AssemblyTemplateContext *_localctx = _tracker.createInstance<AssemblyTemplateContext>(_ctx, getState());
  enterRule(_localctx, 142, SandParser::RuleAssemblyTemplate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(816);
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

SandParser::AssemblyOutputContext::AssemblyOutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::AssemblyOutputContext::StringLiteral() {
  return getToken(SandParser::StringLiteral, 0);
}

tree::TerminalNode* SandParser::AssemblyOutputContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

SandParser::ExpressionContext* SandParser::AssemblyOutputContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::AssemblyOutputContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}


size_t SandParser::AssemblyOutputContext::getRuleIndex() const {
  return SandParser::RuleAssemblyOutput;
}


antlrcpp::Any SandParser::AssemblyOutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyOutput(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AssemblyOutputContext* SandParser::assemblyOutput() {
  AssemblyOutputContext *_localctx = _tracker.createInstance<AssemblyOutputContext>(_ctx, getState());
  enterRule(_localctx, 144, SandParser::RuleAssemblyOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(818);
    match(SandParser::StringLiteral);
    setState(819);
    match(SandParser::OpeningParen);
    setState(820);
    expression(0);
    setState(821);
    match(SandParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyInputContext ------------------------------------------------------------------

SandParser::AssemblyInputContext::AssemblyInputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::AssemblyInputContext::StringLiteral() {
  return getToken(SandParser::StringLiteral, 0);
}

tree::TerminalNode* SandParser::AssemblyInputContext::OpeningParen() {
  return getToken(SandParser::OpeningParen, 0);
}

SandParser::ExpressionContext* SandParser::AssemblyInputContext::expression() {
  return getRuleContext<SandParser::ExpressionContext>(0);
}

tree::TerminalNode* SandParser::AssemblyInputContext::ClosingParen() {
  return getToken(SandParser::ClosingParen, 0);
}


size_t SandParser::AssemblyInputContext::getRuleIndex() const {
  return SandParser::RuleAssemblyInput;
}


antlrcpp::Any SandParser::AssemblyInputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyInput(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AssemblyInputContext* SandParser::assemblyInput() {
  AssemblyInputContext *_localctx = _tracker.createInstance<AssemblyInputContext>(_ctx, getState());
  enterRule(_localctx, 146, SandParser::RuleAssemblyInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(823);
    match(SandParser::StringLiteral);
    setState(824);
    match(SandParser::OpeningParen);
    setState(825);
    expression(0);
    setState(826);
    match(SandParser::ClosingParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyClobberContext ------------------------------------------------------------------

SandParser::AssemblyClobberContext::AssemblyClobberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::AssemblyClobberContext::StringLiteral() {
  return getToken(SandParser::StringLiteral, 0);
}


size_t SandParser::AssemblyClobberContext::getRuleIndex() const {
  return SandParser::RuleAssemblyClobber;
}


antlrcpp::Any SandParser::AssemblyClobberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitAssemblyClobber(this);
  else
    return visitor->visitChildren(this);
}

SandParser::AssemblyClobberContext* SandParser::assemblyClobber() {
  AssemblyClobberContext *_localctx = _tracker.createInstance<AssemblyClobberContext>(_ctx, getState());
  enterRule(_localctx, 148, SandParser::RuleAssemblyClobber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(828);
    match(SandParser::StringLiteral);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EosContext ------------------------------------------------------------------

SandParser::EosContext::EosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SandParser::EosContext::EOF() {
  return getToken(SandParser::EOF, 0);
}

tree::TerminalNode* SandParser::EosContext::LineTerminator() {
  return getToken(SandParser::LineTerminator, 0);
}


size_t SandParser::EosContext::getRuleIndex() const {
  return SandParser::RuleEos;
}


antlrcpp::Any SandParser::EosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SandParserVisitor*>(visitor))
    return parserVisitor->visitEos(this);
  else
    return visitor->visitChildren(this);
}

SandParser::EosContext* SandParser::eos() {
  EosContext *_localctx = _tracker.createInstance<EosContext>(_ctx, getState());
  enterRule(_localctx, 150, SandParser::RuleEos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(830);
    _la = _input->LA(1);
    if (!(_la == SandParser::EOF || _la == SandParser::LineTerminator)) {
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

bool SandParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 3: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 61: return typeSempred(dynamic_cast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SandParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);
    case 8: return precpred(_ctx, 22);
    case 9: return precpred(_ctx, 21);
    case 10: return precpred(_ctx, 20);
    case 11: return precpred(_ctx, 13);
    case 12: return precpred(_ctx, 12);

  default:
    break;
  }
  return true;
}

bool SandParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 13: return precpred(_ctx, 4);
    case 14: return precpred(_ctx, 3);
    case 15: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SandParser::_decisionToDFA;
atn::PredictionContextCache SandParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SandParser::_atn;
std::vector<uint16_t> SandParser::_serializedATN;

std::vector<std::string> SandParser::_ruleNames = {
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

std::vector<std::string> SandParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'||'", "'&&'", "'?'", 
  "'=='", "'!='", "'<='", "'<'", "'>'", "'^'", "'|'", "'&'", "'='", "'+='", 
  "'-='", "'*='", "'/='", "'%='", "'^='", "'|='", "'&='", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "'...'", "'..='", "'..'", "'as'", "'sizeof'", 
  "'const'", "'class'", "'extends'", "'special'", "'static'", "'.'", "'->'", 
  "'union'", "'enum'", "'@destructor'", "'namespace'", "'::'", "'let'", 
  "'if'", "'else'", "'while'", "'break'", "'for'", "'in'", "'fn'", "'extern'", 
  "'return'", "'cast'", "'alias'", "','", "':'", "'#['", "'asm'", "'import'", 
  "'true'", "'false'", "'null'"
};

std::vector<std::string> SandParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "Not", "Neg", "ConditionalOr", 
  "ConditionalAnd", "TernaryOperator", "EqualTo", "NotEqualTo", "LessThanOrEqualTo", 
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

dfa::Vocabulary SandParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SandParser::_tokenNames;

SandParser::Initializer::Initializer() {
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
    0x3, 0x54, 0x343, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x115, 0xa, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x122, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x125, 0xb, 0x5, 0x3, 0x6, 0x5, 0x6, 0x128, 0xa, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x12e, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
    0x131, 0xb, 0x7, 0x3, 0x8, 0x5, 0x8, 0x134, 0xa, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x13d, 
    0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x148, 0xa, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x157, 
    0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x171, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x17d, 
    0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
    0x1a, 0x5, 0x1a, 0x185, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x6, 0x1e, 0x18e, 0xa, 0x1e, 
    0xd, 0x1e, 0xe, 0x1e, 0x18f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x198, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x19c, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 
    0x1a1, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x1a4, 0xb, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x1c8, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 
    0x1cc, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1d1, 
    0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 
    0x24, 0x1d8, 0xa, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1db, 0xa, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1e1, 0xa, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x1e4, 0xa, 0x24, 0x5, 0x24, 0x1e6, 0xa, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1eb, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x1f0, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x1f9, 
    0xa, 0x27, 0xc, 0x27, 0xe, 0x27, 0x1fc, 0xb, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x5, 0x28, 0x200, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x5, 0x29, 0x206, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 
    0x20b, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x20f, 0xa, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
    0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 
    0x2f, 0x224, 0xa, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x7, 0x30, 0x22a, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x22d, 0xb, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x7, 0x33, 0x23f, 0xa, 0x33, 0xc, 0x33, 
    0xe, 0x33, 0x242, 0xb, 0x33, 0x3, 0x33, 0x5, 0x33, 0x245, 0xa, 0x33, 
    0x5, 0x33, 0x247, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x24e, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x257, 0xa, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 
    0x36, 0x25f, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x263, 0xa, 
    0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x7, 0x37, 0x26b, 0xa, 0x37, 0xc, 0x37, 0xe, 0x37, 0x26e, 0xb, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x7, 0x38, 0x275, 
    0xa, 0x38, 0xc, 0x38, 0xe, 0x38, 0x278, 0xb, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x7, 0x39, 0x27c, 0xa, 0x39, 0xc, 0x39, 0xe, 0x39, 0x27f, 0xb, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
    0x3a, 0x5, 0x3a, 0x288, 0xa, 0x3a, 0x3, 0x3b, 0x5, 0x3b, 0x28b, 0xa, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 
    0x292, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x5, 0x3c, 0x297, 
    0xa, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x7, 
    0x3d, 0x29e, 0xa, 0x3d, 0xc, 0x3d, 0xe, 0x3d, 0x2a1, 0xb, 0x3d, 0x3, 
    0x3d, 0x5, 0x3d, 0x2a4, 0xa, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x5, 0x3e, 0x2a9, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2ad, 
    0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2b1, 0xa, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
    0x3f, 0x2ba, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x2bf, 0xa, 0x3f, 0x3, 0x3f, 0x7, 0x3f, 0x2c2, 0xa, 0x3f, 0xc, 0x3f, 
    0xe, 0x3f, 0x2c5, 0xb, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x5, 0x40, 0x2cc, 0xa, 0x40, 0x3, 0x40, 0x5, 0x40, 0x2cf, 
    0xa, 0x40, 0x5, 0x40, 0x2d1, 0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x5, 0x40, 0x2d6, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x2de, 0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 
    0x2e1, 0xb, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2ea, 0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 
    0x2ed, 0xb, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x45, 0x7, 0x45, 0x2f5, 0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x2f8, 
    0xb, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x5, 0x46, 0x2fe, 
    0xa, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x5, 0x47, 0x306, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x5, 0x47, 0x30b, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x314, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x317, 0xb, 0x48, 0x5, 0x48, 0x319, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x31f, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x322, 0xb, 0x48, 0x5, 0x48, 0x324, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x7, 0x48, 0x32a, 0xa, 0x48, 0xc, 0x48, 
    0xe, 0x48, 0x32d, 0xb, 0x48, 0x5, 0x48, 0x32f, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x2, 0x4, 0x8, 
    0x7c, 0x4e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 
    0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 
    0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
    0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 
    0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
    0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 
    0x90, 0x92, 0x94, 0x96, 0x98, 0x2, 0xa, 0x3, 0x2, 0x2e, 0x2f, 0x3, 0x2, 
    0x5, 0x7, 0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x12, 0x14, 0x3, 0x2, 0xa, 0xb, 
    0x3, 0x2, 0x46, 0x47, 0x4, 0x2, 0x4d, 0x4d, 0x4f, 0x51, 0x3, 0x3, 0x54, 
    0x54, 0x2, 0x39c, 0x2, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x4, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x8, 0xea, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x127, 0x3, 0x2, 0x2, 0x2, 0xc, 0x12b, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x10, 0x137, 0x3, 0x2, 0x2, 0x2, 0x12, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x16, 0x140, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x142, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x147, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x149, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x150, 0x3, 0x2, 0x2, 0x2, 0x22, 0x156, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x158, 0x3, 0x2, 0x2, 0x2, 0x26, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x161, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x165, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x168, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x30, 0x17c, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x184, 0x3, 0x2, 0x2, 0x2, 0x34, 0x186, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x188, 0x3, 0x2, 0x2, 0x2, 0x38, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x1c7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1d2, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1ff, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x203, 0x3, 0x2, 0x2, 0x2, 0x52, 0x207, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x210, 0x3, 0x2, 0x2, 0x2, 0x56, 0x213, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x217, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x21f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x227, 0x3, 0x2, 0x2, 0x2, 0x60, 0x230, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x235, 0x3, 0x2, 0x2, 0x2, 0x64, 0x23a, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x68, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x266, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x271, 0x3, 0x2, 0x2, 0x2, 0x70, 0x279, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x287, 0x3, 0x2, 0x2, 0x2, 0x74, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x296, 0x3, 0x2, 0x2, 0x2, 0x78, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2a5, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2c6, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2d9, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2f0, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2f9, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x301, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x332, 0x3, 0x2, 0x2, 0x2, 0x92, 0x334, 0x3, 0x2, 0x2, 0x2, 0x94, 0x339, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x98, 0x340, 0x3, 
    0x2, 0x2, 0x2, 0x9a, 0x9c, 0x5, 0x6, 0x4, 0x2, 0x9b, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9b, 0x3, 0x2, 0x2, 
    0x2, 0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x98, 0x4d, 0x2, 0xa1, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa6, 0x7, 0x20, 0x2, 0x2, 0xa3, 0xa5, 
    0x5, 0x6, 0x4, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xaa, 0x7, 0x21, 0x2, 0x2, 0xaa, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xc9, 0x5, 0x44, 0x23, 0x2, 0xac, 0xc9, 0x5, 0x84, 0x43, 0x2, 
    0xad, 0xae, 0x5, 0x8, 0x5, 0x2, 0xae, 0xaf, 0x7, 0x49, 0x2, 0x2, 0xaf, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xc9, 0x5, 0x4, 0x3, 0x2, 0xb1, 0xb2, 
    0x5, 0x3c, 0x1f, 0x2, 0xb2, 0xb3, 0x7, 0x49, 0x2, 0x2, 0xb3, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x5, 0x50, 0x29, 0x2, 0xb5, 0xb6, 0x7, 0x49, 
    0x2, 0x2, 0xb6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xc9, 0x5, 0x52, 0x2a, 
    0x2, 0xb8, 0xc9, 0x5, 0x56, 0x2c, 0x2, 0xb9, 0xc9, 0x5, 0x58, 0x2d, 
    0x2, 0xba, 0xbb, 0x5, 0x5a, 0x2e, 0x2, 0xbb, 0xbc, 0x7, 0x49, 0x2, 0x2, 
    0xbc, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc9, 0x5, 0x68, 0x35, 0x2, 0xbe, 
    0xc9, 0x5, 0x6a, 0x36, 0x2, 0xbf, 0xc9, 0x5, 0x5c, 0x2f, 0x2, 0xc0, 
    0xc9, 0x5, 0x62, 0x32, 0x2, 0xc1, 0xc9, 0x5, 0x86, 0x44, 0x2, 0xc2, 
    0xc3, 0x5, 0x8e, 0x48, 0x2, 0xc3, 0xc4, 0x7, 0x49, 0x2, 0x2, 0xc4, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x8c, 0x47, 0x2, 0xc6, 0xc7, 0x7, 
    0x49, 0x2, 0x2, 0xc7, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xac, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xb8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0xc8, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xcb, 0x8, 0x5, 0x1, 0x2, 0xcb, 0xcc, 0x7, 0x1e, 0x2, 0x2, 0xcc, 
    0xcd, 0x5, 0x8, 0x5, 0x2, 0xcd, 0xce, 0x7, 0x1f, 0x2, 0x2, 0xce, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd2, 0x7, 0x28, 0x2, 0x2, 0xd0, 0xd3, 0x5, 
    0x8, 0x5, 0x2, 0xd1, 0xd3, 0x5, 0x7c, 0x3f, 0x2, 0xd2, 0xd0, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd5, 0x5, 0x80, 0x41, 0x2, 0xd5, 0xd7, 0x7, 0x20, 0x2, 0x2, 
    0xd6, 0xd8, 0x5, 0x78, 0x3d, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 
    0x7, 0x21, 0x2, 0x2, 0xda, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x7, 
    0x4, 0x2, 0x2, 0xdc, 0xeb, 0x5, 0x8, 0x5, 0x15, 0xdd, 0xde, 0x7, 0x3, 
    0x2, 0x2, 0xde, 0xeb, 0x5, 0x8, 0x5, 0x14, 0xdf, 0xe0, 0x7, 0x8, 0x2, 
    0x2, 0xe0, 0xeb, 0x5, 0x8, 0x5, 0x13, 0xe1, 0xe2, 0x7, 0x9, 0x2, 0x2, 
    0xe2, 0xeb, 0x5, 0x8, 0x5, 0x12, 0xe3, 0xe4, 0x7, 0x14, 0x2, 0x2, 0xe4, 
    0xeb, 0x5, 0x8, 0x5, 0x11, 0xe5, 0xe6, 0x7, 0x5, 0x2, 0x2, 0xe6, 0xeb, 
    0x5, 0x8, 0x5, 0x10, 0xe7, 0xeb, 0x5, 0x44, 0x23, 0x2, 0xe8, 0xeb, 0x5, 
    0xa, 0x6, 0x2, 0xe9, 0xeb, 0x5, 0x32, 0x1a, 0x2, 0xea, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xea, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xdd, 0x3, 0x2, 0x2, 0x2, 
    0xea, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe9, 0x3, 
    0x2, 0x2, 0x2, 0xeb, 0x123, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0xc, 0xa, 
    0x2, 0x2, 0xed, 0xee, 0x5, 0x14, 0xb, 0x2, 0xee, 0xef, 0x5, 0x8, 0x5, 
    0xb, 0xef, 0x122, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0xc, 0x9, 0x2, 0x2, 
    0xf1, 0xf2, 0x5, 0x16, 0xc, 0x2, 0xf2, 0xf3, 0x5, 0x8, 0x5, 0xa, 0xf3, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0xc, 0x8, 0x2, 0x2, 0xf5, 0xf6, 
    0x5, 0x18, 0xd, 0x2, 0xf6, 0xf7, 0x5, 0x8, 0x5, 0x9, 0xf7, 0x122, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0xc, 0x7, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x1a, 
    0xe, 0x2, 0xfa, 0xfb, 0x5, 0x8, 0x5, 0x8, 0xfb, 0x122, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0xfd, 0xc, 0x6, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x2e, 0x18, 0x2, 
    0xfe, 0xff, 0x5, 0x8, 0x5, 0x7, 0xff, 0x122, 0x3, 0x2, 0x2, 0x2, 0x100, 
    0x101, 0xc, 0x5, 0x2, 0x2, 0x101, 0x102, 0x5, 0x2c, 0x17, 0x2, 0x102, 
    0x103, 0x5, 0x8, 0x5, 0x6, 0x103, 0x122, 0x3, 0x2, 0x2, 0x2, 0x104, 
    0x105, 0xc, 0x4, 0x2, 0x2, 0x105, 0x106, 0x7, 0xc, 0x2, 0x2, 0x106, 
    0x107, 0x5, 0x8, 0x5, 0x2, 0x107, 0x108, 0x7, 0x42, 0x2, 0x2, 0x108, 
    0x109, 0x5, 0x8, 0x5, 0x4, 0x109, 0x122, 0x3, 0x2, 0x2, 0x2, 0x10a, 
    0x10b, 0xc, 0x3, 0x2, 0x2, 0x10b, 0x10c, 0x5, 0x30, 0x19, 0x2, 0x10c, 
    0x10d, 0x5, 0x8, 0x5, 0x3, 0x10d, 0x122, 0x3, 0x2, 0x2, 0x2, 0x10e, 
    0x10f, 0xc, 0x18, 0x2, 0x2, 0x10f, 0x110, 0x9, 0x2, 0x2, 0x2, 0x110, 
    0x122, 0x5, 0xc, 0x7, 0x2, 0x111, 0x112, 0xc, 0x17, 0x2, 0x2, 0x112, 
    0x114, 0x7, 0x1e, 0x2, 0x2, 0x113, 0x115, 0x5, 0x3e, 0x20, 0x2, 0x114, 
    0x113, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x116, 0x3, 0x2, 0x2, 0x2, 0x116, 0x122, 0x7, 0x1f, 0x2, 0x2, 0x117, 
    0x118, 0xc, 0x16, 0x2, 0x2, 0x118, 0x119, 0x7, 0x22, 0x2, 0x2, 0x119, 
    0x11a, 0x5, 0x8, 0x5, 0x2, 0x11a, 0x11b, 0x7, 0x23, 0x2, 0x2, 0x11b, 
    0x122, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0xc, 0xf, 0x2, 0x2, 0x11d, 
    0x122, 0x7, 0x8, 0x2, 0x2, 0x11e, 0x11f, 0xc, 0xe, 0x2, 0x2, 0x11f, 
    0x120, 0x7, 0x27, 0x2, 0x2, 0x120, 0x122, 0x5, 0x7c, 0x3f, 0x2, 0x121, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0x121, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x121, 0xf4, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x121, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x100, 0x3, 0x2, 0x2, 0x2, 0x121, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x121, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x111, 0x3, 0x2, 0x2, 0x2, 0x121, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x121, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x125, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 
    0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x5, 0x12, 
    0xa, 0x2, 0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x5, 0xc, 
    0x7, 0x2, 0x12a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12f, 0x7, 0x4a, 0x2, 
    0x2, 0x12c, 0x12e, 0x5, 0x82, 0x42, 0x2, 0x12d, 0x12c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x131, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x132, 0x134, 0x5, 0x12, 0xa, 0x2, 
    0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 
    0x134, 0x135, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x5, 0x10, 0x9, 0x2, 
    0x136, 0xf, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0x4a, 0x2, 0x2, 0x138, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x5, 0xc, 0x7, 0x2, 0x13a, 0x13c, 
    0x7, 0x34, 0x2, 0x2, 0x13b, 0x13d, 0x5, 0x12, 0xa, 0x2, 0x13c, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x13f, 0x9, 0x3, 0x2, 0x2, 0x13f, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0x140, 0x141, 0x9, 0x4, 0x2, 0x2, 0x141, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x143, 0x9, 0x5, 0x2, 0x2, 0x143, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x144, 0x148, 0x5, 0x1c, 0xf, 0x2, 0x145, 0x148, 0x5, 0x1e, 0x10, 0x2, 
    0x146, 0x148, 0x5, 0x20, 0x11, 0x2, 0x147, 0x144, 0x3, 0x2, 0x2, 0x2, 
    0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x148, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x11, 0x2, 0x2, 
    0x14a, 0x14b, 0x7, 0x11, 0x2, 0x2, 0x14b, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x14d, 0x7, 0x11, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x11, 0x2, 0x2, 
    0x14e, 0x14f, 0x7, 0x11, 0x2, 0x2, 0x14f, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x150, 0x151, 0x7, 0x10, 0x2, 0x2, 0x151, 0x152, 0x7, 0x10, 0x2, 0x2, 
    0x152, 0x21, 0x3, 0x2, 0x2, 0x2, 0x153, 0x157, 0x5, 0x24, 0x13, 0x2, 
    0x154, 0x157, 0x5, 0x26, 0x14, 0x2, 0x155, 0x157, 0x5, 0x28, 0x15, 0x2, 
    0x156, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 
    0x156, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x23, 0x3, 0x2, 0x2, 0x2, 0x158, 
    0x159, 0x7, 0x11, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x11, 0x2, 0x2, 0x15a, 
    0x15b, 0x7, 0x15, 0x2, 0x2, 0x15b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x15c, 
    0x15d, 0x7, 0x11, 0x2, 0x2, 0x15d, 0x15e, 0x7, 0x11, 0x2, 0x2, 0x15e, 
    0x15f, 0x7, 0x11, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x15, 0x2, 0x2, 0x160, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x7, 0x10, 0x2, 0x2, 0x162, 
    0x163, 0x7, 0x10, 0x2, 0x2, 0x163, 0x164, 0x7, 0x15, 0x2, 0x2, 0x164, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x7, 0x11, 0x2, 0x2, 0x166, 
    0x167, 0x7, 0x15, 0x2, 0x2, 0x167, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x169, 0x9, 0x6, 0x2, 0x2, 0x169, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x171, 
    0x7, 0xd, 0x2, 0x2, 0x16b, 0x171, 0x7, 0xe, 0x2, 0x2, 0x16c, 0x171, 
    0x7, 0xf, 0x2, 0x2, 0x16d, 0x171, 0x5, 0x2a, 0x16, 0x2, 0x16e, 0x171, 
    0x7, 0x10, 0x2, 0x2, 0x16f, 0x171, 0x7, 0x11, 0x2, 0x2, 0x170, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16c, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16e, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x17d, 0x7, 0x15, 0x2, 0x2, 0x173, 0x17d, 0x7, 
    0x16, 0x2, 0x2, 0x174, 0x17d, 0x7, 0x17, 0x2, 0x2, 0x175, 0x17d, 0x7, 
    0x18, 0x2, 0x2, 0x176, 0x17d, 0x7, 0x19, 0x2, 0x2, 0x177, 0x17d, 0x7, 
    0x1a, 0x2, 0x2, 0x178, 0x17d, 0x7, 0x1b, 0x2, 0x2, 0x179, 0x17d, 0x7, 
    0x1c, 0x2, 0x2, 0x17a, 0x17d, 0x7, 0x1d, 0x2, 0x2, 0x17b, 0x17d, 0x5, 
    0x22, 0x12, 0x2, 0x17c, 0x172, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x174, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x176, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x179, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x17d, 0x31, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x185, 0x5, 0x34, 
    0x1b, 0x2, 0x17f, 0x185, 0x5, 0x36, 0x1c, 0x2, 0x180, 0x185, 0x5, 0x38, 
    0x1d, 0x2, 0x181, 0x185, 0x5, 0x3a, 0x1e, 0x2, 0x182, 0x185, 0x7, 0x4c, 
    0x2, 0x2, 0x183, 0x185, 0x7, 0x48, 0x2, 0x2, 0x184, 0x17e, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x184, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x181, 0x3, 0x2, 0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x187, 0x9, 0x7, 0x2, 0x2, 0x187, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x188, 0x189, 0x9, 0x8, 0x2, 0x2, 0x189, 0x37, 0x3, 0x2, 0x2, 0x2, 0x18a, 
    0x18b, 0x7, 0x4e, 0x2, 0x2, 0x18b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x18c, 
    0x18e, 0x7, 0x4b, 0x2, 0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 
    0x18f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 
    0x190, 0x3, 0x2, 0x2, 0x2, 0x190, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 
    0x7, 0x35, 0x2, 0x2, 0x192, 0x19b, 0x7, 0x4a, 0x2, 0x2, 0x193, 0x194, 
    0x7, 0x42, 0x2, 0x2, 0x194, 0x197, 0x5, 0x7c, 0x3f, 0x2, 0x195, 0x196, 
    0x7, 0x15, 0x2, 0x2, 0x196, 0x198, 0x5, 0x8, 0x5, 0x2, 0x197, 0x195, 
    0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 0x2, 0x2, 0x2, 0x198, 0x19c, 
    0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x15, 0x2, 0x2, 0x19a, 0x19c, 
    0x5, 0x8, 0x5, 0x2, 0x19b, 0x193, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x199, 
    0x3, 0x2, 0x2, 0x2, 0x19c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a2, 0x5, 
    0x40, 0x21, 0x2, 0x19e, 0x19f, 0x7, 0x41, 0x2, 0x2, 0x19f, 0x1a1, 0x5, 
    0x40, 0x21, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 
    0x2, 0x2, 0x2, 0x1a3, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 
    0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x8, 0x5, 0x2, 0x1a6, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1c8, 0x7, 0x3, 0x2, 0x2, 0x1a8, 0x1c8, 0x7, 0x4, 0x2, 
    0x2, 0x1a9, 0x1c8, 0x7, 0x5, 0x2, 0x2, 0x1aa, 0x1c8, 0x7, 0x6, 0x2, 
    0x2, 0x1ab, 0x1c8, 0x7, 0x7, 0x2, 0x2, 0x1ac, 0x1c8, 0x7, 0x8, 0x2, 
    0x2, 0x1ad, 0x1ae, 0x7, 0x3, 0x2, 0x2, 0x1ae, 0x1c8, 0x7, 0x8, 0x2, 
    0x2, 0x1af, 0x1c8, 0x7, 0x12, 0x2, 0x2, 0x1b0, 0x1c8, 0x7, 0x13, 0x2, 
    0x2, 0x1b1, 0x1c8, 0x7, 0x14, 0x2, 0x2, 0x1b2, 0x1c8, 0x7, 0x9, 0x2, 
    0x2, 0x1b3, 0x1c8, 0x7, 0x16, 0x2, 0x2, 0x1b4, 0x1c8, 0x7, 0x17, 0x2, 
    0x2, 0x1b5, 0x1c8, 0x7, 0x18, 0x2, 0x2, 0x1b6, 0x1c8, 0x7, 0x19, 0x2, 
    0x2, 0x1b7, 0x1c8, 0x7, 0x1a, 0x2, 0x2, 0x1b8, 0x1c8, 0x7, 0x1b, 0x2, 
    0x2, 0x1b9, 0x1c8, 0x7, 0x1c, 0x2, 0x2, 0x1ba, 0x1c8, 0x7, 0x1d, 0x2, 
    0x2, 0x1bb, 0x1c8, 0x7, 0xd, 0x2, 0x2, 0x1bc, 0x1c8, 0x7, 0xe, 0x2, 
    0x2, 0x1bd, 0x1c8, 0x7, 0x10, 0x2, 0x2, 0x1be, 0x1c8, 0x7, 0xf, 0x2, 
    0x2, 0x1bf, 0x1c8, 0x7, 0x11, 0x2, 0x2, 0x1c0, 0x1c8, 0x5, 0x2a, 0x16, 
    0x2, 0x1c1, 0x1c2, 0x7, 0x22, 0x2, 0x2, 0x1c2, 0x1c8, 0x7, 0x23, 0x2, 
    0x2, 0x1c3, 0x1c8, 0x7, 0x2f, 0x2, 0x2, 0x1c4, 0x1c8, 0x7, 0x2e, 0x2, 
    0x2, 0x1c5, 0x1c8, 0x5, 0x1a, 0xe, 0x2, 0x1c6, 0x1c8, 0x5, 0x22, 0x12, 
    0x2, 0x1c7, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1a8, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1ac, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1b1, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1b3, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1b5, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1b7, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1b9, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1bb, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1bf, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c4, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c6, 0x3, 0x2, 0x2, 
    0x2, 0x1c8, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1cb, 0x5, 0x88, 0x45, 
    0x2, 0x1ca, 0x1cc, 0x7, 0x3d, 0x2, 0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 
    0x2, 0x1cd, 0x1d0, 0x5, 0x46, 0x24, 0x2, 0x1ce, 0x1d1, 0x5, 0x4, 0x3, 
    0x2, 0x1cf, 0x1d1, 0x7, 0x49, 0x2, 0x2, 0x1d0, 0x1ce, 0x3, 0x2, 0x2, 
    0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1ef, 0x7, 0x3c, 0x2, 0x2, 0x1d3, 0x1d8, 0x5, 0x42, 0x22, 0x2, 
    0x1d4, 0x1d5, 0x7, 0x3f, 0x2, 0x2, 0x1d5, 0x1d8, 0x5, 0x48, 0x25, 0x2, 
    0x1d6, 0x1d8, 0x7, 0x4a, 0x2, 0x2, 0x1d7, 0x1d3, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x1db, 0x5, 0x6c, 0x37, 0x2, 0x1da, 0x1d9, 0x3, 0x2, 0x2, 0x2, 
    0x1da, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1dc, 0x1e5, 0x7, 0x1e, 0x2, 0x2, 0x1dd, 0x1e0, 0x5, 0x4c, 0x27, 0x2, 
    0x1de, 0x1df, 0x7, 0x41, 0x2, 0x2, 0x1df, 0x1e1, 0x5, 0x4a, 0x26, 0x2, 
    0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 0x2, 0x2, 
    0x1e1, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e4, 0x5, 0x4a, 0x26, 0x2, 
    0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1ea, 0x7, 0x1f, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x42, 0x2, 0x2, 
    0x1e9, 0x1eb, 0x5, 0x7c, 0x3f, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 
    0x1ea, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x1ec, 0x1ed, 0x7, 0x32, 0x2, 0x2, 0x1ed, 0x1ee, 0x7, 0x1e, 0x2, 0x2, 
    0x1ee, 0x1f0, 0x7, 0x1f, 0x2, 0x2, 0x1ef, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1ef, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1f1, 
    0x1f2, 0x5, 0x7c, 0x3f, 0x2, 0x1f2, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1f4, 0x7, 0x24, 0x2, 0x2, 0x1f4, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
    0x1fa, 0x5, 0x4e, 0x28, 0x2, 0x1f6, 0x1f7, 0x7, 0x41, 0x2, 0x2, 0x1f7, 
    0x1f9, 0x5, 0x4e, 0x28, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f9, 
    0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 
    0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fa, 
    0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x4a, 0x2, 0x2, 0x1fe, 0x200, 
    0x7, 0x42, 0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
    0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
    0x5, 0x7c, 0x3f, 0x2, 0x202, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x203, 0x205, 
    0x7, 0x3e, 0x2, 0x2, 0x204, 0x206, 0x5, 0x8, 0x5, 0x2, 0x205, 0x204, 
    0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 0x2, 0x206, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x207, 0x20a, 0x7, 0x36, 0x2, 0x2, 0x208, 0x20b, 0x5, 
    0x8, 0x5, 0x2, 0x209, 0x20b, 0x5, 0x3c, 0x1f, 0x2, 0x20a, 0x208, 0x3, 
    0x2, 0x2, 0x2, 0x20a, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 
    0x2, 0x2, 0x2, 0x20c, 0x20e, 0x5, 0x6, 0x4, 0x2, 0x20d, 0x20f, 0x5, 
    0x54, 0x2b, 0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x20f, 0x3, 
    0x2, 0x2, 0x2, 0x20f, 0x53, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x7, 0x37, 
    0x2, 0x2, 0x211, 0x212, 0x5, 0x6, 0x4, 0x2, 0x212, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x213, 0x214, 0x7, 0x38, 0x2, 0x2, 0x214, 0x215, 0x5, 0x8, 0x5, 
    0x2, 0x215, 0x216, 0x5, 0x6, 0x4, 0x2, 0x216, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x217, 0x218, 0x7, 0x3a, 0x2, 0x2, 0x218, 0x219, 0x7, 0x4a, 0x2, 0x2, 
    0x219, 0x21a, 0x7, 0x3b, 0x2, 0x2, 0x21a, 0x21b, 0x5, 0x8, 0x5, 0x2, 
    0x21b, 0x21c, 0x5, 0x6, 0x4, 0x2, 0x21c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21e, 0x7, 0x39, 0x2, 0x2, 0x21e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x220, 0x5, 0x88, 0x45, 0x2, 0x220, 0x221, 0x7, 0x30, 0x2, 0x2, 0x221, 
    0x223, 0x7, 0x4a, 0x2, 0x2, 0x222, 0x224, 0x5, 0x6c, 0x37, 0x2, 0x223, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 
    0x225, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x5, 0x5e, 0x30, 0x2, 0x226, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x227, 0x22b, 0x7, 0x20, 0x2, 0x2, 0x228, 
    0x22a, 0x5, 0x60, 0x31, 0x2, 0x229, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 
    0x22d, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 
    0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x22d, 
    0x22b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x21, 0x2, 0x2, 0x22f, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x4a, 0x2, 0x2, 0x231, 
    0x232, 0x7, 0x42, 0x2, 0x2, 0x232, 0x233, 0x5, 0x7c, 0x3f, 0x2, 0x233, 
    0x234, 0x7, 0x49, 0x2, 0x2, 0x234, 0x61, 0x3, 0x2, 0x2, 0x2, 0x235, 
    0x236, 0x5, 0x88, 0x45, 0x2, 0x236, 0x237, 0x7, 0x31, 0x2, 0x2, 0x237, 
    0x238, 0x7, 0x4a, 0x2, 0x2, 0x238, 0x239, 0x5, 0x64, 0x33, 0x2, 0x239, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x246, 0x7, 0x20, 0x2, 0x2, 0x23b, 
    0x240, 0x5, 0x66, 0x34, 0x2, 0x23c, 0x23d, 0x7, 0x41, 0x2, 0x2, 0x23d, 
    0x23f, 0x5, 0x66, 0x34, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23f, 
    0x242, 0x3, 0x2, 0x2, 0x2, 0x240, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 
    0x241, 0x3, 0x2, 0x2, 0x2, 0x241, 0x244, 0x3, 0x2, 0x2, 0x2, 0x242, 
    0x240, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 0x7, 0x41, 0x2, 0x2, 0x244, 
    0x243, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 
    0x247, 0x3, 0x2, 0x2, 0x2, 0x246, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x246, 
    0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 0x248, 
    0x249, 0x7, 0x21, 0x2, 0x2, 0x249, 0x65, 0x3, 0x2, 0x2, 0x2, 0x24a, 
    0x24d, 0x7, 0x4a, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0x15, 0x2, 0x2, 0x24c, 
    0x24e, 0x5, 0x8, 0x5, 0x2, 0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 
    0x24e, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x67, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 
    0x5, 0x88, 0x45, 0x2, 0x250, 0x251, 0x7, 0x2c, 0x2, 0x2, 0x251, 0x252, 
    0x7, 0x2a, 0x2, 0x2, 0x252, 0x253, 0x5, 0xe, 0x8, 0x2, 0x253, 0x256, 
    0x5, 0x82, 0x42, 0x2, 0x254, 0x255, 0x7, 0x2b, 0x2, 0x2, 0x255, 0x257, 
    0x5, 0x6e, 0x38, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 
    0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 
    0x5, 0x70, 0x39, 0x2, 0x259, 0x69, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 
    0x5, 0x88, 0x45, 0x2, 0x25b, 0x25c, 0x7, 0x2a, 0x2, 0x2, 0x25c, 0x25e, 
    0x7, 0x4a, 0x2, 0x2, 0x25d, 0x25f, 0x5, 0x6c, 0x37, 0x2, 0x25e, 0x25d, 
    0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x262, 
    0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 0x2b, 0x2, 0x2, 0x261, 0x263, 
    0x5, 0x6e, 0x38, 0x2, 0x262, 0x260, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 
    0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 
    0x5, 0x70, 0x39, 0x2, 0x265, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 
    0x7, 0x10, 0x2, 0x2, 0x267, 0x26c, 0x7, 0x4a, 0x2, 0x2, 0x268, 0x269, 
    0x7, 0x41, 0x2, 0x2, 0x269, 0x26b, 0x7, 0x4a, 0x2, 0x2, 0x26a, 0x268, 
    0x3, 0x2, 0x2, 0x2, 0x26b, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26a, 
    0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26f, 
    0x3, 0x2, 0x2, 0x2, 0x26e, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 
    0x7, 0x11, 0x2, 0x2, 0x270, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x271, 0x276, 
    0x5, 0x80, 0x41, 0x2, 0x272, 0x273, 0x7, 0x41, 0x2, 0x2, 0x273, 0x275, 
    0x5, 0x80, 0x41, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x275, 0x278, 
    0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 
    0x3, 0x2, 0x2, 0x2, 0x277, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x278, 0x276, 0x3, 
    0x2, 0x2, 0x2, 0x279, 0x27d, 0x7, 0x20, 0x2, 0x2, 0x27a, 0x27c, 0x5, 
    0x72, 0x3a, 0x2, 0x27b, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27f, 0x3, 
    0x2, 0x2, 0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x3, 
    0x2, 0x2, 0x2, 0x27e, 0x280, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x27d, 0x3, 
    0x2, 0x2, 0x2, 0x280, 0x281, 0x7, 0x21, 0x2, 0x2, 0x281, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x282, 0x288, 0x5, 0x74, 0x3b, 0x2, 0x283, 0x288, 0x5, 
    0x76, 0x3c, 0x2, 0x284, 0x288, 0x5, 0x6a, 0x36, 0x2, 0x285, 0x288, 0x5, 
    0x5c, 0x2f, 0x2, 0x286, 0x288, 0x5, 0x8c, 0x47, 0x2, 0x287, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x287, 0x283, 0x3, 0x2, 0x2, 0x2, 0x287, 0x284, 0x3, 
    0x2, 0x2, 0x2, 0x287, 0x285, 0x3, 0x2, 0x2, 0x2, 0x287, 0x286, 0x3, 
    0x2, 0x2, 0x2, 0x288, 0x73, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28b, 0x7, 0x2d, 
    0x2, 0x2, 0x28a, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 
    0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x7, 0x4a, 
    0x2, 0x2, 0x28d, 0x28e, 0x7, 0x42, 0x2, 0x2, 0x28e, 0x291, 0x5, 0x7c, 
    0x3f, 0x2, 0x28f, 0x290, 0x7, 0x15, 0x2, 0x2, 0x290, 0x292, 0x5, 0x8, 
    0x5, 0x2, 0x291, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 
    0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 0x7, 0x49, 
    0x2, 0x2, 0x294, 0x75, 0x3, 0x2, 0x2, 0x2, 0x295, 0x297, 0x7, 0x2d, 
    0x2, 0x2, 0x296, 0x295, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 
    0x2, 0x2, 0x297, 0x298, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x5, 0x44, 
    0x23, 0x2, 0x299, 0x77, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29f, 0x5, 0x7a, 
    0x3e, 0x2, 0x29b, 0x29c, 0x7, 0x41, 0x2, 0x2, 0x29c, 0x29e, 0x5, 0x7a, 
    0x3e, 0x2, 0x29d, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x2a1, 0x3, 0x2, 
    0x2, 0x2, 0x29f, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 
    0x2, 0x2, 0x2a0, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x29f, 0x3, 0x2, 
    0x2, 0x2, 0x2a2, 0x2a4, 0x7, 0x41, 0x2, 0x2, 0x2a3, 0x2a2, 0x3, 0x2, 
    0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x79, 0x3, 0x2, 0x2, 
    0x2, 0x2a5, 0x2a8, 0x7, 0x4a, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x15, 0x2, 
    0x2, 0x2a7, 0x2a9, 0x5, 0x8, 0x5, 0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 
    0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x2aa, 0x2ac, 0x8, 0x3f, 0x1, 0x2, 0x2ab, 0x2ad, 0x7, 0x29, 0x2, 0x2, 
    0x2ac, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x2ad, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2b1, 0x5, 0xa, 0x6, 0x2, 
    0x2af, 0x2b1, 0x5, 0x7e, 0x40, 0x2, 0x2b0, 0x2ae, 0x3, 0x2, 0x2, 0x2, 
    0x2b0, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0x2b2, 0x2b3, 0xc, 0x6, 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x22, 0x2, 0x2, 
    0x2b4, 0x2b5, 0x5, 0x8, 0x5, 0x2, 0x2b5, 0x2b6, 0x7, 0x23, 0x2, 0x2, 
    0x2b6, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b9, 0xc, 0x5, 0x2, 0x2, 
    0x2b8, 0x2ba, 0x7, 0x29, 0x2, 0x2, 0x2b9, 0x2b8, 0x3, 0x2, 0x2, 0x2, 
    0x2b9, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x3, 0x2, 0x2, 0x2, 
    0x2bb, 0x2c2, 0x7, 0x5, 0x2, 0x2, 0x2bc, 0x2be, 0xc, 0x4, 0x2, 0x2, 
    0x2bd, 0x2bf, 0x7, 0x29, 0x2, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 0x2, 
    0x2be, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 
    0x2c0, 0x2c2, 0x7, 0x14, 0x2, 0x2, 0x2c1, 0x2b2, 0x3, 0x2, 0x2, 0x2, 
    0x2c1, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x2c2, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 
    0x2c3, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2c4, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
    0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x3c, 0x2, 0x2, 0x2c7, 
    0x2d0, 0x7, 0x1e, 0x2, 0x2, 0x2c8, 0x2cb, 0x5, 0x4c, 0x27, 0x2, 0x2c9, 
    0x2ca, 0x7, 0x41, 0x2, 0x2, 0x2ca, 0x2cc, 0x5, 0x4a, 0x26, 0x2, 0x2cb, 
    0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cc, 
    0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2cf, 0x5, 0x4a, 0x26, 0x2, 0x2ce, 
    0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
    0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
    0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
    0x2d5, 0x7, 0x1f, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x42, 0x2, 0x2, 0x2d4, 
    0x2d6, 0x5, 0x7c, 0x3f, 0x2, 0x2d5, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d5, 
    0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 
    0x5, 0xa, 0x6, 0x2, 0x2d8, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x2da, 0x7, 
    0x10, 0x2, 0x2, 0x2da, 0x2df, 0x5, 0x7c, 0x3f, 0x2, 0x2db, 0x2dc, 0x7, 
    0x41, 0x2, 0x2, 0x2dc, 0x2de, 0x5, 0x7c, 0x3f, 0x2, 0x2dd, 0x2db, 0x3, 
    0x2, 0x2, 0x2, 0x2de, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 0x3, 
    0x2, 0x2, 0x2, 0x2df, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e2, 0x3, 
    0x2, 0x2, 0x2, 0x2e1, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e3, 0x7, 
    0x11, 0x2, 0x2, 0x2e3, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x5, 
    0x88, 0x45, 0x2, 0x2e5, 0x2e6, 0x7, 0x33, 0x2, 0x2, 0x2e6, 0x2e7, 0x7, 
    0x4a, 0x2, 0x2, 0x2e7, 0x2eb, 0x7, 0x20, 0x2, 0x2, 0x2e8, 0x2ea, 0x5, 
    0x6, 0x4, 0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2ed, 0x3, 
    0x2, 0x2, 0x2, 0x2eb, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x3, 
    0x2, 0x2, 0x2, 0x2ec, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2eb, 0x3, 
    0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x21, 0x2, 0x2, 0x2ef, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 0x45, 0x2, 0x2, 0x2f1, 0x2f2, 0x7, 
    0x4b, 0x2, 0x2, 0x2f2, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f5, 0x5, 
    0x8a, 0x46, 0x2, 0x2f4, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f8, 0x3, 
    0x2, 0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x3, 
    0x2, 0x2, 0x2, 0x2f7, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f6, 0x3, 0x2, 
    0x2, 0x2, 0x2f9, 0x2fa, 0x7, 0x43, 0x2, 0x2, 0x2fa, 0x2fd, 0x7, 0x4a, 
    0x2, 0x2, 0x2fb, 0x2fc, 0x7, 0x15, 0x2, 0x2, 0x2fc, 0x2fe, 0x7, 0x4b, 
    0x2, 0x2, 0x2fd, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x3, 0x2, 
    0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x7, 0x23, 
    0x2, 0x2, 0x300, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x5, 0x88, 
    0x45, 0x2, 0x302, 0x303, 0x7, 0x40, 0x2, 0x2, 0x303, 0x305, 0x7, 0x4a, 
    0x2, 0x2, 0x304, 0x306, 0x5, 0x6c, 0x37, 0x2, 0x305, 0x304, 0x3, 0x2, 
    0x2, 0x2, 0x305, 0x306, 0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 0x3, 0x2, 
    0x2, 0x2, 0x307, 0x30a, 0x7, 0x15, 0x2, 0x2, 0x308, 0x30b, 0x5, 0x8, 
    0x5, 0x2, 0x309, 0x30b, 0x5, 0x7c, 0x3f, 0x2, 0x30a, 0x308, 0x3, 0x2, 
    0x2, 0x2, 0x30a, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x8d, 0x3, 0x2, 0x2, 
    0x2, 0x30c, 0x30d, 0x7, 0x44, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x1e, 0x2, 
    0x2, 0x30e, 0x30f, 0x5, 0x3a, 0x1e, 0x2, 0x30f, 0x318, 0x7, 0x42, 0x2, 
    0x2, 0x310, 0x315, 0x5, 0x92, 0x4a, 0x2, 0x311, 0x312, 0x7, 0x41, 0x2, 
    0x2, 0x312, 0x314, 0x5, 0x92, 0x4a, 0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x314, 0x317, 0x3, 0x2, 0x2, 0x2, 0x315, 0x313, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x316, 0x3, 0x2, 0x2, 0x2, 0x316, 0x319, 0x3, 0x2, 0x2, 
    0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 0x2, 0x318, 0x310, 0x3, 0x2, 0x2, 
    0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x3, 0x2, 0x2, 
    0x2, 0x31a, 0x323, 0x7, 0x42, 0x2, 0x2, 0x31b, 0x320, 0x5, 0x94, 0x4b, 
    0x2, 0x31c, 0x31d, 0x7, 0x41, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0x94, 0x4b, 
    0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x322, 0x3, 0x2, 0x2, 
    0x2, 0x320, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x3, 0x2, 0x2, 
    0x2, 0x321, 0x324, 0x3, 0x2, 0x2, 0x2, 0x322, 0x320, 0x3, 0x2, 0x2, 
    0x2, 0x323, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x323, 0x324, 0x3, 0x2, 0x2, 
    0x2, 0x324, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 0x7, 0x42, 0x2, 
    0x2, 0x326, 0x32b, 0x5, 0x96, 0x4c, 0x2, 0x327, 0x328, 0x7, 0x41, 0x2, 
    0x2, 0x328, 0x32a, 0x5, 0x96, 0x4c, 0x2, 0x329, 0x327, 0x3, 0x2, 0x2, 
    0x2, 0x32a, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x329, 0x3, 0x2, 0x2, 
    0x2, 0x32b, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32f, 0x3, 0x2, 0x2, 
    0x2, 0x32d, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x325, 0x3, 0x2, 0x2, 
    0x2, 0x32e, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x3, 0x2, 0x2, 
    0x2, 0x330, 0x331, 0x7, 0x1f, 0x2, 0x2, 0x331, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x332, 0x333, 0x5, 0x3a, 0x1e, 0x2, 0x333, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x334, 0x335, 0x7, 0x4b, 0x2, 0x2, 0x335, 0x336, 0x7, 0x1e, 0x2, 
    0x2, 0x336, 0x337, 0x5, 0x8, 0x5, 0x2, 0x337, 0x338, 0x7, 0x1f, 0x2, 
    0x2, 0x338, 0x93, 0x3, 0x2, 0x2, 0x2, 0x339, 0x33a, 0x7, 0x4b, 0x2, 
    0x2, 0x33a, 0x33b, 0x7, 0x1e, 0x2, 0x2, 0x33b, 0x33c, 0x5, 0x8, 0x5, 
    0x2, 0x33c, 0x33d, 0x7, 0x1f, 0x2, 0x2, 0x33d, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x33e, 0x33f, 0x7, 0x4b, 0x2, 0x2, 0x33f, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x340, 0x341, 0x9, 0x9, 0x2, 0x2, 0x341, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x9d, 0xa6, 0xc8, 0xd2, 0xd7, 0xea, 0x114, 0x121, 0x123, 0x127, 
    0x12f, 0x133, 0x13c, 0x147, 0x156, 0x170, 0x17c, 0x184, 0x18f, 0x197, 
    0x19b, 0x1a2, 0x1c7, 0x1cb, 0x1d0, 0x1d7, 0x1da, 0x1e0, 0x1e3, 0x1e5, 
    0x1ea, 0x1ef, 0x1fa, 0x1ff, 0x205, 0x20a, 0x20e, 0x223, 0x22b, 0x240, 
    0x244, 0x246, 0x24d, 0x256, 0x25e, 0x262, 0x26c, 0x276, 0x27d, 0x287, 
    0x28a, 0x291, 0x296, 0x29f, 0x2a3, 0x2a8, 0x2ac, 0x2b0, 0x2b9, 0x2be, 
    0x2c1, 0x2c3, 0x2cb, 0x2ce, 0x2d0, 0x2d5, 0x2df, 0x2eb, 0x2f6, 0x2fd, 
    0x305, 0x30a, 0x315, 0x318, 0x320, 0x323, 0x32b, 0x32e, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SandParser::Initializer SandParser::_init;
