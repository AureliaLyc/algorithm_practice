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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==nullptr) return res;
        vector<TreeNode*> v;
        TreeNode* p=root;
        v.push_back(p);
        while(!v.empty()){
            p=v.back();
            v.pop_back();
            res.push_back(p->val);
            if(p->left) v.push_back(p->left);
            if(p->right) v.push_back(p->right);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
