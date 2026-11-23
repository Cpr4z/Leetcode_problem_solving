#include "twoSum.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(TwoSum, SimpleTest1) {
    std::vector<int> nums {1,4,3,-6,2,5};
    int target = -1;
    std::vector<int> result {3, 5};
    EXPECT_THAT(
            two_sum(nums, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(TwoSum, SimpleTest2) {
    std::vector<int> nums {4,6,4};
    int target = 8;
    std::vector<int> result {0, 2};
    EXPECT_THAT(
            two_sum(nums, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}