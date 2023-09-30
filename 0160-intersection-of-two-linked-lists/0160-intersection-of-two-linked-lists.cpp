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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        long long int n1=0, n2=0;
        ListNode *p=h1;
        ListNode *q=h2;

        while(p)
        {
            n1++;
            p=p->next;
        }

        while(q)
        {
            n2++;
            q=q->next;
        }
        p=h1;
        q=h2;

        while(p && q)
        {
            if(n1>n2)
            {
                p=p->next;
                n1--;
            }
            else if(n1<n2)
            {
              q=q->next;
              n2--;
            }      
            else if(n1==n2)
            {
                if(p==q)
                  return p;
                else
                {
                    p=p->next;
                    q=q->next;
                }
            }      
        }
        return NULL;
    }
};