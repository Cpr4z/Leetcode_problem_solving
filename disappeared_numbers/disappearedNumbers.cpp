#include "disappearedNumbers.hpp"

std::vector<int> Solution::findDisappearedNumbers(std::vector<int>& nums)
{
    std::vector<int> disappeared;
    for (size_t i = 0; i< nums.size(); ++i)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0)
            nums[index] = -nums[index];
    }

    for (int i = 0; i < nums.size() ; ++i)
    {
        if (nums[i] > 0)
        {
            disappeared.push_back(i + 1);
        }
    }
    return disappeared;
}