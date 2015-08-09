# Intersection of Two Linked Lists
==
Write a program to find the node at which the intersection of two singly linked lists begins.

For example, the following two linked lists:
```
A:          a1 → a2
                   ↘
                     c1 → c2 → c3
                   ↗
B:     b1 → b2 → b3
```
begin to intersect at node c1.

Notes:
 * If the two linked lists have no intersection at all, return null.
 * The linked lists must retain their original structure after the function returns.
 * You may assume there are no cycles anywhere in the entire linked structure.
 * Your code should preferably run in O(n) time and use only O(1) memory.

这个问题，需要知道长度。
 * 第一种，遍历headA和headB，然后选择较短的那个，开始进行比较，直到有相等的为止
 * 第二种，进行一轮的翻转，可以得到三个链表的长度，可以计算出三段的长度，从而知道从哪里开始。