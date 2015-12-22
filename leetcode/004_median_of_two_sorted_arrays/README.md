# Median of Two Sorted Arrays
==
There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

## 理解
最直接的方法当然是做一次merge，然后直接拿出中值。可这样的复杂度是m＋n，与题意不符。那么就要试着用二分法找到中值。
中值是说，两个数组里面，比这个数少的和比这个数多的一样。