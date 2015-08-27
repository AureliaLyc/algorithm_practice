# 3Sum Closest
==
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.
```
    For example, given array S = {-1 2 1 -4}, and target = 1.

    The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```
## 理解
我自己的结果是40ms，最好的是12ms。
究其原因，是因为我试图用binarysearch来寻找，而我又没有好的办法及时推出搜索，因此比单纯的遍历慢。我开始也想单纯的遍历了，但想不到该怎么跳过不该有的组合，结果呢，是最简单的。