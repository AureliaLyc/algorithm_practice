# Kth Largest Element in an Array
==
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

For example,
```
Given [3,2,1,5,6,4] and k = 2, return 5.
```
Note: <br>
You may assume k is always valid, 1 ≤ k ≤ array's length.

## 理解
这个肯定不能用sort然后取第几个数的方法，那样的话就不是问题的关键了。
这应该是用quicksort的方法，随机找一个数进行分组，如果大的部分恰好是k－1个数，那当前这个pivot就是要找的。如果右边的这边多余k－1个，那就在多的这边继续找kth。如果右边这边少于k－1个，那就要在左边来找，但此时找的就需要计算出来。对着quicksort那一章的伪代码写的。看起来还是无法一次写正确。明天在公司的时候再写一遍。