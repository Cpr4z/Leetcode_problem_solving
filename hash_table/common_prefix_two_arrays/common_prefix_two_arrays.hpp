#pragma once

#include <vector>

using namespace std;

vector<int> findCommonPrefix(vector<int> nums1, vector<int> nums2);

// Общий префикс без учета кратности
vector<int> findCommonPrefix2(vector<int> nums1, vector<int> nums2);

// Общий префикс с учетом кратности
vector<int> findCommonPrefix3(vector<int> nums1, vector<int> nums2);
