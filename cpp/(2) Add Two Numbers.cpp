// Source : https://leetcode.com/problems/add-two-numbers/
// Author : Brian SU
// Date   : 2022-10-18

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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *l3 = new ListNode(0);
        ListNode *p=l1,*q=l2,*r=l3;
        int carry=0;
        int sum=0;
        
        while(p!=NULL && q!=NULL){
            sum=p->val + q->val + carry;
            carry=sum/10;
            r->next = new ListNode(sum%10);
            p = p->next;
            q = q->next;
            r = r->next;
        }
        
        while (p!=NULL || q!=NULL || carry!=0){
            
            sum=carry;
           
            if(p != NULL){
                sum+=p->val;
                p=p->next;}
            if(q != NULL){
                sum+=q->val;
                q=q->next;}
            
            carry=sum/10;
            r->next = new ListNode(sum%10);
            r=r->next;
        } 
        return l3->next;
    }
};
