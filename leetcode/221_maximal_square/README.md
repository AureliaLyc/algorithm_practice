# Maximal Square
==
Given a 2D binary matrix filled with 0's and 1's, find the largest square containing all 1's and return its area.

For example, given the following matrix:
```
1 0 1 0 0
1 0 1 1 1
1 1 1 1 1
1 0 0 1 0
```

Return 4.
## 理解
我最开始第一感觉是用BFS来搜索。提交后发现速度非常不好，然后想了一下，发现最初认为有好多重复的计算是必须要去除的，因此考虑了几种情况，将速度提高了一倍。但仍然与最好的差了好多。此时感觉应该用动态规划，但一直无法想明白怎么才能用动态规划。我想到了累加，但没有想到要取最小值来进行累加。有了递推公式，这道题立刻就简单明了了。