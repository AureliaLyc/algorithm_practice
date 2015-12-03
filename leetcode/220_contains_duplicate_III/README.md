# Contains Duplicate III
==
Given an array of integers, find out whether there are two distinct indices i and j in the array such that the difference between nums[i] and nums[j] is at most t and the difference between i and j is at most k.

## 理解
试了两下，大概明白是什么意思了<br>
给你一个区间j-i<=k，然后从头到尾扫描一下，看看有没有两个数相差小于等于t的。也就是说要找出k个连续数之间的最大值和最小值。看看差有多大。
被这道题弄晕了，不做了。这道题题意很不好理解。