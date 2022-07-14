class Solution {
public:
    ListNode* middleNode(ListNode* head) {
         if(head==NULL)
        {
            return NULL;
        }
        ListNode* temp=head;
        int c=1;
        while(temp->next!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int x=c/2;
        temp=head;
        c=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            c++;
            if(c==x)
            {
                break;
            }
        
            
        }
        return temp;
    }
};
