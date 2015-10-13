/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        while(root){
            TreeNode* left=root->left;
            if(left){
                TreeNode* right=root->right;
                root->right=left;
                root->left=NULL;
                TreeNode* l=left;
                while(l->right) l=l->right;
                l->right=right;
            }
            root=root->right;
        }
    }
};