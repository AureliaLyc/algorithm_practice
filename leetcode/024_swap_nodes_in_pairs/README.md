# Swap Nodes in Pairs
==
Given a linked list, swap every two adjacent nodes and return its head.<br>

For example,<br>
Given 1->2->3->4, you should return the list as 2->1->4->3.<br>

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.

## 理解
关键是两个，需要一个preNode，否则会断了，第二是需要有个返回的，因为返回的head不是最后一个，无法keep。
