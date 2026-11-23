#include "k_closest_numbers.hpp"

vector<int> findNearestNumbers(vector<int> nums, int idx, int k) {
    if (!k) {
        return {};
    }

    int target = nums[idx];
    int l = idx - 1, r = idx + 1;
    std::vector<int> result {target};
    while (k > 1) {
        if (r >= nums.size() || (l >= 0 && (std::abs(target - nums[l])) < (std::abs(target - nums[r])))) {
            result.push_back(nums[l]);
            --l;
        } else {
            result.push_back(nums[r]);
            ++r;
        }

        --k;
    }

    return result;
}
