
// Generated from XenonParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "XenonParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by XenonParser.
 */
class  XenonParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by XenonParser.
   */
    virtual antlrcpp::Any visitInstructions(XenonParser::InstructionsContext *context) = 0;

    virtual antlrcpp::Any visitBody(XenonParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitStatement(XenonParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSuffixUnaryNegationExpression(XenonParser::SuffixUnaryNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryShiftOperation(XenonParser::BinaryShiftOperationContext *context) = 0;

    virtual antlrcpp::Any visitDereferenceExpression(XenonParser::DereferenceExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInParenExpression(XenonParser::InParenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperation(XenonParser::BinaryOperationContext *context) = 0;

    virtual antlrcpp::Any visitBinaryBitwiseOperation(XenonParser::BinaryBitwiseOperationContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPositiveExpression(XenonParser::UnaryPositiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNameExpression(XenonParser::NameExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperation(XenonParser::EqualityOperationContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseNegationExpression(XenonParser::BitwiseNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIndex(XenonParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitLiteralDeclaration(XenonParser::LiteralDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(XenonParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPointerExpression(XenonParser::PointerExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSizeofExpression(XenonParser::SizeofExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegationExpression(XenonParser::UnaryNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegativeExpression(XenonParser::UnaryNegativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionExpression(XenonParser::FunctionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryMultiplicativeOperation(XenonParser::BinaryMultiplicativeOperationContext *context) = 0;

    virtual antlrcpp::Any visitPropertyExpression(XenonParser::PropertyExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryConditionalOperation(XenonParser::BinaryConditionalOperationContext *context) = 0;

    virtual antlrcpp::Any visitTypeCast(XenonParser::TypeCastContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationExpression(XenonParser::ClassInstantiationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparisonOperation(XenonParser::BinaryComparisonOperationContext *context) = 0;

    virtual antlrcpp::Any visitScopedName(XenonParser::ScopedNameContext *context) = 0;

    virtual antlrcpp::Any visitName(XenonParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitScopedNameNoGeneric(XenonParser::ScopedNameNoGenericContext *context) = 0;

    virtual antlrcpp::Any visitNameNoGeneric(XenonParser::NameNoGenericContext *context) = 0;

    virtual antlrcpp::Any visitScopeResolver(XenonParser::ScopeResolverContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOperatorStatement(XenonParser::MultiplicativeOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitOperatorStatement(XenonParser::OperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOperatorStatement(XenonParser::BitwiseOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitShiftOperator(XenonParser::ShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticRightShiftOperator(XenonParser::ArithmeticRightShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalRightShiftOperator(XenonParser::LogicalRightShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeftShiftOperator(XenonParser::LeftShiftOperatorContext *context) = 0;

    virtual antlrcpp::Any visitShiftEqualOperator(XenonParser::ShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitArithmeticRightShiftEqualOperator(XenonParser::ArithmeticRightShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLogicalRightShiftEqualOperator(XenonParser::LogicalRightShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitLeftShiftEqualOperator(XenonParser::LeftShiftEqualOperatorContext *context) = 0;

    virtual antlrcpp::Any visitGreaterThanOrEqualToOperator(XenonParser::GreaterThanOrEqualToOperatorContext *context) = 0;

    virtual antlrcpp::Any visitConditionalOperatorStatement(XenonParser::ConditionalOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperatorStatement(XenonParser::ComparisonOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperatorStatement(XenonParser::EqualityOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(XenonParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(XenonParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(XenonParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatingLiteral(XenonParser::FloatingLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(XenonParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(XenonParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArguments(XenonParser::FunctionCallArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArgument(XenonParser::FunctionCallArgumentContext *context) = 0;

    virtual antlrcpp::Any visitOverloadableOperator(XenonParser::OverloadableOperatorContext *context) = 0;

    virtual antlrcpp::Any visitFunction(XenonParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(XenonParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitCastFunctionType(XenonParser::CastFunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionVariadicArgument(XenonParser::FunctionVariadicArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArguments(XenonParser::FunctionArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgument(XenonParser::FunctionArgumentContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(XenonParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(XenonParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(XenonParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(XenonParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(XenonParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(XenonParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitUnionStatement(XenonParser::UnionStatementContext *context) = 0;

    virtual antlrcpp::Any visitUnionBody(XenonParser::UnionBodyContext *context) = 0;

    virtual antlrcpp::Any visitUnionProperty(XenonParser::UnionPropertyContext *context) = 0;

    virtual antlrcpp::Any visitEnumStatement(XenonParser::EnumStatementContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(XenonParser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumProperty(XenonParser::EnumPropertyContext *context) = 0;

    virtual antlrcpp::Any visitSpecialClassStatement(XenonParser::SpecialClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassStatement(XenonParser::ClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassGenerics(XenonParser::ClassGenericsContext *context) = 0;

    virtual antlrcpp::Any visitClassExtends(XenonParser::ClassExtendsContext *context) = 0;

    virtual antlrcpp::Any visitClassBody(XenonParser::ClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitClassBodyElement(XenonParser::ClassBodyElementContext *context) = 0;

    virtual antlrcpp::Any visitClassProperty(XenonParser::ClassPropertyContext *context) = 0;

    virtual antlrcpp::Any visitClassMethod(XenonParser::ClassMethodContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationProperties(XenonParser::ClassInstantiationPropertiesContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationProperty(XenonParser::ClassInstantiationPropertyContext *context) = 0;

    virtual antlrcpp::Any visitTypeArray(XenonParser::TypeArrayContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(XenonParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitTypePointer(XenonParser::TypePointerContext *context) = 0;

    virtual antlrcpp::Any visitTypeReference(XenonParser::TypeReferenceContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(XenonParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassTypeName(XenonParser::ClassTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitClassTypeNameGenerics(XenonParser::ClassTypeNameGenericsContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceStatement(XenonParser::NamespaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(XenonParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitAttributes(XenonParser::AttributesContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(XenonParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAlias(XenonParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyStatement(XenonParser::AssemblyStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyTemplate(XenonParser::AssemblyTemplateContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyOutput(XenonParser::AssemblyOutputContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyInput(XenonParser::AssemblyInputContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyClobber(XenonParser::AssemblyClobberContext *context) = 0;

    virtual antlrcpp::Any visitEos(XenonParser::EosContext *context) = 0;


};

