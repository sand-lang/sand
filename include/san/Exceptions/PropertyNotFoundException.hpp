#pragma once

#include <san/Exceptions/CompilationException.hpp>

#include <san/Types/ClassType.hpp>

namespace San
{
class PropertyNotFoundException : public CompilationException
{
public:
    PropertyNotFoundException(antlr4::Token *token, Types::ClassType *class_type) : CompilationException("Property '" + token->getText() + "' not found in class '" + class_type->name + "'", token) {}
};
} // namespace San