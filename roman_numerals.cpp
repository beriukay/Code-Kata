/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Mon 03 Mar 2014 12:01:28 AM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include "catch.hpp"

string numeral(int num)
{   
    string roman_num = "";
    while(num>=5)
    {
	roman_num += "V";
	num-=5;
    }
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
    REQUIRE( numeral(5) == "V" );
    REQUIRE( numeral(6) == "VI" );
}
