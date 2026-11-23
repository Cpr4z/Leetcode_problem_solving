#include "romanToInteger.hpp"

#include <gtest/gtest.h>

TEST(RomanToIntegerTest, ConvertsRomanNumbers) {
    EXPECT_EQ(romanToInt("III"), 3);
    EXPECT_EQ(romanToInt("CM"), 900);
    EXPECT_EQ(romanToInt("LVIII"), 58);
    EXPECT_EQ(romanToInt("MCMXCIV"), 1994);
    EXPECT_EQ(romanToInt("MVIII"), 1008);
}
