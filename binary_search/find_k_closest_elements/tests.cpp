#include "find_k_closest_elements.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(FindKClosestElements, SimpleTest) {
    std::vector<int> nums {1,3,5,6,8,9};
    int target = 2;
    int k = 3;
    std::vector<int> result {1,3,5};
    EXPECT_THAT(
            search(nums, target, k),
            ::testing::UnorderedElementsAreArray(result)
    );

    EXPECT_THAT(
            search2(nums, target, k),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(FindKClosestElements, SimpleTest1) {
    std::vector<int> nums {2,3,3,4,5,6,7};
    int target = 3;
    int k = 3;
    std::vector<int> result {2,3,3};
    EXPECT_THAT(
            search(nums, target, k),
            ::testing::UnorderedElementsAreArray(result)
    );

    EXPECT_THAT(
            search2(nums, target, k),
            ::testing::UnorderedElementsAreArray(result)
    );
}