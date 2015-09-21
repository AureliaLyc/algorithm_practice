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
    ListNode* rotateRight(ListNode* head, int k) {
        if( head==NULL || k==0 ){
            return head;
        }
        ListNode* first = head;
        int size=0;
        for(int i=0; i<k && first; ++i){
            ++size;
            first = first->next;
        }
        if(first==NULL){
            k = k%size;
            first = head;
            for(int i=0; i<k; ++i){
                first = first->next;
            }
        }
        if(k==0){
            return head;
        }
        ListNode* second = head;
        while(first->next){
            first = first->next;
            second = second->next;
        }
        first->next = head;
        ListNode* res = second->next;
        second->next = NULL;
        return res;
    }
};