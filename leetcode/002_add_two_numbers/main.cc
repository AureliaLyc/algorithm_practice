
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(0) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* res = 0;
        ListNode* p = 0;
        while(l1 || l2 || carry){
            int result = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            ListNode* n = new ListNode(0);
            if(res){
                p->next = n;
                p = p->next;
            }
            else{
                res = n;
                p = res;
            }
            p->val = result % 10;
            carry = result / 10;
            l1 = l1 ? l1->next : 0;
            l2 = l2 ? l2->next : 0;
        }

        return res;
    }
};

class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if( !(l1 && l2) ){
            return l1 ? l1 : l2;
        }

        ListNode* res = l1;
        ListNode* l2t = l2;
        ListNode* prev = 0;
        int carry = 0;
        while( l2 || carry ){
            int result = l1->val + (l2 ? l2->val : 0) + carry;
            l1->val = result % 10;
            carry = result / 10;
            prev = l1;
            l1 = l1->next;
            l2 = l2 ? l2->next : 0;
            if(!l1 && (l2 || carry)){
               ListNode* lnext = l2t->next;
               l1 = l2t;
               l1->val = 0;
               l1->next = 0;
               prev->next = l1;
               l2t = lnext;
            }
        }
        return res;
    }
};