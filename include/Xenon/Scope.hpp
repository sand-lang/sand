#pragma once

#include <Xenon/Environment.hpp>
#include <Xenon/Loop.hpp>
#include <Xenon/Name.hpp>
#include <Xenon/NameArray.hpp>
#include <Xenon/Type.hpp>
#include <Xenon/Value.hpp>
#include <Xenon/Values/Function.hpp>

#include <map>

namespace Xenon
{
class Scope
{
public:
    Environment &env;

    std::shared_ptr<Scope> parent = nullptr;

    Values::Function *function = nullptr;
    Loop *loop = nullptr;

    std::multimap<std::string, Name *> names;

    Scope(Environment &env_) : env(env_) {}
    Scope(std::shared_ptr<Scope> &parent_, Values::Function *function_ = nullptr) : env(parent_->env), parent(parent_), function(function_) {}

    static std::shared_ptr<Scope> from(Environment &env, const std::vector<std::shared_ptr<Scope>> &scopes)
    {
        auto scope = Scope::create(env);

        for (const auto &parent : scopes)
        {
            scope->names.insert(parent->names.begin(), parent->names.end());
        }

        return scope;
    }

    static std::shared_ptr<Scope> create(Environment &env)
    {
        return std::make_shared<Scope>(env);
    }

    static std::shared_ptr<Scope> create(std::shared_ptr<Scope> parent = nullptr, Values::Function *function = nullptr)
    {
        return std::make_shared<Scope>(parent, function);
    }

    llvm::IRBuilder<> &builder()
    {
        return this->env.builder;
    }

    llvm::LLVMContext &context()
    {
        return this->env.llvm_context;
    }

    std::unique_ptr<llvm::Module> &module()
    {
        return this->env.module;
    }

    void set_loop(Loop *loop)
    {
        this->loop = loop;
    }

    bool in_loop() const
    {
        if (this->loop != nullptr)
        {
            return true;
        }

        if (this->parent != nullptr)
        {
            return this->parent->in_loop();
        }

        return false;
    }

    Loop *get_loop()
    {
        if (this->loop != nullptr)
        {
            return this->loop;
        }

        if (this->parent != nullptr)
        {
            return this->parent->get_loop();
        }

        return nullptr;
    }

    bool in_function() const
    {
        if (this->function != nullptr)
        {
            return true;
        }

        if (this->parent != nullptr)
        {
            return this->parent->in_function();
        }

        return false;
    }

    Values::Function *get_function()
    {
        if (this->function != nullptr)
        {
            return this->function;
        }

        if (this->parent != nullptr)
        {
            return this->parent->get_function();
        }

        return nullptr;
    }

    void add_name(const std::string &name, Name *value, const bool &must_be_unique = false)
    {
        this->names.insert(std::make_pair(name, value));
    }

    NameArray *get_names(const std::string &name)
    {
        if (auto type = this->get_primary_type(name))
        {
            return new NameArray({type});
        }

        auto [start, end] = this->names.equal_range(name);

        std::vector<Name *> names;
        std::transform(start, end, std::back_inserter(names), [](std::pair<std::string, Name *> element) {
            return element.second;
        });

        auto array = new NameArray(names);

        if (this->parent != nullptr)
        {
            auto parent_names = this->parent->get_names(name);
            array->merge(parent_names);
        }

        return array;
    }

    Type *get_primary_type(const std::string &name)
    {
        auto &context = this->env.llvm_context;

        if (name == "void")
        {
            return Type::voidt(context);
        }
        else if (name == "bool" || name == "i1")
        {
            return Type::i1(context);
        }
        else if (name == "i8" || name == "u8")
        {
            return Type::i8(context, name == "u8");
        }
        else if (name == "i16" || name == "u16")
        {
            return Type::i16(context, name == "i16");
        }
        else if (name == "i32" || name == "u32")
        {
            return Type::i32(context, name == "i32");
        }
        else if (name == "i64" || name == "u64")
        {
            return Type::i64(context, name == "i64");
        }
        else if (name == "f32")
        {
            return Type::f32(context);
        }
        else if (name == "f64")
        {
            return Type::f64(context);
        }

        return nullptr;
    }
};
} // namespace Xenon
