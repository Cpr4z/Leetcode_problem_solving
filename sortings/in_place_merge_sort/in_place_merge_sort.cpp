#include "in_place_merge_sort.hpp"

void merge(vector<int>& nums, int l, int mid, int r) {
    vector<int> buffer(nums.begin() + l, nums.begin() + mid);
    int p1 = mid;
    int p2 = 0;
    int write = l;
    while (p1 < r || p2 < buffer.size()) {
        if (p2 >= buffer.size() || (p1 < r && nums[p1] <= buffer[p2])) {
            nums[write] = nums[p1];
            ++p1;
        } else {
            nums[write] = buffer[p2];
            ++p2;
        }

        ++write;
    }
}

void mergeSortPartial(vector<int>& nums, int l, int r) {
    if (r - l <= 1) {
        return;
    }

    int mid = l + (r - l) / 2;
    mergeSortPartial(nums, l, mid);
    mergeSortPartial(nums, mid, r);
    merge(nums, l, mid, r);
}

vector<int> mergeSort(vector<int> nums) {
    mergeSortPartial(nums, 0, nums.size());
    return nums;
}