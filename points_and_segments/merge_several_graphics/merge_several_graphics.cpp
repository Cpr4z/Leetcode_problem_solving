#include "merge_several_graphics.hpp"

#include <queue>

vector<vector<int>> merge(vector<vector<vector<int>>> graphics) {
    int k = (int)graphics.size();
    vector<int> current_values(k, 0);
    // время, номер графика, номер точки внутри графика
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, std::greater<>> queue;
    for (int i = 0; i < k; ++i) {
        if (!graphics[i].empty()) {
            queue.emplace(graphics[i][0][0], i, 0);
        }
    }

    vector<vector<int>> result;
    while (!queue.empty()) {
        const auto [cur_time, cur_graphic, cur_point] = queue.top();
        queue.pop();

        current_values[cur_graphic] = graphics[cur_graphic][cur_point][1];
        int total = 0;
        for (int value : current_values) {
            total += value;
        }

        if (!result.empty() && result.back()[0] == cur_time) {
            result.back()[1] = total;
        } else {
            result.push_back({cur_time, total});
        }

        if (cur_point + 1 < graphics[cur_graphic].size()) {
            queue.emplace(graphics[cur_graphic][cur_point + 1][0], cur_graphic, cur_point + 1);
        }
    }

    return result;
}
