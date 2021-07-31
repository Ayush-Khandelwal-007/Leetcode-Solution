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

        if (l1 == NULL || l2 == NULL) {
            return l1 == NULL ? l2 : l1;
        }
        

        ListNode* head = NULL;
        ListNode* curr = NULL;
        

        int carry = 0;
        

        int x = 0;
        int y = 0;
               
        while (l1 || l2 || carry) {
            x = l1 ? l1->val : 0;
            y = l2 ? l2->val : 0;
            
            carry = x + y + carry;
            
            (!curr ? curr : curr->next) = new ListNode(carry % 10);
            
            carry = carry / 10;
            
            if (!head) {
                head = curr;
            }
            else {
                curr = curr ->next;
            }
            
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        
        return head;
      
    }
};