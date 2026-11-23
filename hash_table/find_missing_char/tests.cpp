#include "find_missing_char.hpp"

#include <gtest/gtest.h>

TEST(FindMissingChar, SimpleTest) {
    std::string s {"bcaeda"};
    std::string t {"aabcd"};
    char result = 'e';
    EXPECT_EQ(findMissingChar(s, t), result);
}

TEST(FindMissingChar, SimpleTest1) {
    std::string s {"e"};
    std::string t {};
    char result = 'e';
    EXPECT_EQ(findMissingChar(s, t), result);
}