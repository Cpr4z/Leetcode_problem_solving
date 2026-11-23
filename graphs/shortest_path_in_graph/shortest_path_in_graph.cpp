#include "shortest_path_in_graph.hpp"

#include <queue>

vector<int> bfs(int start, int end, unordered_map<int, vector<int>>& graph) {
    queue<int> queue;
    queue.push(start);
    vector<int> path;
    unordered_map<int, int> visited;
    visited[start] = -1;
    while (!queue.empty()) {
        const int current_vertex = queue.front();
        queue.pop();
        if (current_vertex == end) {
            break;
        }

        for (int neighbour : graph[current_vertex]) {
            if (!visited.contains(neighbour)) {
                queue.push(neighbour);
                visited[neighbour] = current_vertex;
            }
        }
    }

    if (!visited.contains(end)) {
        return {};
    }

    int current_vertex = end;
    while (current_vertex != -1) {
        path.push_back(current_vertex);
        current_vertex = visited[current_vertex];
    }

    std::reverse(path.begin(), path.end());
    return path;
}

vector<int> findShorteshPath(vector<vector<int>> edges, int start, int end) {
    unordered_map<int, vector<int>> adj_list;
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    return bfs(start, end, adj_list);
}
