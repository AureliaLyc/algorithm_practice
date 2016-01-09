#include <stack>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void recoverTree(TreeNode* root) {
        stack<TreeNode*> stak;
        TreeNode* p=root;
        TreeNode* f=NULL, *s=NULL;
        TreeNode* prev=NULL;
        while(true){
            while(p){
                stak.push(p);
                p=p->left;
            }
            if(stak.empty()) break;
            p=stak.top();
            stak.pop();
            if(prev && prev->val>p->val){
                if(f) {
                    s=p;
                    break;
                }
                f=prev;
                s=p;
            }
            prev=p;
            p=p->right;
        }
        swap(f->val, s->val);
    }
};

int main(int argc, char const *argv[])
{
    TreeNode t1(2);
    TreeNode t2(3);
    TreeNode t3(1);
    t1.left=&t2;
    t1.right=&t3;
    Solution abc;
    abc.recoverTree(&t1);
    return 0;
}

void inorder_traverse(TreeNode* root){
    TreeNode* p=root;
    stack<TreeNode*> stak;
    while(p){
        while(p->left){
            if (p!=stak.top())
            {
                stak.push(p);
            }
            else{
                p=stak.top();
                stak.pop();
                break;
            }
            p=p->left;
        }
        visit(p);
        if (p->right)
        {
            p=p->right;
        }
        else{
            p=stak.top();
        }
    }
}

void inorder_traverse(NODE * T)
{
        NODE * p = T;
        while (1) {
                while (p) {
                        PUSH(p);
                        p = p->L;
                }
                if (!(p = POP()))
                        break;
                visit(p);
                p = p->R;
        }
}

void morris(TreeNode* root){
    TreeNode* p=root;
    TreeNode* prev=NULL;
    while(p){
        if (!p->left)
        {
            printf("%d\n", p->val);
            p=p->right;
        }
        else{
            prev=p->left;
            while(prev->right && prev->right!=p){
                prev=prev->right;
            }

            if (prev->right)
            {
                prev->right=NULL;
                printf("%d\n", p->val);
                p=p->right;
            }
            else{
                prev->right=p;
                p=p->left;
            }
        }
    }
}

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
        TreeNode* prev=nullptr;
        TreeNode* f=nullptr;
        TreeNode* s=nullptr;
        while(p){
            if(!p->left){
                if(prev && prev->val>p->val){
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
                    if(prev && prev->val>p->val){
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