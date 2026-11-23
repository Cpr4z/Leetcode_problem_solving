#include "sort_012.hpp"

vector<int> sort012(vector<int> colors) {
    constexpr int size = 3;
    int colors_table[size]{0};
    for (int color : colors) {
        ++colors_table[color];
    }

    int pos = 0;
    for (int i = 0; i < size; ++i) {
        int count = colors_table[i];
        for (int j = pos; j < pos + count; ++j) {
            colors[j] = i;
        }
        pos += count;
    }

    return colors;
}