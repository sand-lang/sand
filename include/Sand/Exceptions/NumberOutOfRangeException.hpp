#pragma once

#include <Sand/Exceptions/CompilationException.hpp>
#include <Sand/Type.hpp>

namespace Sand
{
class NumberOutOfRangeException : public CompilationException
{
public:
    NumberOutOfRangeException(const fs::path &source, antlr4::Token *token, const std::string &number) : CompilationException(source, "Number out of range: '" + number + "'.", token) {}
    NumberOutOfRangeException(const fs::path &source, antlr4::Token *token, const std::string &number, const std::string &type) : CompilationException(source, "Number out of range for type '" + type + "': '" + number + "'.", token) {}
};
} // namespace Sand
