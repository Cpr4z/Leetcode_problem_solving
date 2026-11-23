#include "is_similar_strings.hpp"

#include <gtest/gtest.h>

TEST(IsSimilarStrings, SimpleTest) {
    std::string str1 {"iq"};
    std::string str2 {"ieq"};
    EXPECT_TRUE(isSimilar(str1, str2));
}

TEST(IsSimilarStrings, SimpleTest1) {
    std::string str1 {"qwe"};
    std::string str2 {"qwe"};
    EXPECT_TRUE(isSimilar(str1, str2));
}

TEST(IsSimilarStrings, SimpleTest2) {
    std::string str1 {"abcd"};
    std::string str2 {"abcdef"};
    EXPECT_FALSE(isSimilar(str1, str2));
}
