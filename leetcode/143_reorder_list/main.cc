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
    void reorderList(ListNode* head) {
        ListNode* nd1=head;
        ListNode* nd2=head;
        ListNode* preNd=NULL;
        while(nd1 && nd2){
            preNd=nd1;
            nd1=nd1->next;
            nd2=nd2->next?nd2->next->next:NULL;
        }
        if(preNd) preNd->next=NULL;
        preNd=NULL;
        while(nd1){
            ListNode* temp=nd1->next;
            nd1->next=preNd;
            preNd=nd1;
            nd1=temp;
        }
        nd1=head;
        nd2=preNd;
        while(nd2){
            ListNode* t1=nd1->next;
            ListNode* t2=nd2->next;
            nd1->next=nd2;
            nd2->next=t1;
            nd1=t1;
            nd2=t2;
        }
    }
};