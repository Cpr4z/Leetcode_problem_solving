#include "subarray_with_k_sum.hpp"

#include <unordered_map>

int countSubarrays(vector<int> nums, int target) {
    int current_prefix = 0;
    std::unordered_map<int, int> prefix;
    prefix[0] = 1;
    int result = 0;
    for (int num : nums) {
        current_prefix += num;
        if (prefix.contains(current_prefix - target)) {
            result += prefix[current_prefix - target];
        }

        ++prefix[current_prefix];
    }

    return result;
}
