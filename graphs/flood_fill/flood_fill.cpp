#include "flood_fill.hpp"

#include <queue>

// DFS
bool isValidPos(int x, int y, vector<vector<int>>& image) {
    return x >= 0 && y >= 0 && x < image.size() && y < image[0].size();
}

void dfs(int x, int y, vector<vector<int>>& image, int from_color, int to_color) {
    if (!isValidPos(x, y, image) || image[x][y] != from_color || image[x][y] == to_color) {
        return;
    }

    image[x][y] = to_color;
    constexpr std::array<std::pair<int, int>, 4> directions{{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};
    for (const auto [move_x, move_y] : directions) {
        int new_x = x + move_x;
        int new_y = y + move_y;
        dfs(new_x, new_y, image, from_color, to_color);
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    dfs(sr, sc, image, image[sr][sc], color);
    return image;
}




// BFS
void bfs(int x, int y, vector<vector<int>>& image, int to_color) {
    std::queue<std::pair<int, int>> queue;
    int from_color = image[x][y];
    image[x][y] = to_color;
    queue.emplace(x, y);
    constexpr std::array<std::pair<int, int>, 4> moves {{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};
    while (!queue.empty()) {
        const auto [current_x, current_y] = queue.front();
        queue.pop();
        for (const auto [move_x, move_y] : moves) {
            int new_x = current_x + move_x;
            int new_y = current_y + move_y;
            if (new_x < 0 || new_x >= image.size() || new_y < 0 || new_y >= image[0].size()) {
                continue;
            }

            int current_color = image[new_x][new_y];
            if (current_color != from_color || current_color == to_color) {
                continue;
            }

            image[new_x][new_y] = to_color;
            queue.emplace(new_x, new_y);
        }
    }
}



vector<vector<int>> floodFillBFS(vector<vector<int>>& image, int sr, int sc, int color) {
    bfs(sr, sc, image, color);
    return image;
}