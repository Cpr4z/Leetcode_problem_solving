#include "one_side_difference.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(OneSideDiffernece, SimpleTest1) {
    std::vector<int> nums1 {1,2,3,4,5};
    std::vector<int> nums2 {4,5,6};
    std::vector<int> result {1,2,3};
    EXPECT_THAT(
            findDifference(nums1, nums2),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(OneSideDiffernece, SimpleTest2) {
    std::vector<int> nums1 {1,2,2,3,3,3,3,4};
    std::vector<int> nums2 {0,0,0,3};
    std::vector<int> result {1,2,2,4};
    EXPECT_THAT(
            findDifference(nums1, nums2),
            ::testing::UnorderedElementsAreArray(result)
    );
}
