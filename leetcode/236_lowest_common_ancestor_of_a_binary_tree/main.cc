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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> sp;
        vector<TreeNode*> sq;
        collect(sp, root, p);
        collect(sq, root, q);
        for(int i=1; i<sp.size() && i<sq.size(); ++i){
            if(sp[i]!=sq[i]){
                break;
            }
            root=sp[i];
        }
        return root;
    }
    bool collect(vector<TreeNode*>& s, TreeNode* root, TreeNode* p){
        bool res=false;
        s.push_back(root);
        if(root==p) return true;
        if(root->left) {
            res=collect(s, root->left, p);
            if(res) return res;
        }
        if(root->right){
            res=collect(s, root->right, p);
            if(res) return res;
        }
        s.pop_back();
        return res;
    }
};