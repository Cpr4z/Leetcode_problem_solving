#include "partition_labels.hpp"

#include <unordered_map>

vector<int> partitionLabels(string s) {
    std::unordered_map<char, int> table;
    for (int i = 0; i < s.size(); ++i) {
        table[s[i]] = i;
    }

    int p1 = 0;
    int p2 = 0;
    int last_pos = 0;
    std::vector<int> result;
    for (int i = 0; i < s.size(); ++i) {
        last_pos = std::max(last_pos, table[s[i]]);
        if (p2 == last_pos) {
            result.push_back(p2 - p1 + 1);
            p1 = p2 + 1;
        }
    }

    return result;
}