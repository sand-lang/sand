#include <grammar/runtime/SanLexer.h>
#include <grammar/runtime/SanParser.h>

#include <san/Debugger.hpp>

using namespace antlr4;

namespace San
{
struct SyntaxError
{
    size_t line;
    size_t column;
};

class ParserErrorListener : public ANTLRErrorListener
{
private:
    San::Debugger &debug;

public:
    size_t errors_count = 0;

    ParserErrorListener(San::Debugger &debug_) : debug(debug_) {}

    void syntaxError(
        Recognizer *recognizer,
        Token *offendingSymbol,
        size_t line,
        size_t charPositionInLine,
        const std::string &msg,
        std::exception_ptr e) override
    {
        auto source = recognizer->getInputStream()->getSourceName();
        debug.out << source << ":" << line << ":" << charPositionInLine << ": " << msg << std::endl;

        errors_count++;
    }

    void reportAmbiguity(
        Parser *recognizer,
        const dfa::DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        bool exact,
        const antlrcpp::BitSet &ambigAlts,
        atn::ATNConfigSet *configs) override
    {
    }

    void reportAttemptingFullContext(
        Parser *recognizer,
        const dfa::DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        const antlrcpp::BitSet &conflictingAlts,
        atn::ATNConfigSet *configs) override
    {
    }

    void reportContextSensitivity(
        Parser *recognizer,
        const dfa::DFA &dfa,
        size_t startIndex,
        size_t stopIndex,
        size_t prediction,
        atn::ATNConfigSet *configs) override
    {
    }
};
} // namespace San
