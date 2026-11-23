#include "reverse_number.hpp"

int reverseNum(int n) {
    if (n < 0) {
        return -reverseNum(-n);
    }

    int result = 0;
    int max_int = (1 << 31) - 1;
    while (n > 0) {
        if (result > max_int / 10) {
            return 0;
        }

        result = result * 10 + n % 10;
        n /= 10;
    }

    return result;
}