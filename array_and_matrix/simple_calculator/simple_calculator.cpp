#include "simple_calculator.hpp"

int calculate(vector<string> s) {
    int result = 0;
    int multiply = std::stoi(s[0]);
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == "+") {
            result += multiply;
            multiply = std::stoi(s[i + 1]);
        } else if (s[i] == "*") {
            multiply *= std::stoi(s[i + 1]);
        }
    }

    result += multiply;
    return result;
}
