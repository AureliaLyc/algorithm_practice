#include <iostream>

/**
 * Definition for singly-linked list.*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(m==n)return head;
        ListNode* res=(m==1?NULL:head);
        ListNode* tail=NULL;
        ListNode* mHead=NULL;
        ListNode* mTail=NULL;
        ListNode* rHead=NULL;
        int i=1;
        while(i<m){
            tail=(tail==NULL?head:tail->next);
            ++i;
        }
        mHead=rHead=(tail==NULL?head:tail->next);
        while(i<=n){
            ++i;
            ListNode* nNode=rHead->next;
            rHead->next=mTail;
            mTail=rHead;
            rHead=nNode;
        }
        if(tail){
            tail->next=mTail;
        }
        else{
            res=mTail;
        }
        mHead->next=rHead;
        return res;
    }
};