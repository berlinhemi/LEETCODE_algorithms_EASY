#include <string>


class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        size_t pos = haystack.find(needle);
        if (pos != std::string::npos)
            return pos;
        else return -1;
    }
};