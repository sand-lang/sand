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

struct Options
{
    std::string entry_file;
    std::string output_file = "out";
    std::vector<std::string> include_paths;

    std::vector<std::string> libraries;
    std::string args;

    std::string optimization_level = "0";

    bool print_llvm = false;
    bool timer = false;
};

void print_bytecode(std::unique_ptr<llvm::Module> &module, San::Debugger &debug)
{
    std::string bytecode = "";
    llvm::raw_string_ostream out_stream(bytecode);
    out_stream << *module;
    out_stream.flush();

    debug.out << out_stream.str() << std::endl;
}

bool compile(const Options &options, San::Debugger &debug)
{
    San::Visitor visitor(options.include_paths);

    debug.start_timer("bytecode");

    try
    {
        visitor.from_file(options.entry_file);
    }
    catch (San::CompilationException &e)
    {
        debug.err << e.what() << std::endl;
        return false;
    }

    auto elapsed_bytecode = debug.end_timer("bytecode");

    if (options.print_llvm && options.optimization_level[0] == 'd')
    {
        print_bytecode(visitor.env.module, debug);
    }

    auto llvm_optimization_level = llvm::PassBuilder::OptimizationLevel::O0;

    switch (options.optimization_level[0])
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

    San::Linker::link(objects, options.libraries, options.args, options.output_file);

    auto elapsed_linking = debug.end_timer("linking");

    if (options.print_llvm && options.optimization_level[0] != 'd')
    {
        print_bytecode(visitor.env.module, debug);
    }

    if (options.timer)
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

    Options options;

    CLI::App *build = app.add_subcommand("build", "Build sources");
    build->add_option("ENTRY", options.entry_file, "Entry file")->required()->check(CLI::ExistingFile);

    build->add_option("-O", options.optimization_level, "Optimization level", true);
    build->add_option("-I", options.include_paths, "Include paths", true);

    build->add_option("-l", options.libraries, "Libraries to link with");
    build->add_option("--args", options.args, "Custom linker arguments");

    build->add_option("-o,--output", options.output_file, "The output file", true);

    build->add_flag("--print-llvm", options.print_llvm, "Print generated LLVM bytecode");
    build->add_flag("--timer", options.timer, "Output the elapsed build time");

    build->callback([&]() {
        if (!compile(options, debug))
        {
            exit(1);
        }
    });

    CLI::App *run = app.add_subcommand("run", "Run sources");
    run->add_option("ENTRY", options.entry_file, "Entry file")->required()->check(CLI::ExistingFile);

    run->add_option("-O", options.optimization_level, "Optimization level");
    run->add_option("-I", options.include_paths, "Include paths");

    run->add_option("-l", options.libraries, "Libraries to link with");
    run->add_option("--args", options.args, "Custom linker arguments");

    run->callback([&]() {
        options.output_file = std::tmpnam(nullptr);

        if (!compile(options, debug))
        {
            exit(1);
        }
        else
        {
            std::system((options.output_file).c_str());
        }
    });

    CLI11_PARSE(app, argc, argv);

    return 0;
}
