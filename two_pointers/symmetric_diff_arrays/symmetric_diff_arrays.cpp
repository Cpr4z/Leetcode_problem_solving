#include "symmetric_diff_arrays.hpp"

vector<int> findDifference(vector<int> nums1, vector<int> nums2) {
    std::vector<int> result;
    int p1 = 0, p2 = 0;
    while (p1 < nums1.size() && p2 < nums2.size()) {
        if (nums1[p1] == nums2[p2]) {
            ++p1;
            ++p2;
            continue;
        } else if (nums1[p1] < nums2[p2]) {
            result.push_back(nums1[p1]);
            ++p1;
        } else {
            result.push_back(nums2[p2]);
            ++p2;
        }
    }

    result.insert(result.end(), nums1.begin() + p1, nums1.end());
    result.insert(result.end(), nums2.begin() + p2, nums2.end());

    return result;
}