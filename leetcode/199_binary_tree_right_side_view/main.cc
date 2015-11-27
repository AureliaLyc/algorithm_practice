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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root){
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                int size=q.size();
                res.push_back(q.front()->val);
                for(int i=0; i<size; ++i){
                    TreeNode* tn=q.front();
                    q.pop();
                    if(tn->right) q.push(tn->right);
                    if(tn->left) q.push(tn->left);
                }
            }
        }
        return res;
    }
};