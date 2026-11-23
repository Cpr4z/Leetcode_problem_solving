#include "overlapping_intervals.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(OverlappingIntervals, SimpleTest1) {
    std::vector<std::vector<int>> segments {{6,8},{1,5},{4,7}};
    std::vector<std::vector<int>> result {{1,5},{4,7},{6,8}};
    EXPECT_THAT(
            findOverlappings(segments),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(OverlappingIntervals, SimpleTest2) {
    std::vector<std::vector<int>> segments {{1,3},{7,9}};
    std::vector<std::vector<int>> result {};
    EXPECT_THAT(
            findOverlappings(segments),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(OverlappingIntervals, SimpleTest3) {
    std::vector<std::vector<int>> segments {{2,3},{2,3}};
    std::vector<std::vector<int>> result {{2, 3}};
    EXPECT_THAT(
            findOverlappings(segments),
            ::testing::UnorderedElementsAreArray(result)
    );
}