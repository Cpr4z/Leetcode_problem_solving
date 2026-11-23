#include "longest_gene_sequence.hpp"

#include "unordered_map"

//Ввод: gene = "YYxxXXXyyy", k = 3
//Вывод: 8

// "YYxxXXXyyy"
//  l
//        r


//Ввод: gene = "yyy", k = 0
//Вывод: 0


//"abcabcabc"
//    l
//     r

// k = 0
// aabbcc
// l
// r

int longestGeneSequence(string nums, int target) {
    int start = 0, end = -1;
    int result = 0;
    std::unordered_map<char, int> table;
    while (start < nums.size()) {
        while (end + 1 < nums.size() && (table.contains(nums[end + 1]) || table.size() < target )) {
            ++table[nums[end + 1]];
            ++end;
        }

        result = std::max(result, end - start + 1);
        --table[nums[start]];
        if (table[nums[start]] <= 0) {
            table.erase(nums[start]);
        }

        ++start;
    }

    return result;
}
