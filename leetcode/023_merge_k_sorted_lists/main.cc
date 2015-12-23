
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int size=lists.size();
        while(size>1){
            for(int i=0; i<size/2; ++i){
                ListNode* f=lists[i];
                ListNode* e=lists[size-1-i];
                ListNode* m=mergeLists(f, e);
                lists[i]=m;
                lists.pop_back();
            }
            size=lists.size();
        }
        return lists.empty()?nullptr:lists.front();
    }
    ListNode* mergeLists(ListNode* f, ListNode* e){
        if(!f || !e) return f?f:e;
        ListNode* head=nullptr;
        ListNode* tail=nullptr;
        while(f&&e){
            ListNode*& n=(f->val<=e->val?f:e);
            ListNode* nxt=n->next;
            if(!head){
                head=n;
                tail=head;
            }
            else{
                tail->next=n;
                tail=tail->next;
            }
            n=n->next;
        }
        ListNode* n=f?f:e;
        tail->next=n;
        return head;
    }
};
