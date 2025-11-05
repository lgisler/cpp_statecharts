/// Copyright (c) 2025 Luis Gisler (lgisler)

#include "cpp_statecharts/cpp_statecharts.hpp"  // for State

namespace cpp_statecharts {

auto StateChart::getState() const -> State { return state_; }

}  // namespace cpp_statecharts
