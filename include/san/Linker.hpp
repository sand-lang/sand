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

#include <cstdlib>
#include <string>
#include <vector>

#include <whereami.h>

#include <filesystem>

namespace fs = std::filesystem;

namespace San
{
class Linker
{
public:
    static bool link(const std::vector<std::string> &objects, const std::vector<std::string> &libraries, const std::string &args, const std::string &output_file)
    {
        std::vector<const char *> raw_args = {"lld"};

        std::istringstream iss(args);
        std::vector<std::string> vectorized_args(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
        // for (auto &library : libraries)
        // {
        //     auto option = "-l" + library;

        //     auto s = new char[option.size() + 1];
        //     strcpy(s, option.c_str());

        //     raw_args.push_back(s);
        // }

        raw_args.push_back("/nodefaultlib");
        raw_args.push_bakc("/entry:main");

        auto option = "/out:" + library;
        raw_args.push_back(option.c_str());

        auto internal = get_internal_directory("windows", "x86_64").u8string();

        auto kernel32_def = internal + "/kernel32.def";
        auto ntdll_def = internal + "/ntdll.def";

        auto kernel32_lib = internal + "/libwinapi_kernel32.a";
        auto ntdll_lib = internal + "/libwinapi_ntdll.a";

        raw_args.push_back(kernel32_def.c_str());
        raw_args.push_back(ntdll_def.c_str());

        for (auto &arg : vectorized_args)
        {
            raw_args.push_back(arg.c_str());
        }

        raw_args.push_back(kernel32_lib.c_str());
        raw_args.push_back(ntdll_lib.c_str());

        for (auto &object : objects)
        {
            raw_args.push_back(object.c_str());
        }
#elif __APPLE__ || __linux__
        for (auto &library : libraries)
        {
            auto option = "-l" + library;

            auto s = new char[option.size() + 1];
            strcpy(s, option.c_str());

            raw_args.push_back(s);
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
#else
#error "Unknown platform"
#endif

        std::string passed_args = "";

        for (const auto &arg : raw_args)
        {
            passed_args += arg;
            passed_args += ' ';
        }

        std::cout << "Linking with LLD: " << passed_args << std::endl;

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
        return lld::coff::link(raw_args, false);
#elif __APPLE__
        return lld::mach_o::link(raw_args, false);
#elif __linux__
        return lld::elf::link(raw_args, false);
#endif
    }

private:
    static fs::path get_bin_directory()
    {
        auto length = wai_getExecutablePath(NULL, 0, NULL);
        int dirname_length = 0;

        char *path = static_cast<char *>(malloc(length + 1));
        wai_getExecutablePath(path, length, &dirname_length);
        path[length] = '\0';

        std::string str(path);

        delete path;

        return fs::absolute(str);
    }

    static fs::path get_internal_directory(const std::string &operating_system, const std::string &arch)
    {
        auto bin = get_bin_directory();
        return bin.append("../internal/" + operating_system + "/" + arch);
    }
};
} // namespace San
