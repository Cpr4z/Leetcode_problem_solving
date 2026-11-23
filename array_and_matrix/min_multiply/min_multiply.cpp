#include "min_multiply.hpp"

int minMultiply(std::vector<int>& nums) {
    int a = nums[0];
    int b = nums[1];

    int min1 = std::min(a, b);
    int min2 = std::max(a, b);

    int max1 = std::max(a, b);
    int max2 = std::min(a, b);
    for (int i = 2; i < nums.size(); ++i) {
        if (min1 > nums[i]) {
            min2 = min1;
            min1 = nums[i];
        } else if (min2 > nums[i]) {
            min2 = nums[i];
        }

        if (max1 < nums[i]) {
            max2 = max1;
            max1 = nums[i];
        } else if (max2 < nums[i]) {
            max2 = nums[i];
        }
    }

    // 3 варианта потому что всего 3 варианта чисел в массиве
    // 1) все числа положительные - тогда берем min1 * min2
    // 2) все числа отрицательные - тогда берем max1 * max2
    // 3) есть как положительные так и отрицательные числа - min1 * max1
    return std::min(std::min(min1 * min2, max1 * min1), max1 * max2);
}