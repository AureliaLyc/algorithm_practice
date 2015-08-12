
#include <vector>
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
    void build( TreeNode* root, int depth, std::vector<std::vector<int> > &v){
        if (root)
        {
            if (depth == v.size() )
            {
                vector<int> t;
                v.push_back(t);
            }
            v[depth].push_back( root->val );
            build( root->left, depth+1, v );
            build( root->right, depth+1, v);
        }
    }

    vector<vector<int> > levelOrderBottom(TreeNode* root) {
        vector<vector<int> > res;
        int depth = 0;
        build( root, depth, res );
        vector<vector<int> >::reverse_iterator rb = res.rbegin(), re = res.rend();
        return vector<vector<int> >( rb, re );
    }

    vector<vector<int> > levelOrderBottom(TreeNode* root){
        vector<vector<int> > v;
        if (root)
        {
            queue<TreeNode*> q;
            q.push(root);
            vector<int> t;
            while(!q.empty()){
                int size = q.size();
                t.clear();
                for (int i = 0; i < size; ++i)
                {
                    TreeNode* node = q.front();
                    q.pop();
                    if (node->left)
                    {
                        q.push(node->left);
                    }
                    if (node->right)
                    {
                        q.push(node->right);
                    }
                    t.push_back(node->val);
                }
                v.push_back(t);
            }
        }
        return v;
    }
};

int main(int argc, char const *argv[])
{
    TreeNode a(1);
    Solution sol;
    sol.levelOrderBottom(&a);
    return 0;
}