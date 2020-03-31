
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
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::ConstQualifier)
      | (1ULL << SanParser::LetQualifier)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(36);
      statement();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
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
    setState(44);
    match(SanParser::OpeningBrace);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::ConstQualifier)
      | (1ULL << SanParser::LetQualifier)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(45);
      statement();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
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

SanParser::ExpressionContext* SanParser::StatementContext::expression() {
  return getRuleContext<SanParser::ExpressionContext>(0);
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
    setState(58);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Function: {
        enterOuterAlt(_localctx, 1);
        setState(53);
        function();
        break;
      }

      case SanParser::OpeningParen:
      case SanParser::VariableName:
      case SanParser::StringLiteral:
      case SanParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(54);
        expression(0);
        break;
      }

      case SanParser::OpeningBrace: {
        enterOuterAlt(_localctx, 3);
        setState(55);
        body();
        break;
      }

      case SanParser::ConstQualifier:
      case SanParser::LetQualifier: {
        enterOuterAlt(_localctx, 4);
        setState(56);
        variableDeclaration();
        break;
      }

      case SanParser::Return: {
        enterOuterAlt(_localctx, 5);
        setState(57);
        returnStatement();
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
//----------------- VariableExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::VariableExpressionContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::VariableExpressionContext::VariableExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::VariableExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitVariableExpression(this);
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

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::OpeningParen: {
        _localctx = _tracker.createInstance<InParenExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(61);
        match(SanParser::OpeningParen);
        setState(62);
        expression(0);
        setState(63);
        match(SanParser::ClosingParen);
        break;
      }

      case SanParser::VariableName: {
        _localctx = _tracker.createInstance<VariableExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(65);
        match(SanParser::VariableName);
        break;
      }

      case SanParser::StringLiteral:
      case SanParser::IntegerLiteral: {
        _localctx = _tracker.createInstance<LiteralDeclarationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(66);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(77);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(69);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(70);
          multiplicativeOperatorStatement();
          setState(71);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(73);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(74);
          operatorStatement();
          setState(75);
          expression(4);
          break;
        }

        } 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
  enterRule(_localctx, 8, SanParser::RuleMultiplicativeOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
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
  enterRule(_localctx, 10, SanParser::RuleOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
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

//----------------- LiteralContext ------------------------------------------------------------------

SanParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::LiteralContext::IntegerLiteral() {
  return getToken(SanParser::IntegerLiteral, 0);
}

tree::TerminalNode* SanParser::LiteralContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
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
  enterRule(_localctx, 12, SanParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _la = _input->LA(1);
    if (!(_la == SanParser::StringLiteral

    || _la == SanParser::IntegerLiteral)) {
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

//----------------- VariableDeclarationContext ------------------------------------------------------------------

SanParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::VariableQualifierContext* SanParser::VariableDeclarationContext::variableQualifier() {
  return getRuleContext<SanParser::VariableQualifierContext>(0);
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
  enterRule(_localctx, 14, SanParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    variableQualifier();
    setState(89);
    match(SanParser::VariableName);
    setState(90);
    match(SanParser::Colon);
    setState(91);
    type();
    setState(94);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(92);
      match(SanParser::Equal);
      setState(93);
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

//----------------- VariableQualifierContext ------------------------------------------------------------------

SanParser::VariableQualifierContext::VariableQualifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::VariableQualifierContext::ConstQualifier() {
  return getToken(SanParser::ConstQualifier, 0);
}

tree::TerminalNode* SanParser::VariableQualifierContext::LetQualifier() {
  return getToken(SanParser::LetQualifier, 0);
}


size_t SanParser::VariableQualifierContext::getRuleIndex() const {
  return SanParser::RuleVariableQualifier;
}


antlrcpp::Any SanParser::VariableQualifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitVariableQualifier(this);
  else
    return visitor->visitChildren(this);
}

SanParser::VariableQualifierContext* SanParser::variableQualifier() {
  VariableQualifierContext *_localctx = _tracker.createInstance<VariableQualifierContext>(_ctx, getState());
  enterRule(_localctx, 16, SanParser::RuleVariableQualifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    _la = _input->LA(1);
    if (!(_la == SanParser::ConstQualifier

    || _la == SanParser::LetQualifier)) {
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

//----------------- FunctionContext ------------------------------------------------------------------

SanParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::FunctionDeclarationContext* SanParser::FunctionContext::functionDeclaration() {
  return getRuleContext<SanParser::FunctionDeclarationContext>(0);
}

SanParser::BodyContext* SanParser::FunctionContext::body() {
  return getRuleContext<SanParser::BodyContext>(0);
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
  enterRule(_localctx, 18, SanParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    functionDeclaration();
    setState(100);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(99);
      body();
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

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

SanParser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Function() {
  return getToken(SanParser::Function, 0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::OpeningParen() {
  return getToken(SanParser::OpeningParen, 0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::ClosingParen() {
  return getToken(SanParser::ClosingParen, 0);
}

SanParser::FunctionArgumentsContext* SanParser::FunctionDeclarationContext::functionArguments() {
  return getRuleContext<SanParser::FunctionArgumentsContext>(0);
}

tree::TerminalNode* SanParser::FunctionDeclarationContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::FunctionDeclarationContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
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
  enterRule(_localctx, 20, SanParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(SanParser::Function);
    setState(103);
    match(SanParser::VariableName);
    setState(104);
    match(SanParser::OpeningParen);
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::VariableName) {
      setState(105);
      functionArguments();
    }
    setState(108);
    match(SanParser::ClosingParen);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Colon) {
      setState(109);
      match(SanParser::Colon);
      setState(110);
      type();
    }
   
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
  enterRule(_localctx, 22, SanParser::RuleFunctionArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    functionArgument();
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(114);
      match(SanParser::Comma);
      setState(115);
      functionArgument();
      setState(120);
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

//----------------- FunctionArgumentContext ------------------------------------------------------------------

SanParser::FunctionArgumentContext::FunctionArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FunctionArgumentContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::FunctionArgumentContext::Colon() {
  return getToken(SanParser::Colon, 0);
}

SanParser::TypeContext* SanParser::FunctionArgumentContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
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
  enterRule(_localctx, 24, SanParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(SanParser::VariableName);
    setState(122);
    match(SanParser::Colon);
    setState(123);
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
  enterRule(_localctx, 26, SanParser::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(SanParser::Return);
    setState(127);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(126);
      expression(0);
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

//----------------- TypeContext ------------------------------------------------------------------

SanParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::TypeNameContext* SanParser::TypeContext::typeName() {
  return getRuleContext<SanParser::TypeNameContext>(0);
}

std::vector<SanParser::TypeDimensionsContext *> SanParser::TypeContext::typeDimensions() {
  return getRuleContexts<SanParser::TypeDimensionsContext>();
}

SanParser::TypeDimensionsContext* SanParser::TypeContext::typeDimensions(size_t i) {
  return getRuleContext<SanParser::TypeDimensionsContext>(i);
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
  enterRule(_localctx, 28, SanParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    typeName();
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::OpeningBracket) {
      setState(130);
      typeDimensions();
      setState(135);
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

//----------------- TypeDimensionsContext ------------------------------------------------------------------

SanParser::TypeDimensionsContext::TypeDimensionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::TypeDimensionsContext::OpeningBracket() {
  return getToken(SanParser::OpeningBracket, 0);
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
  enterRule(_localctx, 30, SanParser::RuleTypeDimensions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(SanParser::OpeningBracket);
    setState(137);
    match(SanParser::ClosingBracket);
   
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

tree::TerminalNode* SanParser::TypeNameContext::Int8() {
  return getToken(SanParser::Int8, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::Int16() {
  return getToken(SanParser::Int16, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::Int32() {
  return getToken(SanParser::Int32, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::Int64() {
  return getToken(SanParser::Int64, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::UInt8() {
  return getToken(SanParser::UInt8, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::UInt16() {
  return getToken(SanParser::UInt16, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::UInt32() {
  return getToken(SanParser::UInt32, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::UInt64() {
  return getToken(SanParser::UInt64, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::Float32() {
  return getToken(SanParser::Float32, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::Float64() {
  return getToken(SanParser::Float64, 0);
}

tree::TerminalNode* SanParser::TypeNameContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
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
  enterRule(_localctx, 32, SanParser::RuleTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Int8)
      | (1ULL << SanParser::Int16)
      | (1ULL << SanParser::Int32)
      | (1ULL << SanParser::Int64)
      | (1ULL << SanParser::UInt8)
      | (1ULL << SanParser::UInt16)
      | (1ULL << SanParser::UInt32)
      | (1ULL << SanParser::UInt64)
      | (1ULL << SanParser::Float32)
      | (1ULL << SanParser::Float64)
      | (1ULL << SanParser::VariableName))) != 0))) {
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
  enterRule(_localctx, 34, SanParser::RuleEos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    _la = _input->LA(1);
    if (!(_la == SanParser::EOF

    || _la == SanParser::LineTerminator)) {
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
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

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
  "instructions", "body", "statement", "expression", "multiplicativeOperatorStatement", 
  "operatorStatement", "literal", "variableDeclaration", "variableQualifier", 
  "function", "functionDeclaration", "functionArguments", "functionArgument", 
  "returnStatement", "type", "typeDimensions", "typeName", "eos"
};

std::vector<std::string> SanParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'='", "'('", "')'", "'{'", "'}'", 
  "'['", "']'", "'void'", "", "'i8'", "'i16'", "'i32'", "'i64'", "'u8'", 
  "'u16'", "'u32'", "'u64'", "'f32'", "'f64'", "'const'", "'let'", "'fn'", 
  "'return'", "','", "':'", "", "", "", "", "", "'0'"
};

std::vector<std::string> SanParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "Equal", "OpeningParen", "ClosingParen", 
  "OpeningBrace", "ClosingBrace", "OpeningBracket", "ClosingBracket", "Void", 
  "Bool", "Int8", "Int16", "Int32", "Int64", "UInt8", "UInt16", "UInt32", 
  "UInt64", "Float32", "Float64", "ConstQualifier", "LetQualifier", "Function", 
  "Return", "Comma", "Colon", "VariableName", "StringLiteral", "CharLiteral", 
  "IntegerLiteral", "DecimalLiteral", "ZeroLiteral", "HexadecimalLiteral", 
  "BinaryLiteral", "WhiteSpace", "LineTerminator"
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
    0x3, 0x2a, 0x92, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x7, 0x2, 0x28, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x2b, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x31, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x34, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x3d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x46, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x50, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x53, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x61, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x67, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x6d, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x5, 0xc, 0x72, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x77, 
    0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x7a, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x82, 0xa, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x86, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x89, 0xb, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x2, 0x3, 0x8, 0x14, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x2, 0x8, 0x3, 0x2, 0x5, 0x7, 0x3, 0x2, 0x3, 0x4, 0x4, 0x2, 0x22, 
    0x22, 0x24, 0x24, 0x3, 0x2, 0x1b, 0x1c, 0x4, 0x2, 0x11, 0x1a, 0x21, 
    0x21, 0x3, 0x3, 0x2a, 0x2a, 0x2, 0x90, 0x2, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x54, 0x3, 0x2, 0x2, 0x2, 0xc, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x58, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5a, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x62, 0x3, 0x2, 0x2, 0x2, 0x14, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x68, 0x3, 0x2, 0x2, 0x2, 0x18, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x83, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x22, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x26, 0x28, 0x5, 0x6, 
    0x4, 0x2, 0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2d, 0x5, 0x24, 0x13, 0x2, 0x2d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x32, 
    0x7, 0xb, 0x2, 0x2, 0x2f, 0x31, 0x5, 0x6, 0x4, 0x2, 0x30, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0xc, 0x2, 0x2, 
    0x36, 0x5, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3d, 0x5, 0x14, 0xb, 0x2, 0x38, 
    0x3d, 0x5, 0x8, 0x5, 0x2, 0x39, 0x3d, 0x5, 0x4, 0x3, 0x2, 0x3a, 0x3d, 
    0x5, 0x10, 0x9, 0x2, 0x3b, 0x3d, 0x5, 0x1c, 0xf, 0x2, 0x3c, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x8, 0x5, 0x1, 0x2, 
    0x3f, 0x40, 0x7, 0x9, 0x2, 0x2, 0x40, 0x41, 0x5, 0x8, 0x5, 0x2, 0x41, 
    0x42, 0x7, 0xa, 0x2, 0x2, 0x42, 0x46, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 
    0x7, 0x21, 0x2, 0x2, 0x44, 0x46, 0x5, 0xe, 0x8, 0x2, 0x45, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x51, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0xc, 0x6, 0x2, 
    0x2, 0x48, 0x49, 0x5, 0xa, 0x6, 0x2, 0x49, 0x4a, 0x5, 0x8, 0x5, 0x7, 
    0x4a, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0xc, 0x5, 0x2, 0x2, 0x4c, 
    0x4d, 0x5, 0xc, 0x7, 0x2, 0x4d, 0x4e, 0x5, 0x8, 0x5, 0x6, 0x4e, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x9, 0x2, 0x2, 0x2, 
    0x55, 0xb, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x9, 0x3, 0x2, 0x2, 0x57, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x9, 0x4, 0x2, 0x2, 0x59, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x12, 0xa, 0x2, 0x5b, 0x5c, 0x7, 
    0x21, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x20, 0x2, 0x2, 0x5d, 0x60, 0x5, 0x1e, 
    0x10, 0x2, 0x5e, 0x5f, 0x7, 0x8, 0x2, 0x2, 0x5f, 0x61, 0x5, 0x8, 0x5, 
    0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x11, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x9, 0x5, 0x2, 0x2, 0x63, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x64, 0x66, 0x5, 0x16, 0xc, 0x2, 0x65, 0x67, 
    0x5, 0x4, 0x3, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x15, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x7, 0x1d, 
    0x2, 0x2, 0x69, 0x6a, 0x7, 0x21, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0x9, 0x2, 
    0x2, 0x6b, 0x6d, 0x5, 0x18, 0xd, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x71, 0x7, 0xa, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x20, 0x2, 0x2, 0x70, 0x72, 
    0x5, 0x1e, 0x10, 0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x17, 0x3, 0x2, 0x2, 0x2, 0x73, 0x78, 0x5, 0x1a, 
    0xe, 0x2, 0x74, 0x75, 0x7, 0x1f, 0x2, 0x2, 0x75, 0x77, 0x5, 0x1a, 0xe, 
    0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 
    0x7, 0x21, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x20, 0x2, 0x2, 0x7d, 0x7e, 0x5, 
    0x1e, 0x10, 0x2, 0x7e, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x7, 0x1e, 
    0x2, 0x2, 0x80, 0x82, 0x5, 0x8, 0x5, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x87, 0x5, 0x22, 0x12, 0x2, 0x84, 0x86, 0x5, 0x20, 0x11, 0x2, 
    0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x89, 0x3, 0x2, 0x2, 0x2, 0x87, 
    0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
    0xd, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0xe, 0x2, 0x2, 0x8c, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x8d, 0x8e, 0x9, 0x6, 0x2, 0x2, 0x8e, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x8f, 0x90, 0x9, 0x7, 0x2, 0x2, 0x90, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xf, 0x29, 0x32, 0x3c, 0x45, 0x4f, 0x51, 0x60, 0x66, 0x6c, 0x71, 0x78, 
    0x81, 0x87, 
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
