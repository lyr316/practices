/*
 * Reverse_Linked_list.cpp
 *
 *  Created on: 2014Äê10ÔÂ7ÈÕ
 *      Author: Yanren
 */

class LinkedList
{
public:
	int val;
	LinkedList* next;

	LinkedList(int x)
	{
		val = x;
		next = NULL;
	}
};

LinkedList* reverse(LinkedList* head)
{
	LinkedList* pre = head;
	LinkedList* cur = head->next;
	LinkedList* next;

	while (cur != NULL)
	{
		next = cur->next;
		cur->next = pre;
		pre = cur;
		cur = next;
	}

	return pre;
}
