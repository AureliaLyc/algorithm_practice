# Permutations II
==
Given a collection of numbers that might contain duplicates, return all possible unique permutations.

For example,
```
[1,1,2] have the following unique permutations:
[1,1,2], [1,2,1], and [2,1,1].
```
## 理解
花了两个小时才找到描述我的想法的code。还是要生成树才能较好的对付这类问题。需要标记已经有哪些数字已经出现在前面，哪些数字是不能重复的。然后用backtracking的方法，逐渐的遍历到树的叶子结点上。