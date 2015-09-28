# Search in Rotated Sorted Array
==
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

## 理解
本来可以用二分法查找，但因为被切断了，所以无法用二分法查找，但因为其仍然是有一定的规律的，所以一定有一个办法可以找到.
我的想法就是，先选择mid，看它是位于哪里，最容易判断的就是在完全排序的那边