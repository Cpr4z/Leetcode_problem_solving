#include "is_symmetric_tree.hpp"

bool isEqual(TreeNode* node1, TreeNode* node2) {
    if (!node1 || !node2) {
        return node1 == node2;
    }

    return node1->val == node2->val &&
           isEqual(node1->left, node2->right) &&
           isEqual(node1->right, node2->left);
}

bool isSymmetric(TreeNode* root) {
    return isEqual(root->left, root->right);
}