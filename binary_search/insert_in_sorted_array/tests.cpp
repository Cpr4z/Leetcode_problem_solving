#include "insert_in_sorted_array.hpp"

#include <gtest/gtest.h>


TEST(InsertInSortedArray, SimpleTest) {
    std::vector<int> nums {8};
    int target = 8;
    int result = 0;
    EXPECT_EQ(searchInsertIndex(nums, target), result);
}

TEST(InsertInSortedArray, SimpleTest1) {
    std::vector<int> nums {0,0,1,1,1,3,3,5,8};
    int target = 2;
    int result = 5;
    EXPECT_EQ(searchInsertIndex(nums, target), result);
}

TEST(InsertInSortedArray, SimpleTest2) {
    std::vector<int> nums {0, 11, 12};
    int target = 10;
    int result = 1;
    EXPECT_EQ(searchInsertIndex(nums, target), result);
}

TEST(InsertInSortedArray, SimpleTest3) {
    std::vector<int> nums {12};
    int target = 10;
    int result = 0;
    EXPECT_EQ(searchInsertIndex(nums, target), result);
}

TEST(InsertInSortedArray, SimpleTest4) {
    std::vector<int> nums {12};
    int target = 100;
    int result = 1;
    EXPECT_EQ(searchInsertIndex(nums, target), result);
}