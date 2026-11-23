#include "quick_sort.hpp"

vector<int> quickSort(vector<int> nums) {
    if (nums.size() <= 1) {
        return nums;
    }

    int pivot = nums[rand() % nums.size()];
    vector<int> pivot_;
    vector<int> left;
    vector<int> right;
    for (int num : nums) {
        if (num < pivot) {
            left.push_back(num);
        } else if (num > pivot) {
            right.push_back(num);
        } else {
            pivot_.push_back(num);
        }
    }

    vector<int> left_ = quickSort(left);
    vector<int> right_ = quickSort(right);
    vector<int> result;
    result.insert(result.end(), left_.begin(), left_.end());
    result.insert(result.end(), pivot_.begin(), pivot_.end());
    result.insert(result.end(), right_.begin(), right_.end());

    return result;
}