#pragma once

#include "runtime/SanParserBaseVisitor.h"

#include <san/Environment.hpp>
#include <san/Function.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
class Visitor : public SanParserBaseVisitor
{
public:
    Environment env;
    std::stack<std::shared_ptr<Scope>> scopes;

    Visitor() : env("output")
    {
        scopes.push(env.scope);
    }

    antlrcpp::Any visitInstructions(SanParser::InstructionsContext *context) override
    {
        for (const auto &statement : context->statement())
        {
            visitStatement(statement);
        }

        return 0;
    }

    antlrcpp::Any visitStatement(SanParser::StatementContext *context) override
    {
        if (auto function = context->function())
        {
            return visitFunction(function);
        }
        else if (auto expression = context->expression())
        {
            return visitExpression(expression);
        }
        else if (auto body = context->body())
        {
            return visitBody(body);
        }

        return 0;
    }

    antlrcpp::Any visitFunction(SanParser::FunctionContext *context) override
    {
        auto declaration = visitFunctionDeclaration(context->functionDeclaration()).as<Variable *>();
        auto function = dynamic_cast<Function *>(declaration);
        auto body = context->body();

        if (body)
        {
            function->entry = visitBody(body, function).as<Block *>();
        }

        return function;
    }

    antlrcpp::Any visitFunctionDeclaration(SanParser::FunctionDeclarationContext *context) override
    {
        const auto name = context->VariableName()->getText();

        std::vector<llvm::Type *> args;

        auto return_type = llvm::Type::getInt32Ty(this->env.llvm_context);

        auto function = new Function(this->scopes.top(), return_type, args, name);
        return this->scopes.top()->add(function, name);
    }

    antlrcpp::Any visitBody(SanParser::BodyContext *context, Function *function = nullptr)
    {
        auto block = new Block(this->scopes.top(), function->ref);

        if (function != nullptr)
        {
            function->entry = block;
        }

        env.builder.SetInsertPoint(block->bb);

        for (const auto &statement : context->statement())
        {
            const auto var = visitStatement(statement).as<Variable *>();
            env.builder.CreateRet(var->value);
        }

        return block;
    }

    antlrcpp::Any visitExpression(SanParser::ExpressionContext *context)
    {
        if (const auto in_paren_expression_context = dynamic_cast<SanParser::InParenExpressionContext *>(context))
        {
            return visitInParenExpression(in_paren_expression_context);
        }
        else if (const auto binary_operation_context = dynamic_cast<SanParser::BinaryOperationContext *>(context))
        {
            return visitBinaryOperation(binary_operation_context);
        }
        else if (const auto binary_multiplicative_operation_context = dynamic_cast<SanParser::BinaryMultiplicativeOperationContext *>(context))
        {
            return visitBinaryMultiplicativeOperation(binary_multiplicative_operation_context);
        }
        else if (const auto literal_declaration_context = dynamic_cast<SanParser::LiteralDeclarationContext *>(context))
        {
            return visitLiteralDeclaration(literal_declaration_context);
        }

        return 0;
    }

    antlrcpp::Any visitInParenExpression(SanParser::InParenExpressionContext *context) override
    {
        return visitExpression(context->expression());
    }

    antlrcpp::Any visitBinaryMultiplicativeOperation(SanParser::BinaryMultiplicativeOperationContext *context) override
    {
        const auto opt = context->multiplicativeOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        const auto lexpr = visitExpression(lexpr_context);
        const auto rexpr = visitExpression(rexpr_context);

        const auto lvar = lexpr.as<Variable *>();
        const auto rvar = rexpr.as<Variable *>();

        if (opt->Mul())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = this->env.builder.CreateNSWMul(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(value));
            }
        }
        else if (opt->Div())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = this->env.builder.CreateSDiv(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(value));
            }
        }
        else if (opt->Mod())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = this->env.builder.CreateSRem(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(value));
            }
        }

        return 0;
    }

    antlrcpp::Any visitBinaryOperation(SanParser::BinaryOperationContext *context) override
    {
        const auto opt = context->operatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        const auto lexpr = visitExpression(lexpr_context);
        const auto rexpr = visitExpression(rexpr_context);

        const auto lvar = lexpr.as<Variable *>();
        const auto rvar = rexpr.as<Variable *>();

        lvar->value->print(llvm::outs());
        std::cout << std::endl;
        rvar->value->print(llvm::outs());
        std::cout << std::endl;

        if (opt->Add())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = this->env.builder.CreateAdd(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(value));
            }
        }
        else if (opt->Sub())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = this->env.builder.CreateSub(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(value));
            }
        }

        return 0;
    }

    antlrcpp::Any visitLiteralDeclaration(SanParser::LiteralDeclarationContext *context) override
    {
        return visitLiteral(context->literal());
    }

    antlrcpp::Any visitLiteral(SanParser::LiteralContext *context) override
    {
        if (const auto literal = context->IntegerLiteral())
        {
            const auto type = llvm::Type::getInt32Ty(this->env.llvm_context);
            const auto value = llvm::ConstantInt::get(type, std::stoi(literal->getText()), true);

            return this->scopes.top()->add(new Variable(value));
        }
        else if (const auto literal = context->IntegerLiteral())
        {
            auto constant = llvm::ConstantDataArray::getString(this->env.llvm_context, literal->getText(), true);
            auto global = new llvm::GlobalVariable(*this->env.module, constant->getType(), false, llvm::GlobalValue::PrivateLinkage, constant, ".str");
            global->setAlignment(1);

            std::vector<llvm::Value *> idxs = {
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), 0, false),
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->env.llvm_context), 0, false),
            };

            const auto value = this->env.builder.CreateGEP(global, idxs);
            return this->scopes.top()->add(new Variable(value));
        }

        return nullptr;
    }
};
} // namespace San
