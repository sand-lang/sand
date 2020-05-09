#pragma once

#include <san/Name.hpp>
#include <san/Type.hpp>
#include <san/Values/Function.hpp>
#include <san/Values/Variable.hpp>

namespace San
{
class NameArray : public Name
{
public:
    std::vector<Name *> names;

    NameArray(const std::vector<Name *> &names_ = {}) : Name("name_array"), names(names_) {}

    void merge(const NameArray *array)
    {
        this->names.insert(this->names.begin(), array->names.begin(), array->names.end());
    }

    bool empty() const noexcept
    {
        return this->names.empty();
    }

    size_t size() const noexcept
    {
        return this->names.size();
    }

    Name *&get(const size_t &index) noexcept
    {
        return this->names[index];
    }

    Name *&last() noexcept
    {
        return this->get(this->size() - 1);
    }

    Values::Variable *get_variable()
    {
        if (!this->names.empty())
        {
            if (auto variable = dynamic_cast<Values::Variable *>(this->names[0]))
            {
                return variable;
            }
        }

        return nullptr;
    }

    Values::Function *get_function(std::vector<Type *> generics, std::vector<Type *> args)
    {
        for (auto &name : this->names)
        {
            if (auto function = dynamic_cast<Values::Function *>(name))
            {
                auto function_type = function->get_type();
                auto &function_args = function_type->args;

                if (function_args.size() < args.size())
                {
                    continue;
                }

                if (function_args.size() > args.size() && function_args[args.size()].default_value == nullptr)
                {
                    continue;
                }

                auto found = true;
                for (size_t i = 0; i < function_args.size(); i++)
                {
                    if (!function_args[i].type->equals(args[i]))
                    {
                        found = false;
                        break;
                    }
                }

                if (found)
                {
                    return function;
                }
            }
        }

        return nullptr;
    }
};
} // namespace San
