# Subsets II
==
Given a collection of integers that might contain duplicates, nums, return all possible subsets.

Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
For example,
If nums = [1,2,2], a solution is:
```
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]
```

## 理解
关键是如何确定该不该继续像某个子数组里面继续pushback以产生新的数组，因为很有可能跟之前的重复。如果重复了两次了，证明已经有两个元素位于当前可以插入的数组中，所以size-dupCnt如果等于当前数，那就是目标数组。