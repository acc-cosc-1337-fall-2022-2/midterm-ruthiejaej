#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
REQUIRE(get_fahrenheit(37) == 98.6);
}
