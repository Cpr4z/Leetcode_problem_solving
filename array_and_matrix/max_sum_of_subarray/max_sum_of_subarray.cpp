#include "max_sum_of_subarray.hpp"

int maxSum(vector<int> nums) {
    int prefix = nums[0];
    int result = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        prefix = std::max(prefix + nums[i], nums[i]);
        result = std::max(result, prefix);
    }

    return result;
}
