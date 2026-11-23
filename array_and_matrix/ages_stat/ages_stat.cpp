#include "ages_stat.hpp"

vector<int> buildReport(vector<int> ages, vector<vector<int>> stats) {
    int ages_stat[141]{0};
    for (int age : ages) {
        ++ages_stat[age];
    }

    int prefix_age[142]{0};
    for (int i = 1; i < 142; ++i) {
        prefix_age[i] = prefix_age[i - 1] + ages_stat[i - 1];
    }

    std::vector<int> result(stats.size(), 0);
    for (int i = 0; i < stats.size(); ++i) {
        int raw_low = stats[i][0];
        int raw_high = stats[i][1];
        if (raw_low > 140 || raw_high < 0) {
            continue;
        }

        int low_age = std::max(raw_low, 0);
        int high_age = std::min(140, raw_high);
        result[i] = prefix_age[high_age + 1] - prefix_age[low_age];
    }

    return result;
}