#include "best_spot_on_parking.hpp"

#include <gtest/gtest.h>

TEST(BestSpotOnParking, SimpleTest) {
    // [0,0,0,1,0,0,0,0,1]
    std::vector<int> spots {0,0,0,1,0,0,0,0,1};
    int result = 3;
    EXPECT_EQ(bestParkingSpot(spots), result);
}

TEST(BestSpotOnParking, SimpleTes1) {
    // [0,0,0,1,0,0,0,0,1,0,0,0,0]
    std::vector<int> spots {0,0,0,1,0,0,0,0,1,0,0,0,0};
    int result = 4;
    EXPECT_EQ(bestParkingSpot(spots), result);
}

TEST(BestSpotOnParking, SimpleTes2) {
    // [0,0,0,1,0,0,0,0,1,0,0,0,0]
    std::vector<int> spots {0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0};
    int result = 4;
    EXPECT_EQ(bestParkingSpot(spots), result);
}
