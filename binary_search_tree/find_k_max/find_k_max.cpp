#include "find_k_max.hpp"

TreeNode* inorder(TreeNode* node, int& k) {
    if (!node) {
        return nullptr;
    }

    TreeNode* result = inorder(node->right, k);
    if (result) {
        return result;
    }

    --k;
    if (!k) {
        return node;
    }

    return inorder(node->left, k);
}

int biggestBstElement(TreeNode* root, int k) {
    TreeNode* result = inorder(root, k);
    return result->val;
}
