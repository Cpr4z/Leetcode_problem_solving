#include "restore_shortest_path.hpp"

#include <queue>
#include <unordered_map>

bool isValidPos(int x, int y, const vector<vector<char>>& grid) {
    return x >= 0 && y >= 0 && grid.size() > x && y < grid[0].size();
}

void restorePath(const pair<int, int>& start, const pair<int, int>& finish, vector<vector<char>>& grid, unordered_map<string, pair<int, int>>& prev_pos) {
    const auto make_string = [](const pair<int, int>& pos) {
        return std::to_string(pos.first) + "," + std::to_string(pos.second);
    };

    pair<int, int> current_pos = prev_pos[make_string(finish)];
    while (current_pos != start) {
        grid[current_pos.first][current_pos.second] = 'X';
        current_pos = prev_pos[make_string(current_pos)];
    }
}

void bfs(const pair<int, int>& start, vector<vector<char>>& grid) {
    vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
    queue<pair<int, int>> queue;
    queue.emplace(start.first, start.second);
    visited[start.first][start.second] = true;
    unordered_map<string, pair<int, int>> prev_pos;
    constexpr std::array<pair<int, int>, 4> moves {{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};
    while (!queue.empty()) {
        const auto& current_pos = queue.front();
        queue.pop();
        if (grid[current_pos.first][current_pos.second] == 'F') {
            restorePath(start, current_pos, grid, prev_pos);
            return;
        }

        for (const auto [move_x, move_y] : moves) {
            int new_x = move_x + current_pos.first;
            int new_y = move_y + current_pos.second;
            if (isValidPos(new_x, new_y, grid) && !visited[new_x][new_y] && grid[new_x][new_y] != '#') {
                visited[new_x][new_y] = true;
                string key = std::to_string(new_x) + "," + std::to_string(new_y);
                prev_pos[key] = current_pos;
                queue.emplace(new_x, new_y);
            }
        }

    }
}

pair<int, int> findStart(const vector<vector<char>>& grid) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == 'S') {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

vector<vector<char>> shortestPathOnGrid(vector<vector<char>> grid) {
    const auto& start_pos = findStart(grid);
    bfs(start_pos, grid);
    return grid;
}