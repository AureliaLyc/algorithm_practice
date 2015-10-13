# Flatten Binary Tree to Linked List
==
Given a binary tree, flatten it to a linked list in-place.

For example,
Given
```
         1
        / \
       2   5
      / \   \
     3   4   6
```
The flattened tree should look like:
```
   1
    \
     2
      \
       3
        \
         4
          \
           5
            \
             6
```

## 理解
把left拿过来，放到right 上，找到这个left的最右，指向root的右