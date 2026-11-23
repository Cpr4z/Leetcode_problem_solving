#include "top_k_frequency_elements.hpp"

#include <unordered_map>
#include <set>

vector<int> topKFrequent(vector<int> nums, int k) {
    std::unordered_map<int, int> counter;
    for (int num : nums) {
        ++counter[num];
    }

    std::vector<std::vector<int>> table(nums.size() + 1);
    for (const auto [num, count] : counter) {
        table[count].push_back(num);
    }

    int table_size = table.size();
    std::vector<int> result;
    for (int i = table_size - 1; i >= 0 && k > 0; --i) {
        for (int j = 0; j < table[i].size() && k > 0; ++j) {
            result.push_back(table[i][j]);
            --k;
        }
    }

    return result;
}
