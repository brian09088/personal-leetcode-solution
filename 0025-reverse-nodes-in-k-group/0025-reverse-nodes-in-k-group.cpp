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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *dummy = new ListNode(0),*pre = dummy,*cur = pre;
        dummy->next = head;
        int num = 0;
        while(cur = cur->next){
            num++;
            while(num>=k){
                cur = pre->next;
                for(int i=1;i<k;i++){
                    ListNode *temp = cur->next;
                    cur->next = temp->next;
                    temp->next = pre->next;
                    pre->next = temp;   
                }
                pre = cur;
                num = num-k;
            }
        }
        return dummy->next;
    }
};