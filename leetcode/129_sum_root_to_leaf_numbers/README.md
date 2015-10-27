# Sum Root to Leaf Numbers
==
Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents the number 123.

Find the total sum of all root-to-leaf numbers.

For example,
```
    1
   / \
  2   3
```
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = 12 + 13 = 25.

## 理解
每一个叶子节点就是一个最终数的最后一位。每深入一次，root就要乘以10，而返回时就要减去直接除以10.
哦，还有其他情况，例如，只有一个叶子节点，那它本身就不算一个叶子节点。

嘿，还是有点难度。因为必须是叶子节点才是要累加的，其他的不能累加。如果不想写复杂代码，就要更加仔细想清楚。否则还是先写啰嗦点的代码。然后进行精简。毕竟我还没到facebook那种程度。