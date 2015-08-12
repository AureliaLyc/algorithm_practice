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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if( root ){
            queue<TreeNode*> q;
            q.push( root );
            while(!q.empty()){
                int size = q.size();
                vector<int> t;
                for(int i = 0; i<size; ++i){
                    TreeNode* node = q.front();
                    q.pop();
                    t.push_back( node->val );
                    if(node->left){
                        q.push(node->left);
                    }
                    if(node->right){
                        q.push(node->right);
                    }
                }
                res.push_back(t);
            }
        }
        return res;
    }
};