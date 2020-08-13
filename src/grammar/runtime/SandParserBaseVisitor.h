
// Generated from SandParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SandParserVisitor.h"


/**
 * This class provides an empty implementation of SandParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SandParserBaseVisitor : public SandParserVisitor {
public:

  virtual antlrcpp::Any visitInstructions(SandParser::InstructionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBody(SandParser::BodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(SandParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSuffixUnaryNegationExpression(SandParser::SuffixUnaryNegationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTernaryExpression(SandParser::TernaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryShiftOperation(SandParser::BinaryShiftOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInParenExpression(SandParser::InParenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryOperation(SandParser::BinaryOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryBitwiseOperation(SandParser::BinaryBitwiseOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryPositiveExpression(SandParser::UnaryPositiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameExpression(SandParser::NameExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseNegationExpression(SandParser::BitwiseNegationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIndex(SandParser::IndexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallExpression(SandParser::FunctionCallExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSizeofExpression(SandParser::SizeofExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryNegationExpression(SandParser::UnaryNegationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionExpression(SandParser::FunctionExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPropertyExpression(SandParser::PropertyExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstantiationExpression(SandParser::ClassInstantiationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryComparisonOperation(SandParser::BinaryComparisonOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDereferenceExpression(SandParser::DereferenceExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityOperation(SandParser::EqualityOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteralDeclaration(SandParser::LiteralDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPointerExpression(SandParser::PointerExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnaryNegativeExpression(SandParser::UnaryNegativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryMultiplicativeOperation(SandParser::BinaryMultiplicativeOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinaryConditionalOperation(SandParser::BinaryConditionalOperationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeCast(SandParser::TypeCastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScopedName(SandParser::ScopedNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(SandParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScopedNameNoGeneric(SandParser::ScopedNameNoGenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNameNoGeneric(SandParser::NameNoGenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScopeResolver(SandParser::ScopeResolverContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiplicativeOperatorStatement(SandParser::MultiplicativeOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperatorStatement(SandParser::OperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBitwiseOperatorStatement(SandParser::BitwiseOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftOperator(SandParser::ShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticRightShiftOperator(SandParser::ArithmeticRightShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalRightShiftOperator(SandParser::LogicalRightShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftShiftOperator(SandParser::LeftShiftOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitShiftEqualOperator(SandParser::ShiftEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArithmeticRightShiftEqualOperator(SandParser::ArithmeticRightShiftEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogicalRightShiftEqualOperator(SandParser::LogicalRightShiftEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftShiftEqualOperator(SandParser::LeftShiftEqualOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGreaterThanOrEqualToOperator(SandParser::GreaterThanOrEqualToOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalOperatorStatement(SandParser::ConditionalOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComparisonOperatorStatement(SandParser::ComparisonOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEqualityOperatorStatement(SandParser::EqualityOperatorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(SandParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(SandParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(SandParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatingLiteral(SandParser::FloatingLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(SandParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableDeclaration(SandParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallArguments(SandParser::FunctionCallArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallArgument(SandParser::FunctionCallArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOverloadableOperator(SandParser::OverloadableOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction(SandParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(SandParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCastFunctionType(SandParser::CastFunctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionVariadicArgument(SandParser::FunctionVariadicArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArguments(SandParser::FunctionArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionArgument(SandParser::FunctionArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(SandParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(SandParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(SandParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(SandParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(SandParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreakStatement(SandParser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionStatement(SandParser::UnionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionBody(SandParser::UnionBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnionProperty(SandParser::UnionPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumStatement(SandParser::EnumStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumBody(SandParser::EnumBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnumProperty(SandParser::EnumPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpecialClassStatement(SandParser::SpecialClassStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassStatement(SandParser::ClassStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassGenerics(SandParser::ClassGenericsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassGeneric(SandParser::ClassGenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassGenericType(SandParser::ClassGenericTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassGenericValue(SandParser::ClassGenericValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassExtends(SandParser::ClassExtendsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBody(SandParser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassBodyElement(SandParser::ClassBodyElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassProperty(SandParser::ClassPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassMethod(SandParser::ClassMethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstantiationProperties(SandParser::ClassInstantiationPropertiesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassInstantiationProperty(SandParser::ClassInstantiationPropertyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeArray(SandParser::TypeArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(SandParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypePointer(SandParser::TypePointerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeReference(SandParser::TypeReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionType(SandParser::FunctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassTypeName(SandParser::ClassTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassTypeNameGenerics(SandParser::ClassTypeNameGenericsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitClassTypeNameGeneric(SandParser::ClassTypeNameGenericContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNamespaceStatement(SandParser::NamespaceStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitImportStatement(SandParser::ImportStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttributes(SandParser::AttributesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttribute(SandParser::AttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlias(SandParser::AliasContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyStatement(SandParser::AssemblyStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyTemplate(SandParser::AssemblyTemplateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyOutput(SandParser::AssemblyOutputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyInput(SandParser::AssemblyInputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblyClobber(SandParser::AssemblyClobberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEos(SandParser::EosContext *ctx) override {
    return visitChildren(ctx);
  }


};

