#include "sum_from_root_to_leaf.hpp"

#include <gtest/gtest.h>

TEST(SumFromRootToLeaf, SimpleTest) {
    TreeNode* root = new TreeNode(3);
    root->right = new TreeNode(4);
    root->left = new TreeNode(7);
    int target = 10;
    EXPECT_TRUE(hasTreePathSum(root, target));
}

TEST(SumFromRootToLeaf, SimpleTest1) {
    TreeNode* root = new TreeNode(3);
    int target = 3;
    EXPECT_TRUE(hasTreePathSum(root, target));
}

TEST(SumFromRootToLeaf, SimpleTest2) {
    TreeNode* root = new TreeNode(3);
    root->right = new TreeNode(4);
    root->left = new TreeNode(7);
    int target = 2;
    EXPECT_FALSE(hasTreePathSum(root, target));
}
