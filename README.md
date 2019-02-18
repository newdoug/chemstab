# ChemStab

Library starting off as just determining if a given chemical compound is stable under certain environmental conditions such as pressure, temperature, and eventually surrounding chemicals.

For what this will become, see the [TODO](./TODO) file.

## Requirements
C++17 compatible compiler and libraries (e.g. g++ could be version 8)

**Author**: Sam Kilgore

[![License](https://img.shields.io/badge/Licence-Apache%202.0-blue.svg)](./LICENSE)

## Installation and Tests

### CMake
Currently only the cmake builder is available. Just run:

```sh
mkdir build && cd build
CC=gcc CXX=g++ cmake .. && make
```
or (preferred) just run the given build script:
```sh
./build.sh
```

### Test Suite
The tests will run automatically. The tests are written using the single-header first of the [Catch2](https://github.com/catchorg/Catch2) C++ unit-test framework.

### Doxygen docs
To generate the doxygen documentation:
```sh
cd docs
doxygen Doxyfile
firefox html/index.html &   # open the generated html main page in firefox
```
