#include "is_almost_palindrome.hpp"

#include <gtest/gtest.h>

TEST(IsAlmostPalidrome, SimpleTest) {
    std::string str {"abca"};
    EXPECT_TRUE(isAlmostPalindrome(str));
}

TEST(IsAlmostPalidrome, SimpleTest1) {
    std::string str {"racecar"};
    EXPECT_TRUE(isAlmostPalindrome(str));
}

TEST(IsAlmostPalidrome, SimpleTest2) {
    std::string str {"deeee"};
    EXPECT_TRUE(isAlmostPalindrome(str));
}

TEST(IsAlmostPalidrome, SimpleTest3) {
    std::string str {"ddxeddee"};
    EXPECT_FALSE(isAlmostPalindrome(str));
}