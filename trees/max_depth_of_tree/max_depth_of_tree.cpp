#include "max_depth_of_tree.hpp"

#include <algorithm>

int maxDepth(TreeNode* root) {
    if (!root) {
        return 0;
    }

    return std::max(maxDepth(root->left), maxDepth(root->right)) + 1;
}
