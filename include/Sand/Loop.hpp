#pragma once

#include <Sand/Block.hpp>

namespace Sand
{
struct Loop
{
    Block *end_label = nullptr;

    Loop(Block *end_label_) : end_label(end_label_) {}
};
} // namespace Sand
