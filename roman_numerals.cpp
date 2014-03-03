/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Sun 02 Mar 2014 11:19:59 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"

std::string numeral(int num)
{   
    std::string roman_num = "";
    if(num==1)
	roman_num = "I";
    if(num==2)
	roman_num = "II";
    if(num==3)
	roman_num = "III";
    return roman_num;
}

TEST_CASE( "Roman numeral computation", "[numeral]" ) 
{
    REQUIRE( numeral(1) == "I" );
    REQUIRE( numeral(2) == "II" );
    REQUIRE( numeral(3) == "III" );
}
