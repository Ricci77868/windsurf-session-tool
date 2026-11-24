// main.cpp — entry point. Wires config and subsystems together.

#include "windsurfsessiontool/settings.h"
#include "windsurfsessiontool/r.h"
#include "windsurfsessiontool/o.h"
#include "windsurfsessiontool/t.h"
#include "windsurfsessiontool/a.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    windsurfsessiontool::Settings settings = windsurfsessiontool::Settings::load_default();
    windsurfsessiontool::R r(settings.store_path);
    windsurfsessiontool::O o(settings.store_path);
    windsurfsessiontool::T t(settings.store_path);
    windsurfsessiontool::A a(settings.store_path);
    std::fprintf(stderr, "[windsurf-session-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
