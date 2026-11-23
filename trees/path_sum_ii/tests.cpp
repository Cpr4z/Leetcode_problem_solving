#include "path_sum_ii.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(PathSumII, SimpleTest) {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(3);
    root->right = new TreeNode(3);
    int target = 6;
    vector<vector<int>> result {{3, 3}, {3, 3}};
    EXPECT_THAT(
            pathSum(root, target),
            ::testing::UnorderedElementsAreArray(result)
    );
}