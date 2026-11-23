#include "find_max_1_sequence.hpp"

#include <gtest/gtest.h>

TEST(FindMax1Sequence, SimpleTest) {
    std::vector<int> nums {1,1,0,0,1,1,1,0};
    int result = 3;
    EXPECT_EQ(longestConsecutiveOnes(nums), result);
    EXPECT_EQ(longestConsecutiveOnes2(nums), result);
}
