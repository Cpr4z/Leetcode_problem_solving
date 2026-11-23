#include "ValidParentheses.hpp"

#include <unordered_map>
#include <stack>

bool isBalanced(const std::string value) {
    std::unordered_map<char, char> mapping {{'{', '}'}, {'(', ')'}, {'[', ']'}};
    std::stack<char> stack;
    for (const char symbol : value) {
        if (!mapping.contains(symbol) && symbol != '}' && symbol != ')' && symbol != ']') {
            continue;
        }

        if (mapping.contains(symbol)) {
            stack.push(symbol);
            continue;
        }

        if (stack.empty()) {
            return false;
        }

        char top_symbol = stack.top();
        stack.pop();
        if (mapping[top_symbol] != symbol) {
            return false;
        }
    }

    return stack.empty();
}
