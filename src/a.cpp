// a.cpp — part of windsurf-session-tool.

#include "windsurfsessiontool/a.h"

#include <cstdio>

namespace windsurfsessiontool {

A::A(const std::string& config_path)
    : config_path_(config_path) {}

void A::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool A::run() {
    if (verbose_) std::fprintf(stderr, "[windsurf-session-tool] a: run\n");
    // core logic lives here
    return true;
}

}  // namespace windsurfsessiontool
