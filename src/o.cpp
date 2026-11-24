// o.cpp — part of windsurf-session-tool.

#include "windsurfsessiontool/o.h"

#include <cstdio>

namespace windsurfsessiontool {

O::O(const std::string& config_path)
    : config_path_(config_path) {}

void O::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool O::run() {
    if (verbose_) std::fprintf(stderr, "[windsurf-session-tool] o: run\n");
    // core logic lives here
    return true;
}

}  // namespace windsurfsessiontool
