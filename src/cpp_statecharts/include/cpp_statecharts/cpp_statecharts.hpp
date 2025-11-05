/// Copyright (c) 2025 Luis Gisler (lgisler)

#ifndef CPP_STATECHARTS_CPP_STATECHARTS_HPP
#define CPP_STATECHARTS_CPP_STATECHARTS_HPP

#include <functional>
#include <unordered_map>
#include <vector>

namespace cpp_statecharts {

using Action = std::function<void()>;
using Guard = std::function<bool()>;

template <typename State, typename Event>
class StateChart {
 public:
  struct Transition {
    State from;
    Event event;
    State to;
    Action action;
    Guard guard;
  };

  struct StateNode {
    State state;
    // State parent;
    std::vector<StateNode> children;
    std::vector<Transition> transitions;
    Action entry_action;
    Action during_action;
    Action exit_action;
  };

  StateChart() = default;

  auto getState() const -> State { return state_; }

 private:
  State state_{};
  std::unordered_map<State, StateNode> states_{};
};

}  // namespace cpp_statecharts

#endif  // CPP_STATECHARTS_CPP_STATECHARTS_HPP
