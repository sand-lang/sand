#pragma once

#include "runtime/SanParserBaseVisitor.h"

#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San
{
class Visitor : public SanParserBaseVisitor
{
public:
    llvm::LLVMContext llvm_context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;

    Visitor() : builder(this->llvm_context), module(std::make_unique<llvm::Module>("output", this->llvm_context)) {}

    antlrcpp::Any visitInstructions(SanParser::InstructionsContext *context) override
    {
        for (const auto &statement : context->statement())
        {
            const auto value = visitStatement(statement);
            value.as<Variable *>()->value->print(llvm::outs());
            std::cout << std::endl;
        }

        return 0;
    }

    antlrcpp::Any visitStatement(SanParser::StatementContext *context) override
    {
        const auto expression = context->expression();

        if (expression)
        {
            return visitExpression(expression);
        }

        return 0;
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

        lvar->value->print(llvm::outs());
        std::cout << std::endl;
        rvar->value->print(llvm::outs());
        std::cout << std::endl;

        if (opt->Mul())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = builder.CreateNSWMul(lvar->value, rvar->value);
                return new Variable(value);
            }
        }
        else if (opt->Div())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = builder.CreateSDiv(lvar->value, rvar->value);
                return new Variable(value);
            }
        }
        else if (opt->Mod())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = builder.CreateSRem(lvar->value, rvar->value);
                return new Variable(value);
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
                const auto value = builder.CreateAdd(lvar->value, rvar->value);
                return new Variable(value);
            }
        }
        else if (opt->Sub())
        {
            if (lvar->type->isIntegerTy() && lvar->type->isIntegerTy())
            {
                const auto value = builder.CreateSub(lvar->value, rvar->value);
                return new Variable(value);
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
            const auto type = llvm::Type::getInt32Ty(this->llvm_context);
            const auto value = llvm::ConstantInt::get(type, std::stoi(literal->getText()), true);

            return new Variable(value);
        }
        else if (const auto literal = context->IntegerLiteral())
        {
            auto constant = llvm::ConstantDataArray::getString(this->llvm_context, literal->getText(), true);
            auto global = new llvm::GlobalVariable(*this->module, constant->getType(), false, llvm::GlobalValue::PrivateLinkage, constant, ".str");
            global->setAlignment(1);

            std::vector<llvm::Value *> idxs = {
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->llvm_context), 0, false),
                llvm::ConstantInt::get(llvm::Type::getInt32Ty(this->llvm_context), 0, false),
            };

            const auto value = builder.CreateGEP(global, idxs);
            return new Variable(value);
        }

        return nullptr;
    }
};
} // namespace San
