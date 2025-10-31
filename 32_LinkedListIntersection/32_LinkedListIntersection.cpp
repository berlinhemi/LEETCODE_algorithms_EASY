// 32_LinkedListIntersection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_set>

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next){}
};

class Solution {
public:
	ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
		if (!headA || !headB)
			return nullptr;
		ListNode* ptr1 = headA;
		ListNode* ptr2 = headB;

		//result = (ptr1->val < ptr2->val) ? ptr1 : ptr2;
		//if (ptr1->val < ptr2->val)
		//	ptr1 = ptr1->next;
		//else
		//	ptr2 = ptr2->next;

		//ListNode* end = nullptr;
		std::unordered_set<ListNode*> visited;
		while (ptr1 || ptr2)
		{
			if (ptr1)
			{
				if (ptr1 && !visited.count(ptr1))
					visited.insert(ptr1);
				else
					return ptr1;

				ptr1 = ptr1->next;
			}
			

			if (ptr2)
			{
				if (!visited.count(ptr2))
					visited.insert(ptr2);
				else
					return ptr2;

				ptr2 = ptr2->next;
			}
		}
		return nullptr;
	}

	void PrintList(ListNode* list1)
	{
		ListNode* ptr = list1;
		while (ptr != nullptr)
		{
			std::cout << ptr->val << " ";
			ptr = ptr->next;
		}
	}
};




int main()
{
    ListNode ln11(4);
    ListNode ln12(3, &ln11);
    ListNode ln13(2, &ln12);
    ListNode ln14(1, &ln13);

    ListNode ln21(10);
    ListNode ln22(9, &ln12);
    ListNode ln23(-2, &ln22);
    ListNode ln24(-3, &ln23);
    ListNode ln25(-9, &ln24);

    Solution s;
    s.PrintList(&ln14);
    std::cout << std::endl;
    s.PrintList(&ln25);
    std::cout << std::endl;
	if(s.getIntersectionNode(&ln25, &ln14))
		std::cout << s.getIntersectionNode(&ln25, &ln14)->val << std::endl;
}