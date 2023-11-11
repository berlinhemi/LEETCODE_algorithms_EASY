#include "15_MergeSortedArrays.h"
#include <iostream>

int main()
{
    Solution s;

    //std::vector<int> v1{2,0};
    //std::vector<int> v2{ 1 };

   // std::vector<int> v1{ 3,4,4,5,6,7,0,0,0,0,0 };
    //std::vector<int> v2{ 1,2,3,7,10 };

    //std::vector<int> v1{ 1,2,3,0,0,0 };
    //std::vector<int> v2{ 2,5,6 };

    std::vector<int> v1{ 4,5,6,0,0,0 };
    std::vector<int> v2{ 1,2,3 };

    //std::vector<int> v1{ 1,2,3,0,0,0 };
    //std::vector<int> v2{ 4,5,6 };

    s.merge(v1, 3, v2, 3);
    //s.merge(v3,6,v4,3);
    for (int e : v1)
    {
        std::cout << e <<" "<< std::endl;
    }
  
}
