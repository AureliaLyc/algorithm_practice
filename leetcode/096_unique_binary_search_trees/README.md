# Unique Binary Search Trees
==
Given n, how many structurally unique BST's (binary search trees) that store values 1...n?

For example,
Given n = 3, there are a total of 5 unique BST's.

```
   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
```

## 理解
对于树，需要深刻的理解如何才是递归。将一个大问题不停的转化为小问题，直到变成最简单的问题。另一方面，动态规划的特点也反映在这里，每一个点的状态，与其他点无关。<br>
2016 Mar 02 第二轮的时候，没费力，就写出比之前好很多的算法。