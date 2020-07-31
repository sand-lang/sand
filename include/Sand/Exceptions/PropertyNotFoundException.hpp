#pragma once

#include <Sand/Exceptions/CompilationException.hpp>

#include <Sand/Types/ClassType.hpp>

namespace Sand
{
class PropertyNotFoundException : public CompilationException
{
public:
    PropertyNotFoundException(const fs::path &source, antlr4::Token *token, Types::ClassType *class_type) : CompilationException(source, "Property '" + token->getText() + "' not found in class '" + class_type->name + "'", token) {}
};
} // namespace Sand