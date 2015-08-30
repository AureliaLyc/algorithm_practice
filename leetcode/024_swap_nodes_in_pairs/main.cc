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
    ListNode* swapPairs(ListNode* head) {
        ListNode* res = head;
        ListNode* pre = NULL;
        while(head && head->next){
            ListNode* next = head->next;
            if(res == head){
                res = next;
            }
            ListNode* third = next->next;
            next->next = head;
            head->next  = third;
            if(pre){
                pre->next = next;
            }
            pre = head;
            head = third;
        }
        return res;
    }
};