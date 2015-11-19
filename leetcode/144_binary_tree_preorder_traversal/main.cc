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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        vector<TreeNode*> vs;
        if(root) vs.push_back(root);
        while(!vs.empty()){
            TreeNode* tn=vs.back();
            vs.pop_back();
            res.push_back(tn->val);
            if(tn->right) vs.push_back(tn->right);
            if(tn->left) vs.push_back(tn->left);
        }
        return res;
    }
};