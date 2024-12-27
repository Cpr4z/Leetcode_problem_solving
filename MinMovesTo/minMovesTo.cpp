#include "minMovesTo.hpp"
#include <cmath>
#include <algorithm>

// total complexity O(n * log(n) + n)
int Solution::minMovesTo(std::vector<int>& values)
{
    std::sort(values.begin(), values.end()); // O(n * log(n))
    size_t size = values.size();
    int median = 0;

    if (size % 2)
    {
        median = values[size/2]; // O(1)
    }
    else
    {
        median = (values[size/2] + values[size/2 - 1]) / 2; // O(1)
    }

    int totalSteps = 0;

    // O(n)
    for (int num : values)
    {
        totalSteps += std::abs(num - median);
    }

    return totalSteps;
}