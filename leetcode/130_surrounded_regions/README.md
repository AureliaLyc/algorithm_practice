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