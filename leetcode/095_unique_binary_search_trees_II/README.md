# Unique Binary Search Trees II
==
Given n, generate all structurally unique BST's (binary search trees) that store values 1...n.

For example,
Given n = 3, your program should return all 5 unique BST's shown below.
```
   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
```

## 理解
这个问题如果用vector，会很好解决，因为vector的复制容易。如果生成BST，每次改变，怎么通知上面需要变化？显然不可能。tag里面说这是动态规划的问题，很奇怪，不理解为何动态规划能解决这样的问题。<br>
不能用从上到下的方法，因为复制这个动作非常难做，或者说非常让人不愿意写copy的动作。这里有个关键的事情，就是某两个tree的左右子tree可以是共享的。我最初是没想到这一点的。因此无法写出合适的递归。第二点就是我最初希望从顶开始产生node，但因为不知道有多少顶，因此也无法写出合适的算法。<br>
现在的程序里面，用了一个cache来缓存已经产生过的trees。
