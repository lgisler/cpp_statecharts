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

- (required) [clang-format](https://clang.llvm.org/docs/ClangFormat.html)

- (required) [clang-tidy](https://clang.llvm.org/extra/clang-tidy/)

- (required) [cppcheck](https://github.com/danmar/cppcheck)

- (required) [cpplint](https://github.com/cpplint/cpplint)

- (required) [pre-commit](https://github.com/pre-commit/pre-commit)

- (recommended) [pyenv](https://github.com/pyenv/pyenv) - isolate python environment

```bash
pyenv install 3.10
pyenv virtualenv 3.10 cpp_statecharts
pyenv local cpp_statecharts
```

- (recommended) [bear](https://github.com/rizsotto/Bear) - generate `compile_commands.json`

```bash
bear -- c++ -Isrc src/example_main.cpp -o example_main
```

## Running pre-commit

```bash
pip install pre-commit
pre-commit install
pre-commit run --all-files
```
