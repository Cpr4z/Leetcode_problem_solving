#include "paint_by_numbers.hpp"

bool isValidPos(int x, int y, std::vector<std::vector<int>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

void dfs(int x, int y, int color, std::vector<std::vector<int>>& grid, std::vector<std::vector<int>>& visited) {
    if (!isValidPos(x, y, grid) || grid[x][y] != color || visited[x][y]) {
        return;
    }

    visited[x][y] = 1;
    std::vector<std::pair<int, int>> positions {{x, y + 1}, {x, y - 1}, {x + 1, y}, {x - 1, y}};
    for (const auto [new_x, new_y] : positions) {
        dfs(new_x, new_y, grid[x][y], grid, visited);
    }
}

int draw(vector<vector<int>> grid) {
    int result = 0;
    std::vector<std::vector<int>> visited(grid.size(), std::vector<int>(grid[0].size(), 0));
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (!visited[i][j]) {
                dfs(i, j, grid[i][j], grid, visited);
                ++result;
            }
        }
    }

    return result;
}
