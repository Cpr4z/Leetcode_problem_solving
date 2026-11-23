#include "number_of_islands_ii.hpp"

#include <queue>

/// DFS решение

// По времени: O(m * n)
// По памяти: O(m * n)
bool isValidPos(int x, int y, vector<vector<char>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

void dfs(int x, int y, vector<vector<char>>& grid) {
    if (!isValidPos(x, y, grid) || grid[x][y] == '0') {
        return;
    }

    grid[x][y] = '0';
    std::vector<std::pair<int, int>> positions {{x, y + 1}, {x, y - 1}, {x + 1, y}, {x - 1, y}};
    for (const auto[pos_x, pos_y] : positions) {
        dfs(pos_x, pos_y, grid);
    }
}

int numIslandsDFS(vector<vector<char>>& grid) {
    int result = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j =0; j < grid[0].size(); ++j) {
            if (grid[i][j] == '1') {
                dfs(i, j, grid);
                ++result;
            }
        }
    }

    return result;
}



void bfs(int x, int y, vector<vector<char>>& grid) {
    std::queue<std::pair<int, int>> queue;
    queue.emplace(x, y);
    grid[x][y] = '0';
    constexpr std::array<std::pair<int, int>, 4> directions {{
             {0, 1},
             {0, -1},
             {1, 0},
             {-1, 0}
     }};
    while (!queue.empty()) {
        const auto [current_x, current_y] = queue.front();
        queue.pop();
        for (const auto [x_move, y_move] : directions) {
            int new_x = current_x + x_move;
            int new_y = current_y + y_move;

            if (new_x < 0 || new_x > grid.size() || new_y < 0 || new_y > grid[0].size()) {
                continue;
            }

            if (grid[new_x][new_y] == '0') {
                continue;
            }

            grid[new_x][new_y] = '0';
            queue.emplace(new_x, new_y);
        }
    }
}

int numIslandsBFS(vector<vector<char>>& grid) {
    int result = 0;
    for (int i  = 0; i < grid.size(); ++i) {
        for (int j  = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == '1') {
                bfs(i, j, grid);
                ++result;
            }
        }
    }

    return result;
}