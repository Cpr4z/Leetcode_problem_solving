#include "topological_sort.hpp"

bool dfs(int i, const vector<vector<int>>& graph, vector<int>& colors, vector<int>& result) {
    colors[i] = 1;
    for (int neighbour : graph[i]) {
        if (colors[neighbour] == 1) {
            return true;
        }

        if (colors[neighbour] == 2) {
            continue;
        }

        if (dfs(neighbour, graph, colors, result)) {
            return true;
        }
    }

    colors[i] = 2;
    result.push_back(i);
    return false;
}

vector<int> topologicalSort(const vector<vector<int>>& graph) {
    vector<int> colors(graph.size(), 0);
    vector<int> result;
    for (int i = 0; i < graph.size(); ++i) {
        if (colors[i] == 0) {
            if (dfs(i, graph, colors, result)) return {};
        }
    }

    std::reverse(result.begin(), result.end());
    return result;
}
