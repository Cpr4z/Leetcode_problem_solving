#include "sum_from_root_to_leaf.hpp"

bool isLeaf(TreeNode* node) {
    return !node->left && !node->right;
}

bool hasTreePathSum(TreeNode* root, int targetSum) {
    if (!root) {
        return false;
    }

    targetSum -= root->val;
    if (isLeaf(root)) {
        return targetSum == 0;
    }

    return hasTreePathSum(root->left, targetSum) || hasTreePathSum(root->right, targetSum);
}
