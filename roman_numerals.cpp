/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Mon 03 Mar 2014 11:36:54 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include <vector>
#include "catch.hpp"

string numeral(int num)
{   
    std::vector<int> critical_values={500,100,50,10,5,1};
    std::vector<string> roman_values={"D","C","L","X","V","I"};
    string roman_num="";
    for(int value=0; value < critical_values.size(); ++value)
    {
	while(num>=critical_values[value])
	{
	    roman_num+=roman_values[value];
	    num-=critical_values[value];
	}
	if (num >= 40 && num < 50)
	{
	    roman_num+="X";
	    num+=10;
	}
	if (num == 9)
	{
	    roman_num+="I";
	    num+=1;
	}
	if (num == 4)
	{
	    roman_num+="I";
	    num+=1;
	}
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
    REQUIRE( numeral(4) == "IV" );
    REQUIRE( numeral(5) == "V" );
    REQUIRE( numeral(6) == "VI" );
    REQUIRE( numeral(7) == "VII" );
    REQUIRE( numeral(8) == "VIII" );
    REQUIRE( numeral(9) == "IX" );
    REQUIRE( numeral(10) == "X" );

    REQUIRE( numeral(11) == "XI" );
    REQUIRE( numeral(12) == "XII" );
    REQUIRE( numeral(13) == "XIII" );
    REQUIRE( numeral(14) == "XIV" );
    REQUIRE( numeral(15) == "XV" );
    REQUIRE( numeral(16) == "XVI" );
    REQUIRE( numeral(17) == "XVII" );
    REQUIRE( numeral(18) == "XVIII" );
    REQUIRE( numeral(19) == "XIX" );
    
    REQUIRE( numeral(20) == "XX" );
    REQUIRE( numeral(21) == "XXI" );
    REQUIRE( numeral(22) == "XXII" );
    REQUIRE( numeral(23) == "XXIII" );
    REQUIRE( numeral(24) == "XXIV" );
    REQUIRE( numeral(25) == "XXV" );
    REQUIRE( numeral(26) == "XXVI" );
    REQUIRE( numeral(27) == "XXVII" );
    REQUIRE( numeral(28) == "XXVIII" );
    REQUIRE( numeral(29) == "XXIX" );

    REQUIRE( numeral(30) == "XXX" );
    REQUIRE( numeral(31) == "XXXI" );
    REQUIRE( numeral(32) == "XXXII" );
    REQUIRE( numeral(33) == "XXXIII" );
    REQUIRE( numeral(34) == "XXXIV" );
    REQUIRE( numeral(35) == "XXXV" );
    REQUIRE( numeral(36) == "XXXVI" );
    REQUIRE( numeral(37) == "XXXVII" );
    REQUIRE( numeral(38) == "XXXVIII" );
    REQUIRE( numeral(39) == "XXXIX" );

    REQUIRE( numeral(40) == "XL" );
    REQUIRE( numeral(41) == "XLI" );
    REQUIRE( numeral(42) == "XLII" );
    REQUIRE( numeral(43) == "XLIII" );
    REQUIRE( numeral(44) == "XLIV" );
    REQUIRE( numeral(45) == "XLV" );
    REQUIRE( numeral(46) == "XLVI" );
    REQUIRE( numeral(47) == "XLVII" );
    REQUIRE( numeral(48) == "XLVIII" );
    REQUIRE( numeral(49) == "XLIX" );

    REQUIRE( numeral(50) == "L" );
    REQUIRE( numeral(51) == "LI" );
    REQUIRE( numeral(52) == "LII" );
    REQUIRE( numeral(55) == "LV" );
    REQUIRE( numeral(58) == "LVIII" );

    REQUIRE( numeral(60) == "LX" );
    REQUIRE( numeral(68) == "LXVIII" );

    REQUIRE( numeral(70) == "LXX" );
    REQUIRE( numeral(78) == "LXXVIII" );

    REQUIRE( numeral(88) == "LXXXVIII" );

    REQUIRE( numeral(100) == "C" );
    REQUIRE( numeral(333) == "CCCXXXIII" );
    REQUIRE( numeral(500) == "D" );
    REQUIRE( numeral(555) == "DLV" );
    REQUIRE( numeral(666) == "DCLXVI" );
    REQUIRE( numeral(777) == "DCCLXXVII" );
    REQUIRE( numeral(888) == "DCCCLXXXVIII" );
}
