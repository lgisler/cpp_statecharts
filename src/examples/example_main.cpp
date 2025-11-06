/// Copyright (c) 2025 Luis Gisler (lgisler)

#include <cstdint>

#include "cpp_statecharts/cpp_statecharts.hpp"

namespace {
enum class AcState : std::uint8_t { OFF, COOLING, HEATING, FAN_ONLY };

enum class AcEvent : std::uint8_t {
  POWER_TOGGLE,
  TEMP_UP,
  TEMP_DOWN,
  MODE_CHANGE
};
}  // namespace

auto main() -> int {
  const auto state_chart = cpp_statecharts::StateChart<AcState, AcEvent>{};
  return static_cast<int>(state_chart.getState());
}
