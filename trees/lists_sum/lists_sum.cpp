#include "lists_sum.hpp"

int dfs(TreeNode* node) {
    if (!node) {
        return 0;
    }

    if (!node->left && !node->right) {
        return node->val;
    }

    return dfs(node->left) + dfs(node->right);
}

int leavesSum(TreeNode* root) {
    return dfs(root);
}
