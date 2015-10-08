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
    vector<TreeNode*> create(int start, int end, vector<vector<vector<TreeNode*>>>& cache){
        vector<TreeNode*> res;
        if(start>end){
            res.push_back(NULL);
            return res;
        }
        if(!cache[start-1][end-1].empty()){
            return cache[start-1][end-1];
        }
        for(int i=start; i<=end; ++i){
            vector<TreeNode*> left = create(start, i-1, cache);
            vector<TreeNode*> right= create(i+1, end, cache);
            for(int m=0; m<left.size(); ++m){
                for(int n=0; n<right.size(); ++n){
                    TreeNode* root=new TreeNode(i);
                    root->left=left[m];
                    root->right=right[n];
                    res.push_back(root);
                }
            }
        }
        cache[start-1][end-1]=res;
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        vector<vector<vector<TreeNode*>>> cache(n,vector<vector<TreeNode*>>(n));
        return create(1, n, cache);
    }
};