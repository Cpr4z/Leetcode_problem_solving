#include <higher_or_lower.hpp>

#include <gtest/gtest.h>

TEST(GuessNumber, BigNumber) {
    SomeClass sc(27814230);
    EXPECT_EQ(sc.guessNumber(131904690), 27814230);
}

TEST(GuessNumber, SomeTest) {
    SomeClass sc(256);
    EXPECT_EQ(sc.guessNumber(20000), 256);
}
