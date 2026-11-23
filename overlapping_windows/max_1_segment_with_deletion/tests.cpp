#include "max_1_segment_with_deletion.hpp"

#include <gtest/gtest.h>

TEST(Max1SegmentWithDeletion, SimpleTest) {
    std::vector<int> nums {1, 1, 0, 1};
    int result = 3;
    EXPECT_EQ(maxOnesAfterDeletions(nums), result);
    EXPECT_EQ(maxOnesAfterDeletions2(nums), result);
    EXPECT_EQ(maxOnesAfterDeletions3(nums), result);
}

TEST(Max1SegmentWithDeletion, SimpleTest2) {
    std::vector<int> nums {1, 1, 0, 1, 0, 1, 1, 1, 1};
    int result = 5;
    EXPECT_EQ(maxOnesAfterDeletions(nums), result);
    EXPECT_EQ(maxOnesAfterDeletions2(nums), result);
    EXPECT_EQ(maxOnesAfterDeletions3(nums), result);
}