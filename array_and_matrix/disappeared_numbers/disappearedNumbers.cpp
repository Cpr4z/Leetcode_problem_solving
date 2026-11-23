#include "disappearedNumbers.hpp"

#include <cstdlib>

// 5 6
// [4,3,2,7,8,2,3,1]
// [0, 0, , -7, 0, 0 ]

std::vector<int> Solution::findDisappearedNumbers(std::vector<int>& nums)
{
    std::vector<int> disappeared;
    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        const std::size_t index = static_cast<std::size_t>(std::abs(nums[i]) - 1);
        if (nums[index] > 0)
        {
            nums[index] = -nums[index];
        }
    }

    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
        {
            disappeared.push_back(static_cast<int>(i + 1));
        }
    }

    return disappeared;
}
