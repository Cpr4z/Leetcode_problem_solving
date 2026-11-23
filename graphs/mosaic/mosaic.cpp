#include "mosaic.hpp"

#include <unordered_map>

bool isValidPos(int x, int y, vector<vector<int>> grid) {
    return x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size();
}

void dfs(int x,int y, int color, vector<vector<int>>& grid, vector<vector<char>>& visited) {
    if (!isValidPos(x, y, grid) || color != grid[x][y] || visited[x][y]) {
        return;
    }

    visited[x][y] = 1;
    constexpr std::array<std::pair<int, int>, 4> directions {{
                                                                     {0, 1},
                                                                     {0, -1},
                                                                     {1, 0},
                                                                     {-1, 0}
                                                             }};

    for (const auto [move_x, move_y] : directions) {
        dfs(x + move_x, y + move_y, color, grid, visited);
    }
}

int maxComponents(vector<vector<int>> grid) {
    std::unordered_map<int, int> colors;
    std::vector<vector<char>> visited(grid.size(), std::vector<char>(grid[0].size(), 0));
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (!visited[i][j]) {
                int color = grid[i][j];
                ++colors[color];
                dfs(i, j, color, grid, visited);
            }
        }
    }

    int max_count = 0;
    for (const auto [color, count] : colors) {
        max_count = std::max(max_count, count);
    }

    for (const auto [color, count] : colors) {
        if (count == max_count) {
            return color;
        }
    }

    return 0;
}