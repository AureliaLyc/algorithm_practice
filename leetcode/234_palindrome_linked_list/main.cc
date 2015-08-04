#include <cstdio>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void show(ListNode* head){
    printf("list is:");
    while(head){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}
class Solution {
public:
    ListNode* findMiddle(ListNode* head){
        ListNode* middle = head;
        ListNode* end = head;
        while(end && end->next){
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }

    // reverse the linked list.
    ListNode* reverselist(ListNode* head){
        ListNode* prevNode = NULL;
        while(head){
            ListNode* nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
    bool isPalindrome(ListNode* head) {
        show(head);
        ListNode* middleNode = findMiddle(head);
        show(middleNode);
        ListNode* reversedSecond = reverselist(middleNode);
        show(reversedSecond);
        ListNode* thisNode = head;
        while(reversedSecond){
            if (reversedSecond->val != thisNode->val)
            {
                return false;
            }
            reversedSecond = reversedSecond->next;
            thisNode = thisNode->next;
        }
        return true;
    }
};

int main(){
    ListNode aNode(1);
    ListNode bNode(1);
    ListNode cNode(2);
    ListNode dNode(1);
    aNode.next = &bNode;
    bNode.next = &cNode;
    cNode.next = &dNode;
    Solution sol;
    bool res = sol.isPalindrome(&aNode);
    printf("%s\n", res?"yes":"no");
}
