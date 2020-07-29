#pragma once

#include <Xenon/Scope.hpp>
#include <Xenon/Types/ClassType.hpp>
#include <Xenon/Values/Function.hpp>

#include <memory>
#include <stack>

namespace Xenon
{
struct Box
{
    std::shared_ptr<Scope> scope;

    Box(std::shared_ptr<Scope> &scope_) : scope(scope_) {}

    operator std::shared_ptr<Scope> &()
    {
        return this->scope;
    }
};

class ScopeStack
{
private:
    std::stack<Box> scopes;

public:
    ScopeStack(Environment &env)
    {
        auto scope = Scope::create(env);
        this->scopes.push(scope);
    }

    std::shared_ptr<Scope> &top()
    {
        return this->scopes.top();
    }

    std::shared_ptr<Scope> &create(Values::Function *function = nullptr)
    {
        auto &top = this->top();
        return this->create(top, function);
    }

    std::shared_ptr<Scope> &create(std::shared_ptr<Scope> &parent, Values::Function *function = nullptr)
    {
        auto scope = Scope::create(parent, function);

        this->scopes.push(scope);

        return this->top();
    }

    std::shared_ptr<Scope> &push(std::shared_ptr<Scope> &scope)
    {
        this->scopes.push(scope);
        return scope;
    }

    void pop()
    {
        this->call_destructors(this->top());
        this->scopes.pop();
    }

    void pop_no_destruct()
    {
        this->scopes.pop();
    }

    void call_destructors(std::shared_ptr<Scope> &scope)
    {
        for (auto &[_, name] : scope->names)
        {
            if (auto variable = dynamic_cast<Value *>(name))
            {
                if (auto class_type = dynamic_cast<Types::ClassType *>(Type::get_origin(variable->type)))
                {
                    if (class_type->is_pointer() || class_type->is_array())
                    {
                        continue;
                    }

                    auto destructors = class_type->get_names("@destructor", variable, scope->builder(), scope->module());

                    for (auto &name : destructors->names)
                    {
                        if (auto destructor = dynamic_cast<Values::Function *>(name))
                        {
                            destructor->calling_variable = variable;
                            destructor->call(scope->builder(), scope->module());
                        }
                    }
                }
            }
        }
    }
};
} // namespace Xenon
