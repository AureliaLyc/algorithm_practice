class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root){
            if(root->left){
                TreeNode* m=root->left;
                while(m->right) m=m->right;
                if(m->val>=root->val) return false;
            }
            if(root->right){
                TreeNode* m=root->right;
                while(m->left) m=m->left;
                if(m->val<=root->val) return false;
            }
            return isValidBST(root->left) && isValidBST(root->right);
        }
        return true;
    }
};

class Solution {
public:
    bool isValidLeft(TreeNode* root){
        TreeNode* m=root->left;
        while(m->right){
            m=m->right;
        }
        return m->val<root->val;
    }
    bool isValidRight(TreeNode* root){
        TreeNode* m=root->right;
        while(m->left){
            m=m->left;
        }
        return m->val>root->val;
    }
    bool isValidBST(TreeNode* root) {
        bool res=true;
        if(root){
            if((!root->left || root->left->val<root->val) && (!root->right || root->right->val>root->val)){
                res = (!root->left||isValidLeft(root)) && (!root->right||isValidRight(root));
            }
            else{
                res=false;
            }
            if(res){
                res = isValidBST(root->left) && isValidBST(root->right);
            }
        }
        return res;
    }
};