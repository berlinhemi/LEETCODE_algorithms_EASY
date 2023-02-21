#include <iostream>
#include "06_RemoveDuplicatesFromSortedArray.h"


int main()
{

    Solution s;
    std::vector<int> v{ 1, 2, 3, 3, 3, 4, 5, 5, 6, 7, 7, 10 };
    int pos = s.removeDuplicates(v);
    for (int e : v)
    {
        std::cout << e << " ";
    }
    return 0;

}
