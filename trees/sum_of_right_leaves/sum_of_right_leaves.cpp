#include "sum_of_right_leaves.hpp"

bool isLeave(TreeNode* node) {
    return !node->right && !node->left;
}

int dfs(TreeNode* node, bool is_right = false) {
    if (!node) {
        return 0;
    }

    if (is_right && isLeave(node)) {
        return node->val;
    }

    return dfs(node->left) + dfs(node->right, true);
}

int sumOfRightLeaves(TreeNode* root) {
    return dfs(root);
}