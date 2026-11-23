#include "path_sum_ii.hpp"

bool isLeaf(TreeNode* node) {
    return !node->left && !node->right;
}

void dfs(TreeNode* node, int targetSum, vector<int>& path, vector<vector<int>>& result) {
    if (!node) {
        return;
    }

    path.push_back(node->val);
    if (isLeaf(node) && targetSum - node->val == 0) {
        result.push_back(path);
    }

    dfs(node->left, targetSum - node->val, path, result);
    dfs(node->right, targetSum - node->val, path, result);

    path.pop_back();
}


vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<int> path;
    vector<vector<int>> result;
    dfs(root, targetSum, path, result);
    return result;
}