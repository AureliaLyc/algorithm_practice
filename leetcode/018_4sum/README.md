## 4Sum
==
Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.<br>

Note:<br>
* Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
* The solution set must not contain duplicate quadruplets.
```
    For example, given array S = {1 0 -1 0 -2 2}, and target = 0.

    A solution set is:
    (-1,  0, 0, 1)
    (-2, -1, 1, 2)
    (-2,  0, 0, 2)
```
## 理解
感觉跟前面几个sum的题是一样的。试试看。
我现在觉得，这种题对于是否用binarysearch意义不是太大。如果是找相等，似乎用binaryseach可以，如果找相近，是不能用binarysearch的。