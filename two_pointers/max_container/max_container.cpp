#include "max_container.hpp"

int maxArea(vector<int> nums) {
    int max_area = 0;
    int l = 0, r = nums.size() - 1;
    while (l < r) {
        int area = std::min(nums[l], nums[r]) * (r - l);
        max_area = std::max(area, max_area);
        if (nums[l] < nums[r]) {
            ++l;
        } else {
            --r;
        }
    }

    return max_area;
}