#include "min_depth_of_tree.hpp"

#include <gtest/gtest.h>

TEST(MinDepthOfTree, SimpleTest) {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(6);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(5);
    int result = 2;
    EXPECT_EQ(minDepth(root), result);
    EXPECT_EQ(minDepth2(root), result);
}
