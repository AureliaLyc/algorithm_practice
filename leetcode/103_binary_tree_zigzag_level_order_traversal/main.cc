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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if(root){
            vector<TreeNode*> qtn;
            qtn.push_back(root);
            create(qtn, res);
        }
        return res;
    }
    void create(vector<TreeNode*>& qtn, vector<vector<int> >& res){
        bool lr=true;
        while(!qtn.empty()){
            int size=qtn.size();
            vector<int> r(qtn.size());
            vector<TreeNode*> rtn;
            for(int i=0; i<size; ++i){
                TreeNode* tn=qtn[size-1-i];
                r[i]=tn->val;
                if(lr){
                    if(tn->left) rtn.push_back(tn->left);
                    if(tn->right) rtn.push_back(tn->right);
                }
                else{
                    if(tn->right) rtn.push_back(tn->right);
                    if(tn->left) rtn.push_back(tn->left);
                }
            }
            qtn.swap(rtn);
            lr=!lr;
            res.push_back(r);
        }
    }
};