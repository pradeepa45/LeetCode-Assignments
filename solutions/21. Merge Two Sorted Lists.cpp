            if(curr1->val >= curr2->val){
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
                curr2 = curr2->next;
                
            }
            else{
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
            
        }
        if(curr1 && !curr2){
                if(head == NULL){
                    head = curr1;
                }
                else{
                    end -> next = curr1;
                }
        }
        if(curr2 && !curr1){
                if(head == NULL){
                    head = curr2;
                }
                else{
                    end -> next = curr2;
                }
        }
        
        return head ;
    }
};
