#include "phone_alpha_generation.hpp"

#include <unordered_map>
#include <deque>

vector<string> generateCombinations(string s) {
    if (s.empty()) {
        return {};
    }

    std::unordered_map<char, std::string> keyboard {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
    };

    std::deque<std::string> queue {""};
    while (!queue.empty() && queue.front().size() < s.size()) {
        const std::string& prefix = queue.front();
        const std::string number_alpha = keyboard[s[prefix.size()]];
        for (const char symbol : number_alpha) {
            queue.push_back(prefix + symbol);
        }
    }

    return std::vector<std::string>(queue.begin(), queue.end());
}