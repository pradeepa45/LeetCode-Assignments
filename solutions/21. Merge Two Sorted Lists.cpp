        }
        while(curr1){
            ListNode * nw = new ListNode(curr1->val);
                if(head == NULL){
                    head = nw;
                    end = nw;
                }
                else{
                    end -> next = nw;
                    end = end->next;
                }
                curr1=curr1->next;
        }
        while(curr2){
            ListNode * nw = new ListNode(curr2->val);
                if(head == NULL){
                    head = nw;
                    end = nw;
                }
                else{
                    end -> next = nw;
                    end = end->next;
​
                }
                curr2 = curr2 -> next;
        }
        return head ;
    }
};
