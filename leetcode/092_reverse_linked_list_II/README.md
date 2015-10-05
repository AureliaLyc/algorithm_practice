# Reversed Linked List II
==
Reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list.

## 理解
是如果将m到n这个子list拿出来，然后翻转，然后再放回去。关键是抓住几个重要的节点。