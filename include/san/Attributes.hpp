#pragma once

#include <san/Environment.hpp>

#include <string>
#include <vector>

namespace San
{
class Attributes
{
public:
    std::string current_target_os;
    std::string current_target_arch;

    std::vector<std::string> target_os;
    std::vector<std::string> target_arch;
    bool noinline = false;

    Attributes(const Environment &env) : current_target_os(env.target_os), current_target_arch(env.target_arch) {}

    void set(const std::pair<std::string, std::string> &pair)
    {
        auto &[key, value] = pair;

        if (key == "target_os")
        {
            this->target_os.push_back(value);
        }
        else if (key == "target_arch")
        {
            this->target_arch.push_back(value);
        }
        else if (key == "noinline")
        {
            this->noinline = value == "true";
        }
    }

    bool accept_current_target_os() const
    {
        return this->target_os.empty() || (std::find(this->target_os.begin(), this->target_os.end(), this->current_target_os) != this->target_os.end());
    }

    bool accept_current_target_arch() const
    {
        return this->target_arch.empty() || (std::find(this->target_arch.begin(), this->target_arch.end(), this->current_target_arch) != this->target_arch.end());
    }

    bool accept_current_target() const
    {
        return this->accept_current_target_os() && this->accept_current_target_arch();
    }
};
} // namespace San
