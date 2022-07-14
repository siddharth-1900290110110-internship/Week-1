class Solution {
public:
  
  ListNode * start_point(ListNode *head)
    {
          ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {

        slow=slow->next;fast=fast->next->next;
            if(slow==fast)
            {
              return slow;
            }
        }
        return NULL;
    
    }
    
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
       ListNode *fast=head;
        ListNode *slow=head;
        ListNode * inter=start_point(head);
        if(inter==NULL)
        {
return NULL;
        }
        else{
        while(slow!=inter)
        {
      slow=slow->next;
            
            inter=inter->next;
            
        }
        }
        return slow;
        
    }
    
};
