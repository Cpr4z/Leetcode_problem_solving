#include "longest_subset.hpp"

#include <gtest/gtest.h>

TEST(LongestSubset, SimpleTest) {
    std::vector<int> nums {0, 1, 1, 1, 0, 0, 1, 1};
    int result = 4;
    EXPECT_EQ(longestSubset(nums), result);
    EXPECT_EQ(longestSubset2(nums), result);
}

TEST(LongestSubset, SimpleTest1) {
    std::vector<int> nums {1, 1, 1, 1, 1};
    int result = 5;
    EXPECT_EQ(longestSubset(nums), result);
    EXPECT_EQ(longestSubset2(nums), result);
}
