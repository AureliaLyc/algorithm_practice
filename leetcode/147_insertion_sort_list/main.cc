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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* ln=head?head->next:NULL;
        ListNode* prev=head;
        while(ln){
            if(ln->val>prev->val){
                prev=ln;
                ln=ln->next;
            }
            else{
                ListNode* nxt=ln->next;
                ListNode* pp=NULL;
                ListNode* p=head;
                for(; p!=ln; p=p->next){
                    if(ln->val<p->val){
                        prev->next=ln->next;
                        pp ? pp->next=ln : head=ln;
                        ln->next=p;
                        break;
                    }
                    pp=p;
                }
                ln=nxt;
            }
        }
        return head;
    }
};