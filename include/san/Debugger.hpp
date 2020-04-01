#pragma once

#include <chrono>
#include <string>
#include <unordered_map>

namespace San
{
class Debugger
{
private:
    std::unordered_map<std::string, std::chrono::time_point<std::chrono::system_clock>> timers;

public:
    void start_timer(const std::string &name)
    {
        timers.insert(std::pair(name, std::chrono::system_clock::now()));
    }

    std::chrono::duration<double> end_timer(const std::string &name)
    {
        auto now = std::chrono::system_clock::now();
        auto timer = timers.find(name);
        auto start = timer->second;

        timers.erase(timer);

        return now - start;
    }
};
} // namespace San
