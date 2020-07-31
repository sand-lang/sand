#pragma once

#include <Sand/Name.hpp>
#include <Sand/NameArray.hpp>

namespace Sand
{
class Alias : public Name
{
public:
    // It's a NameArray
    NameArray *names;

    Alias(const std::string &name, NameArray *names_) : Name(name), names(names_) {}
};
} // namespace Sand
