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
    void visit(vector<int>& res, TreeNode* root){
        if(root){
            visit(res, root->left);
            res.push_back(root->val);
            visit(res, root->right);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        visit(res, root);
        return res;
    }
};


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        vector<TreeNode*> st;
        while(true){
            if(root){
                st.push_back(root);
                root=root->left;
            }
            else{
                if(st.empty()) break;
                root=st.back();
                st.pop_back();
                res.push_back(root->val);
                root=root->right;
            }
        }
        return res;
    }
};

class MorrisTraversal {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        while(root){
            if(root->left==NULL){
                res.push_back(root->val);
                root=root->right;
            }
            else{
                TreeNode* pre=root->left;
                while(pre->right && pre->right != root){
                    pre=pre->right;
                }
                if(pre->right==NULL){
                    pre->right=root;
                    root=root->left;
                }
                else{
                    pre->right=NULL;
                    res.push_back(root->val);
                    root=root->right;
                }
            }
        }
        return res;
    }
};