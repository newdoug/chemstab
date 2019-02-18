
set(UNITTEST_BIN unittests)
target_link_libraries (chemstab-lib)
set(TEST_SOURCES
  catch.hpp
  simple_test.cpp
  chemicals_test.cpp
  simple_test2.cpp
  )
add_executable(${UNITTEST_BIN} ${TEST_SOURCES} ${SOURCES})
