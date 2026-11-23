#include "right_side.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(RightSide, SimpleTest) {
    TreeNode* root = new TreeNode(5);
    root->right = new TreeNode(5);
    root->left = new TreeNode(7);
    root->right->right = new TreeNode(25);
    root->right->right->right = new TreeNode(125);
    std::vector<int> result {5, 5, 25, 125};
    EXPECT_THAT(
            rightSideView(root),
            ::testing::UnorderedElementsAreArray(result)
    );
}