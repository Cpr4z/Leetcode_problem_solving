#include "brace_decoder.hpp"

#include <gtest/gtest.h>

TEST(BraceDecoder, SimpleTest) {
    string input {"3[a]2[bc]"};
    string result {"aaabcbc"};
    EXPECT_EQ(decodeBrackets(input), result);
}

TEST(BraceDecoder, SimpleTest1) {
    string input {"3[a2[c]]"};
    string result {"accaccacc"};
    EXPECT_EQ(decodeBrackets(input), result);
}
