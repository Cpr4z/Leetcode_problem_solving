#include "sum_hex_numbers.hpp"

string sumHex(string s1, string s2) {
    std::vector<char> result;
    int p1 = s1.size() - 1;
    int p2 = s2.size() - 1;
    int carry = 0;
    while (p1 >= 0 || p2 >= 0 || carry) {
        if (p1 >= 0) {
            carry += std::stoi(s1.substr(p1 , 1), nullptr, 16);
        }

        if (p2 >= 0) {
            carry += std::stoi(s2.substr(p2 , 1), nullptr, 16);
        }

        int rest = carry % 16;
        result.push_back(rest >= 10 ? 'a' + rest % 10 : '0' + rest);
        carry = carry / 16;

        --p1;
        --p2;
    }

    std::reverse(result.begin(), result.end());
    return {result.begin(), result.end()};
}