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
    ListNode* partition(ListNode* head, int x) {
        if (!head) return head;
        ListNode *dummy = new ListNode(-1);
        ListNode *newdummy = new ListNode(-1);
        dummy->next = head;
        ListNode *cur = dummy, *p = newdummy; 
        while(cur->next){
            if(cur->next->val < x){
                p -> next = cur -> next;
                p = p->next;
                cur->next = cur->next->next;
                p -> next = NULL;
            }  
            else{
                cur = cur->next;
            }
        }
        p->next = dummy->next;
        return newdummy->next;
        
    }
};
