#include "merge_sort.hpp"

vector<int> merge(vector<int>& nums1, vector<int>& nums2) {
    int p1 = 0, p2 = 0;
    vector<int> result;
    result.reserve(nums1.size() + nums2.size());
    while (p1 < nums1.size() || p2 < nums2.size()) {
        if  (p2 >= nums2.size() || (p1 < nums1.size() && nums1[p1] < nums2[p2])) {
            result.push_back(nums1[p1]);
            ++p1;
        } else {
            result.push_back(nums2[p2]);
            ++p2;
        }
    }

    return result;
}

vector<int> mergeSort(vector<int> nums) {
    if (nums.size() <= 1) {
        return nums;
    }

    int pivot = nums.size() / 2;
    vector<int> left_path(nums.begin(), nums.begin() + pivot);
    vector<int> right_path(nums.begin() + pivot, nums.end());

    left_path = mergeSort(left_path);
    right_path = mergeSort(right_path);

    return merge(left_path, right_path);
}
