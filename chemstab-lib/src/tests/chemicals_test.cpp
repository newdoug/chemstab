#include "catch.hpp"
#include "../chem/Chemical.hpp"

using namespace chemicals::elements;

TEST_CASE( "Carbon atomic number is 6", "[carbon]" ) {
    REQUIRE(carbon.getAtomicNumber() == 6 );
}
