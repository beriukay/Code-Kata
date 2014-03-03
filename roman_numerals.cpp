/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Sun 02 Mar 2014 10:51:44 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"

std::string numeral(int num)
{   
    return "I"; 
}

TEST_CASE( "Roman numeral computation", "[numeral]" ) 
{
    REQUIRE( numeral(1) == "I" );
    REQUIRE( numeral(1) == "II" );
}
