#pragma once

#include <grammar/runtime/SanParser.h>

#include <san/Scope.hpp>
#include <san/Type.hpp>
#include <san/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

#include <functional>
#include <unordered_map>
#include <vector>

namespace San
{
class ClassType : public Type
{
public:
    std::vector<ClassType *> parents;
    std::shared_ptr<Scope> &scope;

    bool is_base = false;
    std::vector<std::pair<std::string, Type *>> generics;
    std::vector<ClassType *> generated_generics;

    SanParser::ClassStatementContext *context = nullptr;

    std::vector<std::pair<std::string, Type *>> properties;
    std::unordered_map<std::string, Variable *> methods;

    std::unordered_map<std::string, Variable *> static_properties;
    std::unordered_map<std::string, Variable *> static_methods;

    std::vector<SanParser::ClassMethodContext *> pending_methods;

    ClassType(llvm::Type *ref_,
              std::shared_ptr<Scope> &scope_,
              const std::vector<ClassType *> &parents_ = {},
              const std::vector<std::pair<std::string, Type *>> &generics_ = {},
              const std::vector<std::pair<std::string, Type *>> &properties_ = {},
              const std::unordered_map<std::string, Variable *> &static_properties_ = {}) : Type(ref_),
                                                                                            scope(scope_),
                                                                                            parents(parents_),
                                                                                            generics(generics_),
                                                                                            properties(properties_),
                                                                                            static_properties(static_properties_) {}

    ClassType(const std::vector<std::string> &generics,
              std::shared_ptr<Scope> &scope_,
              SanParser::ClassStatementContext *context_) : Type(nullptr),
                                                            scope(scope_),
                                                            context(context_),
                                                            is_base(true)
    {
        for (const auto &name : generics)
        {
            this->generics.push_back(std::pair(name, nullptr));
        }
    }

    size_t size() const;

    ClassType *pointer()
    {
        auto llvm_type = reinterpret_cast<llvm::Type *>(this->ref->getPointerTo());

        auto type = new ClassType(llvm_type, this->scope);
        type->qualifiers = this->qualifiers;
        type->base = this;

        return type;
    }

    ClassType *get_generated(const std::vector<Type *> &generics) const
    {
        for (auto &generated : this->generated_generics)
        {
            bool same = true;

            for (size_t i = 0; i < generated->generics.size(); i++)
            {
                auto &[name, type] = generated->generics[i];

                if (!generics[i]->equals(type))
                {
                    same = false;
                    break;
                }
            }

            if (same)
            {
                return generated;
            }
        }

        return nullptr;
    }

    inline bool is_generic() const noexcept
    {
        return !this->generics.empty();
    }

    void add_property(const std::string &name, Type *type)
    {
        this->properties.push_back(std::pair(name, type));
    }

    struct PropertyData
    {
        size_t index;
        Type *type;

        ClassType *from = nullptr;
        size_t padding = 0;
    };

    PropertyData *get_property(const std::string &name)
    {
        for (size_t i = 0; i < this->properties.size(); i++)
        {
            auto &property = properties[i];

            if (property.first == name)
            {
                return new PropertyData{
                    .index = i,
                    .type = property.second,
                    .from = this,
                    .padding = this->parents_size(),
                };
            }
        }

        size_t padding = 0;

        for (const auto &parent : this->parents)
        {
            if (auto property = parent->get_property(name))
            {
                property->padding += padding;
                return property;
            }

            padding += parent->size();
        }

        return nullptr;
    }

    Variable *get_method(const std::string &name)
    {
        auto function = this->methods.find(name);
        if (function != this->methods.end())
        {
            return function->second;
        }

        for (const auto &parent : this->parents)
        {
            if (auto method = parent->get_method(name))
            {
                return method;
            }
        }

        return nullptr;
    }

    llvm::StructType *get_struct()
    {
        return reinterpret_cast<llvm::StructType *>(this->ref);
    }

private:
    size_t parents_size() const
    {
        size_t size = 0;

        for (const auto &parent : this->parents)
        {
            size += parent->size();
        }

        return size;
    }
};
} // namespace San
