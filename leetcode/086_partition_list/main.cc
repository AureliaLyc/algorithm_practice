class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* low=NULL;
        ListNode* lowTail=NULL;
        ListNode* high=NULL;
        ListNode* highTail=NULL;
        while(head){
            ListNode* t=head;
            head=head->next;
            t->next=NULL;
            if(t->val<x){
                if(low==NULL){
                    low=t;
                }
                else{
                    lowTail->next=t;
                }
                lowTail=t;
            }
            else{
                if(high==NULL){
                    high=t;
                }
                else{
                    highTail->next=t;
                }
                highTail=t;
            }
        }
        if(lowTail){
            lowTail->next=high;
        }
        else{
            low=high;
        }
        return low;
    }
};
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* l=nullptr, *lh=nullptr;
        ListNode* r=nullptr, *rh=nullptr;
        while(head){
            ListNode* t=head->next;
            ListNode**m=head->val<x?&l:&r;
            ListNode**mh=head->val<x?&lh:&rh;
            if(*mh==nullptr) *mh=head;
            if(*m){
                (*m)->next=head;
            }
            *m=head;
            (*m)->next=nullptr;
            head=t;
        }
        if(l){
            l->next=rh;
            return lh;
        }
        return rh;
    }
};