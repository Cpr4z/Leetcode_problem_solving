#include "right_palindrome.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(RightPalindrome, SimpleTest1) {
    string s = "OP";
    EXPECT_FALSE(isPalindrome(s));
    EXPECT_FALSE(isPalindrome2(s));
}
