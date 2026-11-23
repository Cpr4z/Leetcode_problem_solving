#include "longest_subarray_with_limit.hpp"

#include <gtest/gtest.h>

TEST(LongestSubarrayWithLimit, SimpleTest) {
    std::vector<int> nums {1, 2, 3, 5, 8};
    int limit = 1;
    int result = 2;
    EXPECT_EQ(longestSubarrayWithLimit(nums, limit), result);
    EXPECT_EQ(longestSubarrayWithLimit2(nums, limit), result);
}

TEST(LongestSubarrayWithLimit, SimpleTest1) {
    std::vector<int> nums {4, 2, 2, 4, 4, 2};
    int limit = 2;
    int result = 6;
    EXPECT_EQ(longestSubarrayWithLimit(nums, limit), result);
    EXPECT_EQ(longestSubarrayWithLimit2(nums, limit), result);
}

TEST(LongestSubarrayWithLimit, SimpleTest2) {
    std::vector<int> nums {1, 5, 9};
    int limit = 0;
    int result = 1;
    EXPECT_EQ(longestSubarrayWithLimit(nums, limit), result);
    EXPECT_EQ(longestSubarrayWithLimit2(nums, limit), result);
}