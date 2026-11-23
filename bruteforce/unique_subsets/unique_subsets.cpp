#include "unique_subsets.hpp"

vector<vector<int>> generateSubsets(vector<int> nums) {
    std::vector<std::vector<int>> result(1);
    for (int num : nums) {
        int current_size = result.size();
        for (int i = 0; i < current_size; ++i) {
            auto current_subset = result[i];
            current_subset.push_back(num);
            result.push_back(std::move(current_subset));
        }
    }

    return result;
}