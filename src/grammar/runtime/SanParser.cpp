
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
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Class)
      | (1ULL << SanParser::This)
      | (1ULL << SanParser::Namespace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::If)
      | (1ULL << SanParser::While)
      | (1ULL << SanParser::Break)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::CharLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(90);
      statement();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(96);
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
    setState(98);
    match(SanParser::OpeningBrace);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Class)
      | (1ULL << SanParser::This)
      | (1ULL << SanParser::Namespace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::If)
      | (1ULL << SanParser::While)
      | (1ULL << SanParser::Break)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::CharLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(99);
      statement();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
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

SanParser::BreakStatementContext* SanParser::StatementContext::breakStatement() {
  return getRuleContext<SanParser::BreakStatementContext>(0);
}

SanParser::ClassStatementContext* SanParser::StatementContext::classStatement() {
  return getRuleContext<SanParser::ClassStatementContext>(0);
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
    setState(125);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Function:
      case SanParser::Extern: {
        enterOuterAlt(_localctx, 1);
        setState(107);
        function();
        break;
      }

      case SanParser::Namespace: {
        enterOuterAlt(_localctx, 2);
        setState(108);
        namespaceStatement();
        break;
      }

      case SanParser::OpeningParen:
      case SanParser::SizeOf:
      case SanParser::This:
      case SanParser::VariableName:
      case SanParser::StringLiteral:
      case SanParser::CharLiteral:
      case SanParser::IntegerLiteral: {
        enterOuterAlt(_localctx, 3);
        setState(109);
        expression(0);
        setState(110);
        match(SanParser::InstructionsSeparator);
        break;
      }

      case SanParser::OpeningBrace: {
        enterOuterAlt(_localctx, 4);
        setState(112);
        body();
        break;
      }

      case SanParser::VariableDeclarator: {
        enterOuterAlt(_localctx, 5);
        setState(113);
        variableDeclaration();
        setState(114);
        match(SanParser::InstructionsSeparator);
        break;
      }

      case SanParser::Return: {
        enterOuterAlt(_localctx, 6);
        setState(116);
        returnStatement();
        setState(117);
        match(SanParser::InstructionsSeparator);
        break;
      }

      case SanParser::If: {
        enterOuterAlt(_localctx, 7);
        setState(119);
        ifStatement();
        break;
      }

      case SanParser::While: {
        enterOuterAlt(_localctx, 8);
        setState(120);
        whileStatement();
        break;
      }

      case SanParser::Break: {
        enterOuterAlt(_localctx, 9);
        setState(121);
        breakStatement();
        setState(122);
        match(SanParser::InstructionsSeparator);
        break;
      }

      case SanParser::Class: {
        enterOuterAlt(_localctx, 10);
        setState(124);
        classStatement();
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
//----------------- VariableExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::VariableExpressionContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ScopeResolverContext* SanParser::VariableExpressionContext::scopeResolver() {
  return getRuleContext<SanParser::ScopeResolverContext>(0);
}

SanParser::ClassTypeNameGenericsContext* SanParser::VariableExpressionContext::classTypeNameGenerics() {
  return getRuleContext<SanParser::ClassTypeNameGenericsContext>(0);
}

SanParser::VariableExpressionContext::VariableExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::VariableExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitVariableExpression(this);
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
//----------------- ThisExpressionContext ------------------------------------------------------------------

tree::TerminalNode* SanParser::ThisExpressionContext::This() {
  return getToken(SanParser::This, 0);
}

SanParser::ThisExpressionContext::ThisExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SanParser::ThisExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitThisExpression(this);
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

tree::TerminalNode* SanParser::PropertyExpressionContext::Dot() {
  return getToken(SanParser::Dot, 0);
}

tree::TerminalNode* SanParser::PropertyExpressionContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ClassTypeNameGenericsContext* SanParser::PropertyExpressionContext::classTypeNameGenerics() {
  return getRuleContext<SanParser::ClassTypeNameGenericsContext>(0);
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
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<InParenExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(128);
      match(SanParser::OpeningParen);
      setState(129);
      expression(0);
      setState(130);
      match(SanParser::ClosingParen);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<SizeofExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(132);
      match(SanParser::SizeOf);
      setState(133);
      type();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ClassInstantiationExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(134);
      classTypeName();
      setState(135);
      match(SanParser::OpeningBrace);
      setState(137);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SanParser::VariableName) {
        setState(136);
        classInstantiationProperties();
      }
      setState(139);
      match(SanParser::ClosingBrace);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ThisExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(141);
      match(SanParser::This);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<VariableExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(143);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(142);
        scopeResolver();
        break;
      }

      }
      setState(145);
      match(SanParser::VariableName);
      setState(147);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(146);
        classTypeNameGenerics();
        break;
      }

      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<LiteralDeclarationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(149);
      literal();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(198);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(196);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryMultiplicativeOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(152);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(153);
          multiplicativeOperatorStatement();
          setState(154);
          expression(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BinaryOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(156);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(157);
          operatorStatement();
          setState(158);
          expression(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BinaryBitwiseOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(160);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(161);
          bitwiseOperatorStatement();
          setState(162);
          expression(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<BinaryComparisonOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(164);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(165);
          comparisonOperatorStatement();
          setState(166);
          expression(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<BinaryConditionalOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(168);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(169);
          conditionalOperatorStatement();
          setState(170);
          expression(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<EqualityOperationContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(172);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(173);
          equalityOperatorStatement();
          setState(174);
          expression(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<PropertyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(176);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(177);
          match(SanParser::Dot);
          setState(178);
          match(SanParser::VariableName);
          setState(180);
          _errHandler->sync(this);

          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
          case 1: {
            setState(179);
            classTypeNameGenerics();
            break;
          }

          }
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<FunctionCallExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(182);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(183);
          match(SanParser::OpeningParen);
          setState(185);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
            | (1ULL << SanParser::SizeOf)
            | (1ULL << SanParser::This)
            | (1ULL << SanParser::VariableName)
            | (1ULL << SanParser::StringLiteral)
            | (1ULL << SanParser::CharLiteral)
            | (1ULL << SanParser::IntegerLiteral))) != 0)) {
            setState(184);
            functionCallArguments();
          }
          setState(187);
          match(SanParser::ClosingParen);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<IndexContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(188);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(189);
          match(SanParser::OpeningBracket);
          setState(190);
          expression(0);
          setState(191);
          match(SanParser::ClosingBracket);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<TypeCastContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(193);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(194);
          match(SanParser::As);
          setState(195);
          type();
          break;
        }

        } 
      }
      setState(200);
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
    setState(201);
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
    setState(203);
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
    setState(205);
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
    setState(207);
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
    setState(209);
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
  enterRule(_localctx, 18, SanParser::RuleEqualityOperatorStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
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

tree::TerminalNode* SanParser::LiteralContext::IntegerLiteral() {
  return getToken(SanParser::IntegerLiteral, 0);
}

tree::TerminalNode* SanParser::LiteralContext::StringLiteral() {
  return getToken(SanParser::StringLiteral, 0);
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
  enterRule(_localctx, 20, SanParser::RuleLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::CharLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0))) {
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
  enterRule(_localctx, 22, SanParser::RuleVariableDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    match(SanParser::VariableDeclarator);
    setState(216);
    match(SanParser::VariableName);
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Colon: {
        setState(217);
        match(SanParser::Colon);
        setState(218);
        type();
        setState(221);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SanParser::Equal) {
          setState(219);
          match(SanParser::Equal);
          setState(220);
          expression(0);
        }
        break;
      }

      case SanParser::Equal: {
        setState(223);
        match(SanParser::Equal);
        setState(224);
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
  enterRule(_localctx, 24, SanParser::RuleFunctionCallArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
    functionCallArgument();
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(228);
      match(SanParser::Comma);
      setState(229);
      functionCallArgument();
      setState(234);
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
  enterRule(_localctx, 26, SanParser::RuleFunctionCallArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
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
  enterRule(_localctx, 28, SanParser::RuleFunction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    functionDeclaration();
    setState(239);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(238);
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

tree::TerminalNode* SanParser::FunctionDeclarationContext::Extern() {
  return getToken(SanParser::Extern, 0);
}

SanParser::ClassGenericsContext* SanParser::FunctionDeclarationContext::classGenerics() {
  return getRuleContext<SanParser::ClassGenericsContext>(0);
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
  enterRule(_localctx, 30, SanParser::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extern) {
      setState(241);
      match(SanParser::Extern);
    }
    setState(244);
    match(SanParser::Function);
    setState(245);
    match(SanParser::VariableName);
    setState(247);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(246);
      classGenerics();
    }
    setState(249);
    match(SanParser::OpeningParen);
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Variadic)
      | (1ULL << SanParser::Void)
      | (1ULL << SanParser::Bool)
      | (1ULL << SanParser::Int8)
      | (1ULL << SanParser::Int16)
      | (1ULL << SanParser::Int32)
      | (1ULL << SanParser::Int64)
      | (1ULL << SanParser::UInt8)
      | (1ULL << SanParser::UInt16)
      | (1ULL << SanParser::UInt32)
      | (1ULL << SanParser::UInt64)
      | (1ULL << SanParser::Float32)
      | (1ULL << SanParser::Float64)
      | (1ULL << SanParser::Const)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::VariableName))) != 0)) {
      setState(250);
      functionArguments();
    }
    setState(253);
    match(SanParser::ClosingParen);
    setState(256);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Colon) {
      setState(254);
      match(SanParser::Colon);
      setState(255);
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
  enterRule(_localctx, 32, SanParser::RuleFunctionArguments);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    functionArgument();
    setState(263);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(259);
      match(SanParser::Comma);
      setState(260);
      functionArgument();
      setState(265);
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

SanParser::FunctionArgumentVariableContext* SanParser::FunctionArgumentContext::functionArgumentVariable() {
  return getRuleContext<SanParser::FunctionArgumentVariableContext>(0);
}

SanParser::FunctionArgumentVariadicContext* SanParser::FunctionArgumentContext::functionArgumentVariadic() {
  return getRuleContext<SanParser::FunctionArgumentVariadicContext>(0);
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
  enterRule(_localctx, 34, SanParser::RuleFunctionArgument);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Void:
      case SanParser::Bool:
      case SanParser::Int8:
      case SanParser::Int16:
      case SanParser::Int32:
      case SanParser::Int64:
      case SanParser::UInt8:
      case SanParser::UInt16:
      case SanParser::UInt32:
      case SanParser::UInt64:
      case SanParser::Float32:
      case SanParser::Float64:
      case SanParser::Const:
      case SanParser::Function:
      case SanParser::VariableName: {
        enterOuterAlt(_localctx, 1);
        setState(266);
        functionArgumentVariable();
        break;
      }

      case SanParser::Variadic: {
        enterOuterAlt(_localctx, 2);
        setState(267);
        functionArgumentVariadic();
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

//----------------- FunctionArgumentVariableContext ------------------------------------------------------------------

SanParser::FunctionArgumentVariableContext::FunctionArgumentVariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SanParser::TypeContext* SanParser::FunctionArgumentVariableContext::type() {
  return getRuleContext<SanParser::TypeContext>(0);
}

tree::TerminalNode* SanParser::FunctionArgumentVariableContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

tree::TerminalNode* SanParser::FunctionArgumentVariableContext::Colon() {
  return getToken(SanParser::Colon, 0);
}


size_t SanParser::FunctionArgumentVariableContext::getRuleIndex() const {
  return SanParser::RuleFunctionArgumentVariable;
}


antlrcpp::Any SanParser::FunctionArgumentVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgumentVariable(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionArgumentVariableContext* SanParser::functionArgumentVariable() {
  FunctionArgumentVariableContext *_localctx = _tracker.createInstance<FunctionArgumentVariableContext>(_ctx, getState());
  enterRule(_localctx, 36, SanParser::RuleFunctionArgumentVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(270);
      match(SanParser::VariableName);
      setState(271);
      match(SanParser::Colon);
      break;
    }

    }
    setState(274);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionArgumentVariadicContext ------------------------------------------------------------------

SanParser::FunctionArgumentVariadicContext::FunctionArgumentVariadicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::FunctionArgumentVariadicContext::Variadic() {
  return getToken(SanParser::Variadic, 0);
}


size_t SanParser::FunctionArgumentVariadicContext::getRuleIndex() const {
  return SanParser::RuleFunctionArgumentVariadic;
}


antlrcpp::Any SanParser::FunctionArgumentVariadicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitFunctionArgumentVariadic(this);
  else
    return visitor->visitChildren(this);
}

SanParser::FunctionArgumentVariadicContext* SanParser::functionArgumentVariadic() {
  FunctionArgumentVariadicContext *_localctx = _tracker.createInstance<FunctionArgumentVariadicContext>(_ctx, getState());
  enterRule(_localctx, 38, SanParser::RuleFunctionArgumentVariadic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(SanParser::Variadic);
   
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
  enterRule(_localctx, 40, SanParser::RuleReturnStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(278);
    match(SanParser::Return);
    setState(280);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::This)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::CharLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(279);
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
  enterRule(_localctx, 42, SanParser::RuleIfStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    match(SanParser::If);
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::OpeningParen:
      case SanParser::SizeOf:
      case SanParser::This:
      case SanParser::VariableName:
      case SanParser::StringLiteral:
      case SanParser::CharLiteral:
      case SanParser::IntegerLiteral: {
        setState(283);
        expression(0);
        break;
      }

      case SanParser::VariableDeclarator: {
        setState(284);
        variableDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(287);
    statement();
    setState(289);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(288);
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
  enterRule(_localctx, 44, SanParser::RuleElseStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    match(SanParser::Else);
    setState(292);
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
  enterRule(_localctx, 46, SanParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(SanParser::While);
    setState(295);
    expression(0);
    setState(296);
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
  enterRule(_localctx, 48, SanParser::RuleBreakStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(298);
    match(SanParser::Break);
   
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
  enterRule(_localctx, 50, SanParser::RuleClassStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(SanParser::Class);
    setState(301);
    match(SanParser::VariableName);
    setState(303);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::LessThan) {
      setState(302);
      classGenerics();
    }
    setState(307);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Extends) {
      setState(305);
      match(SanParser::Extends);
      setState(306);
      classExtends();
    }
    setState(309);
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
  enterRule(_localctx, 52, SanParser::RuleClassGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(SanParser::LessThan);
    setState(312);
    match(SanParser::VariableName);
    setState(317);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(313);
      match(SanParser::Comma);
      setState(314);
      match(SanParser::VariableName);
      setState(319);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(320);
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
  enterRule(_localctx, 54, SanParser::RuleClassExtends);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    classTypeName();
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(323);
      match(SanParser::Comma);
      setState(324);
      classTypeName();
      setState(329);
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
  enterRule(_localctx, 56, SanParser::RuleClassBody);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(SanParser::OpeningBrace);
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Static)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::VariableName))) != 0)) {
      setState(333);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(331);
        classProperty();
        break;
      }

      case 2: {
        setState(332);
        classMethod();
        break;
      }

      }
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(338);
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
  enterRule(_localctx, 58, SanParser::RuleClassProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(341);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Static) {
      setState(340);
      match(SanParser::Static);
    }
    setState(343);
    match(SanParser::VariableName);
    setState(344);
    match(SanParser::Colon);
    setState(345);
    type();
    setState(348);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(346);
      match(SanParser::Equal);
      setState(347);
      expression(0);
    }
    setState(350);
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
  enterRule(_localctx, 60, SanParser::RuleClassMethod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Static) {
      setState(352);
      match(SanParser::Static);
    }
    setState(355);
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
  enterRule(_localctx, 62, SanParser::RuleClassInstantiationProperties);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(357);
    classInstantiationProperty();
    setState(362);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(358);
        match(SanParser::Comma);
        setState(359);
        classInstantiationProperty(); 
      }
      setState(364);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
    setState(366);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Comma) {
      setState(365);
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
  enterRule(_localctx, 64, SanParser::RuleClassInstantiationProperty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(SanParser::VariableName);
    setState(371);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SanParser::Equal) {
      setState(369);
      match(SanParser::Equal);
      setState(370);
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
  enterRule(_localctx, 66, SanParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(376);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Const) {
      setState(373);
      typeQualifier();
      setState(378);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(379);
    typeName();
    setState(383);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(380);
        typeDimensions(); 
      }
      setState(385);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(387);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(386);
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
  enterRule(_localctx, 68, SanParser::RuleTypeQualifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(389);
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
  enterRule(_localctx, 70, SanParser::RuleTypeDimensions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(391);
    match(SanParser::OpeningBracket);
    setState(392);
    match(SanParser::ClosingBracket);
   
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
  enterRule(_localctx, 72, SanParser::RuleTypeReference);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
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

SanParser::PrimaryTypeNameContext* SanParser::TypeNameContext::primaryTypeName() {
  return getRuleContext<SanParser::PrimaryTypeNameContext>(0);
}

SanParser::FunctionTypeContext* SanParser::TypeNameContext::functionType() {
  return getRuleContext<SanParser::FunctionTypeContext>(0);
}

SanParser::ClassTypeNameContext* SanParser::TypeNameContext::classTypeName() {
  return getRuleContext<SanParser::ClassTypeNameContext>(0);
}

SanParser::ScopeResolverContext* SanParser::TypeNameContext::scopeResolver() {
  return getRuleContext<SanParser::ScopeResolverContext>(0);
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
  enterRule(_localctx, 74, SanParser::RuleTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SanParser::Void:
      case SanParser::Bool:
      case SanParser::Int8:
      case SanParser::Int16:
      case SanParser::Int32:
      case SanParser::Int64:
      case SanParser::UInt8:
      case SanParser::UInt16:
      case SanParser::UInt32:
      case SanParser::UInt64:
      case SanParser::Float32:
      case SanParser::Float64: {
        enterOuterAlt(_localctx, 1);
        setState(396);
        primaryTypeName();
        break;
      }

      case SanParser::Function: {
        enterOuterAlt(_localctx, 2);
        setState(397);
        functionType();
        break;
      }

      case SanParser::VariableName: {
        enterOuterAlt(_localctx, 3);
        setState(399);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
        case 1: {
          setState(398);
          scopeResolver();
          break;
        }

        }
        setState(401);
        classTypeName();
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

//----------------- PrimaryTypeNameContext ------------------------------------------------------------------

SanParser::PrimaryTypeNameContext::PrimaryTypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Int8() {
  return getToken(SanParser::Int8, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Int16() {
  return getToken(SanParser::Int16, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Int32() {
  return getToken(SanParser::Int32, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Int64() {
  return getToken(SanParser::Int64, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::UInt8() {
  return getToken(SanParser::UInt8, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::UInt16() {
  return getToken(SanParser::UInt16, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::UInt32() {
  return getToken(SanParser::UInt32, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::UInt64() {
  return getToken(SanParser::UInt64, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Float32() {
  return getToken(SanParser::Float32, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Float64() {
  return getToken(SanParser::Float64, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Void() {
  return getToken(SanParser::Void, 0);
}

tree::TerminalNode* SanParser::PrimaryTypeNameContext::Bool() {
  return getToken(SanParser::Bool, 0);
}


size_t SanParser::PrimaryTypeNameContext::getRuleIndex() const {
  return SanParser::RulePrimaryTypeName;
}


antlrcpp::Any SanParser::PrimaryTypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SanParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryTypeName(this);
  else
    return visitor->visitChildren(this);
}

SanParser::PrimaryTypeNameContext* SanParser::primaryTypeName() {
  PrimaryTypeNameContext *_localctx = _tracker.createInstance<PrimaryTypeNameContext>(_ctx, getState());
  enterRule(_localctx, 76, SanParser::RulePrimaryTypeName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(404);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Void)
      | (1ULL << SanParser::Bool)
      | (1ULL << SanParser::Int8)
      | (1ULL << SanParser::Int16)
      | (1ULL << SanParser::Int32)
      | (1ULL << SanParser::Int64)
      | (1ULL << SanParser::UInt8)
      | (1ULL << SanParser::UInt16)
      | (1ULL << SanParser::UInt32)
      | (1ULL << SanParser::UInt64)
      | (1ULL << SanParser::Float32)
      | (1ULL << SanParser::Float64))) != 0))) {
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
  enterRule(_localctx, 78, SanParser::RuleFunctionType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(406);
    match(SanParser::Function);
    setState(407);
    match(SanParser::OpeningParen);
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::Variadic)
      | (1ULL << SanParser::Void)
      | (1ULL << SanParser::Bool)
      | (1ULL << SanParser::Int8)
      | (1ULL << SanParser::Int16)
      | (1ULL << SanParser::Int32)
      | (1ULL << SanParser::Int64)
      | (1ULL << SanParser::UInt8)
      | (1ULL << SanParser::UInt16)
      | (1ULL << SanParser::UInt32)
      | (1ULL << SanParser::UInt64)
      | (1ULL << SanParser::Float32)
      | (1ULL << SanParser::Float64)
      | (1ULL << SanParser::Const)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::VariableName))) != 0)) {
      setState(408);
      functionArguments();
    }
    setState(411);
    match(SanParser::ClosingParen);
    setState(414);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      setState(412);
      match(SanParser::Colon);
      setState(413);
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

tree::TerminalNode* SanParser::ClassTypeNameContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ClassTypeNameGenericsContext* SanParser::ClassTypeNameContext::classTypeNameGenerics() {
  return getRuleContext<SanParser::ClassTypeNameGenericsContext>(0);
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
  enterRule(_localctx, 80, SanParser::RuleClassTypeName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    match(SanParser::VariableName);
    setState(418);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(417);
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
  enterRule(_localctx, 82, SanParser::RuleClassTypeNameGenerics);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(SanParser::LessThan);
    setState(421);
    type();
    setState(426);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SanParser::Comma) {
      setState(422);
      match(SanParser::Comma);
      setState(423);
      type();
      setState(428);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(429);
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
  enterRule(_localctx, 84, SanParser::RuleNamespaceStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(SanParser::Namespace);
    setState(432);
    match(SanParser::VariableName);
    setState(433);
    match(SanParser::OpeningBrace);
    setState(437);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SanParser::OpeningParen)
      | (1ULL << SanParser::OpeningBrace)
      | (1ULL << SanParser::SizeOf)
      | (1ULL << SanParser::Class)
      | (1ULL << SanParser::This)
      | (1ULL << SanParser::Namespace)
      | (1ULL << SanParser::VariableDeclarator)
      | (1ULL << SanParser::If)
      | (1ULL << SanParser::While)
      | (1ULL << SanParser::Break)
      | (1ULL << SanParser::Function)
      | (1ULL << SanParser::Extern)
      | (1ULL << SanParser::Return)
      | (1ULL << SanParser::VariableName)
      | (1ULL << SanParser::StringLiteral)
      | (1ULL << SanParser::CharLiteral)
      | (1ULL << SanParser::IntegerLiteral))) != 0)) {
      setState(434);
      statement();
      setState(439);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(440);
    match(SanParser::ClosingBrace);
   
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

tree::TerminalNode* SanParser::ScopeResolverContext::ScopeResolver() {
  return getToken(SanParser::ScopeResolver, 0);
}

tree::TerminalNode* SanParser::ScopeResolverContext::VariableName() {
  return getToken(SanParser::VariableName, 0);
}

SanParser::ClassTypeNameContext* SanParser::ScopeResolverContext::classTypeName() {
  return getRuleContext<SanParser::ClassTypeNameContext>(0);
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
  enterRule(_localctx, 86, SanParser::RuleScopeResolver);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(442);
      match(SanParser::VariableName);
      break;
    }

    case 2: {
      setState(443);
      classTypeName();
      break;
    }

    }
    setState(446);
    match(SanParser::ScopeResolver);
    setState(448);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      setState(447);
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
  enterRule(_localctx, 88, SanParser::RuleEos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(450);
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
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);
    case 6: return precpred(_ctx, 13);
    case 7: return precpred(_ctx, 12);
    case 8: return precpred(_ctx, 11);
    case 9: return precpred(_ctx, 4);

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
  "comparisonOperatorStatement", "equalityOperatorStatement", "literal", 
  "variableDeclaration", "functionCallArguments", "functionCallArgument", 
  "function", "functionDeclaration", "functionArguments", "functionArgument", 
  "functionArgumentVariable", "functionArgumentVariadic", "returnStatement", 
  "ifStatement", "elseStatement", "whileStatement", "breakStatement", "classStatement", 
  "classGenerics", "classExtends", "classBody", "classProperty", "classMethod", 
  "classInstantiationProperties", "classInstantiationProperty", "type", 
  "typeQualifier", "typeDimensions", "typeReference", "typeName", "primaryTypeName", 
  "functionType", "classTypeName", "classTypeNameGenerics", "namespaceStatement", 
  "scopeResolver", "eos"
};

std::vector<std::string> SanParser::_literalNames = {
  "", "'+'", "'-'", "'*'", "'/'", "'%'", "'||'", "'&&'", "'=='", "'!='", 
  "'<='", "'>='", "'<'", "'>'", "'^'", "'|'", "'&'", "'='", "'('", "')'", 
  "'{'", "'}'", "'['", "']'", "'...'", "'void'", "", "'i8'", "'i16'", "'i32'", 
  "'i64'", "'u8'", "'u16'", "'u32'", "'u64'", "'f32'", "'f64'", "'as'", 
  "'sizeof'", "'const'", "'class'", "'extends'", "'static'", "'this'", "'.'", 
  "'namespace'", "'::'", "'let'", "'if'", "'else'", "'while'", "'break'", 
  "'fn'", "'extern'", "'return'", "','", "':'", "", "", "", "", "", "", 
  "'0'"
};

std::vector<std::string> SanParser::_symbolicNames = {
  "", "Add", "Sub", "Mul", "Div", "Mod", "ConditionalOr", "ConditionalAnd", 
  "EqualTo", "NotEqualTo", "LessThanOrEqualTo", "GreaterThanOrEqualTo", 
  "LessThan", "GreaterThan", "Xor", "BitwiseOr", "BitwiseAnd", "Equal", 
  "OpeningParen", "ClosingParen", "OpeningBrace", "ClosingBrace", "OpeningBracket", 
  "ClosingBracket", "Variadic", "Void", "Bool", "Int8", "Int16", "Int32", 
  "Int64", "UInt8", "UInt16", "UInt32", "UInt64", "Float32", "Float64", 
  "As", "SizeOf", "Const", "Class", "Extends", "Static", "This", "Dot", 
  "Namespace", "ScopeResolver", "VariableDeclarator", "If", "Else", "While", 
  "Break", "Function", "Extern", "Return", "Comma", "Colon", "InstructionsSeparator", 
  "VariableName", "StringLiteral", "CharLiteral", "IntegerLiteral", "DecimalLiteral", 
  "ZeroLiteral", "HexadecimalLiteral", "BinaryLiteral", "Comment", "WhiteSpace", 
  "LineTerminator"
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
    0x3, 0x46, 0x1c7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x3, 0x2, 
    0x7, 0x2, 0x5e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x61, 0xb, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x67, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x6a, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x80, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x8c, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x92, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x96, 0xa, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x99, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xb7, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0xbc, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0xc7, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0xca, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xe0, 0xa, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xe4, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0xe9, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xec, 0xb, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xf2, 0xa, 0x10, 0x3, 0x11, 0x5, 
    0x11, 0xf5, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xfa, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xfe, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x103, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x108, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x10b, 
    0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x10f, 0xa, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x5, 0x14, 0x113, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x11b, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x120, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x124, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x132, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x136, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x13e, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 
    0x141, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x7, 0x1d, 0x148, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x14b, 0xb, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x150, 0xa, 0x1e, 0xc, 0x1e, 
    0xe, 0x1e, 0x153, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x5, 0x1f, 
    0x158, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x5, 0x1f, 0x15f, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x5, 0x20, 
    0x164, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x16b, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x16e, 0xb, 0x21, 
    0x3, 0x21, 0x5, 0x21, 0x171, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x5, 0x22, 0x176, 0xa, 0x22, 0x3, 0x23, 0x7, 0x23, 0x179, 0xa, 0x23, 
    0xc, 0x23, 0xe, 0x23, 0x17c, 0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 
    0x180, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x183, 0xb, 0x23, 0x3, 0x23, 
    0x5, 0x23, 0x186, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 
    0x27, 0x192, 0xa, 0x27, 0x3, 0x27, 0x5, 0x27, 0x195, 0xa, 0x27, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x19c, 
    0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1a1, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x1a5, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x7, 0x2b, 0x1ab, 0xa, 0x2b, 0xc, 0x2b, 0xe, 0x2b, 
    0x1ae, 0xb, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x7, 0x2c, 0x1b6, 0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x1b9, 
    0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1bf, 
    0xa, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x1c3, 0xa, 0x2d, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x2, 0x3, 0x8, 0x2f, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x2, 0xa, 0x3, 0x2, 0x5, 0x7, 0x3, 0x2, 0x3, 
    0x4, 0x3, 0x2, 0x10, 0x12, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0xa, 0xf, 0x3, 
    0x2, 0x3d, 0x3f, 0x3, 0x2, 0x1b, 0x26, 0x3, 0x3, 0x46, 0x46, 0x2, 0x1df, 
    0x2, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x64, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x98, 0x3, 0x2, 0x2, 0x2, 0xa, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xe, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x12, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0x16, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xef, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf4, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x104, 0x3, 0x2, 0x2, 0x2, 0x24, 0x10e, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x112, 0x3, 0x2, 0x2, 0x2, 0x28, 0x116, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x30, 0x128, 0x3, 0x2, 0x2, 0x2, 0x32, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x36, 0x139, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x144, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x157, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x167, 0x3, 0x2, 0x2, 0x2, 0x42, 0x172, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x46, 0x187, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x189, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x194, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x196, 0x3, 0x2, 0x2, 0x2, 0x50, 0x198, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 0x5, 0x6, 0x4, 0x2, 
    0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x62, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 
    0x5a, 0x2e, 0x2, 0x63, 0x3, 0x3, 0x2, 0x2, 0x2, 0x64, 0x68, 0x7, 0x16, 
    0x2, 0x2, 0x65, 0x67, 0x5, 0x6, 0x4, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 
    0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x17, 0x2, 0x2, 0x6c, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x80, 0x5, 0x1e, 0x10, 0x2, 0x6e, 0x80, 0x5, 
    0x56, 0x2c, 0x2, 0x6f, 0x70, 0x5, 0x8, 0x5, 0x2, 0x70, 0x71, 0x7, 0x3b, 
    0x2, 0x2, 0x71, 0x80, 0x3, 0x2, 0x2, 0x2, 0x72, 0x80, 0x5, 0x4, 0x3, 
    0x2, 0x73, 0x74, 0x5, 0x18, 0xd, 0x2, 0x74, 0x75, 0x7, 0x3b, 0x2, 0x2, 
    0x75, 0x80, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 0x2a, 0x16, 0x2, 0x77, 
    0x78, 0x7, 0x3b, 0x2, 0x2, 0x78, 0x80, 0x3, 0x2, 0x2, 0x2, 0x79, 0x80, 
    0x5, 0x2c, 0x17, 0x2, 0x7a, 0x80, 0x5, 0x30, 0x19, 0x2, 0x7b, 0x7c, 
    0x5, 0x32, 0x1a, 0x2, 0x7c, 0x7d, 0x7, 0x3b, 0x2, 0x2, 0x7d, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x80, 0x5, 0x34, 0x1b, 0x2, 0x7f, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x7, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x8, 
    0x5, 0x1, 0x2, 0x82, 0x83, 0x7, 0x14, 0x2, 0x2, 0x83, 0x84, 0x5, 0x8, 
    0x5, 0x2, 0x84, 0x85, 0x7, 0x15, 0x2, 0x2, 0x85, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0x7, 0x28, 0x2, 0x2, 0x87, 0x99, 0x5, 0x44, 0x23, 0x2, 
    0x88, 0x89, 0x5, 0x52, 0x2a, 0x2, 0x89, 0x8b, 0x7, 0x16, 0x2, 0x2, 0x8a, 
    0x8c, 0x5, 0x40, 0x21, 0x2, 0x8b, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 
    0x17, 0x2, 0x2, 0x8e, 0x99, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x99, 0x7, 0x2d, 
    0x2, 0x2, 0x90, 0x92, 0x5, 0x58, 0x2d, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x95, 0x7, 0x3c, 0x2, 0x2, 0x94, 0x96, 0x5, 0x54, 0x2b, 0x2, 0x95, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 0x5, 0x16, 0xc, 0x2, 0x98, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x86, 0x3, 0x2, 0x2, 0x2, 0x98, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x98, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0x9b, 0xc, 0xc, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0xa, 0x6, 0x2, 0x9c, 
    0x9d, 0x5, 0x8, 0x5, 0xd, 0x9d, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 
    0xc, 0xb, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0xc, 0x7, 0x2, 0xa0, 0xa1, 0x5, 
    0x8, 0x5, 0xc, 0xa1, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0xc, 0xa, 
    0x2, 0x2, 0xa3, 0xa4, 0x5, 0xe, 0x8, 0x2, 0xa4, 0xa5, 0x5, 0x8, 0x5, 
    0xb, 0xa5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0xc, 0x9, 0x2, 0x2, 
    0xa7, 0xa8, 0x5, 0x12, 0xa, 0x2, 0xa8, 0xa9, 0x5, 0x8, 0x5, 0xa, 0xa9, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0xc, 0x8, 0x2, 0x2, 0xab, 0xac, 
    0x5, 0x10, 0x9, 0x2, 0xac, 0xad, 0x5, 0x8, 0x5, 0x9, 0xad, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xaf, 0xc, 0x7, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x14, 
    0xb, 0x2, 0xb0, 0xb1, 0x5, 0x8, 0x5, 0x8, 0xb1, 0xc7, 0x3, 0x2, 0x2, 
    0x2, 0xb2, 0xb3, 0xc, 0xf, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x2e, 0x2, 0x2, 
    0xb4, 0xb6, 0x7, 0x3c, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x54, 0x2b, 0x2, 0xb6, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0xc, 0xe, 0x2, 0x2, 0xb9, 0xbb, 0x7, 
    0x14, 0x2, 0x2, 0xba, 0xbc, 0x5, 0x1a, 0xe, 0x2, 0xbb, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xc7, 0x7, 0x15, 0x2, 0x2, 0xbe, 0xbf, 0xc, 0xd, 0x2, 0x2, 
    0xbf, 0xc0, 0x7, 0x18, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x8, 0x5, 0x2, 0xc1, 
    0xc2, 0x7, 0x19, 0x2, 0x2, 0xc2, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
    0xc, 0x6, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x27, 0x2, 0x2, 0xc5, 0xc7, 0x5, 
    0x44, 0x23, 0x2, 0xc6, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xa6, 0x3, 0x2, 0x2, 
    0x2, 0xc6, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xc6, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xca, 
    0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xc9, 0x9, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc8, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xcc, 0x9, 0x2, 0x2, 0x2, 0xcc, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xcd, 0xce, 0x9, 0x3, 0x2, 0x2, 0xce, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xcf, 0xd0, 0x9, 0x4, 0x2, 0x2, 0xd0, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd2, 0x9, 0x5, 0x2, 0x2, 0xd2, 0x11, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 
    0x9, 0x6, 0x2, 0x2, 0xd4, 0x13, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 
    0x13, 0x2, 0x2, 0xd6, 0x15, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x9, 0x7, 
    0x2, 0x2, 0xd8, 0x17, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x31, 0x2, 
    0x2, 0xda, 0xe3, 0x7, 0x3c, 0x2, 0x2, 0xdb, 0xdc, 0x7, 0x3a, 0x2, 0x2, 
    0xdc, 0xdf, 0x5, 0x44, 0x23, 0x2, 0xdd, 0xde, 0x7, 0x13, 0x2, 0x2, 0xde, 
    0xe0, 0x5, 0x8, 0x5, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 
    0x13, 0x2, 0x2, 0xe2, 0xe4, 0x5, 0x8, 0x5, 0x2, 0xe3, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xea, 0x5, 0x1c, 0xf, 0x2, 0xe6, 0xe7, 0x7, 0x39, 0x2, 0x2, 
    0xe7, 0xe9, 0x5, 0x1c, 0xf, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe9, 
    0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xed, 0xee, 0x5, 0x8, 0x5, 0x2, 0xee, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xf1, 0x5, 0x20, 0x11, 0x2, 0xf0, 0xf2, 0x5, 0x4, 0x3, 
    0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf5, 0x7, 0x37, 0x2, 0x2, 0xf4, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x36, 0x2, 0x2, 0xf7, 0xf9, 0x7, 
    0x3c, 0x2, 0x2, 0xf8, 0xfa, 0x5, 0x36, 0x1c, 0x2, 0xf9, 0xf8, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xfd, 0x7, 0x14, 0x2, 0x2, 0xfc, 0xfe, 0x5, 0x22, 0x12, 0x2, 
    0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x102, 0x7, 0x15, 0x2, 0x2, 0x100, 0x101, 
    0x7, 0x3a, 0x2, 0x2, 0x101, 0x103, 0x5, 0x44, 0x23, 0x2, 0x102, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x109, 0x5, 0x24, 0x13, 0x2, 0x105, 0x106, 0x7, 
    0x39, 0x2, 0x2, 0x106, 0x108, 0x5, 0x24, 0x13, 0x2, 0x107, 0x105, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x5, 0x26, 
    0x14, 0x2, 0x10d, 0x10f, 0x5, 0x28, 0x15, 0x2, 0x10e, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x110, 0x111, 0x7, 0x3c, 0x2, 0x2, 0x111, 0x113, 0x7, 0x3a, 0x2, 
    0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x114, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x5, 0x44, 0x23, 
    0x2, 0x115, 0x27, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x7, 0x1a, 0x2, 
    0x2, 0x117, 0x29, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11a, 0x7, 0x38, 0x2, 
    0x2, 0x119, 0x11b, 0x5, 0x8, 0x5, 0x2, 0x11a, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x11f, 0x7, 0x32, 0x2, 0x2, 0x11d, 0x120, 0x5, 0x8, 0x5, 0x2, 
    0x11e, 0x120, 0x5, 0x18, 0xd, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x123, 0x5, 0x6, 0x4, 0x2, 0x122, 0x124, 0x5, 0x2e, 0x18, 0x2, 
    0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0x7, 0x33, 0x2, 0x2, 
    0x126, 0x127, 0x5, 0x6, 0x4, 0x2, 0x127, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x128, 
    0x129, 0x7, 0x34, 0x2, 0x2, 0x129, 0x12a, 0x5, 0x8, 0x5, 0x2, 0x12a, 
    0x12b, 0x5, 0x6, 0x4, 0x2, 0x12b, 0x31, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x7, 0x35, 0x2, 0x2, 0x12d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 
    0x7, 0x2a, 0x2, 0x2, 0x12f, 0x131, 0x7, 0x3c, 0x2, 0x2, 0x130, 0x132, 
    0x5, 0x36, 0x1c, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x135, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 
    0x7, 0x2b, 0x2, 0x2, 0x134, 0x136, 0x5, 0x38, 0x1d, 0x2, 0x135, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 
    0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x5, 0x3a, 0x1e, 0x2, 0x138, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0xe, 0x2, 0x2, 0x13a, 0x13f, 
    0x7, 0x3c, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x39, 0x2, 0x2, 0x13c, 0x13e, 
    0x7, 0x3c, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x141, 
    0x3, 0x2, 0x2, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x142, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x7, 0xf, 0x2, 0x2, 0x143, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x149, 0x5, 0x52, 0x2a, 0x2, 0x145, 0x146, 0x7, 
    0x39, 0x2, 0x2, 0x146, 0x148, 0x5, 0x52, 0x2a, 0x2, 0x147, 0x145, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x151, 0x7, 0x16, 
    0x2, 0x2, 0x14d, 0x150, 0x5, 0x3c, 0x1f, 0x2, 0x14e, 0x150, 0x5, 0x3e, 
    0x20, 0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x153, 0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x151, 0x152, 0x3, 0x2, 0x2, 0x2, 0x152, 0x154, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x7, 0x17, 
    0x2, 0x2, 0x155, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x156, 0x158, 0x7, 0x2c, 
    0x2, 0x2, 0x157, 0x156, 0x3, 0x2, 0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x3c, 
    0x2, 0x2, 0x15a, 0x15b, 0x7, 0x3a, 0x2, 0x2, 0x15b, 0x15e, 0x5, 0x44, 
    0x23, 0x2, 0x15c, 0x15d, 0x7, 0x13, 0x2, 0x2, 0x15d, 0x15f, 0x5, 0x8, 
    0x5, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x15f, 0x160, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x7, 0x3b, 
    0x2, 0x2, 0x161, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x162, 0x164, 0x7, 0x2c, 
    0x2, 0x2, 0x163, 0x162, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 
    0x2, 0x2, 0x164, 0x165, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x5, 0x1e, 
    0x10, 0x2, 0x166, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x167, 0x16c, 0x5, 0x42, 
    0x22, 0x2, 0x168, 0x169, 0x7, 0x39, 0x2, 0x2, 0x169, 0x16b, 0x5, 0x42, 
    0x22, 0x2, 0x16a, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x16d, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x16f, 0x171, 0x7, 0x39, 0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 
    0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 0x2, 0x2, 0x171, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x175, 0x7, 0x3c, 0x2, 0x2, 0x173, 0x174, 0x7, 0x13, 0x2, 
    0x2, 0x174, 0x176, 0x5, 0x8, 0x5, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 
    0x2, 0x175, 0x176, 0x3, 0x2, 0x2, 0x2, 0x176, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x179, 0x5, 0x46, 0x24, 0x2, 0x178, 0x177, 0x3, 0x2, 0x2, 0x2, 
    0x179, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 0x2, 
    0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x181, 0x5, 0x4c, 0x27, 0x2, 
    0x17e, 0x180, 0x5, 0x48, 0x25, 0x2, 0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x183, 0x3, 0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 0x182, 0x185, 0x3, 0x2, 0x2, 0x2, 
    0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x184, 0x186, 0x5, 0x4a, 0x26, 0x2, 
    0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x45, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 0x7, 0x29, 0x2, 0x2, 
    0x188, 0x47, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x18, 0x2, 0x2, 
    0x18a, 0x18b, 0x7, 0x19, 0x2, 0x2, 0x18b, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x18c, 0x18d, 0x7, 0x12, 0x2, 0x2, 0x18d, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x18e, 0x195, 0x5, 0x4e, 0x28, 0x2, 0x18f, 0x195, 0x5, 0x50, 0x29, 0x2, 
    0x190, 0x192, 0x5, 0x58, 0x2d, 0x2, 0x191, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 
    0x193, 0x195, 0x5, 0x52, 0x2a, 0x2, 0x194, 0x18e, 0x3, 0x2, 0x2, 0x2, 
    0x194, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x194, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x195, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x196, 0x197, 0x9, 0x8, 0x2, 0x2, 0x197, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x7, 0x36, 0x2, 0x2, 0x199, 
    0x19b, 0x7, 0x14, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x22, 0x12, 0x2, 0x19b, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 
    0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x1a0, 0x7, 0x15, 0x2, 0x2, 0x19e, 
    0x19f, 0x7, 0x3a, 0x2, 0x2, 0x19f, 0x1a1, 0x5, 0x44, 0x23, 0x2, 0x1a0, 
    0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 
    0x51, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a4, 0x7, 0x3c, 0x2, 0x2, 0x1a3, 
    0x1a5, 0x5, 0x54, 0x2b, 0x2, 0x1a4, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a4, 
    0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 
    0x7, 0xe, 0x2, 0x2, 0x1a7, 0x1ac, 0x5, 0x44, 0x23, 0x2, 0x1a8, 0x1a9, 
    0x7, 0x39, 0x2, 0x2, 0x1a9, 0x1ab, 0x5, 0x44, 0x23, 0x2, 0x1aa, 0x1a8, 
    0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1aa, 
    0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1af, 
    0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 
    0x7, 0xf, 0x2, 0x2, 0x1b0, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x7, 
    0x2f, 0x2, 0x2, 0x1b2, 0x1b3, 0x7, 0x3c, 0x2, 0x2, 0x1b3, 0x1b7, 0x7, 
    0x16, 0x2, 0x2, 0x1b4, 0x1b6, 0x5, 0x6, 0x4, 0x2, 0x1b5, 0x1b4, 0x3, 
    0x2, 0x2, 0x2, 0x1b6, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 
    0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1ba, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 
    0x17, 0x2, 0x2, 0x1bb, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bf, 0x7, 
    0x3c, 0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0x52, 0x2a, 0x2, 0x1be, 0x1bc, 0x3, 
    0x2, 0x2, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 
    0x2, 0x2, 0x2, 0x1c0, 0x1c2, 0x7, 0x30, 0x2, 0x2, 0x1c1, 0x1c3, 0x5, 
    0x58, 0x2d, 0x2, 0x1c2, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x3, 
    0x2, 0x2, 0x2, 0x1c3, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c5, 0x9, 0x9, 
    0x2, 0x2, 0x1c5, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x33, 0x5f, 0x68, 0x7f, 0x8b, 
    0x91, 0x95, 0x98, 0xb6, 0xbb, 0xc6, 0xc8, 0xdf, 0xe3, 0xea, 0xf1, 0xf4, 
    0xf9, 0xfd, 0x102, 0x109, 0x10e, 0x112, 0x11a, 0x11f, 0x123, 0x131, 
    0x135, 0x13f, 0x149, 0x14f, 0x151, 0x157, 0x15e, 0x163, 0x16c, 0x170, 
    0x175, 0x17a, 0x181, 0x185, 0x191, 0x194, 0x19b, 0x1a0, 0x1a4, 0x1ac, 
    0x1b7, 0x1be, 0x1c2, 
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
