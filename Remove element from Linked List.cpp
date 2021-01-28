class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode *temp=head;
        
        while(head->next!=NULL)
        {
            if( head->next->val==val)
                head->next=head->next->next;
            else
                head=head->next;
        }
        if(temp->val==val)
            temp=temp->next;
        return temp;
    }
};
