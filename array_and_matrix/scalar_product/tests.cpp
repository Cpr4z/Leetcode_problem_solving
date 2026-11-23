#include "scalar_product.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(ScalarProduct, SimpleTest1) {
    std::vector<std::vector<int>> vec1{{2, 3}};
    std::vector<std::vector<int>> vec2{{3, 2}, {4, 1}};
    int result = 20;
    EXPECT_EQ(dotProduct(vec1, vec2), result);
}
