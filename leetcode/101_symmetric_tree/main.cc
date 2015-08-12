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
    bool isSymmetric(TreeNode* root) {
        if(root){
            deque<TreeNode*> v;
            v.push_back(root);
            while( !v.empty() ){

                int size = v.size();
                if(size > 1){
                    for(int i=0; i<size/2; ++i){
                        TreeNode* ln = v[i];
                        TreeNode* rn = v[size-1-i];
                        if( ln ){
                            if( rn ){
                                if(ln->val != rn->val){
                                    return false;
                                }
                            }
                            else{return false;}
                        }
                        else if( rn ){
                            return false;
                        }
                    }
                }
                for(int i=0; i<size; ++i){
                    TreeNode* tn = v.front();
                    if(tn){
                        v.push_back(tn->left);
                        v.push_back(tn->right);
                    }
                }
            }
        }
        return true;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 class Solution2 {
 public:
    bool isSymmetric(TreeNode* root) {
        if(root){
            return isSame( root->left, root->right );
        }
        return true;
    }
    bool isSame( TreeNode* ln, TreeNode* rn ){
        if( ln ){
            if( rn ){
                if( ln->val != rn->val ){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        else if( rn ){
            return false;
        }
        else{
            return true;
        }
        return isSame( ln->left, rn->right ) && isSame( ln->right, rn->left );
    }
};