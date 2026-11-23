#include "first_unique_symbol.hpp"

#include <gtest/gtest.h>

TEST(FirstUniqueSymbol, SimpleTest) {
    std::string s {"abcbaad"};
    int result = 2;
    EXPECT_EQ(findFirstUniqueCharacter(s), result);
}

TEST(FirstUniqueSymbol, SimpleTest1) {
    std::string s {"aabbcc"};
    int result = -1;
    EXPECT_EQ(findFirstUniqueCharacter(s), result);
}