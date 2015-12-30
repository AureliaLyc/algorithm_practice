# Merge Intervals
==
Given a collection of intervals, merge all overlapping intervals.

```
For example,
Given [1,3],[2,6],[8,10],[15,18],
return [1,6],[8,10],[15,18].
```

## 理解
给这个例子有欺骗性，因为如果三个区间，两两重叠，那就要变成一个。所以这看起来是一个迭代的问题。
这道题如果被要求不能sort，那就难了。不能sort，我就要做partition？那什么时候结束呢？不好说。看起来，真的需要维护一个BST。
考虑一下BST对于几种情况的动作：
 1. 如果插入后，没有任何重叠，这是最简单的，立刻返回迎接下一个
 2. 如果发现要插入的start小于某个node的end，那就是要merge，此时改变该node的end值。然后检查目前node的值与parentNode的start的关系
 3. 如果无重叠，返回，等待下一个。
 4. 如果有重叠，麻烦了：
 5. 先吸收右孩子，吸收完，吸收parent。

第二轮的时候写这个BST的。