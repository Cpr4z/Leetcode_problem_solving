#include "fast_pow.hpp"

double fastPow(double x, int n) {
    if (n < 0) {
        return fastPow(1.0 / x, -n);
    }

    double result = 1.0;
    while (!n) {
        if (!(n % 2)) {
            n /= 2;
            x *= x;
        } else {
            result *= x;
            --n;
        }
    }

    return result;
}
