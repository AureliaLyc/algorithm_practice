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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size=nums.size();
        TreeNode* root=NULL;
        if(size){
            root=build(nums, 0, size);
        }
        return root;
    }
    TreeNode* build(vector<int>& nums, int start, int end){
        int mid=(start+end)/2;
        TreeNode*root=new TreeNode(nums[mid]);
        root->left= start<mid ? build(nums, start, mid) : NULL;
        root->right= mid+1<end ?build(nums, mid+1, end) : NULL;
        return root;
    }
};