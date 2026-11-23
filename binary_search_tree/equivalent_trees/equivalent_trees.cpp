#include "equivalent_trees.hpp"

#include <unordered_map>
#include <functional>

vector<TreeNode*> findSubtrees(TreeNode* root) {
    std::unordered_map<int, std::pair<TreeNode*, int>> best;
    std::vector<TreeNode*> result(2, nullptr);
    int best_sum = -1;
    std::function<std::pair<int, int>(TreeNode* node)> dfs = [&](TreeNode* node) -> std::pair<int, int> {
        if (!node) {
            return {0, 0};
        }

        const auto [left_count, left_mask] = dfs(node->left);
        const auto [right_count, right_mask] = dfs(node->right);

        int total_mask = left_mask | right_mask | (1 << (node->val - 'A'));
        int total_count = left_count + right_count + 1;

        const auto it = best.find(total_mask);
        if (it != best.end()) {
            if (it->second.second + total_count > best_sum) {
                result[0] = node;
                result[1] = it->second.first;
                best_sum = it->second.second + total_count;
            }
        }

        if (it == best.end() || total_count > it->second.second) {
            best[total_mask] = {node, total_count};
        }

        return {total_mask ,total_count};
    };

    dfs(root);
    return result;
}