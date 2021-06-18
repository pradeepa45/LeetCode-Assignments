/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode* head=NULL;
        ListNode* end = NULL;
        ListNode *curr1, *curr2;
        curr1 =l1;
        curr2 = l2;
        while(curr1 && curr2){
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
