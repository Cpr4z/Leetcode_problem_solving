#include "remove_extra_duplicates.hpp"

#include <unordered_map>

vector<int> limitDuplicates(vector<int> nums, int n) {
    std::vector<int> result;
    std::unordered_map<int, int> stat;
    for (int num : nums) {
        if (stat[num] < n) {
            stat[num]++;
            result.push_back(num);
        }
    }

    return result;
}
