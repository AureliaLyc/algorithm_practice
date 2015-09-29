# Remove Duplicates from Sorted List II
==
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.

For example,
```
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.
```

## 理解
 * 主要是针对最开始遇到重复，怎么处理这四个指针
 * 前进后，两种情况又怎么处理

所以这是一个考察想的是否全面的一个问题
 * 第二种方法是又想了一些时间，得到的结果。与上面不同的是，每次拿到node都试图放入一个新的list，而不是在原有的list上面修改。好处就是code减少了好多，而且逻辑更清晰了。值得品味