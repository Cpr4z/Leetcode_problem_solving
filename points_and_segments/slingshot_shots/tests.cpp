#include "slingshot_shots.hpp"

#include <gtest/gtest.h>

TEST(SlingshotShots, SimpleTest) {
    std::vector<std::vector<int>> intervals {{1,5},{8,12},{0,3},{6,8},{7,8}};
    int result = 2;
    EXPECT_EQ(countShots(intervals), result);
}

TEST(SlingshotShots, SimpleTest2) {
    std::vector<std::vector<int>> intervals {{2,17},{100,160}};
    int result = 2;
    EXPECT_EQ(countShots(intervals), result);
}
