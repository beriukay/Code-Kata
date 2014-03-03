/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Sun 02 Mar 2014 11:55:18 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include "catch.hpp"

string numeral(int num)
{   
    string roman_num = "";
    while(num>=1)
    {
	roman_num += "I";
	num--;
    }
    return roman_num;
}

TEST_CASE( "Roman numeral computation", "[numeral]" ) 
{
    REQUIRE( numeral(1) == "I" );
    REQUIRE( numeral(2) == "II" );
    REQUIRE( numeral(3) == "III" );
}
