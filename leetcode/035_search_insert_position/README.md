# Search Insert Position
==
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
```
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0
```
## 理解
仍然是二分查找的实现。关键是要寻找一个大于等于target的数的位置，所以，这个等于和大于都被right拿着，那left需要向right靠拢，而left拿着的数永远都不会是正确的，除非最后一步while循环被break。