# Two Sum
==
Given an array of integers, find two numbers such that they add up to a specific target number. <br>

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based. <br>

You may assume that each input would have exactly one solution.<br>

Input: numbers={2, 7, 11, 15}, target=9 <br>
Output: index1=1, index2=2 <br>

## 理解
1. 数组不一定是排序好的。
2. 先排序后找？
3. 放入map，边放边找？