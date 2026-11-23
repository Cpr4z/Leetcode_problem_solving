#include "counting_sort.hpp"

vector<int> countingSort(vector<int> nums) {
    if (nums.empty()) {
        return nums;
    }

    int min_element = *std::min_element(nums.begin(), nums.end());
    int max_element = *std::max_element(nums.begin(), nums.end());
    vector<int> result(max_element - min_element + 1, 0);
    for (int num : nums) {
        ++result[num - min_element];
    }

    int write = 0;
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i]; ++j) {
            nums[write] = i + min_element;
            ++write;
        }
    }

    return nums;
}