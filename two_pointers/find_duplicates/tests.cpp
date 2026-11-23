#include "find_duplicates.hpp"

#include <gtest/gtest.h>

TEST(FindDuplicates, SimpleTest) {
    std::vector<int> numbers {1,3,4,2,2};
    EXPECT_EQ(findDuplicate(numbers), 2);
}

TEST(FindDuplicates, SimpleTest2) {
    std::vector<int> numbers {3,1,3,4,2};
    EXPECT_EQ(findDuplicate(numbers), 3);
}

TEST(FindDuplicates, AllSame) {
    std::vector<int> numbers {3,3,3,3,3};
    EXPECT_EQ(findDuplicate(numbers), 3);
}

TEST(FindDuplicates, MoreThan2) {
    std::vector<int> numbers {4,2,4,4,1};
    EXPECT_EQ(findDuplicate(numbers), 4);
}