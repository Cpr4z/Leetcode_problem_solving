#include "url_decoding.hpp"

vector<char> unurlify(vector<char> s) {
    int slow = 0, fast = 0;
    while (fast < s.size()) {
        if (fast + 2 < s.size() && s[fast] == '%' && s[fast + 1] == '2' && s[fast + 2] == '0') {
            s[slow] = ' ';
            fast += 3;
        } else {
            std::swap(s[slow], s[fast]);
            ++fast;
        }

        ++slow;
    }

    for (int i = slow; i < s.size(); ++i) {
        s[i] = '#';
    }

    return s;
}
