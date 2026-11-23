#include "investor_in_full_country.hpp"

vector<int> kElementsMultiply(vector<int> price, int k) {
    if (k > price.size()) {
        return {};
    }

    int multiply_without_zero = 1;
    int zeroes_count = 0;
    for (int i = 0; i < k; ++i) {
        if (price[i] == 0) {
            ++zeroes_count;
            continue;
        }

        multiply_without_zero *= price[i];
    }

    std::vector<int> result {0};
    if (!zeroes_count) {
        result = {multiply_without_zero};
    }

    for (int i = k; i < price.size(); ++i) {
        if (price[i - k] == 0) {
            --zeroes_count;
        } else {
            multiply_without_zero /=  price[i - k];
        }

        if (price[i] == 0) {
            ++zeroes_count;
        } else {
            multiply_without_zero *= price[i];
        }

        int next_multiply = 0;
        if (!zeroes_count) {
            next_multiply = multiply_without_zero;
        }

        result.push_back(next_multiply);
    }

    return result;
}