#include "validArrangement.hpp"

#include <gtest/gtest.h>

namespace {

using Pairs = std::vector<std::vector<int>>;

TEST(ValidPairsArrangementTest, BuildsNonCyclicPath) {
    Solution solution;
    Pairs input{{5, 1}, {4, 5}, {11, 9}, {9, 4}};
    const Pairs expected{{11, 9}, {9, 4}, {4, 5}, {5, 1}};

    EXPECT_EQ(solution.validArrangement(input), expected);
}

TEST(ValidPairsArrangementTest, BuildsCycle) {
    Solution solution;
    Pairs input{{1, 3}, {3, 2}, {2, 1}};
    const Pairs expected{{1, 3}, {3, 2}, {2, 1}};

    EXPECT_EQ(solution.validArrangement(input), expected);
}

TEST(ValidPairsArrangementTest, BuildsPathFromCycleWithTail) {
    Solution solution;
    Pairs input{{1, 2}, {1, 3}, {2, 1}};
    const Pairs expected{{1, 2}, {2, 1}, {1, 3}};

    EXPECT_EQ(solution.validArrangement(input), expected);
}

} // namespace
