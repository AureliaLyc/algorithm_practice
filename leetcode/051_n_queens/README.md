# N-Queens
==
Given an integer n, return all distinct solutions to the n-queens puzzle.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space respectively.
```
For example,
There exist two distinct solutions to the 4-queens puzzle:

[
 [".Q..",  // Solution 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // Solution 2
  "Q...",
  "...Q",
  ".Q.."]
]
```

## 理解
这是简单的backtracking的问题。关键是如何加快速度。可以用给定的矩阵作为标记，每次都去查询，也可以用一个三维的vector来标记。因为不可能非常的大，所以用了vector来标记，而不是去查询。