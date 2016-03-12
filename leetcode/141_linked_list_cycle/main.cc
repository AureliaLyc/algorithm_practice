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
    bool hasCycle(ListNode *head) {
        ListNode* fastNode=head?head->next:head;
        while(head && fastNode){
            if(head->val == fastNode->val){
                return true;
            }
            head=head->next;
            fastNode=fastNode->next?fastNode->next->next:NULL;
        }
        return false;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* l=head;
        ListNode* r=head;
        while(r&&r->next){
            l=l->next;
            r=r->next->next;
            if(l==r) return true;
        }
        return false;
    }
};