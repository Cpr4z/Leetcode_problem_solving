#include "is_monotonic.hpp"

bool isMonotonic(vector<int>& nums) {
    bool is_asc = true;
    bool is_des = true;
    for (int i = 1; i < nums.size(); ++i) {
        is_asc = is_asc && nums[i - 1] <= nums[i];
        is_des = is_des && nums[i - 1] >= nums[i];
    }

    return is_asc || is_des;
}
