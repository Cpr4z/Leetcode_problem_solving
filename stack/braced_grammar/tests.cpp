#include "braced_grammar.hpp"

#include <gtest/gtest.h>

TEST(BracedGrammar, SimpleTest) {
    std::string s {"ab(cd)[2]"};
    std::string result {"abcdcd"};
    EXPECT_EQ(bracketGrammar(s), result);
}

TEST(BracedGrammar, SimpleTest1) {
    std::string s {"a(b(c)[2])[3]"};
    std::string result {"abccbccbcc"};
    EXPECT_EQ(bracketGrammar(s), result);
}