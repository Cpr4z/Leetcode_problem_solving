#include "min_of_ideal_squares.hpp"

#include <vector>

int minPerfectSquares(int n) {
    std::vector<int> dp(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        int best = i;
        for (int j = 1; j * j <= i; ++j) {
            int prev = dp[i - j * j];
            if (prev + 1 < best) {
                best = prev + 1;
            }
        }

        dp[i] = best;
    }

    return dp[n];
}
