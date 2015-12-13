# Product of Array Except Self
==
Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Solve it without division and in O(n).

For example, given [1,2,3,4], return [24,12,8,6].

Follow up:
Could you solve it with constant space complexity? (Note: The output array does not count as extra space for the purpose of space complexity analysis.)

## 理解
我第一步想到的是，先从左到右乘一次，然后从右到左乘一次。然后二者相乘得到结果。
在此基础上，看看如何能消除中间数组？题目说了，输出数组不算在空间复杂度内。这个让我吃亏了，我没看见说是输出数组，以为只能用中间变量来做。