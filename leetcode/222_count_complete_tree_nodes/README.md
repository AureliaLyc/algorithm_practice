# Count Complete Tree Nodes
==
Given a complete binary tree, count the number of nodes.

## 理解
看起来就是要寻找从哪里开始深度是一样的。是不是可以用二分法查找呢？我的二分法查找代码写的不简洁。看了写的简洁的，速度可以达到70ms左右。将函数换成for循环，竟然可以提高10ms多。看来尽量在一个函数内完成。再次做的时候，希望可以写出更加简洁的代码。