class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        TreeNode* root=build(head, NULL);
        return root;
    }
    TreeNode* build(ListNode* head, ListNode* end){
        TreeNode* root=NULL;
        if(head != end){
            ListNode* fn=head;
            ListNode* sn=head;
            while(fn->next!=end && fn->next->next!=end){
                sn=sn->next;
                fn=fn->next->next;
            }
            root=new TreeNode(sn->val);
            root->left=build(head, sn);
            root->right=build(sn->next, end);
        }
        return root;
    }
};

class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* ln=head;
        int size=0;
        while(ln){
            ++size;
            ln=ln->next;
        }
        TreeNode* root=size>0 ? build(head, size) : NULL;
        return root;
    }
    TreeNode* build(ListNode* head, int size){
        int mid=size/2;
        ListNode* mn=head;
        int i=0;
        while(i<mid){
            mn=mn->next;
            ++i;
        }
        TreeNode* root=new TreeNode(mn->val);
        root->left=mid>0 ? build(head, mid) : NULL;
        root->right=size-mid-1>0 ? build(mn->next, size-mid-1) : NULL;
        return root;
    }
};