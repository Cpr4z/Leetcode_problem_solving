#include "isomorphic_strings.hpp"

#include <gtest/gtest.h>

TEST(IsomorphicStrings, SimpleTest1) {
    std::string s {"abacoo"};
    std::string t {"gogbkk"};
    EXPECT_TRUE(isIsomorphic(s, t));
}

TEST(IsomorphicStrings, SimpleTest2) {
    std::string s {"aa"};
    std::string t {"ab"};
    EXPECT_FALSE(isIsomorphic(s, t));
}

TEST(IsomorphicStrings, SimpleTest3) {
    std::string s {"ab"};
    std::string t {"aa"};
    EXPECT_FALSE(isIsomorphic(s, t));
}

TEST(IsomorphicStrings, SimpleTest4) {
    std::string s {"ab"};
    std::string t {"ab"};
    EXPECT_TRUE(isIsomorphic(s, t));
}