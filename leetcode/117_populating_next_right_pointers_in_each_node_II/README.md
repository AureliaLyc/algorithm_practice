# Populating Next Right Pointers in Each Node II
==
Follow up for problem "Populating Next Right Pointers in Each Node".

What if the given tree could be any binary tree? Would your previous solution still work?

Note:

 **You may only use constant extra space.**
For example,
Given the following binary tree,
```
         1
       /  \
      2    3
     / \    \
    4   5    7
```
After calling your function, the tree should look like:
```
         1 -> NULL
       /  \
      2 -> 3 -> NULL
     / \    \
    4-> 5 -> 7 -> NULL
```

## 理解
这种题人工做非常简单，难点在于如何将其变为代码。
一共需要四个指针。
第一个是当前层的，他的next如果为空，意味着当前层结束了，也意味着总循环结束。
第二个指针是下一层的第一个有效指针，用于当第一层结束后接下来的node。
第三个指针为当前下一层指针，第四个是当前下一层下一个指针。