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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root=NULL;
        int size=inorder.size();
        if(size){
            root=build(inorder, -1, size-1, postorder, -1, size-1);
        }
        return root;
    }
    TreeNode* build(vector<int>& inorder, int irend, int irstart, vector<int>& postorder, int prend, int prstart){
        TreeNode* root=NULL;
        if(prend<prstart){
            root=new TreeNode(postorder[prstart]);
            int i=irstart;
            while(inorder[i]!=root->val) --i;
            root->left =build(inorder, irend, i-1, postorder, prend, prend+(i-irend-1));
            root->right=build(inorder, i, irstart, postorder, prend+(i-irend-1), prstart-1);
        }
        return root;
    }
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        TreeNode* root=nullptr;
        if(postorder.empty()) return root;
        root=new TreeNode(postorder[postorder.size()-1]);
        stack<TreeNode*> stac;
        stac.push(root);
        int j=inorder.size()-1;
        TreeNode* cur=nullptr;
        for(int i=postorder.size()-2; i>=0; --i){
            if(postorder[i+1]!=inorder[j]){
                stac.top()->right=new TreeNode(postorder[i]);
                stac.push(stac.top()->right);
            }
            else{
                while(!stac.empty() && stac.top()->val==inorder[j]){
                    cur=stac.top();
                    stac.pop();
                    --j;
                }
                if(j>=0){
                    cur->left=new TreeNode(postorder[i]);
                    stac.push(cur->left);
                }
            }
        }
        return root;
    }
};