#include "number_of_enclaves.hpp"

bool isValidPos(int x, int y, vector<vector<int>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

int dfs(int x, int y, vector<vector<int>>& grid) {
    if (!isValidPos(x, y, grid) || grid[x][y] == 0) {
        return 0;
    }

    int area = 1;
    grid[x][y] = 0;
    std::vector<std::pair<int, int>> moves {{x, y + 1}, {x, y - 1}, {x + 1, y}, {x - 1, y}};
    for (const auto [new_x, new_y] : moves) {
        area += dfs(new_x, new_y, grid);
    }

    return area;
}

int numEnclaves(vector<vector<int>>& grid) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (i == 0 || i == grid.size() - 1 || j == 0 || j == grid[0].size() - 1) {
                dfs(i, j, grid);
            }
        }
    }

    int enclaves_count = 0;
    for (int i = 1; i < grid.size(); ++i) {
        for (int j = 1; j < grid[1].size(); ++j) {
            if (grid[i][j]) {
                enclaves_count += dfs(i, j, grid);
            }
        }
    }

    return enclaves_count;
}