#include "14_RemoveDupInSortedList.h"
#include <iostream>
int main()
{
    ListNode ln11(4);
    ListNode ln12(3, &ln11);
    ListNode ln13(3, &ln12);
    ListNode ln14(2, &ln13);
    ListNode ln15(1, &ln14);
    ListNode ln16(1, &ln15);

    ListNode ln21(3);
    ListNode ln22(3, &ln21);
    ListNode ln23(2, &ln22);
    ListNode ln24(1, &ln23);
    ListNode ln25(1, &ln24);

    Solution s;
    s.PrintList(&ln16);
     std::cout << std::endl;
    s.deleteDuplicates(&ln16);
    s.PrintList(&ln16);
    
    /*std::cout << std::endl;
    s.PrintList(&ln25);
    s.deleteDuplicates(&ln25);
    std::cout << std::endl;
    s.PrintList(&ln25);*/
}

