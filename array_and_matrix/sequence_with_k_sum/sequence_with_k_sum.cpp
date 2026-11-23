#include "sequence_with_k_sum.hpp"

#include <unordered_map>

vector<int> subsequenceSumK(vector<int> nums, int k) {
    // n - кол-во элементов в массиве nums

    // Время: O(n)
    // Память: O(n)
    std::unordered_map<int, int> prefix_sums;
    prefix_sums[0] = -1;
    int prefix_sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefix_sum += nums[i];
        int target_sum = prefix_sum - k;
        if (prefix_sums.count(target_sum)) {
            return {prefix_sums[target_sum] + 1, i};
        }

        prefix_sums[prefix_sum] = i;
    }

    return {-1, -1};
}
