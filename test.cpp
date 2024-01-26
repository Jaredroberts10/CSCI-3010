#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Remove Twos are computed", "[twos]") {
    CHECK(RemoveTwos(2) == 1);
    REQUIRE(RemoveTwos(2) == 1);
    REQUIRE(RemoveTwos(4) == 1);

    SECTION("Sign of Int", "[sign]"){
        CHECK(Sign(1) == 1);
        REQUIRE(Sign(1) == 1);
        REQUIRE(Sign(-10) == -1);
    }
}
