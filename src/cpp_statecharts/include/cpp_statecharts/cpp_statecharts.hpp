/// Copyright (c) 2025 Luis Gisler (lgisler)

#ifndef CPP_STATECHARTS_CPP_STATECHARTS_HPP
#define CPP_STATECHARTS_CPP_STATECHARTS_HPP

namespace cpp_statecharts {

class State {
 public:
  explicit State() = default;

  [[nodiscard]] auto getState() const -> int;

 private:
  int state_{};
};

}  // namespace cpp_statecharts

#endif  // CPP_STATECHARTS_CPP_STATECHARTS_HPP
