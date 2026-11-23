#include "part_array_with_diff_k.hpp"

vector<int> partitionArray(vector<int> nums, int k) {
    if (nums.empty()) {
        return {};
    }

    int max_elem = *std::max_element(nums.begin(), nums.end());
    int min_elem = *std::min_element(nums.begin(), nums.end());
    vector<int> low_half, medium_half, high_half;
    for (int num : nums) {
        bool is_low = (num - min_elem) <= k;
        bool is_high = (max_elem - num) <= k;
        if (is_low && is_high) {
            medium_half.push_back(num);
        } else if (is_low) {
            low_half.push_back(num);
        } else if (is_high) {
            high_half.push_back(num);
        } else {
            return {};
        }
    }

    int half_size = nums.size() / 2;
    if (half_size < low_half.size() || half_size < high_half.size()) {
        return {};
    }

    low_half.insert(low_half.end(), medium_half.begin(), medium_half.end());
    low_half.insert(low_half.end(), high_half.begin(), high_half.end());
    return low_half;
}
