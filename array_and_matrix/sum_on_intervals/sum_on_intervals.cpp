#include "sum_on_intervals.hpp"

PrefixArray::PrefixArray(vector<int> nums) {
    prefix.reserve(nums.size() + 1);
    prefix.push_back(0);
    for (int num : nums) {
        prefix.push_back(prefix.back() + num);
    }
}

int PrefixArray::sum(int left, int right) {
    return prefix[right + 1] - prefix[left];
}