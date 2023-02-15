#include <iostream>
#include "06_RemoveDuplicatesFromSortedArray.h"


int main()
{

    Solution s;
    std::vector<int> v{ 1, 2, 3, 3, 3, 4, 5, 5, 6, 7, 7, 7 };
    int pos = s.removeDuplicates(v);
    return 0;

}
