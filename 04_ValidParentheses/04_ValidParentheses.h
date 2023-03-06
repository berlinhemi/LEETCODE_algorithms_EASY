#pragma once
#include <string>
#include <stdexcept>
class Solution {

private:
    bool NextBraceIsValid(char prev, char next);
    bool isValid1(std::string s);
    bool isValid2(std::string s);
public:
    //departing from naming conventions
    bool isValid(std::string s);
};