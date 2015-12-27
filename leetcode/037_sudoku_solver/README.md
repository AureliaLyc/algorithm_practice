# Sudoku Solver
==
Write a program to solve a Sudoku puzzle by filling the empty cells.

Empty cells are indicated by the character '.'.

You may assume that there will be only one unique solution.

## 理解
真是对不起，看看四个月前写的36题，好幼稚呀。如果我面试别人看到别人这么写，我一定不让他通过！怪不得自己以前面试总是不过呢。
这个题除了不断的试错，我还真想不出来什么简单方法。我先试着每次都检查哪些数字可以用，而不是先存下来备用。看看速度如何。速度是40ms。我看别人有先申请三个矩阵，用于标记是否用过某个数字。这的确是个好方法，可以极其迅速的拿到候选数字。
其实这道题太唬人了。这根本算不上hard。就是最简单的backtracking。