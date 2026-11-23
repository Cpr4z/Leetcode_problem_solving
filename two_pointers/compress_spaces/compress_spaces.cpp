#include "compress_spaces.hpp"

vector<char> compressSpaces(vector<char> chars) {
    int fast = 0, slow = 0;
    int spaces_count = 0;
    while (fast < chars.size()) {
        char fast_symbol = chars[fast];
        spaces_count = fast_symbol == ' ' ? spaces_count + 1 : 0;
        if (spaces_count <= 1) {
            std::swap(chars[slow], chars[fast]);
            ++slow;
        }

        ++fast;
    }
    chars.resize(slow);
    return chars;
}
