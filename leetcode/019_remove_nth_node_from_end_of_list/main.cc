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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* res = NULL;
        ListNode* p1 = head;
        ListNode* p2 = NULL;
        // 向前移动n
        for(int i=0; i<n; ++i){
            p1 = p1->next;
        }
        // 同步移动两个指针
        while(p1){
            // 第一步是指向head，这样保证二者相差了n+1
            if( !p2 ){
                p2 = head;
                res = head;
            }
            else{
                p2 = p2->next;
            }
            p1 = p1->next;
        }
        // 如果可以跳过下一个，那就跳，不能就是刚开始，要跳过第一个
        if( p2 && p2->next ){
            p2->next = p2->next->next;
        }
        else {
            res = head->next;
        }
        return res;
    }
};