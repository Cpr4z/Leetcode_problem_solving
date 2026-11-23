#include "longest_subset.hpp"

// [0, 1, 1, 1, 0, 0, 1, 1]
// [1, 1, 0, 1, 0]
// [1, 1, 1, 1]

int longestSubset(std::vector<int>& stock) {
    int start = 0, end = 0;
    int zero_index = 0;
    int result = 0;
    int zero_count = (stock[0] == 0) ? 1 : 0;

    // Время: O(2n) = O(n)
    // Не смотря на то, что здесь 2 вложенных цикла, на самом деле здесь
    // каждый указатель пробегается по массиву длиной n, и суммарно они проходят 2n
    // а не n^2 как могло показаться

    // Память: O(1)
    while (start < stock.size()) {
        while (end + 1 < stock.size() && (stock[end + 1] == 1 || zero_count < 1)) {
            if (stock[end + 1] == 0) {
                ++zero_count;
                zero_index = end + 1;
            }
            ++end;
        }

        result = std::max(result, end - start + 1);
        zero_count = 0;
        start = std::max(zero_index + 1, start + 1);
    }

    return result;
}

// [0, 1, 1, 1, 0, 0, 1, 1]
int longestSubset2(std::vector<int>& stock) {
    int start = 0, end = -1;
    int zeroes_count = 0;
    int result = 0;
    while (start < stock.size()) {
        while (end + 1 < stock.size() && (stock[end + 1] == 1 || zeroes_count < 1)) {
            zeroes_count += stock[end + 1] == 0 ? 1 : 0;
            ++end;
        }

        result = std::max(result, end - start + 1);
        zeroes_count -= (int)stock[start] == 0;
        ++start;
    }

    return result;
}











