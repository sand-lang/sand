#pragma once

#include <string>

namespace Xenon::Helpers
{
bool ends_with(const std::string &str, const std::string &ending)
{
    if (str.length() >= ending.length())
    {
        return str.compare(str.length() - ending.length(), ending.length(), ending) == 0;
    }

    return false;
}

bool starts_with(const std::string &str, const std::string &starting)
{
    if (str.length() >= starting.length())
    {
        return str.rfind(starting, 0) == 0;
    }

    return false;
}
} // namespace Xenon::Helpers
