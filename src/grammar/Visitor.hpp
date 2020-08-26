#pragma once

#include "runtime/SandParserBaseVisitor.h"

#include "ParserErrorListener.hpp"

#include <llvm/ADT/SmallVector.h>
#include <llvm/IR/InlineAsm.h>
#include <llvm/Transforms/Utils/Evaluator.h>

#include <Sand/Debugger.hpp>
#include <Sand/Environment.hpp>
#include <Sand/Helpers.hpp>

#include <Sand/Alias.hpp>
#include <Sand/AssemblyOperand.hpp>
#include <Sand/Attributes.hpp>
#include <Sand/Generic.hpp>
#include <Sand/NameArray.hpp>
#include <Sand/Namespace.hpp>
#include <Sand/Scope.hpp>
#include <Sand/ScopeStack.hpp>
#include <Sand/StatementStatus.hpp>
#include <Sand/Types/ClassType.hpp>
#include <Sand/Types/EnumType.hpp>
#include <Sand/Types/GenericAlias.hpp>
#include <Sand/Types/GenericClassType.hpp>
#include <Sand/Types/GenericFunctionType.hpp>
#include <Sand/Types/GenericUnionType.hpp>
#include <Sand/Types/UnionType.hpp>
#include <Sand/Types/VariadicType.hpp>
#include <Sand/Values/Function.hpp>
#include <Sand/Values/GlobalConstant.hpp>
#include <Sand/Values/GlobalVariable.hpp>
#include <Sand/Values/Variable.hpp>
#include <Sand/Values/VariadicValue.hpp>

#include <Sand/Exceptions/ExpressionHasNotClassTypeException.hpp>
#include <Sand/Exceptions/ImportException.hpp>
#include <Sand/Exceptions/IndexException.hpp>
#include <Sand/Exceptions/InvalidInputConstraintException.hpp>
#include <Sand/Exceptions/InvalidLeftValueException.hpp>
#include <Sand/Exceptions/InvalidRangeException.hpp>
#include <Sand/Exceptions/InvalidRightValueException.hpp>
#include <Sand/Exceptions/InvalidTypeException.hpp>
#include <Sand/Exceptions/InvalidValueException.hpp>
#include <Sand/Exceptions/MultipleInstancesException.hpp>
#include <Sand/Exceptions/NoFunctionMatchException.hpp>
#include <Sand/Exceptions/NoGenericMatchException.hpp>
#include <Sand/Exceptions/NotAClassException.hpp>
#include <Sand/Exceptions/NotAClassOrNamespaceException.hpp>
#include <Sand/Exceptions/NotAGenericException.hpp>
#include <Sand/Exceptions/NotAPointerException.hpp>
#include <Sand/Exceptions/NumberOutOfRangeException.hpp>
#include <Sand/Exceptions/OpaqueTypeNotAllowedException.hpp>
#include <Sand/Exceptions/PropertyNotFoundException.hpp>
#include <Sand/Exceptions/ReturnOutsideOfFunctionException.hpp>
#include <Sand/Exceptions/ReturnValueDoesNotMatchReturnTypeException.hpp>
#include <Sand/Exceptions/SyntaxException.hpp>
#include <Sand/Exceptions/TypesNotCompatibleException.hpp>
#include <Sand/Exceptions/UnimplementedException.hpp>
#include <Sand/Exceptions/UnknownNameException.hpp>

#include <Sand/filesystem.hpp>

#include <cstdint>
#include <limits>
#include <regex>
#include <tuple>

namespace Sand
{
class Visitor
{
public:
    Environment env;
    std::vector<std::string> include_paths;
    std::string builtins_path;

    ScopeStack scopes;
    std::stack<fs::path> files;
    std::vector<fs::path> imported;

    size_t generating_properties_stack = 0;

    Visitor(const std::string &target_os,
            const std::string &target_arch,
            const std::string &target_cpu,
            const std::string &target_features,
            const std::string &builtins_path_,
            const std::vector<std::string> &include_paths_ = {}) : env("output", target_os, target_arch, target_cpu, target_features),
                                                                   include_paths(include_paths_),
                                                                   builtins_path(builtins_path_),
                                                                   scopes(this->env)
    {
        auto std_directory = Environment::get_std_directory();

        if (this->builtins_path.empty())
        {
            this->builtins_path = (std_directory / "builtins").u8string();
        }

        this->include_paths.push_back(std_directory.u8string());
    }

    void load_builtins()
    {
        for (const auto &p : fs::recursive_directory_iterator(this->builtins_path, fs::directory_options::follow_directory_symlink | fs::directory_options::skip_permission_denied))
        {
            const auto &path = p.path();

            if (!fs::is_directory(path))
            {
                this->from_file(path.u8string());
            }
        }
    }

    void from_file(std::string path)
    {
        if (!this->files.empty())
        {
            if (Helpers::starts_with(path, "./") || Helpers::starts_with(path, "../"))
            {
                auto from = this->files.top();
                path = from.replace_filename(path).u8string();
            }
            else if (Helpers::starts_with(path, "/"))
            {
                // nothing to do here, this condition exists in case of future implementation
                // the compiler will optimize this anyway
            }
            else
            {
                for (const auto &include_path : include_paths)
                {
                    auto separator = (include_path[include_path.size() - 1] != '/' ? "/" : "");
                    auto fullpath = fs::absolute(include_path + separator + path + ".sn");

                    if (fs::exists(fullpath))
                    {
                        path = fullpath.u8string();
                        break;
                    }
                }
            }
        }

        auto fullpath = fs::absolute(path);

        if (!fs::exists(fullpath) && !Helpers::ends_with(fullpath.u8string(), ".sn"))
        {
            fullpath += ".sn";
        }

        if (!fs::exists(fullpath))
        {
            throw FileNotFoundException();
        }

        fullpath = fs::canonical(fullpath);

        if (std::find(imported.begin(), imported.end(), fullpath) != imported.end())
        {
            return;
        }

        imported.push_back(fullpath);

        std::ifstream stream;
        stream.open(fullpath);

        this->files.push(fullpath);

        auto input = new ANTLRInputStream(stream);
        auto lexer = new SandLexer(input);
        auto tokens = new CommonTokenStream(lexer);
        auto parser = new SandParser(tokens);
        // parser->removeErrorListeners();

        // auto error_listener = new ParserErrorListener(this->env.debugger);
        // parser->addErrorListener(error_listener);

        SandParser::InstructionsContext *context = parser->instructions();

        this->visitInstructions(context);

        files.pop();
    }

    void visitInstructions(SandParser::InstructionsContext *context)
    {
        this->visitStatements(context->statement());
    }

    StatementStatus visitStatements(const std::vector<SandParser::StatementContext *> &statements)
    {
        for (const auto &statement : statements)
        {
            auto value = this->visitStatement(statement);

            if (statement->returnStatement())
            {
                return StatementStatus::Returned;
            }
            else if (statement->breakStatement())
            {
                return StatementStatus::Breaked;
            }
            else if (auto block = dynamic_cast<Block *>(value))
            {
                if (block->status == StatementStatus::Returned || block->status == StatementStatus::Breaked)
                {
                    return block->status;
                }
            }
        }

        return StatementStatus::None;
    }

    Name *visitStatement(SandParser::StatementContext *context)
    {
        if (auto function = context->function())
        {
            return this->visitFunction(function);
        }
        else if (auto namespace_statement = context->namespaceStatement())
        {
            return this->visitNamespaceStatement(namespace_statement);
        }
        else if (auto expression = context->expression())
        {
            return this->visitExpression(expression);
        }
        else if (auto body = context->body())
        {
            return this->visitBody(body);
        }
        else if (auto variable_declaration = context->variableDeclaration())
        {
            return this->visitVariableDeclaration(variable_declaration);
        }
        else if (auto return_statement = context->returnStatement())
        {
            this->visitReturnStatement(return_statement);
        }
        else if (auto if_statement = context->ifStatement())
        {
            this->visitIfStatement(if_statement);
        }
        else if (auto while_statement = context->whileStatement())
        {
            this->visitWhileStatement(while_statement);
        }
        else if (auto for_statement = context->forStatement())
        {
            this->visitForStatement(for_statement);
        }
        else if (auto special_class_statement = context->specialClassStatement())
        {
            return this->visitSpecialClassStatement(special_class_statement);
        }
        else if (auto class_statement = context->classStatement())
        {
            return this->visitClassStatement(class_statement);
        }
        else if (auto union_statement = context->unionStatement())
        {
            return this->visitUnionStatement(union_statement);
        }
        else if (auto enum_statement = context->enumStatement())
        {
            return this->visitEnumStatement(enum_statement);
        }
        else if (auto import_statement = context->importStatement())
        {
            this->visitImportStatement(import_statement);
        }
        else if (auto assembly_statement = context->assemblyStatement())
        {
            this->visitAssemblyStatement(assembly_statement);
        }
        else if (auto alias_statement = context->alias())
        {
            return this->visitAlias(alias_statement);
        }

        return nullptr;
    }

    /**
     * Return value can be a pointer of Function or GenericFunctionType
     */
    Name *visitFunction(SandParser::FunctionContext *context, const bool add_to_scope = true, const bool generate_body = true, Types::ClassType *this_type = nullptr)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        Position position;

        if (scope->in_function())
        {
            position = Position::save(scope->builder());
        }

        auto type = this->visitFunctionDeclaration(context->functionDeclaration(), this_type);

        if (auto function_type = dynamic_cast<Types::FunctionType *>(type))
        {
            auto is_extern = !!context->Extern() || function_type->name == "main";
            auto linkage = is_extern ? llvm::GlobalValue::LinkageTypes::ExternalLinkage : llvm::GlobalValue::LinkageTypes::LinkOnceAnyLinkage;

            auto function = new Values::Function(scope->module(), function_type, linkage);

            if (attributes.is("noinline"))
            {
                function->get_ref()->addAttribute(llvm::AttributeList::FunctionIndex, llvm::Attribute::NoInline);
            }

            if (add_to_scope)
            {
                scope->add_name(function->name, function);
            }

            if (generate_body)
            {
                this->generateFunctionBody(context, function);
            }

            position.load(scope->builder());

            return function;
        }
        else if (auto generic_type = dynamic_cast<Types::GenericFunctionType *>(type))
        {
            generic_type->context = context;
        }

        if (add_to_scope)
        {
            scope->add_name(type->name, type);
        }

        position.load(scope->builder());

        return type;
    }

    Values::Function *visitFunction(Types::GenericFunctionType *generic)
    {
        auto scope = this->scopes.top();

        Position position;

        if (scope->in_function())
        {
            position = Position::save(scope->builder());
        }

        auto context = generic->context;

        auto type = this->visitFunctionDeclaration(context->functionDeclaration(), generic->parent, true);

        if (auto function_type = dynamic_cast<Types::FunctionType *>(type))
        {
            auto function = new Values::Function(scope->module(), function_type);
            generic->children.push_back(function);

            this->generateFunctionBody(context, function);

            position.load(scope->builder());

            return function;
        }

        std::cerr << "The generated function is a generic but that doesn't make any sense, seems like it lacks implementation?" << std::endl;
        return nullptr;
    }

    Values::Function *generateFunctionBody(SandParser::FunctionContext *context, Values::Function *base)
    {
        this->scopes.create(base);

        if (auto body = context->body())
        {
            this->visitBody(body, base);
        }

        this->scopes.pop();

        return base;
    }

    /**
     * Return value can be a pointer of FunctionType or GenericFunctionType
     */
    Name *visitFunctionDeclaration(SandParser::FunctionDeclarationContext *context, Types::ClassType *parent, const bool &bypass_generics = false)
    {
        auto scope = this->scopes.top();

        std::string name = "";

        Type *cast_type = nullptr;

        if (auto operator_name = context->overloadableOperator())
        {
            if (auto shift_operator_context = operator_name->shiftOperator())
            {
                this->checkShiftOperator(shift_operator_context);
            }
            else if (auto se_context = operator_name->shiftEqualOperator())
            {
                this->checkShiftEqualOperator(se_context);
            }
            else if (auto gte_context = operator_name->greaterThanOrEqualToOperator())
            {
                this->ensureNoSpace(gte_context);
            }

            name = operator_name->getText();
        }
        else if (auto type_context = context->castFunctionType())
        {
            cast_type = this->visitCastFunctionType(type_context);

            name = "@cast";
        }
        else if (auto variable_name = context->VariableName())
        {
            name = variable_name->getText();
        }
        else if (context->Destructor())
        {
            name = "@destructor";
        }

        if (!bypass_generics)
        {
            if (auto generics_context = context->classGenerics())
            {
                auto generics = this->visitClassGenerics(generics_context);
                return new Types::GenericFunctionType(Scope::create(scope), name, generics, parent);
            }
        }

        auto args = this->visitFunctionArguments(context->functionArguments());
        auto is_variadic = (context->functionVariadicArgument() != nullptr);

        if (parent != nullptr)
        {
            auto arg = Types::FunctionArgument("this", Type::pointer(parent));
            args.insert(args.begin(), arg);
        }

        Type *return_type = nullptr;

        if (cast_type)
        {
            return_type = cast_type;
        }
        else if (name == "main")
        {
            return_type = Type::i32(scope->context());
        }
        else if (auto type_context = context->type())
        {
            return_type = this->visitType(type_context);
        }
        else
        {
            return_type = Type::voidt(scope->context());
        }

        return Types::FunctionType::create(scope->builder(), scope->module(), name, return_type, args, is_variadic, parent != nullptr);
    }

    Type *visitCastFunctionType(SandParser::CastFunctionTypeContext *context)
    {
        return this->visitType(context->type());
    }

    std::vector<Types::FunctionArgument> visitFunctionArguments(SandParser::FunctionArgumentsContext *context)
    {
        std::vector<Types::FunctionArgument> arguments;

        if (context == nullptr)
            return arguments;

        for (auto argument_context : context->functionArgument())
        {
            auto argument = this->visitFunctionArgument(argument_context);
            arguments.push_back(argument);
        }

        return arguments;
    }

    Types::FunctionArgument visitFunctionArgument(SandParser::FunctionArgumentContext *context)
    {
        auto scope = this->scopes.top();

        std::string name = "";

        if (auto variable_name = context->VariableName())
        {
            name = variable_name->getText();
        }

        auto type = this->visitType(context->type());

        // implement default value

        return Types::FunctionArgument(name, type);
    }

    Values::Function *generateGenericFunction(Types::GenericFunctionType *generic, const std::vector<Name *> &generics)
    {
        Position position;

        if (this->scopes.top()->in_function())
        {
            position = Position::save(this->scopes.top()->builder());
        }

        auto scope = Scope::create(generic->scope);
        this->scopes.push(scope);

        for (size_t i = 0; i < generic->generics.size(); i++)
        {
            auto &name = generic->generics[i]->name;
            scope->add_name(name, generics[i]);
        }

        auto function = this->visitFunction(generic);

        this->scopes.pop();

        position.load(this->scopes.top()->builder());

        return function;
    }

    Namespace *visitNamespaceStatement(SandParser::NamespaceStatementContext *context)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        auto name = context->VariableName()->getText();

        auto names = scope->get_names(name);

        if (!names->empty())
        {
            if (auto nsp = dynamic_cast<Namespace *>(names->last()))
            {
                this->scopes.push(nsp->scope);

                this->visitStatements(context->statement());

                this->scopes.pop();

                return nsp;
            }
        }

        auto nsp_scope = Scope::create(scope);
        auto nsp = new Namespace(name, nsp_scope);

        scope->add_name(name, nsp);

        this->scopes.push(nsp_scope);

        this->visitStatements(context->statement());

        this->scopes.pop();

        return nsp;
    }

    Block *visitBody(SandParser::BodyContext *context, Values::Function *function = nullptr)
    {
        auto scope = this->scopes.create();

        auto block = Block::create(scope->builder(), "entry");

        if (function == nullptr)
        {
            block->br(scope->builder());
            scope->get_function()->insert(block);
        }
        else
        {
            function->insert(block);
        }

        block->insert_point(scope->builder());

        if (function != nullptr)
        {
            function->entry_block = block;
            function->return_block = Block::create(scope->builder(), "return_label");

            auto function_type = function->get_type();
            auto return_type = function_type->return_type;

            auto function_ref = function->get_ref();

            if (!return_type->is_void())
            {
                if (function_type->is_sret)
                {
                    llvm::Argument *return_arg = function_ref->arg_begin();
                    function->return_value = new Values::Variable("retval", return_type, return_arg);
                }
                else
                {
                    auto alloca = scope->builder().CreateAlloca(return_type->get_ref(), nullptr, "retval");
                    function->return_value = new Values::Variable("retval", return_type, alloca);
                }
            }

            auto it = function_ref->arg_begin();

            if (function_type->is_sret)
            {
                it->setName("return_value");
                it++;
            }

            auto fa = function_type->args.begin();

            while (it != function_ref->arg_end())
            {
                it->setName(fa->name);

                llvm::AllocaInst *addr = this->env.builder.CreateAlloca(it->getType(), nullptr, fa->name + ".addr");
                this->env.builder.CreateStore(llvm::cast<llvm::Value>(it), addr, false);

                scope->add_name(fa->name, new Values::Variable(fa->name, fa->type, llvm::cast<llvm::Value>(addr)));

                it++;
                fa++;
            }

            if (!function_type->is_sret && function->return_value != nullptr && !dynamic_cast<Types::ClassType *>(function_type->return_type))
            {
                auto allocated_type = llvm::cast<llvm::AllocaInst>(function->return_value->get_ref())->getAllocatedType();
                auto type = new Type("", allocated_type);

                scope->builder().CreateStore(type->default_value(), function->return_value->get_ref());
            }
        }

        block->status = this->visitStatements(context->statement());

        if (block->status == StatementStatus::Breaked && scope->in_loop())
        {
            scope->get_loop()->end_label->br(scope->builder());
        }

        if (block->status != StatementStatus::Returned)
        {
            this->scopes.call_destructors(scope);
        }

        if (function != nullptr)
        {
            if (block->status != StatementStatus::Returned)
            {
                function->return_block->br(scope->builder());
            }

            function->insert(function->return_block);
            function->return_block->insert_point(scope->builder());

            auto function_type = function->get_type();
            auto return_type = function_type->return_type;

            if (function_type->is_sret || return_type->is_void())
            {
                scope->builder().CreateRetVoid();
            }
            else
            {
                const auto return_value = scope->builder().CreateLoad(function->return_value->get_ref());
                scope->builder().CreateRet(return_value);
            }
        }

        this->scopes.pop_no_destruct();

        return block;
    }

    Values::Variable *visitVariableDeclaration(SandParser::VariableDeclarationContext *context)
    {
        auto scope = this->scopes.top();

        auto name = context->VariableName()->getText();

        Type *type = nullptr;
        Value *rvalue = nullptr;

        if (auto type_context = context->type())
        {
            type = this->visitType(type_context);
        }

        if (auto expression = context->expression())
        {
            rvalue = this->valueFromExpression(expression);

            if (type == nullptr)
            {
                type = Type::array_to_pointer(rvalue->type);

                if (type->is_function() && !type->is_pointer())
                {
                    type = Type::pointer(type);
                }
            }
        }

        if (scope->in_function())
        {
            if (auto variable = dynamic_cast<Values::Variable *>(rvalue))
            {
                if (variable->can_be_taken && variable->type->equals(type))
                {
                    variable->get_ref()->setName(name);
                    variable->is_temporary = false;

                    scope->add_name(name, variable);

                    return variable;
                }
            }

            auto var = Values::Variable::create(name, type, scope->builder());

            // if (rexpr->can_be_taken)
            // {
            //     rexpr->copy(var, scope->builder, this->env.module);
            // }
            // else
            if (rvalue != nullptr)
            {
                var->store(rvalue, scope->builder(), scope->module(), true);
            }

            scope->add_name(name, var);

            return var;
        }
        else
        {
            if (rvalue == nullptr)
            {
                rvalue = Values::Constant::null_value(type);
            }

            if (auto constant = dynamic_cast<Values::Constant *>(rvalue))
            {
                auto casted_constant = constant->cast(type, scope->builder(), scope->module());
                auto global = Values::GlobalVariable::create(name, scope->module(), type, casted_constant);
                scope->add_name(name, global);

                return global;
            }
            else
            {
                throw InvalidRightValueException(this->files.top(), context->expression()->getStart());
            }
        }

        return nullptr;
    }

    void visitReturnStatement(SandParser::ReturnStatementContext *context)
    {
        auto scope = this->scopes.top();
        auto function = scope->get_function();

        if (!function)
        {
            throw ReturnOutsideOfFunctionException(this->files.top(), context->getStart());
        }

        if (auto expression_context = context->expression())
        {
            auto rvalue = this->valueFromExpression(expression_context);
            auto function_return_type = function->get_type()->return_type;

            if (Type::compatibility((rvalue->is_alloca && !rvalue->is_temporary) ? Type::reference(rvalue->type) : rvalue->type, function_return_type) == Type::NOT_COMPATIBLE)
            {
                throw ReturnValueDoesNotMatchReturnTypeException(this->files.top(), expression_context->getStart(), rvalue->type, function_return_type);
            }

            if (!function_return_type->is_void())
            {
                function->return_value->store(rvalue, scope->builder(), scope->module(), true);
            }
        }

        this->scopes.call_destructors(scope);
        function->return_block->br(scope->builder());
    }

    void visitIfStatement(SandParser::IfStatementContext *context)
    {
        auto scope = this->scopes.create();

        auto if_then = Block::create(scope->builder(), "if.then");
        auto if_end = Block::create(scope->builder(), "if.end");
        auto if_next = if_end;

        if (context->elseStatement())
        {
            if_next = Block::create(scope->builder(), "if.else");
        }

        if (auto expression = context->expression())
        {
            Value *value = this->valueFromExpression(expression);

            if (!value->type->is_boolean())
            {
                value = Value::not_equal(scope->builder(), scope->module(), value, Values::Constant::null_value(Type::behind_reference(value->type)));
            }

            if_then->conditional_br(scope->builder(), value, if_next);
        }
        else if (auto variable_declaration = context->variableDeclaration())
        {
            Value *value = this->visitVariableDeclaration(variable_declaration);

            if (!value->type->is_boolean())
            {
                value = Value::not_equal(scope->builder(), scope->module(), value, Values::Constant::null_value(Type::behind_reference(value->type)));
            }

            if_then->conditional_br(scope->builder(), value, if_next);
        }

        scope->get_function()->insert(if_then);
        if_then->insert_point(scope->builder());

        if_then->status = this->visitStatements({context->statement()});

        this->scopes.pop();

        if (if_then->status == StatementStatus::None)
        {
            if_end->br(scope->builder());
        }

        scope = this->scopes.top();

        scope->get_function()->insert(if_next);
        if_next->insert_point(scope->builder());

        if (auto else_statement = context->elseStatement())
        {
            if_next->status = this->visitElseStatement(else_statement);

            if (if_next->status == StatementStatus::None)
            {
                if_end->br(scope->builder());
            }

            scope->get_function()->insert(if_end);
            if_end->insert_point(scope->builder());
        }
    }

    StatementStatus visitElseStatement(SandParser::ElseStatementContext *context)
    {
        return this->visitStatements({context->statement()});
    }

    void visitWhileStatement(SandParser::WhileStatementContext *context)
    {
        auto scope = this->scopes.create();

        auto while_cond = Block::create(scope->builder(), "while.cond");
        auto while_body = Block::create(scope->builder(), "while.body");
        auto while_end = Block::create(scope->builder(), "while.end");

        auto loop = new Loop(while_end);
        scope->set_loop(loop);

        while_cond->br(scope->builder());

        scope->get_function()->insert(while_cond);
        while_cond->insert_point(scope->builder());

        auto value = this->valueFromExpression(context->expression());

        if (!value->type->is_boolean())
        {
            value = Value::not_equal(scope->builder(), scope->module(), value, Values::Constant::null_value(Type::behind_reference(value->type)));
        }

        while_body->conditional_br(scope->builder(), value, while_end);

        scope->get_function()->insert(while_body);
        while_body->insert_point(scope->builder());

        while_body->status = this->visitStatements({context->statement()});

        if (while_body->status == StatementStatus::Breaked)
        {
            while_end->br(scope->builder());
        }
        else if (while_body->status != StatementStatus::Returned)
        {
            while_cond->br(scope->builder());
        }

        scope->get_function()->insert(while_end);
        while_end->insert_point(scope->builder());

        this->scopes.pop();
    }

    void visitForStatement(SandParser::ForStatementContext *context)
    {
        auto scope = this->scopes.create();

        auto for_cond = Block::create(scope->builder(), "for.cond");
        auto for_body = Block::create(scope->builder(), "for.body");
        auto for_end = Block::create(scope->builder(), "for.end");

        auto loop = new Loop(for_end);
        scope->set_loop(loop);

        auto value = this->valueFromExpression(context->expression());
        auto type = dynamic_cast<Types::ClassType *>(value->type);

        if (type)
        {
            auto begin_functions = type->get_names("begin", value, scope->builder(), scope->module());
            auto end_functions = type->get_names("end", value, scope->builder(), scope->module());

            if (begin_functions->size() > 0 && end_functions->size() > 0)
            {
                auto begin = dynamic_cast<Values::Function *>(begin_functions->last());
                auto end = dynamic_cast<Values::Function *>(end_functions->last());

                begin->calling_variable = value;
                end->calling_variable = value;

                if (begin != nullptr && end != nullptr)
                {
                    auto begin_value = begin->call(scope->builder(), scope->module())->load_alloca_and_reference(scope->builder());

                    auto iterator_name = context->VariableName()->getText();
                    auto iterator = Values::Variable::create(iterator_name, begin_value->type, scope->builder());
                    iterator->store(begin_value, scope->builder(), scope->module(), true);
                    scope->add_name(iterator_name, iterator);

                    for_cond->br(scope->builder());

                    scope->get_function()->insert(for_cond);
                    for_cond->insert_point(scope->builder());

                    auto end_value = end->call(scope->builder(), scope->module());
                    auto condition = Value::not_equal(scope->builder(), scope->module(), iterator, end_value);

                    for_body->conditional_br(scope->builder(), condition, for_end);

                    scope->get_function()->insert(for_body);
                    for_body->insert_point(scope->builder());

                    for_body->status = this->visitStatements({context->statement()});

                    if (for_body->status == StatementStatus::Breaked)
                    {
                        for_end->br(scope->builder());
                    }
                    else if (for_body->status != StatementStatus::Returned)
                    {
                        // Temporary before operator overloads
                        auto type = Type::i32(scope->context());
                        auto value = llvm::ConstantInt::get(type->get_ref(), 1, true);
                        auto constant = new Values::Constant("literal_i32", type, value);

                        iterator->add(scope->module(), scope->builder(), constant);

                        for_cond->br(scope->builder());
                    }

                    scope->get_function()->insert(for_end);
                    for_end->insert_point(scope->builder());

                    this->scopes.pop();

                    return;
                }
            }
        }

        this->scopes.pop();

        throw InvalidRangeException(this->files.top(), context->expression()->getStart());
    }

    void visitImportStatement(SandParser::ImportStatementContext *context)
    {
        auto str = this->stringLiteralToString(context->StringLiteral()->getText());

        try
        {
            this->from_file(str);
        }
        catch (FileNotFoundException e)
        {
            throw ImportException(this->files.top(), context->StringLiteral()->getSymbol());
        }
    }

    Types::ClassType *visitSpecialClassStatement(SandParser::SpecialClassStatementContext *context)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        auto class_scope = Scope::create(scope);

        auto scoped_name_context = context->scopedNameNoGeneric();
        auto names = this->visitScopedNameNoGeneric(scoped_name_context);
        auto classes = names->get_generic_classes();

        if (!classes->empty())
        {
            // Temporary take the first generic
            if (auto base = dynamic_cast<Types::GenericClassType *>(classes->last()))
            {
                Position position;

                if (this->scopes.top()->in_function())
                {
                    position = Position::save(this->scopes.top()->builder());
                }

                this->scopes.push(class_scope);

                class_scope->add_name("base", base);

                auto generics = this->visitClassTypeNameGenerics(context->classTypeNameGenerics());

                auto type = Types::ClassType::create(class_scope, base->name, generics);

                if (auto extends = context->classExtends())
                {
                    type->parents = this->visitClassExtends(extends);
                }

                base->children.push_back(type);

                this->visitClassBody(context->classBody(), type->parents, type, attributes.is("packed"));

                this->scopes.pop();

                position.load(this->scopes.top()->builder());

                return type;
            }
        }

        throw NotAGenericException(this->files.top(), scoped_name_context->getStart());
    }

    Name *visitUnionStatement(SandParser::UnionStatementContext *context)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        auto name = context->VariableName()->getText();
        auto union_scope = Scope::create(scope);

        if (auto generics_context = context->classGenerics())
        {
            auto generics = this->visitClassGenerics(generics_context);
            auto type = new Types::GenericUnionType(union_scope, name, generics, context, attributes);

            scope->add_name(name, type);

            return type;
        }
        else
        {
            auto type = Types::UnionType::create(union_scope, name);
            scope->add_name(name, type);

            this->scopes.push(union_scope);

            this->visitUnionBody(context->unionBody(), type, attributes.is("packed"));

            this->scopes.pop();

            return type;
        }
    }

    Types::UnionType *visitUnionBody(SandParser::UnionBodyContext *context, Types::UnionType *type, const bool &is_packed = false)
    {
        auto scope = this->scopes.top();
        auto generate_methods = generating_properties_stack == 0;

        std::vector<Types::UnionProperty *> properties;

        this->generating_properties_stack++;
        for (auto &union_property : context->unionProperty())
        {
            auto property = this->visitUnionProperty(union_property);
            properties.push_back(property);
        }
        this->generating_properties_stack--;

        type->set_properties(properties, scope->builder(), scope->module(), is_packed);

        if (generate_methods)
        {
            this->generatePendingMethods(type);
        }

        return type;
    }

    Types::UnionProperty *visitUnionProperty(SandParser::UnionPropertyContext *context)
    {
        auto name = context->VariableName()->getText();
        auto type = this->visitType(context->type());

        return new Types::UnionProperty(name, type);
    }

    Types::EnumType *visitEnumStatement(SandParser::EnumStatementContext *context)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        auto name = context->VariableName()->getText();
        auto enum_scope = Scope::create(scope);

        auto type = new Types::EnumType(name, enum_scope, Type::llvm_i64(scope->context()));
        scope->add_name(name, type);

        this->scopes.push(enum_scope);

        this->visitEnumBody(context->enumBody(), type);

        this->scopes.pop();

        return type;
    }

    Types::EnumType *visitEnumBody(SandParser::EnumBodyContext *context, Types::EnumType *type)
    {
        auto scope = this->scopes.top();
        auto &builder = scope->builder();

        for (auto &enum_property : context->enumProperty())
        {
            auto property = this->visitEnumProperty(enum_property, type);

            if (property.value == nullptr)
            {
                if (!type->values.empty())
                {
                    auto pair = type->values.back();
                    auto result = llvm::ConstantExpr::getAdd(pair.value->get_ref(), llvm::ConstantInt::get(type->get_ref(), 1));
                    property.value = new Values::Constant(property.name, type, result);
                }
                else
                {
                    property.value = Values::Constant::null_value(type);
                }
            }

            type->add_value(property);
            type->static_scope->add_name(property.name, property.value);
        }

        return type;
    }

    Types::EnumValue visitEnumProperty(SandParser::EnumPropertyContext *context, Types::EnumType *type)
    {
        auto scope = this->scopes.top();
        auto name = context->VariableName()->getText();

        if (auto expression = context->expression())
        {
            auto value = this->valueFromExpression(expression);

            if (auto constant = dynamic_cast<Values::Constant *>(value))
            {
                return Types::EnumValue(name, constant->cast(type, scope->builder(), scope->module()));
            }

            throw InvalidRightValueException(this->files.top(), expression->getStart(), "Enum's value should be a constant");
        }

        return Types::EnumValue(name, nullptr);
    }

    Name *visitClassStatement(SandParser::ClassStatementContext *context)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        auto class_scope = Scope::create(scope);

        auto name = context->VariableName()->getText();

        if (auto generics_context = context->classGenerics())
        {
            auto generics = this->visitClassGenerics(generics_context);
            auto type = new Types::GenericClassType(class_scope, name, generics, context, attributes);

            scope->add_name(name, type);

            this->scopes.create();

            return type;
        }
        else
        {
            auto type = Types::ClassType::create(class_scope, name);
            scope->add_name(name, type);

            if (auto extends = context->classExtends())
            {
                type->parents = this->visitClassExtends(extends);
            }

            this->scopes.push(class_scope);

            this->visitClassBody(context->classBody(), type->parents, type, attributes.is("packed"));

            this->scopes.pop();

            return type;
        }
    }

    Types::ClassType *generateGenericClassType(Types::GenericClassType *generic, const std::vector<Name *> &generics)
    {
        Position position;

        if (this->scopes.top()->in_function())
        {
            position = Position::save(this->scopes.top()->builder());
        }

        auto scope = Scope::create(generic->scope);
        this->scopes.push(scope);

        auto type = Types::ClassType::create(scope, generic->name, generics);
        generic->children.push_back(type);

        for (size_t i = 0; i < generic->generics.size(); i++)
        {
            auto &name = generic->generics[i]->name;
            scope->add_name(name, generics[i]);
        }

        if (auto extends = generic->context->classExtends())
        {
            type->parents = this->visitClassExtends(extends);
        }

        this->visitClassBody(generic->context->classBody(), type->parents, type, generic->attributes.is("packed"));

        this->scopes.pop();

        position.load(this->scopes.top()->builder());

        return type;
    }

    Types::UnionType *generateGenericUnionType(Types::GenericUnionType *generic, const std::vector<Name *> &generics)
    {
        Position position;

        if (this->scopes.top()->in_function())
        {
            position = Position::save(this->scopes.top()->builder());
        }

        auto scope = Scope::create(generic->scope);
        this->scopes.push(scope);

        auto type = Types::UnionType::create(scope, generic->name, generics);
        generic->children.push_back(type);

        for (size_t i = 0; i < generic->generics.size(); i++)
        {
            auto &name = generic->generics[i]->name;
            scope->add_name(name, generics[i]);
        }

        this->visitUnionBody(generic->context->unionBody(), type, generic->attributes.is("packed"));

        this->scopes.pop();

        position.load(this->scopes.top()->builder());

        return type;
    }

    std::vector<Generic *> visitClassGenerics(SandParser::ClassGenericsContext *context)
    {
        std::vector<Generic *> generics;

        for (const auto &generic_context : context->classGeneric())
        {
            auto generic = this->visitClassGeneric(generic_context);
            generics.push_back(generic);
        }

        if (auto variadic_generic_context = context->classVariadicGeneric())
        {
            auto generic = this->visitVariadicClassGeneric(variadic_generic_context);
            generics.push_back(generic);
        }

        return generics;
    }

    Generic *visitClassGeneric(SandParser::ClassGenericContext *context)
    {
        if (auto generic_type_context = context->classGenericType())
        {
            return this->visitClassGenericType(generic_type_context);
        }
        else if (auto generic_value_context = context->classGenericValue())
        {
            return this->visitClassGenericValue(generic_value_context);
        }

        return nullptr;
    }

    Generic *visitClassGenericType(SandParser::ClassGenericTypeContext *context)
    {
        auto name = context->VariableName()->getText();
        auto default_value = context->type();

        return new Generic(name, this->scopes.top(), default_value);
    }

    Generic *visitClassGenericValue(SandParser::ClassGenericValueContext *context)
    {
        auto name = context->VariableName()->getText();
        Type *type = this->visitType(context->type());

        auto default_value = context->expression();

        return new Generic(name, this->scopes.top(), type, default_value);
    }

    VariadicGeneric *visitVariadicClassGeneric(SandParser::ClassVariadicGenericContext *context)
    {
        if (auto variadic_generic_type_context = context->classVariadicGenericType())
        {
            return this->visitClassVariadicGenericType(variadic_generic_type_context);
        }
        else if (auto variadic_generic_value_context = context->classVariadicGenericValue())
        {
            return this->visitClassVariadicGenericValue(variadic_generic_value_context);
        }

        return nullptr;
    }

    VariadicGeneric *visitClassVariadicGenericType(SandParser::ClassVariadicGenericTypeContext *context)
    {
        auto name = context->VariableName()->getText();
        auto default_values = context->type();

        return new VariadicGeneric(name, this->scopes.top(), default_values);
    }

    VariadicGeneric *visitClassVariadicGenericValue(SandParser::ClassVariadicGenericValueContext *context)
    {
        auto name = context->VariableName()->getText();
        Type *type = this->visitType(context->type());

        auto default_values = context->expression();

        return new VariadicGeneric(name, this->scopes.top(), type, default_values);
    }

    std::vector<Types::ClassType *> visitClassExtends(SandParser::ClassExtendsContext *context)
    {
        auto scope = this->scopes.top();
        std::vector<Types::ClassType *> types;

        for (auto &type_name : context->classTypeName())
        {
            auto type = this->visitClassTypeName(type_name);
            types.push_back(type);
        }

        return types;
    }

    Types::ClassType *visitClassBody(SandParser::ClassBodyContext *context, std::vector<Types::ClassType *> parents, Types::ClassType *type, const bool &is_packed = false)
    {
        auto scope = this->scopes.top();

        auto generate_methods = generating_properties_stack == 0;
        auto struct_type = type->get_ref();

        std::vector<llvm::Type *> properties_types;

        for (auto &parent : parents)
        {
            properties_types.push_back(parent->ref);
        }

        this->generating_properties_stack++;
        for (auto &class_body_element_context : context->classBodyElement())
        {
            this->visitClassBodyElement(class_body_element_context, type, properties_types);

            if (auto class_method_context = class_body_element_context->classMethod())
            {
                type->pending_methods.push_back(class_method_context);
            }
        }

        struct_type->setBody(properties_types, is_packed);
        this->generating_properties_stack--;

        if (generate_methods)
        {
            this->generatePendingMethods(type);
        }

        return type;
    }

    void visitClassBodyElement(SandParser::ClassBodyElementContext *context, Types::ClassType *type, std::vector<llvm::Type *> &properties_types)
    {
        if (auto class_property = context->classProperty())
        {
            auto property = this->visitClassProperty(class_property);

            if (!class_property->Static())
            {
                type->properties.push_back(property);
                properties_types.push_back(property->type->get_ref());
            }
            else
            {
                auto variable = Values::GlobalVariable::create(property->name, this->env.module, property->type, property->default_value);
                type->static_scope->add_name(property->name, variable);
            }
        }
        else if (auto class_statement = context->classStatement())
        {
            auto class_type = this->visitClassStatement(class_statement);
            type->static_scope->add_name(class_type->name, class_type);
        }
        else if (auto union_statement = context->unionStatement())
        {
            auto union_type = this->visitUnionStatement(union_statement);
            type->static_scope->add_name(union_type->name, union_type);
        }
        else if (auto alias_context = context->alias())
        {
            auto alias = this->visitAlias(alias_context);
            type->static_scope->add_name(alias->name, alias);
        }
    }

    void generatePendingMethods(Types::ClassType *type)
    {
        // Extract and clear pending_methods to prevent recursive generation
        auto pending_methods = type->pending_methods;
        type->pending_methods.clear();

        type->generated = true;

        std::unordered_map<Values::Function *, size_t> methods;

        for (auto &generic : type->generics)
        {
            if (auto generic_type = dynamic_cast<Type *>(generic))
            {
                if (auto class_type = dynamic_cast<Types::ClassType *>(Type::get_origin(Type::get_base(generic_type))))
                {
                    if (!class_type->pending_methods.empty())
                    {
                        this->scopes.push(class_type->static_scope);
                        this->generatePendingMethods(class_type);
                        this->scopes.pop();
                    }
                }
            }
        }

        for (size_t i = 0; i < pending_methods.size(); i++)
        {
            auto &class_method = pending_methods[i];
            auto is_static = !!class_method->Static();

            auto method = this->generateClassMethodDeclaration(class_method, type, is_static);

            if (auto function = dynamic_cast<Values::Function *>(method))
            {
                methods.insert(std::make_pair(function, i));
            }

            if (is_static)
            {
                type->static_scope->add_name(method->name, method);
            }
            else
            {
                type->scope->add_name(method->name, method);
            }
        }

        for (auto property : type->properties)
        {
            this->generatePropertyPendingMethods(property->type);
        }

        for (auto &[method, i] : methods)
        {
            // if (!method->is_base)
            {
                auto class_method = pending_methods[i];

                this->generateClassMethodBody(class_method, method);
            }
        }

        for (auto &[_, name] : type->static_scope->names)
        {
            if (auto subtype = dynamic_cast<Type *>(name))
            {
                this->generatePropertyPendingMethods(subtype);
            }
        }
    }

    void generatePendingMethods(Types::UnionType *type)
    {
        type->generated = true;

        for (auto property : type->properties)
        {
            this->generatePropertyPendingMethods(property->type);
        }
    }

    void generatePropertyPendingMethods(Type *type)
    {
        if (auto class_type = dynamic_cast<Types::ClassType *>(Type::get_origin(Type::get_base(type))))
        {
            if (!class_type->generated)
            {
                this->scopes.push(class_type->static_scope);
                this->generatePendingMethods(class_type);
                this->scopes.pop();
            }
        }
        else if (auto union_type = dynamic_cast<Types::UnionType *>(Type::get_origin(Type::get_base(type))))
        {
            if (!union_type->generated)
            {
                this->scopes.push(union_type->static_scope);
                this->generatePendingMethods(union_type);
                this->scopes.pop();
            }
        }
    }

    Types::ClassProperty *visitClassProperty(SandParser::ClassPropertyContext *context)
    {
        auto name = context->VariableName()->getText();
        auto type = this->visitType(context->type());

        Values::Constant *default_value = nullptr;

        if (auto expression_context = context->expression())
        {
            auto value = this->valueFromExpression(context->expression());

            if (auto constant = dynamic_cast<Values::Constant *>(value))
            {
                default_value = constant;
            }
            else
            {
                throw InvalidRightValueException(this->files.top(), expression_context->getStart());
            }
        }

        return new Types::ClassProperty(name, type, default_value);
    }

    /**
     * Return value can be a pointer of Function or GenericFunctionType
     */
    Name *generateClassMethodDeclaration(SandParser::ClassMethodContext *context, Types::ClassType *parent, const bool &is_static)
    {
        if (is_static)
        {
            return this->visitFunction(context->function(), false, false);
        }
        else
        {
            return this->visitFunction(context->function(), false, false, parent);
        }
    }

    Values::Function *generateClassMethodBody(SandParser::ClassMethodContext *context, Values::Function *base)
    {
        return this->generateFunctionBody(context->function(), base);
    }

    Name *visitExpression(SandParser::ExpressionContext *context)
    {
        if (const auto in_paren_expression_context = dynamic_cast<SandParser::InParenExpressionContext *>(context))
        {
            return this->visitInParenExpression(in_paren_expression_context);
        }
        else if (const auto sizeof_expression_context = dynamic_cast<SandParser::SizeofExpressionContext *>(context))
        {
            return this->visitSizeofExpression(sizeof_expression_context);
        }
        else if (const auto class_instantiation_expression_context = dynamic_cast<SandParser::ClassInstantiationExpressionContext *>(context))
        {
            return this->visitClassInstantiationExpression(class_instantiation_expression_context);
        }
        else if (const auto function_call_expression_context = dynamic_cast<SandParser::FunctionCallExpressionContext *>(context))
        {
            return this->visitFunctionCallExpression(function_call_expression_context);
        }
        else if (const auto binary_operation_context = dynamic_cast<SandParser::BinaryOperationContext *>(context))
        {
            return this->visitBinaryOperation(binary_operation_context);
        }
        else if (const auto binary_multiplicative_operation_context = dynamic_cast<SandParser::BinaryMultiplicativeOperationContext *>(context))
        {
            return this->visitBinaryMultiplicativeOperation(binary_multiplicative_operation_context);
        }
        else if (const auto binary_bitwise_operation_context = dynamic_cast<SandParser::BinaryBitwiseOperationContext *>(context))
        {
            return this->visitBinaryBitwiseOperation(binary_bitwise_operation_context);
        }
        else if (const auto binary_shift_operation_context = dynamic_cast<SandParser::BinaryShiftOperationContext *>(context))
        {
            return this->visitBinaryShiftOperation(binary_shift_operation_context);
        }
        else if (const auto binary_comparison_operation_context = dynamic_cast<SandParser::BinaryComparisonOperationContext *>(context))
        {
            return this->visitBinaryComparisonOperation(binary_comparison_operation_context);
        }
        else if (const auto binary_conditional_operation_context = dynamic_cast<SandParser::BinaryConditionalOperationContext *>(context))
        {
            return this->visitBinaryConditionalOperation(binary_conditional_operation_context);
        }
        else if (const auto ternary_context = dynamic_cast<SandParser::TernaryExpressionContext *>(context))
        {
            return this->visitTernaryExpression(ternary_context);
        }
        else if (const auto equality_operation_context = dynamic_cast<SandParser::EqualityOperationContext *>(context))
        {
            return this->visitEqualityOperation(equality_operation_context);
        }
        else if (const auto nagative_expression_context = dynamic_cast<SandParser::UnaryNegativeExpressionContext *>(context))
        {
            return this->visitUnaryNegativeExpression(nagative_expression_context);
        }
        else if (const auto nagation_expression_context = dynamic_cast<SandParser::BitwiseNegationExpressionContext *>(context))
        {
            return this->visitBitwiseNegationExpression(nagation_expression_context);
        }
        else if (const auto positive_expression_context = dynamic_cast<SandParser::UnaryPositiveExpressionContext *>(context))
        {
            return this->visitUnaryPositiveExpression(positive_expression_context);
        }
        else if (const auto negation_expression_context = dynamic_cast<SandParser::UnaryNegationExpressionContext *>(context))
        {
            return this->visitUnaryNegationExpression(negation_expression_context);
        }
        else if (const auto suffix_negation_expression_context = dynamic_cast<SandParser::SuffixUnaryNegationExpressionContext *>(context))
        {
            return this->visitSuffixUnaryNegationExpression(suffix_negation_expression_context);
        }
        else if (const auto pointer_expression_context = dynamic_cast<SandParser::PointerExpressionContext *>(context))
        {
            return this->visitPointerExpression(pointer_expression_context);
        }
        else if (const auto dereference_expression_context = dynamic_cast<SandParser::DereferenceExpressionContext *>(context))
        {
            return this->visitDereferenceExpression(dereference_expression_context);
        }
        else if (const auto index_context = dynamic_cast<SandParser::IndexContext *>(context))
        {
            return this->visitIndex(index_context);
        }
        else if (const auto type_cast_context = dynamic_cast<SandParser::TypeCastContext *>(context))
        {
            return this->visitTypeCast(type_cast_context);
        }
        else if (const auto property_expression_context = dynamic_cast<SandParser::PropertyExpressionContext *>(context))
        {
            return this->visitPropertyExpression(property_expression_context);
        }
        else if (const auto function_expression_context = dynamic_cast<SandParser::FunctionExpressionContext *>(context))
        {
            return this->visitFunction(function_expression_context->function());
        }
        else if (const auto name_expression_context = dynamic_cast<SandParser::NameExpressionContext *>(context))
        {
            return this->visitNameExpression(name_expression_context);
        }
        else if (const auto literal_declaration_context = dynamic_cast<SandParser::LiteralDeclarationContext *>(context))
        {
            return this->visitLiteralDeclaration(literal_declaration_context);
        }

        return nullptr;
    }

    Name *visitInParenExpression(SandParser::InParenExpressionContext *context)
    {
        return this->visitExpression(context->expression());
    }

    Values::Constant *visitSizeofExpression(SandParser::SizeofExpressionContext *context)
    {
        auto scope = this->scopes.top();

        Type *type = nullptr;

        if (auto expression_context = context->expression())
        {
            auto expression = this->visitExpression(expression_context);

            if (auto names = dynamic_cast<NameArray *>(expression))
            {
                auto name = names->last();

                while (auto alias = dynamic_cast<Alias *>(name))
                {
                    name = alias->names->last();
                }

                if (auto type_name = dynamic_cast<Type *>(name))
                {
                    type = type_name;
                }
                else if (auto variable = dynamic_cast<Values::Variable *>(name))
                {
                    type = variable->type;
                }
                else
                {
                    throw InvalidRightValueException(this->files.top(), expression_context->getStart());
                }
            }
            else if (auto value = dynamic_cast<Value *>(expression))
            {
                type = value->type;
            }
            else
            {
                throw InvalidRightValueException(this->files.top(), expression_context->getStart());
            }
        }
        else if (auto type_context = context->type())
        {
            type = this->visitType(type_context);
        }

        auto i64 = Type::i64(scope->context());
        auto value = llvm::ConstantInt::get(i64->get_ref(), type->size(this->env.module));

        return new Values::Constant("sizeof", i64, value);
    }

    Value *visitClassInstantiationExpression(SandParser::ClassInstantiationExpressionContext *context)
    {
        auto scope = this->scopes.top();
        auto type = this->visitClassTypeName(context->classTypeName());

        auto var = Values::Variable::create(type->name + ".inst", type, scope->builder());

        std::vector<std::string> assigned_properties;

        if (auto properties = context->classInstantiationProperties())
        {
            assigned_properties = this->visitClassInstantiationProperties(properties, var);
        }

        auto class_properties = type->get_all_properties(scope->module());
        for (auto &class_property : class_properties)
        {
            if (class_property->property->default_value == nullptr)
            {
                continue;
            }

            auto is_defined = std::find(assigned_properties.begin(), assigned_properties.end(), class_property->property->name) != assigned_properties.end();

            if (!is_defined)
            {
                Value *container = var;

                if (class_property->from != nullptr)
                {
                    container = container->struct_cast(Type::get_origin(class_property->from), class_property->padding, scope->builder());
                }

                auto ptr = container->struct_gep(class_property->property->name, class_property->property->type, class_property->index, scope->builder());

                ptr->store(class_property->property->default_value, scope->builder(), scope->module(), true);
            }
        }

        return var;
    }

    std::vector<std::string> visitClassInstantiationProperties(SandParser::ClassInstantiationPropertiesContext *context, Values::Variable *var)
    {
        auto scope = this->scopes.top();
        auto type = static_cast<Types::ClassType *>(var->type);

        std::vector<std::string> assigned_properties;

        for (auto &property : context->classInstantiationProperty())
        {
            this->visitClassInstantiationProperty(property, var);

            auto name = property->VariableName()->getText();
            assigned_properties.push_back(name);
        }

        return assigned_properties;
    }

    void visitClassInstantiationProperty(SandParser::ClassInstantiationPropertyContext *context, Values::Variable *var)
    {
        auto scope = this->scopes.top();
        auto type = static_cast<Types::ClassType *>(var->type);

        auto name = context->VariableName()->getText();

        Value *value = nullptr;

        if (auto expression = context->expression())
        {
            value = this->valueFromExpression(expression);
        }
        else
        {
            auto named_value = scope->get_names(name);
            value = this->valueFromName(named_value, context);
        }

        auto property_position = type->get_property(name, this->env.module);

        if (property_position == nullptr)
        {
            throw PropertyNotFoundException(this->files.top(), context->VariableName()->getSymbol(), type);
        }

        Value *container = var;

        if (property_position->from != nullptr)
        {
            container = container->struct_cast(property_position->from, property_position->padding, scope->builder());
        }

        auto ptr = container->struct_gep(property_position->property->name, property_position->property->type, property_position->index, scope->builder());

        ptr->store(value, scope->builder(), scope->module(), true);
    }

    Value *visitFunctionCallExpression(SandParser::FunctionCallExpressionContext *context)
    {
        auto scope = this->scopes.top();
        auto lvalue = this->visitExpression(context->expression());
        auto args = this->visitFunctionCallArguments(context->functionCallArguments());

        if (auto value = dynamic_cast<Value *>(lvalue))
        {
            value = value->load_alloca_and_reference(scope->builder());

            if (auto type = dynamic_cast<Types::FunctionType *>(value->type))
            {
                if (type->compare_args(args))
                {
                    auto return_value = value->call(scope->builder(), scope->module(), args);
                    scope->add_name("", return_value);

                    return return_value;
                }
            }
        }
        else if (auto names = dynamic_cast<NameArray *>(lvalue))
        {
            while (auto alias = dynamic_cast<Alias *>(names->last()))
            {
                names = alias->names;
            }

            if (auto function = names->get_function(args))
            {
                if (auto value = dynamic_cast<Value *>(function))
                {
                    value = value->load_alloca_and_reference(scope->builder());

                    auto return_value = value->call(scope->builder(), scope->module(), args);
                    scope->add_name("", return_value);

                    return return_value;
                }
            }
        }

        throw NoFunctionMatchException(this->files.top(), context->expression()->getStart(), args);
    }

    std::vector<Value *> visitFunctionCallArguments(SandParser::FunctionCallArgumentsContext *context)
    {
        std::vector<Value *> args;

        if (context == nullptr)
        {
            return args;
        }

        auto scope = this->scopes.top();

        for (auto arg : context->functionCallArgument())
        {
            auto var = this->visitFunctionCallArgument(arg);
            args.push_back(var);
        }

        return args;
    }

    Value *visitFunctionCallArgument(SandParser::FunctionCallArgumentContext *context)
    {
        return this->valueFromExpression(context->expression());
    }

    Value *visitBinaryOperation(SandParser::BinaryOperationContext *context)
    {
        auto scope = this->scopes.top();

        const auto opt = context->operatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = this->valueFromExpression(lexpr_context);
        auto rexpr = this->valueFromExpression(rexpr_context);

        auto lvalue = lexpr;
        auto rvalue = rexpr;

        if (opt->Add())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("+", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::add(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->Sub())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("-", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::sub(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }

        throw InvalidRightValueException(this->files.top(), rexpr_context->getStart());
    }

    Value *visitBinaryMultiplicativeOperation(SandParser::BinaryMultiplicativeOperationContext *context)
    {
        auto scope = this->scopes.top();

        const auto opt = context->multiplicativeOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = this->valueFromExpression(lexpr_context);
        auto rexpr = this->valueFromExpression(rexpr_context);

        auto lvalue = lexpr;
        auto rvalue = rexpr;

        if (opt->Mul())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("*", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::mul(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->Div())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("/", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::div(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->Mod())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("%", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::mod(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }

        throw InvalidRightValueException(this->files.top(), rexpr_context->getStart());
    }

    Value *visitBinaryBitwiseOperation(SandParser::BinaryBitwiseOperationContext *context)
    {
        auto scope = this->scopes.top();

        const auto opt = context->bitwiseOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = this->valueFromExpression(lexpr_context);
        auto rexpr = this->valueFromExpression(rexpr_context);

        auto lvalue = lexpr;
        auto rvalue = rexpr;

        if (opt->Xor())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("^", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::boolean_xor(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->BitwiseOr())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("|", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::bitwise_or(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->BitwiseAnd())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("&", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::bitwise_and(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }

        throw InvalidRightValueException(this->files.top(), rexpr_context->getStart());
    }

    enum ShiftOperator
    {
        Left,
        ArithmeticRight,
        LogicalRight,
    };

    Value *visitBinaryShiftOperation(SandParser::BinaryShiftOperationContext *context)
    {
        auto scope = this->scopes.top();

        const auto opt = this->visitShiftOperator(context->shiftOperator());
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = this->valueFromExpression(lexpr_context);
        auto rexpr = this->valueFromExpression(rexpr_context);

        auto lvalue = lexpr;
        auto rvalue = rexpr;

        if (opt == ShiftOperator::ArithmeticRight)
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload(">>", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::rshift(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt == ShiftOperator::LogicalRight)
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload(">>>", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::lrshift(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt == ShiftOperator::Left)
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("<<", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::lshift(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }

        throw UnimplementedException(this->files.top(), context->getStart());
    }

    void ensureNoSpace(antlr4::ParserRuleContext *context)
    {
        auto token = static_cast<antlr4::tree::TerminalNode *>(context->children[0])->getSymbol();
        auto firstIndex = token->getStartIndex();

        for (size_t i = 1; i < context->children.size(); i++)
        {
            auto sibling = static_cast<antlr4::tree::TerminalNode *>(context->children[i])->getSymbol();

            if (sibling->getStartIndex() != (firstIndex + i))
            {
                throw SyntaxException(this->files.top(), context->getStart(), "shift operators should not contain spaces");
            }
        }
    }

    void checkShiftOperator(SandParser::ShiftOperatorContext *context)
    {
        if (auto operator_context = context->arithmeticRightShiftOperator())
        {
            this->ensureNoSpace(operator_context);
        }
        else if (auto operator_context = context->logicalRightShiftOperator())
        {
            this->ensureNoSpace(operator_context);
        }
        else if (auto operator_context = context->leftShiftOperator())
        {
            this->ensureNoSpace(operator_context);
        }
    }

    void checkShiftEqualOperator(SandParser::ShiftEqualOperatorContext *context)
    {
        if (auto operator_context = context->arithmeticRightShiftEqualOperator())
        {
            this->ensureNoSpace(operator_context);
        }
        else if (auto operator_context = context->logicalRightShiftEqualOperator())
        {
            this->ensureNoSpace(operator_context);
        }
        else if (auto operator_context = context->leftShiftEqualOperator())
        {
            this->ensureNoSpace(operator_context);
        }
    }

    ShiftOperator visitShiftOperator(SandParser::ShiftOperatorContext *context)
    {
        this->checkShiftOperator(context);

        if (auto operator_context = context->arithmeticRightShiftOperator())
        {
            return ShiftOperator::ArithmeticRight;
        }
        else if (auto operator_context = context->logicalRightShiftOperator())
        {
            return ShiftOperator::LogicalRight;
        }
        else if (auto operator_context = context->leftShiftOperator())
        {
            return ShiftOperator::Left;
        }

        throw UnimplementedException(this->files.top(), context->getStart());
    }

    ShiftOperator visitShiftEqualOperator(SandParser::ShiftEqualOperatorContext *context)
    {
        this->checkShiftEqualOperator(context);

        if (auto operator_context = context->arithmeticRightShiftEqualOperator())
        {
            return ShiftOperator::ArithmeticRight;
        }
        else if (auto operator_context = context->logicalRightShiftEqualOperator())
        {
            return ShiftOperator::LogicalRight;
        }
        else if (auto operator_context = context->leftShiftEqualOperator())
        {
            return ShiftOperator::Left;
        }

        throw UnimplementedException(this->files.top(), context->getStart());
    }

    Value *visitBinaryComparisonOperation(SandParser::BinaryComparisonOperationContext *context)
    {
        auto scope = this->scopes.top();

        const auto opt = context->comparisonOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = this->valueFromExpression(lexpr_context);
        auto rexpr = this->valueFromExpression(rexpr_context);

        auto lvalue = lexpr;
        auto rvalue = rexpr;

        if (opt->EqualTo())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("==", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::equal(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->NotEqualTo())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("!=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::not_equal(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->LessThan())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("<", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::less_than(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->LessThanOrEqualTo())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload("<=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::less_than_or_equal(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (opt->GreaterThan())
        {
            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload(">", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::greater_than(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }
        else if (auto gte_context = opt->greaterThanOrEqualToOperator())
        {
            this->ensureNoSpace(gte_context);

            std::vector<Value *> args = {lexpr, rexpr};
            if (auto overload = this->getOperatorOverload(">=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = Value::greater_than_or_equal(scope->builder(), scope->module(), lvalue, rvalue))
            {
                return value;
            }
        }

        throw InvalidRightValueException(this->files.top(), rexpr_context->getStart());
    }

    Value *visitBinaryConditionalOperation(SandParser::BinaryConditionalOperationContext *context)
    {
        auto scope = this->scopes.top();

        auto opt = context->conditionalOperatorStatement();

        auto lexpr_context = context->expression(0);
        auto lexpr = this->valueFromExpression(lexpr_context);

        auto cond_false = Block::create(scope->builder());
        auto cond_end = Block::create(scope->builder());

        llvm::Constant *boolean_constant = nullptr;

        if (dynamic_cast<Values::Constant *>(lexpr))
        {
            auto variable = Values::Variable::create(lexpr->name, lexpr->type, scope->builder());
            variable->store(lexpr, scope->builder(), scope->module());

            lexpr = Value::not_equal(scope->builder(), scope->module(), variable->load(scope->builder()), Values::Constant::null_value(Type::behind_reference(lexpr->type)));
        }

        if (opt->ConditionalOr())
        {
            boolean_constant = llvm::ConstantInt::getTrue(scope->context());

            cond_false->set_name("lor.rhs");
            cond_end->set_name("lor.end");

            cond_end->conditional_br(scope->builder(), lexpr, cond_false);
        }
        else if (opt->ConditionalAnd())
        {
            boolean_constant = llvm::ConstantInt::getFalse(scope->context());

            cond_false->set_name("land.rhs");
            cond_end->set_name("land.end");

            cond_false->conditional_br(scope->builder(), lexpr, cond_end);
        }

        scope->get_function()->insert(cond_false);
        cond_false->insert_point(scope->builder());

        auto rexpr_context = context->expression(1);
        auto rexpr = this->valueFromExpression(rexpr_context);

        if (dynamic_cast<Values::Constant *>(rexpr))
        {
            auto variable = Values::Variable::create(rexpr->name, rexpr->type, scope->builder());
            variable->store(rexpr, scope->builder(), scope->module());

            rexpr = Value::not_equal(scope->builder(), scope->module(), variable, Values::Constant::null_value(Type::behind_reference(rexpr->type)));
        }

        cond_end->br(scope->builder());

        scope->get_function()->insert(cond_end);
        cond_end->insert_point(scope->builder());

        auto phi = scope->builder().CreatePHI(Type::llvm_i1(scope->context()), 2);
        phi->addIncoming(boolean_constant, reinterpret_cast<llvm::Instruction *>(lexpr->get_ref())->getParent());
        phi->addIncoming(rexpr->get_ref(), reinterpret_cast<llvm::Instruction *>(rexpr->get_ref())->getParent());

        return new Value("phi", Type::i1(scope->context()), phi, false);
    }

    Value *visitTernaryExpression(SandParser::TernaryExpressionContext *context)
    {
        auto scope = this->scopes.create();

        auto if_then = Block::create(scope->builder(), "if.then");
        auto if_end = Block::create(scope->builder(), "if.end");
        auto if_else = Block::create(scope->builder(), "if.else");

        auto condition = this->valueFromExpression(context->expression(0));
        auto null_value = Values::Constant::null_value(Type::behind_reference(condition->type));

        if (!condition->type->is_boolean())
        {
            condition = Value::not_equal(scope->builder(), scope->module(), condition, null_value);
        }

        if_then->conditional_br(scope->builder(), condition, if_else);

        scope->get_function()->insert(if_then);
        if_then->insert_point(scope->builder());

        auto true_value = this->valueFromExpression(context->expression(1))->load_alloca_and_reference(scope->builder());

        if_end->br(scope->builder());

        scope = this->scopes.top();

        scope->get_function()->insert(if_else);
        if_else->insert_point(scope->builder());

        auto false_value = this->valueFromExpression(context->expression(2))->load_alloca_and_reference(scope->builder());

        if (Type::compatibility(false_value->type, true_value->type) == Type::NOT_COMPATIBLE)
        {
            throw TypesNotCompatibleException(this->files.top(), context->getStart(), false_value->type, true_value->type);
        }

        false_value = false_value->cast(true_value->type, scope->builder(), scope->module());

        if_end->br(scope->builder());

        scope->get_function()->insert(if_end);
        if_end->insert_point(scope->builder());

        this->scopes.pop();

        auto phi = scope->builder().CreatePHI(true_value->type->get_ref(), 2);
        phi->addIncoming(true_value->get_ref(), if_then->get_ref());
        phi->addIncoming(false_value->get_ref(), if_else->get_ref());

        return new Value("phi", true_value->type, phi, false);
    }

    Value *visitEqualityOperation(SandParser::EqualityOperationContext *context)
    {
        auto scope = this->scopes.top();

        const auto opt = context->equalityOperatorStatement();
        const auto lexpr_context = context->expression(0);
        const auto rexpr_context = context->expression(1);

        auto lexpr = this->valueFromExpression(lexpr_context);
        auto rexpr = this->valueFromExpression(rexpr_context);

        if (!lexpr->is_alloca && !lexpr->type->is_reference)
        {
            throw InvalidLeftValueException(this->files.top(), lexpr_context->getStart());
        }

        std::vector<Value *> args = {lexpr, rexpr};

        if (opt->Equal())
        {
            if (auto overload = this->getOperatorOverload("=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            auto rtype = rexpr->type;

            if (rtype->is_function() && !rtype->is_pointer())
            {
                rtype = Type::pointer(rtype);
            }

            if (Type::compatibility((lexpr->is_alloca && !lexpr->is_temporary) ? Type::reference(lexpr->type) : lexpr->type, rtype) != Type::NOT_COMPATIBLE)
            {
                lexpr->store(rexpr, scope->builder(), scope->module());
                return lexpr;
            }
        }
        else if (opt->AddEqual())
        {
            if (auto overload = this->getOperatorOverload("+=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->add(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->SubEqual())
        {
            if (auto overload = this->getOperatorOverload("-=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->sub(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->MulEqual())
        {
            if (auto overload = this->getOperatorOverload("*=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->mul(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->DivEqual())
        {
            if (auto overload = this->getOperatorOverload("/=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->div(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->ModEqual())
        {
            if (auto overload = this->getOperatorOverload("%=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->mod(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->XorEqual())
        {
            if (auto overload = this->getOperatorOverload("^=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->boolean_xor(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->OrEqual())
        {
            if (auto overload = this->getOperatorOverload("|=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->bitwise_or(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (opt->AndEqual())
        {
            if (auto overload = this->getOperatorOverload("&=", args))
            {
                return overload->call(scope->builder(), scope->module(), args);
            }

            if (auto value = lexpr->bitwise_and(scope->module(), scope->builder(), rexpr))
            {
                return value;
            }
        }
        else if (auto se_context = opt->shiftEqualOperator())
        {
            auto se_opt = this->visitShiftEqualOperator(se_context);

            if (se_opt == ShiftOperator::ArithmeticRight)
            {
                std::vector<Value *> args = {lexpr, rexpr};
                if (auto overload = this->getOperatorOverload(">>=", args))
                {
                    return overload->call(scope->builder(), scope->module(), args);
                }

                if (auto value = lexpr->rshift(scope->module(), scope->builder(), rexpr))
                {
                    return value;
                }
            }
            else if (se_opt == ShiftOperator::LogicalRight)
            {
                std::vector<Value *> args = {lexpr, rexpr};
                if (auto overload = this->getOperatorOverload(">>>=", args))
                {
                    return overload->call(scope->builder(), scope->module(), args);
                }

                if (auto value = lexpr->lrshift(scope->module(), scope->builder(), rexpr))
                {
                    return value;
                }
            }
            else if (se_opt == ShiftOperator::Left)
            {
                std::vector<Value *> args = {lexpr, rexpr};
                if (auto overload = this->getOperatorOverload("<<=", args))
                {
                    return overload->call(scope->builder(), scope->module(), args);
                }

                if (auto value = lexpr->lshift(scope->module(), scope->builder(), rexpr))
                {
                    return value;
                }
            }
        }

        throw InvalidRightValueException(this->files.top(), rexpr_context->getStart());
    }

    Value *getOperatorOverload(const std::string &name, std::vector<Value *> &args)
    {
        auto scope = this->scopes.top();

        auto type = Type::get_origin(Type::behind_reference(args[0]->type));

        if (auto class_type = dynamic_cast<Types::ClassType *>(type))
        {
            auto names = class_type->get_names(name, args[0], scope->builder(), scope->module());

            auto method_args = std::vector<Value *>(args.begin() + 1, args.end());

            if (auto match = names->get_function(method_args))
            {
                if (auto value = dynamic_cast<Value *>(match))
                {
                    value->calling_variable = args[0];

                    if (value->calling_variable->is_alloca)
                    {
                        value->calling_variable = value->calling_variable->load_reference(scope->builder());
                    }

                    args = method_args;

                    return value;
                }
            }
        }

        auto names = scope->get_names(name);

        if (auto match = names->get_function(args))
        {
            if (auto value = dynamic_cast<Value *>(match))
            {
                return value;
            }
        }

        return nullptr;
    }

    Value *getCastOverload(Value *value, Type *dest)
    {
        auto scope = this->scopes.top();
        auto names = scope->get_names("@cast");

        if (auto match = names->get_function({value}, dest))
        {
            if (auto value = dynamic_cast<Value *>(match))
            {
                return value;
            }
        }

        return nullptr;
    }

    Value *visitUnaryNegativeExpression(SandParser::UnaryNegativeExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());

        std::vector<Value *> args = {expression};
        if (auto overload = this->getOperatorOverload("-", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        llvm::Constant *one_llvm = nullptr;

        if (expression->type->is_integer())
        {
            one_llvm = llvm::ConstantInt::get(expression->type->get_ref(), 0);
        }
        else if (expression->type->is_floating_point())
        {
            one_llvm = llvm::ConstantFP::get(expression->type->get_ref(), 0.0);
        }
        else
        {
            throw InvalidRightValueException(this->files.top(), context->getStart());
        }

        if (auto constant = dynamic_cast<Values::Constant *>(expression))
        {
            llvm::Constant *value = nullptr;

            if (expression->type->is_integer())
            {
                value = llvm::ConstantExpr::getSub(one_llvm, constant->get_ref());
            }
            else if (expression->type->is_floating_point())
            {
                value = llvm::ConstantExpr::getFSub(one_llvm, constant->get_ref());
            }

            return new Values::Constant("negative", constant->type, value);
        }

        auto one = new Values::Constant("literal_" + expression->type->name, expression->type, one_llvm);
        if (auto value = Value::sub(scope->builder(), scope->module(), one, expression))
        {
            return value;
        }

        throw InvalidRightValueException(this->files.top(), context->expression()->getStart());
    }

    Value *visitBitwiseNegationExpression(SandParser::BitwiseNegationExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());

        std::vector<Value *> args = {expression};
        if (auto overload = this->getOperatorOverload("~", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        auto one_llvm = llvm::ConstantInt::get(expression->type->get_ref(), -1);

        if (auto constant = dynamic_cast<Values::Constant *>(expression))
        {
            auto value = llvm::ConstantExpr::getXor(constant->get_ref(), one_llvm);
            return new Values::Constant(constant->name, constant->type, value);
        }

        auto one = new Values::Constant("literal_negative_one", expression->type, one_llvm);
        if (auto value = Value::boolean_xor(scope->builder(), scope->module(), expression, one))
        {
            value->get_ref()->setName("neg");
            return value;
        }

        throw InvalidRightValueException(this->files.top(), context->expression()->getStart());
    }

    Value *visitUnaryPositiveExpression(SandParser::UnaryPositiveExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());

        std::vector<Value *> args = {expression};
        if (auto overload = this->getOperatorOverload("+", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        auto type = expression->type;

        if (type->is_integer() || type->is_floating_point() || type->is_pointer())
        {
            return expression;
        }

        throw InvalidRightValueException(this->files.top(), context->expression()->getStart());
    }

    Value *visitUnaryNegationExpression(SandParser::UnaryNegationExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());

        std::vector<Value *> args = {expression};
        if (auto overload = this->getOperatorOverload("!", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        auto type = expression->type;

        if (!type->is_boolean())
        {
            if (auto function = this->getCastOverload(expression, Type::i1(scope->context())))
            {
                expression = function->call(scope->builder(), scope->module(), {expression});
            }
            else if (type->is_integer() || type->is_floating_point() || type->is_pointer())
            {
                expression = Value::not_equal(scope->builder(), scope->module(), expression, Values::Constant::null_value(Type::behind_reference(expression->type)));
            }
            else
            {
                throw InvalidRightValueException(this->files.top(), context->expression()->getStart());
            }
        }

        return Value::boolean_xor(scope->builder(), scope->module(), expression, Values::Constant::boolean_value(true, scope->context()));
    }

    Value *visitSuffixUnaryNegationExpression(SandParser::SuffixUnaryNegationExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());

        std::vector<Value *> args = {expression};
        if (auto overload = this->getOperatorOverload("+!", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        throw InvalidRightValueException(this->files.top(), context->expression()->getStart());
    }

    Value *visitPointerExpression(SandParser::PointerExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());

        if (!expression->is_alloca)
        {
            throw InvalidValueException(this->files.top(), context->expression()->getStart());
        }

        if (expression->type->is_reference)
        {
            expression = expression->load_alloca(scope->builder());
        }

        auto type = expression->type;

        if (!type->is_reference)
        {
            type = Type::pointer(expression->type);
        }

        return new Value(expression->name + ".ptr", type, expression->get_ref());
    }

    Value *visitDereferenceExpression(SandParser::DereferenceExpressionContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression());
        auto type = Type::behind_reference(expression->type);

        if (type->is_array() || type->is_pointer())
        {
            constexpr size_t index = 0UL;
            return expression->gep(index, scope->builder(), scope->module());
        }

        std::vector<Value *> args = {expression};
        if (auto overload = this->getOperatorOverload("*", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        throw NotAPointerException(this->files.top(), context->expression()->getStart());
    }

    Value *visitIndex(SandParser::IndexContext *context)
    {
        auto scope = this->scopes.top();

        auto expression = this->valueFromExpression(context->expression(0));
        auto index = this->valueFromExpression(context->expression(1));

        auto type = Type::behind_reference(expression->type);

        if (type->is_array() || type->is_pointer())
        {
            return expression->gep(index, scope->builder(), scope->module());
        }

        std::vector<Value *> args = {expression, index};
        if (auto overload = this->getOperatorOverload("[]", args))
        {
            return overload->call(scope->builder(), scope->module(), args);
        }

        throw IndexException(this->files.top(), context->expression(1)->getStart(), index->type, expression->type);
    }

    Value *visitTypeCast(SandParser::TypeCastContext *context)
    {
        auto scope = this->scopes.top();
        auto expr = this->valueFromExpression(context->expression());
        auto type = this->visitType(context->type());

        if (auto function = this->getCastOverload(expr, type))
        {
            return function->call(scope->builder(), scope->module(), {expr});
        }

        return expr->cast(type, scope->builder(), scope->module(), true);
    }

    Name *visitPropertyExpression(SandParser::PropertyExpressionContext *context)
    {
        auto scope = this->scopes.top();
        auto expr = this->valueFromExpression(context->expression());

        if (context->Arrow())
        {
            std::vector<Value *> args = {expr};
            if (auto overload = this->getOperatorOverload("->", args))
            {
                expr = overload->call(scope->builder(), scope->module(), args);
            }
        }
        else
        {
            std::vector<Value *> args = {expr};
            if (auto overload = this->getOperatorOverload(".", args))
            {
                expr = overload->call(scope->builder(), scope->module(), args);
            }
        }

        if (context->Arrow())
        {
            if (!Type::behind_reference(expr->type)->is_pointer())
            {
                throw NotAPointerException(this->files.top(), context->expression()->getStart());
            }

            auto index = 0UL;
            // expr = expr->load(scope->builder())->gep(index, scope->builder(), scope->module());
            expr = expr->gep(index, scope->builder(), scope->module());
        }
        else if (expr->is_alloca)
        {
            expr = expr->load_reference(scope->builder());
        }

        auto type = Type::get_origin(Type::behind_reference(expr->type));

        if (auto class_type = dynamic_cast<Types::ClassType *>(type))
        {
            return this->visitName(context->name(), expr);
        }
        else if (auto union_type = dynamic_cast<Types::UnionType *>(type))
        {
            return this->visitName(context->name(), expr);
        }

        throw NotAClassException(this->files.top(), context->expression()->getStart());
    }

    NameArray *visitNameExpression(SandParser::NameExpressionContext *context)
    {
        return this->visitScopedName(context->scopedName());
    }

    Value *valueFromExpression(SandParser::ExpressionContext *context)
    {
        auto expression = this->visitExpression(context);
        return this->valueFromName(expression, context);
    }

    Value *valueFromName(Name *name, antlr4::ParserRuleContext *context)
    {
        if (auto array = dynamic_cast<NameArray *>(name))
        {
            while (auto alias = dynamic_cast<Alias *>(array->last()))
            {
                array = alias->names;
            }

            if (array->size() > 1 && !dynamic_cast<Values::Variable *>(array->get(0)))
            {
                throw MultipleInstancesException(this->files.top(), context->getStart());
            }

            if (auto value = dynamic_cast<Value *>(array->last()))
            {
                return value;
            }
        }
        else if (auto value = dynamic_cast<Value *>(name))
        {
            return value;
        }

        throw InvalidValueException(this->files.top(), context->getStart());
    }

    Type *typeFromName(Name *name, antlr4::ParserRuleContext *context)
    {
        if (auto array = dynamic_cast<NameArray *>(name))
        {
            while (auto alias = dynamic_cast<Alias *>(array->last()))
            {
                array = alias->names;
            }

            if (auto type = dynamic_cast<Type *>(array->last()))
            {
                return type;
            }
        }
        else if (auto type = dynamic_cast<Type *>(name))
        {
            return type;
        }

        throw InvalidTypeException(this->files.top(), context->getStart());
    }

    NameArray *visitScopedName(SandParser::ScopedNameContext *context)
    {
        if (auto scope_resolver_context = context->scopeResolver())
        {
            auto scope = this->visitScopeResolver(scope_resolver_context);
            return this->visitName(context->name(), scope);
        }

        auto scope = this->scopes.top();
        return this->visitName(context->name(), scope);
    }

    NameArray *visitScopedNameNoGeneric(SandParser::ScopedNameNoGenericContext *context)
    {
        auto scope = this->scopes.top();

        if (auto scope_resolver_context = context->scopeResolver())
        {
            scope = this->visitScopeResolver(scope_resolver_context);
        }

        return this->visitNameNoGeneric(context->nameNoGeneric(), scope);
    }

    std::shared_ptr<Scope> visitScopeResolver(SandParser::ScopeResolverContext *context)
    {
        return this->visitScopeResolver(context, this->scopes.top());
    }

    std::shared_ptr<Scope> scopeFromName(Name *name)
    {
        while (auto alias = dynamic_cast<Alias *>(name))
        {
            name = alias->names->last();
        }

        if (auto class_type = dynamic_cast<Types::ClassType *>(name))
        {
            return class_type->get_static_scope();
        }
        else if (auto nsp = dynamic_cast<Namespace *>(name))
        {
            return nsp->scope;
        }
        else if (auto enumeration = dynamic_cast<Types::EnumType *>(name))
        {
            return enumeration->static_scope;
        }

        return nullptr;
    }

    std::shared_ptr<Scope> visitScopeResolver(SandParser::ScopeResolverContext *context, std::shared_ptr<Scope> scope)
    {
        auto names = this->visitName(context->name(), scope);
        auto name = names->last();

        std::shared_ptr<Scope> resolved_scope = this->scopeFromName(name);

        if (resolved_scope != nullptr)
        {
            if (auto scope_resolver_context = context->scopeResolver())
            {
                return this->visitScopeResolver(scope_resolver_context, resolved_scope);
            }

            return resolved_scope;
        }

        throw NotAClassOrNamespaceException(this->files.top(), context->name()->getStart());
    }

    NameArray *visitName(SandParser::NameContext *context, std::shared_ptr<Scope> &scope)
    {
        auto name = context->VariableName()->getText();
        auto names = scope->get_names(name);

        if (!names->empty())
        {
            for (auto &generics_context : context->classTypeNameGenerics())
            {
                names = this->visitTypeNameClassGenerics(generics_context, names);
            }

            return names;
        }

        throw UnknownNameException(this->files.top(), context->VariableName()->getSymbol());
    }

    NameArray *visitName(SandParser::NameContext *context, Value *value)
    {
        auto scope = this->scopes.top();

        auto behind = Type::get_origin(Type::behind_reference(value->type));

        if (auto type = dynamic_cast<Types::ClassType *>(behind))
        {
            auto name = context->VariableName()->getText();
            auto names = type->get_names(name, value, scope->builder(), scope->module());

            if (!names->empty())
            {
                for (auto &generics_context : context->classTypeNameGenerics())
                {
                    names = this->visitTypeNameClassGenerics(generics_context, names);
                }

                for (auto &name : names->names)
                {
                    if (auto name_value = dynamic_cast<Value *>(name))
                    {
                        name_value->calling_variable = value;
                    }
                }

                return names;
            }

            throw UnknownNameException(this->files.top(), context->VariableName()->getSymbol());
        }
        else if (auto type = dynamic_cast<Types::UnionType *>(behind))
        {
            auto name = context->VariableName()->getText();
            auto property = type->get_property(name);

            if (property != nullptr)
            {
                auto casted = value->union_cast(property->type, scope->builder());
                return new NameArray({casted});
            }

            throw UnknownNameException(this->files.top(), context->VariableName()->getSymbol());
        }

        throw ExpressionHasNotClassTypeException(this->files.top(), context->getStart());
    }

    NameArray *visitNameNoGeneric(SandParser::NameNoGenericContext *context, std::shared_ptr<Scope> &scope)
    {
        auto name = context->VariableName()->getText();
        auto names = scope->get_names(name);

        if (!names->empty())
        {
            return names;
        }

        throw UnknownNameException(this->files.top(), context->VariableName()->getSymbol());
    }

    NameArray *visitTypeNameClassGenerics(SandParser::ClassTypeNameGenericsContext *context, NameArray *names)
    {
        auto array = new NameArray();

        for (auto it = names->vector().rbegin(); it != names->vector().rend(); it++)
        {
            auto name = *it;

            if (auto alias = dynamic_cast<Alias *>(name))
            {
                auto values = this->visitTypeNameClassGenerics(context, alias->names);
                array->merge(values);
            }
            else if (auto generic_class = dynamic_cast<Types::GenericClassType *>(name))
            {
                auto generics = this->visitClassTypeNameGenerics(context);

                if (this->generateDefaultGenerics(generic_class, generics))
                {
                    continue;
                }

                if (auto type = generic_class->get_child(generics))
                {
                    array->add(type);
                }
                else
                {
                    auto generated = this->generateGenericClassType(generic_class, generics);
                    array->add(generated);
                }
            }
            else if (auto generic_union = dynamic_cast<Types::GenericUnionType *>(name))
            {
                auto generics = this->visitClassTypeNameGenerics(context);

                if (this->generateDefaultGenerics(generic_union, generics))
                {
                    continue;
                }

                if (auto type = generic_union->get_child(generics))
                {
                    array->add(type);
                }
                else
                {
                    auto generated = this->generateGenericUnionType(generic_union, generics);
                    array->add(generated);
                }
            }
            else if (auto generic_function = dynamic_cast<Types::GenericFunctionType *>(name))
            {
                auto generics = this->visitClassTypeNameGenerics(context);

                if (this->generateDefaultGenerics(generic_function, generics))
                {
                    continue;
                }

                if (auto type = generic_function->get_child(generics))
                {
                    array->add(type);
                }
                else
                {
                    auto generated = this->generateGenericFunction(generic_function, generics);
                    array->add(generated);
                }
            }
            else if (auto generic_alias = dynamic_cast<Types::GenericAlias *>(name))
            {
                auto generics = this->visitClassTypeNameGenerics(context);

                if (this->generateDefaultGenerics(generic_alias, generics))
                {
                    continue;
                }

                if (auto alias = generic_alias->get_child(generics))
                {
                    array->add(alias);
                }
                else
                {
                    auto generated = this->generateGenericAlias(generic_alias, generics);
                    array->add(generated);
                }
            }

            if (array->empty())
            {
                throw NotAGenericException(this->files.top(), context->getStart());
            }
        }

        if (array->empty())
        {
            throw NoGenericMatchException(this->files.top(), context->getStart());
        }

        return array;
    }

    bool generateDefaultGenerics(Types::GenericType *type, std::vector<Name *> &generics)
    {
        auto has_failed = false;
        auto last_is_variadic = false;
        size_t variadic_start = 0;

        this->scopes.create(type->scope);

        for (size_t i = 0; i < type->generics.size(); i++)
        {
            const auto &generic = type->generics[i];

            if (dynamic_cast<VariadicGeneric *>(generic))
            {
                last_is_variadic = true;
                variadic_start = i;
                break;
            }

            if (i < generics.size() && generics[i] != nullptr)
            {
                if (dynamic_cast<Type *>(generics[i]) && generic->is_expression)
                {
                    has_failed = true;
                    break;
                }
                else if (dynamic_cast<Value *>(generics[i]) && generic->is_type)
                {
                    has_failed = true;
                    break;
                }

                continue;
            }

            if (generic->default_value_context == nullptr)
            {
                has_failed = true;
                break;
            }

            Name *default_value = nullptr;

            if (auto type_context = generic->default_type_context())
            {
                default_value = this->visitType(type_context);
            }
            else if (auto expression_context = generic->default_expression_context())
            {
                default_value = this->valueFromExpression(expression_context);
            }

            if (i < generics.size())
            {
                generics[i] = default_value;
            }
            else
            {
                generics.push_back(default_value);
            }
        }

        if (!has_failed && last_is_variadic)
        {
            auto last = type->generics[type->generics.size() - 1];
            auto generic = dynamic_cast<VariadicGeneric *>(last);

            for (auto i = variadic_start; i < generics.size() || (i - variadic_start) < generic->default_value_context.size(); i++)
            {
                if (i < generics.size() && generics[i] != nullptr)
                {
                    if (dynamic_cast<Type *>(generics[i]) && generic->is_expression)
                    {
                        has_failed = true;
                        break;
                    }
                    else if (dynamic_cast<Value *>(generics[i]) && generic->is_type)
                    {
                        has_failed = true;
                        break;
                    }

                    continue;
                }

                if ((i - variadic_start) >= generic->default_value_context.size())
                {
                    has_failed = true;
                    break;
                }

                Name *default_value = nullptr;
                auto default_value_context = generic->default_value_context[i - variadic_start];

                if (generic->is_type)
                {
                    auto type_context = dynamic_cast<SandParser::TypeContext *>(default_value_context);
                    default_value = this->visitType(type_context);
                }
                else if (generic->is_expression)
                {
                    auto expression_context = dynamic_cast<SandParser::ExpressionContext *>(default_value_context);
                    default_value = this->valueFromExpression(expression_context);
                }

                if (i < generics.size())
                {
                    generics[i] = default_value;
                }
                else
                {
                    generics.push_back(default_value);
                }
            }

            if (generic->is_expression)
            {
                std::vector<Value *> values;

                for (auto it = generics.begin() + variadic_start; it != generics.end(); it++)
                {
                    if (auto value = dynamic_cast<Value *>(*it))
                    {
                        values.push_back(value);
                    }
                    else
                    {
                        std::cerr << "Generic should be a value (this shouldn't happen)" << std::endl;
                    }
                }

                auto variadic = new Values::VariadicValue(generic->name, values);
                generics.erase(generics.begin() + variadic_start, generics.end());

                generics.push_back(variadic);
            }
            else if (generic->is_type)
            {
                std::vector<Type *> types;

                for (auto it = generics.begin() + variadic_start; it != generics.end(); it++)
                {
                    if (auto type = dynamic_cast<Type *>(*it))
                    {
                        types.push_back(type);
                    }
                    else
                    {
                        std::cerr << "Generic should be a type (this shouldn't happen)" << std::endl;
                    }
                }

                auto variadic = new Types::VariadicType(generic->name, types);
                generics.erase(generics.begin() + variadic_start, generics.end());

                generics.push_back(variadic);
            }
        }
        else if (!has_failed && (type->generics.size() != generics.size()))
        {
            has_failed = true;
        }

        this->scopes.pop();

        return has_failed;
    }

    Values::Constant *visitLiteralDeclaration(SandParser::LiteralDeclarationContext *context)
    {
        return this->visitLiteral(context->literal());
    }

    Values::Constant *visitLiteral(SandParser::LiteralContext *context)
    {
        auto scope = this->scopes.top();

        if (auto literal = context->booleanLiteral())
        {
            return this->visitBooleanLiteral(literal);
        }
        else if (const auto literal = context->integerLiteral())
        {
            return this->visitIntegerLiteral(literal);
        }
        else if (const auto literal = context->floatingLiteral())
        {
            return this->visitFloatingLiteral(literal);
        }
        else if (const auto literal = context->stringLiteral())
        {
            return this->visitStringLiteral(literal);
        }
        else if (const auto literal = context->CharLiteral())
        {
            auto str = this->stringLiteralToString(literal->getSymbol()->getText());

            int integer = 0;
            for (const auto &c : str)
            {
                integer = (integer << 8) + static_cast<int>(c);
            }

            auto type = scope->get_primary_type("i32");
            auto value = llvm::ConstantInt::get(type->get_ref(), integer);

            return new Values::Constant("literal_i32", type, value);
        }
        else if (const auto literal = context->NullLiteral())
        {
            auto type = Type::pointer(scope->get_primary_type("void"));
            auto value = llvm::ConstantPointerNull::get(llvm::cast<llvm::PointerType>(type->get_ref()));

            return new Values::Constant("null", type, value);
        }

        return nullptr;
    }

    std::string stringLiteralToString(const std::string &literal)
    {
        auto str = literal.substr(1, literal.size() - 2);

        str = std::regex_replace(str, std::regex("\\\\0"), "\0");
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

        return str;
    }

    std::string stringLiteralToString(SandParser::StringLiteralContext *context)
    {
        std::string str = "";

        for (auto *literal : context->StringLiteral())
        {
            str += this->stringLiteralToString(literal->getSymbol()->getText());
        }

        return str;
    }

    Values::Constant *visitBooleanLiteral(SandParser::BooleanLiteralContext *context)
    {
        auto scope = this->scopes.top();
        auto is_true = (context->True() != nullptr);

        return Values::Constant::boolean_value(is_true, scope->context());
    }

    Values::Constant *visitIntegerLiteral(SandParser::IntegerLiteralContext *context)
    {
        auto scope = this->scopes.top();

        const auto parse_integer = [&](std::string str, int base = 10) -> Values::Constant * {
            str.erase(std::remove(str.begin(), str.end(), '_'), str.end());
            str.erase(std::remove(str.begin(), str.end(), '\''), str.end());

            uint64_t integer = 0;
            std::string name = "";
            Type *type = nullptr;
            bool is_signed = true;

            try
            {
                integer = std::stoull(str, nullptr, base);
            }
            catch (std::out_of_range &)
            {
                throw NumberOutOfRangeException(this->files.top(), context->getStart(), str);
            }

            typedef Type *(*TypeFunction)(llvm::LLVMContext &, const bool &);

            struct TypeRules
            {
                const char *name;
                int name_length;
                TypeFunction function;
                bool is_signed;

                uint64_t max;
            };

            static const std::vector<TypeRules> types = {
                {"i8", 2, Type::i8, true, std::numeric_limits<int8_t>::max()},
                {"i16", 3, Type::i16, true, std::numeric_limits<int16_t>::max()},
                {"i32", 3, Type::i32, true, std::numeric_limits<int32_t>::max()},
                {"i64", 3, Type::i64, true, std::numeric_limits<int64_t>::max()},
                {"u8", 2, Type::i8, false, std::numeric_limits<uint8_t>::max()},
                {"u16", 3, Type::i16, false, std::numeric_limits<uint16_t>::max()},
                {"u32", 3, Type::i32, false, std::numeric_limits<uint32_t>::max()},
                {"u64", 3, Type::i64, false, std::numeric_limits<uint64_t>::max()},
            };

            static const std::vector<TypeRules> automatic_types = {
                {"i32", 3, Type::i32, true, std::numeric_limits<int32_t>::max()},
                {"i64", 3, Type::i64, true, std::numeric_limits<int64_t>::max()},
                {"u32", 3, Type::i32, false, std::numeric_limits<uint32_t>::max()},
                {"u64", 3, Type::i64, false, std::numeric_limits<uint64_t>::max()},
            };

            for (const auto &rule : types)
            {
                if (Helpers::ends_with(str, rule.name))
                {
                    str = str.erase(str.size() - rule.name_length);
                    name = rule.name;
                    type = rule.function(scope->context(), rule.is_signed);
                    is_signed = rule.is_signed;

                    if (integer >= rule.max)
                    {
                        throw NumberOutOfRangeException(this->files.top(), context->getStart(), str, rule.name);
                    }

                    break;
                }
            }

            if (type == nullptr)
            {
                for (const auto &rule : automatic_types)
                {
                    if (integer <= rule.max)
                    {
                        name = rule.name;
                        type = rule.function(scope->context(), rule.is_signed);
                        is_signed = rule.is_signed;
                        break;
                    }
                }
            }

            if (type == nullptr)
            {
                std::cout << "Number too big." << std::endl;
                throw NumberOutOfRangeException(this->files.top(), context->getStart(), str);
            }

            auto value = llvm::ConstantInt::get(llvm::cast<llvm::IntegerType>(type->get_ref()), integer, is_signed);
            return new Values::Constant("literal_" + name, type, value);
        };

        if (auto literal = context->DecimalLiteral())
        {
            return parse_integer(literal->toString(), 10);
        }
        else if (context->ZeroLiteral())
        {
            auto type = Type::i32(scope->context());
            auto value = llvm::ConstantInt::get(type->get_ref(), 0, true);

            return new Values::Constant("literal_i32", type, value);
        }
        else if (auto literal = context->HexadecimalLiteral())
        {
            auto str = literal->toString();
            return parse_integer(literal->toString(), 16);
        }
        else if (auto literal = context->BinaryLiteral())
        {
            auto str = literal->toString().substr(2);
            return parse_integer(literal->toString(), 2);
        }

        return nullptr;
    }

    Values::Constant *visitFloatingLiteral(SandParser::FloatingLiteralContext *context)
    {
        auto scope = this->scopes.top();

        const auto remove_digit_separators = [](std::string &str) {
            str.erase(std::remove(str.begin(), str.end(), '_'), str.end());
            str.erase(std::remove(str.begin(), str.end(), '\''), str.end());
        };

        auto str = context->FloatingLiteral()->toString();
        remove_digit_separators(str);

        auto floating = std::stod(str);

        auto type = Type::f64(scope->context());
        auto value = llvm::ConstantFP::get(type->get_ref(), floating);

        return new Values::Constant("literal_f64", type, value);
    }

    Values::GlobalConstant *visitStringLiteral(SandParser::StringLiteralContext *context)
    {
        auto scope = this->scopes.top();

        std::string str = this->stringLiteralToString(context);

        auto constant = llvm::ConstantDataArray::getString(this->env.llvm_context, str, true);

        auto type = Type::array(scope->get_primary_type("i8"), str.size() + 1);
        auto value = Values::GlobalConstant::create(".str", type, constant, scope->module());

        return value;
    }

    Type *visitType(SandParser::TypeContext *context, const bool &check_opaque = true)
    {
        auto scope = this->scopes.top();

        Type *type = nullptr;

        if (auto child = dynamic_cast<SandParser::TypeArrayContext *>(context))
        {
            type = this->visitTypeArray(child);
        }
        else if (auto child = dynamic_cast<SandParser::TypePointerContext *>(context))
        {
            type = this->visitTypePointer(child);
        }
        else if (auto child = dynamic_cast<SandParser::TypeReferenceContext *>(context))
        {
            type = this->visitTypeReference(child);
        }
        else if (auto child = dynamic_cast<SandParser::TypeNameContext *>(context))
        {
            type = this->visitTypeName(child);
        }
        else if (auto child = dynamic_cast<SandParser::TypeOfTypeContext *>(context))
        {
            type = this->visitTypeOfType(child);
        }
        else if (auto child = dynamic_cast<SandParser::TypeOfExpressionContext *>(context))
        {
            type = this->visitTypeOfExpression(child);
        }

        if (check_opaque && type->is_opaque())
        {
            throw OpaqueTypeNotAllowedException(this->files.top(), context->getStart());
        }

        return type;
    }

    Type *visitTypeArray(SandParser::TypeArrayContext *context)
    {
        auto type = this->visitType(context->type(), false);
        auto expression = this->valueFromExpression(context->expression());

        if (auto constant = dynamic_cast<Values::Constant *>(expression))
        {
            if (constant->type->is_integer())
            {
                auto size = constant->get_ref()->getUniqueInteger().getSExtValue();
                type = Type::array(type, size);
            }
            else
            {
                throw InvalidValueException(this->files.top(), context->expression()->getStart());
            }
        }
        else
        {
            // TODO
            type = Type::pointer(type);
        }

        return type;
    }

    Type *visitTypePointer(SandParser::TypePointerContext *context)
    {
        auto type = this->visitType(context->type(), false);
        type = Type::pointer(type);

        if (context->Const())
        {
            type->is_constant = true;
        }

        return type;
    }

    Type *visitTypeReference(SandParser::TypeReferenceContext *context)
    {
        auto type = this->visitType(context->type(), false);
        type = Type::reference(type);

        if (context->Const())
        {
            type->is_constant = true;
        }

        return type;
    }

    Type *visitTypeName(SandParser::TypeNameContext *context)
    {
        Type *type = nullptr;

        if (auto scoped_name_context = context->scopedName())
        {
            auto scoped_name = this->visitScopedName(scoped_name_context);
            type = this->typeFromName(scoped_name, context);
        }
        else if (auto function_type_context = context->functionType())
        {
            type = this->visitFunctionType(function_type_context);
        }

        if (context->Const())
        {
            type = Type::constant(type);
        }

        return type;
    }

    Type *visitFunctionType(SandParser::FunctionTypeContext *context)
    {
        auto scope = this->scopes.top();

        auto args = this->visitFunctionArguments(context->functionArguments());
        auto is_variadic = (context->functionVariadicArgument() != nullptr);

        Type *return_type = nullptr;

        if (auto type_context = context->type())
        {
            return_type = this->visitType(type_context);
        }
        else
        {
            return_type = Type::voidt(scope->context());
        }

        auto type = Types::FunctionType::create(scope->builder(), scope->module(), "", return_type, args, is_variadic, false);

        return Type::pointer(type);
    }

    Type *visitTypeOfType(SandParser::TypeOfTypeContext *context)
    {
        return this->visitType(context->type());
    }

    Type *visitTypeOfExpression(SandParser::TypeOfExpressionContext *context)
    {
        // TODO: Don't resolve the expression, just the type
        auto name = this->visitExpression(context->expression());

        if (auto array = dynamic_cast<NameArray *>(name))
        {
            while (auto alias = dynamic_cast<Alias *>(array->last()))
            {
                array = alias->names;
            }

            if (array->size() > 1 && !dynamic_cast<Values::Variable *>(array->get(0)))
            {
                throw MultipleInstancesException(this->files.top(), context->getStart());
            }

            name = array->last();
        }

        if (auto value = dynamic_cast<Value *>(name))
        {
            auto type = value->type;

            if (type->is_function() && !type->is_pointer())
            {
                return Type::pointer(type);
            }

            return type;
        }
        else if (auto type = dynamic_cast<Type *>(name))
        {
            return type;
        }

        throw InvalidValueException(this->files.top(), context->getStart());
    }

    Types::ClassType *visitClassTypeName(SandParser::ClassTypeNameContext *context)
    {
        auto name = this->visitScopedName(context->scopedName());
        auto type = this->typeFromName(name, context);

        if (auto class_type = dynamic_cast<Types::ClassType *>(type))
        {
            return class_type;
        }

        throw NotAClassException(this->files.top(), context->getStart());
    }

    std::vector<Name *> visitClassTypeNameGenerics(SandParser::ClassTypeNameGenericsContext *context)
    {
        auto scope = this->scopes.top();

        std::vector<Name *> names;

        if (auto class_generic_context = context->classTypeNameGeneric())
        {
            auto name = this->visitClassTypeNameGeneric(class_generic_context);

            if (auto array = dynamic_cast<NameArray *>(name))
            {
                names.insert(names.end(), array->names.begin(), array->names.end());
            }
            else
            {
                names.push_back(name);
            }
        }
        else
        {
            names.push_back(nullptr);
        }

        for (auto &other_context : context->classTypeNameGenericsOther())
        {
            auto name = this->visitClassTypeNameGenericsOther(other_context);

            if (auto array = dynamic_cast<NameArray *>(name))
            {
                names.insert(names.end(), array->names.begin(), array->names.end());
            }
            else
            {
                names.push_back(name);
            }
        }

        return names;
    }

    Name *visitClassTypeNameGenericsOther(SandParser::ClassTypeNameGenericsOtherContext *context)
    {
        if (auto class_generic_context = context->classTypeNameGeneric())
        {
            return this->visitClassTypeNameGeneric(class_generic_context);
        }

        return nullptr;
    }

    Name *visitClassTypeNameGeneric(SandParser::ClassTypeNameGenericContext *context)
    {
        if (auto type_context = context->type())
        {
            auto type = this->visitType(type_context, false);

            if (auto variadic = dynamic_cast<Types::VariadicType *>(type))
            {
                if (context->Variadic())
                {
                    return new NameArray(variadic->types);
                }
            }

            return type;
        }
        else if (auto expression_context = context->expression())
        {
            auto value = this->valueFromExpression(expression_context);

            if (auto variadic = dynamic_cast<Values::VariadicValue *>(value))
            {
                if (context->Variadic())
                {
                    return new NameArray(variadic->values);
                }
            }

            return value;
        }

        return nullptr;
    }

    Attributes visitAttributes(SandParser::AttributesContext *context)
    {
        Attributes attributes(this->env);

        for (auto &attribute_context : context->attribute())
        {
            auto attribute = this->visitAttribute(attribute_context);
            attributes.set(attribute);
        }

        return attributes;
    }

    std::pair<std::string, std::string> visitAttribute(SandParser::AttributeContext *context)
    {
        auto key = context->VariableName()->getText();

        if (auto literal = context->StringLiteral())
        {
            auto value = this->stringLiteralToString(literal->getText());
            return std::make_pair(key, value);
        }

        return std::make_pair(key, "true");
    }

    void visitAssemblyStatement(SandParser::AssemblyStatementContext *context)
    {
        auto scope = this->scopes.top();

        auto code = this->stringLiteralToString(context->stringLiteral());

        std::vector<AssemblyOperand> outputs = this->visitAssemblyOutputs(context->assemblyOutput());
        std::vector<AssemblyOperand> inputs = this->visitAssemblyInputs(context->assemblyInput());
        std::string clobbers = this->visitAssemblyClobbers(context->assemblyClobber());

        if (!clobbers.empty())
        {
            clobbers += ",";
        }

        std::string operands_clobbers = "";

        std::vector<Value *> output_values;
        std::vector<llvm::Type *> output_types;

        std::vector<Value *> output_args;
        std::vector<Value *> input_args;

        for (auto &output : outputs)
        {
            if (output.type == AssemblyConstraintModifier::ReadWrite)
            {
                auto loaded = output.expression->load(scope->builder());
                output_args.push_back(loaded);

                output.name[0] = '=';
            }

            operands_clobbers += output.name + ",";

            output_types.push_back(output.expression->type->get_ref());
            output_values.push_back(output.expression);
        }

        for (auto &input : inputs)
        {
            auto loaded = input.expression->load(scope->builder());
            input_args.push_back(loaded);
            operands_clobbers += input.name + ",";
        }

        for (size_t i = 0; i < outputs.size(); i++)
        {
            if (outputs[i].type == AssemblyConstraintModifier::ReadWrite)
            {
                operands_clobbers += std::to_string(i) + ",";
            }
        }

        std::vector<Value *> args;
        std::vector<Types::FunctionArgument> function_args;

        for (auto &arg : input_args)
        {
            args.push_back(arg);
            function_args.push_back(Types::FunctionArgument("", arg->type));
        }

        for (auto &arg : output_args)
        {
            args.push_back(arg);
            function_args.push_back(Types::FunctionArgument("", arg->type));
        }

        llvm::Type *return_type = Type::llvm_void(scope->context());

        if (output_types.size() == 1)
        {
            return_type = output_types[0];
        }
        else if (!output_types.empty())
        {
            return_type = llvm::StructType::get(scope->context(), output_types);
        }

        auto type = Types::FunctionType::create(scope->builder(), scope->module(), "inline.asm", new Type(".tmp.class", return_type), function_args, false, false, false);

        auto value = llvm::InlineAsm::get(type->get_ref(), code, operands_clobbers + clobbers + "~{dirflag},~{fpsr},~{flags}", true);
        auto ret = Value("inline.asm", type, value).call(scope->builder(), scope->module(), args);

        if (return_type->isStructTy())
        {
            auto &builder = scope->builder();
            auto ref = ret->get_ref();

            for (size_t i = 0; i < output_values.size(); i++)
            {
                auto value = builder.CreateExtractValue(ref, i, "");
                builder.CreateStore(value, output_values[i]->get_ref());
            }
        }
        else if (!return_type->isVoidTy())
        {
            scope->builder().CreateStore(ret->get_ref(), output_values[0]->get_ref());
        }
    }

    std::vector<AssemblyOperand> visitAssemblyOutputs(const std::vector<SandParser::AssemblyOutputContext *> &context)
    {
        std::vector<AssemblyOperand> operands;

        for (auto &clobber : context)
        {
            auto output = this->visitAssemblyOutput(clobber);
            operands.push_back(output);
        }

        return operands;
    }

    AssemblyOperand visitAssemblyOutput(SandParser::AssemblyOutputContext *context)
    {
        auto name = this->stringLiteralToString(context->StringLiteral()->getText());
        auto value = this->valueFromExpression(context->expression());

        if (!value->is_alloca)
        {
            throw InvalidLeftValueException(this->files.top(), context->expression()->getStart());
        }

        auto operand = this->createAssemblyOperand(name, value);

        if (operand.type == AssemblyConstraintModifier::None)
        {
            throw InvalidInputConstraintException(this->files.top(), context->StringLiteral()->getSymbol());
        }

        return operand;
    }

    std::vector<AssemblyOperand> visitAssemblyInputs(const std::vector<SandParser::AssemblyInputContext *> &context)
    {
        std::vector<AssemblyOperand> operands;

        for (auto &clobber : context)
        {
            auto input = this->visitAssemblyInput(clobber);
            operands.push_back(input);
        }

        return operands;
    }

    AssemblyOperand visitAssemblyInput(SandParser::AssemblyInputContext *context)
    {
        auto name = this->stringLiteralToString(context->StringLiteral()->getText());
        auto value = this->valueFromExpression(context->expression());

        auto operand = this->createAssemblyOperand(name, value);

        return operand;
    }

    AssemblyOperand createAssemblyOperand(const std::string &name, Value *lvalue)
    {
        AssemblyOperand operand(AssemblyConstraintModifier::None, name, lvalue);

        if (name[0] == '=')
        {
            operand.type = AssemblyConstraintModifier::WriteOnly;
        }
        else if (name[0] == '+')
        {
            operand.type = AssemblyConstraintModifier::ReadWrite;
        }

        if (name[1] == '&')
        {
            operand.is_earlyclobber = true;
        }

        return operand;
    }

    std::string visitAssemblyClobbers(const std::vector<SandParser::AssemblyClobberContext *> &context)
    {
        std::string clobbers = "";

        for (auto &clobber : context)
        {
            if (!clobbers.empty())
            {
                clobbers += ",";
            }

            clobbers += this->visitAssemblyClobber(clobber);
        }

        return clobbers;
    }

    std::string visitAssemblyClobber(SandParser::AssemblyClobberContext *context)
    {
        return "~{" + this->stringLiteralToString(context->StringLiteral()->getText()) + "}";
    }

    Name *visitAlias(SandParser::AliasContext *context)
    {
        auto scope = this->scopes.top();

        auto attributes = this->visitAttributes(context->attributes());

        if (!attributes.accept_current_target())
            return nullptr;

        auto name = context->VariableName()->getText();

        if (auto generics_context = context->classGenerics())
        {
            auto generics = this->visitClassGenerics(generics_context);

            auto alias_scope = Scope::create(scope);
            auto alias = new Types::GenericAlias(alias_scope, name, generics, context);

            scope->add_name(name, alias);
            return alias;
        }

        auto alias = this->generateAlias(context);

        scope->add_name(name, alias);
        return alias;
    }

    Alias *generateGenericAlias(Types::GenericAlias *generic, const std::vector<Name *> &generics)
    {
        Position position;

        if (this->scopes.top()->in_function())
        {
            position = Position::save(this->scopes.top()->builder());
        }

        auto scope = Scope::create(generic->scope);
        this->scopes.push(scope);

        for (size_t i = 0; i < generic->generics.size(); i++)
        {
            auto &name = generic->generics[i]->name;
            scope->add_name(name, generics[i]);
        }

        auto alias = this->generateAlias(generic->context);

        this->scopes.pop();

        generic->children.push_back(Types::GenericAliasChild(generics, alias));

        position.load(this->scopes.top()->builder());

        return alias;
    }

    Alias *generateAlias(SandParser::AliasContext *context)
    {
        auto name = context->VariableName()->getText();
        NameArray *names = nullptr;

        if (auto expression_context = context->expression())
        {
            auto expression = this->visitExpression(expression_context);

            if (auto array = dynamic_cast<NameArray *>(expression))
            {
                names = array;
            }
            else
            {
                names = new NameArray({expression});
            }
        }
        else if (auto type_context = context->type())
        {
            auto type = this->visitType(type_context);
            names = new NameArray({type});
        }

        return new Alias(name, names);
    }
};
} // namespace Sand
