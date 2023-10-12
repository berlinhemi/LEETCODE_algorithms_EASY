// 14_RemoveDupInSortedList.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "14_RemoveDupInSortedList.h"

#include <iostream>


void Solution::PrintList(ListNode* list1)
{
	ListNode* ptr = list1;
	while (ptr != nullptr)
	{
		std::cout << ptr->val << " ";
		ptr = ptr->next;
	}
}

ListNode* Solution::deleteDuplicates(ListNode* head)
{
	ListNode* ptr1 = head;
	ListNode* ptr2 = head;
	while (ptr1)
	{
		if (ptr2->next && ptr2->val == ptr2->next->val)
		{
			ptr2 = ptr2->next;
		}
		else
		{
			ptr1->next = ptr2->next;
			ptr2 = ptr2->next;
			ptr1 = ptr2;
		}
		
	}
	return head;
}