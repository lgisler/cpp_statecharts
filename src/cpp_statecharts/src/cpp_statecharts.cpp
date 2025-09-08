/// Copyright (c) 2025 Luis Gisler (lgisler)

#include "cpp_statecharts/cpp_statecharts.hpp"

namespace cpp_statecharts {

State::State() : state_{} {}

int State::getState() const { return state_; }

}  // namespace cpp_statecharts
