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
    ListNode* start=head;
    ListNode* end=head;

        if(!head) return false;
        if(!head->next ) return false;

        while(start && start!=end){
            if(start->next) start=start->next->next;
            end=end->next;

        }

        if(start) return true;
    return false;
    }
};