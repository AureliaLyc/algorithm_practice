# Find Minimum in Rotated Sorted Array II
==
Follow up for "Find Minimum in Rotated Sorted Array":
What if duplicates are allowed?

Would this affect the run-time complexity? How and why?
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element.

The array may contain duplicates.

## 理解
肯定会更复杂。因为选择左右中三个点后，如果三个值相等，无法知道向左还是向右那怎么办？递归下去？先写个递归？
我这个递归，跟线性查找没区别。所以还是用限行查找更好一些？我看未必。因为我的方法会试图在后续里面继续用二分法查找。但空间的确更吃亏了。
