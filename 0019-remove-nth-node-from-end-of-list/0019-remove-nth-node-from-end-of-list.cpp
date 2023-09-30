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
    ListNode* removeNthFromEnd(ListNode* h, int n) {
        ListNode* p = h;
        ListNode* q = h;
        long long int c=0;

        while(p)
        {
            c++;
            p=p->next;
        }
        p=h;
        if(c==1)
          return NULL;
        c = c-n;
        if(c==0)
        {
            p=p->next;
            return p;
        }
        while(c)
        {
            q=p;
            p=p->next;
            c--;
        }
        q->next = p->next;
        return h;
        
    }
};