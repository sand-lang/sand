#pragma once

#include <string>
#include <vector>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#define CURRENT_OS "windows"
#elif __APPLE__
#define CURRENT_OS "darwin"
#elif __linux__
#define CURRENT_OS "linux"
#else
#define CURRENT_OS "unknown"
#endif

namespace San
{
class Attributes
{
public:
    std::vector<std::string> target_os;

    void set(const std::pair<std::string, std::string> &pair)
    {
        auto &[key, value] = pair;

        if (key == "target_os")
        {
            target_os.push_back(value);
        }
    }

    bool accept_current_os() const
    {
        return this->target_os.empty() || (std::find(this->target_os.begin(), this->target_os.end(), CURRENT_OS) != this->target_os.end());
    }
};
} // namespace San
