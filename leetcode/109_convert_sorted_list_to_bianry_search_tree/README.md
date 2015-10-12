# Convert Sorted List to Binary Search Tree
==
Given a singly linked list where elements are sorted in ascending order, convert it to a height balanced BST.

## 理解
关键是找到头，尾，中间点。我记得前面的easy题目里面用了一个很巧妙的找list中点的方法，给忘了。<br>
 * 第一种方法因为每次都要查找中点，会比较慢。最初我就想到了，只不过想试试看速度到底怎么样
 * 第二种方法，先数一遍。