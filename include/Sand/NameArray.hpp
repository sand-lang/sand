#pragma once

#include <Sand/Name.hpp>
#include <Sand/Type.hpp>
#include <Sand/Values/Function.hpp>
#include <Sand/Values/Variable.hpp>

#include <algorithm>

namespace Sand
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

    Name *get_function(const std::vector<Value *> &args, Type *return_type = nullptr)
    {
        std::vector<Type *> args_types;

        for (auto &arg : args)
        {
            auto type = arg->type;

            if (arg->is_alloca && !arg->is_temporary)
            {
                type = Type::reference(type);
            }

            args_types.push_back(type);
        }

        return this->get_function({}, args_types, return_type);
    }

    /** Return a pointer of Value or FunctionType */
    Name *get_function(const std::vector<Type *> &generics, const std::vector<Type *> &args, Type *return_type = nullptr)
    {
        size_t score = Type::NOT_COMPATIBLE;
        Name *best = nullptr;

        for (auto it = this->names.rbegin(); it != this->names.rend(); it++)
        {
            auto name = *it;

            if (auto value = dynamic_cast<Value *>(name))
            {
                auto value_type =Type::behind_reference( value->type);

                if (value_type->is_pointer() && value_type->base->is_function())
                {
                    value_type = value_type->base;
                }

                if (auto type = dynamic_cast<Types::FunctionType *>(value_type))
                {
                    auto compatibility = type->compare_args(args);

                    if (return_type)
                    {
                        if (type->return_type->is_reference && !return_type->is_reference)
                        {
                            return_type = Type::reference(return_type);
                        }

                        auto return_type_compatiblity = Type::compatibility(return_type, type->return_type);

                        if (return_type_compatiblity == Type::NOT_COMPATIBLE)
                        {
                            compatibility = Type::NOT_COMPATIBLE;
                        }
                        else
                        {
                            compatibility += return_type_compatiblity;
                        }
                    }

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
} // namespace Sand
