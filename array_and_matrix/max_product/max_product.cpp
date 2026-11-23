#include "max_product.hpp"

int maxProduct(vector<int> nums) {
    int current = nums[0];
    int max_product = 0;
    for (int i = 1; i < nums.size(); ++i) {
        max_product = std::max(max_product, current * nums[i]);
        if (current < nums[i]) {
            current = nums[i];
        }
    }

    return max_product;
}

// Ввод: nums = [5,3,10,2,8,5]
int maxProduct2(vector<int> nums) {
    int m1 = std::max(nums[0], nums[1]);
    int m2 = std::min(nums[0], nums[1]);
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] > m1) {
            m2 = m1;
            m1 = nums[i];
        } else if (nums[i] > m2) {
            m2 = nums[i];
        }
    }

    return m1 * m2;
}