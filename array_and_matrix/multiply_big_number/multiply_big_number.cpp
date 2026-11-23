#include "multiply_big_number.hpp"

vector<int> multiply(vector<int> nums, int n) {
    std::vector<int> result;
    int carry = 0;
    int p1 = 0;
    while (carry || p1 < nums.size()) {
        bool exists_p1 = p1 < nums.size();
        int sum = carry;
        sum += exists_p1 ? n * nums[p1] : 0;
        carry = sum / 10;
        result.push_back(sum % 10);
        ++p1;
    }

    return result;
}