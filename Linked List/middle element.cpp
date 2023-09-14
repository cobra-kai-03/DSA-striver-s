ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        ListNode*slow=head;
        ListNode*fast=head->next;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next;
            fast=fast->next;
            slow=slow->next;
        }
        return slow->next;
    }
