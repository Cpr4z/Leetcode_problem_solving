#include "substrings_with_full_alphabet.hpp"

#include <gtest/gtest.h>

TEST(SubstringWithFullAlphabet, SimpleTest) {
    std::string s{"abca"};
    int result = 3;
    EXPECT_EQ(countCompleteSubstrings(s), result);
}

TEST(SubstringWithFullAlphabet, SimpleTest1) {
    std::string s{"aa"};
    int result = 3;
    EXPECT_EQ(countCompleteSubstrings(s), result);
}

TEST(SubstringWithFullAlphabet, SimpleTest2) {
    std::string s{"a#a"};
    int result = 3;
    EXPECT_EQ(countCompleteSubstrings(s), result);
}
