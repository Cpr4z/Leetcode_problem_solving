#include "simplify_route.hpp"

#include <vector>
#include <sstream>

string simplifyPath(string path) {
    std::vector<std::string> stack;
    std::stringstream ss(path);
    std::string name;
    while (std::getline(ss, name, '/')) {
        if (name == "." || name.empty()) {
            continue;
        }

        if (name == "..") {
            if (!stack.empty()) {
                stack.pop_back();
            }
        } else {
            stack.push_back(name);
        }
    }

    std::string result;
    for (const auto& dir : stack) {
        result += "/" + dir;
    }

    return result.empty() ? "/" : result;
}