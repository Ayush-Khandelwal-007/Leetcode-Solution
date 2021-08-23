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
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head, *slow = head, *p = head, *q = NULL;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow = reverse(slow);
        
        p = head, q = slow;
        
        while(q){
            if(p->val != q->val)
                return false;
            p = p->next, q = q->next;
        }
        return true;
    }
    ListNode *reverse(ListNode *head){
        ListNode *pre = NULL, *next = NULL, *p = head;
        
        while(p){
            next = p->next;
            p->next = pre;
            pre = p;
            p = next;
        }
        return pre;
    }
};