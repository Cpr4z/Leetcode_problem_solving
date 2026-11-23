#include "number_of_islands_i.hpp"

bool isValidPos(int x, int y, vector<vector<int>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

void dfs(int x, int y, vector<vector<int>>& grid) {
    if (!isValidPos(x, y, grid) || grid[x][y] == 0) {
        return;
    }

    grid[x][y] = 0;
    std::vector<std::pair<int, int>> moves {{x, y + 1}, {x, y - 1}, {x + 1, y}, {x - 1, y}};
    for (const auto [new_x, new_y] : moves) {
        dfs(new_x, new_y, grid);
    }
}

// [[1,0,0]
// ,[1,1,0]
// ,[1,1,1]
// ,[1,0,0]]

// 0 0
// 0 1

int numIslands(vector<vector<int>> grid) {
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (i == 0 || i == grid.size() - 1 || j == 0 || j == grid[0].size() - 1) {
                dfs(i, j, grid);
            }
        }
    }

    int result = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j]) {
                dfs(i, j, grid);
                ++result;
            }
        }
    }

    return result;
}