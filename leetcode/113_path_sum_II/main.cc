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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > res;
        vector<int> v;
        if(root){
            build(res, v, sum, root);
        }
        return res;
    }
    void build(vector<vector<int> >& res, vector<int> &v, int sum, TreeNode* root){
        sum-=root->val;
        v.push_back(root->val);
        if(sum==0 && root->left==NULL && root->right==NULL){
            res.push_back(v);
        }
        if(root->left){
            build(res, v, sum, root->left);
            v.pop_back();
        }
        if(root->right){
            build(res, v, sum, root->right);
            v.pop_back();
        }
    }
};