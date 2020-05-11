
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
    ClosingBrace = 21, OpeningBracket = 22, ClosingBracket = 23, Variadic = 24, 
    As = 25, SizeOf = 26, Const = 27, Class = 28, Extends = 29, Static = 30, 
    This = 31, Dot = 32, Namespace = 33, ScopeResolver = 34, VariableDeclarator = 35, 
    If = 36, Else = 37, While = 38, Break = 39, Function = 40, Extern = 41, 
    Return = 42, Comma = 43, Colon = 44, True = 45, False = 46, InstructionsSeparator = 47, 
    VariableName = 48, StringLiteral = 49, CharLiteral = 50, DecimalLiteral = 51, 
    FloatingLiteral = 52, ZeroLiteral = 53, HexadecimalLiteral = 54, BinaryLiteral = 55, 
    Comment = 56, WhiteSpace = 57, LineTerminator = 58
  };

  enum {
    RuleInstructions = 0, RuleBody = 1, RuleStatement = 2, RuleExpression = 3, 
    RuleScopedName = 4, RuleName = 5, RuleScopeResolver = 6, RuleMultiplicativeOperatorStatement = 7, 
    RuleOperatorStatement = 8, RuleBitwiseOperatorStatement = 9, RuleConditionalOperatorStatement = 10, 
    RuleComparisonOperatorStatement = 11, RuleEqualityOperatorStatement = 12, 
    RuleLiteral = 13, RuleBooleanLiteral = 14, RuleIntegerLiteral = 15, 
    RuleFloatingLiteral = 16, RuleVariableDeclaration = 17, RuleFunctionCallArguments = 18, 
    RuleFunctionCallArgument = 19, RuleFunction = 20, RuleFunctionDeclaration = 21, 
    RuleFunctionVariadicArgument = 22, RuleFunctionArguments = 23, RuleFunctionArgument = 24, 
    RuleReturnStatement = 25, RuleIfStatement = 26, RuleElseStatement = 27, 
    RuleWhileStatement = 28, RuleBreakStatement = 29, RuleClassStatement = 30, 
    RuleClassGenerics = 31, RuleClassExtends = 32, RuleClassBody = 33, RuleClassProperty = 34, 
    RuleClassMethod = 35, RuleClassInstantiationProperties = 36, RuleClassInstantiationProperty = 37, 
    RuleType = 38, RuleTypeQualifier = 39, RuleTypeDimensions = 40, RuleTypePointer = 41, 
    RuleTypeReference = 42, RuleTypeName = 43, RuleFunctionType = 44, RuleClassTypeName = 45, 
    RuleClassTypeNameGenerics = 46, RuleNamespaceStatement = 47, RuleEos = 48
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
  class ScopedNameContext;
  class NameContext;
  class ScopeResolverContext;
  class MultiplicativeOperatorStatementContext;
  class OperatorStatementContext;
  class BitwiseOperatorStatementContext;
  class ConditionalOperatorStatementContext;
  class ComparisonOperatorStatementContext;
  class EqualityOperatorStatementContext;
  class LiteralContext;
  class BooleanLiteralContext;
  class IntegerLiteralContext;
  class FloatingLiteralContext;
  class VariableDeclarationContext;
  class FunctionCallArgumentsContext;
  class FunctionCallArgumentContext;
  class FunctionContext;
  class FunctionDeclarationContext;
  class FunctionVariadicArgumentContext;
  class FunctionArgumentsContext;
  class FunctionArgumentContext;
  class ReturnStatementContext;
  class IfStatementContext;
  class ElseStatementContext;
  class WhileStatementContext;
  class BreakStatementContext;
  class ClassStatementContext;
  class ClassGenericsContext;
  class ClassExtendsContext;
  class ClassBodyContext;
  class ClassPropertyContext;
  class ClassMethodContext;
  class ClassInstantiationPropertiesContext;
  class ClassInstantiationPropertyContext;
  class TypeContext;
  class TypeQualifierContext;
  class TypeDimensionsContext;
  class TypePointerContext;
  class TypeReferenceContext;
  class TypeNameContext;
  class FunctionTypeContext;
  class ClassTypeNameContext;
  class ClassTypeNameGenericsContext;
  class NamespaceStatementContext;
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
    NamespaceStatementContext *namespaceStatement();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *InstructionsSeparator();
    BodyContext *body();
    VariableDeclarationContext *variableDeclaration();
    ReturnStatementContext *returnStatement();
    IfStatementContext *ifStatement();
    WhileStatementContext *whileStatement();
    BreakStatementContext *breakStatement();
    ClassStatementContext *classStatement();


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

  class  NameExpressionContext : public ExpressionContext {
  public:
    NameExpressionContext(ExpressionContext *ctx);

    ScopedNameContext *scopedName();

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

  class  IndexContext : public ExpressionContext {
  public:
    IndexContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OpeningBracket();
    antlr4::tree::TerminalNode *ClosingBracket();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LiteralDeclarationContext : public ExpressionContext {
  public:
    LiteralDeclarationContext(ExpressionContext *ctx);

    LiteralContext *literal();

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

  class  SizeofExpressionContext : public ExpressionContext {
  public:
    SizeofExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *SizeOf();
    ExpressionContext *expression();
    TypeContext *type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ThisExpressionContext : public ExpressionContext {
  public:
    ThisExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *This();

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

  class  PropertyExpressionContext : public ExpressionContext {
  public:
    PropertyExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Dot();
    NameContext *name();

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

  class  TypeCastContext : public ExpressionContext {
  public:
    TypeCastContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *As();
    TypeContext *type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ClassInstantiationExpressionContext : public ExpressionContext {
  public:
    ClassInstantiationExpressionContext(ExpressionContext *ctx);

    ClassTypeNameContext *classTypeName();
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    ClassInstantiationPropertiesContext *classInstantiationProperties();

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
  class  ScopedNameContext : public antlr4::ParserRuleContext {
  public:
    ScopedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    ScopeResolverContext *scopeResolver();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopedNameContext* scopedName();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();
    ClassTypeNameGenericsContext *classTypeNameGenerics();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  ScopeResolverContext : public antlr4::ParserRuleContext {
  public:
    ScopeResolverContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    antlr4::tree::TerminalNode *ScopeResolver();
    ScopeResolverContext *scopeResolver();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeResolverContext* scopeResolver();

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
    BooleanLiteralContext *booleanLiteral();
    IntegerLiteralContext *integerLiteral();
    FloatingLiteralContext *floatingLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *CharLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DecimalLiteral();
    antlr4::tree::TerminalNode *ZeroLiteral();
    antlr4::tree::TerminalNode *HexadecimalLiteral();
    antlr4::tree::TerminalNode *BinaryLiteral();
    antlr4::tree::TerminalNode *Sub();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  FloatingLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatingLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatingLiteral();
    antlr4::tree::TerminalNode *Sub();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatingLiteralContext* floatingLiteral();

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
    antlr4::tree::TerminalNode *Extern();
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
    ClassGenericsContext *classGenerics();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();
    antlr4::tree::TerminalNode *Comma();
    FunctionVariadicArgumentContext *functionVariadicArgument();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  FunctionVariadicArgumentContext : public antlr4::ParserRuleContext {
  public:
    FunctionVariadicArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Variadic();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionVariadicArgumentContext* functionVariadicArgument();

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
    TypeContext *type();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Colon();


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

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    StatementContext *statement();
    ExpressionContext *expression();
    VariableDeclarationContext *variableDeclaration();
    ElseStatementContext *elseStatement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Else();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    ExpressionContext *expression();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ClassStatementContext : public antlr4::ParserRuleContext {
  public:
    ClassStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Class();
    antlr4::tree::TerminalNode *VariableName();
    ClassBodyContext *classBody();
    ClassGenericsContext *classGenerics();
    antlr4::tree::TerminalNode *Extends();
    ClassExtendsContext *classExtends();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassStatementContext* classStatement();

  class  ClassGenericsContext : public antlr4::ParserRuleContext {
  public:
    ClassGenericsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    std::vector<antlr4::tree::TerminalNode *> VariableName();
    antlr4::tree::TerminalNode* VariableName(size_t i);
    antlr4::tree::TerminalNode *GreaterThan();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassGenericsContext* classGenerics();

  class  ClassExtendsContext : public antlr4::ParserRuleContext {
  public:
    ClassExtendsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassTypeNameContext *> classTypeName();
    ClassTypeNameContext* classTypeName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassExtendsContext* classExtends();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    std::vector<ClassPropertyContext *> classProperty();
    ClassPropertyContext* classProperty(size_t i);
    std::vector<ClassMethodContext *> classMethod();
    ClassMethodContext* classMethod(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassPropertyContext : public antlr4::ParserRuleContext {
  public:
    ClassPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();
    antlr4::tree::TerminalNode *InstructionsSeparator();
    antlr4::tree::TerminalNode *Static();
    antlr4::tree::TerminalNode *Equal();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassPropertyContext* classProperty();

  class  ClassMethodContext : public antlr4::ParserRuleContext {
  public:
    ClassMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionContext *function();
    antlr4::tree::TerminalNode *Static();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassMethodContext* classMethod();

  class  ClassInstantiationPropertiesContext : public antlr4::ParserRuleContext {
  public:
    ClassInstantiationPropertiesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ClassInstantiationPropertyContext *> classInstantiationProperty();
    ClassInstantiationPropertyContext* classInstantiationProperty(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInstantiationPropertiesContext* classInstantiationProperties();

  class  ClassInstantiationPropertyContext : public antlr4::ParserRuleContext {
  public:
    ClassInstantiationPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Equal();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInstantiationPropertyContext* classInstantiationProperty();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    std::vector<TypeQualifierContext *> typeQualifier();
    TypeQualifierContext* typeQualifier(size_t i);
    std::vector<TypeDimensionsContext *> typeDimensions();
    TypeDimensionsContext* typeDimensions(size_t i);
    std::vector<TypePointerContext *> typePointer();
    TypePointerContext* typePointer(size_t i);
    TypeReferenceContext *typeReference();


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
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ClosingBracket();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDimensionsContext* typeDimensions();

  class  TypePointerContext : public antlr4::ParserRuleContext {
  public:
    TypePointerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Mul();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypePointerContext* typePointer();

  class  TypeReferenceContext : public antlr4::ParserRuleContext {
  public:
    TypeReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BitwiseAnd();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeReferenceContext* typeReference();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopedNameContext *scopedName();
    FunctionTypeContext *functionType();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  FunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    FunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *OpeningParen();
    antlr4::tree::TerminalNode *ClosingParen();
    FunctionArgumentsContext *functionArguments();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionTypeContext* functionType();

  class  ClassTypeNameContext : public antlr4::ParserRuleContext {
  public:
    ClassTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopedNameContext *scopedName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassTypeNameContext* classTypeName();

  class  ClassTypeNameGenericsContext : public antlr4::ParserRuleContext {
  public:
    ClassTypeNameGenericsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LessThan();
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    antlr4::tree::TerminalNode *GreaterThan();
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassTypeNameGenericsContext* classTypeNameGenerics();

  class  NamespaceStatementContext : public antlr4::ParserRuleContext {
  public:
    NamespaceStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceStatementContext* namespaceStatement();

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

