#include "is_balanced_tree.hpp"

#include <algorithm>

int balancedTree(TreeNode* node) {
    if (!node) {
        return 0;
    }

    int left_height = balancedTree(node->left);
    if (left_height == -1) {
        return -1;
    }

    int right_height = balancedTree(node->right);
    if (right_height == -1) {
        return -1;
    }

    if (std::abs(left_height - right_height) > 1) {
        return -1;
    }

    return std::max(left_height, right_height) + 1;
}

bool isTreeBalanced(TreeNode* node) {
    return balancedTree(node) != -1;
}