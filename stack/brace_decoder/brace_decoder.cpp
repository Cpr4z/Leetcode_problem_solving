#include "brace_decoder.hpp"

#include <vector>

// "3[a]2[bc]"

string decodeBrackets(string s) {
    std::vector<string> stack;
    string current;
    int current_number = 0;
    for (const char symbol : s) {
        if (symbol == ']') {
            int number = std::stoi(stack.back());
            stack.pop_back();
            std::string repeated;
            for (int i = 0; i < number; ++i) {
                repeated += current;
            }

            std::string prefix;
            if (!stack.empty()) {
                prefix = stack.back();
                stack.pop_back();
            }

            current = prefix + repeated;
        } else if (symbol == '[') {
            stack.push_back(current);
            stack.push_back(std::to_string(current_number));
            current = "";
            current_number = 0;
        } else if (std::isdigit(symbol)) {
            current_number = current_number * 10 + (symbol - '0');
        } else {
            current += symbol;
        }
    }

    return current;
}
