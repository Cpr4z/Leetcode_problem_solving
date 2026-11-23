#include "fabricated_report.hpp"

#include <gtest/gtest.h>

TEST(LongestStockGrowth, SimpleTest1) {
    std::vector<int> nums {1,0,1,1,0,1,1,0};
    int k = 2;
    int result = 7;
    EXPECT_EQ(longestStockGrowth(nums, k), result);
}

TEST(LongestStockGrowth, SimpleTest2) {
    std::vector<int> nums {0};
    int k = 0;
    int result = 0;
    EXPECT_EQ(longestStockGrowth(nums, k), result);
}

TEST(LongestStockGrowth, SimpleTest3) {
    std::vector<int> nums {1,0,0,1};
    int k = 1;
    int result = 2;
    EXPECT_EQ(longestStockGrowth(nums, k), result);
}