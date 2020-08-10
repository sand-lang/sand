#pragma once

#include <Sand/Debugger.hpp>
#include <Sand/Exceptions/TargetLookupFailedException.hpp>
#include <Sand/filesystem.hpp>

#include <llvm/IR/IRBuilder.h>

#include <llvm/Support/TargetRegistry.h>
#include <llvm/Support/TargetSelect.h>
#include <llvm/Target/TargetMachine.h>

#include <whereami.h>

#include <exception>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    #define CURRENT_OS "windows"
#elif __APPLE__
    #define CURRENT_OS "darwin"
#elif __linux__
    #define CURRENT_OS "linux"
#else
    #define CURRENT_OS "unknown"
#endif

namespace Sand
{
class Environment
{
public:
    llvm::LLVMContext llvm_context;
    llvm::IRBuilder<> builder;
    std::unique_ptr<llvm::Module> module;

    llvm::TargetMachine *target_machine = nullptr;

    Debugger debugger;

    std::string target_os;
    std::string target_arch;
    std::string target_cpu;
    std::string target_features;

    Environment(const std::string &name,
                const std::string &target_os_,
                const std::string &target_arch_,
                const std::string &target_cpu_,
                const std::string &target_features_) : builder(this->llvm_context),
                                                       module(std::make_unique<llvm::Module>(name, this->llvm_context)),
                                                       target_os(target_os_),
                                                       target_arch(target_arch_),
                                                       target_cpu(target_cpu_),
                                                       target_features(target_features_)
    {
        auto vendor = "";

        if (this->target_os == "darwin")
        {
            vendor = "apple";
        }
        else if (this->target_os == "windows")
        {
            vendor = "pc";
        }
        else if (this->target_os == "linux")
        {
            vendor = "pc";
        }

        this->module->setTargetTriple(this->target_arch + "-" + vendor + "-" + this->target_os);

        std::string error;
        std::string target_triple = this->module->getTargetTriple();
        const llvm::Target *target = llvm::TargetRegistry::lookupTarget(target_triple, error);

        if (!target)
        {
            throw TargetLookupFailedException(target_triple, error);
        }

        std::string cpu = target_cpu_;
        std::string features = target_features_;

        llvm::TargetOptions target_options;
        llvm::Optional<llvm::Reloc::Model> rm = llvm::Optional<llvm::Reloc::Model>();
        this->target_machine = target->createTargetMachine(target_triple, cpu, features, target_options, rm);

        this->module->setDataLayout(this->target_machine->createDataLayout());
    }

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
} // namespace Sand
