#pragma once

#include <chrono>
#include <iostream>
#include <string>
#include <unordered_map>

namespace Sand
{
class Debugger
{
private:
    std::unordered_map<std::string, std::chrono::time_point<std::chrono::system_clock>> timers;

public:
    std::ostream out;
    std::ostream err;

    Debugger(std::streambuf *out_ = std::cout.rdbuf(), std::streambuf *err_ = std::cerr.rdbuf()) : out(out_), err(err_) {}

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

    template <typename T>
    std::ostream &operator<<(const T &value)
    {
        this->out << value;
        return this->out;
    }
};
} // namespace Sand
