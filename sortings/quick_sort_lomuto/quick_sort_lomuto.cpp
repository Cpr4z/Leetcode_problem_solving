#include "quick_sort_lomuto.hpp"

int partition(vector<int>& nums, int l, int r) {
    int pivot = nums[r];
    int i = l;
    for (int j = l; j < r; ++j) {
        if (nums[j] <= pivot) {
            std::swap(nums[i], nums[j]);
            ++i;
        }
    }

    swap(nums[i], nums[r]);
    return i;
}

void quickSortHelper(vector<int>& nums, int l, int r) {
    if (l < r) {
        int index = partition(nums, l, r);
        quickSortHelper(nums, l, index - 1);
        quickSortHelper(nums, index + 1, r);
    }
}

vector<int> quickSort(vector<int> nums) {
    if (!nums.empty()) {
        quickSortHelper(nums, 0, nums.size() - 1);
    }

    return nums;
}
