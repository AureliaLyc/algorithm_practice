# Reverse Nodes in k-Group
==
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

You may not alter the values in the nodes, only nodes itself may be changed.

Only constant memory is allowed.

For example,
```
Given this linked list: 1->2->3->4->5

For k = 2, you should return: 2->1->4->3->5

For k = 3, you should return: 3->2->1->4->5
```

## 理解
看第二个例子，后两个没有翻转，意味着应该先数完再翻。需要几个指针？
 1. 需要最左边一个（用来准备指向下一个翻转过来的node）；
 2. 接下来的一个，用于准备翻转的head
 3. 向前数k个，作为tail，也是翻转后的head
 4. k个后面的那个，准备下次翻转。