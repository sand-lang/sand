#pragma once

#include <san/Exceptions/CompilationException.hpp>

#include <san/Value.hpp>

namespace San
{
class NoFunctionMatchException : public CompilationException
{
public:
    NoFunctionMatchException(antlr4::Token *expression, const std::vector<Value *> &args) : CompilationException("No function from expression '" + expression->getText() + "' matches the given arguments: " + std::to_string(args.size()), expression) {}
};
} // namespace San