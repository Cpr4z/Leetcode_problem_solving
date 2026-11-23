#include "one_side_difference.hpp"

vector<int> findDifference(vector<int> nums1, vector<int> nums2) {
    int p1 = 0, p2 = 0;
    std::vector<int> result;
    while(p1 < nums1.size() && p2 < nums2.size()) {
        if (nums1[p1] == nums2[p2]) {
            ++p1;
        } else if (nums1[p1] < nums2[p2]) {
            result.push_back(nums1[p1]);
            ++p1;
        } else {
            ++p2;
        }
    }

    result.insert(result.end(), nums1.begin() + p1, nums1.end());
    return result;
}
