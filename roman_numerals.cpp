/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Tue 04 Mar 2014 12:44:06 AM AKST
 */

#define CATCH_CONFIG_MAIN
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "catch.hpp"

int pow(int base, int digits)
{
    int total = 1;
    for (int i=0; i<digits; ++i)
	total *= base;
    return total;
}

string numeral(int num)
{   
    vector<int> critical_values={1000,500,100,50,10,5,1};
    vector<string> roman_values={"M", "D","C","L","X","V","I"};
    string roman_num="";
    for(int value=0; value < critical_values.size(); ++value)
    {
	while(num>=critical_values[value])
	{
	    roman_num+=roman_values[value];
	    num-=critical_values[value];
	}

	vector<string> border_roman={"I","X","C"};
	for (int digit=2; digit>=1; --digit)
	{
	    int tens_place = pow(10, digit);
	    if (num >= 9*tens_place && num < 10*tens_place)
	    {
		roman_num+=border_roman[digit];
		num+=tens_place;
	    }
	    if (num > 4*tens_place && num < 5*tens_place)
	    {
		roman_num+=border_roman[digit];
		num+=tens_place;
	    }
	}
	if (num >= 4*10 && num < 5*10)
	{
	    roman_num+="X";
	    num+=10;
	}
	if (num >= 9*1 && num < 10*1)
	{
	    roman_num+="I";
	    num+=1;
	}
	if (num >= 4*1 && num < 5*1)
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
    REQUIRE( numeral(53) == "LIII" );
    REQUIRE( numeral(53) == "LIII" );
    REQUIRE( numeral(54) == "LIV" );
    REQUIRE( numeral(55) == "LV" );

    REQUIRE( numeral(58) == "LVIII" );
    REQUIRE( numeral(59) == "LIX" );

    REQUIRE( numeral(60) == "LX" );
    REQUIRE( numeral(64) == "LXIV" );
    REQUIRE( numeral(68) == "LXVIII" );
    REQUIRE( numeral(69) == "LXIX" );

    REQUIRE( numeral(70) == "LXX" );
    REQUIRE( numeral(78) == "LXXVIII" );

    REQUIRE( numeral(88) == "LXXXVIII" );

    REQUIRE( numeral(90) == "XC" );
    REQUIRE( numeral(94) == "XCIV" );
    REQUIRE( numeral(99) == "XCIX" );

    REQUIRE( numeral(100) == "C" );
    REQUIRE( numeral(199) == "CXCIX" );
    REQUIRE( numeral(333) == "CCCXXXIII" );
    REQUIRE( numeral(444) == "CDXLIV" );

    REQUIRE( numeral(500) == "D" );
    REQUIRE( numeral(555) == "DLV" );
    REQUIRE( numeral(666) == "DCLXVI" );
    REQUIRE( numeral(777) == "DCCLXXVII" );
    REQUIRE( numeral(888) == "DCCCLXXXVIII" );

    REQUIRE( numeral(944) == "CMXLIV" );

    REQUIRE( numeral(1000) == "M" );
}
