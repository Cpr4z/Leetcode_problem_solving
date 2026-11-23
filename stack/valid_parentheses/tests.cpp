#include "ValidParentheses.hpp"

#include <gtest/gtest.h>

TEST(ValidParenthesesTest, AcceptsValidInput) {
    EXPECT_TRUE(isBalanced(""));
    EXPECT_TRUE(isBalanced("()"));
    EXPECT_TRUE(isBalanced("()[]{}"));
}

TEST(ValidParenthesesTest, RejectsInvalidInput) {
    EXPECT_FALSE(isBalanced("(]"));
    EXPECT_FALSE(isBalanced("(((()))"));
    EXPECT_FALSE(isBalanced("(((((((("));
    EXPECT_FALSE(isBalanced("(){}}{"));
}
