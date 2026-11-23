#include "remove_smiley_faces.hpp"

bool isSmileyFace(vector<char> chars, int fast) {
    return fast + 2 < chars.size() &&
            chars[fast] == ':' &&
            chars[fast + 1] == '-' &&
            chars[fast + 2] == '(' || chars[fast + 2] == ')';
}

vector<char> removeSmiles(vector<char> chars) {
    int fast = 0, slow = 0;
    while (fast < chars.size()) {
        if (!isSmileyFace(chars, fast)) {
            chars[slow] = chars[fast];
            ++slow;
            ++fast;
            continue;
        }

        char smiley_end = chars[fast + 2];
        fast += 3;
        while (fast < chars.size() && chars[fast] == smiley_end) {
            ++fast;
        }
    }

    chars.resize(slow);
    return chars;
}