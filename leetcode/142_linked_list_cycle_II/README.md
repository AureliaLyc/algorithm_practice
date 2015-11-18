# Linked List Cycle II
==
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

Note: Do not modify the linked list.

Follow up:
Can you solve it without using extra space?

## 理解
不能修改list，那就是只能读，只能遍历。特点就是其中某一个node，是两个node的next。如果本身就是没有尾巴的cycle，那连这个特征都没有。
tag里面还是two pointers.
怎么检查出两个点的值相等？
 1. 如果知道圈在哪里，那就能数出这个圈有多少个。
 2. 终于明白了，继续向下走，肯定二者会在开始的地方相遇