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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* ret = head;
        while(head){
            if (head->val == val)
            {
                if (prev)
                {
                    prev->next = head->next;
                }
                else{
                    ret = head->next;
                }
            }
            else{
                prev = head;
            }
            head = head->next;
        }
        return ret;
    }
};