#pragma once

#include <Xenon/Block.hpp>

namespace Xenon
{
struct Loop
{
    Block *end_label = nullptr;

    Loop(Block *end_label_) : end_label(end_label_) {}
};
} // namespace Xenon
