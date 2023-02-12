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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 1;
        while(!head){
            return NULL;
        }
        ListNode* tail = head;
        while(tail->next){
            n++;
            tail = tail->next;
        }
        tail->next = head;
        int s = n - k%n;
        for(int i=0;i < s;i++){
            tail = tail->next;
        }
        head = tail->next;
        tail->next = NULL;
        return head;}
};
