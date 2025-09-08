/// Copyright (c) 2025 Luis Gisler (lgisler)

#include "cpp_statecharts/cpp_statecharts.hpp"  // for State

int main() {
  const auto state = cpp_statecharts::State{};
  return state.getState();
}
