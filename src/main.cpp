#include <iostream>

#include <Lexer.h>
#include <Parser.h>

#include <Sand/Compiler.hpp>
#include <Sand/Debugger.hpp>
#include <Sand/Linker.hpp>

#include <Sand/Exceptions/CompilationException.hpp>
#include <Sand/Exceptions/TargetLookupFailedException.hpp>

#include "grammar/runtime/SandLexer.h"
#include "grammar/runtime/SandParser.h"

#include "grammar/Visitor.hpp"

#include <CLI/CLI.hpp>

#include <llvm/Passes/PassBuilder.h>
#include <llvm/Support/TargetSelect.h>

#include <map>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    #define CURRENT_OS      "windows"
    #define CURRENT_MODE    "coff"
    #define OUTPUT_FILENAME "out.exe"
#elif __APPLE__
    #define CURRENT_OS   "darwin"
    #define CURRENT_OS   "darwin"
    #define CURRENT_MODE "macho"
#elif __linux__
    #define CURRENT_OS   "linux"
    #define CURRENT_OS   "linux"
    #define CURRENT_MODE "elf"
#else
    #define CURRENT_OS   "unknown"
    #define CURRENT_OS   "unknown"
    #define CURRENT_MODE "unknown"
#endif

#ifndef OUTPUT_FILENAME
    #define OUTPUT_FILENAME "out"
#endif

#if __x86_64 || __x86_64__ || _M_X64 || _M_AMD64
    #define CURRENT_ARCH "x86_64"
#elif i386 || __i386 || __i386__ || __i386 || __IA32__ || _M_I86 || _M_IX86 || __X86__ || _X86_ || __THW_INTEL__ || __I86__ || __INTEL__ || __386
    #define CURRENT_ARCH "i386"
#endif

std::map<std::string_view, std::vector<std::string_view>> available_architectures = {
    {"windows", {"i386", "x86_64"}},
    {"linux", {"i386", "x86_64"}},
    {"darwin", {"i386", "x86_64"}},
};

bool is_os_available(const std::string &os)
{
    return available_architectures.find(os) != available_architectures.end();
}

bool is_arch_available(const std::string &os, const std::string &arch)
{
    return std::find(available_architectures[os].begin(), available_architectures[os].end(), arch) != available_architectures[os].end();
}

std::string get_available_os()
{
    std::string str = "";

    for (const auto &[name, _] : available_architectures)
    {
        if (!str.empty())
        {
            str += ", ";
        }

        str += name;
    }

    return str;
}

std::string get_available_archs(const std::string &os)
{
    std::string str = "";

    for (const auto &arch : available_architectures[os])
    {
        if (!str.empty())
        {
            str += ", ";
        }

        str += arch;
    }

    return str;
}

struct Options
{
    std::string entry_file;
    std::string output_file = OUTPUT_FILENAME;
    std::vector<std::string> include_paths;

    std::string os = CURRENT_OS;
    std::string arch = CURRENT_ARCH;
    std::string mode = CURRENT_MODE;
    std::string cpu = "generic";

    std::string features = "";

    bool disable_internal = false;

    std::vector<std::string> libraries;
    std::string args;

    std::string optimization_level = "0";

    bool print_llvm = false;
    bool timer = false;
    bool verbose = false;
};

void print_bytecode(std::unique_ptr<llvm::Module> &module, Sand::Debugger &debug)
{
    std::string bytecode = "";
    llvm::raw_string_ostream out_stream(bytecode);
    out_stream << *module;
    out_stream.flush();

    debug.out << out_stream.str() << std::endl;
}

bool compile(const Options &options, Sand::Debugger &debug)
{
    if (!is_os_available(options.os))
    {
        debug.err << "Unavailable operating system: '" + options.os + "'. Available operating system: " + get_available_os() + "." << std::endl;
        return false;
    }

    if (!is_arch_available(options.os, options.arch))
    {
        debug.err << "Unavailable architecture: '" + options.arch + "' for operating system '" + options.os + "'. Available architectures: " + get_available_archs(options.os) + "." << std::endl;
        return false;
    }

    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargets();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllAsmParsers();
    llvm::InitializeAllAsmPrinters();

    Sand::Visitor visitor(options.os, options.arch, options.cpu, options.features, options.include_paths);

    debug.start_timer("bytecode");

    try
    {
        visitor.from_file(options.entry_file);
    }
    catch (Sand::CompilationException &e)
    {
        debug.err << e.what() << std::endl;
        return false;
    }
    catch (Sand::TargetLookupFailedException &e)
    {
        debug.err << e.what() << std::endl;
        return false;
    }
    catch (std::exception &e)
    {
        debug.err << e.what() << std::endl;
        return false;
    }
    catch (...)
    {
        debug.err << "An error occured." << std::endl;
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

    Sand::Compiler compiler(visitor.env.module, visitor.env.target_machine);
    auto objects = compiler.generate_objects(options.os, options.arch, llvm_optimization_level, options.verbose);

    auto elapsed_objects = debug.end_timer("objects");

    // for (const auto &object : objects)
    //     debug.out << object << std::endl;

    debug.start_timer("linking");

    Sand::Linker::link(objects, options.os, options.arch, options.libraries, options.args, options.output_file, options.mode, options.disable_internal, options.verbose);

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
    Sand::Debugger debug;

    CLI::App app{"App description"};

    Options options;
    std::string run_options;

    CLI::App *build = app.add_subcommand("build", "Build sources");
    build->add_option("ENTRY", options.entry_file, "Entry file")->required()->check(CLI::ExistingFile);

    build->add_option("-O", options.optimization_level, "Optimization level", true);
    build->add_option("-I", options.include_paths, "Include paths", true);

    build->add_option("--arch", options.arch, "Target architecture", true);
    build->add_option("--os", options.os, "Target operating system", true);
    build->add_option("-m,--mode", options.mode, "Executable/Object files format", true);
    build->add_option("--cpu", options.os, "Target CPU", true);
    build->add_option("--features", options.os, "CPU features", true);

    build->add_flag("--disable-internal", options.disable_internal, "Disable internal linked libraries");

    build->add_option("-l", options.libraries, "Libraries to link with");
    build->add_option("--args", options.args, "Custom linker arguments");

    build->add_option("-o,--output", options.output_file, "The output file", true);

    build->add_flag("--print-llvm", options.print_llvm, "Print generated LLVM bytecode");
    build->add_flag("--timer", options.timer, "Output the elapsed build time");
    build->add_flag("--verbose", options.verbose, "Verbose mode");

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

    run->add_option("--arch", options.arch, "Target architecture", true);
    run->add_option("--os", options.os, "Target operating system", true);
    run->add_option("-m,--mode", options.mode, "Executable/Object files format", true);
    run->add_option("--cpu", options.os, "Target CPU", true);
    run->add_option("--features", options.os, "CPU features", true);

    run->add_flag("--disable-internal", options.disable_internal, "Disable internal linked libraries");

    run->add_option("-l", options.libraries, "Libraries to link with");
    run->add_option("--args", options.args, "Custom linker arguments");

    run->add_flag("--verbose", options.verbose, "Verbose mode");

    run->callback([&]() {
        options.output_file = std::tmpnam(nullptr);

        if (!compile(options, debug))
        {
            exit(1);
        }
        else
        {
            std::system((options.output_file + run_options).c_str());
        }
    });

    std::vector<char *> args;
    bool is_run_option = false;

    for (auto i = 0; i < argc; i++)
    {
        if (is_run_option)
        {
            std::stringstream ss;
            ss << '"';

            for (auto &c : std::string(argv[i]))
            {
                if (c == '"' || c == '\\')
                {
                    ss << '\\';
                    ss << c;
                }
                else
                {
                    ss << c;
                }
            }

            ss << '"';

            run_options += ' ' + ss.str();
        }
        else if (std::strcmp(argv[i], "--") == 0)
        {
            is_run_option = true;
        }
        else
        {
            args.push_back(argv[i]);
        }
    }

    CLI11_PARSE(app, args.size(), &args[0]);

    return 0;
}
