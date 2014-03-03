/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Mon 03 Mar 2014 02:52:06 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include "catch.hpp"

// testing offline commit process.

string numeral(int num)
{   
    string roman_num = "";
    while(num>=10)
    {
	roman_num += "X";
	num-=10;
    }
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
    REQUIRE( numeral(7) == "VII" );
    REQUIRE( numeral(8) == "VIII" );
    REQUIRE( numeral(10) == "X" );
}
