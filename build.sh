#!/usr/bin/env bash

BUILD_DIR="bin";
PROJECT_NAME="ChemStab";

if [ -e "${BUILD_DIR}" ]; then
  MOVED_BUILD_DIR="${BUILD_DIR}_$(date +%s)";
  printf "Build directory %s already existed. Moving to '%s'\n" "${BUILD_DIR}" "${MOVED_BUILD_DIR}";
  mv "${BUILD_DIR}" "${MOVED_BUILD_DIR}";
  unset MOVED_BUILD_DIR;
fi
(
mkdir -p "${BUILD_DIR}" && cd "${BUILD_DIR}";
CC=gcc CXX=g++ cmake .. && make;
)
if [ $? -ne 0 ]; then
  printf "Build failed.\n";
  exit 1;
fi
EXPECTED_BINARY="${BUILD_DIR}/chemstab-lib/${PROJECT_NAME}";
if [ -e "${EXPECTED_BINARY}" ]; then
  printf "\nBinary file is built in %s\n" "${EXPECTED_BINARY}";
  printf "Just run './%s' to try it out.\n" "${EXPECTED_BINARY}";
else
  printf "Failed to find the binary file '%s'.\n" "${EXPECTED_BINARY}" >&2;
  printf "Try searching manually for 'ChemStab' executable.\n" >&2;
fi
EXPECTED_TEST_BINARY="${BUILD_DIR}/chemstab-lib/src/tests/unittests";
if [ -x "${EXPECTED_TEST_BINARY}" ]; then
  printf "Running unit tests now with file '%s' ...\n" "${EXPECTED_TEST_BINARY}";
  ./"${EXPECTED_TEST_BINARY}";
else
  printf "Failed to find 'unittests' unit test executable '%s'\n" "${EXPECTED_TEST_BINARY}";
  printf "Try searching manually for 'unittests' executable.\n" >&2;
fi


