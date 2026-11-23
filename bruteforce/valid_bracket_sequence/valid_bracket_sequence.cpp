#include "valid_bracket_sequence.hpp"


// Рекурсивное решение
void bruteforce(int n, int balance, std::vector<char>& current_brackets, std::vector<std::string>& result) {
    if (balance < 0 || balance > n - current_brackets.size()) {
        return;
    }

    if (balance == 0 && current_brackets.size() == n) {
        result.emplace_back(current_brackets.begin(), current_brackets.end());
        return;
    }

    std::array<std::pair<char, int>, 2> {{{'(', balance + 1}, {')', balance - 1}}};

    for (const auto& [bracket, new_balance] : std::vector<std::pair<char, int>> {{'(', balance + 1}, {')', balance - 1}}) {
        current_brackets.push_back(bracket);
        bruteforce(n, new_balance, current_brackets, result);
        current_brackets.pop_back();
    }
}

vector<string> generateBrackets(int n) {
    std::vector<char> current_brackets;
    std::vector<std::string> result;
    bruteforce(n * 2, 0, current_brackets, result);
    return result;
}



// Итеративное решенеие
struct State {
    std::string current;
    int opened;
    int closed;
};

std::vector<std::string> generateBrackets2(int n) {
    std::vector<std::string> result;
    std::vector<State> stack;
    stack.push_back({"", 0, 0});
    while (!stack.empty()) {
        State state = std::move(stack.back());
        stack.pop_back();

        if (state.closed == n) {
            result.push_back(std::move(state.current));
            continue;
        }

        if (state.closed < state.opened) {
            stack.push_back({
                state.current + ')',
                state.opened,
                state.closed + 1
            });
        }

        if (state.opened < n) {
            stack.push_back({
                state.current + '(',
                state.opened + 1,
                state.closed
            });
        }
    }

    return result;
}