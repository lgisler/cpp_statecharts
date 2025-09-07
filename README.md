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

[Install pyenv](https://github.com/pyenv/pyenv?tab=readme-ov-file#installation)

```bash
pyenv install 3.10
pyenv virtualenv 3.10 cpp_statecharts
pyenv local cpp_statecharts
```

## Running pre-commit

```bash
pip install pre-commit
pre-commit install
pre-commit run --all-files
```
