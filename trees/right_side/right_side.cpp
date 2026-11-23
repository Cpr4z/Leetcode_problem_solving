#include "right_side.hpp"

void traversal(TreeNode* node, int level, std::vector<int>& result) {
   if (!node) {
       return ;
   }

   if (level == result.size()) {
        result.push_back(node->val);
   }

   result[level] = node->val;
   traversal(node->left, level + 1, result);
   traversal(node->right, level + 1, result);
}

vector<int> rightSideView(TreeNode* root) {
    std::vector<int> result;
    int level = 0;
    traversal(root, level, result);
    return result;
}
