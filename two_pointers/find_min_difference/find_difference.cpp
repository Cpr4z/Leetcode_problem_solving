#include "find_difference.hpp"

// Ввод: nums1 = [1,15,3], nums2 = [10,21,30]
//Вывод: 5
//Объяснение: |15 - 10| = 5

//Ввод: nums1 = [-5,0], nums2 = [10,-2,3]
//Вывод: 2
//Объяснение: |0 - (-2)| = 2

int findDifference(vector<int> nums1, vector<int> nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    int min_difference = INT_MAX;
    int p1 = 0, p2 =0;
    while (p1 < nums1.size() && p2 < nums2.size()) {
        min_difference = std::min(min_difference, std::abs(nums1[p1] - nums2[p2]));
        if (nums1[p1] < nums2[p2]) {
            ++p1;
        } else if (nums2[p2] < nums1[p1]) {
            ++p2;
        } else {
            return 0;
        }
    }

    return min_difference;
}
