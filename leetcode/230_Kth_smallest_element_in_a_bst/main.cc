
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<TreeNode*> v;
        TreeNode* p=root;
        while(p || !v.empty()){
            while(p){
                v.push_back(p);
                p=p->left;
            }
            p=v.back();
            v.pop_back();
            --k;
            if(k==0) return p->val;
            p=p->right;
        }
        return 0;
    }
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int cnt=0;
        return visit(root, cnt, k);
    }
    int visit(TreeNode* root, int& cnt, int k){
        if(root->left){
            int t=visit(root->left, cnt, k);
            if(cnt==k) return t;
        }
        ++cnt;
        if(cnt==k) return root->val;
        if(root->right){
            int t=visit(root->right, cnt, k);
            if(cnt==k) return t;
        }
        return 0;
    }
};