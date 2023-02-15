
/*
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.

Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/

#include <iostream>
#include "MergeTwoSortedLists.h"


void Solution::PrintList(ListNode* list1)
{
	ListNode* ptr = list1;
	while (ptr != nullptr)
	{
		std::cout << ptr->val << " ";
		ptr = ptr->next;
	}
}
ListNode* Solution::mergeTwoLists(ListNode* list1, ListNode* list2)
{
	ListNode* ptr1 = list1;
	ListNode* ptr2 = list2;
	ListNode *result = nullptr;
	
	if (ptr1 == nullptr)
		return ptr2;
	if (ptr2 == nullptr)
		return ptr1;

	result = (ptr1->val < ptr2->val) ? ptr1 : ptr2;
	if (ptr1->val < ptr2->val)
		ptr1 = ptr1->next;
	else
		ptr2 = ptr2->next;
	
	ListNode* ptr_res = result;
	while (ptr1 != nullptr && ptr2 != nullptr)
	{
		if (ptr1->val < ptr2->val)
		{
			ptr_res->next = ptr1;
			ptr1 = ptr1->next;
		}
		else
		{
			ptr_res->next = ptr2;
			ptr2 = ptr2->next;
		}
		ptr_res = ptr_res->next;
	}
	if (ptr1 != nullptr)
	{
		ptr_res->next = ptr1;
	}
	else if (ptr2 != nullptr)
	{
		ptr_res->next = ptr2;
	}

	return result;
}