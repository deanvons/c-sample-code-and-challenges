# C Bootcamp — Samples, Challenges & Solutions

## Repo layout 
```

Challenges/  # exercise folders with TODOs + short instructions
Solutions/   # reference implementations (mirrors challenges/ structure)
Sample-Code/ # examples scoped to the lessons
build/       # compiled outputs (should be gitignored)
```
> Keep it lightweight: each topic gets a sample in `src/`, a matching task in `challenges/`, and a solution in `solutions/`.

## Requirements
- GCC or Clang (C11+)
- macOS: install Xcode Command Line Tools (`xcode-select --install`)
- Linux: install `build-essential` (or clang) from your distro
- Windows: use **MinGW‑w64** or **LLVM/Clang**

## Quick start
```bash
# Clone
git clone <repo-url>
cd c-sample-code-and-challenges

# Build & run a single sample
mkdir -p build
gcc -std=c11 -Wall -Wextra -pedantic src/hello.c -o build/hello
./build/hello
```

## Working on challenges
1. Open a folder in `challenges/<topic>/` and read its README / TODOs.
2. Implement the code in the provided `.c` file(s).
3. Compile and run locally (use the command above and adjust filenames).
4. Compare your attempt with `solutions/<topic>/` **only after** trying on your own.

## Tips
- Turn on warnings: `-Wall -Wextra -Wpedantic` (solutions may treat warnings as errors).
- Prefer small, single‑purpose programs to practice one idea at a time.
- Add a `Makefile` or `CMakeLists.txt` later if you want easier builds.

---
