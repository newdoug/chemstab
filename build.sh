#!/usr/bin/env bash

BUILD_DIR="chem_build";
PROJECT_NAME="ChemStab";
(
mkdir -p "${BUILD_DIR}" && cd "${BUILD_DIR}";
CC=gcc CXX=g++ cmake .. && make;
)

EXPECTED_BINARY="${BUILD_DIR}/${PROJECT_NAME}";
if [ -e "${EXPECTED_BINARY}" ]; then
  printf "\nBinary file is built in %s\n" "${EXPECTED_BINARY}";
  printf "Just run './%s' to try it out.\n" "${EXPECTED_BINARY}";
fi
