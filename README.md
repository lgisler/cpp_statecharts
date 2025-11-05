# cpp_statecharts

C++14 header only statecharts implementation with focus on simplicity of use and readability.

## Reference materials

- [statecharts/statecharts](https://github.com/statecharts/statecharts)
- [statecharts.dev](https://statecharts.dev)

## Concepts

- State
  - Compound state
  - Simple (Atomic) states
- Transition
  - Event
  - Initial transition
  - (TODO) Self transition
  - (TODO) Delayed Transition
- Actions
  - Entry actions
  - During actions
  - Exit actions

## Development tooling

- (required) [Bazel](https://bazel.build/) - build and test system

- (recommended) [Bazelisk](https://github.com/bazelbuild/bazelisk) - Bazel version manager

- (required) [clang-format](https://clang.llvm.org/docs/ClangFormat.html)

- (required) [clang-tidy](https://clang.llvm.org/extra/clang-tidy/)

- (required) [cpplint](https://github.com/cpplint/cpplint)

- (required) [cppcheck](https://github.com/danmar/cppcheck)

- (required) [include-what-you-use](https://github.com/include-what-you-use/include-what-you-use)

- (required) [pre-commit](https://github.com/pre-commit/pre-commit)

- (recommended) [pyenv](https://github.com/pyenv/pyenv) - isolate python environment

## Building and testing with Bazel

```bash
bazel build //...
bazel test //...
```

```bash
# Generate compile_commands.json for IDE and tooling support
bazel run @hedron_compile_commands//:refresh_all
```

## Running pre-commit

```bash
pyenv install 3.10
pyenv virtualenv 3.10 cpp_statecharts
pyenv local cpp_statecharts
```

```bash
pip install pre-commit
pre-commit install
pre-commit run --all-files
```

## Troubleshooting

### include-what-you-use

- Make sure you have generated the `compile_commands.json`

`include-what-you-use` does not find the Clang built-in headers (stdarg.h and friends).

- Install LLVM C++ Standard library (development files) (eg. `libc++-dev` or `libcxx-devel`)

_Note:_ Long term solution would be to build `include-what-you-use` with bazel and then run the
check thru bazel.
