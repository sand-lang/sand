#include <Sand/Helpers.hpp>

#include <Sand/filesystem.hpp>

#include <cstdio>
#include <cstdlib>

using namespace Sand;

bool Helpers::ends_with(const std::string &str, const std::string &ending)
{
    if (str.length() >= ending.length())
    {
        return str.compare(str.length() - ending.length(), ending.length(), ending) == 0;
    }

    return false;
}

bool Helpers::starts_with(const std::string &str, const std::string &starting)
{
    if (str.length() >= starting.length())
    {
        return str.rfind(starting, 0) == 0;
    }

    return false;
}

std::string Helpers::temporary_filename()
{
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    return std::tmpnam(nullptr);
#else
    auto filename = fs::temp_directory_path().u8string() + "XXXXXXXXXXXXXXXX";
    mkstemp(filename.data());

    return filename;
#endif
}
