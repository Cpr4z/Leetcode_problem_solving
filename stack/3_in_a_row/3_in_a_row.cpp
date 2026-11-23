#include "3_in_a_row.hpp"

int play(vector<int> colors) {
    std::vector<int> stack;
    int result = 0;
    for (int i = 0; i < colors.size(); ++i) {
        if (stack.size() >= 2 && stack.back() == colors[i] && stack[stack.size() - 2] == colors[i]) {
            result += 3;
            stack.pop_back();
            stack.pop_back();
            continue;
        }

        stack.push_back(colors[i]);
    }

    return result;
}