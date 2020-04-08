#include <san/Type.hpp>

#include <san/ClassType.hpp>

#include <iostream>

size_t San::Type::size() const
{
    if (auto structure = dynamic_cast<const ClassType *>(this))
    {
        return structure->size();
    }

    return this->ref->getScalarSizeInBits() / 8;
}
