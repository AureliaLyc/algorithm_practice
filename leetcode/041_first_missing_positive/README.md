# First Missing Positive
==
Given an unsorted integer array, find the first missing positive integer.

For example,
Given [1,2,0] return 3,
and [3,4,-1,1] return 2.

Your algorithm should run in O(n) time and uses constant space.

## 理解
给定乱序数组，如果你把它排序好，在大于0的这右半部分，缺少的第一个数是什么？既然在问正数部分，这就有意思了，意味着负数不符合它的算法，只能立即排除。那只能是bit运算，否则
 1. 知道最大的那个数是什么
 2. 知道正数有几个。如果正数的个数与最大数相等，那么就是最大数＋1
 3. 如果不等，少了几个就是缺了几个数。
 4. shit，数字还可以重复！！
 5. 首先，有效数字一定少于数组长度
 6. 每次遇到一个数，我就把它放到相应的位置上不就得了？
 7. 又是一道我自己解开的一道hard。