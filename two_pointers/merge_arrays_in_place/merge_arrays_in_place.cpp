#include "merge_arrays_in_place.hpp"

vector<int> mergeTwoSortedArrays(vector<int> arr1, int m, vector<int> arr2, int n) {
    int p1 = m - 1;
    int p2 = n - 1;
    int write = (int)arr1.size() - 1;
    while (p1 >= 0 || p2 >= 0) {
        if (p1 < 0 || (p2 >= 0 && arr1[p1] < arr2[p2])) {
            arr1[write] = arr2[p2];
            --p2;
        } else {
            arr1[write] = arr1[p1];
            --p1;
        }

        --write;
    }

    return arr1;
}
