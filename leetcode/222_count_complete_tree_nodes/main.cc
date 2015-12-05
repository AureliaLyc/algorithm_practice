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
    int countNodes(TreeNode* root) {
        int res=0;
        int left=0, right=0;
        TreeNode* tn;
        for(tn=root; tn; tn=tn->left) ++left;
        for(tn=root; tn; tn=tn->right) ++right;
        while(root){
            if(left==right){
                res+= (1<<left)-1;
                break;
            }
            else{
                ++res;
                --left;
                --right;
                int lRight=0;
                for(tn=root->left; tn; tn=tn->right) ++lRight;
                if(left==lRight){
                    // left is complete.
                    res+=(1<<left)-1;
                    // go to right.
                    left=0;
                    for(tn=root->right; tn; tn=tn->left) ++left;
                    root=root->right;
                }
                else{
                    // right is complete.
                    res+=(1<<right)-1;
                    // goto left.
                    right=lRight;
                    root=root->left;
                }
            }
        }
        return res;
    }
};