#include "top_k_frequency_elements.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

// [5,7,5,6,6,5], k = 2
TEST(TopKFrequencyElements, SimpleTest1) {
    std::vector<int> nums {5,7,5,6,6,5};
    int k = 2;
    std::vector<int> result {5,6};
    EXPECT_THAT(
            topKFrequent(nums, k),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(TopKFrequencyElements, SimpleTest2) {
    std::vector<int> nums {3, 4, 3};
    int k = 1;
    std::vector<int> result {3};
    EXPECT_THAT(
            topKFrequent(nums, k),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(TopKFrequencyElements, SimpleTest3) {
    std::vector<int> nums {3, 4, 3, 4, 1, 1};
    int k = 2;
    std::vector<int> result {1, 4};
    EXPECT_THAT(
            topKFrequent(nums, k),
            ::testing::UnorderedElementsAreArray(result)
    );
}