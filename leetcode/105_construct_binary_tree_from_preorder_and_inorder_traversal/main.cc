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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size=preorder.size();
        TreeNode* root=NULL;
        if(size){
            root=build(preorder, 0, size, inorder, 0, size);
        }
        return root;
    }
    TreeNode* build(vector<int>& preorder, int ps, int pe, vector<int>& inorder, int is, int ie){
        TreeNode* res=NULL;
        if(ps<pe){
            res=new TreeNode(preorder[ps]);
            int i=0;
            while(preorder[ps] != inorder[i+is]) ++i;
            res->left =build(preorder, ps+1, ps+i+1, inorder, is, is+i);
            res->right=build(preorder, ps+i+1, pe, inorder, is+i+1, ie);
        }
        return res;
    }
};

class Solution2 {
public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        TreeNode *root=NULL; stack<TreeNode *> MyData;
        if(preorder.empty()) return root;
        root = new TreeNode(preorder[0]);
        MyData.push(root); int index = 0;
        for(int i=1; i<=preorder.size(); i++) {
            TreeNode *cur = MyData.top();
            if((MyData.top()->val)!=inorder[index]) {
                cur->left = new TreeNode(preorder[i]);
                MyData.push(cur->left);
            } else {
                while(!MyData.empty() && ((MyData.top()->val)==inorder[index])) {
                    cur=MyData.top(); MyData.pop(); index++;
                }
                if(index<inorder.size()) {
                    cur->right = new TreeNode(preorder[i]);
                    MyData.push(cur->right);
                }
            }
        }
        return root;
    }
};