/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* revhead = head;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;
        while(revhead!=NULL){
            nxt= revhead->next;
            revhead->next = prev;
            
            prev = revhead;
            revhead = nxt;
        }
        head=prev;
        return head;
    }
};
