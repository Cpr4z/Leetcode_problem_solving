#include "min_depth_of_tree.hpp"

int minDepth(TreeNode* root) {
    if (!root) {
        return 0;
    }

    int left_depth = minDepth(root->left);
    int right_depth = minDepth(root->right);
    if (!left_depth || !right_depth) {
        return std::max(left_depth, right_depth) + 1;
    }

    return std::min(left_depth, right_depth) + 1;
}


bool isLeaf(TreeNode* node) {
    return !node->left && !node->right;
}

int dfs(TreeNode* node) {
    if (isLeaf(node)) {
        return 1;
    } else if (!node->left ) {
        return 1 + dfs(node->right);
    } else if (!node->right) {
        return 1 + dfs(node->left);
    }

    return std::min(dfs(node->left), dfs(node->right)) + 1;
}

int minDepth2(TreeNode* root) {
    if (!root) {
        return 0;
    }

    return dfs(root);
}
