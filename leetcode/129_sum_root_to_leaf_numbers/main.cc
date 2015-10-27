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
    int sumNumbers(TreeNode* root) {
        int res=0;
        if(root){
            res=sumTree(0, root);
        }
        return res;
    }
    int sumTree(int carry, TreeNode* root){
        carry+=root->val;
        if(!root->left && !root->right) return carry;
        if(!root->left) return sumTree(carry*10, root->right);
        if(root->left && !root->right) return sumTree(carry*10, root->left);
        carry*=10;
        return sumTree(carry, root->left)+sumTree(carry, root->right);
    }
};