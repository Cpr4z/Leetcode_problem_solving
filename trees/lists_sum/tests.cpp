#include "lists_sum.hpp"

#include <gtest/gtest.h>

TEST(ListsSum, SimpleTest) {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(5);
    root->right = new TreeNode(5);
    int result = 10;
    EXPECT_EQ(leavesSum(root), result);
}

TEST(ListsSum, SimpleTest1) {
    TreeNode* root = new TreeNode(5);
    int result = 5;
    EXPECT_EQ(leavesSum(root), result);
}

TEST(ListsSum, SimpleTest2) {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(6);
    root->left->left = new TreeNode(6);
    root->left->left->left = new TreeNode(1000);
    int result = 1000;
    EXPECT_EQ(leavesSum(root), result);
}
