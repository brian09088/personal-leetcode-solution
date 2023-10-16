/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 法1
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* tail = headA;
        while(tail -> next){
            tail = tail -> next;
        }

        tail -> next = headA;

        ListNode *fast = headB, *slow = headB;

        while(fast && fast -> next){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast){
                slow = headB;
                while(slow != fast){
                    slow = slow -> next;
                    fast = fast -> next;
                }
                // undoing the loop
                tail -> next = NULL;
                return slow;
            };
        }
        tail -> next = NULL;
        return NULL;
    }
};
// 法2
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA && !headB){return NULL;}
        ListNode *a = headA, *b = headB;
        while(a != b){
            a = a ? a -> next : headB;
            b = b ? b -> next : headA;
        }
        return a;
    }
};
