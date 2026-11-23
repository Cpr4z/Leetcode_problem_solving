#include "keys_and_rooms.hpp"

// DFS
bool dfs(int current, vector<vector<int>>& rooms, vector<char>& visited, int& remaining) {
    if (--remaining == 0) {
        return true;
    }

    visited[current] = 1;
    for (int room : rooms[current]) {
        if (!visited[room] && dfs(room, rooms, visited, remaining)) {
            return true;
        }
    }

    return false;
}

bool canVisitAllRoomsDFS(vector<vector<int>>& rooms) {
    int remaining = rooms.size();
    vector<char> visited(remaining, 0);
    return dfs(0, rooms, visited, remaining);
}



// BFS
bool canVisitAllRoomsBFS(vector<vector<int>>& rooms) {
    int rooms_count = rooms.size();
    std::vector<int> queue;
    queue.push_back(0);
    queue.reserve(rooms_count);
    std::vector<char> visited(rooms_count, 0);
    visited[0] = 1;
    int remaining = rooms_count - 1;
    while (!queue.empty()) {
        int current_room = queue.back();
        queue.pop_back();
        for (int room : rooms[current_room]) {
            if (visited[room]) {
                continue;
            }

            visited[room] = 1;
            if (--remaining == 0) {
                return true;
            }

            queue.push_back(room);
        }
    }

    return false;
}