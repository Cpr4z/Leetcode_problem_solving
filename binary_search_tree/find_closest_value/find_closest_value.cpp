#include "find_closest_value.hpp"

#include <numeric>

int closestBstValue(TreeNode* root, double target) {
    int result = root->val;
    while (root) {
        if (std::abs(result - target) - std::abs(root->val - target) > std::numeric_limits<double>::epsilon()) {
            result = root->val;
        }

        if (root->val - target > std::numeric_limits<double>::epsilon()) {
            root = root->left;
        } else {
            root = root->right;
        }
    }

    return result;
}