
// Generated from SandParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  SandParser : public antlr4::Parser {
public:
  enum {
    Add = 1, Sub = 2, Mul = 3, Div = 4, Mod = 5, Not = 6, Neg = 7, ConditionalOr = 8, 
    ConditionalAnd = 9, TernaryOperator = 10, EqualTo = 11, NotEqualTo = 12, 
    LessThanOrEqualTo = 13, LessThan = 14, GreaterThan = 15, Xor = 16, BitwiseOr = 17, 
    BitwiseAnd = 18, Equal = 19, AddEqual = 20, SubEqual = 21, MulEqual = 22, 
    DivEqual = 23, ModEqual = 24, XorEqual = 25, OrEqual = 26, AndEqual = 27, 
    OpeningParen = 28, ClosingParen = 29, OpeningBrace = 30, ClosingBrace = 31, 
    OpeningBracket = 32, ClosingBracket = 33, Variadic = 34, InclusiveRange = 35, 
    ExclusiveRange = 36, As = 37, SizeOf = 38, Const = 39, Class = 40, Extends = 41, 
    Special = 42, Static = 43, Dot = 44, Arrow = 45, Union = 46, Enum = 47, 
    Destructor = 48, Namespace = 49, ScopeResolver = 50, VariableDeclarator = 51, 
    If = 52, Else = 53, While = 54, Break = 55, For = 56, In = 57, Function = 58, 
    Extern = 59, Return = 60, Cast = 61, Alias = 62, Comma = 63, Colon = 64, 
    Attribute = 65, Assembly = 66, Import = 67, True = 68, False = 69, NullLiteral = 70, 
    InstructionsSeparator = 71, VariableName = 72, StringLiteral = 73, CharLiteral = 74, 
    DecimalLiteral = 75, FloatingLiteral = 76, ZeroLiteral = 77, HexadecimalLiteral = 78, 
    BinaryLiteral = 79, Comment = 80, WhiteSpace = 81, LineTerminator = 82
  };

  enum {
    RuleInstructions = 0, RuleBody = 1, RuleStatement = 2, RuleExpression = 3, 
    RuleScopedName = 4, RuleName = 5, RuleScopedNameNoGeneric = 6, RuleNameNoGeneric = 7, 
    RuleScopeResolver = 8, RuleMultiplicativeOperatorStatement = 9, RuleOperatorStatement = 10, 
    RuleBitwiseOperatorStatement = 11, RuleShiftOperator = 12, RuleArithmeticRightShiftOperator = 13, 
    RuleLogicalRightShiftOperator = 14, RuleLeftShiftOperator = 15, RuleShiftEqualOperator = 16, 
    RuleArithmeticRightShiftEqualOperator = 17, RuleLogicalRightShiftEqualOperator = 18, 
    RuleLeftShiftEqualOperator = 19, RuleGreaterThanOrEqualToOperator = 20, 
    RuleConditionalOperatorStatement = 21, RuleComparisonOperatorStatement = 22, 
    RuleEqualityOperatorStatement = 23, RuleLiteral = 24, RuleBooleanLiteral = 25, 
    RuleIntegerLiteral = 26, RuleFloatingLiteral = 27, RuleStringLiteral = 28, 
    RuleVariableDeclaration = 29, RuleFunctionCallArguments = 30, RuleFunctionCallArgument = 31, 
    RuleOverloadableOperator = 32, RuleFunction = 33, RuleFunctionDeclaration = 34, 
    RuleCastFunctionType = 35, RuleFunctionVariadicArgument = 36, RuleFunctionArguments = 37, 
    RuleFunctionArgument = 38, RuleReturnStatement = 39, RuleIfStatement = 40, 
    RuleElseStatement = 41, RuleWhileStatement = 42, RuleForStatement = 43, 
    RuleBreakStatement = 44, RuleUnionStatement = 45, RuleUnionBody = 46, 
    RuleUnionProperty = 47, RuleEnumStatement = 48, RuleEnumBody = 49, RuleEnumProperty = 50, 
    RuleSpecialClassStatement = 51, RuleClassStatement = 52, RuleClassGenerics = 53, 
    RuleClassExtends = 54, RuleClassBody = 55, RuleClassBodyElement = 56, 
    RuleClassProperty = 57, RuleClassMethod = 58, RuleClassInstantiationProperties = 59, 
    RuleClassInstantiationProperty = 60, RuleType = 61, RuleFunctionType = 62, 
    RuleClassTypeName = 63, RuleClassTypeNameGenerics = 64, RuleNamespaceStatement = 65, 
    RuleImportStatement = 66, RuleAttributes = 67, RuleAttribute = 68, RuleAlias = 69, 
    RuleAssemblyStatement = 70, RuleAssemblyTemplate = 71, RuleAssemblyOutput = 72, 
    RuleAssemblyInput = 73, RuleAssemblyClobber = 74, RuleEos = 75
  };

  SandParser(antlr4::TokenStream *input);
  ~SandParser();

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
  class ScopedNameNoGenericContext;
  class NameNoGenericContext;
  class ScopeResolverContext;
  class MultiplicativeOperatorStatementContext;
  class OperatorStatementContext;
  class BitwiseOperatorStatementContext;
  class ShiftOperatorContext;
  class ArithmeticRightShiftOperatorContext;
  class LogicalRightShiftOperatorContext;
  class LeftShiftOperatorContext;
  class ShiftEqualOperatorContext;
  class ArithmeticRightShiftEqualOperatorContext;
  class LogicalRightShiftEqualOperatorContext;
  class LeftShiftEqualOperatorContext;
  class GreaterThanOrEqualToOperatorContext;
  class ConditionalOperatorStatementContext;
  class ComparisonOperatorStatementContext;
  class EqualityOperatorStatementContext;
  class LiteralContext;
  class BooleanLiteralContext;
  class IntegerLiteralContext;
  class FloatingLiteralContext;
  class StringLiteralContext;
  class VariableDeclarationContext;
  class FunctionCallArgumentsContext;
  class FunctionCallArgumentContext;
  class OverloadableOperatorContext;
  class FunctionContext;
  class FunctionDeclarationContext;
  class CastFunctionTypeContext;
  class FunctionVariadicArgumentContext;
  class FunctionArgumentsContext;
  class FunctionArgumentContext;
  class ReturnStatementContext;
  class IfStatementContext;
  class ElseStatementContext;
  class WhileStatementContext;
  class ForStatementContext;
  class BreakStatementContext;
  class UnionStatementContext;
  class UnionBodyContext;
  class UnionPropertyContext;
  class EnumStatementContext;
  class EnumBodyContext;
  class EnumPropertyContext;
  class SpecialClassStatementContext;
  class ClassStatementContext;
  class ClassGenericsContext;
  class ClassExtendsContext;
  class ClassBodyContext;
  class ClassBodyElementContext;
  class ClassPropertyContext;
  class ClassMethodContext;
  class ClassInstantiationPropertiesContext;
  class ClassInstantiationPropertyContext;
  class TypeContext;
  class FunctionTypeContext;
  class ClassTypeNameContext;
  class ClassTypeNameGenericsContext;
  class NamespaceStatementContext;
  class ImportStatementContext;
  class AttributesContext;
  class AttributeContext;
  class AliasContext;
  class AssemblyStatementContext;
  class AssemblyTemplateContext;
  class AssemblyOutputContext;
  class AssemblyInputContext;
  class AssemblyClobberContext;
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
    ForStatementContext *forStatement();
    BreakStatementContext *breakStatement();
    SpecialClassStatementContext *specialClassStatement();
    ClassStatementContext *classStatement();
    UnionStatementContext *unionStatement();
    EnumStatementContext *enumStatement();
    ImportStatementContext *importStatement();
    AssemblyStatementContext *assemblyStatement();
    AliasContext *alias();


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

  class  SuffixUnaryNegationExpressionContext : public ExpressionContext {
  public:
    SuffixUnaryNegationExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *Not();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TernaryExpressionContext : public ExpressionContext {
  public:
    TernaryExpressionContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TernaryOperator();
    antlr4::tree::TerminalNode *Colon();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BinaryShiftOperationContext : public ExpressionContext {
  public:
    BinaryShiftOperationContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    ShiftOperatorContext *shiftOperator();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
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

  class  UnaryPositiveExpressionContext : public ExpressionContext {
  public:
    UnaryPositiveExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Add();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NameExpressionContext : public ExpressionContext {
  public:
    NameExpressionContext(ExpressionContext *ctx);

    ScopedNameContext *scopedName();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitwiseNegationExpressionContext : public ExpressionContext {
  public:
    BitwiseNegationExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Neg();
    ExpressionContext *expression();

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

  class  UnaryNegationExpressionContext : public ExpressionContext {
  public:
    UnaryNegationExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Not();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionExpressionContext : public ExpressionContext {
  public:
    FunctionExpressionContext(ExpressionContext *ctx);

    FunctionContext *function();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PropertyExpressionContext : public ExpressionContext {
  public:
    PropertyExpressionContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    NameContext *name();
    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Arrow();

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

  class  DereferenceExpressionContext : public ExpressionContext {
  public:
    DereferenceExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Mul();
    ExpressionContext *expression();

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

  class  LiteralDeclarationContext : public ExpressionContext {
  public:
    LiteralDeclarationContext(ExpressionContext *ctx);

    LiteralContext *literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PointerExpressionContext : public ExpressionContext {
  public:
    PointerExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *BitwiseAnd();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryNegativeExpressionContext : public ExpressionContext {
  public:
    UnaryNegativeExpressionContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *Sub();
    ExpressionContext *expression();

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
    std::vector<ClassTypeNameGenericsContext *> classTypeNameGenerics();
    ClassTypeNameGenericsContext* classTypeNameGenerics(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  ScopedNameNoGenericContext : public antlr4::ParserRuleContext {
  public:
    ScopedNameNoGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameNoGenericContext *nameNoGeneric();
    ScopeResolverContext *scopeResolver();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopedNameNoGenericContext* scopedNameNoGeneric();

  class  NameNoGenericContext : public antlr4::ParserRuleContext {
  public:
    NameNoGenericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameNoGenericContext* nameNoGeneric();

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

  class  ShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmeticRightShiftOperatorContext *arithmeticRightShiftOperator();
    LogicalRightShiftOperatorContext *logicalRightShiftOperator();
    LeftShiftOperatorContext *leftShiftOperator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftOperatorContext* shiftOperator();

  class  ArithmeticRightShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticRightShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GreaterThan();
    antlr4::tree::TerminalNode* GreaterThan(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticRightShiftOperatorContext* arithmeticRightShiftOperator();

  class  LogicalRightShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalRightShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GreaterThan();
    antlr4::tree::TerminalNode* GreaterThan(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalRightShiftOperatorContext* logicalRightShiftOperator();

  class  LeftShiftOperatorContext : public antlr4::ParserRuleContext {
  public:
    LeftShiftOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LessThan();
    antlr4::tree::TerminalNode* LessThan(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftShiftOperatorContext* leftShiftOperator();

  class  ShiftEqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    ShiftEqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArithmeticRightShiftEqualOperatorContext *arithmeticRightShiftEqualOperator();
    LogicalRightShiftEqualOperatorContext *logicalRightShiftEqualOperator();
    LeftShiftEqualOperatorContext *leftShiftEqualOperator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftEqualOperatorContext* shiftEqualOperator();

  class  ArithmeticRightShiftEqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticRightShiftEqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GreaterThan();
    antlr4::tree::TerminalNode* GreaterThan(size_t i);
    antlr4::tree::TerminalNode *Equal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArithmeticRightShiftEqualOperatorContext* arithmeticRightShiftEqualOperator();

  class  LogicalRightShiftEqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    LogicalRightShiftEqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> GreaterThan();
    antlr4::tree::TerminalNode* GreaterThan(size_t i);
    antlr4::tree::TerminalNode *Equal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalRightShiftEqualOperatorContext* logicalRightShiftEqualOperator();

  class  LeftShiftEqualOperatorContext : public antlr4::ParserRuleContext {
  public:
    LeftShiftEqualOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LessThan();
    antlr4::tree::TerminalNode* LessThan(size_t i);
    antlr4::tree::TerminalNode *Equal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftShiftEqualOperatorContext* leftShiftEqualOperator();

  class  GreaterThanOrEqualToOperatorContext : public antlr4::ParserRuleContext {
  public:
    GreaterThanOrEqualToOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GreaterThan();
    antlr4::tree::TerminalNode *Equal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GreaterThanOrEqualToOperatorContext* greaterThanOrEqualToOperator();

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
    GreaterThanOrEqualToOperatorContext *greaterThanOrEqualToOperator();
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
    antlr4::tree::TerminalNode *AddEqual();
    antlr4::tree::TerminalNode *SubEqual();
    antlr4::tree::TerminalNode *MulEqual();
    antlr4::tree::TerminalNode *DivEqual();
    antlr4::tree::TerminalNode *ModEqual();
    antlr4::tree::TerminalNode *XorEqual();
    antlr4::tree::TerminalNode *OrEqual();
    antlr4::tree::TerminalNode *AndEqual();
    ShiftEqualOperatorContext *shiftEqualOperator();


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
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *CharLiteral();
    antlr4::tree::TerminalNode *NullLiteral();


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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  FloatingLiteralContext : public antlr4::ParserRuleContext {
  public:
    FloatingLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FloatingLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatingLiteralContext* floatingLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> StringLiteral();
    antlr4::tree::TerminalNode* StringLiteral(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

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

  class  OverloadableOperatorContext : public antlr4::ParserRuleContext {
  public:
    OverloadableOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Add();
    antlr4::tree::TerminalNode *Sub();
    antlr4::tree::TerminalNode *Mul();
    antlr4::tree::TerminalNode *Div();
    antlr4::tree::TerminalNode *Mod();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Xor();
    antlr4::tree::TerminalNode *BitwiseOr();
    antlr4::tree::TerminalNode *BitwiseAnd();
    antlr4::tree::TerminalNode *Neg();
    antlr4::tree::TerminalNode *AddEqual();
    antlr4::tree::TerminalNode *SubEqual();
    antlr4::tree::TerminalNode *MulEqual();
    antlr4::tree::TerminalNode *DivEqual();
    antlr4::tree::TerminalNode *ModEqual();
    antlr4::tree::TerminalNode *XorEqual();
    antlr4::tree::TerminalNode *OrEqual();
    antlr4::tree::TerminalNode *AndEqual();
    antlr4::tree::TerminalNode *EqualTo();
    antlr4::tree::TerminalNode *NotEqualTo();
    antlr4::tree::TerminalNode *LessThan();
    antlr4::tree::TerminalNode *LessThanOrEqualTo();
    antlr4::tree::TerminalNode *GreaterThan();
    GreaterThanOrEqualToOperatorContext *greaterThanOrEqualToOperator();
    antlr4::tree::TerminalNode *OpeningBracket();
    antlr4::tree::TerminalNode *ClosingBracket();
    antlr4::tree::TerminalNode *Arrow();
    antlr4::tree::TerminalNode *Dot();
    ShiftOperatorContext *shiftOperator();
    ShiftEqualOperatorContext *shiftEqualOperator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OverloadableOperatorContext* overloadableOperator();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributesContext *attributes();
    FunctionDeclarationContext *functionDeclaration();
    BodyContext *body();
    antlr4::tree::TerminalNode *InstructionsSeparator();
    antlr4::tree::TerminalNode *Extern();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Function();
    antlr4::tree::TerminalNode *OpeningParen();
    antlr4::tree::TerminalNode *ClosingParen();
    antlr4::tree::TerminalNode *Destructor();
    FunctionArgumentsContext *functionArguments();
    antlr4::tree::TerminalNode *VariableName();
    ClassGenericsContext *classGenerics();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();
    OverloadableOperatorContext *overloadableOperator();
    antlr4::tree::TerminalNode *Cast();
    CastFunctionTypeContext *castFunctionType();
    antlr4::tree::TerminalNode *Comma();
    FunctionVariadicArgumentContext *functionVariadicArgument();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  CastFunctionTypeContext : public antlr4::ParserRuleContext {
  public:
    CastFunctionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastFunctionTypeContext* castFunctionType();

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

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *In();
    ExpressionContext *expression();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Break();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  UnionStatementContext : public antlr4::ParserRuleContext {
  public:
    UnionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Union();
    antlr4::tree::TerminalNode *VariableName();
    UnionBodyContext *unionBody();
    ClassGenericsContext *classGenerics();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionStatementContext* unionStatement();

  class  UnionBodyContext : public antlr4::ParserRuleContext {
  public:
    UnionBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    std::vector<UnionPropertyContext *> unionProperty();
    UnionPropertyContext* unionProperty(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionBodyContext* unionBody();

  class  UnionPropertyContext : public antlr4::ParserRuleContext {
  public:
    UnionPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Colon();
    TypeContext *type();
    antlr4::tree::TerminalNode *InstructionsSeparator();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionPropertyContext* unionProperty();

  class  EnumStatementContext : public antlr4::ParserRuleContext {
  public:
    EnumStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Enum();
    antlr4::tree::TerminalNode *VariableName();
    EnumBodyContext *enumBody();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumStatementContext* enumStatement();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    std::vector<EnumPropertyContext *> enumProperty();
    EnumPropertyContext* enumProperty(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBodyContext* enumBody();

  class  EnumPropertyContext : public antlr4::ParserRuleContext {
  public:
    EnumPropertyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Equal();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumPropertyContext* enumProperty();

  class  SpecialClassStatementContext : public antlr4::ParserRuleContext {
  public:
    SpecialClassStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Special();
    antlr4::tree::TerminalNode *Class();
    ScopedNameNoGenericContext *scopedNameNoGeneric();
    ClassTypeNameGenericsContext *classTypeNameGenerics();
    ClassBodyContext *classBody();
    antlr4::tree::TerminalNode *Extends();
    ClassExtendsContext *classExtends();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpecialClassStatementContext* specialClassStatement();

  class  ClassStatementContext : public antlr4::ParserRuleContext {
  public:
    ClassStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributesContext *attributes();
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
    std::vector<ClassBodyElementContext *> classBodyElement();
    ClassBodyElementContext* classBodyElement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassBodyElementContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassPropertyContext *classProperty();
    ClassMethodContext *classMethod();
    ClassStatementContext *classStatement();
    UnionStatementContext *unionStatement();
    AliasContext *alias();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyElementContext* classBodyElement();

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
   
    TypeContext() = default;
    void copyFrom(TypeContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeArrayContext : public TypeContext {
  public:
    TypeArrayContext(TypeContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *OpeningBracket();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ClosingBracket();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeNameContext : public TypeContext {
  public:
    TypeNameContext(TypeContext *ctx);

    ScopedNameContext *scopedName();
    FunctionTypeContext *functionType();
    antlr4::tree::TerminalNode *Const();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypePointerContext : public TypeContext {
  public:
    TypePointerContext(TypeContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *Mul();
    antlr4::tree::TerminalNode *Const();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypeReferenceContext : public TypeContext {
  public:
    TypeReferenceContext(TypeContext *ctx);

    TypeContext *type();
    antlr4::tree::TerminalNode *BitwiseAnd();
    antlr4::tree::TerminalNode *Const();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TypeContext* type();
  TypeContext* type(int precedence);
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
    antlr4::tree::TerminalNode *Comma();
    FunctionVariadicArgumentContext *functionVariadicArgument();


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
    AttributesContext *attributes();
    antlr4::tree::TerminalNode *Namespace();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *OpeningBrace();
    antlr4::tree::TerminalNode *ClosingBrace();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NamespaceStatementContext* namespaceStatement();

  class  ImportStatementContext : public antlr4::ParserRuleContext {
  public:
    ImportStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Import();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportStatementContext* importStatement();

  class  AttributesContext : public antlr4::ParserRuleContext {
  public:
    AttributesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<AttributeContext *> attribute();
    AttributeContext* attribute(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributesContext* attributes();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attribute();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *ClosingBracket();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *StringLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  AliasContext : public antlr4::ParserRuleContext {
  public:
    AliasContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Alias();
    antlr4::tree::TerminalNode *VariableName();
    antlr4::tree::TerminalNode *Equal();
    ScopedNameContext *scopedName();
    TypeContext *type();
    LiteralContext *literal();
    ClassGenericsContext *classGenerics();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AliasContext* alias();

  class  AssemblyStatementContext : public antlr4::ParserRuleContext {
  public:
    AssemblyStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Assembly();
    antlr4::tree::TerminalNode *OpeningParen();
    StringLiteralContext *stringLiteral();
    antlr4::tree::TerminalNode *ClosingParen();
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);
    std::vector<AssemblyOutputContext *> assemblyOutput();
    AssemblyOutputContext* assemblyOutput(size_t i);
    std::vector<AssemblyInputContext *> assemblyInput();
    AssemblyInputContext* assemblyInput(size_t i);
    std::vector<AssemblyClobberContext *> assemblyClobber();
    AssemblyClobberContext* assemblyClobber(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyStatementContext* assemblyStatement();

  class  AssemblyTemplateContext : public antlr4::ParserRuleContext {
  public:
    AssemblyTemplateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringLiteralContext *stringLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyTemplateContext* assemblyTemplate();

  class  AssemblyOutputContext : public antlr4::ParserRuleContext {
  public:
    AssemblyOutputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *OpeningParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ClosingParen();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyOutputContext* assemblyOutput();

  class  AssemblyInputContext : public antlr4::ParserRuleContext {
  public:
    AssemblyInputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *OpeningParen();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ClosingParen();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyInputContext* assemblyInput();

  class  AssemblyClobberContext : public antlr4::ParserRuleContext {
  public:
    AssemblyClobberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *StringLiteral();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyClobberContext* assemblyClobber();

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
  bool typeSempred(TypeContext *_localctx, size_t predicateIndex);

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

