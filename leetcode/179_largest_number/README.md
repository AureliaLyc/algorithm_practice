# Largest Number
==
Given a list of non negative integers, arrange them such that they form the largest number.

For example, given [3, 30, 34, 5, 9], the largest formed number is 9534330.

Note: The result may be very large, so you need to return a string instead of an integer.

## 理解
这应该是在对字符串进行排序，规则就是从左向右比较
 1. 如果有，那大的那个大
 2. 如果有一个没有，那没有的那个大