#include "find_closest_value.hpp"

#include <gtest/gtest.h>

TEST(FindClosestValue, SimpleTest) {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(11);
    root->left->left = new TreeNode(-2);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(15);
    double target = 6.0;
    int result = 5;
    EXPECT_EQ(closestBstValue(root, target), result);
}
