#pragma once
#include <string>
#include <stdexcept>
class Solution {

private:
    bool NextBraceIsValid(char prev, char next);
public:
    //departing from naming conventions
    bool isValid(std::string s);
};