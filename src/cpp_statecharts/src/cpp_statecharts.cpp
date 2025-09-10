/// Copyright (c) 2025 Luis Gisler (lgisler)

#include "cpp_statecharts/cpp_statecharts.hpp"  // for State

#include <algorithm>
#include <iterator>
#include <vector>

namespace cpp_statecharts {
namespace {
void incrementValues(std::vector<int> v) {
  std::transform(begin(v), end(v), begin(v), [](auto val) { return ++val; });
}
}  // namespace

State::State() : state_{} {
  auto v = std::vector<int>{1, 2, 3};
  incrementValues(v);
}

int State::getState() const { return state_; }

}  // namespace cpp_statecharts
