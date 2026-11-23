#include "sum_in_sorted_array.hpp"

vector<int> twoSum(vector<int> nums, int target) {
    int p1 = 0, p2 = nums.size() - 1;
    while (p1 <= p2) {
        int sum = nums[p1] + nums[p2];
        if (sum == target) {
            return {p1 + 1, p2 + 1};
        } else if (sum < target) {
            ++p1;
        } else {
            --p2;
        }
    }

    return { -1, -1 };
}