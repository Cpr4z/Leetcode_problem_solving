#include "sort_012.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(Sort_012, SimpleTest) {
    std::vector<int> colors {2,1,1,0,0,1};
    std::vector<int> expected {0,0,1,1,1,2};
    EXPECT_THAT(
            sort012(colors),
            ::testing::UnorderedElementsAreArray(expected)
    );
}

TEST(Sort_012, SimpleTest1) {
    std::vector<int> colors {2,2,2,2,0};
    std::vector<int> expected {0,2,2,2,2};
    EXPECT_THAT(
            sort012(colors),
            ::testing::UnorderedElementsAreArray(expected)
    );
}
