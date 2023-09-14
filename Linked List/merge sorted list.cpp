ListNode* temp1=new ListNode(0);
        ListNode* ans=temp1;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val > list2->val){
                ans->next=list2;
                list2=list2->next;
            }
            else{
                ans->next=list1;
                list1=list1->next;
            } 
            ans=ans->next;
        }

        // for rest of Node
        if(list1!=nullptr){
            ans->next=list1;
        }
        else{
            ans->next=list2;
        }

        return temp1->next;
