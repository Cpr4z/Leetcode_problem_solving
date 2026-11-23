#include "subinterval_with_min_x.hpp"

// Ввод: nums = [0, 2, 4, 0], x = 2
int longestSubarrayWithMin(vector<int> nums, int x) {
    int result = -1;
    int length = 0;
    bool has_x = false;
    for (int num : nums) {
        if (num < x) {
            length = 0;
            has_x = false;
        } else {
            ++length;
            has_x = has_x || x == num;
            if (has_x) {
                result = std::max(result, length);
            }
        }
    }

    return result;
}
