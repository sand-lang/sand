#pragma once

#include <san/Exceptions/CompilationException.hpp>

#include <san/Value.hpp>

namespace San
{
class NoFunctionMatchException : public CompilationException
{
public:
    NoFunctionMatchException(const fs::path &source, antlr4::Token *expression, const std::vector<Value *> &args) : CompilationException(source, "No function from expression '" + expression->getText() + "' matches the given arguments: " + std::to_string(args.size()), expression) {}
};
} // namespace San