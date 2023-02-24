#include <iostream>
#include "10_PlusOne.h"


void printVector(const std::vector<int>& v)
{
    for (int e : v)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
int main()
{
    Solution s;

    std::vector<int> v{ 9,9,9 };
     
     printVector(s.plusOne(v));

}