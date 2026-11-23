#include "round_braces.hpp"

bool isBalanced(string s) {
    int counter = 0;
    for (const char symbol : s) {
        counter += symbol == '(' ? 1 : -1;
        if (counter < 0) {
            return false;
        }
    }

    return counter == 0;
}
