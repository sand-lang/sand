#pragma once

#include <iostream>
#include <type_traits>
#include <utility>

namespace San
{
template <typename T, typename For, typename = void>
struct has_insertion_operator : std::false_type
{
};

template <typename T, typename For>
struct has_insertion_operator<
    T,
    For,
    std::void_t<decltype(std::declval<T &>() << std::declval<For>())>>
    : std::true_type
{
};
} // namespace San
