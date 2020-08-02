
// Generated from SandParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SandParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SandParser.
 */
class  SandParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SandParser.
   */
    virtual antlrcpp::Any visitInstructions(SandParser::InstructionsContext *context) = 0;

    virtual antlrcpp::Any visitBody(SandParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitStatement(SandParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSuffixUnaryNegationExpression(SandParser::SuffixUnaryNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitTernaryExpression(SandParser::TernaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryShiftOperation(SandParser::BinaryShiftOperationContext *context) = 0;

    virtual antlrcpp::Any visitInParenExpression(SandParser::InParenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperation(SandParser::BinaryOperationContext *context) = 0;

    virtual antlrcpp::Any visitBinaryBitwiseOperation(SandParser::BinaryBitwiseOperationContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPositiveExpression(SandParser::UnaryPositiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNameExpression(SandParser::NameExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseNegationExpression(SandParser::BitwiseNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIndex(SandParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(SandParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSizeofExpression(SandParser::SizeofExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegationExpression(SandParser::UnaryNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionExpression(SandParser::FunctionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPropertyExpression(SandParser::PropertyExpressionContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationExpression(SandParser::ClassInstantiationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparisonOperation(SandParser::BinaryComparisonOperationContext *context) = 0;

    virtual antlrcpp::Any visitDereferenceExpression(SandParser::DereferenceExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperation(SandParser::EqualityOperationContext *context) = 0;

    virtual antlrcpp::Any visitLiteralDeclaration(SandParser::LiteralDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPointerExpression(SandParser::PointerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegativeExpression(SandParser::UnaryNegativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryMultiplicativeOperation(SandParser::BinaryMultiplicativeOperationContext *context) = 0;

    virtual antlrcpp::Any visitBinaryConditionalOperation(SandParser::BinaryConditionalOperationContext *context) = 0;

    virtual antlrcpp::Any visitTypeCast(SandParser::TypeCastContext *context) = 0;

    virtual antlrcpp::Any visitScopedName(SandParser::ScopedNameContext *context) = 0;

    virtual antlrcpp::Any visitName(SandParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitScopedNameNoGeneric(SandParser::ScopedNameNoGenericContext *context) = 0;

    virtual antlrcpp::Any visitNameNoGeneric(SandParser::NameNoGenericContext *context) = 0;

    virtual antlrcpp::Any visitScopeResolver(SandParser::ScopeResolverContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOperatorStatement(SandParser::MultiplicativeOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitOperatorStatement(SandParser::OperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOperatorStatement(SandParser::BitwiseOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitShiftOperator(SandParser::ShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticRightShiftOperator(SandParser::ArithmeticRightShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalRightShiftOperator(SandParser::LogicalRightShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeftShiftOperator(SandParser::LeftShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitShiftEqualOperator(SandParser::ShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticRightShiftEqualOperator(SandParser::ArithmeticRightShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalRightShiftEqualOperator(SandParser::LogicalRightShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeftShiftEqualOperator(SandParser::LeftShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitGreaterThanOrEqualToOperator(SandParser::GreaterThanOrEqualToOperatorContext *context) = 0;

    virtual antlrcpp::Any visitConditionalOperatorStatement(SandParser::ConditionalOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperatorStatement(SandParser::ComparisonOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperatorStatement(SandParser::EqualityOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SandParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(SandParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(SandParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatingLiteral(SandParser::FloatingLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(SandParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(SandParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArguments(SandParser::FunctionCallArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArgument(SandParser::FunctionCallArgumentContext *context) = 0;

    virtual antlrcpp::Any visitOverloadableOperator(SandParser::OverloadableOperatorContext *context) = 0;

    virtual antlrcpp::Any visitFunction(SandParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(SandParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitCastFunctionType(SandParser::CastFunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionVariadicArgument(SandParser::FunctionVariadicArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArguments(SandParser::FunctionArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgument(SandParser::FunctionArgumentContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(SandParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(SandParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(SandParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(SandParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(SandParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(SandParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitUnionStatement(SandParser::UnionStatementContext *context) = 0;

    virtual antlrcpp::Any visitUnionBody(SandParser::UnionBodyContext *context) = 0;

    virtual antlrcpp::Any visitUnionProperty(SandParser::UnionPropertyContext *context) = 0;

    virtual antlrcpp::Any visitEnumStatement(SandParser::EnumStatementContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(SandParser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumProperty(SandParser::EnumPropertyContext *context) = 0;

    virtual antlrcpp::Any visitSpecialClassStatement(SandParser::SpecialClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassStatement(SandParser::ClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassGenerics(SandParser::ClassGenericsContext *context) = 0;

    virtual antlrcpp::Any visitClassExtends(SandParser::ClassExtendsContext *context) = 0;

    virtual antlrcpp::Any visitClassBody(SandParser::ClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitClassBodyElement(SandParser::ClassBodyElementContext *context) = 0;

    virtual antlrcpp::Any visitClassProperty(SandParser::ClassPropertyContext *context) = 0;

    virtual antlrcpp::Any visitClassMethod(SandParser::ClassMethodContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationProperties(SandParser::ClassInstantiationPropertiesContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationProperty(SandParser::ClassInstantiationPropertyContext *context) = 0;

    virtual antlrcpp::Any visitTypeArray(SandParser::TypeArrayContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(SandParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitTypePointer(SandParser::TypePointerContext *context) = 0;

    virtual antlrcpp::Any visitTypeReference(SandParser::TypeReferenceContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(SandParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassTypeName(SandParser::ClassTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitClassTypeNameGenerics(SandParser::ClassTypeNameGenericsContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceStatement(SandParser::NamespaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(SandParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitAttributes(SandParser::AttributesContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(SandParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAlias(SandParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyStatement(SandParser::AssemblyStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyTemplate(SandParser::AssemblyTemplateContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyOutput(SandParser::AssemblyOutputContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyInput(SandParser::AssemblyInputContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyClobber(SandParser::AssemblyClobberContext *context) = 0;

    virtual antlrcpp::Any visitEos(SandParser::EosContext *context) = 0;


};

