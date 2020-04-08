#include <san/ClassType.hpp>

#include <san/Type.hpp>

#include <iostream>

size_t San::ClassType::size() const
{
    size_t size = 0;

    for (const auto &[name, type] : this->properties)
    {
        size += type->size();
    }

    return size;
}
