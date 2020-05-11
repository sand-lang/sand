#pragma once

#include <san/Scope.hpp>
#include <san/Type.hpp>
#include <san/Values/Function.hpp>
#include <san/Values/GlobalVariable.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San::Types
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
    Scope *static_scope = nullptr;
    Scope *scope = nullptr;

    std::vector<Type *> generics;

    std::vector<ClassType *> parents;
    std::vector<ClassProperty *> properties;

    std::vector<SanParser::ClassMethodContext *> pending_methods;

    ClassType(const std::string &name,
              llvm::StructType *ref,
              Scope *static_scope_,
              const std::vector<Type *> &generics_ = {})
        : Type(name, ref),
          static_scope(static_scope_),
          scope(new Scope(static_scope_->env)),
          generics(generics_)
    {
    }

    size_t size(std::unique_ptr<llvm::Module> &module) override
    {
        size_t size = 0;

        auto base = this->get_base();

        if (base != this)
        {
            return base->size(module);
        }

        for (const auto &parent : this->parents)
        {
            size += parent->size(module);
        }

        for (const auto &property : this->properties)
        {
            size += property->type->size(module);
        }

        return size;
    }

    NameArray *get_names(const std::string &name, Value *value, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module)
    {
        if (auto property_index = this->get_property(name, module))
        {
            auto casted = value->struct_cast(property_index->from, property_index->padding, builder);
            auto property = casted->struct_gep(property_index->property->name, property_index->property->type, property_index->index, builder);

            return new NameArray({property});
        }

        return this->scope->get_names(name);
    }

    static ClassType *create(Scope *scope, const std::string &name = "", const std::vector<Type *> &generics = {})
    {
        auto ref = llvm::StructType::create(scope->context(), name + ".class");
        return new ClassType(name, ref, scope, generics);
    }

    llvm::StructType *get_ref() override
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
} // namespace San::Types