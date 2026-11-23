#include "sorted_square.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(SortedSquare, SimpleTest) {
    std::vector<int> nums {-6 , -4, 3, 5, 8};
    std::vector<int> result {9, 16, 25, 36, 64};
    EXPECT_THAT(
            numbersSquare(nums),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(SortedSquare, SimpleTest1) {
    std::vector<int> nums {-6 };
    std::vector<int> result {36};
    EXPECT_THAT(
            numbersSquare(nums),
            ::testing::UnorderedElementsAreArray(result)
    );
}