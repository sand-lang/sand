
// Generated from SanParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SanParser : public antlr4::Parser {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, ConditionalOr = 6, ConditionalAnd = 7, 
    EqualTo = 8, NotEqualTo = 9, LessThanOrEqualTo = 10, GreaterThanOrEqualTo = 11, 
    LessThan = 12, GreaterThan = 13, Xor = 14, BitwiseOr = 15, BitwiseAnd = 16, 
    Equal = 17, OpeningParen = 18, ClosingParen = 19, OpeningBrace = 20, 
    ClosingBrace = 21, OpeningBracket = 22, ClosingBracket = 23, Void = 24, 
    Bool = 25, Int8 = 26, Int16 = 27, Int32 = 28, Int64 = 29, UInt8 = 30, 
    UInt16 = 31, UInt32 = 32, UInt64 = 33, Float32 = 34, Float64 = 35, Const = 36, 
    VariableDeclarator = 37, Function = 38, Return = 39, Comma = 40, Colon = 41, 
    InstructionsSeparator = 42, VariableName = 43, StringLiteral = 44, CharLiteral = 45, 
    IntegerLiteral = 46, DecimalLiteral = 47, ZeroLiteral = 48, HexadecimalLiteral = 49, 
    BinaryLiteral = 50, WhiteSpace = 51, LineTerminator = 52
  };

  enum {
    RuleInstructions = 0, RuleBody = 1, RuleStatement = 2, RuleExpression = 3, 
    RuleMultiplicativeOperatorStatement = 4, RuleOperatorStatement = 5, 
    RuleBitwiseOperatorStatement = 6, RuleConditionalOperatorStatement = 7, 
    RuleComparisonOperatorStatement = 8, RuleEqualityOperatorStatement = 9, 
    RuleLiteral = 10, RuleVariableDeclaration = 11, RuleFunctionCallArguments = 12, 
    RuleFunctionCallArgument = 13, RuleFunction = 14, RuleFunctionDeclaration = 15, 
    RuleFunctionArguments = 16, RuleFunctionArgument = 17, RuleReturnStatement = 18, 
    RuleType = 19, RuleTypeQualifier = 20, RuleTypeDimensions = 21, RuleTypeName = 22, 
    RuleEos = 23
  };

  SanParser(antlr4::TokenStream *input);
  ~SanParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InstructionsContext;
  class BodyContext;
  class StatementContext;
  class ExpressionContext;
  class MultiplicativeOperatorStatementContext;
  class OperatorStatementContext;
  class BitwiseOperatorStatementContext;
  class ConditionalOperatorStatementContext;
  class ComparisonOperatorStatementContext;
  class EqualityOperatorStatementContext;
  class LiteralContext;
  class VariableDeclarationContext;
  class FunctionCallArgumentsContext;
  class FunctionCallArgumentContext;
  class FunctionContext;
  class FunctionDeclarationContext;
  class FunctionArgumentsContext;
  class FunctionArgumentContext;
  class ReturnStatementContext;
  class TypeContext;
  class TypeQualifierContext;
  class TypeDimensionsContext;
  class TypeNameContext;
  class EosContext; 

  class  InstructionsContext : public antlr4::ParserRuleContext {
  public:
    InstructionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EosContext *eos();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionsContext* instructions();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BodyContext* body();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *InstructionsSeparator();
    BodyContext *body();
    VariableDeclarationContext *variableDeclaration();
    ReturnStatementContext *returnStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  InParenExpressionContext : public ExpressionContext {
  public:
    InParenExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *OpeningParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ClosingParen();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryOperationContext : public ExpressionContext {
  public:
    BinaryOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    OperatorStatementContext *operatorStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryBitwiseOperationContext : public ExpressionContext {
  public:
    BinaryBitwiseOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    BitwiseOperatorStatementContext *bitwiseOperatorStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqualityOperationContext : public ExpressionContext {
  public:
    EqualityOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    EqualityOperatorStatementContext *equalityOperatorStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VariableExpressionContext : public ExpressionContext {
  public:
    VariableExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *VariableName();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryMultiplicativeOperationContext : public ExpressionContext {
  public:
    BinaryMultiplicativeOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    MultiplicativeOperatorStatementContext *multiplicativeOperatorStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralDeclarationContext : public ExpressionContext {
  public:
    LiteralDeclarationContext(ExpressionContext *ctx);

    LiteralContext *literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryConditionalOperationContext : public ExpressionContext {
  public:
    BinaryConditionalOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    ConditionalOperatorStatementContext *conditionalOperatorStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallExpressionContext : public ExpressionContext {
  public:
    FunctionCallExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *OpeningParen();
    antlr4::tree::TerminalNode *ClosingParen();
    FunctionCallArgumentsContext *functionCallArguments();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryComparisonOperationContext : public ExpressionContext {
  public:
    BinaryComparisonOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    ComparisonOperatorStatementContext *comparisonOperatorStatement();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  MultiplicativeOperatorStatementContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeOperatorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Mul();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeOperatorStatementContext* multiplicativeOperatorStatement();

  class  OperatorStatementContext : public antlr4::ParserRuleContext {
  public:
    OperatorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Sub();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorStatementContext* operatorStatement();

  class  BitwiseOperatorStatementContext : public antlr4::ParserRuleContext {
  public:
    BitwiseOperatorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Xor();
    antlr4::tree::TerminalNode *BitwiseOr();
    antlr4::tree::TerminalNode *BitwiseAnd();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BitwiseOperatorStatementContext* bitwiseOperatorStatement();

  class  ConditionalOperatorStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalOperatorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ConditionalOr();
    antlr4::tree::TerminalNode *ConditionalAnd();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalOperatorStatementContext* conditionalOperatorStatement();

  class  ComparisonOperatorStatementContext : public antlr4::ParserRuleContext {
  public:
    ComparisonOperatorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EqualTo();
    antlr4::tree::TerminalNode *NotEqualTo();
    antlr4::tree::TerminalNode *LessThanOrEqualTo();
    antlr4::tree::TerminalNode *GreaterThanOrEqualTo();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *GreaterThan();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparisonOperatorStatementContext* comparisonOperatorStatement();

  class  EqualityOperatorStatementContext : public antlr4::ParserRuleContext {
  public:
    EqualityOperatorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Equal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityOperatorStatementContext* equalityOperatorStatement();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  VariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableDeclarator();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();
    antlr4::tree::TerminalNode *Equal();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclarationContext* variableDeclaration();

  class  FunctionCallArgumentsContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionCallArgumentContext *> functionCallArgument();
    FunctionCallArgumentContext* functionCallArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallArgumentsContext* functionCallArguments();

  class  FunctionCallArgumentContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallArgumentContext* functionCallArgument();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclarationContext *functionDeclaration();
    BodyContext *body();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *OpeningParen();
    antlr4::tree::TerminalNode *ClosingParen();
    FunctionArgumentsContext *functionArguments();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionArgumentsContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FunctionArgumentContext *> functionArgument();
    FunctionArgumentContext* functionArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgumentsContext* functionArguments();

  class  FunctionArgumentContext : public antlr4::ParserRuleContext {
  public:
    FunctionArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionArgumentContext* functionArgument();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    std::vector<TypeQualifierContext *> typeQualifier();
    TypeQualifierContext* typeQualifier(size_t i);
    std::vector<TypeDimensionsContext *> typeDimensions();
    TypeDimensionsContext* typeDimensions(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  TypeQualifierContext : public antlr4::ParserRuleContext {
  public:
    TypeQualifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Const();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeQualifierContext* typeQualifier();

  class  TypeDimensionsContext : public antlr4::ParserRuleContext {
  public:
    TypeDimensionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpeningBracket();
    antlr4::tree::TerminalNode *ClosingBracket();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDimensionsContext* typeDimensions();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Int8();
    antlr4::tree::TerminalNode *Int16();
    antlr4::tree::TerminalNode *Int32();
    antlr4::tree::TerminalNode *Int64();
    antlr4::tree::TerminalNode *UInt8();
    antlr4::tree::TerminalNode *UInt16();
    antlr4::tree::TerminalNode *UInt32();
    antlr4::tree::TerminalNode *UInt64();
    antlr4::tree::TerminalNode *Float32();
    antlr4::tree::TerminalNode *Float64();
    antlr4::tree::TerminalNode *VariableName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  EosContext : public antlr4::ParserRuleContext {
  public:
    EosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *LineTerminator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EosContext* eos();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

