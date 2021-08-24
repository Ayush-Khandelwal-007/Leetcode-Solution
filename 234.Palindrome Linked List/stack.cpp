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
        ListNode *p = head;
        stack<int>st;
        while(p){
            st.push(p->val);
            p=p->next;
        }
        p = head;
        while(p){
            if(st.top()!=p->val)return false;
            st.pop();
            p=p->next;
        }
        return true;
    }
};