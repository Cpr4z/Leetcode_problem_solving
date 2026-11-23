#include "minMovesTo.hpp"

#include <iostream>
#include <vector>

int main() {
    Solution solution;
    std::vector<int> values{1, 10, 2, 9};
    std::cout << solution.minMovesTo(values) << '\n';
}
