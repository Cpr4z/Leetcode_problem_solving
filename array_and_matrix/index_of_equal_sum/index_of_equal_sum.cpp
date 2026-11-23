#include "index_of_equal_sum.hpp"

int pivotIndex(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    int prefix = 0;
    int suffix = sum;
    for (int i = 0; i < nums.size(); ++i) {
        suffix -= nums[i];
        if (suffix == prefix) {
            return i;
        }

        prefix += nums[i];
    }


    return -1;
}
