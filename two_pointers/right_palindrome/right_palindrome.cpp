#include "right_palindrome.hpp"

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (!std::isalpha(s[l])) {
            ++l;
            continue;
        }

        if (!std::isalpha(s[r])) {
            --r;
            continue;
        }

        if (std::tolower(s[r]) != std::tolower(s[l])) {
            return false;
        }

        ++l;
        --r;
    }

    return true;
}



bool isPalindrome2(string s) {
    int l = 0, r = s.size() - 1;
    char start_upper = 'A';
    char end_upper = 'Z';
    char start_lower = 'a';
    char end_lower = 'z';
    int upper_diff = (int)start_lower - (int)start_upper;
    while (l < r) {
        if (s[l] < start_upper || s[l] > end_lower || (s[l] > end_upper && s[l] < start_lower)) {
            ++l;
            continue;
        }

        if (s[r] < start_upper || s[r] > end_lower || (s[r] > end_upper && s[r] < start_lower)) {
            --r;
            continue;
        }

        int diff = std::abs((int)s[l] - (int)s[r]);
        if (diff && diff != upper_diff) {
            return false;
        }

        ++l;
        --r;
    }

    return true;
}