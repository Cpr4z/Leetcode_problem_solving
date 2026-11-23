#include "remove_duplicates.hpp"

#include <set>

vector<int> removeDuplicates(vector<int> nums) {
    std::set<int> used;
    int slow = 0, fast = 0;
    for (int num : nums) {
        if (!used.contains(num)) {
            used.insert(num);
            std::swap(nums[slow], nums[fast]);
            ++slow;
        }
        ++fast;
    }

    nums.resize(slow);
    return nums;
}
