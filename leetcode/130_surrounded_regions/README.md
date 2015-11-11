# Surrounded Regions
==
Given a 2D board containing 'X' and 'O', capture all regions surrounded by 'X'.

A region is captured by flipping all 'O's into 'X's in that surrounded region.

For example,
```
X X X X
X O O X
X X O X
X O X X
```
After running your function, the board should be:
```
X X X X
X X X X
X X X X
X O X X
```

## 理解
这个与以前那个一行或一列有0，就全部设为0的题有点类似。嗯，有难度，应该怎么考虑呢？
边上的O属于不变的，由它是如何带动其它O也变成不变的呢？如果它的上下左右有O，那这个O也变成不变的。但我的目的不是找到这些O，而是找到那些需要变化的O。

看了tag，是union-find的问题，我在看Algorithims相关的章节。学习完了再回来做这道题。

最终明白了以下两点：
 1. 最初的做法对于本题是正确的，唯一不足是因为第一次遇到stack overflow后，认为即便从中间断开，让搜索可以及时终止，但如果矩阵足够大，递归的办法仍然会失败。但其实如果对问题的规模有个大概的估计，应该是可以的。毕竟只考虑最坏情况，那递归的方法就不用使用了。
 2. union－find算是明白了。基本思想是用一个数组来建立一组树，如果发现两个树有连接，则直接merge两个树。这个merge是非常迅速的。另外，在find的时候，可以进行优化，从而加快后续的查找，就是让所有当前节点到root的节点，都直接指向root。