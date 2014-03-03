/* Paul Gentemann
 * File Name : roman_numerals.cpp
 * Creation Date : 02-23-2014
 * Last Modified : Sun 02 Mar 2014 04:56:47 PM AKST
 */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


TEST_CASE( "Roman numeral computation", "[numeral]" ) 
{
    REQUIRE( numeral(1) == '1' );
}
