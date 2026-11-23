#include "reversed_polska_notation.hpp"

#include <gtest/gtest.h>

TEST(ReversedPolskaNotation, SimpleTest) {
    std::vector<std::string> tokens {"100","5","/","10","+"};
    int result = 30;
    EXPECT_EQ(calculate(tokens), result);
}

TEST(ReversedPolskaNotation, SimpleTest1) {
    std::vector<std::string> tokens {"10","12","8","-","*"};
    int result = 40;
    EXPECT_EQ(calculate(tokens), result);
}

TEST(ReversedPolskaNotation, SimpleTest2) {
    std::vector<std::string> tokens {"10"};
    int result = 10;
    EXPECT_EQ(calculate(tokens), result);
}
