#include "search_in_2d_matrix.hpp"

#include <gtest/gtest.h>

TEST(Search2DMatrix, SimleSearch) {
    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    EXPECT_FALSE(searchMatrix(matrix, 13));
}

TEST(Search2DMatrix, SimleSearch2) {
    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    EXPECT_TRUE(searchMatrix(matrix, 3));
}

TEST(Search2DMatrix, OneElement) {
    vector<vector<int>> matrix = {{1}};
    EXPECT_TRUE(searchMatrix(matrix, 1));
}

TEST(Search2DMatrix, NotFound) {
    vector<vector<int>> matrix = {{1}};
    EXPECT_FALSE(searchMatrix(matrix, 0));
}

TEST(Search2DMatrix, SimpleTest3) {
    vector<vector<int>> matrix = {{1}, {3}};
    EXPECT_FALSE(searchMatrix(matrix, 4));
}


