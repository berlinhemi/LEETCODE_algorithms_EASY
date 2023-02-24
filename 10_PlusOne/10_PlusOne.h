#pragma once
#include <vector>

class Solution {
private :
    int getNextDigitWithCarry(int value, bool& carry);
public:
    std::vector<int> plusOne(std::vector<int>& digits);
};