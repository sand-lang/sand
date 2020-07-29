#pragma once

#include <Xenon/Name.hpp>
#include <Xenon/NameArray.hpp>

namespace Xenon
{
class Alias : public Name
{
public:
    // It's a NameArray
    NameArray *names;

    Alias(const std::string &name, NameArray *names_) : Name(name), names(names_) {}
};
} // namespace Xenon
