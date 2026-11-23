#include "selection_sort.hpp"

vector<int> selectionSort(vector<int> nums) {
    for (int i = 0; i < nums.size(); ++i) {
        int index = i;
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[j] < nums[index]) {
                index = j;
            }
        }
        std::swap(nums[index], nums[i]);
    }

    return nums;
}