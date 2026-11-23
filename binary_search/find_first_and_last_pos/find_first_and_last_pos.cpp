#include "find_first_and_last_pos.hpp"

int find_first_pos(const std::vector<int>& nums, int k) {
    int l = -1, r = nums.size() - 1;
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (nums[m] < k) {
            l = m;
        } else {
            r = m;
        }
    }

    return nums[r] == k ? r : -1;
}

int find_last_pos(const std::vector<int>& nums, int k) {
    int l = 0, r = nums.size();
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (nums[m] <= k) {
            l = m;
        } else {
            r = m;
        }
    }

    return nums[l] == k ? l : -1;
}

vector<int> search(vector<int> nums, int k) {
    int first = find_first_pos(nums, k);
    int last = -1;
    if (first != -1) {
        last = find_last_pos(nums, k);
    }

    return {first, last};
}