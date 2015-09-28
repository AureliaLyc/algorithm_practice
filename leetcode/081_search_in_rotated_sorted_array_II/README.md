# Search in Rotated Sorted Array II
==
Follow up for "Search in Rotated Sorted Array":
What if duplicates are allowed?

Would this affect the run-time complexity? How and why?

Write a function to determine if a given target is in the array.

## 理解
其实我想将重复的去掉，然后用前面的办法来找。这会增加复杂度，因为要先遍历一遍，这比二分查找的复杂度高。所以不行。<br>
之前通过比大小，就能知道哪边是排序好的，但现在因为有重复的，就不好判断了。因为如果一个数字横跨三个位置，那到底哪边才是？不好说啊
 __注意一下为什么那个诡异的相加除2能工作__