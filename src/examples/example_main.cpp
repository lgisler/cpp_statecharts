/// Copyright (c) 2025 Luis Gisler (lgisler)

#include <cstdint>

namespace {
enum class ACState : std::uint8_t { OFF, COOLING, HEATING, FAN_ONLY };

enum class ACEvent : std::uint8_t {
  POWER_TOGGLE,
  TEMP_UP,
  TEMP_DOWN,
  MODE_CHANGE
};
}  // namespace

auto main() -> int { return 0; }
