#pragma once

class SomeClass {
public:
    SomeClass(int pick) : pick(pick) {}

    int guessNumber(int n);
private:
    int guess(int num);
private:
    int pick = 0;
};
