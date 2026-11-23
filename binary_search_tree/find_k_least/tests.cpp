#include "find_k_least.hpp"

#include <gtest/gtest.h>

TEST(FindKClosest, SimpleTest) {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->right = new TreeNode(10);
    int k = 2;
    int result = 4;
    EXPECT_EQ(smallestBstElement(root, k), result);
}
