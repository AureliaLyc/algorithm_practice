# Validate Binary Search Tree
==
Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

 * The left subtree of a node contains only nodes with keys less than the node's key.
 * The right subtree of a node contains only nodes with keys greater than the node's key.
 * Both the left and right subtrees must also be binary search trees.

## 理解
问题的难点是，如果从顶开始，那么你就不知道左子树的右边子树多大才合适。所以显然应该从底向上。<br>
我第一个程序有点诡异，我竟然先写了一个判断，然后在去找子树的最小值或最大值。这点太不应该了。