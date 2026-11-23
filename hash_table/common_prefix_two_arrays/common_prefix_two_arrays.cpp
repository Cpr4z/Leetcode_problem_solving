#include "common_prefix_two_arrays.hpp"

#include <unordered_set>

vector<int> findCommonPrefix(vector<int> nums1, vector<int> nums2) {
    // n - размер массива

    // Память: O(n)
    vector<int> result;
    if (nums1.size() != nums2.size()) {
        return result;
    }

    // 2,1,3
    // 3,1,2
    // Память: O(n + 1) = O(n)
    std::vector<int> frequency(nums1.size() + 1, 0);
    int match = 0;

    // Время: O(n)
    for (size_t i = 0; i < nums1.size(); ++i) {
        ++frequency[nums1[i]];
        ++frequency[nums2[i]];
        if (nums1[i] == nums2[i]) {
            ++match;
            result.push_back(match);
            continue;
        }

        if (frequency[nums1[i]] == 2) {
            ++match;
        }

        if (frequency[nums2[i]] == 2) {
            ++match;
        }

        result.push_back(match);
    }

    return result;
}


// Без учета кратности означает, что присуствие одного и того же числа
// увеличивает счетчик лишь 1 раз, независимо от кол-ва повторов
vector<int> findCommonPrefix2(vector<int> nums1, vector<int> nums2) {
    vector<int> result;
    if (nums1.size() != nums2.size()) {
        return result;
    }

    int match = 0;
    std::unordered_set<int> used1;
    std::unordered_set<int> used2;
    for (size_t i = 0; i < nums1.size(); ++i) {
        // 2,2,3,4
        // 3,2,4,2
        // 0,1,2,3
        if (used1.find(nums1[i]) == used1.end()) {
            used1.insert(nums1[i]);
            if (used2.find(nums1[i]) != used2.end()) {
                ++match;
            }
        }

        if (used2.find(nums2[i]) == used2.end()) {
            used2.insert(nums2[i]);
            if (used1.find(nums2[i]) != used1.end()) {
                ++match;
            }
        }

        result.push_back(match);
    }

    return result;
}


// С учетом кратности означает, что присуствие одного и того же числа
// в префиксах считается с учетом наличия дубликатов
vector<int> findCommonPrefix3(vector<int> nums1, vector<int> nums2) {
    // 2,2,3,4
    // 3,2,4,2

    // 0,1,2,4

    int match = 0;
    std::vector<int> result;
    std::unordered_map<int, int> values1;
    std::unordered_map<int, int> values2;
    for (size_t i = 0; i < nums1.size(); ++i) {
        ++values1[nums1[i]];
        if (values1[nums1[i]] <= values2[nums1[i]]) {
            ++match;
        }

        ++values2[nums2[i]];
        if (values2[nums2[i]] <= values1[nums2[i]]) {
            ++match;
        }

        result.push_back(match);
    }

    return result;
}