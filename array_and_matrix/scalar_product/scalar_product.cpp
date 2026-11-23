#include "scalar_product.hpp"

int dotProduct(vector<vector<int>> vec1, vector<vector<int>> vec2) {
    int p1 = 0, p2 = 0;
    int val1 = 0, val2 = 0;
    int rep1 = 0, rep2 = 0;
    int result = 0;
    while (p1 < vec1.size() || p2 < vec2.size()) {
        if (!rep1) {
            val1 = vec1[p1][0];
            rep1 = vec1[p1][1];
            ++p1;
        }

        if (!rep2) {
            val2 = vec2[p2][0];
            rep2 = vec2[p2][1];
            ++p2;
        }

        int rep_count = std::min(rep1, rep2);
        result += val1 * val2 * rep_count;
        rep1 -= rep_count;
        rep2 -= rep_count;
    }

    return result;
}
