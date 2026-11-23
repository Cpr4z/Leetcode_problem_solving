#include "missing_number.hpp"

int missingNumber(vector<int> nums) {
    int arithmetic_sum = (nums.size() + 1) * nums.size() / 2;
    int sum = 0;
    for (int i  = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }

    return arithmetic_sum - sum;
}
