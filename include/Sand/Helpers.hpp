#pragma once

#include <string>

namespace Sand::Helpers
{
bool ends_with(const std::string &str, const std::string &ending);

bool starts_with(const std::string &str, const std::string &starting);

std::string temporary_filename();
} // namespace Sand::Helpers
