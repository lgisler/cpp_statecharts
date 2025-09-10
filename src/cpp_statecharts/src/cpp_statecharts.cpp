/// Copyright (c) 2025 Luis Gisler (lgisler)

#include "cpp_statecharts/cpp_statecharts.hpp"  // for State

namespace cpp_statecharts {

State::State() = default;

auto State::getState() const -> int { return state_; }

}  // namespace cpp_statecharts
