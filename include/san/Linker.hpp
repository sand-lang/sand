#pragma once

#if !defined(LINKER_PATH) && !defined(LINKER_OPTIONS)
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#ifdef _WIN64

#else

#endif
#elif __APPLE__
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR

#elif TARGET_OS_IPHONE

#elif TARGET_OS_MAC
#define LINKER_PATH "ld"
#define LINKER_OPTIONS "-lSystem"
#else
#error "Unknown Apple platform"
#endif
#elif __linux__
#define LINKER_PATH "ld"
#define LINKER_OPTIONS "--hash-style=both --build-id --eh-frame-hdr -m elf_x86_64 -dynamic-linker "              \
                       "/lib64/ld-linux-x86-64.so.2 -o a.out "                                                   \
                       "/usr/lib/x86_64-linux-gnu/crt1.o "                                                       \
                       "/usr/lib/x86_64-linux-gnu/crti.o "                                                       \
                       "/usr/lib/gcc/x86_64-linux-gnu/8/crtbegin.o "                                             \
                       "-L/usr/lib/gcc/x86_64-linux-gnu/8 "                                                      \
                       "-L/usr/lib/x86_64-linux-gnu "                                                            \
                       "-L/lib/x86_64-linux-gnu -L/lib64 -L/usr/lib/x86_64-linux-gnu "                           \
                       "-L/usr/lib "                                                                             \
                       "-L/usr/lib/llvm-7/lib "                                                                  \
                       "-L/lib "                                                                                 \
                       "-L/usr/lib "                                                                             \
                       " -lgcc --as-needed -lgcc_s --no-as-needed -lc -lgcc --as-needed -lgcc_s --no-as-needed " \
                       "/usr/lib/gcc/x86_64-linux-gnu/8/crtend.o "                                               \
                       "/usr/lib/x86_64-linux-gnu/crtn.o"
#elif __unix__
#define LINKER_PATH "ld"
#elif defined(_POSIX_VERSION)
#define LINKER_PATH "ld"
#else
#error "Unknown platform"
#endif
#endif

#include <cstdlib>
#include <string>
#include <vector>

namespace San
{
class Linker
{
public:
    std::string command = "";

    std::string prepare(const std::vector<std::string> &objects, const std::string &output_file)
    {
        std::string objects_str = this->join_objects(objects);
        return this->command = (LINKER_PATH " " LINKER_OPTIONS " " + objects_str + " -o " + output_file);
    }

    inline int execute() const
    {
        return std::system(this->command.c_str());
    }

private:
    std::string join_objects(const std::vector<std::string> &objects) const
    {
        std::string str = "";

        for (auto it = objects.begin(); it != objects.end(); it++)
        {
            if (it != objects.begin())
            {
                str += " ";
            }

            str += *it;
        }

        return str;
    }
};
} // namespace San
