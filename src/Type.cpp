#include <san/Type.hpp>

#include <san/ClassType.hpp>

#include <iostream>

size_t San::Type::size(std::unique_ptr<llvm::Module> &module) const
{
    if (auto structure = dynamic_cast<const ClassType *>(this))
    {
        return structure->size(module);
    }

    if (auto ptr = llvm::dyn_cast<llvm::PointerType>(this->ref))
    {
        return module->getDataLayout().getPointerSize();
    }

    return this->ref->getScalarSizeInBits() / 8;
}
