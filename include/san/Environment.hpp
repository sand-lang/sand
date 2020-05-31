#pragma once

#include <san/Debugger.hpp>

#include <llvm/IR/IRBuilder.h>

#include <whereami.h>

#include <filesystem>

namespace fs = std::filesystem;

#ifndef DIRECTORY_SEPARATOR
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#define DIRECTORY_SEPARATOR "\\"
#else
#define DIRECTORY_SEPARATOR "/"
#endif
#endif

namespace San
{
class Environment
{
public:
    llvm::LLVMContext llvm_context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;

    Debugger debugger;

    Environment(std::string name) : builder(this->llvm_context),
                                    module(std::make_unique<llvm::Module>(name, this->llvm_context)) {}

    static fs::path get_bin_directory()
    {
        auto length = wai_getExecutablePath(NULL, 0, NULL);
        int dirname_length = 0;

        char *path = static_cast<char *>(malloc(length + 1));
        wai_getExecutablePath(path, length, &dirname_length);
        path[length] = '\0';

        std::string str(path);

        delete path;

        return fs::absolute(str).remove_filename();
    }

    static fs::path get_internal_directory(const std::string &operating_system, const std::string &arch)
    {
        auto bin = get_bin_directory();

        return fs::absolute(bin.append((".." DIRECTORY_SEPARATOR "internal" DIRECTORY_SEPARATOR) + operating_system + "/" + arch));
    }

    static fs::path get_std_directory()
    {
        auto bin = get_bin_directory();

        return fs::absolute(bin.append(".." DIRECTORY_SEPARATOR "std"));
    }
};
} // namespace San
