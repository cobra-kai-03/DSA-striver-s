//Using Stack
 stack<int>s;
    LinkedListNode* current_p = head;
    while(current_p!=NULL)
    {
        s.push(current_p->data);
        current_p=current_p->next;
    }
    current_p=head;
    while(current_p!=NULL)
    {
        int k=s.top();
        current_p->data=k;
        s.pop();
        current_p=current_p->next;
    }
    return head;


ListNode* reverseList(ListNode* head) {

       //step 1
        ListNode* prev_p = NULL;
        ListNode* current_p = head;
        ListNode* next_p;
       
       //step 2
        while(current_p) {

            next_p = current_p->next;
            current_p->next = prev_p;
            
            prev_p = current_p;
            current_p = next_p;
        }

        head = prev_p; //step 3
        return head;
