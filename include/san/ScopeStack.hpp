#pragma once

#include <san/Scope.hpp>
#include <san/Values/Function.hpp>

#include <memory>
#include <stack>

namespace San
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
        this->scopes.pop();
    }
};
} // namespace San