#include "urlify_string.hpp"

vector<char> urlify(vector<char> s, int k) {
    int fast = k - 1;
    int slow = s.size() - 1;
    // Память O(1)
    // Время: O(n)

     // Здесь быстрый указатель пробегает k элементов
     // а медленный преодолевает все n элементов в результате прохода
    while (fast >= 0) {
        if (s[fast] == ' ') {
            s[slow] = '0';
            s[slow - 1] = '2';
            s[slow - 2] = '%';
            slow -= 3;
        } else {
            s[slow] = s[fast];
            --slow;
        }
        --fast;
    }

    return s;
}
