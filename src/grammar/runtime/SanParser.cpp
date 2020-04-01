
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
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(46);
      statement();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
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
    setState(54);
    match(SanParser::OpeningBrace);
    setState(58);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(55);
      statement();
      setState(60);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
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
    setState(74);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Function: {
        enterOuterAlt(_localctx, 1);
        setState(63);
        function();
        break;
      }

      case SanParser::OpeningParen:
      case SanParser::VariableName:
      case SanParser::StringLiteral:
      case SanParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 2);
        setState(64);
        expression(0);
        setState(65);
        match(SanParser::InstructionsSeparator);
        break;
      }

      case SanParser::OpeningBrace: {
        enterOuterAlt(_localctx, 3);
        setState(67);
        body();
        break;
      }

      case SanParser::VariableDeclarator: {
        enterOuterAlt(_localctx, 4);
        setState(68);
        variableDeclaration();
        setState(69);
        match(SanParser::InstructionsSeparator);
        break;
      }

      case SanParser::Return: {
        enterOuterAlt(_localctx, 5);
        setState(71);
        returnStatement();
        setState(72);
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
    setState(83);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::OpeningParen: {
        _localctx = _tracker.createInstance<InParenExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(77);
        match(SanParser::OpeningParen);
        setState(78);
        expression(0);
        setState(79);
        match(SanParser::ClosingParen);
        break;
      }

      case SanParser::VariableName: {
        _localctx = _tracker.createInstance<VariableExpressionContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(81);
        match(SanParser::VariableName);
        break;
      }

      case SanParser::StringLiteral:
      case SanParser::IntegerLiteral: {
        _localctx = _tracker.createInstance<LiteralDeclarationContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(82);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(111);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(85);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(86);
          multiplicativeOperatorStatement();
          setState(87);
          expression(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(89);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(90);
          operatorStatement();
          setState(91);
          expression(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryBitwiseOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(93);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(94);
          bitwiseOperatorStatement();
          setState(95);
          expression(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryConditionalOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(97);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(98);
          conditionalOperatorStatement();
          setState(99);
          expression(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryComparisonOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(101);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(102);
          comparisonOperatorStatement();
          setState(103);
          expression(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(105);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(106);
          match(SanParser::OpeningParen);
          setState(108);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
            | (1ULL << SanParser::VariableName)
            | (1ULL << SanParser::StringLiteral)
            | (1ULL << SanParser::IntegerLiteral))) != 0)) {
            setState(107);
            functionCallArguments();
          }
          setState(110);
          match(SanParser::ClosingParen);
          break;
        }

        } 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
    setState(116);
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
    setState(118);
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
  enterRule(_localctx, 12, SanParser::RuleBitwiseOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
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
  enterRule(_localctx, 14, SanParser::RuleConditionalOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
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
  enterRule(_localctx, 16, SanParser::RuleComparisonOperatorStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
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
  enterRule(_localctx, 18, SanParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
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
  enterRule(_localctx, 20, SanParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(SanParser::VariableDeclarator);
    setState(129);
    match(SanParser::VariableName);
    setState(130);
    match(SanParser::Colon);
    setState(131);
    type();
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(132);
      match(SanParser::Equal);
      setState(133);
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
  enterRule(_localctx, 22, SanParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    functionCallArgument();
    setState(141);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(137);
      match(SanParser::Comma);
      setState(138);
      functionCallArgument();
      setState(143);
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
  enterRule(_localctx, 24, SanParser::RuleFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    expression(0);
   
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
  enterRule(_localctx, 26, SanParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    functionDeclaration();
    setState(148);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(147);
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
  enterRule(_localctx, 28, SanParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    match(SanParser::Function);
    setState(151);
    match(SanParser::VariableName);
    setState(152);
    match(SanParser::OpeningParen);
    setState(154);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::VariableName) {
      setState(153);
      functionArguments();
    }
    setState(156);
    match(SanParser::ClosingParen);
    setState(159);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Colon) {
      setState(157);
      match(SanParser::Colon);
      setState(158);
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
  enterRule(_localctx, 30, SanParser::RuleFunctionArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    functionArgument();
    setState(166);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(162);
      match(SanParser::Comma);
      setState(163);
      functionArgument();
      setState(168);
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
  enterRule(_localctx, 32, SanParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(SanParser::VariableName);
    setState(170);
    match(SanParser::Colon);
    setState(171);
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
  enterRule(_localctx, 34, SanParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(SanParser::Return);
    setState(175);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(174);
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
  enterRule(_localctx, 36, SanParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Const) {
      setState(177);
      typeQualifier();
      setState(182);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(183);
    typeName();
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::OpeningBracket) {
      setState(184);
      typeDimensions();
      setState(189);
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
  enterRule(_localctx, 38, SanParser::RuleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
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
  enterRule(_localctx, 40, SanParser::RuleTypeDimensions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(SanParser::OpeningBracket);
    setState(193);
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
  enterRule(_localctx, 42, SanParser::RuleTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
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
  enterRule(_localctx, 44, SanParser::RuleEos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
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
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 2);

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
  "operatorStatement", "bitwiseOperatorStatement", "conditionalOperatorStatement", 
  "comparisonOperatorStatement", "literal", "variableDeclaration", "functionCallArguments", 
  "functionCallArgument", "function", "functionDeclaration", "functionArguments", 
  "functionArgument", "returnStatement", "type", "typeQualifier", "typeDimensions", 
  "typeName", "eos"
};

std::vector<std::string> SanParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'||'", "'&&'", "'=='", "'!='", 
  "'<='", "'>='", "'<'", "'>'", "'^'", "'|'", "'&'", "'='", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "'void'", "", "'i8'", "'i16'", "'i32'", "'i64'", 
  "'u8'", "'u16'", "'u32'", "'u64'", "'f32'", "'f64'", "'const'", "'let'", 
  "'fn'", "'return'", "','", "':'", "", "", "", "", "", "", "'0'"
};

std::vector<std::string> SanParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "ConditionalOr", "ConditionalAnd", 
  "EqualTo", "NotEqualTo", "LessThanOrEqualTo", "GreaterThanOrEqualTo", 
  "LessThan", "GreaterThan", "Xor", "BitwiseOr", "BitwiseAnd", "Equal", 
  "OpeningParen", "ClosingParen", "OpeningBrace", "ClosingBrace", "OpeningBracket", 
  "ClosingBracket", "Void", "Bool", "Int8", "Int16", "Int32", "Int64", "UInt8", 
  "UInt16", "UInt32", "UInt64", "Float32", "Float64", "Const", "VariableDeclarator", 
  "Function", "Return", "Comma", "Colon", "InstructionsSeparator", "VariableName", 
  "StringLiteral", "CharLiteral", "IntegerLiteral", "DecimalLiteral", "ZeroLiteral", 
  "HexadecimalLiteral", "BinaryLiteral", "WhiteSpace", "LineTerminator"
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
    0x3, 0x36, 0xca, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x3, 0x2, 0x7, 0x2, 0x32, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x35, 0xb, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x4d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x56, 0xa, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x6f, 0xa, 0x5, 0x3, 0x5, 0x7, 0x5, 0x72, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x75, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x89, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x7, 0xd, 0x8e, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x91, 0xb, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x97, 0xa, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x9d, 0xa, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xa2, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xa7, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xaa, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 
    0x13, 0xb2, 0xa, 0x13, 0x3, 0x14, 0x7, 0x14, 0xb5, 0xa, 0x14, 0xc, 0x14, 
    0xe, 0x14, 0xb8, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xbc, 0xa, 
    0x14, 0xc, 0x14, 0xe, 0x14, 0xbf, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x2, 0x3, 0x8, 0x19, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x2, 0xa, 0x3, 0x2, 0x5, 0x7, 0x3, 0x2, 0x3, 0x4, 
    0x3, 0x2, 0x10, 0x12, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0xa, 0xf, 0x4, 0x2, 
    0x2e, 0x2e, 0x30, 0x30, 0x4, 0x2, 0x1c, 0x25, 0x2d, 0x2d, 0x3, 0x3, 
    0x36, 0x36, 0x2, 0xca, 0x2, 0x33, 0x3, 0x2, 0x2, 0x2, 0x4, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x76, 0x3, 0x2, 0x2, 0x2, 0xc, 0x78, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x80, 0x3, 0x2, 0x2, 0x2, 0x16, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x94, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x22, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x26, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x30, 0x32, 0x5, 
    0x6, 0x4, 0x2, 0x31, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x5, 0x2e, 0x18, 0x2, 0x37, 0x3, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x3c, 0x7, 0x16, 0x2, 0x2, 0x39, 0x3b, 0x5, 0x6, 0x4, 0x2, 0x3a, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x17, 0x2, 
    0x2, 0x40, 0x5, 0x3, 0x2, 0x2, 0x2, 0x41, 0x4d, 0x5, 0x1c, 0xf, 0x2, 
    0x42, 0x43, 0x5, 0x8, 0x5, 0x2, 0x43, 0x44, 0x7, 0x2c, 0x2, 0x2, 0x44, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x45, 0x4d, 0x5, 0x4, 0x3, 0x2, 0x46, 0x47, 
    0x5, 0x16, 0xc, 0x2, 0x47, 0x48, 0x7, 0x2c, 0x2, 0x2, 0x48, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x24, 0x13, 0x2, 0x4a, 0x4b, 0x7, 0x2c, 
    0x2, 0x2, 0x4b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x42, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4d, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x8, 0x5, 0x1, 0x2, 0x4f, 0x50, 
    0x7, 0x14, 0x2, 0x2, 0x50, 0x51, 0x5, 0x8, 0x5, 0x2, 0x51, 0x52, 0x7, 
    0x15, 0x2, 0x2, 0x52, 0x56, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x7, 0x2d, 
    0x2, 0x2, 0x54, 0x56, 0x5, 0x14, 0xb, 0x2, 0x55, 0x4e, 0x3, 0x2, 0x2, 
    0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x73, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0xc, 0xa, 0x2, 0x2, 0x58, 
    0x59, 0x5, 0xa, 0x6, 0x2, 0x59, 0x5a, 0x5, 0x8, 0x5, 0xb, 0x5a, 0x72, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0xc, 0x9, 0x2, 0x2, 0x5c, 0x5d, 0x5, 
    0xc, 0x7, 0x2, 0x5d, 0x5e, 0x5, 0x8, 0x5, 0xa, 0x5e, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x60, 0xc, 0x8, 0x2, 0x2, 0x60, 0x61, 0x5, 0xe, 0x8, 
    0x2, 0x61, 0x62, 0x5, 0x8, 0x5, 0x9, 0x62, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x64, 0xc, 0x7, 0x2, 0x2, 0x64, 0x65, 0x5, 0x10, 0x9, 0x2, 0x65, 
    0x66, 0x5, 0x8, 0x5, 0x8, 0x66, 0x72, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
    0xc, 0x6, 0x2, 0x2, 0x68, 0x69, 0x5, 0x12, 0xa, 0x2, 0x69, 0x6a, 0x5, 
    0x8, 0x5, 0x7, 0x6a, 0x72, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0xc, 0x4, 
    0x2, 0x2, 0x6c, 0x6e, 0x7, 0x14, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x18, 0xd, 
    0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x7, 0x15, 0x2, 0x2, 0x71, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x71, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x71, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x63, 0x3, 0x2, 0x2, 0x2, 0x71, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x9, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x9, 0x2, 0x2, 0x2, 0x77, 0xb, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x79, 0x9, 0x3, 0x2, 0x2, 0x79, 0xd, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x9, 0x4, 0x2, 0x2, 0x7b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x9, 
    0x5, 0x2, 0x2, 0x7d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x9, 0x6, 
    0x2, 0x2, 0x7f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x9, 0x7, 0x2, 
    0x2, 0x81, 0x15, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 0x27, 0x2, 0x2, 
    0x83, 0x84, 0x7, 0x2d, 0x2, 0x2, 0x84, 0x85, 0x7, 0x2b, 0x2, 0x2, 0x85, 
    0x88, 0x5, 0x26, 0x14, 0x2, 0x86, 0x87, 0x7, 0x13, 0x2, 0x2, 0x87, 0x89, 
    0x5, 0x8, 0x5, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8f, 0x5, 0x1a, 
    0xe, 0x2, 0x8b, 0x8c, 0x7, 0x2a, 0x2, 0x2, 0x8c, 0x8e, 0x5, 0x1a, 0xe, 
    0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 
    0x5, 0x8, 0x5, 0x2, 0x93, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x5, 
    0x1e, 0x10, 0x2, 0x95, 0x97, 0x5, 0x4, 0x3, 0x2, 0x96, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x99, 0x7, 0x28, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x2d, 0x2, 0x2, 
    0x9a, 0x9c, 0x7, 0x14, 0x2, 0x2, 0x9b, 0x9d, 0x5, 0x20, 0x11, 0x2, 0x9c, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0x9e, 0xa1, 0x7, 0x15, 0x2, 0x2, 0x9f, 0xa0, 0x7, 
    0x2b, 0x2, 0x2, 0xa0, 0xa2, 0x5, 0x26, 0x14, 0x2, 0xa1, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa8, 0x5, 0x22, 0x12, 0x2, 0xa4, 0xa5, 0x7, 0x2a, 0x2, 0x2, 
    0xa5, 0xa7, 0x5, 0x22, 0x12, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0x21, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x2d, 0x2, 0x2, 0xac, 0xad, 0x7, 0x2b, 
    0x2, 0x2, 0xad, 0xae, 0x5, 0x26, 0x14, 0x2, 0xae, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb1, 0x7, 0x29, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x8, 0x5, 0x2, 
    0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x5, 0x28, 0x15, 0x2, 0xb4, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbd, 0x5, 0x2c, 0x17, 
    0x2, 0xba, 0xbc, 0x5, 0x2a, 0x16, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 
    0xbc, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x27, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x26, 0x2, 0x2, 0xc1, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x18, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x19, 
    0x2, 0x2, 0xc4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x9, 0x8, 0x2, 
    0x2, 0xc6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x9, 0x9, 0x2, 0x2, 
    0xc8, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x33, 0x3c, 0x4c, 0x55, 0x6e, 
    0x71, 0x73, 0x88, 0x8f, 0x96, 0x9c, 0xa1, 0xa8, 0xb1, 0xb6, 0xbd, 
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
