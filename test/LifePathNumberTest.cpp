#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <LifePathNumber.hpp>

TEST_CASE("Calculate Life Path Number") {
  SECTION("Valid date of birth") {
    std::string dateOfBirth = "1990-01-01";
    int expectedLifePathNumber = 3;

    int result = lpn::calculateLifePathNumber(dateOfBirth);

    REQUIRE(result == expectedLifePathNumber);
  }
}
