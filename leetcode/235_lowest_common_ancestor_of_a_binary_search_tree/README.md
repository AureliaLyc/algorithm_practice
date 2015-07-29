Lowest Common Ancestor Of A Binary Search Tree
==

Given a binary search tree(BST), find the lowest common ancestor(LCA) of two given nodes in the BST. <br>
According to the definition of LCA:"The LCA is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself)."

这里关键是要知道二叉搜索树(BST)的特性，最主要的是对任意节点，左子结点<自己<右子结点。
那么关键问题变为，哪个节点作为root时，它位于两个节点值的中间呢？如果在中间，它就是要找的点了。
同时，为了确保输入的两个节点的值顺序，需要做一下检测。

这里复习一下BST相关的函数
```cpp
TreeNode* findNode(TreeNode* root, TreeNode* tar){
    if( root->val == tar->val ){
        return root;
    }
    if( root->val > tar->val ){
        return findNode(root->left, tar);
    }
    else{
        return findNode(root->right, tar);
    }
}
```
