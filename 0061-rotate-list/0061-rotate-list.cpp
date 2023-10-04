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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* p=head;
        ListNode* q=NULL;
        int c=1;
        if(head==NULL || p->next==NULL)
        {
            return head;
        }
        while(p)
        {
            p=p->next;
            c++;
            if(p && p->next==NULL)
            {
                p->next=head;
                break;
            }
            
        }
        
        // if(k>c)
        // {
        //     while(k>c)
        //     {
        //        k=k-c;
        //     }
        // }
        c=c-(k%c);
        if(c==0)
        {
            p->next=NULL;
            return head;
        }

        p=head;
        while(c>0)
        {
            c--;
            q=p;
            p=p->next;
        }
        
        if(q!=NULL)
          q->next=NULL;
        head=p;
        return p;
        
    }
};