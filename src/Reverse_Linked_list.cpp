/*
 * Reverse_Linked_list.cpp
 *
 *  Created on: 2014Äê10ÔÂ7ÈÕ
 *      Author: Yanren
 */

class ListNode
{
public:
	int val;
	ListNode* next;

	ListNode(int x)
	{
		val = x;
		next = NULL;
	}
};

ListNode* reverse(ListNode* head)
{
	ListNode* pre = head;
	ListNode* cur = head->next;
	ListNode* next;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}

	return pre;
}
