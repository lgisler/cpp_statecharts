#!/usr/bin/env python3

import subprocess
import sys
from pathlib import Path


def colored_print(text, color):
    """Print colored text to terminal"""
    colors = {
        "red": "\033[0;31m",
        "yellow": "\033[1;33m",
        "green": "\033[0;32m",
        "nc": "\033[0m",  # No Color
    }
    print(f"{colors.get(color, '')}{text}{colors['nc']}")


def main():
    """Main IWYU tool function"""
    colored_print("Running Include What You Use tool...", "green")

    # Check if compile_commands.json exists
    if not Path("compile_commands.json").exists():
        colored_print("Error: compile_commands.json not found!", "red")
        colored_print(
            "To generate compile_commands.json, run one of the following:",
            "yellow",
        )
        print("  - bear -- make")
        print("  - bear -- c++ -Isrc src/example_main.cpp -o example_main")
        print("  - or use CMake with: cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .")
        print("")
        colored_print("Install bear if not available:", "yellow")
        print("  - Ubuntu/Debian: sudo apt-get install bear")
        print("  - Fedora: sudo dnf install bear")
        print("  - macOS: brew install bear")
        return 1

    try:
        subprocess.run(
            ["iwyu_tool.py", "--help"],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL,
            check=True,
        )
    except (subprocess.CalledProcessError, FileNotFoundError):
        colored_print("Error: iwyu_tool.py not found!", "red")
        colored_print("Please install include-what-you-use:", "yellow")
        print("  - Ubuntu/Debian: sudo apt-get install include-what-you-use")
        print("  - Fedora: sudo dnf install include-what-you-use")
        print("  - macOS: brew install include-what-you-use")
        return 1

    print("Running: iwyu_tool.py -p .")
    try:
        result = subprocess.run(["iwyu_tool.py", "-p", "."], capture_output=True, text=True)

        iwyu_output = result.stdout + result.stderr

        has_suggestions = any(
            phrase in iwyu_output
            for phrase in [
                "should add these lines:",
                "should remove these lines:",
                "full include-list for",
            ]
        )

        if result.returncode != 0:
            colored_print("IWYU found issues:", "red")
            print(iwyu_output)
            print()
            colored_print("Please fix the include issues before committing.", "yellow")
            return 1

        if has_suggestions:
            colored_print("IWYU suggests the following changes:", "yellow")
            print(iwyu_output)
            print()
            colored_print(
                "Consider applying these suggestions before committing.",
                "yellow",
            )
            colored_print("To skip this check, use: git commit --no-verify", "green")
            return 1

        colored_print("IWYU check passed!", "green")
        return 0

    except Exception as e:
        colored_print(f"Error running IWYU: {e}", "red")
        return 1


if __name__ == "__main__":
    sys.exit(main())
