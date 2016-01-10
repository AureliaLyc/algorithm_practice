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
    int maxPathSum(TreeNode* root) {
        int maxRes=INT_MIN;
        maxpath(root, maxRes);
        return maxRes;
    }
    int maxpath(TreeNode* root, int& maxRes){
        int res=0;
        if(root){
            int l=maxpath(root->left, maxRes);
            int r=maxpath(root->right, maxRes);
            maxRes=max(maxRes, l+r+root->val);
            res=max(l,r)+root->val;
        }
        return res>0?res:0;
    }
};