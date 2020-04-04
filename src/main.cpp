#include <filesystem>
#include <iostream>

#include <Lexer.h>
#include <Parser.h>

#include <san/Compiler.hpp>
#include <san/Debugger.hpp>

#include "grammar/runtime/SanLexer.h"
#include "grammar/runtime/SanParser.h"

#include "grammar/Visitor.hpp"

using namespace antlr4;

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

int main(int argc, char **argv)
{
    San::Debugger debug;

    std::string pwd = std::filesystem::current_path().string();
    std::string path = argc > 1 ? argv[1] : "test.sn";

    std::ifstream stream;
    stream.open(pwd + '/' + path);

    ANTLRInputStream *input = new ANTLRInputStream(stream);
    SanLexer lexer(input);
    CommonTokenStream tokens(&lexer);
    SanParser parser(&tokens);
    parser.removeErrorListeners();

    auto error_listener = new ParserErrorListener(debug);
    parser.addErrorListener(error_listener);

    debug.start_timer("bytecode");

    SanParser::InstructionsContext *tree = parser.instructions();

    if (error_listener->errors_count > 0)
    {
        return 1;
    }

    San::Visitor visitor;
    antlrcpp::Any program = visitor.visitInstructions(tree);

    auto elapsed_bytecode = debug.end_timer("bytecode");

    std::string bytecode = "";
    llvm::raw_string_ostream out_stream(bytecode);
    out_stream << *visitor.env.module;
    out_stream.flush();

    debug.out << out_stream.str() << std::endl;

    debug.start_timer("objects");

    San::Compiler compiler(visitor.env.module);
    auto objects = compiler.generate_objects();

    auto elapsed_objects = debug.end_timer("objects");

    for (const auto &object : objects)
        debug.out << object << std::endl;

    std::string objects_str(" ");
    for (const auto &object : objects)
    {
        objects_str += object + " ";
    }

    debug.start_timer("linking");

    std::system(("/usr/bin/ld " + objects_str + "-lSystem -o output").c_str());

    auto elapsed_linking = debug.end_timer("linking");

    debug.out << "Finished generating IR in " << elapsed_bytecode.count() << " secs" << std::endl;
    debug.out << "Finished generating object files in " << elapsed_objects.count() << " secs" << std::endl;
    debug.out << "Finished linking in " << elapsed_linking.count() << " secs" << std::endl;

    return 0;
}
