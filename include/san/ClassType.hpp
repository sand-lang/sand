#pragma once

#include <grammar/runtime/SanParser.h>
#include <san/Type.hpp>

#include <llvm/IR/IRBuilder.h>

#include <functional>
#include <vector>

namespace San
{
class ClassType : public Type
{
public:
    std::vector<ClassType *> parents;

    bool is_base = false;
    std::vector<std::pair<std::string, Type *>> generics;
    SanParser::ClassStatementContext *context = nullptr;

    std::vector<std::pair<std::string, Type *>> properties;

    ClassType(llvm::Type *ref_,
              const std::vector<ClassType *> &parents_ = {},
              const std::vector<std::pair<std::string, Type *>> &generics_ = {},
              const std::vector<std::pair<std::string, Type *>> &properties_ = {}) : Type(ref_, {}, true),
                                                                                     parents(parents_),
                                                                                     generics(generics_),
                                                                                     properties(properties_) {}

    ClassType(const std::vector<std::string> &generics,
              SanParser::ClassStatementContext *context_) : Type(nullptr, {}, true),
                                                            context(context_),
                                                            is_base(true)
    {
        for (const auto &name : generics)
        {
            this->generics.push_back(std::pair(name, nullptr));
        }
    }

    size_t size() const;

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
