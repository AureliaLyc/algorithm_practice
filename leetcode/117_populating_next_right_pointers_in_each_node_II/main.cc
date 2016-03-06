/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root){
            TreeLinkNode* curRoot=root;
            TreeLinkNode* lowFirst=NULL;
            TreeLinkNode* p=NULL;
            do{
                if(curRoot->left){
                    if(p){
                        p->next=curRoot->left;
                    }
                    p=curRoot->right?curRoot->right:curRoot->left;
                    curRoot->left->next=curRoot->right;
                    lowFirst = lowFirst ? lowFirst : curRoot->left;
                }
                else{
                    if(curRoot->right){
                        if(p){
                            p->next=curRoot->right;
                        }
                        p=curRoot->right;
                        lowFirst = lowFirst ? lowFirst : curRoot->right;
                    }
                }
                curRoot=curRoot->next;
            }while(curRoot);
            root=lowFirst;
        }
    }
};

class Solution {
public:
    void connect(TreeLinkNode *root) {
        
        while(root){
            TreeLinkNode* fir=nullptr;
            TreeLinkNode* tn=root;
            TreeLinkNode* pre=nullptr;
            while(tn){
                if(!fir) fir=tn->left?tn->left:tn->right;
                if(pre) pre->next=tn->left?tn->left:tn->right;
                if(tn->left) tn->left->next=tn->right;
                pre=(tn->left||tn->right)?(tn->right?tn->right:tn->left):pre;
                tn=tn->next;
            }
            root=fir;
        }
    }
};