#pragma once

#include <san/Name.hpp>
#include <san/Type.hpp>
#include <san/Values/Function.hpp>
#include <san/Values/Variable.hpp>

#include <algorithm>

namespace San
{
class NameArray : public Name
{
public:
    std::vector<Name *> names;

    NameArray(const std::vector<Name *> &names_ = {}) : Name("name_array"), names(names_) {}

    inline auto vector() -> decltype(this->names) &
    {
        return this->names;
    }

    void add(Name *name)
    {
        this->names.push_back(name);
    }

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

    Name *get_function(const std::vector<Value *> &args)
    {
        std::vector<Type *> args_types;

        for (auto &arg : args)
        {
            args_types.push_back(arg->type);
        }

        return this->get_function({}, args_types);
    }

    /** Return a pointer of Value or FunctionType */
    Name *get_function(const std::vector<Type *> &generics, const std::vector<Type *> &args)
    {
        size_t score = Type::NOT_COMPATIBLE;
        Name *best = nullptr;

        for (auto it = this->names.rbegin(); it != this->names.rend(); it++)
        {
            auto name = *it;

            if (auto value = dynamic_cast<Value *>(name))
            {
                if (auto type = dynamic_cast<Types::FunctionType *>(value->type->behind_reference()))
                {
                    auto compatibility = type->compare_args(args);

                    if (compatibility == 0)
                    {
                        return value;
                    }
                    else if (compatibility < score)
                    {
                        score = compatibility;
                        best = value;
                    }
                }
            }
            // else if (auto value = dynamic_cast<Types::GenericFunctionType *>(name))
            // {
            // }
        }

        return best;
    }

    NameArray *get_generic_classes();
};
} // namespace San
