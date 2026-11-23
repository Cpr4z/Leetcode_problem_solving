#include "summarize_graphics.hpp"

vector<vector<int>> merge(vector<vector<int>> nums1, vector<vector<int>> nums2) {
    // n - число интервалов в nums1
    // m - число интервалов в nums2

    // Время: О(n log(n))
    std::sort(nums1.begin(), nums1.end(), [](const std::vector<int>& lhs, const std::vector<int>& rhs) {
        return lhs[0] < rhs[0];
    });

    // Время: O(m log(m))
    std::sort(nums2.begin(), nums2.end(), [](const std::vector<int>& lhs, const std::vector<int>& rhs) {
        return lhs[0] < rhs[0];
    });

    // O(n + m)
    std::vector<std::vector<int>> result;
    int p1 = 0;
    int p2 = 0;
    int currentValue1 = 0;
    int currentValue2 = 0;
    int time = 0;

    // Время O(max(n, m))
    while (p1 < nums1.size() || p2 < nums2.size()) {
        bool has_p1 = p1 < nums1.size();
        bool has_p2 = p2 < nums2.size();

        if (has_p1 && has_p2) {
            time = std::min(nums1[p1][0], nums2[p2][0]);
        } else if (has_p1) {
            time = nums1[p1][0];
        } else {
            time = nums2[p2][0];
        }

        if (has_p1 && nums1[p1][0] == time) {
            currentValue1 = nums1[p1][1];
            ++p1;
        }

        if (has_p2 && nums2[p2][0] == time) {
            currentValue2 = nums2[p2][1];
            ++p2;
        }

        result.emplace_back(time, currentValue1 + currentValue2);
    }

    return result;
}