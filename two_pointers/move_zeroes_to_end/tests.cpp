#include "move_zeroes_to_end.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(OneSideDiffernece, SimpleTest1) {
    std::vector<int> nums {2,1,0,0,4,0,9};
    std::vector<int> result {2,1,4,9,0,0,0};
    EXPECT_THAT(
            moveZeros(nums),
            ::testing::UnorderedElementsAreArray(result)
    );
}
