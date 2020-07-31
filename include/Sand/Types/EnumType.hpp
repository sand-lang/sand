#pragma once

#include <Sand/Scope.hpp>
#include <Sand/Type.hpp>
#include <Sand/Values/Constant.hpp>

#include <unordered_map>

namespace Sand::Types
{
struct EnumValue
{
    std::string name;
    Values::Constant *value;

    EnumValue(const std::string &name_, Values::Constant *value_) : name(name_), value(value_) {}
};

class EnumType : public Type
{
public:
    std::shared_ptr<Scope> static_scope = nullptr;
    std::vector<EnumValue> values;

    EnumType(const std::string &name, const std::shared_ptr<Scope> &static_scope_, llvm::Type *ref) : Type(name, ref), static_scope(static_scope_) {}

    Values::Constant *get_value(const std::string &name)
    {
        for (auto &pair : this->values)
        {
            if (pair.name == name)
            {
                return pair.value;
            }
        }

        return nullptr;
    }

    void add_value(const EnumValue &pair)
    {
        this->values.push_back(pair);
    }
};
} // namespace Sand::Types
