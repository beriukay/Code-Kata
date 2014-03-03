/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Sun 02 Mar 2014 05:02:34 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

char numeral(int a)
{   
    return ' '; 
}

TEST_CASE( "Roman numeral computation", "[numeral]" ) 
{
    REQUIRE( numeral(1) == '1' );
}
