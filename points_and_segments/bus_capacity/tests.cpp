#include "bus_capacity.hpp"

#include <gtest/gtest.h>

TEST(BusCapacity, SimpleTest1) {
    std::vector<std::vector<int>> route_data {{1,5,2},{3,7,3}};
    int capacity = 6;
    EXPECT_TRUE(busCapacity(route_data, capacity));
}

TEST(BusCapacity, SimpleTest2) {
    std::vector<std::vector<int>> route_data {{6,8,2},{1,4,3},{2,5,4}};
    int capacity = 5;
    EXPECT_FALSE(busCapacity(route_data, capacity));
}
