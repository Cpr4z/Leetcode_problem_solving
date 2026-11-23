#include "calculator.hpp"

int calculate(vector<string> s) {
    int current_term = std::stoi(s[0]);
    int result = 0;
    int sign = 1;
    for (int i = 1; i < s.size(); i+= 2) {
        const std::string current_op = s[i];
        int num = std::stoi(s[i + 1]);
        if (current_op == "+") {
            result += sign * current_term;
            sign = 1;
            current_term = num;
        } else if (current_op == "-") {
            result += sign * current_term;
            sign = -1;
            current_term = num;
        } else if (current_op == "*") {
            current_term *= num;
        } else {
            current_term = current_term / num;
        }
    }

    return result + current_term * sign;
}