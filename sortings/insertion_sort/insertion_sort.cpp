#include "insertion_sort.hpp"

vector<int> insertionSort(vector<int> nums) {
    for (int k = 1; k < nums.size(); ++k) {
        int i = k;
        while (i > 0 && nums[i] < nums[i - 1]) {
            std::swap(nums[i], nums[i - 1]);
            --i;
        }
    }

    return nums;
}
