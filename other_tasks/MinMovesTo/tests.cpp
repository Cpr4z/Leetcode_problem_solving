#include "minMovesTo.hpp"

#include <gtest/gtest.h>

TEST(MinMovesToTest, OddNumberOfElements) {
    Solution solution;
    std::vector<int> values{1, 2, 3};
    EXPECT_EQ(solution.minMovesTo(values), 2);
}

TEST(MinMovesToTest, EvenNumberOfElements) {
    Solution solution;
    std::vector<int> values{1, 10, 2, 9};
    EXPECT_EQ(solution.minMovesTo(values), 16);
}

TEST(MinMovesToTest, RepeatedElements) {
    Solution solution;
    std::vector<int> values{1, 0, 0, 8, 6};
    EXPECT_EQ(solution.minMovesTo(values), 14);
}
