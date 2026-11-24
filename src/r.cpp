// r.cpp — part of windsurf-session-tool.

#include "windsurfsessiontool/r.h"

#include <cstdio>

namespace windsurfsessiontool {

R::R(const std::string& config_path)
    : config_path_(config_path) {}

void R::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool R::run() {
    if (verbose_) std::fprintf(stderr, "[windsurf-session-tool] r: run\n");
    // core logic lives here
    return true;
}

}  // namespace windsurfsessiontool
