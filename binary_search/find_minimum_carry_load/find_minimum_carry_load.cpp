#include "find_minimum_carry_load.hpp"

#include <numeric>

bool is_valid_weight(const std::vector<int>& weights, int days, int max_load) {
    int days_count = 1;
    int current_weight = 0;
    for (int weight : weights) {
        if (current_weight + weight > max_load) {
            current_weight = 0;
            ++days_count;
        }

        current_weight += weight;
    }

    return days_count <= days;
}

int findShipCapacity(vector<int> weights, int days) {
    int max_weight = *std::max_element(weights.begin(), weights.end());
    int total_weight = std::accumulate(weights.begin(), weights.end(), 0);
    int l = max_weight - 1, r = total_weight;
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (is_valid_weight(weights, days, m)) {
            r = m;
        } else {
            l = m;
        }
    }

    return r;
}
