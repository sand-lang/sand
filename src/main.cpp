#include <filesystem>
#include <iostream>

#include <Lexer.h>
#include <Parser.h>

#include <san/Compiler.hpp>
#include <san/Debugger.hpp>
#include <san/Linker.hpp>

#include <san/Exceptions/CompilationException.hpp>

#include "grammar/runtime/SanLexer.h"
#include "grammar/runtime/SanParser.h"

#include "grammar/Visitor.hpp"

#include <CLI/CLI.hpp>

#include <llvm/Passes/PassBuilder.h>

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

void print_bytecode(std::unique_ptr<llvm::Module> &module, San::Debugger &debug)
{
    std::string bytecode = "";
    llvm::raw_string_ostream out_stream(bytecode);
    out_stream << *module;
    out_stream.flush();

    debug.out << out_stream.str() << std::endl;
}

bool compile(const std::string &entry_file, const std::string &output_file, const char &optimization_level, const bool &print_llvm, const bool &timer, San::Debugger &debug)
{
    std::ifstream stream;
    stream.open(entry_file);

    ANTLRInputStream *input = new ANTLRInputStream(stream);
    SanLexer lexer(input);
    CommonTokenStream tokens(&lexer);
    SanParser parser(&tokens);
    parser.removeErrorListeners();

    auto error_listener = new ParserErrorListener(debug);
    parser.addErrorListener(error_listener);

    SanParser::InstructionsContext *context = parser.instructions();

    if (context == nullptr)
    {
        return false;
    }

    San::Visitor visitor;

    debug.start_timer("bytecode");

    try
    {
        visitor.visitInstructions(context);
    }
    catch (San::CompilationException &e)
    {
        debug.err << e.what() << std::endl;
        return false;
    }

    auto elapsed_bytecode = debug.end_timer("bytecode");

    if (print_llvm && optimization_level == 'd')
    {
        print_bytecode(visitor.env.module, debug);
    }

    auto llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::O0;

    switch (optimization_level)
    {
    case '1':
        llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::O1;
    case '2':
        llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::O2;
    case '3':
        llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::O3;
    case 's':
        llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::Os;
    case 'z':
        llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::Oz;
    }

    debug.start_timer("objects");

    San::Compiler compiler(visitor.env.module);
    auto objects = compiler.generate_objects(llvm_optimization_level);

    auto elapsed_objects = debug.end_timer("objects");

    // for (const auto &object : objects)
    //     debug.out << object << std::endl;

    debug.start_timer("linking");

    San::Linker linker;
    linker.prepare(objects, output_file);
    linker.execute();

    auto elapsed_linking = debug.end_timer("linking");

    if (print_llvm && optimization_level != 'd')
    {
        print_bytecode(visitor.env.module, debug);
    }

    if (timer)
    {
        debug.out << "Finished generating IR in " << elapsed_bytecode.count() << " secs" << std::endl;
        debug.out << "Finished generating object files in " << elapsed_objects.count() << " secs" << std::endl;
        debug.out << "Finished linking in " << elapsed_linking.count() << " secs" << std::endl;
    }

    return true;
}

int main(int argc, char **argv)
{
    San::Debugger debug;

    CLI::App app{"App description"};

    {
        struct
        {
            std::string entry_file;
            std::string output_file = "out";

            std::string optimization_level = "0";

            bool print_llvm = false;
            bool timer = false;
        } options;

        CLI::App *run = app.add_subcommand("build", "Build sources");
        run->add_option("ENTRY", options.entry_file, "Entry file")->required()->check(CLI::ExistingFile);

        run->add_option("-O", options.optimization_level, "Optimization level");
        run->add_option("-o,--output", options.output_file, "The output file");

        run->add_flag("--print-llvm", options.print_llvm, "Print generated LLVM bytecode");
        run->add_flag("--timer", options.timer, "Output the elapsed build time");

        run->callback([&]() {
            if (!compile(options.entry_file, options.output_file, options.optimization_level[0], options.print_llvm, options.timer, debug))
            {
                exit(1);
            }
        });
    }

    {
        struct
        {
            std::string entry_file;

            std::string optimization_level = "0";
        } options;

        CLI::App *run = app.add_subcommand("run", "Run sources");
        run->add_option("ENTRY", options.entry_file, "Entry file")->required()->check(CLI::ExistingFile);

        run->add_option("-O", options.optimization_level, "Optimization level");

        std::string output_file = std::tmpnam(nullptr);

        run->callback([&]() {
            if (!compile(options.entry_file, output_file, options.optimization_level[0], false, false, debug))
            {
                exit(1);
            }
            else
            {
                std::system((output_file).c_str());
            }
        });
    }

    CLI11_PARSE(app, argc, argv);

    return 0;
}
