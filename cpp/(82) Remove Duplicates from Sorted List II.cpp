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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0,head);
        ListNode* p = dummy;
        //當前節點為 p，當前不重複節點為 dummy，遍歷指針為 cur
        /*
        1. 如果 p 的值和 p 的下一個節點的值相同，那麼從 p 開始，往後找到第一個和 p 值不同的節點，設為 q。
        2. 將 dummy 的 next 指向 q，即跳過重複的節點。
        3. 將 p 設置為 q，繼續往後遍歷。
        */
        while(p -> next){
            ListNode* cur = p -> next;
            if(cur -> next && cur->val == cur -> next -> val){
                while(cur -> next && cur->val == cur -> next -> val){
                    cur = cur -> next;
                }
                p -> next = cur -> next;
            }
            else{
                p = p -> next;
            }
        }
        return dummy -> next;
    }
};
