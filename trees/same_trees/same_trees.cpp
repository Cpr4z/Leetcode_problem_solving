#include "same_trees.hpp"


bool isSameTree(TreeNode* node1, TreeNode* node2) {
    if (!node1 || !node2) {
        return node1 == node2;
    }

    return node1->val == node2->val &&
           isSameTree(node1->left, node2->left) &&
           isSameTree(node1->right, node2->right);
}