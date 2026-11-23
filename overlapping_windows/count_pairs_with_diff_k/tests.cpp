#include "count_pairs_with_diff_k.hpp"

#include <gtest/gtest.h>

TEST(CountPairsWithDiffK, SimpleTest) {
    std::vector<int> nums {2,2,4,5};
    int k = 2;
    int result = 4;
    EXPECT_EQ(countPairs(nums, k), result);
}

TEST(CountPairsWithDiffK, SimpleTest1) {
    std::vector<int> nums {2,2,4,5};
    int k = 0;
    int result = 10;
    EXPECT_EQ(countPairs(nums, k), result);
}