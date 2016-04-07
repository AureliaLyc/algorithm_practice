# Missing Number
==
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

For example,
Given nums = [0, 1, 3] return 2.

## 理解
==
最开始想到就是不停的交换。但这解法太简单。不知道在有人提示的情况下是否能想到用xor来解决此类问题？
其根本思想仍然是同一个数xor，结果为0。xor符合交换律。那么一路xor下来，就会得到结果。