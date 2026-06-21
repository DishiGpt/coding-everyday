📘 coding-everyday
Daily C++ practice for steady growth

A personal learning repository for solving problems, experimenting with algorithms, and building small C++ projects every day. It is designed to help maintain consistency, improve problem-solving speed, and create a clean archive of practice solutions.

🚀 Overview
coding-everyday is a daily C++ practice repository focused on:

Tracking progress through regular problem solving.

Keeping solutions short, focused, and easy to review.

Practicing algorithms, data structures, and small utilities.

Building a long-term habit of writing C++ consistently.

It is intended as both a practice log and a learning workspace.

📌 Features
Practice and Learning
🧠 Daily C++ problem solving.

📂 Organized solutions for easy revision.

✍️ Short, readable implementations.

🔍 Example usage and sample input/output where needed.

Repository Goals
📈 Track improvement over time.

🛠️ Experiment with algorithms and utilities.

🤝 Share and review solutions easily.

🔁 Revisit old problems for optimization and cleanup.

🛠️ Tech Stack
Language: C++100%

Recommended Standard: C++17 / C++20

Build System: CMake (optional)

Formatting Tool: clang-format (optional)

Compiler Support: g++, clang++

📁 Repository Structure
bash
/
├── README.md
├── LICENSE
├── problems/
│   └── yyyy-mm-dd-problem-name/
│       ├── solution.cpp
│       ├── README.md
│       └── input.txt
├── algorithms/
│   ├── graph/
│   ├── dp/
│   └── strings/
├── templates/
│   └── cpp_template.hpp
├── tools/
│   └── small test harnesses, scripts
└── CMakeLists.txt
⚙️ Getting Started
Prerequisites
A C++ compiler supporting C++17/C++20 such as g++ or clang++.

Optional: CMake 3.10+ for multi-file projects.

Optional: clang-format for consistent formatting.

A Unix-like shell, or Windows with a compatible toolchain.

▶️ Build and Run
Single File
Compile a single solution file with g++:

bash
g++ -std=c++20 -O2 -Wall -Wextra problems/2025-01-01-example/solution.cpp -o bin/example
Run it with sample input:

bash
./bin/example < problems/2025-01-01-example/input.txt
CMake Project
If the project is set up with CMake:

bash
cmake -S . -B build
cmake --build build
./build/example
🧾 File and Naming Conventions
Use date-based folders for daily problems, such as yyyy-mm-dd-problem-name.

Keep the main solution file named solution.cpp.

Add a local README.md for problem statement, approach, and complexity if needed.

Store sample input in input.txt when useful.

🧪 Testing and Examples
Include sample input files for quick verification.

Keep solutions self-contained when possible.

Add small test harnesses under tools/ for reusable checks.

Re-run older solutions occasionally to validate correctness and readability.

🎨 Code Style and Tooling
Prefer clean, consistent formatting.

Use clang-format to keep style uniform.

Follow modern C++ practices where appropriate.

Keep implementations readable and easy to revisit later.

📝 License
This project is licensed under the MIT License.

📧 Contact
For questions, feedback, or collaboration:

GitHub: DishiGpt

This repository is maintained as a personal learning space for daily C++ practice, algorithm revision, and consistent problem solving.
