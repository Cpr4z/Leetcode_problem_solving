#include "zigzag_traversal_tree.hpp"


void preorder(TreeNode* node, std::vector<vector<int>>& result, int level) {
    if (!node) {
        return;
    }

    if (result.size() == level) {
        result.push_back({});
    }

    result[level].push_back(node->val);
    preorder(node->left, result, level + 1);
    preorder(node->right, result, level + 1);
}

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    int level = 0;
    std::vector<vector<int>> result;
    preorder(root, result, level);

    for (int i = 1; i < result.size(); i += 2) {
        int l = 0, r = result[i].size() - 1;
        while (l < r ) {
            std::swap(result[i][l], result[i][r]);
            ++l;
            --r;
        }
    }

    return result;
}
