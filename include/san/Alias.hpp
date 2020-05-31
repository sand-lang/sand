#pragma once

#include <san/Name.hpp>
#include <san/NameArray.hpp>

namespace San
{
class Alias : public Name
{
public:
    // It's a NameArray
    NameArray *names;

    Alias(const std::string &name, NameArray *names_) : Name(name), names(names_) {}
};
} // namespace San
