/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Mon 24 Feb 2014 12:54:20 AM AKST
 */

#define CATCH_CONFIG_MAIN
#include "/home/paul/Public/Catch/single_include/catch.hpp"
#include <string>
using std::string;

string numeral(int a)
{   
    return "";
}

TEST_CASE( "Roman numeral computation", "[factorial]" ) 
{
    REQUIRE( numeral(1) == "I" );
}
