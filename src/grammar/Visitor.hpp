#pragma once

#include "runtime/SanParserBaseVisitor.h"

#include <san/Environment.hpp>
#include <san/Function.hpp>

#include <llvm/IR/IRBuilder.h>

#include <string>
#include <unordered_map>

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

        const auto arguments = context->functionArguments();

        std::unordered_map<std::string, Type *> args;

        if (arguments)
        {
            args = this->visitFunctionArguments(arguments).as<std::unordered_map<std::string, Type *>>();
        }

        auto type = context->type();
        Type *return_type = nullptr;

        if (type)
        {
            return_type = this->visitType(type).as<Type *>();
        }
        else
        {
            return_type = this->scopes.top()->get_type("void");
        }

        auto function = new Function(this->scopes.top(), return_type, args, name);
        return this->scopes.top()->add(function, name);
    }

    antlrcpp::Any visitFunctionArguments(SanParser::FunctionArgumentsContext *context) override
    {
        const auto arguments = context->functionArgument();
        std::unordered_map<std::string, Type *> args;

        for (const auto &arg : arguments)
        {
            auto pair = this->visitFunctionArgument(arg).as<std::pair<std::string, Type *>>();
            args.insert(pair);
        }

        return args;
    }

    antlrcpp::Any visitFunctionArgument(SanParser::FunctionArgumentContext *context) override
    {
        const auto name = context->VariableName()->getText();
        const auto type = this->visitType(context->type()).as<Type *>();

        return std::pair<std::string, Type *>(name, type);
    }

    antlrcpp::Any visitType(SanParser::TypeContext *context) override
    {
        const auto name = context->typeName()->getText();

        return this->scopes.top()->get_type(name);
    }

    antlrcpp::Any visitBody(SanParser::BodyContext *context, Function *function = nullptr)
    {
        auto block = new Block(this->scopes.top(), function->ref);
        env.builder.SetInsertPoint(block->bb);

        if (function != nullptr)
        {
            function->entry = block;

            auto it = function->ref->arg_begin();
            auto fa = function->args.begin();

            while (it != function->ref->arg_end())
            {
                it->setName(fa->first);

                llvm::AllocaInst *addr = this->env.builder.CreateAlloca(it->getType(), nullptr, fa->first + ".addr");
                this->env.builder.CreateStore(reinterpret_cast<llvm::Value *>(it), addr, false);

                it++;
                fa++;
            }
        }

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
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateNSWMul(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->Div())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateSDiv(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->Mod())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateSRem(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
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
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateAdd(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
            }
        }
        else if (opt->Sub())
        {
            if (lvar->type->is_integer() && lvar->type->is_integer())
            {
                const auto value = this->env.builder.CreateSub(lvar->value, rvar->value);
                return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
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

            return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
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
            return this->scopes.top()->add(new Variable(new Type(value->getType()), value));
        }

        return nullptr;
    }
};
} // namespace San
