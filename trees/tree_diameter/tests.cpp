#include "tree_diameter.hpp"

#include <gtest/gtest.h>

TEST(TreeDiameter, SimpleTest) {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(3);
    root->left->left = new TreeNode(5);
    root->left->left->left = new TreeNode(5);
    root->left->left->right = new TreeNode(5);
    root->left->left->left->left = new TreeNode(5);
    root->left->left->right->right = new TreeNode(5);
    int result = 4;
    EXPECT_EQ(findDiameter(root), result);

}