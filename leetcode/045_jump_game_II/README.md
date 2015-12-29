# Jump Game II
==
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

```
For example:
Given array A = [2,3,1,1,4]

The minimum number of jumps to reach the last index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)
```

## 理解
最近的这些题，全是DP，greedy，backtracking的问题。看来把这三个问题搞定，面试基本没问题了
这个要做广度优先搜索呀。结果是对的，但超时，可以想像是非常的浪费。看看贪心算法是否可能解决？贪心算法不行，因为无法保证是否能到终点，与0-1背包问题类似。那么考虑动态规划。
嗳！我发现的确是贪心算法，因为不是准确的步长，而是说最大的步长。