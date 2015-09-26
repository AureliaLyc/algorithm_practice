# Word Search
==

Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

For example,
Given board =
```
[
  ["ABCE"],
  ["SFCS"],
  ["ADEE"]
]
```
word = "ABCCED", -> returns true,
word = "SEE", -> returns true,
word = "ABCB", -> returns false.

## 理解
如果寻找一个字符是否在里面，那就是遍历。
如果给定一个位置，寻找第二个，那就是上下左右四个位置看看
如果给定一条线了，那就要看看四个位置中，在那些没用过的里面选择
需要注意，不要越界。感觉有点笨