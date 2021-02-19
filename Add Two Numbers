ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int s,carry=0;
        ListNode* newh = new ListNode(0);
        ListNode* c=newh;
        while(l1!=NULL || l2!=NULL){
            s = carry + l1->val + l2->val;
            carry = s/10;
            s = s%10;
            cout << s << " ";
            c->next = new ListNode(s);
            c = c->next;
            l1 = l1->next;
            l2=l2->next;
            if(l1==NULL){
                while(l2!=NULL){
                    s = carry + l2->val;
                    carry = s/10;
                    s = s%10;
                    c->next = new ListNode(s);
                    c = c->next;
                    l2 = l2->next;
                }
            }
            else if(l2==NULL){
                while(l1!=NULL){
                    s = carry + l1->val;
                    carry = s/10;
                    s = s%10;
                    c->next = new ListNode(s);
                    c = c->next;
                    l1 = l1->next;
                }
            }
            }
        if(carry>0){
                c->next = new ListNode(carry);
        }
        return newh->next;
    }
