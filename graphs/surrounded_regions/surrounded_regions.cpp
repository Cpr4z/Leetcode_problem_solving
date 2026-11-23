#include "surrounded_regions.hpp"

bool isValidPos(int x, int y, vector<vector<char>>& grid) {
    return x >= 0 && y >= 0 && x < grid.size() && y < grid[0].size();
}

void dfs(int x, int y, vector<vector<char>>& board) {
    if (!isValidPos(x, y, board) || board[x][y] != 'O') {
        return;
    }

    board[x][y] = '#';
    constexpr std::array<std::pair<int, int>, 4> directions {{
         {0, 1},
         {0, -1},
         {1, 0},
         {-1, 0}
     }};

    for (const auto [move_x, move_y] : directions) {
        dfs(x + move_x, y + move_y, board);
    }
}


void solve(vector<vector<char>>& board) {
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if ((i == 0 || j == 0 || i == board.size() - 1 || j == board[0].size() - 1) && board[i][j] == 'O') {
                dfs(i, j, board);
            }
        }
    }

    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (board[i][j] == 'O') {
                board[i][j] = 'X';
            } else if (board[i][j] == '#') {
                board[i][j] = 'O';
            }
        }
    }
}