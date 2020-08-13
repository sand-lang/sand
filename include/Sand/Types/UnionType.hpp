#pragma once

#include <Sand/Scope.hpp>
#include <Sand/Type.hpp>
#include <Sand/Values/Function.hpp>
#include <Sand/Values/GlobalVariable.hpp>

#include <llvm/IR/IRBuilder.h>

namespace Sand::Types
{
struct UnionProperty
{
    std::string name;
    Type *type;

    UnionProperty(const std::string &name_, Type *type_) : name(name_), type(type_) {}
};

class UnionType : public Type
{
public:
    std::shared_ptr<Scope> static_scope = nullptr;
    std::shared_ptr<Scope> scope = nullptr;

    std::vector<Name *> generics;

    std::vector<UnionProperty *> properties;
    Type *main_type = nullptr;

    bool generated = false;

    UnionType(const std::string &name,
              llvm::StructType *ref,
              std::shared_ptr<Scope> static_scope_,
              const std::vector<Name *> &generics_ = {})
        : Type(name, ref),
          static_scope(static_scope_),
          scope(Scope::create(static_scope_->env)),
          generics(generics_)
    {
    }

    static UnionType *create(std::shared_ptr<Scope> scope, const std::string &name = "", const std::vector<Name *> &generics = {})
    {
        auto ref = llvm::StructType::create(scope->context(), name + ".union");
        return new UnionType(name, ref, scope, generics);
    }

    llvm::StructType *get_ref() const override
    {
        return llvm::cast<llvm::StructType>(this->ref);
    }

    UnionProperty *get_property(const std::string &name)
    {
        for (auto &property : this->properties)
        {
            if (property->name == name)
            {
                return property;
            }
        }

        return nullptr;
    }

    void set_properties(const std::vector<UnionProperty *> &properties, llvm::IRBuilder<> &builder, std::unique_ptr<llvm::Module> &module, const bool &is_packed = false)
    {
        this->properties = properties;

        this->main_type = Type::i8(builder.getContext());

        for (auto &property : properties)
        {
            if (property->type->size(module) > main_type->size(module))
            {
                this->main_type = property->type;
            }
        }

        this->get_ref()->setBody({this->main_type->get_ref()}, is_packed);
    }
};
} // namespace Sand::Types
