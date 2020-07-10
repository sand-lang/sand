
// Generated from SanParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "SanParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SanParser.
 */
class  SanParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SanParser.
   */
    virtual antlrcpp::Any visitInstructions(SanParser::InstructionsContext *context) = 0;

    virtual antlrcpp::Any visitBody(SanParser::BodyContext *context) = 0;

    virtual antlrcpp::Any visitStatement(SanParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitSuffixUnaryNegationExpression(SanParser::SuffixUnaryNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInParenExpression(SanParser::InParenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryOperation(SanParser::BinaryOperationContext *context) = 0;

    virtual antlrcpp::Any visitBinaryBitwiseOperation(SanParser::BinaryBitwiseOperationContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPositiveExpression(SanParser::UnaryPositiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNameExpression(SanParser::NameExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperation(SanParser::EqualityOperationContext *context) = 0;

    virtual antlrcpp::Any visitIndex(SanParser::IndexContext *context) = 0;

    virtual antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(SanParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSizeofExpression(SanParser::SizeofExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegationExpression(SanParser::UnaryNegationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryNegativeExpression(SanParser::UnaryNegativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionExpression(SanParser::FunctionExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryMultiplicativeOperation(SanParser::BinaryMultiplicativeOperationContext *context) = 0;

    virtual antlrcpp::Any visitPropertyExpression(SanParser::PropertyExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryConditionalOperation(SanParser::BinaryConditionalOperationContext *context) = 0;

    virtual antlrcpp::Any visitTypeCast(SanParser::TypeCastContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationExpression(SanParser::ClassInstantiationExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBinaryComparisonOperation(SanParser::BinaryComparisonOperationContext *context) = 0;

    virtual antlrcpp::Any visitScopedName(SanParser::ScopedNameContext *context) = 0;

    virtual antlrcpp::Any visitName(SanParser::NameContext *context) = 0;

    virtual antlrcpp::Any visitScopedNameNoGeneric(SanParser::ScopedNameNoGenericContext *context) = 0;

    virtual antlrcpp::Any visitNameNoGeneric(SanParser::NameNoGenericContext *context) = 0;

    virtual antlrcpp::Any visitScopeResolver(SanParser::ScopeResolverContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOperatorStatement(SanParser::MultiplicativeOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitOperatorStatement(SanParser::OperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitBitwiseOperatorStatement(SanParser::BitwiseOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalOperatorStatement(SanParser::ConditionalOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperatorStatement(SanParser::ComparisonOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperatorStatement(SanParser::EqualityOperatorStatementContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(SanParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(SanParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(SanParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatingLiteral(SanParser::FloatingLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(SanParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(SanParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArguments(SanParser::FunctionCallArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallArgument(SanParser::FunctionCallArgumentContext *context) = 0;

    virtual antlrcpp::Any visitOverloadableOperator(SanParser::OverloadableOperatorContext *context) = 0;

    virtual antlrcpp::Any visitFunction(SanParser::FunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(SanParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitCastFunctionType(SanParser::CastFunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionVariadicArgument(SanParser::FunctionVariadicArgumentContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArguments(SanParser::FunctionArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitFunctionArgument(SanParser::FunctionArgumentContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(SanParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(SanParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(SanParser::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(SanParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(SanParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitBreakStatement(SanParser::BreakStatementContext *context) = 0;

    virtual antlrcpp::Any visitUnionStatement(SanParser::UnionStatementContext *context) = 0;

    virtual antlrcpp::Any visitUnionBody(SanParser::UnionBodyContext *context) = 0;

    virtual antlrcpp::Any visitUnionProperty(SanParser::UnionPropertyContext *context) = 0;

    virtual antlrcpp::Any visitEnumStatement(SanParser::EnumStatementContext *context) = 0;

    virtual antlrcpp::Any visitEnumBody(SanParser::EnumBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumProperty(SanParser::EnumPropertyContext *context) = 0;

    virtual antlrcpp::Any visitSpecialClassStatement(SanParser::SpecialClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassStatement(SanParser::ClassStatementContext *context) = 0;

    virtual antlrcpp::Any visitClassGenerics(SanParser::ClassGenericsContext *context) = 0;

    virtual antlrcpp::Any visitClassExtends(SanParser::ClassExtendsContext *context) = 0;

    virtual antlrcpp::Any visitClassBody(SanParser::ClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitClassProperty(SanParser::ClassPropertyContext *context) = 0;

    virtual antlrcpp::Any visitClassMethod(SanParser::ClassMethodContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationProperties(SanParser::ClassInstantiationPropertiesContext *context) = 0;

    virtual antlrcpp::Any visitClassInstantiationProperty(SanParser::ClassInstantiationPropertyContext *context) = 0;

    virtual antlrcpp::Any visitType(SanParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeQualifier(SanParser::TypeQualifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeDimensions(SanParser::TypeDimensionsContext *context) = 0;

    virtual antlrcpp::Any visitTypePointer(SanParser::TypePointerContext *context) = 0;

    virtual antlrcpp::Any visitTypeReference(SanParser::TypeReferenceContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(SanParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(SanParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitClassTypeName(SanParser::ClassTypeNameContext *context) = 0;

    virtual antlrcpp::Any visitClassTypeNameGenerics(SanParser::ClassTypeNameGenericsContext *context) = 0;

    virtual antlrcpp::Any visitNamespaceStatement(SanParser::NamespaceStatementContext *context) = 0;

    virtual antlrcpp::Any visitImportStatement(SanParser::ImportStatementContext *context) = 0;

    virtual antlrcpp::Any visitAttributes(SanParser::AttributesContext *context) = 0;

    virtual antlrcpp::Any visitAttribute(SanParser::AttributeContext *context) = 0;

    virtual antlrcpp::Any visitAlias(SanParser::AliasContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyStatement(SanParser::AssemblyStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyTemplate(SanParser::AssemblyTemplateContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyOutput(SanParser::AssemblyOutputContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyInput(SanParser::AssemblyInputContext *context) = 0;

    virtual antlrcpp::Any visitAssemblyClobber(SanParser::AssemblyClobberContext *context) = 0;

    virtual antlrcpp::Any visitEos(SanParser::EosContext *context) = 0;


};

