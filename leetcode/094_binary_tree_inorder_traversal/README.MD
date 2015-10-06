# Binary Tree Inorder Traversal
==
Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
```
   1
    \
     2
    /
   3
```
return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?

## 理解
先写一个递归的。模拟stack的应该也是最基本的。真正算不上中等难度。在看了别人的解法后，看见了所谓的[Morris Traversal](http://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/)方法。其根本的想法是建立一个环状结构，并在遇到环状结构时，打破环状结构，也就是还原原来的结构。
[这个人](http://www.cnblogs.com/AnnieKim/archive/2013/06/15/MorrisTraversal.html)的博客写的也很好，很清晰的解释了Morris算法的原理。
[还有这个人的](http://ju.outofmemory.cn/entry/107746). 需要复习一下。