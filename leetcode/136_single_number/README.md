# Single Number
==
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?


## 理解
这是一个好问题啊。如何利用现有的空间？这个vector，遍历后为何就可以改动了？如何记录呢？没做出来，如果不用set／map，在我的感觉里面就需要用bits来做。<br>
看了答案，原来是用xor来做。这对我是一个极大的启发！