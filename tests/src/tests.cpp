#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    REQUIRE(sumtail(1, 0)==sum(1)); // sum(1) must be 1
    REQUIRE(sumtail(3, 0)==sum(3)); //sum(3) = 1+2+3 = 6
    REQUIRE(sumtail(33, 0)==sum(33)); //sum(33) = 1+2+3+...+33 = 561
}

TEST_CASE("sumwhile")
{
    REQUIRE(sumwhile(1)==sum(1)); // sum(1) must be 1
    REQUIRE(sumwhile(3)==sum(3)); //sum(3) = 1+2+3 = 6
    REQUIRE(sumwhile(33)==sum(33)); //sum(33) = 1+2+3+...+33 = 561
    
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(3, 1, 0) == 1);
    REQUIRE(fib(5, 1, 0) == 3);
    REQUIRE(fib(7, 1, 0) == 8);
    REQUIRE(fib(10, 1, 0) == 34);
    REQUIRE(fib(13, 1, 0) == 144);
    REQUIRE(fib(16, 1, 0) == 610);
    

}


