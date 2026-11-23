#include "max_area_of_island.hpp"

#include <queue>

// DFS
bool isValidPos(int x, int y, vector<vector<int>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

int dfs(int x, int y, vector<vector<int>>& grid) {
    if (!isValidPos(x, y, grid) || grid[x][y] == 0) {
        return 0;
    }

    grid[x][y] = 0;
    int area = 1;
    constexpr std::array<std::pair<int, int>, 4> directions {{
         {0, 1},
         {0, -1},
         {1, 0},
         {-1, 0}
    }};

    for (const auto [move_x, move_y] : directions) {
        area += dfs(x + move_x, y + move_y, grid);
    }

    return area;
}



int maxAreaOfIslandDFS(vector<vector<int>>& grid) {
    int max_area = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == 1) {
                max_area = std::max(max_area, dfs(i, j, grid));
            }
        }
    }

    return max_area;
}



// BFS
int bfs(int x, int y, vector<vector<int>>& grid) {
    grid[x][y] = 0;
    queue<std::pair<int, int>> queue;
    queue.emplace(x, y);
    constexpr std::array<std::pair<int, int>, 4> directions {{
         {0, 1},
         {0, -1},
         {1, 0},
         {-1, 0}
    }};

    int area = 1;
    while (!queue.empty()) {
        const auto [current_x, current_y] = queue.front();
        queue.pop();
        for (const auto [move_x, move_y] : directions) {
            int new_x = current_x + move_x;
            int new_y = current_y + move_y;
            if (new_x < 0 || new_x >= grid.size() || new_y < 0 || new_y >= grid[0].size()) {
                continue;
            }

            if (grid[new_x][new_y] == 0) {
                continue;
            }

            ++area;
            grid[new_x][new_y] = 0;
            queue.emplace(new_x, new_y);
        }
    }

    return area;
}



int maxAreaOfIslandBFS(vector<vector<int>>& grid) {
    int max_area = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == 1) {
                max_area = std::max(max_area, bfs(i, j, grid));
            }
        }
    }

    return max_area;
}