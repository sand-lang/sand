#include <san/ClassType.hpp>

#include <san/Type.hpp>

#include <iostream>

size_t San::ClassType::size(std::unique_ptr<llvm::Module> &module) const
{
    size_t size = 0;

    for (const auto &parent : this->parents)
    {
        size += parent->size(module);
    }

    for (const auto &[name, type] : this->properties)
    {
        size += type->size(module);
    }

    return size;
}
