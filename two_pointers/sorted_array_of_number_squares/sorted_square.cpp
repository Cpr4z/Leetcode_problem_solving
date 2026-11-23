#include "sorted_square.hpp"

// [-6 , -4, 3, 5, 8]

// [4]

std::vector<int> numbersSquare(std::vector<int>& nums) {
    int p1 = 0, p2 = nums.size() - 1;
    int writing = p2;
    std::vector<int> result(nums.size(), 0);
    while (p1 <= p2) {
        if (std::abs(nums[p1]) < std::abs(nums[p2])) {
            result[writing] = nums[p2] * nums[p2];
            --p2;
        } else {
            result[writing] = nums[p1] * nums[p1];
            ++p1;
        }

        --writing;
    }

    return result;
}