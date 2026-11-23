#include "delete_repeats.hpp"

vector<int> removeDuplicates(vector<int> nums) {
    int slow = 0, fast = 1;
    while (fast < nums.size()) {
        if (nums[slow] != nums[fast]) {
            ++slow;
            nums[slow] = nums[fast];
        }

        ++fast;
    }

    nums.resize(slow + 1);
    return nums;
}