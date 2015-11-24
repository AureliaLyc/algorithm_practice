# Find Minimum in Rotated Sorted Array
==
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

You may assume no duplicate exists in the array.

## 理解
我开始还想着是链表一样的东西呢，想遍历真个数组找到最小的那个。忽然一想，这不是得用二分查找吗？不然如何利用已经排序的这个条件？感觉好像做过这种题？