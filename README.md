# ChemStab

Library starting off as just determining if a given chemical compound is stable under certain environmental conditions such as pressure, temperature, and eventually surrounding chemicals.

## Requirements
C++17 compatible compilar and libraries (e.g. g++ could be version 8)
If running tests, gtest library needs to be installed.

**Author**: Sam Kilgore

[![License](https://img.shields.io/badge/Licence-Apache%202.0-blue.svg)](./LICENSE)

## Installation and Tests

### CMake
Currently only the cmake builder is available. Just run:

```sh
mkdir build && cd build
CC=gcc CXX=g++ cmake .. && make
```
or just run the given build script:
```sh
./build.sh
```

### Test Suite

To run the tests while installing, ...

