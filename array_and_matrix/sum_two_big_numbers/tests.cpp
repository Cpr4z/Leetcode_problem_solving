#include "sum_two_big_numbers.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(SumTwoBigNumbers, SimpleTest1) {
    std::vector<int> number1 {1,2,3};
    std::vector<int> number2 {4,5,6};
    std::vector<int> result {5,7,9};

    EXPECT_THAT(
            calculate(number1, number2),
            ::testing::UnorderedElementsAreArray(result)
    );
}

TEST(SumTwoBigNumbers, SimpleTest2) {
    std::string number1 {"a"};
    std::string number2 {"5"};
    std::string result {"f"};
    EXPECT_EQ(sumHex(number1, number2), result);
}

TEST(SumTwoBigNumbers, SimpleTest3) {
    std::string number1 {"fed"};
    std::string number2 {"13"};
    std::string result {"1000"};
    EXPECT_EQ(sumHex(number1, number2), result);
}

TEST(SumTwoBigNumbers, SimpleTest4) {
    std::string number1 {"ba"};
    std::string number2 {"aa"};
    std::string result {"164"};
    EXPECT_EQ(sumHex(number1, number2), result);
}
