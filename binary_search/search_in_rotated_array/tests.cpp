#include "search_in_rotated_array.hpp"

#include <gtest/gtest.h>

TEST(SearchInRotatedArray, SimpleTest) {
    std::vector<int> nums {4,8,9,1,2};
    int target = 9;
    int result = 2;
    EXPECT_EQ(search(nums, target), result);
}

TEST(SearchInRotatedArray, SimpleTest1) {
    std::vector<int> nums {1,2,4,8,9};
    int target = 9;
    int result = 4;
    EXPECT_EQ(search(nums, target), result);
}

TEST(SearchInRotatedArray, SimpleTest2) {
    std::vector<int> nums {9,1,2,4,8};
    int target = 9;
    int result = 0;
    EXPECT_EQ(search(nums, target), result);
}

TEST(SearchInRotatedArray, SimpleTest3) {
    std::vector<int> nums {9};
    int target = 9;
    int result = 0;
    EXPECT_EQ(search(nums, target), result);
}
