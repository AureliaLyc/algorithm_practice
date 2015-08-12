# Symmetric Tree
==
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center). <br>

For example, this binary tree is symmetric:
```
    1
   / \
  2   2
 / \ / \
3  4 4  3
```
But the following is not:
```
    1
   / \
  2   2
   \   \
   3    3
```

## 理解
* 遍历法是将一个level上所有的node，包括NULL都放入一个容器，然后统一进行比较
* 递归法是判断两个node是否左右对称。这个方法很奇妙