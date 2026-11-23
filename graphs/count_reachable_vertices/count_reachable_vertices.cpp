#include "count_reachable_vertices.hpp"

#include <unordered_map>
#include <unordered_set>

void dfs(int vertex, unordered_map<int, vector<int>>& edges, unordered_set<int>& visited) {
    visited.insert(vertex);
    for (int other : edges[vertex]) {
        if (!visited.contains(other)) {
            dfs(other, edges, visited);
        }
    }
}


int reachableNodesCount(vector<vector<int>> edges, int start) {
    unordered_map<int, vector<int>> adj_list;
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    unordered_set<int> visited(adj_list.size());
    dfs(start, adj_list, visited);
    return (int)visited.size() - 1;
}
