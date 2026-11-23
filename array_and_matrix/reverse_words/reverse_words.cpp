#include "reverse_words.hpp"

#include <vector>

// "  this  is a test "

// 1) конец слова - symbol == ' ' и current[0] != ' '
// 2) начало слова - symbol != ' ' и current[0] == ' '

string reverseWords(string s) {
    std::vector<std::string> parts;
    std::string current;
    for (const char symbol : s) {
        if (!current.empty() && ((symbol == ' ') != (current[0] == ' '))) {
            parts.push_back(current);
            current = "";
        }

        current += symbol;
    }

    if (!current.empty()) {
        parts.push_back(current);
    }

    std::vector<std::string> words;
    for (const auto& part : parts) {
        if (part[0] != ' ') {
            words.push_back(part);
        }
    }

    std::string result;
    for (const auto& part : parts) {
        if (part[0] == ' ') {
            result += part;
        } else {
            result += words.back();
            words.pop_back();
        }
    }

    return result;
}
