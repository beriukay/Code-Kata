/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Sun 02 Mar 2014 10:54:09 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"

std::string numeral(int num)
{   
    if(num==2)
	return "II";
    return "I"; 
}

TEST_CASE( "Roman numeral computation", "[numeral]" ) 
{
    REQUIRE( numeral(1) == "I" );
    REQUIRE( numeral(2) == "II" );
    REQUIRE( numeral(3) == "III" );
}
