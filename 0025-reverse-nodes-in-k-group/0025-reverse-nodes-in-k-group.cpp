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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* p= head;
        ListNode* q=NULL;
        ListNode* r = NULL;
        int c=0;
        ListNode* check = head;

        for(int i=0;i<k;i++)
        {
            if(check==NULL)
              return head;
            check = check->next;
        }
        
        while(p && c<k)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            c++;
        }

        if(p)
          head->next = reverseKGroup(p,k);
        return q;
          
    }
};