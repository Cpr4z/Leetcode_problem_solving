#include "count_of_indexes_couple.hpp"

#include <gtest/gtest.h>

TEST(CountOfIndexesCouple, SimpleTest) {
    std::string str {"aba"};
    int result = 5;
    EXPECT_EQ(countingPairs(str), result);
}

TEST(CountOfIndexesCouple, SimpleTest2) {
    std::string str {"a"};
    int result = 1;
    EXPECT_EQ(countingPairs(str), result);
}

TEST(CountOfIndexesCouple, SimpleTest3) {
    std::string str {"abcd"};
    int result = 10;
    EXPECT_EQ(countingPairs(str), result);
}