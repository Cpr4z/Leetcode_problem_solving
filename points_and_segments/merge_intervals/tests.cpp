#include "merge_intervals.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(MergeIntervals, SimpleTest1) {
    std::vector<std::vector<int>> intervals {{1,3},{2,6},{8,10},{15,18}};
    std::vector<std::vector<int>> result {{1,6},{8,10},{15,18}};
    EXPECT_THAT(
            merge(intervals),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(MergeIntervals, SimpleTest2) {
    std::vector<std::vector<int>> intervals {{1,4},{4,5}};
    std::vector<std::vector<int>> result {{1,5}};
    EXPECT_THAT(
            merge(intervals),
            ::testing::UnorderedElementsAreArray(result)
    );
}
