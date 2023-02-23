#include <iostream>
#include "08_SearchInsertPosition.h"

int main()
{
    Solution s;
    std::vector<int> v1{ 1,3,5,7,9,11 };


    std::cout << s.searchInsert(v1, 1) << std::endl;
    std::cout << s.searchInsert(v1, 3) << std::endl;
    std::cout << s.searchInsert(v1, 5) << std::endl;
    std::cout << s.searchInsert(v1, 7) << std::endl;
    std::cout << s.searchInsert(v1, 9) << std::endl;
    std::cout << s.searchInsert(v1, 11) << std::endl;

    std::cout << std::endl;
   
    std::cout << s.searchInsert(v1, -8) << std::endl;
    std::cout << s.searchInsert(v1, 0) << std::endl;
    std::cout << s.searchInsert(v1, 2) << std::endl;
    std::cout << s.searchInsert(v1, 6) << std::endl;
    std::cout << s.searchInsert(v1, 12) << std::endl;
}
