// t.cpp — part of windsurf-session-tool.

#include "windsurfsessiontool/t.h"

#include <cstdio>

namespace windsurfsessiontool {

T::T(const std::string& config_path)
    : config_path_(config_path) {}

void T::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool T::run() {
    if (verbose_) std::fprintf(stderr, "[windsurf-session-tool] t: run\n");
    // core logic lives here
    return true;
}

}  // namespace windsurfsessiontool
