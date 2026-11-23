#include "hirsch_index.hpp"


int findHirschIndex(vector<int> citations) {
    int n = citations.size();
    std::vector<int> counter(n + 1, 0);
    for (int citation : citations) {
        ++counter[std::min(citation, n)];
    }

    int cnt = 0;
    for (int i = n; i >= 0; --i) {
        cnt += counter[i];
        if (cnt >= i) {
            return i;
        }
    }

    return 0;
}