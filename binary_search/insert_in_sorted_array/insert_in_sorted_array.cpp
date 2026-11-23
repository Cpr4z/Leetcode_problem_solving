#include "insert_in_sorted_array.hpp"

int searchInsertIndex(vector<int> nums, int target) {
    int l = 0;
    int r = nums.size();
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (nums[m] <= target) {
            l = m;
        } else {
            r = m;
        }
    }

    if (nums[l] >= target) {
        return l;
    }

    return r;
}
