# Balanced Binary Tree
==
Given a binary tree, determine if it is height-balanced. <br>

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1. <br>

这个问题仍然要递归的进行。看深度，深度差是否超过1. 这道题没有这么简单，单纯看root的左右两个node的深度是否平衡？等它返回的时候，可能是相等，但没准在左node下面某个地方已经不平衡了，这怎么办？所以说，这一个深度优先的遍历。
* 需要遍历，进入left，弹出left，进入right，弹出right后，知道左右两边的深度，知道当前root是否是平衡的
* 如果不是平衡的，要返回false，而这个false会导致当前堆栈全部的返回。也就是所有进一步调用函数的地方需要检查这个返回值。
