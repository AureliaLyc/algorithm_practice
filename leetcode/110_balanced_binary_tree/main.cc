#include <cstdio>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

 class Solution {
 public:
    int depth( TreeNode* root ){
        if( root ){
            int ld = depth(root->left);
            if( ld < 0 ){
                return ld;
            }
            int rd = depth(root->right);
            if( rd < 0 ){
                return rd;
            }
            if (abs( ld - rd ) > 1 )
            {
                return -1;
            }
            else{
                return max( ld, rd ) + 1;
            }
        }
        return 0;
    }
    bool isBalanced(TreeNode* root) {
        if(root){
            if( depth(root) < 0 ){
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    TreeNode t1(1);
    TreeNode t2(2);
    TreeNode t3(3);
    t1.left = NULL;
    t1.right = &t2;
    t2.left = NULL;
    t2.right = &t3;
    t3.left = NULL;
    t3.right = NULL;
    Solution abc;
    bool res = abc.isBalanced(&t1);

    return 0;
}