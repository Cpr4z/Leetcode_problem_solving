#include "distance_between_X_Y.hpp"

int shortestDistance(string s) {
    int last_X = -1;
    int last_Y = -1;
    int min_dist = s.size();
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'X') {
            if (last_Y != -1) {
                min_dist = std::min(min_dist, i - last_Y);
            }

            last_X = i;
        }

        if (s[i] == 'Y') {
            if (last_X != -1) {
                min_dist = std::min(min_dist, i - last_X);
            }

            last_Y = i;
        }
    }


    if (min_dist == s.size()) {
        return 0;
    }

    return min_dist;
}