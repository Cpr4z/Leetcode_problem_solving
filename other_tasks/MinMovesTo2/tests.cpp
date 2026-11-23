#include "MinMovesTo2.hpp"

#include <gtest/gtest.h>

TEST(MinMovesTo2Test, PositiveElements) {
    Solution solution;
    std::vector<int> values{1, 2, 3};
    EXPECT_EQ(solution.minMoves(values), 3);
}

TEST(MinMovesTo2Test, NegativeElements) {
    Solution solution;
    std::vector<int> values{-100, 0, 100};
    EXPECT_EQ(solution.minMoves(values), 300);
}
