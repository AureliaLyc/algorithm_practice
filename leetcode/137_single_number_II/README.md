# Single number II
==
Given an array of integers, every element appears three times except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

## 理解
这个是否像上一个那样需要做bit上的运算？xor是不行。还有什么？怎么能让三个数变成0？
完全不会做，看了讨论区，知道了这道题代表一类题，其原理就是用bit来表示一个数字。