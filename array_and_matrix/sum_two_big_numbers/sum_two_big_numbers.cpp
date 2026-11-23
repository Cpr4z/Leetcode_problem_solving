#include "sum_two_big_numbers.hpp"

#include <iostream>

vector<int> calculate(vector<int>& nums1, vector<int>& nums2) {
    std::vector<int> result;
    result.reserve(std::max(nums1.size(), nums2.size()) + 1);
    int nums1_size = nums1.size() - 1;
    int nums2_size = nums2.size() - 1;
    int p1 = nums1_size;
    int p2 = nums2_size;
    int carry = 0;
    while (p1 >= 0 || p2 >= 0 || carry) {
        int nums1_value = (p1 < 0) ? 0 : nums1[p1];
        int nums2_value = (p2 < 0) ? 0 : nums2[p2];
        int current_sum = nums1_value + nums2_value + carry;
        carry = current_sum / 10;
        result.push_back(current_sum % 10);

        --p1;
        --p2;
    }

    std::reverse(result.begin(), result.end());
    return result;
}
