#pragma once

#include <Xenon/Scope.hpp>
#include <Xenon/Type.hpp>
#include <Xenon/Values/Function.hpp>
#include <Xenon/Values/GlobalVariable.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Xenon::Types
{
struct ClassProperty
{
    std::string name;
    Type *type;
    Values::Constant *default_value;

    ClassProperty(const std::string &name_, Type *type_, Values::Constant *default_value_ = nullptr) : name(name_), type(type_), default_value(default_value_) {}
};

struct ClassPropertyIndex
{
    ClassProperty *property;
    // It's a ClassType*
    Type *from;
    size_t index;
    size_t padding;

    ClassPropertyIndex(ClassProperty *property_, Type *from_, const size_t &index_, const size_t &padding_) : property(property_), from(from_), index(index_), padding(padding_) {}
};

class ClassType : public Type
{
public:
    std::shared_ptr<Scope> static_scope = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<Type *> generics;

    std::vector<ClassType *> parents;
    std::vector<ClassProperty *> properties;

    std::vector<XenonParser::ClassMethodContext *> pending_methods;
    bool generated = false;

    ClassType(const std::string &name,
              llvm::StructType *ref,
              std::shared_ptr<Scope> static_scope_,
              const std::vector<Type *> &generics_ = {})
        : Type(name, ref),
          static_scope(static_scope_),
          scope(Scope::create(static_scope_->env)),
          generics(generics_)
    {
    }

    llvm::StructType *get_ref() const override
    {
        return llvm::cast<llvm::StructType>(this->ref);
    }

    NameArray *get_names(const std::string &name, Value *value, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module)
    {
        if (auto property_index = this->get_property(name, module))
        {
            auto casted = value->struct_cast(property_index->from, property_index->padding, builder);
            auto property = casted->struct_gep(property_index->property->name, property_index->property->type, property_index->index, builder);

            return new NameArray({property});
        }

        auto names = this->scope->get_names(name);

        for (auto &parent : this->parents)
        {
            auto parent_names = parent->get_names(name, value, builder, module);
            names->merge(parent_names);
        }

        return names;
    }

    std::shared_ptr<Scope> get_static_scope()
    {
        std::vector<std::shared_ptr<Scope>> scopes;

        for (auto &parent : this->parents)
        {
            scopes.push_back(parent->static_scope);
        }

        scopes.push_back(this->static_scope);

        return Scope::from(this->static_scope->env, scopes);
    }

    static ClassType *create(std::shared_ptr<Scope> scope, const std::string &name = "", const std::vector<Type *> &generics = {})
    {
        auto ref = llvm::StructType::create(scope->context(), name + ".class");
        return new ClassType(name, ref, scope, generics);
    }

    llvm::StructType *get_ref()
    {
        return llvm::cast<llvm::StructType>(this->ref);
    }

    ClassPropertyIndex *get_property(const std::string &name, std::unique_ptr<llvm::Module> &module)
    {
        for (size_t i = 0; i < this->properties.size(); i++)
        {
            auto property = this->properties[i];

            if (property->name == name)
            {
                return new ClassPropertyIndex(property, this, i + this->parents.size(), this->parents_size(module));
            }
        }

        size_t padding = 0;

        for (const auto &parent : this->parents)
        {
            if (auto property = parent->get_property(name, module))
            {
                property->padding += padding;
                return property;
            }

            padding += parent->size(module);
        }

        return nullptr;
    }

    std::vector<ClassPropertyIndex *> get_all_properties(std::unique_ptr<llvm::Module> &module)
    {
        std::vector<ClassPropertyIndex *> properties;

        for (size_t i = 0; i < this->properties.size(); i++)
        {
            auto property = this->properties[i];

            auto info = new ClassPropertyIndex(property, this, i + this->parents.size(), this->parents_size(module));
            properties.push_back(info);
        }

        size_t padding = 0;

        for (auto &parent : this->parents)
        {
            auto parent_properties = parent->get_all_properties(module);

            for (auto &property : parent_properties)
            {
                property->padding += padding;
            }

            properties.insert(properties.end(), parent_properties.begin(), parent_properties.end());

            padding += parent->size(module);
        }

        return properties;
    }

    size_t parents_size(std::unique_ptr<llvm::Module> &module)
    {
        size_t size = 0;

        for (const auto &parent : this->parents)
        {
            size += parent->size(module);
        }

        return size;
    }
};
} // namespace Xenon::Types
