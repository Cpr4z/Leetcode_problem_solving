#include "sum_of_right_leaves.hpp"

#include <gtest/gtest.h>

TEST(SumOfRightLeaves, SimpleTest) {
    TreeNode* root = new TreeNode(5);
    root->right = new TreeNode(5);
    int result = 5;
    EXPECT_EQ(sumOfRightLeaves(root), result);
}

TEST(SumOfRightLeaves, SimpleTest1) {
    TreeNode* root = new TreeNode(5);
    root->right = new TreeNode(5);
    root->right->right = new TreeNode(5);
    root->right->right->right = new TreeNode(1000);
    int result = 1000;
    EXPECT_EQ(sumOfRightLeaves(root), result);
}

TEST(SumOfRightLeaves, SimpleTest2) {
    TreeNode* root = new TreeNode(23);
    int result = 0;
    EXPECT_EQ(sumOfRightLeaves(root), result);
}
