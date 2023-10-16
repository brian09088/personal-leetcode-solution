/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        /*
        设两个pointer，每次走一步的慢指针和每次走两步的快指针
        如果linked-list里有cycle的话，两个指针最终肯定会相遇
        */
        auto walker = head, runner = head;
        while(runner && runner -> next){
            walker = walker -> next;
            runner = runner -> next -> next;
            if(walker == runner){
                return true;
            }
        }
        return false;
    }
};
