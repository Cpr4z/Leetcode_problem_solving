#include "sequence_with_k_sum.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(SequenceKSum, SimpleTest1) {
    std::vector<int> numbers{9, -6, 5, 3, 2, 7};
    int target = 10;
    std::vector<int> expected {2, 4};
    EXPECT_THAT(
            subsequenceSumK(numbers, target),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(SequenceKSum, SimpleTest2) {
    std::vector<int> numbers{5};
    int target = 5;
    std::vector<int> expected {0, 0};
    EXPECT_THAT(
            subsequenceSumK(numbers, target),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(SequenceKSum, SimpleTest3) {
    std::vector<int> numbers{1, 2, 5, 7};
    int target = 7;
    std::vector<int> expected {1, 2};
    EXPECT_THAT(
            subsequenceSumK(numbers, target),
            ::testing::UnorderedElementsAreArray(expected)
    );
}
