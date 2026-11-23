#include "find_symmetry_line.hpp"

#include <gtest/gtest.h>

TEST(FindSymmetryLine, SimpleTest) {
    std::vector<std::vector<int>> points{{1, 2}, {3, 1}, {4, 2}, {2, 1}, {2, 1}};
    EXPECT_TRUE(isSymmetric(points));
    EXPECT_TRUE(isSymmetric3(points));
}

TEST(FindSymmetryLine, SimpleTest1) {
    std::vector<std::vector<int>> points{{1, 2}, {3 ,1}};
    EXPECT_FALSE(isSymmetric(points));
}
