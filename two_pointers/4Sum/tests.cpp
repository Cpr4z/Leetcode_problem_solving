#include "4Sum.hpp"

#include <gtest/gtest.h>


TEST(SumTests, SimpleTest) {
    std::vector<int> nums{1, 0, -1, 0, -2, 2};
    int target = 0;
    std::vector<std::vector<int>> result {{-2,-1,1,2},{-2,0,0,2},{-1,0,0,1}};
    EXPECT_EQ(fourSum(nums, target), result);
}