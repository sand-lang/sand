#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class FileNotFoundException : public std::exception
{
    using std::exception::exception;
};

class ImportException : public CompilationException
{
public:
    ImportException(antlr4::Token *token) : ImportException(token, token->getText()) {}
    ImportException(antlr4::Token *token, const std::string &text) : CompilationException("Import failed: " + text, token) {}
};
} // namespace San
