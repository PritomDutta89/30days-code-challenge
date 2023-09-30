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
    ListNode* reverseList1(ListNode* head, ListNode* prev)
    {
        if(!head)
          return prev;
        ListNode* next = head->next;
        head->next = prev;
        return reverseList1(next, head);
        
    }

    ListNode* reverseList(ListNode* head) {

        //Iterative - 
        //  ListNode* p = head;
        //  ListNode* q = NULL;
        //  ListNode* r = NULL;

        //  while(p)
        //  {
        //     r = q;
        //     q=p;
        //     p=p->next;
        //     q->next = r;
        //  }
        //  head=q;
        //  return head;

        //Recursion-
        return reverseList1(head,NULL);
    }
};