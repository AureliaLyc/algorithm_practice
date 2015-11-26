# Binary Search Tree Iterator
==
Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

Calling next() will return the next smallest number in the BST.

Note: next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree.

## 理解
再去看看BST那一章再回来做！昨晚看了一遍BST，感觉算是明白了基本性质。
 1. 最小的那个，就在最左子树为空的那个节点
 2. 最大的那个，就在最右子树为空的那个节点
 3. 某个节点的后驱节点，
    1. 如果其有右子树，那为右子树最左节点
    2. 如果没有右子树，那为它所在左子树的根节点。

那么这道题既然要求memory为O(h)，那就是说可以保存parent在一个栈里面。复杂度为O(1)，那就是说