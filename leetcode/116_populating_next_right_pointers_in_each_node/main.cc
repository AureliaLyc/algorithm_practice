/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root&&root->left){
            root->left->next=root->right;
            TreeLinkNode* tln=root;
            while(tln->next){
                tln->right->next=tln->next->left;
                tln=tln->next;
                tln->left->next=tln->right;
            }
            root=root->left;
        }
    }
};