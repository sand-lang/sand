#pragma once

#include <lld/Common/Driver.h>
#include <lld/Common/Memory.h>
#include <llvm/ADT/STLExtras.h>
#include <llvm/ADT/SmallVector.h>
#include <llvm/ADT/StringSwitch.h>
#include <llvm/ADT/Triple.h>
#include <llvm/ADT/Twine.h>
#include <llvm/Support/CommandLine.h>
#include <llvm/Support/InitLLVM.h>
#include <llvm/Support/Path.h>

#include <Sand/Environment.hpp>

#include <cstdlib>
#include <string>
#include <vector>

#ifdef __APPLE__
    #include <sys/sysctl.h>

static std::string get_sdk_version()
{
    char str[250] = {0};
    size_t size = sizeof(str);
    int ret = sysctlbyname("kern.osproductversion", str, &size, NULL, 0);

    if (ret == 0)
        return str;

    return "";
}
#endif

static std::vector<char *> copies;

static char *copy_str(const std::string &source)
{
    auto copy = new char[source.size() + 1];
    strcpy(copy, source.c_str());

    copies.push_back(copy);

    return copy;
}

static void delete_copies()
{
    for (auto &copy : copies)
    {
        delete copy;
    }
}

namespace Sand
{
class Linker
{
public:
    static bool link(const std::vector<std::string> &objects,
                     const std::string &os,
                     const std::string &arch,
                     const std::vector<std::string> &libraries,
                     const std::string &args,
                     const std::string &output_file,
                     const std::string &mode,
                     const bool &disable_internal,
                     const bool &verbose)
    {
        std::vector<const char *> raw_args = {"lld"};

        std::istringstream iss(args);
        std::vector<std::string> vectorized_args(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());

        if (mode == "coff")
        {
            std::cout << "coff!" << std::endl;

            // for (auto &library : libraries)
            // {
            //     auto option = "-l" + library;

            //     auto s = new char[option.size() + 1];
            //     strcpy(s, option.c_str());

            //     raw_args.push_back(s);
            // }

            raw_args.push_back("/nodefaultlib");
            raw_args.push_back("/entry:main");

            auto option = "/out:" + output_file;
            raw_args.push_back(copy_str(option));

            auto internal = Environment::get_internal_directory("windows", arch).u8string();

            auto ntdll_def = "/def:" + internal + (DIRECTORY_SEPARATOR "ntdll.def");
            auto kernel32_def = "/def:" + internal + (DIRECTORY_SEPARATOR "kernel32.def");

            auto ntdll_lib = internal + (DIRECTORY_SEPARATOR "libwinapi_ntdll.a");
            auto kernel32_lib = internal + (DIRECTORY_SEPARATOR "libwinapi_kernel32.a");

            if (!disable_internal)
            {
                raw_args.push_back(copy_str(ntdll_def));
                raw_args.push_back(copy_str(kernel32_def));
            }

            for (auto &arg : vectorized_args)
            {
                raw_args.push_back(arg.c_str());
            }

            if (!disable_internal)
            {
                raw_args.push_back(copy_str(ntdll_lib));
                raw_args.push_back(copy_str(kernel32_lib));
            }

            for (auto &object : objects)
            {
                raw_args.push_back(object.c_str());
            }
        }
        else if (mode == "elf" || mode == "macho")
        {
            if (mode == "elf")
            {
                raw_args.push_back("-m");
                raw_args.push_back(copy_str("elf_" + arch));
            }
            else if (mode == "macho")
            {
                raw_args.push_back("-arch");
                raw_args.push_back(arch.c_str());
            }

            for (auto &library : libraries)
            {
                auto option = "-l" + library;
                raw_args.push_back(copy_str(option));
            }

            if (mode == "macho")
            {
                if (!disable_internal)
                {
                    raw_args.push_back("-lSystem");
                }

#ifdef __APPLE__
                auto sdk_version = get_sdk_version();

                if (!sdk_version.empty())
                {
                    raw_args.push_back("-sdk_version");
                    raw_args.push_back(copy_str(sdk_version));
                }
#endif
            }

            raw_args.push_back("-o");
            raw_args.push_back(output_file.c_str());

            for (auto &arg : vectorized_args)
            {
                raw_args.push_back(arg.c_str());
            }

            for (auto &object : objects)
            {
                raw_args.push_back(object.c_str());
            }
        }
        else if (mode == "mingw")
        {
            raw_args.push_back(copy_str("/out:" + output_file));

            for (auto &arg : vectorized_args)
            {
                raw_args.push_back(arg.c_str());
            }

            for (auto &object : objects)
            {
                raw_args.push_back(object.c_str());
            }
        }
        else
        {
            std::cerr << "Unknown mode" << std::endl;
            return false;
        }

        std::string passed_args = "";

        for (const auto &arg : raw_args)
        {
            passed_args += arg;
            passed_args += ' ';
        }

        if (verbose)
        {
            std::cout << "Linking with LLD: " << passed_args << std::endl;
        }

        if (mode == "coff")
        {
            std::cout << "running coff linker" << std::endl;
            return lld::coff::link(raw_args, false, llvm::outs(), llvm::errs());
        }
        else if (mode == "macho")
        {
            return lld::mach_o::link(raw_args, false, llvm::outs(), llvm::errs());
        }
        else if (mode == "elf")
        {
            return lld::elf::link(raw_args, false, llvm::outs(), llvm::errs());
        }
        else if (mode == "mingw")
        {
            return lld::mingw::link(raw_args, false, llvm::outs(), llvm::errs());
        }

        return false;
    }
};
} // namespace Sand
