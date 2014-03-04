/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Mon 03 Mar 2014 05:26:21 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include <vector>
#include "catch.hpp"

string numeral(int num)
{   
    std::vector<int> critical_values={50,10,5,1};
    std::vector<string> roman_values={"L","X","V","I"};
    string roman_num="";
    for(int value=0; value < critical_values.size(); ++value)
    {
	while(num>=critical_values[value])
	{
	    roman_num+=roman_values[value];
	    num-=critical_values[value];
	}
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
    REQUIRE( numeral(11) == "XI" );
    REQUIRE( numeral(12) == "XII" );
    REQUIRE( numeral(13) == "XIII" );
    REQUIRE( numeral(15) == "XV" );
    REQUIRE( numeral(16) == "XVI" );
    REQUIRE( numeral(17) == "XVII" );
    REQUIRE( numeral(18) == "XVIII" );
    REQUIRE( numeral(20) == "XX" );
    REQUIRE( numeral(26) == "XXVI" );
    REQUIRE( numeral(30) == "XXX" );
    REQUIRE( numeral(38) == "XXXVIII" );
    REQUIRE( numeral(50) == "L" );
    REQUIRE( numeral(55) == "LV" );
    REQUIRE( numeral(58) == "LVIII" );
    REQUIRE( numeral(60) == "LX" );
}
