#include "longest_unique_gene_sequence.hpp"

#include <unordered_set>

int longestGeneSequence(string nums) {
    int start  = 0, end = -1;
    int result = 0;
    std::unordered_set<char> table;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && !table.contains(nums[end + 1])) {
            table.insert(nums[end + 1]);
            ++end;
        }

        result = std::max(result, end - start + 1);
        table.erase(nums[start]);
        ++start;
    }

    return result;
}