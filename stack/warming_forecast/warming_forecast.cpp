#include "warming_forecast.hpp"

#include <stack>

vector<int> predictWarming(vector<int> temperatures) {
    std::vector<int> forecast(temperatures.size(), 0);
    std::stack<int> stack;
    for (int i = 0; i < temperatures.size(); ++i) {
        while (!stack.empty() && temperatures[stack.top()] < temperatures[i]) {
            int index = stack.top();
            stack.pop();
            forecast[index] = i - index;
        }

        stack.push(i);
    }

    return forecast;
}