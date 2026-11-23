#include "find_k_max.hpp"

#include <gtest/gtest.h>

TEST(FindKMax, SimpleTest) {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->right = new TreeNode(10);
    int k = 2;
    int result = 8;
    EXPECT_EQ(biggestBstElement(root, k), result);
}