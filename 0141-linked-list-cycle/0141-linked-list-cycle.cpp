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
        ListNode *p=head;
        ListNode *q=head;
        while(p)
        {
            p=p->next;
            if(p)
              p=p->next;
            q=q->next;
            if(p==q && p && q)
              return true;
        }
        return false;
    }
};