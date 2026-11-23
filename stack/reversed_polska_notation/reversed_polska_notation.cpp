#include "reversed_polska_notation.hpp"

#include <stack>
#include <functional>

int calculate(vector<string> tokens) {
    std::stack<int> stack;
    std::unordered_map<std::string, std::function<int(int, int)>> operators {
            {"+", [](int a, int b){ return a + b; }},
            {"-", [](int a, int b){ return a - b; }},
            {"*", [](int a, int b){ return a * b; }},
            {"/", [](int a, int b){ return a / b; }}
    };

    for (const auto& token : tokens) {
        if (!operators.contains(token)) {
            stack.push(std::stoi(token));
            continue;
        }

        int second_op = stack.top();
        stack.pop();
        int first_op = stack.top();
        stack.pop();
        stack.push(operators[token](first_op, second_op));
    }

    return stack.top();
}
