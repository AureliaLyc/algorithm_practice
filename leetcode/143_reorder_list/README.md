# Reorder List
==
Given a singly linked list L: L0→L1→…→Ln-1→Ln, <br>
reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→… <br>

You must do this in-place without altering the nodes' values. <br>

For example, <br>
Given {1,2,3,4}, reorder it to {1,4,2,3}.

## 理解
找到中点和尾巴，从中点翻转后半段，然后互相插入。结束