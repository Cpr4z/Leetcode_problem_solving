#include "same_trees.hpp"

#include <gtest/gtest.h>

TEST(SameTrees, SimpleTest) {
    TreeNode* root1 = new TreeNode(4);
    root1->left = new TreeNode(5);

    TreeNode* root2 = new TreeNode(4);
    root2->left = new TreeNode(5);
    EXPECT_TRUE(isSameTree(root1, root2));
}

TEST(SameTrees, SimpleTest1) {
    TreeNode* root1 = new TreeNode(4);
    root1->left = new TreeNode(5);

    TreeNode* root2 = new TreeNode(4);
    EXPECT_FALSE(isSameTree(root1, root2));
}