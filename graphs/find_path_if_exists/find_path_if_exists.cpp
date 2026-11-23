#include "find_path_if_exists.hpp"

#include <queue>


// BFS
bool validPathBFS(int n, vector<vector<int>>& edges, int source, int destination) {
    if (source == destination) {
        return true;
    }

    std::vector<std::vector<int>> adj_list(n);
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    std::queue<int> queue;
    queue.push(source);
    std::vector<int> visited(n, 0);
    visited[source] = 1;
    while (!queue.empty()) {
        int current = queue.front();
        queue.pop();
        if (current == destination) {
            return true;
        }

        for (int vertex : adj_list[current]) {
            if (vertex == destination) {
                return true;
            }

            if (!visited[vertex]) {
                queue.push(vertex);
                visited[vertex] = 1;
            }
        }
    }

    return false;
}


// DFS
bool dfs(int current, int destination, vector<vector<int>>& adj_list, vector<int>& visited) {
    if (current == destination) {
        return true;
    }

    visited[current] = 1;
    for (const int vertex : adj_list[current]) {
        if (!visited[vertex] && dfs(vertex, destination, adj_list, visited)) {
            return true;
        }
    }

    return false;
}

bool validPathDFS(int n, vector<vector<int>>& edges, int source, int destination) {
    if (source == destination) {
        return true;
    }

    vector<vector<int>> adj_list(n);
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]].push_back(edge[0]);
    }

    vector<int> visited(n, 0);
    return dfs(source, destination, adj_list, visited);
}