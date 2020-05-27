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

namespace San
{
class Linker
{
public:
    static bool link(const std::vector<std::string> &objects, const std::vector<std::string> &libraries, const std::string &args, const std::string &output_file)
    {
        std::vector<const char *> raw_args = {"lld"};

        for (auto &library : libraries)
        {
            auto option = "-l" + library;

            auto s = new char[option.size() + 1];
            strcpy(s, option.c_str());

            raw_args.push_back(s);
        }

        std::istringstream iss(args);
        std::vector<std::string> vectorized_args(std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>());

        for (auto &arg : vectorized_args)
        {
            raw_args.push_back(arg.c_str());
        }

        raw_args.push_back("-o");
        raw_args.push_back(output_file.c_str());

        for (auto &object : objects)
        {
            raw_args.push_back(object.c_str());
        }

        std::string passed_args = "";

        for (const auto &arg : raw_args)
        {
            passed_args += arg;
            passed_args += ' ';
        }

        std::cout << "Linking with LLD: " << passed_args << std::endl;

        return lld::mach_o::link(raw_args, false);
    }
};
} // namespace San
