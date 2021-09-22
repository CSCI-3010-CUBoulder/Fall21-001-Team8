# define CATCH_CONFIG_MAIN
# include "catch.hpp"
# include "functions_to_implement.cpp"
# include <vector>

TEST_CASE ("Remove 2s function", "[Dev2]")
{
    REQUIRE (RemoveTwos(16) == 1);
    REQUIRE (RemoveTwos(7) == 7);
    REQUIRE (RemoveTwos(26) == 13);
    REQUIRE (RemoveTwos(52) == 13);
}
