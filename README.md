# CP02 Project

This repository contains four exercises (ex00, ex01, ex02, ex03) focused on C++ class implementation and object-oriented programming concepts. Each exercise is organized in its own directory and includes source files, headers, and a Makefile for building the project.

## Structure

- **ex00**: Basic implementation of the `Fixed` class.
- **ex01**: Extended functionality for the `Fixed` class.
- **ex02**: Further improvements and features for the `Fixed` class.
- **ex03**: Includes `Point` and `Fixed` classes, and a `bsp` function for geometric calculations.

## How to Build

Navigate to the desired exercise directory and run:

```bash
make
```

To clean up object files and executables:

```bash
make clean
```

## How to Run

After building, execute the generated binary (usually `./main` or as specified in the Makefile):

```bash
./main
```

## File Overview

- `Fixed.cpp`, `Fixed.hpp`: Implementation and header for the Fixed-point class.
- `Point.cpp`, `Point.hpp`: Implementation and header for the Point class (ex03 only).
- `bsp.cpp`: Contains the `bsp` function for geometric calculations (ex03 only).
- `main.cpp`: Entry point for each exercise, contains test cases and usage examples.
- `Makefile`: Build instructions for each exercise.

## Requirements

- C++ compiler (e.g., g++)
- Make utility

## Author

Jeferson Sopan R

---
Feel free to modify this README to add more details or usage examples for each exercise.
