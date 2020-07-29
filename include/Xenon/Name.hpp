#pragma once

#include <string>

namespace Xenon
{
class Name
{
public:
    std::string name;

    Name(const std::string &name_) : name(name_) {}

    virtual ~Name() = default;
};
} // namespace Xenon
