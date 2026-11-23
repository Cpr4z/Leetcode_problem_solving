#include "higher_or_lower.hpp"

#include <cmath>

int SomeClass::guess(int num) {
    if (num == pick) {
        return 0;
    } else if (num > pick) {
        return -1;
    } else {
        return 1;
    }
}


int SomeClass::guessNumber(int n) {
    int prev = n;
    int tmp = 0;
    int result = guess(n);
    while (result) {
        if (result == -1 && prev == n) {
            tmp = n;
            n /= 2;
            prev = tmp;
        } else if (result == -1) {
            tmp = n;
            n -= std::abs((n - prev)) / 2;
            prev = tmp;
        } else {
            tmp = n;
            n += std::abs((prev - n)) / 2;
            prev = tmp;
        }

        if (prev == n) {
            if (result == -1) {
                n -= 1;
            } else {
                n += 1;
            }
        }

        result = guess(n);
    }
    return n;
}