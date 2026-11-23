#include "convolution_into_ranges.hpp"

#include <gtest/gtest.h>

TEST(ConvoultionIntoRanges, SimpleTest) {
    std::vector<int> nums {1,4,5,2,3,9,8,11,0};
    std::string result {"0-5,8-9,11"};
    EXPECT_EQ(counterRanges(nums), result);
}

TEST(ConvoultionIntoRanges, SimpleTest1) {
    std::vector<int> nums {1,8};
    std::string result {"1,8"};
    EXPECT_EQ(counterRanges(nums), result);
}