#include "quick_sort_hoara.hpp"

int partition(vector<int>& nums, int l, int r) {
    int pivot = nums[(l + r) / 2];
    while (true) {
        while (nums[l] < pivot) {
            ++l;
        }

        while (nums[r] > pivot) {
            --r;
        }

        if (l >= r) {
            return r;
        }

        swap(nums[l], nums[r]);
        ++l;
        --r;
    }

    return -1;
}

void quickSortHelper(vector<int>& nums, int l, int r) {
    if (r - l <= 1) {
        return;
    }

    int index = partition(nums, l, r);
    quickSortHelper(nums, l , index);
    quickSortHelper(nums, index + 1 , r);
}


vector<int> quickSort(vector<int>& nums) {
    if (!nums.empty()) {
        quickSortHelper(nums, 0, nums.size() - 1);
    }

    return nums;
}