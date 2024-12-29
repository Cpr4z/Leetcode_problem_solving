#include "MinMovesTo2.hpp"

int Solution::minMoves(std::vector<int>& nums)
{
    int min_elem = *std::min_element(nums.begin(), nums.end());
    int total_steps = 0;
    for (int num : nums)
    {
        total_steps += num - min_elem;
    }
    return total_steps;
}