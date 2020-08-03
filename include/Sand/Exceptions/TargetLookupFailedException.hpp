#pragma once

#include <exception>
#include <string>

namespace Sand
{
class TargetLookupFailedException : public std::exception
{
private:
    std::string target;
    std::string error;

public:
    TargetLookupFailedException(const std::string &target_, const std::string &error_) : target(target_), error(error_) {}

    const char *what() const noexcept
    {
        return this->error.c_str();
    }
};
} // namespace Sand
