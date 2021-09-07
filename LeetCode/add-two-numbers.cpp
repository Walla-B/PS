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
        ListNode head = ListNode();
        ListNode* t= &head;
        
        int c = 0;
        while (l1 || l2 || c){
            int l1val = 0;
            int l2val = 0;
            
            if (l1){
                l1val = l1->val;
                l1 = l1->next;
            }
            if (l2){
                l2val = l2->val;
                l2 = l2->next;
            }
            c = l1val + l2val + c;
            
            
            t->next = new ListNode();
            t = t->next;
            
            t->val = c % 10;
            cout << t->val << endl;
            
            if (c >= 10) {
                c = 1;
            }
            else {
                c = 0;
            }
        }
        
        
        return head.next;
        
    }
};