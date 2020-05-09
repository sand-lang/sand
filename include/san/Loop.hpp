#pragma once

#include <san/Block.hpp>

namespace San
{
struct Loop
{
    Block *end_label = nullptr;

    Loop(Block *end_label_) : end_label(end_label_) {}
};
} // namespace San
