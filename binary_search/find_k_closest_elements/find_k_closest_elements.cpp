#include "find_k_closest_elements.hpp"

vector<int> search(vector<int> nums, int target, int k) {
    std::vector<int> result;
    if (k > nums.size()) {
        return result;
    }

    // подумать как реализовать самостоятельно подобный lower_bound

    // log(n)
    auto it = std::lower_bound(nums.begin(), nums.end(), target);
    int pos = std::distance(nums.begin(), it);
    // [1,3,5,6,8,9], target = 2, k = 3

    int first_pos = pos - k >= 0 ? pos - k : 0;
    int last_pos = pos + k < nums.size() ? pos + k : nums.size() - 1;
    std::vector<std::pair<int, int>> neighbours(last_pos - first_pos);
    for (int i = first_pos; i <= last_pos; ++i) {
        neighbours[i - first_pos] = {std::abs(target - nums[i]), nums[i]};
    }

    // 2(k log(k)) = k log(k)
    std::sort(neighbours.begin(), neighbours.end());

    result.reserve(k);
    // k
    std::transform(neighbours.begin(), neighbours.begin() + k, std::back_inserter(result), [](const auto& elem){
        return elem.second;
    });

    return result;
}

vector<int> search2(vector<int> nums, int target, int k) {
    int l = -1, r = nums.size() - k;
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (target - nums[m] > nums[m + k] - target) {
            l = m;
        } else {
            r = m;
        }
    }

    return std::vector<int>(nums.begin() + r, nums.begin() + r + k);
}
