/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Mon 03 Mar 2014 04:48:16 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include <vector>
#include "catch.hpp"

string numeral(int num)
{   
    std::vector<int> critical_values={1,5,10};
    std::vector<string> roman_values={"I","V","X"};
    string roman_num="";
    for(auto value=critical_values.back():critical_values)
    {
	while(num>=value)
	{
	    roman_num+=roman_values.back();
	    num-=value;
	}
    }
    while(num>=10)
    {
	roman_num+="X";
	num-=10;
    }
    while(num>=5)
    {
	roman_num+="V";
	num-=5;
    }
    while(num>=1)
    {
	roman_num+="I";
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
