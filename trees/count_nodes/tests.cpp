#include "count_nodes.hpp"

#include <gtest/gtest.h>

TEST(CountNodes, SimpleTest) {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    int result = 3;
    EXPECT_EQ(countNodes(root), result);
}

TEST(CountNodes, SimpleTest1) {
    TreeNode* root = nullptr;
    int result = 0;
    EXPECT_EQ(countNodes(root), result);
}

TEST(CountNodes, SimpleTest2) {
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    root->left->left->right = new TreeNode(4);
    int result = 6;
    EXPECT_EQ(countNodes(root), result);
}
