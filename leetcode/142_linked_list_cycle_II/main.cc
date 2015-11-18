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
    ListNode *detectCycle(ListNode *head) {
        ListNode* nd1=head;
        ListNode* nd2=head;
        bool first=false;
        while(nd1 && nd2){
            if(first && nd1==nd2) break;
            first=true;
            nd1=nd1->next;
            nd2=nd2->next?nd2->next->next:NULL;
        }
        nd1=head;
        while(nd2 && nd1){
            if(nd1==nd2) break;
            nd1=nd1->next;
            nd2=nd2->next;
        }
        return nd2;
    }
};