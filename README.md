# coding-everyday

A collection of daily C++ practice problems, algorithms, and small projects. This repository is intended as a place to experiment, learn, and build a consistent habit of solving problems in C++.

- Primary language: **C++ (100%)**
- Recommended standard: **C++17/C++20**

## Table of contents

- [About](#about)
- [Repository structure](#repository-structure)
- [Getting started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Build & run (single file)](#build--run-single-file)
  - [Build & run (CMake project)](#build--run-cmake-project)
- [File / naming conventions](#file--naming-conventions)
- [Testing and examples](#testing-and-examples)
- [Code style & tooling](#code-style--tooling)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## About

"coding-everyday" is a personal/learning repository for daily C++ practice. It contains problem solutions, small utilities, and algorithm implementations. Use it to:

- Track your progress solving problems daily.
- Keep short, focused implementations and example usages.
- Share and review solutions with others.

## Repository structure

A suggested layout — actual contents may vary:

- / (root)
  - README.md
  - LICENSE
  - /problems
    - /yyyy-mm-dd-problem-name
      - solution.cpp
      - README.md (problem statement, approach, complexity)
      - input.txt (optional sample input)
  - /algorithms
    - graph/
    - dp/
    - strings/
  - /templates
    - cpp_template.hpp
  - /tools
    - small test harnesses, scripts
  - CMakeLists.txt (optional)

## Getting started

### Prerequisites

- A C++ compiler that supports C++17/C++20 (g++, clang++)
- Optional: CMake (>=3.10) for multi-file projects
- Optional: clang-format for consistent formatting
- Unix-like shell (Linux, macOS, WSL) or Windows with suitable toolchain

### Build & run (single file)

Compile a single solution file with g++:

```bash
# compile
g++ -std=c++20 -O2 -Wall -Wextra problems/2025-01-01-example/solution.cpp -o bin/example

# run
./bin/example < problems/2025-01-01-example/input.txt
