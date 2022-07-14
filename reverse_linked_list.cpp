class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode *pre=NULL;
      
        ListNode *curr=head;
      
        ListNode *nex;
        while(curr!=NULL){
          
            
            nex=curr->next;
          
            curr->next=pre;
            pre=curr;
            curr=nex;
          
        }
        
        return pre;
    }
};
