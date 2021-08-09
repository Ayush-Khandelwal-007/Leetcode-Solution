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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA=0;
        ListNode* temp = headA;
        
        while(temp!=nullptr)
        {
            lenA++;
            temp=temp->next;
        }
        
        int lenB=0;
        temp = headB;
        
        while(temp!=nullptr)
        {
            lenB++;
            temp=temp->next;
        }
        
        int len = abs(lenA-lenB);
        
        if(lenA<lenB)
        {
            while(len--)
            {
                headB=headB->next;
            }
        }
        else if(lenA>lenB)
        {
            while(len--)
            {
                headA=headA->next;
            }
        }
        
        ListNode* ans;
        
        while(headA != nullptr)
        {
            if(headA == headB)
            {
                ans=headA;
                break;
            }
            
            headA=headA->next;
            headB=headB->next;
        }
        return ans;
    }
};