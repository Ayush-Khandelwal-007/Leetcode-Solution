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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode* head=NULL;
      ListNode* curr=NULL;
      
      int x = 1000;
      int y = 1000;
      
      while (l1 || l2) {
        x = l1 ? l1->val : 1000;
        y = l2 ? l2->val : 1000;
        
        int mini = min(x,y);

        (!curr ? curr : curr->next) = new ListNode(mini);

        if (!head) {
            head = curr;
        }
        else {
            curr = curr ->next;
        }

        if(mini==x){
          l1 = l1 ? l1->next : NULL;
        }
        else{
          l2 = l2 ? l2->next : NULL;
        }
      }
      return head;
    }
};