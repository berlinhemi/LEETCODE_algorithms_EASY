
#include <iostream>
#include "07_RemoveElement.h"
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
    std::vector<int> v{ 1, 2, 3, 3, 4, 5, 3 };
    printVector(v);
    std::cout << s.removeElement(v, 3) << std::endl;
    printVector(v);

}
