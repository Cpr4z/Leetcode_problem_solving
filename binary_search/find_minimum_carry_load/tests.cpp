#include "find_minimum_carry_load.hpp"

#include <gtest/gtest.h>

TEST(FindMinimumCarryLoad, SimpleTest) {
    std::vector<int> weights {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int result = 15;
    EXPECT_EQ(findShipCapacity(weights, days), result);
}

TEST(FindMinimumCarryLoad, SimpleTest1) {
    std::vector<int> weights {3,2,2,4,1,4,3};
    int days = 3;
    int result = 7;
    EXPECT_EQ(findShipCapacity(weights, days), result);
}

TEST(FindMinimumCarryLoad, SimpleTest2) {
    std::vector<int> weights {1, 2, 3, 4, 5};
    int days = 1;
    int result = 15;
    EXPECT_EQ(findShipCapacity(weights, days), result);
}

TEST(FindMinimumCarryLoad, SimpleTest3) {
    std::vector<int> weights {1, 2, 3, 4, 5};
    int days = 5;
    int result = 5;
    EXPECT_EQ(findShipCapacity(weights, days), result);
}