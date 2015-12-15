# Search a 2D Matrix II
==
Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
For example,

Consider the following matrix:
```
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
```
Given target = 5, return true.

Given target = 20, return false.

## 理解
这也是二分法查找。先沿着对角线二分查找，找不比给定数小的第一个数。然后在它的行和列里面再进行二分查找。shit，是m＊n的矩阵，可能没有对角线。
选中中间点，矩阵划分为四个部分，确认目标数可能在哪个范围内。
 1. 如果小于中间点，那一定在左上，向左上移动。
 2. 如果大于中间点，就向右下移动。重复1/2步骤，直到找到第一个不小于target的那个坐标。
 3. 此时确认，不是在左下就是在右上。
 4. 在两个块里面寻找
 5. 关键是怎么确认没有。当横纵坐标都汇聚的时候，比较当前值。
 6. 因为是递归，所以速度很慢。
 7. 参考别人的解法，是考虑右上到左下这个对角线，为什么这么考虑？你想想你抓着左上和右下一拉，是不是所谓的中值全在右上到左下这个对角线上？
 8. 因此每次比较都能确定的排除一条边。