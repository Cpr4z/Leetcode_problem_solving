#include "max_depth_of_tree.hpp"

#include <gtest/gtest.h>

TEST(MaxDepthOfTree, SimpleTest) {
    TreeNode* root = new TreeNode(3);
    root->right = new TreeNode(3);
    root->left = new TreeNode(5);
    root->left->left = new TreeNode(4);
    int result = 3;
    EXPECT_EQ(maxDepth(root), result);
}

TEST(MaxDepthOfTree, SimpleTest1) {
    TreeNode* root = new TreeNode(3);
    int result = 1;
    EXPECT_EQ(maxDepth(root), result);
}

TEST(MaxDepthOfTree, SimpleTest2) {
    TreeNode* root = new TreeNode(3);
    root->right = new TreeNode(3);
    root->left = new TreeNode(5);
    int result = 2;
    EXPECT_EQ(maxDepth(root), result);
}
