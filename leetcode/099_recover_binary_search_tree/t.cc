#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
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
class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode* p=root;
        TreeNode* mor=nullptr;
        TreeNode* prev=p;
        TreeNode* f=nullptr;
        TreeNode* s=nullptr;
        while(p){
            if(!p->left){
                if(prev->val>p->val){
                    s=p;
                    if(!f) f=prev;
                }
                prev=p;
                p=p->right;
            }
            else{
                mor=p->left;
                while(mor->right && mor->right!=p){
                    mor=mor->right;
                }
                if(mor->right){
                    mor->right=NULL;
                    if(prev->val>p->val){
                        s=p;
                        if(!f) f=prev;
                    }
                    prev=p;
                    p=p->right;
                }
                else{
                    mor->right=p;
                    p=p->left;
                }
            }
        }
        swap(f->val, s->val);
    }
};

int main(int argc, char const *argv[])
{
    vector<int> v{2,1,INT_MIN,INT_MIN,3};
    queue<TreeNode*> q;
    TreeNode a{v[0]};
    q.push(&a);
    for(int i=1; i<v.size();){
        TreeNode* tn=q.front();
        q.pop();
        if (v[i]!=INT_MIN)
        {
            tn->left=new TreeNode(v[i]);
            q.push(tn->left);
        }
        ++i;
        if(i<v.size() && v[i]!=INT_MIN){
            tn->right=new TreeNode(v[i]);
            q.push(tn->right);
        }
        ++i;
    }
    Solution abc;
    abc.recoverTree(&a);
    return 0;
}