#include "find_k_least.hpp"

TreeNode* inorder(TreeNode* root, int& k) {
    if (!root) {
        return nullptr;
    }

    TreeNode* left_node = inorder(root->left, k);
    if (left_node) {
        return left_node;
    }

    --k;
    if (!k) {
        return root;
    }

    return inorder(root->right, k);
}

int smallestBstElement(TreeNode* root, int k) {
    TreeNode* result = inorder(root, k);
    return result->val;
}
