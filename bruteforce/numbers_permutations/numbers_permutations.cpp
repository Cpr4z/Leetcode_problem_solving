#include "numbers_permutations.hpp"

void bruteforce(vector<int>& nums, vector<int>& permutation, vector<vector<int>>& allPermutations) {
    if (nums.empty()) {
        // Добавляем текущую комбинацию в список всех перестановок
        allPermutations.push_back(permutation);
        return;
    }

    int n = nums.size();
    for (int i = 0; i < n; i++) {
        int nextNum = nums[i];

        // Добавляем число в текущую перестановку и удаляем его из nums,
        // чтобы не использовать его повторно
        permutation.push_back(nextNum);
        swap(nums[i], nums[nums.size() - 1]);
        nums.pop_back();

        // Рекурсивный вызов для оставшихся чисел
        bruteforce(nums, permutation, allPermutations);

        // Возвращаем состояние назад перед следующей итерацией
        nums.push_back(nextNum);
        swap(nums[i], nums[nums.size() - 1]);
        permutation.pop_back();
    }
}

vector<vector<int>> permutations(vector<int> nums) {
    vector<vector<int>> allPermutations;
    vector<int> permutation;
    bruteforce(nums, permutation, allPermutations);
    return allPermutations;
}


