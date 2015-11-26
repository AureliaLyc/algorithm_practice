/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        while(root){
            _parent.push_back(root);
            root=root->left;
        }
    }

    /** @return whether we have a next smallest number */
    // check if there is next, if there is, set _cur. if not, return false.
    bool hasNext() {
        if(!_parent.empty()){
            _cur=_parent.back();
            if(_cur->right){
                TreeNode* tn=_cur->right;
                while(tn){
                    _parent.push_back(tn);
                    tn=tn->left;
                }
            }
            else{
                _parent.pop_back();
                TreeNode* tn=_cur;
                while(!_parent.empty()){
                    TreeNode* pt=_parent.back();
                    if(pt->left==tn) break;
                    _parent.pop_back();
                    tn=pt;
                }
            }
            return true;
        }
        return false;
    }

    /** @return the next smallest number */
    int next() {
        return _cur->val;
    }
    vector<TreeNode*> _parent;
    TreeNode* _cur;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        while(root){
            _stack.push_back(root);
            root=root->left;
        }
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !_stack.empty();
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* tn=_stack.back();
        _stack.pop_back();
        int res=tn->val;
        tn=tn->right;
        while(tn){
            _stack.push_back(tn);
            tn=tn->left;
        }
        return res;
    }
    vector<TreeNode*> _stack;
};
