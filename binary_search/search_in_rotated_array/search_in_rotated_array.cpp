#include "search_in_rotated_array.hpp"

// {4,8,9,1,2}
// {6,1,2,3,4,5}

int search_offset(const vector<int>& nums) {
    int l = -1, r = nums.size() - 1;
    int last_value = nums.back();
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (nums[m] > last_value) {
            l = m;
        } else {
            r = m;
        }
    }

    return r;
}

int search(vector<int> nums, int k) {
    int offset = search_offset(nums);
    int nums_size = nums.size();
    int l = offset, r = offset + nums_size;
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        int m_ = m % nums_size;
        if (nums[m_] <= k) {
            l = m;
        } else {
            r = m;
        }
    }

    return nums[l % nums_size] == k ? l % nums_size : -1;
}
