#include "find_first_and_last_pos.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(FindFirstAndLastPos, SimpleTest1) {
    std::vector<int> nums {1,2,2,2,2,2,5,5,8,19};
    int target = 2;
    std::vector<int> result {1, 5};
    EXPECT_THAT(
            search(nums, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(FindFirstAndLastPos, SimpleTest2) {
    std::vector<int> nums {1,3,4,6,7};
    int target = 5;
    std::vector<int> result {-1, -1};
    EXPECT_THAT(
            search(nums, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(FindFirstAndLastPos, SimpleTest3) {
    std::vector<int> nums {1};
    int target = 1;
    std::vector<int> result {0, 0};
    EXPECT_THAT(
            search(nums, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(FindFirstAndLastPos, SimpleTest4) {
    std::vector<int> nums {1, 2, 3};
    int target = 3;
    std::vector<int> result {2, 2};
    EXPECT_THAT(
            search(nums, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}

