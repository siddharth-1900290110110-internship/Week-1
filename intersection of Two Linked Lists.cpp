class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptr1 = headA;
	ListNode *ptr2 = headB;
	int cnt1 = 0, cnt2 = 0;
	while (ptr1 != NULL)
	{ // checking length of ptr1
		cnt1++;
		ptr1 = ptr1->next;
	}
	while (ptr2 != NULL)
	{ 
		cnt2++;
		ptr2 = ptr2->next;
	}
	ptr1 = headA; 
	ptr2 = headB;
	int difference = abs(cnt1 - cnt2); 
	
	if (cnt1 > cnt2)
	{
		for (int i = 0; i < difference; i++)
		{
			ptr1 = ptr1->next;
		}
	}
	else if (cnt2 > cnt1)
	{
		for (int i = 0; i < difference; i++)
		{
			ptr2 = ptr2->next;
		}
	}

	while (ptr1 != ptr2)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	if (ptr1 == ptr2)
		return ptr2;
	return NULL;
    }
};
