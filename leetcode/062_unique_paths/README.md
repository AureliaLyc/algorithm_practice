# Unique Paths
==
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

Note: m and n will be at most 100.

## 理解
感觉应该有一个公式来直接计算出来。怎么表达这个结构呢？第一排和第一列的值已经是知道的了，都是1，那么步数其实就是对角线上两个格子的和。