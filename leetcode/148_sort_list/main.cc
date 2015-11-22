
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* end=head;
        ListNode* prev=nullptr;
        while(end){
            prev=prev?prev->next:head;
            end=end->next?end->next->next:nullptr;
        }
        ListNode* nd1=sortList(prev->next);
        prev->next=nullptr;
        ListNode* nd2=sortList(head);
        head=nd1->val<nd2->val?nd1:nd2;
        ListNode* tail=nullptr;
        while(nd1&&nd2){
            ListNode*& nd=nd1->val<nd2->val?nd1:nd2;
            if(tail){
                tail->next=nd;
            }
            tail=nd;
            nd=nd->next;
        }
        if(tail){
            tail->next=nd1?nd1:nd2;
        }
        return head;
    }
};
