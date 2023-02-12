#include <iostream>
#include "TwoSum.h"

int main(int argc, char** argv)
{
    std::vector<int> v{ -1,-2,-3,-4,-5 };
    for (int e : Solution::twoSum(v, -8))
    {
        std::cout << e << " ";
    }
    return 0;

}
