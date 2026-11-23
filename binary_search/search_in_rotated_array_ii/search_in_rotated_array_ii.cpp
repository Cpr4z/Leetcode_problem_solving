#include "search_in_rotated_array_ii.hpp"

bool search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target) {
            return true;
        }

        if (nums[middle] == nums[left] && nums[middle] == nums[right]) {
            ++left;
            --right;
            continue;
        }

        if (nums[left] <= nums[middle]) {
            // Левая часть массива отсортирована
            if (nums[left] <= target && nums[middle] > target) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        } else {
            // Правая часть массива отсортирована
            if (nums[right] > target && nums[middle] < target) {
                left = middle + 1;
            } else {
                right = middle -1;
            }
        }
    }

    return false;
}
