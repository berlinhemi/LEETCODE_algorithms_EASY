#include "15_MergeSortedArrays.h"
#include <iostream>

int main()
{
    Solution s;
    std::vector<int> v1{ 3,4,4,5,6,7,0,0,0,0,0 };
    std::vector<int> v2{ 1,2,3,7,10 };
    s.merge(v1,6,v2,5);
    std::cout << std::endl;
}
