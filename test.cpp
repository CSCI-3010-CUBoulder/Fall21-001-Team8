#define CATCH_CONFIG_MAIN
#include "catch.hpp"

std::vector<int> VectorPlusN(std::vector<int> v, int n){
    for (int i=0; i<v.size(); i++)
    {
        v[i] = v[i]+n;
    }
    return v;
}

// Multiples an integer n with each element of a given vector
std::vector<int> VectorTimesN(std::vector<int> v, int n){
    for (int i=0; i<v.size(); i++)
    {
        v[i] = v[i]*n;
    }
    return v;
}

TEST_CASE( "Add n to vector", "[VectorPlusN]" ) {
    std::vector<int> sim{1,2,3,5,7,11};
    std::vector<int> a{2,3,4,5,8,12};
    std::vector<int> b{6,7,8,10,12,16};
    std::vector<int> c{0,1,2,4,6,10};
    REQUIRE( VectorPlusN(sim,1) == a );
    REQUIRE( VectorPlusN(sim,5) == b );
    REQUIRE( VectorPlusN(sim,-1) == c );
}
