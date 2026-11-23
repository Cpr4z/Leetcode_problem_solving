#include "braced_grammar.hpp"

#include <vector>
#include <stack>

// "ab(cd)[2]"
// Ввод: s = "a(b(c)[2])[3]"

// a(a)(a)(b)
// a bccbccbcc

string bracketGrammar(string s) {
    std::stack<std::string> stack;
    std::string current;
    for (const char symbol : s) {
        if (symbol == '(') {
            stack.push(current);
            current = "";
        } else if (symbol == '[') {
            continue;
        } else if (symbol == ')') {
            stack.push(current);
            current = "";
        } else if (symbol == ']') {
            int rep_count = std::stoi(current);
            current = "";
            for (int i = 0; i < rep_count; ++i) {
                current += stack.top();
            }

            stack.pop();
            std::string prefix = stack.top();
            stack.pop();
            current = prefix + current;
        } else {
            current.push_back(symbol);
        }
    }

    return current;
}