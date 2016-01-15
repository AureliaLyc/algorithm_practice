# Copy List With Random Pointer
==
A linked list is given such that each node contains an additional random pointer which could point to any node in the list or null.

Return a deep copy of the list.

## 理解
呵呵，好厉害的题目。最简单的笨方法当然就是给这些node编号。但肯定不能这么做，是吧
先吃饭去。晕，是链表，不是二叉树呀。
用hashmap的方法做完了，但看别人说有空间复杂度为O(1)的方法。还得想想呀。
更聪明的做法是，将新的链表内嵌到原始链表中，赋值完random后，再复原原始链表，拆出新的链表
这次不准备写，下次再写。
我试图修改过原始链表，但没想到这个方向上。