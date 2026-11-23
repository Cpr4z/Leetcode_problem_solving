#pragma once

#include <vector>

using namespace std;

class PrefixArray {
public:
    PrefixArray(vector<int> nums);
    int sum(int left, int right);
private:
    vector<int> prefix;
};
