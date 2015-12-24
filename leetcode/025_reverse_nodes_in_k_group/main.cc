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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode t(0);
        ListNode* res=&t;
        res->next=head;

        for(ListNode* left=res; left&&left->next; ){ // a new round.
            head=left->next;
            ListNode* tail=head;
            int i=0;
            for(; i<k-1 && tail->next; ++i, tail=tail->next);
            ListNode* h=nullptr;
            if(i==k-1){ // collected k nodes.
                ListNode* nxtHead=tail->next;
                tail->next=nullptr;
                ListNode* pre=nxtHead;
                h=head;
                while(head){
                    ListNode* n=head->next;
                    head->next=pre;
                    pre=head;
                    head=n;
                }
                left->next=pre;
            }
            left=h;
        }
        return res->next;
    }
};