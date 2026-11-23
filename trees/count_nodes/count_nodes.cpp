#include "count_nodes.hpp"


// n - кол-во вершин в дереве
// h - глубина дерева

// Время: O(n)
// Память: O(h)
int dfs(TreeNode* node) {
    if (!node) {
        return 0;
    }

    return dfs(node->left) + dfs(node->right) + 1;
}

int countNodes(TreeNode* root) {
    return dfs(root);
}