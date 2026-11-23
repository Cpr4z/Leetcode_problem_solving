#include "binary_search.hpp"

// [-1,0,3,5,9,12], target = 9
// 4

// [-1,0,3,5,9,12], target = 2
// -1

// 17:42
// 17:55

int search(std::vector<int>& nums, int target) {
    int begin = 0;
    int end = nums.size() - 1;
    int pivot = nums.size() / 2;
    // Память O(1)
    // Алгоритмическая сложность: O(log(n))
    while (begin <= end) {
        if (nums[pivot] < target) {
            begin = pivot + 1;
            pivot = begin + (end - begin) / 2;
        } else if (nums[pivot] > target) {
            end = pivot - 1;
            pivot = begin + (end - begin) / 2;
        } else {
            return pivot;
        }
    }

    return -1;
}

int search2(std::vector<int>& nums, int target) {
    int l = 0, r = nums.size();
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (nums[m] <= target) {
            l = m;
        } else {
            r = m;
        }
    }

    return nums[l] == target ? l : -1;
}

int search3(std::vector<int>& nums, int target) {
    int l = 0, r = nums.size();
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (nums[m] >= target) {
            r = m;
        } else {
            l = m;
        }
    }

    return nums[r] == target ? r : -1;
}