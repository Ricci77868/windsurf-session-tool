// o — part of windsurf-session-tool.

#pragma once

#include <string>
#include <vector>

namespace windsurfsessiontool {

class O {
public:
    explicit O(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace windsurfsessiontool
