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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* res=NULL;
        ListNode* left=head;
        ListNode* right=left->next;
        while(right){
            while(right && left->val==right->val){
                right=right->next;
            }
            if(left->next != right){
                if(head==left){
                    head=right;
                    left=right;
                }else{
                    head->next=right;
                    left=right;
                }
            }
            else if(res==NULL){
                res=left;
                head=left;
                left=left->next;
            }
            else{
                head=left;
                left=left->next;
            }
            right=right?right->next:NULL;
        }
        return res?res:head;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* res=NULL;
        ListNode* tail=NULL;
        ListNode* right=head->next;
        while(head){
            while(right && head->val==right->val){
                right=right->next;
            }
            if(head->next == right){
                if(res==NULL){
                    res=head;
                }
                else{
                    tail->next=head;
                }
                tail=head;
                tail->next=NULL;
            }
            head=right;
            right=right?right->next:NULL;
        }
        return res;
    }
};