#include "cycled_dependencies.hpp"

#include <unordered_map>

bool dfs(const string& dep,  unordered_map<string, vector<string>>& graph, unordered_map<string, int>& colors) {
    colors[dep] = 1;
    for (const string& neighbour : graph[dep]) {
        int color = colors.contains(neighbour) ? colors[neighbour] : 0;
        if (color == 1) {
            return true;
        }

        if (color == 0 && dfs(neighbour, graph, colors)) {
            return true;
        }
    }

    colors[dep] = 2;
    return false;
}


bool hasCircularDependency(vector<vector<string>> deps) {
    unordered_map<string, vector<string>> adj_list;
    for (const auto& dep : deps) {
        adj_list[dep[0]].push_back(dep[1]);
        if (adj_list.find(dep[1]) == adj_list.end()) {
            adj_list[dep[1]] = {};
        }
    }

    unordered_map<string, int> colors(adj_list.size());
    for (const auto& [dep, neighbours] : adj_list) {
        if (colors[dep] == 0 && dfs(dep, adj_list, colors)) {
            return true;
        }
    }

    return false;
}
