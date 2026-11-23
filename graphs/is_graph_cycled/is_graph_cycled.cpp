#include "is_graph_cycled.hpp"

#include <unordered_map>
#include <queue>

bool dfs(int vertex, std::unordered_map<int, std::vector<int>>& graph, std::unordered_map<int, int>& colors) {
    colors[vertex] = 1;
    for (int neighbour : graph[vertex]) {
        int color = colors.contains(neighbour) ? colors[neighbour] : 0;
        if (color == 1) {
            return true;
        }

        if (color == 0 && dfs(neighbour, graph, colors)) {
            return true;
        }
    }

    colors[vertex] = 2;
    return false;
}

bool hasCycle(vector<vector<int>> edges) {
    std::unordered_map<int, std::vector<int>> adj_list;
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
    }

    std::unordered_map<int, int> colors;
    for (const auto&[vertex, neighbours]: adj_list) {
        if (colors[vertex] == 0 && dfs(vertex, adj_list, colors)) {
            return true;
        }
    }

    return false;
}
