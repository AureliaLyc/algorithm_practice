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
    ListNode* reverseList(ListNode* head, int& size){
        ListNode* prev = NULL;
        while(head){
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
            size++;
        }
        return prev;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int sizeXY = 0;
        ListNode* headC = reverseList( headA, sizeXY );
        int sizeXZ = 0;
        ListNode* headA1 = reverseList( headB, sizeXZ );
        int sizeYZ = 0;
        ListNode* headB1 = reverseList( headC, sizeYZ );

        if (headA != headA1)
        {
            int i = 0;
            reverseList( headA1, i );
            return NULL;
        }
        int x = ( sizeXY + sizeXZ - sizeYZ ) / 2;
        ListNode* ret = headA;
        for (int i = 0; i < x; ++i)
        {
            ret = ret->next;
        }
        return ret;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A = headA;
        ListNode* prevA = NULL;
        ListNode* B = headB;
        ListNode* prevB = NULL;
        int sizeA = 0;
        while( A ){
            sizeA++;
            prevA = A;
            A = A->next;
        }

        int sizeB = 0;
        while( B ){
            sizeB++;
            prevB = B;
            B = B->next;
        }

        if (prevA != prevB)
        {
            return NULL;
        }

        if (sizeA > sizeB)
        {
            for (int i = 0; i < sizeA - sizeB; ++i)
            {
                headA = headA->next;
            }
        }
        else{
            for (int i = 0; i < sizeB - sizeA; ++i)
            {
                headB = headB->next;
            }
        }

        while( headA != headB ){
            headA = headA->next;
            headB = headB->next;
        }

        return headA;
    ｝
};