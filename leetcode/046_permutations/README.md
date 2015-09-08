# Permutations
==
Given a collection of numbers, return all possible permutations.

For example,
```
[1,2,3] have the following permutations:
[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], and [3,2,1].
```
## 理解
这类似一个树，需要对整个树进行遍历。根节点就是原始字符串了，每一次变化，都要放入一次，并且要复原。