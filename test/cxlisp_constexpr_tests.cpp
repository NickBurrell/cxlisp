//
// Created by Nicholas Burrell on 8/30/23.
//
#include <catch2/catch_test_macros.hpp>

#include <cxlisp/cxlisp.hpp>

using namespace cxlisp::util;
using namespace cxlisp::parser;

using namespace std::literals;

constexpr auto stringParser = parseString();

TEST_CASE("Parsing strings yields a string", "[parser]")
{
    STATIC_REQUIRE(stringParser(R"("test")")->first == "test"_cxs);
}