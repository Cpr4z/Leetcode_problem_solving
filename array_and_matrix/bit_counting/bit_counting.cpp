#include "bit_counting.hpp"

int countBits(int n) {
    int result = 0;
    while (n > 0) {
        result += n & 1;
        n >>= 1;
    }

    return result;
}
