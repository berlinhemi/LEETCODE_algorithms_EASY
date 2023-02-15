#include <iostream>
#include "MergeTwoSortedLists.h"
int main()
{
    ListNode ln11(4);
    ListNode ln12(3, &ln11);
    ListNode ln13(2, &ln12);
    ListNode ln14(1, &ln13);

    ListNode ln21(10);
    ListNode ln22(9, &ln21);
    ListNode ln23(-2, &ln22);
    ListNode ln24(-3, &ln23);
    ListNode ln25(-9, &ln24);
    
    Solution s;
    s.PrintList(&ln14);
    std::cout << std::endl;
    s.PrintList(&ln25);
    std::cout << std::endl;
    s.PrintList(s.mergeTwoLists(nullptr, nullptr)) ;
}