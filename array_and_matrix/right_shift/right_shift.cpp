#include "right_shift.hpp"

void rotate_array(vector<int>& nums, int begin, int end) {
    while (begin < end) {
        std::swap(nums[begin], nums[end]);
        ++begin;
        --end;
    }
}

vector<int> shift(vector<int> nums, int k) {
    int n = nums.size();
    k = k % n;
    rotate_array(nums, 0, n - 1);
    rotate_array(nums, 0, k - 1);
    rotate_array(nums, k, n - 1);
    return nums;
}