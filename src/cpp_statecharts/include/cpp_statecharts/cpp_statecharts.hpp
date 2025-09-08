/// Copyright (c) 2025 Luis Gisler (lgisler)

#ifndef SRC_CPP_STATECHARTS_INCLUDE_CPP_STATECHARTS_CPP_STATECHARTS_HPP_
#define SRC_CPP_STATECHARTS_INCLUDE_CPP_STATECHARTS_CPP_STATECHARTS_HPP_

namespace cpp_statecharts {

class State {
 public:
  explicit State();

  int getState() const;

 private:
  int state_;
};

}  // namespace cpp_statecharts

#endif  // SRC_CPP_STATECHARTS_INCLUDE_CPP_STATECHARTS_CPP_STATECHARTS_HPP_
