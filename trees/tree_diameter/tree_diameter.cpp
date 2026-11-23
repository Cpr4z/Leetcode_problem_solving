#include "tree_diameter.hpp"

#include <algorithm>

int dfs(TreeNode* node, int& diameter) {
   if (!node) {
       return 0;
   }

   int left_depth = dfs(node->left, diameter);
   int right_depth = dfs(node->right, diameter);
   diameter = std::max(diameter, left_depth + right_depth);
   return std::max(left_depth, right_depth) + 1;
}

int findDiameter(TreeNode* root) {
    int diameter = 0;
    dfs(root, diameter);
    return diameter;
}