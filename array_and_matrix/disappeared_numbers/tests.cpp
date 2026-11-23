#include "disappearedNumbers.hpp"

#include <gtest/gtest.h>

using Numbers = std::vector<int>;

TEST(DisappearedNumbersTest, FindsTwoMissingNumbers) {
    Solution solution;
    Numbers input{4, 3, 2, 7, 8, 2, 3, 1};
    const Numbers expected{5, 6};

    const Numbers result = solution.findDisappearedNumbers(input);

    EXPECT_EQ(result, expected);
}

TEST(DisappearedNumbersTest, FindsOneMissingNumber) {
    Solution solution;
    Numbers input{1, 1};
    const Numbers expected{2};

    const Numbers result = solution.findDisappearedNumbers(input);

    EXPECT_EQ(result, expected);
}
