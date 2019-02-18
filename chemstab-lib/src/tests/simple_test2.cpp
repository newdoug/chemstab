#include "catch.hpp"

unsigned int Factorial2( unsigned int number ) {
    return number <= 1 ? number : Factorial2(number-1)*number;
}

TEST_CASE( "Factorial2s are computed2", "[factorial]" ) {
    REQUIRE( Factorial2(1) == 1 );
    REQUIRE( Factorial2(2) == 2 );
    REQUIRE( Factorial2(3) == 6 );
    REQUIRE( Factorial2(10) == 3628800 );
}
