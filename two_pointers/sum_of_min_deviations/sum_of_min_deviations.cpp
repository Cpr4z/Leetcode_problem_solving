#include "sum_of_min_deviations.hpp"

int findMinimum(vector<int> nums1, vector<int> nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.begin());

    int p1 = 0, p2 = 0;
    int min_diff_sum = 0;
    while (p2 < nums2.size()) {
        if (p1 + 1 < nums1.size() && std::abs(nums1[p1 + 1] - nums2[p2]) < std::abs(nums1[p1] - nums2[p2])) {
            ++p1;
        } else {
            min_diff_sum += std::abs(nums1[p1] - nums2[p2]);
            ++p2;
        }
    }

    return min_diff_sum;
}