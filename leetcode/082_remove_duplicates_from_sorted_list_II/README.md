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
<br>
 第二轮中，应该是因为自己的品味有所提高，一直拒绝写啰嗦的代码，搞了一个多小时才弄完，如果不debug，估计还要更久。如果debug，应该很快就写完了。目前这个代码应该是最简单的了。根本思想是先找到不等的状态，一共两种，r到末尾了，或者值真的不等。此时有两种状态：
  1. 如果r恰好是下一个l的下一个node，那l就要被放进去
  2. 否则，让l跳到r上，从而忽略[l－r)之间的所有node