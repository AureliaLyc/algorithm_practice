# Binary Tree Maximum Path Sum
==
Given a binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path does not need to go through the root.

For example:
Given the below binary tree,
```
       1
      / \
     2   3
```
Return 6.

## 这看起来是一个递归问题。一个树有两个方向，左拿到最大值，和右拿到最大值，是否能连在一起？取决于这个当前root的值是否....
不对，说的是path，不是树，而且也没说是平衡二叉树。
还真不好想呀，为什么？因为目前只能从上到下一条线的遍历，怎么决定应该怎么走？
本题与前面一题非常相似，你猜猜是哪一道题？