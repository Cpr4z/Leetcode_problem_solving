#include "level_order_traversal.hpp"

void preorder(TreeNode* node, int level, std::vector<std::vector<int>>& result) {
    if (!node) {
        return;
    }

    if (level == result.size()) {
        result.push_back({});
    }

    result[level].push_back(node->val);
    preorder(node->left, level + 1, result);
    preorder(node->right, level + 1, result);
}

vector<vector<int>> levelOrderTraversal(TreeNode* root) {
    std::vector<std::vector<int>> result;
    int level = 0;
    preorder(root, level, result);
    return result;
}
