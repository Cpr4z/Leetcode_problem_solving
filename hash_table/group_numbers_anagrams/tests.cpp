#include "group_numbers_anagrams.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(GroupAnagrams, SimpleTest1) {
    std::vector<int> numbers{123, 321, 456, 231, 654};
    std::vector<std::vector<int>> expected {{123, 321, 231}, {456, 654}};
    EXPECT_THAT(
            digitPermutation(numbers),
            ::testing::UnorderedElementsAreArray(expected)
    );

    EXPECT_THAT(
            digitPermutation2(numbers),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(GroupAnagrams, SimpleTest2) {
    std::vector<int> numbers{99, 9, 9000009};
    std::vector<std::vector<int>> expected {{99, 9000009}, {9}};
    EXPECT_THAT(
            digitPermutation(numbers),
            ::testing::UnorderedElementsAreArray(expected)
    );

    EXPECT_THAT(
            digitPermutation2(numbers),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(GroupAnagrams, SimpleTest3) {
    std::vector<int> numbers{10, 100, 1000};
    std::vector<std::vector<int>> expected {{10, 100, 1000}};
    EXPECT_THAT(
            digitPermutation(numbers),
            ::testing::UnorderedElementsAreArray(expected)
    );

    EXPECT_THAT(
            digitPermutation2(numbers),
            ::testing::UnorderedElementsAreArray(expected)
    );
}