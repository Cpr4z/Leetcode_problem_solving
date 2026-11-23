#include "removal_of_braces.hpp"

#include <vector>

string makeBalanced(string s) {
    std::vector<int> stack;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            stack.push_back(i);
        } else if (s[i] == ')') {
            if (stack.empty()) {
                s[i] = '\0';
            } else {
                stack.pop_back();
            }
        }
    }

    for (int index : stack) {
        s[index] = '\0';
    }

    std::string result;
    for (const char symbol : s) {
        if (symbol != '\0') {
            result.push_back(symbol);
        }
    }

    return result;
}
