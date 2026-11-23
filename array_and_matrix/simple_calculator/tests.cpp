#include "simple_calculator.hpp"

#include <gtest/gtest.h>

TEST(SimpleCalculator, SimpleTest) {
    std::vector<std::string> nums {"2","*","3","*","1","+","2","+","2","+","2","*","0","*","13","+","1"};
    int result = 11;
    EXPECT_EQ(calculate(nums), result);
}

TEST(SimpleCalculator, SimpleTest1) {
    std::vector<std::string> nums {"1","+","2","+","3"};
    int result = 6;
    EXPECT_EQ(calculate(nums), result);
}