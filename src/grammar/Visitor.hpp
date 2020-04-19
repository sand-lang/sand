#pragma once

#include "runtime/SanParserBaseVisitor.h"

#include <san/ClassType.hpp>
#include <san/Environment.hpp>
#include <san/Function.hpp>
#include <san/StatementStatus.hpp>

#include <llvm/IR/IRBuilder.h>

#include <regex>
#include <string>
#include <unordered_map>

namespace San
{
class Visitor : public SanParserBaseVisitor
{
public:
    Environment env;
    std::stack<std::shared_ptr<Scope>> scopes;

    Debugger debug;

    Visitor() : env("output")
    {
        scopes.push(env.scope);
    }

    antlrcpp::Any visitInstructions(SanParser::InstructionsContext *context) override
    {
        visitStatements(context->statement());

        return 0;
    }

    StatementStatus visitStatements(const std::vector<SanParser::StatementContext *> &statements)
    {
        for (const auto &statement : statements)
        {
            auto value = visitStatement(statement);

            if (statement->returnStatement())
            {
                return StatementStatus::Returned;
            }
            else if (statement->breakStatement())
            {
                return StatementStatus::Breaked;
            }
            else if (value.is<Block *>())
            {
                const auto block = value.as<Block *>();
                if (block->status == StatementStatus::Returned || block->status == StatementStatus::Breaked)
                {
                    return block->status;
                }
            }
        }

        return StatementStatus::None;
    }

    antlrcpp::Any visitStatement(SanParser::StatementContext *context) override
    {
        if (auto function = context->function())
        {
            return visitFunction(function);
        }
        else if (auto namespace_statement = context->namespaceStatement())
        {
            return this->visitNamespaceStatement(namespace_statement);
        }
        else if (auto expression = context->expression())
        {
            return visitExpression(expression);
        }
        else if (auto body = context->body())
        {
            return visitBody(body);
        }
        else if (auto variable_declaration = context->variableDeclaration())
        {
            return visitVariableDeclaration(variable_declaration);
        }
        else if (auto return_statement = context->returnStatement())
        {
            return visitReturnStatement(return_statement);
        }
        else if (auto if_statement = context->ifStatement())
        {
            return visitIfStatement(if_statement);
        }
        else if (auto while_statement = context->whileStatement())
        {
            return visitWhileStatement(while_statement);
        }
        else if (auto class_statement = context->classStatement())
        {
            return visitClassStatement(class_statement);
        }

        return 0;
    }

    antlrcpp::Any visitFunction(SanParser::FunctionContext *context) override
    {
        auto declaration = visitFunctionDeclaration(context->functionDeclaration()).as<Variable *>();
        auto function = dynamic_cast<Function *>(declaration);

        if (auto body = context->body())
        {
            function->entry = visitBody(body, function).as<Block *>();
        }

        return function;
    }

    antlrcpp::Any visitFunctionDeclaration(SanParser::FunctionDeclarationContext *context) override
    {
        const auto name = context->VariableName()->getText();

        std::vector<std::pair<std::string, Type *>> args;
        bool is_variadic = false;

        if (auto arguments = context->functionArguments())
        {
            auto [args_, is_variadic_] = this->visitFunctionArguments(arguments).as<std::pair<std::vector<std::pair<std::string, Type *>>, bool>>();
            args = args_;
            is_variadic = is_variadic_;
        }

        auto &scope = this->scopes.top();

        auto type = context->type();
        Type *return_type = nullptr;

        if (type)
        {
            return_type = this->visitType(type).as<Type *>();
        }
        else if (name == "main")
        {
            return_type = scope->get_type("i32");
        }
        else
        {
            return_type = scope->get_type("void");
        }

        const auto is_extern = !!context->Extern() || name == "main";
        auto linkage = is_extern ? llvm::GlobalValue::LinkageTypes::ExternalLinkage : llvm::GlobalValue::LinkageTypes::InternalLinkage;

        auto function = new Function(scope, return_type, args, is_variadic, name, linkage);
        return scope->add(function, name);
    }

    antlrcpp::Any visitFunctionArguments(SanParser::FunctionArgumentsContext *context) override
    {
        const auto arguments = context->functionArgument();
        std::vector<std::pair<std::string, Type *>> args;
        bool is_variadic = false;

        for (const auto &arg : arguments)
        {
            auto value = this->visitFunctionArgument(arg);

            if (value.is<std::pair<std::string, Type *>>())
            {
                auto pair = value.as<std::pair<std::string, Type *>>();
                args.push_back(pair);
            }
            else if (value.is<bool>())
            {
                is_variadic = value.as<bool>();
            }
        }

        return std::pair(args, is_variadic);
    }

    antlrcpp::Any visitFunctionArgument(SanParser::FunctionArgumentContext *context) override
    {
        if (auto variable = context->functionArgumentVariable())
        {
            return this->visitFunctionArgumentVariable(variable);
        }
        else if (auto variadic = context->functionArgumentVariadic())
        {
            return true;
        }

        return 0;
    }

    antlrcpp::Any visitFunctionArgumentVariable(SanParser::FunctionArgumentVariableContext *context) override
    {
        const auto name = context->VariableName();
        const auto type = this->visitType(context->type()).as<Type *>();

        return std::pair<std::string, Type *>(!!name ? name->getText() : "", type);
    }

    antlrcpp::Any visitNamespaceStatement(SanParser::NamespaceStatementContext *context) override
    {
        auto &scope = this->scopes.top();
        auto name = context->VariableName()->getText();

        std::shared_ptr<Scope> nsp = nullptr;
        try
        {
            auto &existing = scope->get_namespace(name);
            nsp = existing;
        }
        catch (...)
        {
            nsp = std::make_shared<Scope>(this->scopes.top());
        }
        nsp->add_namespace(nsp, name);

        scope->add_namespace(nsp, name);

        this->scopes.push(nsp);

        this->visitStatements(context->statement());

        this->scopes.pop();

        return nsp;
    }

    antlrcpp::Any visitType(SanParser::TypeContext *context) override
    {
        const auto stored_type = this->visitTypeName(context->typeName());
        Type *type = nullptr;

        if (stored_type.is<ClassType *>())
        {
            type = stored_type.as<ClassType *>();
        }
        else
        {
            type = stored_type.as<Type *>();
        }

        for (const auto &qualifier : context->typeQualifier())
        {
            if (qualifier->Const())
                type->qualifiers.is_mutable = false;
        }

        for (const auto &dimension : context->typeDimensions())
        {
            type->ref = type->ref->getPointerTo();
        }

        return type;
    }

    antlrcpp::Any visitBody(SanParser::BodyContext *context, Function *function = nullptr)
    {
        this->scopes.push(std::make_shared<Scope>(this->scopes.top(), function));

        auto &scope = this->scopes.top();
        auto block = new Block(scope, function != nullptr ? function->ref : nullptr, function != nullptr);

        if (function == nullptr)
        {
            scope->builder.CreateBr(block->bb);
            block->bb->insertInto(scope->function->ref);
        }

        env.builder.SetInsertPoint(block->bb);

        if (function != nullptr)
        {
            function->entry = block;
            function->return_label = llvm::BasicBlock::Create(scope->llvm_context, "return_label");

            const auto return_type = function->ref->getReturnType();
            if (!return_type->isVoidTy())
            {
                function->return_value = scope->builder.CreateAlloca(return_type, nullptr, "return_value");
            }

            auto it = function->ref->arg_begin();
            auto fa = function->args.begin();

            while (it != function->ref->arg_end())
            {
                it->setName(fa->first);

                llvm::AllocaInst *addr = this->env.builder.CreateAlloca(it->getType(), nullptr, fa->first + ".addr");
                this->env.builder.CreateStore(reinterpret_cast<llvm::Value *>(it), addr, false);

                scope->add(new Variable(new Type(it->getType()), reinterpret_cast<llvm::Value *>(addr), VariableValueType::Alloca), fa->first);

                it++;
                fa++;
            }

            if (function->return_value != nullptr)
            {
                const auto type = function->return_value->getAllocatedType();

                if (type->isIntegerTy())
                {
                    scope->builder.CreateStore(llvm::ConstantInt::get(type, 0), function->return_value);
                }
                else if (type->isPointerTy())
                {
                    scope->builder.CreateStore(llvm::ConstantPointerNull::get(reinterpret_cast<llvm::PointerType *>(type)), function->return_value);
                }
            }
        }

        block->status = visitStatements(context->statement());

        if (block->status == StatementStatus::Breaked && scope->is_loop())
        {
            scope->builder.CreateBr(scope->get_loop_end_label());
        }
        else if (function != nullptr)
        {
            if (block->status != StatementStatus::Returned)
            {
                scope->builder.CreateBr(function->return_label);
            }

            function->return_label->insertInto(function->ref);
            scope->builder.SetInsertPoint(function->return_label);

            const auto return_type = function->ref->getReturnType();

            if (return_type->isVoidTy())
            {
                scope->builder.CreateRetVoid();
            }
            else
            {
                const auto return_value = scope->builder.CreateLoad(function->return_value);
                scope->builder.CreateRet(return_value);
            }
        }

        this->scopes.pop();

        return block;
    }

    antlrcpp::Any visitVariableDeclaration(SanParser::VariableDeclarationContext *context) override
    {
        auto &scope = this->scopes.top();

        auto name = context->VariableName()->getText();
        auto type = this->visitType(context->type()).as<Type *>();

        if (scope->function != nullptr)
        {
            auto alloca = scope->builder.CreateAlloca(type->ref, nullptr, name);
            Variable *var = new Variable(type, alloca, VariableValueType::Alloca);

            if (auto expression = context->expression())
            {
                auto rvar = visitExpression(expression).as<Variable *>();
                scope->builder.CreateStore(rvar->cast(type, scope->builder)->get(scope->builder), alloca);
            }

            return scope->add(var, name);
        }
        else
        {
            auto expression = context->expression();
            auto rvar = this->visitExpression(expression).as<Variable *>()->cast(type, scope->builder)->get(scope->builder);

            if (auto constant = llvm::dyn_cast<llvm::Constant>(rvar))
            {
                auto global = new llvm::GlobalVariable(*this->env.module, type->ref, false, llvm::GlobalValue::PrivateLinkage, constant, "." + name);
                auto var = new Variable(type, global, VariableValueType::Alloca);

                return scope->add(var, name);
            }
            else if (auto global = llvm::dyn_cast<llvm::GlobalValue>(rvar))
            {
                global->setName("." + name);

                auto var = new Variable(type, global, VariableValueType::Alloca);
                return scope->add(var, name);
            }
        }
    }

    antlrcpp::Any visitReturnStatement(SanParser::ReturnStatementContext *context) override
    {
        auto &scope = this->scopes.top();
        auto expression = context->expression();

        if (expression)
        {
            auto value = visitExpression(expression).as<Variable *>();
            auto casted = value->load(scope->builder)->cast(scope->function->return_type, scope->builder);

            scope->builder.CreateStore(casted->value, scope->function->return_value);
        }

        scope->builder.CreateBr(scope->function->return_label);

        return nullptr;
    }

    antlrcpp::Any visitExpression(SanParser::ExpressionContext *context)
    {
        if (const auto in_paren_expression_context = dynamic_cast<SanParser::InParenExpressionContext *>(context))
        {
            return visitInParenExpression(in_paren_expression_context);
        }
        else if (const auto sizeof_expression_context = dynamic_cast<SanParser::SizeofExpressionContext *>(context))
        {
            return visitSizeofExpression(sizeof_expression_context);
        }
        else if (const auto class_instantiation_expression_context = dynamic_cast<SanParser::ClassInstantiationExpressionContext *>(context))
        {
            return visitClassInstantiationExpression(class_instantiation_expression_context);
        }
        else if (const auto function_call_expression_context = dynamic_cast<SanParser::FunctionCallExpressionContext *>(context))
        {
            return visitFunctionCallExpression(function_call_expression_context);
        }
        else if (const auto binary_operation_context = dynamic_cast<SanParser::BinaryOperationContext *>(context))
        {
            return visitBinaryOperation(binary_operation_context);
        }
        else if (const auto binary_multiplicative_operation_context = dynamic_cast<SanParser::BinaryMultiplicativeOperationContext *>(context))
        {
            return visitBinaryMultiplicativeOperation(binary_multiplicative_operation_context);
        }
        else if (const auto binary_bitwise_operation_context = dynamic_cast<SanParser::BinaryBitwiseOperationContext *>(context))
        {
            return visitBinaryBitwiseOperation(binary_bitwise_operation_context);
        }
        else if (const auto binary_comparison_operation_context = dynamic_cast<SanParser::BinaryComparisonOperationContext *>(context))
        {
            return visitBinaryComparisonOperation(binary_comparison_operation_context);
        }
        else if (const auto binary_conditional_operation_context = dynamic_cast<SanParser::BinaryConditionalOperationContext *>(context))
        {
            return visitBinaryConditionalOperation(binary_conditional_operation_context);
        }
        else if (const auto equality_operation_context = dynamic_cast<SanParser::EqualityOperationContext *>(context))
        {
            return visitEqualityOperation(equality_operation_context);
        }
        else if (const auto index_context = dynamic_cast<SanParser::IndexContext *>(context))
        {
            return visitIndex(index_context);
        }
        else if (const auto type_cast_context = dynamic_cast<SanParser::TypeCastContext *>(context))
        {
            return visitTypeCast(type_cast_context);
        }
        else if (const auto property_expression_context = dynamic_cast<SanParser::PropertyExpressionContext *>(context))
        {
            return visitPropertyExpression(property_expression_context);
        }
        else if (const auto variable_expression_context = dynamic_cast<SanParser::VariableExpressionContext *>(context))
        {
            return visitVariableExpression(variable_expression_context);
        }
        else if (const auto literal_declaration_context = dynamic_cast<SanParser::LiteralDeclarationContext *>(context))
        {
            return visitLiteralDeclaration(literal_declaration_context);
        }

        return nullptr;
    }

    antlrcpp::Any visitInParenExpression(SanParser::InParenExpressionContext *context) override
    {
        return visitExpression(context->expression());
    }

    antlrcpp::Any visitBinaryMultiplicativeOperation(SanParser::BinaryMultiplicativeOperationContext *context) override
    {
        auto &scope = this->scopes.top();

        const auto opt = context->multiplicativeOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = visitExpression(lexpr_context).as<Variable *>();
        auto rexpr = visitExpression(rexpr_context).as<Variable *>();

        auto [lvar, rvar] = Variable::load_and_balance_types(lexpr, rexpr, scope->builder);

        if (opt->Mul())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateNSWMul(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->Div())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateSDiv(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->Mod())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateSRem(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }

        return 0;
    }

    antlrcpp::Any visitBinaryOperation(SanParser::BinaryOperationContext *context) override
    {
        auto &scope = this->scopes.top();

        const auto opt = context->operatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = visitExpression(lexpr_context).as<Variable *>();
        auto rexpr = visitExpression(rexpr_context).as<Variable *>();

        auto [lvar, rvar] = Variable::load_and_balance_types(lexpr, rexpr, scope->builder);

        if (opt->Add())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateAdd(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->Sub())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateSub(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }

        return 0;
    }

    antlrcpp::Any visitBinaryBitwiseOperation(SanParser::BinaryBitwiseOperationContext *context) override
    {
        auto &scope = this->scopes.top();

        const auto opt = context->bitwiseOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = visitExpression(lexpr_context).as<Variable *>();
        auto rexpr = visitExpression(rexpr_context).as<Variable *>();

        auto [lvar, rvar] = Variable::load_and_balance_types(lexpr, rexpr, scope->builder);

        if (opt->Xor())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateXor(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->BitwiseOr())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateOr(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->BitwiseAnd())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateAnd(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType()), value));
            }
        }

        return 0;
    }

    antlrcpp::Any visitBinaryComparisonOperation(SanParser::BinaryComparisonOperationContext *context) override
    {
        auto &scope = this->scopes.top();

        const auto opt = context->comparisonOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = visitExpression(lexpr_context).as<Variable *>();
        auto rexpr = visitExpression(rexpr_context).as<Variable *>();

        auto [lvar, rvar] = Variable::load_and_balance_types(lexpr, rexpr, scope->builder);

        TypeQualifiers qualifiers;
        qualifiers.is_signed = false;

        if (opt->EqualTo())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateICmpEQ(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType(), qualifiers), value));
            }
        }
        else if (opt->NotEqualTo())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateICmpNE(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType(), qualifiers), value));
            }
        }
        else if (opt->LessThan())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateICmpSLT(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType(), qualifiers), value));
            }
        }
        else if (opt->LessThanOrEqualTo())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateICmpSLE(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType(), qualifiers), value));
            }
        }
        else if (opt->GreaterThan())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateICmpSGT(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType(), qualifiers), value));
            }
        }
        else if (opt->GreaterThanOrEqualTo())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateICmpSGE(lvar->value, rvar->value);
                return scope->add(new Variable(new Type(value->getType(), qualifiers), value));
            }
        }

        return nullptr;
    }

    antlrcpp::Any visitBinaryConditionalOperation(SanParser::BinaryConditionalOperationContext *context) override
    {
        auto &scope = this->scopes.top();

        const auto opt = context->conditionalOperatorStatement();

        const auto lexpr_context = context->expression(0);
        auto lexpr = visitExpression(lexpr_context).as<Variable *>();

        auto cond_false = new Block(scope, scope->function->ref, false);
        auto cond_end = new Block(scope, scope->function->ref, false);

        llvm::Constant *boolean_constant = nullptr;

        if (opt->ConditionalOr())
        {
            boolean_constant = llvm::ConstantInt::getTrue(scope->llvm_context);

            cond_false->bb->setName("lor.rhs");
            cond_end->bb->setName("lor.end");

            scope->builder.CreateCondBr(lexpr->value, cond_end->bb, cond_false->bb);
        }
        else if (opt->ConditionalAnd())
        {
            boolean_constant = llvm::ConstantInt::getFalse(scope->llvm_context);

            cond_false->bb->setName("land.rhs");
            cond_end->bb->setName("land.end");

            scope->builder.CreateCondBr(lexpr->value, cond_false->bb, cond_end->bb);
        }

        scope->function->insert(cond_false);
        env.builder.SetInsertPoint(cond_false->bb);

        const auto rexpr_context = context->expression(1);
        auto rexpr = visitExpression(rexpr_context).as<Variable *>();

        scope->builder.CreateBr(cond_end->bb);

        scope->function->insert(cond_end);
        env.builder.SetInsertPoint(cond_end->bb);

        auto phi = scope->builder.CreatePHI(llvm::Type::getInt1Ty(scope->llvm_context), 2);
        phi->addIncoming(boolean_constant, reinterpret_cast<llvm::Instruction *>(lexpr->value)->getParent());
        phi->addIncoming(rexpr->value, reinterpret_cast<llvm::Instruction *>(rexpr->value)->getParent());

        auto var = new Variable(new Type(phi->getType()), phi);
        return scope->add(var);
    }

    antlrcpp::Any visitEqualityOperation(SanParser::EqualityOperationContext *context) override
    {
        auto &scope = this->scopes.top();

        const auto opt = context->equalityOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = visitExpression(lexpr_context).as<Variable *>();
        auto rexpr = visitExpression(rexpr_context).as<Variable *>();

        auto value = rexpr->cast(lexpr->type, scope->builder)->get(scope->builder);

        if (auto alloca = lexpr->get_alloca())
        {
            scope->builder.CreateStore(value, alloca);
        }
        else if (lexpr->value_type == VariableValueType::GEP)
        {
            scope->builder.CreateStore(value, lexpr->value);
        }
        else
        {
            std::cerr << "Invalid lvalue" << std::endl;
        }

        return lexpr;
    }

    antlrcpp::Any visitIndex(SanParser::IndexContext *context) override
    {
        auto &scope = this->scopes.top();

        auto expression = this->visitExpression(context->expression(0)).as<Variable *>();
        auto index = this->visitExpression(context->expression(1)).as<Variable *>();

        auto i64 = llvm::Type::getInt64Ty(scope->llvm_context);

        std::vector<llvm::Value *> idxs;

        if (expression->type->is_pointer())
        {
            expression = expression->load(scope->builder);
        }
        else
        {
            idxs.push_back(llvm::ConstantInt::get(i64, 0));
        }

        auto index_value = index->cast(new Type(i64), scope->builder)->get(scope->builder);
        idxs.push_back(index_value);

        auto value = scope->builder.CreateInBoundsGEP(expression->value, idxs, "idx");

        auto var = new Variable(new Type(value->getType()->getPointerElementType()), value, VariableValueType::GEP);
        return scope->add(var);
    }

    antlrcpp::Any visitTypeCast(SanParser::TypeCastContext *context) override
    {
        auto &scope = this->scopes.top();
        auto expr = visitExpression(context->expression()).as<Variable *>();
        auto type = visitType(context->type()).as<Type *>();

        return expr->cast(type, scope->builder);
    }

    antlrcpp::Any visitPropertyExpression(SanParser::PropertyExpressionContext *context) override
    {
        auto &scope = this->scopes.top();

        auto expr = this->visitExpression(context->expression()).as<Variable *>();
        auto name = context->VariableName()->getText();

        auto type = dynamic_cast<ClassType *>(expr->type);

        auto property = type->get_property(name);
        if (property == nullptr)
        {
            throw std::out_of_range("Property " + name + " doesn't exist");
        }

        llvm::Value *value = nullptr;

        if (property->from != nullptr)
        {
            auto bytes = expr->cast_to_bytes(scope->builder);

            std::vector<llvm::Value *> idxs = {
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), property->padding, false),
            };

            value = scope->builder.CreateInBoundsGEP(bytes->value, idxs);

            auto tmp_var = new Variable(new Type(value->getType()), value, VariableValueType::GEP);
            auto target_type = property->from->pointer();
            value = tmp_var->cast(target_type, scope->builder, false)->value;
        }
        else
        {
            value = expr->value;
        }

        std::vector<llvm::Value *> idxs = {
            llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), 0, false),
            llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), property->index, false),
        };

        auto ptr = scope->builder.CreateInBoundsGEP(value, idxs, name);
        return new Variable(property->type, ptr, VariableValueType::GEP);
    }

    antlrcpp::Any visitVariableExpression(SanParser::VariableExpressionContext *context) override
    {
        if (auto scope_resolver = context->scopeResolver())
        {
            auto space = this->visitScopeResolver(scope_resolver, this->scopes.top());

            if (space.is<std::shared_ptr<Scope>>())
            {
                auto scope = space.as<std::shared_ptr<Scope>>();
                auto var = scope->get_var(context->VariableName()->getText());

                return var;
            }
        }

        auto &scope = this->scopes.top();
        auto var = scope->get_var(context->VariableName()->getText());

        return var;
    }

    antlrcpp::Any visitSizeofExpression(SanParser::SizeofExpressionContext *context) override
    {
        auto &scope = this->scopes.top();

        auto type = this->visitType(context->type()).as<Type *>();
        auto value = llvm::ConstantInt::get(llvm::Type::getInt64Ty(scope->llvm_context), type->size());

        return new Variable(new Type(value->getType()), value);
    }

    antlrcpp::Any visitFunctionCallExpression(SanParser::FunctionCallExpressionContext *context) override
    {
        auto &scope = this->scopes.top();
        auto expression = visitExpression(context->expression()).as<Variable *>();

        if (expression->type->is_function())
        {
            std::vector<llvm::Value *> args;

            if (auto arguments = context->functionCallArguments())
            {
                args = visitFunctionCallArguments(context->functionCallArguments()).as<std::vector<llvm::Value *>>();
            }

            auto ret = scope->builder.CreateCall(expression->value, args);
            return new Variable(new Type(ret->getType()), reinterpret_cast<llvm::Value *>(ret));
        }

        std::cerr << "Expression is not a function" << std::endl;

        return nullptr;
    }

    antlrcpp::Any visitFunctionCallArguments(SanParser::FunctionCallArgumentsContext *context) override
    {
        auto &scope = this->scopes.top();
        std::vector<llvm::Value *> args;

        for (auto arg : context->functionCallArgument())
        {
            auto var = visitFunctionCallArgument(arg).as<Variable *>();
            args.push_back(var->get(scope->builder));
        }

        return args;
    }

    antlrcpp::Any visitFunctionCallArgument(SanParser::FunctionCallArgumentContext *context) override
    {
        return visitExpression(context->expression());
    }

    antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *context) override
    {
        return visitLiteral(context->literal());
    }

    antlrcpp::Any visitLiteral(SanParser::LiteralContext *context) override
    {
        auto &scope = this->scopes.top();

        if (const auto literal = context->IntegerLiteral())
        {
            const auto type = llvm::Type::getInt32Ty(this->env.llvm_context);
            const auto value = llvm::ConstantInt::get(type, std::stoi(literal->getText()), true);

            return scope->add(new Variable(new Type(value->getType()), value));
        }
        else if (const auto literal = context->StringLiteral())
        {
            auto str = literal->getSymbol()->getText();
            str = str.substr(1, str.size() - 2);

            str = std::regex_replace(str, std::regex("\\\\a"), "\a");
            str = std::regex_replace(str, std::regex("\\\\b"), "\b");
            str = std::regex_replace(str, std::regex("\\\\f"), "\f");
            str = std::regex_replace(str, std::regex("\\\\n"), "\n");
            str = std::regex_replace(str, std::regex("\\\\r"), "\r");
            str = std::regex_replace(str, std::regex("\\\\t"), "\t");
            str = std::regex_replace(str, std::regex("\\\\t"), "\t");
            str = std::regex_replace(str, std::regex("\\\\v"), "\v");
            str = std::regex_replace(str, std::regex("\\\\\\?"), "\?");
            str = std::regex_replace(str, std::regex("\\\\(.)"), "$1");

            auto constant = llvm::ConstantDataArray::getString(this->env.llvm_context, str, true);
            auto global = new llvm::GlobalVariable(*this->env.module, constant->getType(), false, llvm::GlobalValue::PrivateLinkage, constant, ".str");
            global->setAlignment(1);

            std::vector<llvm::Value *> idxs = {
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), 0, false),
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), 0, false),
            };

            const auto value = this->env.builder.CreateGEP(global, idxs);
            return scope->add(new Variable(new Type(value->getType()), value));
        }
        else if (const auto literal = context->CharLiteral())
        {
            auto str = literal->getSymbol()->getText();
            str = str.substr(1, str.size() - 2);

            int integer = 0;
            for (const auto &c : str)
            {
                integer = (integer << 8) + static_cast<int>(c);
            }

            const auto type = llvm::Type::getInt32Ty(this->env.llvm_context);
            const auto value = llvm::ConstantInt::get(type, integer, true);

            return scope->add(new Variable(new Type(value->getType()), value));
        }

        return nullptr;
    }

    antlrcpp::Any visitIfStatement(SanParser::IfStatementContext *context) override
    {
        this->scopes.push(std::make_shared<Scope>(this->scopes.top()));

        auto scope = this->scopes.top();

        auto if_then = new Block(scope, "if.then", scope->function->ref, false);
        auto if_end = new Block(scope, "if.end", scope->function->ref, false);
        auto if_next = if_end;

        if (context->elseStatement())
        {
            if_next = new Block(scope, "if.else", scope->function->ref, false);
        }

        if (auto expression = context->expression())
        {
            auto var = this->visitExpression(expression).as<Variable *>();
            auto cond = var->cast(new Type(llvm::Type::getInt1Ty(scope->llvm_context)), scope->builder);

            scope->builder.CreateCondBr(cond->get(scope->builder), if_then->bb, if_next->bb);
        }
        else if (auto variable_declaration = context->variableDeclaration())
        {
            auto var = this->visitVariableDeclaration(variable_declaration).as<Variable *>();
            auto cond = var->cast(new Type(llvm::Type::getInt1Ty(scope->llvm_context)), scope->builder);

            scope->builder.CreateCondBr(cond->get(scope->builder), if_then->bb, if_next->bb);
        }

        scope->function->insert(if_then);
        env.builder.SetInsertPoint(if_then->bb);

        if_then->status = visitStatements({context->statement()});

        this->scopes.pop();

        if (if_then->status == StatementStatus::None)
        {
            scope->builder.CreateBr(if_end->bb);
        }

        scope = this->scopes.top();

        scope->function->insert(if_next);
        env.builder.SetInsertPoint(if_next->bb);

        if (auto else_statement = context->elseStatement())
        {
            if_next->status = visitElseStatement(else_statement).as<StatementStatus>();

            if (if_next->status == StatementStatus::None)
            {
                scope->builder.CreateBr(if_end->bb);
            }

            scope->function->insert(if_end);
            env.builder.SetInsertPoint(if_end->bb);
        }

        return 0;
    }

    antlrcpp::Any visitElseStatement(SanParser::ElseStatementContext *context) override
    {
        return visitStatements({context->statement()});
    }

    antlrcpp::Any visitWhileStatement(SanParser::WhileStatementContext *context) override
    {
        this->scopes.push(std::make_shared<Scope>(this->scopes.top()));

        auto scope = this->scopes.top();

        auto while_cond = new Block(scope, "while.cond", scope->function->ref, false);
        auto while_body = new Block(scope, "while.body", scope->function->ref, false);
        auto while_end = new Block(scope, "while.end", scope->function->ref, false);

        scope->is_loop(true);
        scope->loop_end_label = while_end->bb;

        scope->builder.CreateBr(while_cond->bb);

        scope->function->insert(while_cond);
        env.builder.SetInsertPoint(while_cond->bb);

        auto var = this->visitExpression(context->expression()).as<Variable *>();
        auto condition = var->cast(new Type(llvm::Type::getInt1Ty(scope->llvm_context)), scope->builder);

        scope->builder.CreateCondBr(condition->get(scope->builder), while_body->bb, while_end->bb);

        scope->function->insert(while_body);
        env.builder.SetInsertPoint(while_body->bb);
        while_body->status = this->visitStatements({context->statement()});

        if (while_body->status == StatementStatus::Breaked)
        {
            scope->builder.CreateBr(while_end->bb);
        }
        else if (while_body->status != StatementStatus::Returned)
        {
            scope->builder.CreateBr(while_cond->bb);
        }

        scope->function->insert(while_end);
        env.builder.SetInsertPoint(while_end->bb);

        this->scopes.pop();

        return 0;
    }

    antlrcpp::Any visitClassStatement(SanParser::ClassStatementContext *context) override
    {
        auto &scope = this->scopes.top();
        auto name = context->VariableName()->getText();

        if (auto generics_context = context->classGenerics())
        {
            auto generics = this->visitClassGenerics(generics_context).as<std::vector<std::string>>();
            auto structure = new ClassType(generics, context);

            return scope->add_type(structure, name);
        }
        else
        {
            std::vector<ClassType *> parents;
            if (auto extends = context->classExtends())
            {
                parents = this->visitClassExtends(extends).as<decltype(parents)>();
            }

            auto structure = this->visitClassBody(context->classBody(), parents).as<ClassType *>();
            structure->get_struct()->setName(name + ".class");

            return scope->add_type(structure, name);
        }
    }

    antlrcpp::Any visitClassStatement(SanParser::ClassStatementContext *context, std::vector<Type *> generics)
    {
        this->scopes.push(std::make_shared<Scope>(this->scopes.top()));
        auto scope = this->scopes.top();

        auto name = context->VariableName()->getText();

        auto generics_context = context->classGenerics();
        auto generics_names = this->visitClassGenerics(generics_context).as<std::vector<std::string>>();

        for (size_t i = 0; i < generics.size(); i++)
        {
            scope->add_type(generics[i], generics_names[i]);
        }

        std::vector<ClassType *> parents;
        if (auto extends = context->classExtends())
        {
            parents = this->visitClassExtends(extends).as<decltype(parents)>();
        }

        auto structure = this->visitClassBody(context->classBody(), parents).as<ClassType *>();
        structure->get_struct()->setName(name + ".class");

        this->scopes.pop();

        scope = this->scopes.top();
        scope->add_type(structure, name);

        return structure;
    }

    antlrcpp::Any visitClassGenerics(SanParser::ClassGenericsContext *context) override
    {
        std::vector<std::string> generics;

        for (const auto &name : context->VariableName())
        {
            generics.push_back(name->getText());
        }

        return generics;
    }

    antlrcpp::Any visitClassExtends(SanParser::ClassExtendsContext *context) override
    {
        auto &scope = this->scopes.top();
        std::vector<ClassType *> types;

        for (auto &typeName : context->classTypeName())
        {
            auto type = this->visitClassTypeName(typeName, scope).as<ClassType *>();
            types.push_back(type);
        }

        return types;
    }

    antlrcpp::Any visitClassBody(SanParser::ClassBodyContext *context, std::vector<ClassType *> parents)
    {
        auto &scope = this->scopes.top();

        std::vector<std::pair<std::string, Type *>> properties;
        std::vector<llvm::Type *> properties_types;

        for (auto &parent : parents)
        {
            properties_types.push_back(parent->ref);
        }

        for (auto &class_property : context->classProperty())
        {
            auto property = this->visitClassProperty(class_property).as<std::pair<std::string, Type *>>();

            properties.push_back(property);
            properties_types.push_back(property.second->ref);
        }

        auto type = llvm::StructType::create(scope->llvm_context, properties_types, "", false);
        return new ClassType(type, parents, {}, properties);
    }

    antlrcpp::Any visitClassProperty(SanParser::ClassPropertyContext *context) override
    {
        auto name = context->VariableName()->getText();
        auto type = this->visitType(context->type()).as<Type *>();

        return std::pair(name, type);
    }

    antlrcpp::Any visitClassInstantiationExpression(SanParser::ClassInstantiationExpressionContext *context) override
    {
        auto &scope = this->scopes.top();
        auto structure = this->visitClassTypeName(context->classTypeName(), scope).as<ClassType *>();

        auto alloca = scope->builder.CreateAlloca(structure->ref);
        auto var = new Variable(structure, alloca, VariableValueType::Alloca);

        if (auto properties = context->classInstantiationProperties())
        {
            this->visitClassInstantiationProperties(properties, var);
        }

        return var;
    }

    antlrcpp::Any visitClassInstantiationProperties(SanParser::ClassInstantiationPropertiesContext *context, Variable *var)
    {
        for (const auto &property : context->classInstantiationProperty())
        {
            this->visitClassInstantiationProperty(property, var);
        }

        return 0;
    }

    antlrcpp::Any visitClassInstantiationProperty(SanParser::ClassInstantiationPropertyContext *context, Variable *var)
    {
        auto &scope = this->scopes.top();
        auto type = dynamic_cast<ClassType *>(var->type);

        auto name = context->VariableName()->getText();

        Variable *value = nullptr;

        if (auto expression = context->expression())
        {
            value = this->visitExpression(expression).as<Variable *>();
        }
        else
        {
            value = scope->get_var(name);
        }

        auto property = type->get_property(name);
        if (property == nullptr)
        {
            throw std::out_of_range("Property " + name + " doesn't exist");
        }

        llvm::Value *target = nullptr;

        if (property->from != nullptr)
        {
            auto bytes = var->cast_to_bytes(scope->builder);

            std::vector<llvm::Value *> idxs = {
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), property->padding, false),
            };

            target = scope->builder.CreateInBoundsGEP(bytes->value, idxs);

            auto tmp_var = new Variable(new Type(target->getType()), target, VariableValueType::GEP);
            auto target_type = property->from->pointer();
            target = tmp_var->cast(target_type, scope->builder, false)->value;
        }
        else
        {
            target = var->value;
        }

        std::vector<llvm::Value *> idxs = {
            llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), 0, false),
            llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), property->index, false),
        };

        auto ptr = scope->builder.CreateInBoundsGEP(target, idxs, name);
        scope->builder.CreateStore(value->cast(property->type, scope->builder)->get(scope->builder), ptr);

        return 0;
    }

    antlrcpp::Any visitTypeName(SanParser::TypeNameContext *context) override
    {
        if (auto primary_type_name = context->primaryTypeName())
        {
            auto name = primary_type_name->getText();
            return this->scopes.top()->get_type(name);
        }
        else if (auto class_type_name = context->classTypeName())
        {
            if (auto scope_resolver = context->scopeResolver())
            {
                auto space = this->visitScopeResolver(scope_resolver, this->scopes.top());

                if (space.is<std::shared_ptr<Scope>>())
                {
                    auto scope = space.as<std::shared_ptr<Scope>>();

                    auto type = this->visitClassTypeName(class_type_name, scope);

                    if (type.is<ClassType *>())
                    {
                        return type.as<ClassType *>();
                    }

                    return type.as<Type *>();
                }
            }
            else
            {
                auto type = this->visitClassTypeName(class_type_name, this->scopes.top());

                if (type.is<ClassType *>())
                {
                    return type.as<ClassType *>();
                }

                return type.as<Type *>();
            }
        }

        return nullptr;
    }

    antlrcpp::Any visitClassTypeName(SanParser::ClassTypeNameContext *context, std::shared_ptr<San::Scope> &scope)
    {
        auto name = context->VariableName()->getText();

        std::vector<Type *> generics;
        if (auto class_type_name_generics = context->classTypeNameGenerics())
        {
            generics = this->visitClassTypeNameGenerics(class_type_name_generics).as<decltype(generics)>();
        }

        auto type = scope->get_type(name, generics);

        if (auto class_type = dynamic_cast<ClassType *>(type))
        {
            if (!generics.empty())
            {
                return this->visitClassStatement(class_type->context, generics).as<ClassType *>();
            }

            return class_type;
        }

        return type;
    }

    antlrcpp::Any visitClassTypeNameGenerics(SanParser::ClassTypeNameGenericsContext *context) override
    {
        auto &scope = this->scopes.top();

        std::vector<Type *> types;

        for (const auto &type_context : context->type())
        {
            auto type = this->visitType(type_context);
            types.push_back(type);
        }

        return types;
    }

    antlrcpp::Any visitScopeResolver(SanParser::ScopeResolverContext *context, std::shared_ptr<Scope> &scope)
    {
        if (auto name_context = context->VariableName())
        {
            auto name = name_context->getText();

            if (auto space = scope->get_namespace(name))
            {
                if (auto scope_resolver = context->scopeResolver())
                {
                    return this->visitScopeResolver(scope_resolver, space);
                }

                return space;
            }
            else if (auto type = scope->get_type(name))
            {
                if (auto class_type = dynamic_cast<ClassType *>(type))
                {
                    if (auto scope_resolver = context->scopeResolver())
                    {
                        return this->visitScopeResolver(scope_resolver, class_type);
                    }

                    return class_type;
                }

                return type;
            }
        }
        else if (auto class_type_name = context->classTypeName())
        {
            auto type = this->visitClassTypeName(class_type_name, scope).as<ClassType *>();

            if (auto scope_resolver = context->scopeResolver())
            {
                return this->visitScopeResolver(scope_resolver, type);
            }
        }

        std::cout << "b" << std::endl;
    }

    antlrcpp::Any visitScopeResolver(SanParser::ScopeResolverContext *context, ClassType *class_type)
    {
    }
};
} // namespace San
