#include "unite_sequence_numbers.hpp"

//Ввод: nums = [1,2,3,4,5,8,10,15,16,20]
//Вывод: ["1->5","8","10","15->16","20"]

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    if (nums.empty()) {
        return result;
    }

    int start = 0, end = 0;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && (nums[end + 1] - nums[end] == 1)) {
            ++end;
        }

        if (end == start) {
            result.push_back(std::to_string(start));
        } else {
            result.push_back(std::to_string(nums[start]) + "->" + std::to_string(nums[end]));
        }

        start = end + 1;
        ++end;
    }

    return result;
}



vector<string> summaryRanges2(vector<int>& nums) {
    vector<string> result;
    if (nums.empty()) {
        return result;
    }

    int start = 0, end = 0;
    while (end < nums.size() && start < nums.size()) {
        if (end + 1 < nums.size() && (nums[end + 1] - nums[end] == 1)) {
            ++end;
        } else {
            if (start == end) {
                result.push_back(std::to_string(end));
            } else {
                result.push_back(std::to_string(nums[start]) + "->" + std::to_string(nums[end]));
            }
            start = end;
            ++end;
        }
    }

    return result;
}