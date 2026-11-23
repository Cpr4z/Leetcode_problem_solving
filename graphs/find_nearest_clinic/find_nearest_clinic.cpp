#include "find_nearest_clinic.hpp"

bool isValidPos(int x, int y, const vector<vector<char>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

pair<int, int> getStartPos(const vector<vector<char>>& grid) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == 'P') {
                return {i ,j};
            }
        }
    }

    return {-1, -1};
}

vector<int> bfs(int x, int y, const vector<vector<char>>& grid) {
    struct Node {
        int x, y, dist;
    };

    vector<vector<bool>> used(grid.size(), vector<bool>(grid[0].size(), false));
    queue<Node> queue;
    queue.emplace(x, y, 0);
    used[x][y] = true;
    constexpr std::array<pair<int, int>, 4> moves{{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};
    while (!queue.empty()) {
        const auto current_pos = queue.front();
        queue.pop();
        if (grid[current_pos.x][current_pos.y] == 'C') {
            return {current_pos.x, current_pos.y};
        }

        for (const auto[move_x, move_y] : moves) {
            int new_x = move_x + current_pos.x;
            int new_y = move_y + current_pos.y;
            if (isValidPos(new_x, new_y, grid) && !used[new_x][new_y] && grid[new_x][new_y] != '#') {
                used[new_x][new_y] = true;
                queue.emplace(new_x, new_y, current_pos.dist + 1);
            }
        }
    }

    return {-1, -1};
}

vector<int> nearestClinic(vector<vector<char>> grid) {
    const auto start = getStartPos(grid);
    return bfs(start.first, start.second, grid);
}