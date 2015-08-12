# Binary Tree Level Order Traversal II
==
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root). <br>

For example:<br>
Given binary tree {3,9,20,#,#,15,7},
```
    3
   / \
  9  20
    /  \
   15   7
```
return its bottom-up level order traversal as:
```
[
  [15,7],
  [9,20],
  [3]
]
```
这个问题我想还是跟深度相关，判断当前元素的深度，pushback到相应的vector里面。