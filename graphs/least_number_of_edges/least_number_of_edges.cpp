#include "least_number_of_edges.hpp"

#include <queue>
#include <unordered_set>

int bfs(int start, int finish, unordered_map<int, vector<int>>& graph) {
    struct Node {
        int number, dist;
    };

    queue<Node> queue;
    queue.emplace(start, 0);
    unordered_set<int> visited;
    visited.insert(start);
    while (!queue.empty()) {
        const auto current_node = queue.front();
        queue.pop();
        if (current_node.number == finish) {
            return current_node.dist;
        }

        for (int neighbour : graph[current_node.number]) {
            if (!visited.contains(neighbour)) {
                visited.insert(neighbour);
                queue.emplace(neighbour, current_node.dist + 1);
            }
        }
    }

    return -1;
}

int shortestEdgeDistance(vector<vector<int>> edges, int start, int finish) {
    unordered_map<int, vector<int>> adj_list;
    for (const auto& edge : edges) {
        adj_list[edge[0]].push_back(edge[1]);
        adj_list[edge[1]];
    }

    return bfs(start, finish, adj_list);
}
