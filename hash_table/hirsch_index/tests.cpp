#include "hirsch_index.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

// citations=[10,1,8,0,3]
// 3
TEST(HirschIndex, SimpleTest) {
    std::vector<int> citations{10,1,8,0,3};
    int result = 3;
    EXPECT_EQ(findHirschIndex(citations), result);
}

//Ввод: citations=[100,200]
//Вывод: 2
TEST(HirschIndex, SimpleTest1) {
    std::vector<int> citations{100,200};
    int result = 2;
    EXPECT_EQ(findHirschIndex(citations), result);
}

// [0, 0, 0, 0, 0]
// result = 0
TEST(HirschIndex, SimpleTest2) {
    std::vector<int> citations{0, 0, 0, 0, 0};
    int result = 0;
    EXPECT_EQ(findHirschIndex(citations), result);
}

// [4]
// result = 1
TEST(HirschIndex, SimpleTest3) {
    std::vector<int> citations{4};
    int result = 1;
    EXPECT_EQ(findHirschIndex(citations), result);
}
