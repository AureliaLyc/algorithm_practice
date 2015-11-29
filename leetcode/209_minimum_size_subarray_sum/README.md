# Minimum Size Subarray Sum
==
Given an array of n positive integers and a positive integer s, find the minimal length of a subarray of which the sum ≥ s. If there isn't one, return 0 instead.<br>

For example, given the array [2,3,1,2,4,3] and s = 7, <br>
the subarray [4,3] has the minimal length under the problem constraint.

## 理解
晕啊，是问原数组中最短的子数组的和大于给定数。冷静一下！这道题一定是非常简单的！要控制两个位置之间的数字个数。这应该类似动态规划，如果我已经到了2这里，现在值为4，我前进一步，拿到4，和为12，后面就减去两个数，现在f(4)=3; 再前进一步，